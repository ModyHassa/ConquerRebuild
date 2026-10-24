/* Decompiled by Ghidra 12.1.4 | program: Arenic.dll
   image base: 140a80000 | functions: 1488 */


void FUN_140a81010(void)

{
  log_InlineLogERROR(&DAT_140aa7368);
  return;
}




undefined4 FUN_140a81040(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}




bool FUN_140a81060(longlong param_1)

{
  return *(int *)(param_1 + 0x24) == 7;
}




longlong FUN_140a81070(longlong param_1)

{
  int iVar1;
  uint7 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x24);
  uVar2 = (uint7)(uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 10) && (iVar1 != 0xb)) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}




int FUN_140a81090(longlong param_1)

{
  __time64_t _Var1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return 0;
  }
  _Var1 = _time64((__time64_t *)0x0);
  return (int)_Var1 - *(int *)(param_1 + 0x50);
}




undefined4 FUN_140a810c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}




void FUN_140a810d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}




undefined4 FUN_140a810e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}




void FUN_140a810f0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}




undefined4 FUN_140a81100(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}




void FUN_140a81110(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_2;
  return;
}




void FUN_140a81120(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}




undefined8 FUN_140a81130(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
  case 3:
  case 4:
    return 2;
  case 5:
    return 3;
  case 6:
    return 4;
  case 7:
  case 8:
  case 9:
    return 5;
  default:
    return 0xffffffff;
  }
}




void FUN_140a811a0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}




undefined4 FUN_140a811b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}




undefined4 FUN_140a811c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}




void FUN_140a811d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}




int FUN_140a81210(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 4) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




undefined4 FUN_140a81260(longlong param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),(uint)(param_2 + *(int *)(param_1 + 4)) <= uVar1 / 1000);
}




ulonglong FUN_140a812a0(undefined4 *param_1,int param_2)

{
  ulong uVar1;
  ulonglong in_RAX;
  
  if (param_1[1] != 0) {
    uVar1 = tq::TimeGet(0);
    in_RAX = (ulonglong)(uint)param_1[1];
    if ((uint)(param_2 + param_1[1]) <= uVar1 / 1000) {
      param_1[1] = 0;
      *param_1 = 0;
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined * FUN_140a81300(void)

{
  if ((DAT_140ab7438 & 1) == 0) {
    DAT_140ab7438 = DAT_140ab7438 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7430,"CArenicInfo");
    atexit((_func_5014 *)&LAB_140aa6fc0);
  }
  return &DAT_140ab7430;
}




void FUN_140a81360(__uint64 param_1)

{
  if ((DAT_140ab7438 & 1) == 0) {
    DAT_140ab7438 = DAT_140ab7438 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7430,"CArenicInfo");
    atexit((_func_5014 *)&LAB_140aa6fc0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a813b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140ab7430,param_1);
  return;
}




void FUN_140a813c0(void *param_1)

{
  if ((DAT_140ab7438 & 1) == 0) {
    DAT_140ab7438 = DAT_140ab7438 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7430,"CArenicInfo");
    atexit((_func_5014 *)&LAB_140aa6fc0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a81415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140ab7430,param_1);
  return;
}




void FUN_140a81420(void *param_1)

{
  if ((DAT_140ab7438 & 1) == 0) {
    DAT_140ab7438 = DAT_140ab7438 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7430,"CArenicInfo");
    atexit((_func_5014 *)&LAB_140aa6fc0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a81475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140ab7430,param_1);
  return;
}




undefined4 * FUN_140a81480(undefined4 *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
  }
  if (param_4 == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
  }
  *param_1 = param_2;
  *(longlong *)(param_1 + 2) = param_3;
  *(longlong *)(param_1 + 4) = param_4;
  param_1[9] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[7] = 0;
  param_1[8] = 100;
  param_1[6] = 0;
  return param_1;
}




undefined4 * FUN_140a81580(undefined4 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  
  if ((DAT_140ab7438 & 1) == 0) {
    DAT_140ab7438 = DAT_140ab7438 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7430,"CArenicInfo");
    atexit((_func_5014 *)&LAB_140aa6fc0);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140ab7430,0x68);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_140a81480(puVar1,param_1,param_2,param_3);
  }
  if (puVar1 == (undefined4 *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368,"IF_NOT",&DAT_140aa74d8,"f:\\version\\cqserver-78.0.11-1204\\modules\\arenic\\src\\arenicinfo.cpp",0x29);
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}




void FUN_140a81650(longlong param_1)

{
  FUN_140a81130(*(undefined4 *)(param_1 + 0x24));
  return;
}




void FUN_140a81660(undefined4 *param_1,int param_2)

{
  int iVar1;
  __time64_t _Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  CMsg local_418 [1040];
  
  iVar1 = param_1[9];
  if (iVar1 != param_2) {
    if (iVar1 == 1) {
      *(undefined8 *)(param_1 + 0x14) = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
    }
    else if (iVar1 == 2) {
      param_1[0xd] = 0;
      param_1[0xc] = 0;
    }
    else if (iVar1 == 7) {
      param_1[0xf] = 0;
      param_1[0xe] = 0;
    }
    else if (iVar1 == 8) {
      param_1[0x11] = 0;
      param_1[0x10] = 0;
    }
    else if (iVar1 == 10) {
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
    }
    switch(param_2) {
    case 0:
    case 5:
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      param_1[6] = 0;
      break;
    case 1:
      _Var2 = _time64((__time64_t *)0x0);
      *(__time64_t *)(param_1 + 0x14) = _Var2;
      FUN_140a81210((longlong)(param_1 + 10));
      break;
    case 2:
      FUN_140a81210((longlong)(param_1 + 0xc));
      break;
    case 7:
      FUN_140a81210((longlong)(param_1 + 0xe));
      break;
    case 8:
      FUN_140a81210((longlong)(param_1 + 0x10));
      break;
    case 10:
      FUN_140a81210((longlong)(param_1 + 0x12));
      break;
    case 0xb:
      param_1[0x13] = 0;
      param_1[0x12] = 0;
    }
    param_1[9] = param_2;
    uVar3 = FUN_140a81130(param_2);
    uVar4 = FUN_140a81130(iVar1);
    if ((int)uVar4 != (int)uVar3) {
      FUN_140a9ebe0(local_418);
      uVar3 = FUN_140a9ecd0((longlong)local_418,6,(int)uVar3);
      if ((char)uVar3 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 2) + 0x18))(*(longlong **)(param_1 + 2),*param_1,local_418);
      }
      FUN_140a9ec30((undefined8 *)local_418);
    }
  }
  return;
}




void FUN_140a81810(uint *param_1)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  if (param_1[0xd] != 0) {
    uVar3 = tq::TimeGet(0);
    if (param_1[0xd] + 0x3c <= uVar3 / 1000) {
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      FUN_140a9ab50(*(longlong *)(param_1 + 4),*param_1);
    }
  }
  if (param_1[0xf] != 0) {
    uVar3 = tq::TimeGet(0);
    if (param_1[0xf] + 10 <= uVar3 / 1000) {
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      uVar1 = param_1[9];
      if (uVar1 != 8) {
        if (uVar1 == 1) {
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0xb] = 0;
          param_1[10] = 0;
        }
        else if (uVar1 == 2) {
          param_1[0xd] = 0;
          param_1[0xc] = 0;
        }
        else if (uVar1 == 7) {
          param_1[0xf] = 0;
          param_1[0xe] = 0;
        }
        else if (uVar1 == 8) {
          param_1[0x11] = 0;
          param_1[0x10] = 0;
        }
        else if (uVar1 == 10) {
          param_1[0xf] = 0;
          param_1[0xe] = 0;
          param_1[0x13] = 0;
          param_1[0x12] = 0;
        }
        FUN_140a81210((longlong)(param_1 + 0x10));
        param_1[9] = 8;
        uVar4 = FUN_140a81130(uVar1);
        if ((int)uVar4 != 5) {
          FUN_140a9ebe0(local_828);
          uVar4 = FUN_140a9ecd0((longlong)local_828,6,5);
          if ((char)uVar4 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 2) + 0x18))(*(longlong **)(param_1 + 2),*param_1,local_828);
          }
          FUN_140a9ec30((undefined8 *)local_828);
        }
      }
      FUN_140a9ebe0(local_418);
      uVar4 = FUN_140a9ec90((longlong)local_418,0xc);
      if ((char)uVar4 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 2) + 0x18))(*(longlong **)(param_1 + 2),*param_1,local_418);
      }
      FUN_140a9ec30((undefined8 *)local_418);
    }
  }
  if (param_1[0x11] != 0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 2) + 0x238))();
    iVar5 = 300;
    if (cVar2 != '\0') {
      iVar5 = 0x78;
    }
    uVar3 = tq::TimeGet(0);
    if (iVar5 + param_1[0x11] <= uVar3 / 1000) {
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      FUN_140a976d0(*(longlong *)(param_1 + 4),*param_1);
    }
  }
  if (param_1[0x13] != 0) {
    uVar3 = tq::TimeGet(0);
    if (param_1[0x13] + 5 <= uVar3 / 1000) {
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      FUN_140a9c030(*(longlong *)(param_1 + 4),*param_1);
    }
  }
  return;
}




exception * FUN_140a81ac0(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_140a81b00(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140a81b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140a81b30(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140a81b90(void)

{
  return;
}




exception * FUN_140a81ba0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_140a81bf0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140a81c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_140a81c30(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_140a81c50(exception *param_1,uint param_2)

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




exception * FUN_140a81cb0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140a81d10(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140a81d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140a81d60(exception *param_1,uint param_2)

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




exception * FUN_140a81dd0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_140a81e30(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140a81e6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140a81e80(exception *param_1,uint param_2)

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




undefined8 FUN_140a81f80(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return 0;
}




bool FUN_140a81fa0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return true;
  }
  uVar5 = FUN_140a9cc40(param_2,4);
  uVar6 = FUN_140a9cc40(param_3,4);
  if ((int)uVar5 != (int)uVar6) {
    uVar5 = FUN_140a9cc40(param_2,4);
    uVar6 = FUN_140a9cc40(param_3,4);
    return (int)uVar6 < (int)uVar5;
  }
  iVar1 = FUN_140a9cf40(param_2);
  iVar2 = FUN_140a9cf40(param_3);
  if (iVar1 != iVar2) {
    uVar3 = FUN_140a9cf40(param_2);
    uVar4 = FUN_140a9cf40(param_3);
    return uVar3 < uVar4;
  }
  uVar5 = FUN_140a9cc40(param_2,3);
  uVar6 = FUN_140a9cc40(param_3,3);
  return (int)uVar5 < (int)uVar6;
}




bool FUN_140a820a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return true;
  }
  uVar5 = FUN_140a9cc40(param_2,6);
  uVar6 = FUN_140a9cc40(param_3,6);
  if ((int)uVar5 != (int)uVar6) {
    uVar5 = FUN_140a9cc40(param_2,6);
    uVar6 = FUN_140a9cc40(param_3,6);
    return (int)uVar6 < (int)uVar5;
  }
  iVar1 = FUN_140a9cf40(param_2);
  iVar2 = FUN_140a9cf40(param_3);
  if (iVar1 != iVar2) {
    uVar3 = FUN_140a9cf40(param_2);
    uVar4 = FUN_140a9cf40(param_3);
    return uVar3 < uVar4;
  }
  uVar5 = FUN_140a9cc40(param_2,3);
  uVar6 = FUN_140a9cc40(param_3,3);
  return (int)uVar5 < (int)uVar6;
}




bool FUN_140a821a0(undefined8 param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  
  if (param_2[2] != param_3[2]) {
    return param_3[2] <= param_2[2];
  }
  bVar1 = param_2[1] < param_3[1];
  if (param_2[1] == param_3[1]) {
    bVar1 = *param_2 < *param_3;
  }
  return bVar1;
}




undefined8 FUN_140a821d0(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (0x77 < param_1) {
    return 4000;
  }
  if (0x6d < param_1) {
    return 0xce4;
  }
  if (99 < param_1) {
    return 0xa8c;
  }
  if (0x59 < param_1) {
    return 0x898;
  }
  if (0x4f < param_1) {
    return 0x708;
  }
  if (0x27 < param_1) {
    uVar1 = 0x5dc;
  }
  return uVar1;
}




longlong FUN_140a82260(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




bool FUN_140a822b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140a822f0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140a82330(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140a82370(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140a823c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a823e2;
  }
  lVar2 = *plVar1;
LAB_140a823e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140a82400(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a82422;
  }
  lVar2 = *plVar1;
LAB_140a82422:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




longlong FUN_140a82440(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a82462;
  }
  lVar2 = *plVar1;
LAB_140a82462:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140a82480(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a824a2;
  }
  lVar2 = *plVar1;
LAB_140a824a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




void FUN_140a826f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x25) == '\0') {
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




void FUN_140a82850(longlong param_1,longlong *param_2)

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




bool FUN_140a82910(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140a82960(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140a829c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140a82a50(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x25) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x25) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x25);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x25);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x25);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x25);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a82a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




bool FUN_140a82b10(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140a82b50(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140a82bc0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ab5fb0);
}




exception * FUN_140a82c30(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_140a82c80(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140a82ee0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ab5fb0);
}




void FUN_140a82f60(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a82f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_140a82ff0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a83012;
  }
  lVar2 = *plVar1;
LAB_140a83012:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140a83030(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a83054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_140a830c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




longlong FUN_140a83100(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void FUN_140a83280(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a832b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140a83320(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a83352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140a833c0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0xc1) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0xc1) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0xc1);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0xc1);
        lVar3 = lVar4;
        lVar4 = *(longlong *)(lVar4 + 0x10);
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0xc1);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0xc1);
    }
    if (*(char *)(param_1[1] + 0xc1) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0xc1) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140a833f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140a83480(longlong *param_1)

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
  if (*(char *)((longlong)plVar2 + 0x25) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x25) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x25);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x25);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x25);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x25);
    }
    if (*(char *)(param_1[1] + 0x25) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x25) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140a834b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140a83680(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140a836b0;
  }
  else {
LAB_140a836b0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140a836d8;
  }
  _invalid_parameter_noinfo();
LAB_140a836d8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




longlong * FUN_140a836f0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140a83720;
  }
  else {
LAB_140a83720:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140a83748;
  }
  _invalid_parameter_noinfo();
LAB_140a83748:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




void FUN_140a837c0(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}




void FUN_140a837f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_140a83820(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_140a813c0((void *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_140a838a0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_140a83990(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140a83a00(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140a83a90(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_140a83b10(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 200)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_1 * 200);
  return;
}




void FUN_140a83b90(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_1 * 0x28);
  return;
}




void FUN_140a83c20(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_140a83d10(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_1 * 0x30);
  return;
}




exception * FUN_140a83de0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




longlong FUN_140a83e10(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void * FUN_140a83ea0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140a83f20(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140a84020(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140a84080(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140a840c0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140a84100(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140a84270(void *param_1,longlong param_2,void *param_3)

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




void FUN_140a842b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 < param_2) {
    do {
      lVar2 = (param_2 + -1) / 2;
      bVar1 = FUN_140a81fa0(&stack0x00000028,*(longlong *)(param_1 + lVar2 * 8),param_4);
      if (!bVar1) break;
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
      param_2 = lVar2;
    } while (param_3 < lVar2);
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  return;
}




void FUN_140a84350(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 < param_2) {
    do {
      lVar2 = (param_2 + -1) / 2;
      bVar1 = FUN_140a820a0(&stack0x00000028,*(longlong *)(param_1 + lVar2 * 8),param_4);
      if (!bVar1) break;
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
      param_2 = lVar2;
    } while (param_3 < lVar2);
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  return;
}




undefined * FUN_140a843f0(void)

{
  if ((DAT_140ab7448 & 1) == 0) {
    DAT_140ab7448 = DAT_140ab7448 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7440,"CArenicSystem");
    atexit((_func_5014 *)&LAB_140aa6fd0);
  }
  return &DAT_140ab7440;
}




void FUN_140a84450(__uint64 param_1)

{
  if ((DAT_140ab7448 & 1) == 0) {
    DAT_140ab7448 = DAT_140ab7448 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7440,"CArenicSystem");
    atexit((_func_5014 *)&LAB_140aa6fd0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a844a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140ab7440,param_1);
  return;
}




void FUN_140a844b0(void *param_1)

{
  if ((DAT_140ab7448 & 1) == 0) {
    DAT_140ab7448 = DAT_140ab7448 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7440,"CArenicSystem");
    atexit((_func_5014 *)&LAB_140aa6fd0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a84505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140ab7440,param_1);
  return;
}




void FUN_140a84510(void *param_1)

{
  if ((DAT_140ab7448 & 1) == 0) {
    DAT_140ab7448 = DAT_140ab7448 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7440,"CArenicSystem");
    atexit((_func_5014 *)&LAB_140aa6fd0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a84565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140ab7440,param_1);
  return;
}




longlong FUN_140a84580(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a845a2;
  }
  lVar2 = *plVar1;
LAB_140a845a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




bool FUN_140a845c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140a84600(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140a84640(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong * FUN_140a84680(longlong *param_1)

{
  FUN_140a82a50(param_1);
  return param_1;
}




longlong FUN_140a846a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a846c2;
  }
  lVar2 = *plVar1;
LAB_140a846c2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140a846e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a84702;
  }
  lVar2 = *plVar1;
LAB_140a84702:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140a84720(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140a84760(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a84782;
  }
  lVar2 = *plVar1;
LAB_140a84782:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140a847a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a847c2;
  }
  lVar2 = *plVar1;
LAB_140a847c2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_140a847e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140a84820(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a84870(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a848a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a848d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a848f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x25) == '\0') {
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




void FUN_140a84950(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a84980(longlong param_1,longlong param_2)

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




void FUN_140a849e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a84a00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140a84a10(longlong *param_1)

{
  FUN_140a82f60(param_1);
  return param_1;
}




longlong FUN_140a84a30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a84a52;
  }
  lVar2 = *plVar1;
LAB_140a84a52:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140a84a70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a84a92;
  }
  lVar2 = *plVar1;
LAB_140a84a92:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140a84ab0(longlong *param_1)

{
  FUN_140a83030(param_1);
  return param_1;
}




longlong FUN_140a84ad0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a84af2;
  }
  lVar2 = *plVar1;
LAB_140a84af2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140a84b10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a84b32;
  }
  lVar2 = *plVar1;
LAB_140a84b32:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140a84b70(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_140a84c70(longlong param_1,longlong param_2)

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




void FUN_140a84cd0(longlong param_1,longlong *param_2)

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




void FUN_140a84da0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0xc1) == '\0') {
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




void FUN_140a84e00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0xc1) == '\0') {
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




void FUN_140a84f10(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_140a84f80(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140a82f60(param_1);
  return param_2;
}




longlong * FUN_140a84fb0(longlong *param_1)

{
  FUN_140a83280(param_1);
  return param_1;
}




void FUN_140a84fd0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a84ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140a85060(longlong *param_1)

{
  FUN_140a83320(param_1);
  return param_1;
}




longlong * FUN_140a85080(longlong *param_1)

{
  FUN_140a833c0(param_1);
  return param_1;
}




void FUN_140a850a0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0xc1) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0xc1) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0xc1);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0xc1);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0xc1);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0xc1);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a850c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140a85140(longlong *param_1)

{
  FUN_140a83480(param_1);
  return param_1;
}




undefined8 * FUN_140a85160(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140a85220(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140a852a0(longlong param_1,longlong param_2)

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




void FUN_140a85300(longlong param_1,longlong *param_2)

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




void FUN_140a85360(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_140a853d0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 200)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_2 * 200);
  return;
}




void FUN_140a85450(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_140a854d0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a85502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140a85570(longlong *param_1)

{
  FUN_140a83320(param_1);
  return param_1;
}




longlong * FUN_140a85590(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140a83030(param_1);
  return param_2;
}




longlong * FUN_140a855c0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140a82a50(param_1);
  return param_2;
}




longlong * FUN_140a855f0(longlong *param_1,longlong param_2)

{
  FUN_140a83680(param_1,param_2);
  return param_1;
}




longlong * FUN_140a85610(longlong *param_1,longlong param_2)

{
  FUN_140a836f0(param_1,param_2);
  return param_1;
}




void FUN_140a85630(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_140a856e0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ab6068);
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 * FUN_140a85760(undefined8 *param_1)

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




undefined8 * FUN_140a857a0(undefined8 *param_1)

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




undefined8 * FUN_140a857e0(undefined8 *param_1)

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




undefined8 * FUN_140a85820(undefined8 *param_1)

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




undefined8 * FUN_140a85860(undefined8 *param_1)

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




void * FUN_140a858f0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140a85930(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140a85970(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140a859f0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140a85ac0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140a85b00(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  
  local_res20[0] = param_4;
  bVar2 = FUN_140a81fa0(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  bVar2 = FUN_140a81fa0(local_res20,*param_3,*param_2);
  if ((bVar2) && (param_3 != param_2)) {
    lVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = lVar1;
  }
  bVar2 = FUN_140a81fa0(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  return;
}




void FUN_140a85ba0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined1 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2;
  while( true ) {
    lVar2 = lVar3 * 2 + 2;
    if (param_3 <= lVar2) break;
    bVar1 = FUN_140a81fa0(&param_5,*(longlong *)(param_1 + lVar2 * 8),*(longlong *)(param_1 + -8 + lVar2 * 8));
    if (bVar1) {
      lVar2 = lVar3 * 2 + 1;
    }
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
    lVar3 = lVar2;
  }
  if (lVar2 == param_3) {
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar3 = param_3 + -1;
  }
  FUN_140a842b0(param_1,lVar3,param_2,param_4);
  return;
}




void * FUN_140a85c50(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140a85c90(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  
  local_res20[0] = param_4;
  bVar2 = FUN_140a820a0(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  bVar2 = FUN_140a820a0(local_res20,*param_3,*param_2);
  if ((bVar2) && (param_3 != param_2)) {
    lVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = lVar1;
  }
  bVar2 = FUN_140a820a0(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  return;
}




void FUN_140a85d30(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined1 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2;
  while( true ) {
    lVar2 = lVar3 * 2 + 2;
    if (param_3 <= lVar2) break;
    bVar1 = FUN_140a820a0(&param_5,*(longlong *)(param_1 + lVar2 * 8),*(longlong *)(param_1 + -8 + lVar2 * 8));
    if (bVar1) {
      lVar2 = lVar3 * 2 + 1;
    }
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
    lVar3 = lVar2;
  }
  if (lVar2 == param_3) {
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar3 = param_3 + -1;
  }
  FUN_140a84350(param_1,lVar3,param_2,param_4);
  return;
}




void FUN_140a85de0(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,undefined1 param_5)

{
  *param_3 = *param_1;
  FUN_140a85ba0((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4,param_5);
  return;
}




void FUN_140a85e10(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,undefined1 param_5)

{
  *param_3 = *param_1;
  FUN_140a85d30((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4,param_5);
  return;
}




longlong FUN_140a85e40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a85e62;
  }
  lVar2 = *plVar1;
LAB_140a85e62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140a85e80(longlong *param_1)

{
  FUN_140a82f60(param_1);
  return param_1;
}




longlong FUN_140a85ea0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a85ec2;
  }
  lVar2 = *plVar1;
LAB_140a85ec2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140a85ee0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a85f02;
  }
  lVar2 = *plVar1;
LAB_140a85f02:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140a85f20(longlong *param_1)

{
  FUN_140a83030(param_1);
  return param_1;
}




longlong FUN_140a85f40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a85f62;
  }
  lVar2 = *plVar1;
LAB_140a85f62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140a85f80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a85fa2;
  }
  lVar2 = *plVar1;
LAB_140a85fa2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140a85fc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a85fe0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a86000(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a86020(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a86040(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a86060(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a86080(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_140a860a0(longlong param_1,ulonglong param_2)

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
      FUN_140a82bc0();
    }
    lVar1 = FUN_140a84b70(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_140a86110(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_140a86140(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140a86140(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_140a86190(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140a86190(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_140a861e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x25);
  while (cVar1 == '\0') {
    FUN_140a861e0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x25);
  }
  return;
}




void FUN_140a86230(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140a86230(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 FUN_140a86280(longlong param_1,ulonglong param_2)

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
      FUN_140a82ee0();
    }
    lVar1 = FUN_140a84f10(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_140a862f0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




longlong * FUN_140a86320(longlong *param_1)

{
  FUN_140a83280(param_1);
  return param_1;
}




longlong FUN_140a86340(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a86362;
  }
  lVar2 = *plVar1;
LAB_140a86362:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140a86380(longlong *param_1)

{
  FUN_140a84fd0(param_1);
  return param_1;
}




longlong * FUN_140a863a0(longlong *param_1)

{
  FUN_140a833c0(param_1);
  return param_1;
}




longlong * FUN_140a863c0(longlong *param_1)

{
  FUN_140a850a0(param_1);
  return param_1;
}




longlong * FUN_140a863e0(longlong *param_1)

{
  FUN_140a83480(param_1);
  return param_1;
}




undefined8 * FUN_140a86400(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140a86470(undefined8 *param_1)

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




undefined8 * FUN_140a864b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140a86530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_5[1];
    *(undefined4 *)(puVar1 + 4) = param_5[2];
    *(undefined1 *)((longlong)puVar1 + 0x24) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x25) = 0;
  }
  return puVar1;
}




undefined8 * FUN_140a865c0(undefined8 *param_1)

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




undefined8 * FUN_140a86600(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a86650(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140a86690(longlong *param_1)

{
  FUN_140a854d0(param_1);
  return param_1;
}




undefined8 * FUN_140a866c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a86700(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140a86740(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140a850a0(param_1);
  return param_2;
}




undefined8 * FUN_140a86770(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140a867b0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140a8681a;
  }
  _invalid_parameter_noinfo();
LAB_140a8681a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_140a86850(longlong *param_1,longlong param_2)

{
  FUN_140a83680(param_1,-param_2);
  return param_1;
}




longlong * FUN_140a86870(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140a868da;
  }
  _invalid_parameter_noinfo();
LAB_140a868da:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140a86910(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140a86970(void)

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




undefined8 * FUN_140a869d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




void FUN_140a86a50(void)

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




void FUN_140a86ab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x18) = 1;
  *(undefined1 *)((longlong)puVar1 + 0xc1) = 0;
  return;
}




void FUN_140a86b20(void)

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
  *(undefined1 *)((longlong)puVar1 + 0x24) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x25) = 0;
  return;
}




void FUN_140a86b80(void)

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




undefined8 * FUN_140a86be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




longlong * FUN_140a86c60(longlong *param_1)

{
  FUN_140a854d0(param_1);
  return param_1;
}




longlong * FUN_140a86c80(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140a84fd0(param_1);
  return param_2;
}




undefined8 * FUN_140a86cb0(undefined8 *param_1)

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




undefined8 * FUN_140a86d00(undefined8 *param_1)

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




undefined8 * FUN_140a86d50(undefined8 *param_1)

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




undefined8 * FUN_140a86da0(undefined8 *param_1)

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




undefined8 * FUN_140a86df0(undefined8 *param_1)

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




void * FUN_140a86e40(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140a86e80(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140a86ec0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_140a86f30(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140a86fa0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140a87000(longlong param_1,undefined4 *param_2)

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




void FUN_140a870b0(longlong *param_1,longlong *param_2,longlong *param_3)

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




void * FUN_140a87180(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140a87230(void *param_1,longlong param_2,void *param_3)

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




void FUN_140a87270(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_140a85b00(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_140a85b00(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_140a85b00(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_140a85b00(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_140a85b00(param_1,param_2,param_3,param_4);
  return;
}




void FUN_140a87350(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_140a85ba0(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1),param_3);
  }
  return;
}




void FUN_140a873d0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res18 [16];
  
  if ((param_1 != param_2) && (plVar4 = param_1 + 1, plVar4 != param_2)) {
    local_res18[0] = param_3;
    do {
      lVar1 = *plVar4;
      bVar2 = FUN_140a81fa0(local_res18,lVar1,*param_1);
      if (bVar2) {
        lVar3 = (longlong)plVar4 - (longlong)param_1 >> 3;
        if (0 < lVar3) {
          memmove_s(plVar4 + (1 - lVar3),lVar3 * 8,param_1,lVar3 * 8);
        }
        *param_1 = lVar1;
      }
      else {
        bVar2 = FUN_140a81fa0(local_res18,lVar1,plVar4[-1]);
        plVar6 = plVar4;
        plVar5 = plVar4;
        if (bVar2) {
          do {
            plVar6 = plVar5 + -1;
            *plVar5 = *plVar6;
            bVar2 = FUN_140a81fa0(local_res18,lVar1,plVar5[-2]);
            plVar5 = plVar6;
          } while (bVar2);
        }
        *plVar6 = lVar1;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != param_2);
  }
  return;
}




void FUN_140a874f0(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_140a85c90(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_140a85c90(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_140a85c90(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_140a85c90(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_140a85c90(param_1,param_2,param_3,param_4);
  return;
}




void FUN_140a875d0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_140a85d30(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1),param_3);
  }
  return;
}




void FUN_140a87650(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res18 [16];
  
  if ((param_1 != param_2) && (plVar4 = param_1 + 1, plVar4 != param_2)) {
    local_res18[0] = param_3;
    do {
      lVar1 = *plVar4;
      bVar2 = FUN_140a820a0(local_res18,lVar1,*param_1);
      if (bVar2) {
        lVar3 = (longlong)plVar4 - (longlong)param_1 >> 3;
        if (0 < lVar3) {
          memmove_s(plVar4 + (1 - lVar3),lVar3 * 8,param_1,lVar3 * 8);
        }
        *param_1 = lVar1;
      }
      else {
        bVar2 = FUN_140a820a0(local_res18,lVar1,plVar4[-1]);
        plVar6 = plVar4;
        plVar5 = plVar4;
        if (bVar2) {
          do {
            plVar6 = plVar5 + -1;
            *plVar5 = *plVar6;
            bVar2 = FUN_140a820a0(local_res18,lVar1,plVar5[-2]);
            plVar5 = plVar6;
          } while (bVar2);
        }
        *plVar6 = lVar1;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != param_2);
  }
  return;
}




void FUN_140a87770(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_140a85ba0((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,lVar1,param_3);
  return;
}




void FUN_140a877a0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_140a85d30((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,lVar1,param_3);
  return;
}




void FUN_140a877d0(undefined8 *param_1)

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




void FUN_140a87810(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140a86140(param_1,(longlong *)plVar2[2]);
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




void FUN_140a87890(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140a86190(param_1,(longlong *)plVar2[2]);
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




void FUN_140a87910(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x25);
  while (cVar1 == '\0') {
    FUN_140a861e0(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x25);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




void FUN_140a87990(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140a86230(param_1,(longlong *)plVar2[2]);
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




void FUN_140a87a10(undefined8 *param_1)

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




undefined8 * FUN_140a87a50(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140a87aa0(undefined8 *param_1,undefined8 *param_2)

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




longlong FUN_140a87af0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a87b12;
  }
  lVar2 = *plVar1;
LAB_140a87b12:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140a87b30(longlong *param_1)

{
  FUN_140a84fd0(param_1);
  return param_1;
}




longlong * FUN_140a87b50(longlong *param_1)

{
  FUN_140a850a0(param_1);
  return param_1;
}




void FUN_140a87b80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a87ba0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a87bc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a87be0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a87c00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140a87c20(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140a87c70(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140a87cc0(undefined8 *param_1)

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




undefined8 * FUN_140a87d10(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140a87d70(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_140a87e60(undefined8 *param_1)

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




undefined8 * FUN_140a87eb0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a87ef0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a87f30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a87f70(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a87fb0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140a87ff0(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar1 = lVar3 + param_3 * -8;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140a8805d;
  }
  _invalid_parameter_noinfo();
LAB_140a8805d:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140a88090(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140a880f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140a86970();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140a88130(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ab5fb0);
  }
  plVar5 = FUN_140a869d0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140a88470(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140a884c0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140ab60c8);
  }
  FUN_140a82f60(param_3);
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
        goto LAB_140a886ac;
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
LAB_140a886ac:
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
            FUN_140a84c70((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140a84cd0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140a84c70((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140a84cd0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140a84c70((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140a84cd0((longlong)param_1,plVar7);
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




exception * FUN_140a88880(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_140a888e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (*(char *)((longlong)param_2 + 0x29) == '\0') {
    puVar1 = FUN_140a864b0(param_1,puVar3,param_3,puVar3,param_2 + 3,*(undefined1 *)(param_2 + 5));
    if (*(char *)((longlong)puVar3 + 0x29) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_140a888e0(param_1,(undefined8 *)*param_2,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_140a888e0(param_1,(undefined8 *)param_2[2],puVar1);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 * FUN_140a88970(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




void FUN_140a88a50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140a86a50();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140a88a90(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140a88ae0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0xc1) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0xc1) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0xc1) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0xc1) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0xc1) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0xc1) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




void FUN_140a88bc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140a86ab0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0xc1) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140a88c00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140a86b20();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x25) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140a88c40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140a86b80();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140a88c80(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ab5fb0);
  }
  plVar5 = FUN_140a86be0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140a88fc0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140a89010(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140ab60c8);
  }
  FUN_140a84fd0(param_3);
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
        goto LAB_140a891fc;
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
LAB_140a891fc:
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
            FUN_140a852a0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140a85300((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140a852a0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140a85300((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140a852a0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140a85300((longlong)param_1,plVar7);
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




undefined8 * FUN_140a893d0(undefined8 *param_1)

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




undefined8 * FUN_140a89420(undefined8 *param_1)

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




undefined8 * FUN_140a89470(undefined8 *param_1)

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




undefined8 * FUN_140a894c0(undefined8 *param_1)

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




undefined8 * FUN_140a89510(undefined8 *param_1)

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




void FUN_140a89560(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)param_2[1]) {
    FUN_140a87000(param_1[1],(undefined4 *)param_2[1]);
  }
  return;
}




void FUN_140a895f0(longlong *param_1,longlong *param_2,longlong *param_3)

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




void * FUN_140a896e0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_140a89720(longlong param_1,longlong param_2,void *param_3)

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




void FUN_140a89760(longlong *param_1,longlong *param_2,longlong *param_3)

{
  while( true ) {
    if ((*param_1 == 0) || (*param_1 != *param_2)) {
      _invalid_parameter_noinfo();
    }
    if (param_1[1] == param_2[1]) break;
    *param_3 = *param_3 + 1;
    FUN_140a850a0(param_1);
  }
  return;
}




void * FUN_140a89820(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_140a89860(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res20 [8];
  
  plVar6 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  local_res20[0] = param_4;
  FUN_140a87270(param_2,plVar6,param_3 + -1,param_4);
  plVar7 = plVar6;
  while (plVar8 = plVar7, param_2 < plVar8) {
    bVar3 = FUN_140a81fa0(local_res20,plVar8[-1],*plVar8);
    if ((bVar3) || (bVar3 = FUN_140a81fa0(local_res20,*plVar8,plVar8[-1]), plVar7 = plVar8 + -1, bVar3)) break;
  }
  do {
    plVar6 = plVar6 + 1;
    plVar7 = plVar6;
    plVar5 = plVar8;
    if (param_3 <= plVar6) break;
    bVar3 = FUN_140a81fa0(local_res20,*plVar6,*plVar8);
    if ((bVar3) || (bVar3 = FUN_140a81fa0(local_res20,*plVar8,*plVar6), bVar3)) break;
  } while( true );
joined_r0x000140a89943:
  plVar4 = plVar5;
  plVar2 = plVar7;
  plVar7 = plVar8;
  if (param_3 <= plVar2) {
joined_r0x000140a8999c:
    for (; param_2 < plVar8; plVar8 = plVar8 + -1) {
      plVar7 = plVar7 + -1;
      bVar3 = FUN_140a81fa0(local_res20,*plVar7,*plVar4);
      if (!bVar3) {
        bVar3 = FUN_140a81fa0(local_res20,*plVar4,*plVar7);
        if (bVar3) break;
        plVar4 = plVar4 + -1;
        if (plVar4 != plVar7) {
          lVar1 = *plVar4;
          *plVar4 = *plVar7;
          *plVar7 = lVar1;
        }
      }
    }
    if (plVar8 == param_2) {
      if (plVar2 == param_3) {
        *param_1 = plVar4;
        param_1[1] = plVar6;
        return param_1;
      }
      if ((plVar6 != plVar2) && (plVar4 != plVar6)) {
        lVar1 = *plVar4;
        *plVar4 = *plVar6;
        *plVar6 = lVar1;
      }
      plVar6 = plVar6 + 1;
      plVar7 = plVar2 + 1;
      plVar5 = plVar4 + 1;
      if (plVar4 != plVar2) {
        lVar1 = *plVar4;
        *plVar4 = *plVar2;
        *plVar2 = lVar1;
      }
    }
    else {
      plVar8 = plVar8 + -1;
      if (plVar2 == param_3) {
        plVar5 = plVar4 + -1;
        if (plVar8 != plVar5) {
          lVar1 = *plVar8;
          *plVar8 = *plVar5;
          *plVar5 = lVar1;
        }
        plVar6 = plVar6 + -1;
        plVar7 = plVar2;
        if (plVar5 != plVar6) {
          lVar1 = *plVar5;
          *plVar5 = *plVar6;
          *plVar6 = lVar1;
        }
      }
      else {
        if (plVar2 != plVar8) {
          lVar1 = *plVar2;
          *plVar2 = *plVar8;
          *plVar8 = lVar1;
        }
        plVar7 = plVar2 + 1;
        plVar5 = plVar4;
      }
    }
    goto joined_r0x000140a89943;
  }
  bVar3 = FUN_140a81fa0(local_res20,*plVar4,*plVar2);
  plVar5 = plVar6;
  if (!bVar3) {
    bVar3 = FUN_140a81fa0(local_res20,*plVar2,*plVar4);
    if (bVar3) goto joined_r0x000140a8999c;
    plVar5 = plVar6 + 1;
    if (plVar6 != plVar2) {
      lVar1 = *plVar6;
      *plVar6 = *plVar2;
      *plVar2 = lVar1;
    }
  }
  plVar6 = plVar5;
  plVar7 = plVar2 + 1;
  plVar5 = plVar4;
  goto joined_r0x000140a89943;
}




void FUN_140a89ad0(longlong param_1,longlong param_2,undefined1 param_3)

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
      FUN_140a85ba0(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1),param_3);
    }
  }
  return;
}




void FUN_140a89b50(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  FUN_140a873d0(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_140a89b70(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res20 [8];
  
  plVar6 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  local_res20[0] = param_4;
  FUN_140a874f0(param_2,plVar6,param_3 + -1,param_4);
  plVar7 = plVar6;
  while (plVar8 = plVar7, param_2 < plVar8) {
    bVar3 = FUN_140a820a0(local_res20,plVar8[-1],*plVar8);
    if ((bVar3) || (bVar3 = FUN_140a820a0(local_res20,*plVar8,plVar8[-1]), plVar7 = plVar8 + -1, bVar3)) break;
  }
  do {
    plVar6 = plVar6 + 1;
    plVar7 = plVar6;
    plVar5 = plVar8;
    if (param_3 <= plVar6) break;
    bVar3 = FUN_140a820a0(local_res20,*plVar6,*plVar8);
    if ((bVar3) || (bVar3 = FUN_140a820a0(local_res20,*plVar8,*plVar6), bVar3)) break;
  } while( true );
joined_r0x000140a89c53:
  plVar4 = plVar5;
  plVar2 = plVar7;
  plVar7 = plVar8;
  if (param_3 <= plVar2) {
joined_r0x000140a89cac:
    for (; param_2 < plVar8; plVar8 = plVar8 + -1) {
      plVar7 = plVar7 + -1;
      bVar3 = FUN_140a820a0(local_res20,*plVar7,*plVar4);
      if (!bVar3) {
        bVar3 = FUN_140a820a0(local_res20,*plVar4,*plVar7);
        if (bVar3) break;
        plVar4 = plVar4 + -1;
        if (plVar4 != plVar7) {
          lVar1 = *plVar4;
          *plVar4 = *plVar7;
          *plVar7 = lVar1;
        }
      }
    }
    if (plVar8 == param_2) {
      if (plVar2 == param_3) {
        *param_1 = plVar4;
        param_1[1] = plVar6;
        return param_1;
      }
      if ((plVar6 != plVar2) && (plVar4 != plVar6)) {
        lVar1 = *plVar4;
        *plVar4 = *plVar6;
        *plVar6 = lVar1;
      }
      plVar6 = plVar6 + 1;
      plVar7 = plVar2 + 1;
      plVar5 = plVar4 + 1;
      if (plVar4 != plVar2) {
        lVar1 = *plVar4;
        *plVar4 = *plVar2;
        *plVar2 = lVar1;
      }
    }
    else {
      plVar8 = plVar8 + -1;
      if (plVar2 == param_3) {
        plVar5 = plVar4 + -1;
        if (plVar8 != plVar5) {
          lVar1 = *plVar8;
          *plVar8 = *plVar5;
          *plVar5 = lVar1;
        }
        plVar6 = plVar6 + -1;
        plVar7 = plVar2;
        if (plVar5 != plVar6) {
          lVar1 = *plVar5;
          *plVar5 = *plVar6;
          *plVar6 = lVar1;
        }
      }
      else {
        if (plVar2 != plVar8) {
          lVar1 = *plVar2;
          *plVar2 = *plVar8;
          *plVar8 = lVar1;
        }
        plVar7 = plVar2 + 1;
        plVar5 = plVar4;
      }
    }
    goto joined_r0x000140a89c53;
  }
  bVar3 = FUN_140a820a0(local_res20,*plVar4,*plVar2);
  plVar5 = plVar6;
  if (!bVar3) {
    bVar3 = FUN_140a820a0(local_res20,*plVar2,*plVar4);
    if (bVar3) goto joined_r0x000140a89cac;
    plVar5 = plVar6 + 1;
    if (plVar6 != plVar2) {
      lVar1 = *plVar6;
      *plVar6 = *plVar2;
      *plVar2 = lVar1;
    }
  }
  plVar6 = plVar5;
  plVar7 = plVar2 + 1;
  plVar5 = plVar4;
  goto joined_r0x000140a89c53;
}




void FUN_140a89de0(longlong param_1,longlong param_2,undefined1 param_3)

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
      FUN_140a85d30(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1),param_3);
    }
  }
  return;
}




void FUN_140a89e60(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  FUN_140a87650(param_1,param_2,param_3);
  return;
}




void FUN_140a89e80(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    lVar1 = *(longlong *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_140a85ba0((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,lVar1,param_3);
  }
  return;
}




void FUN_140a89ec0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    lVar1 = *(longlong *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_140a85d30((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,lVar1,param_3);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a89f00(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_4d8 [32];
  ulonglong local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  int local_4a8;
  uint local_4a4;
  ulonglong *local_4a0;
  longlong *local_490;
  undefined8 local_480;
  CMsg local_478 [1040];
  undefined2 local_68;
  undefined8 local_66;
  undefined8 local_5e;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  ulonglong local_40;
  
  local_480 = 0xfffffffffffffffe;
  local_40 = DAT_140ab7408 ^ (ulonglong)auStack_4d8;
  local_4b0 = param_2;
  local_4ac = param_2;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if ((cVar2 != '\0') && (param_3 != 0)) {
    uVar4 = *(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260) >> 3;
    uVar7 = 1000;
    if (uVar4 < 1000) {
      uVar7 = uVar4;
    }
    puVar8 = *(ulonglong **)(param_1 + 0x260);
    local_4a0 = (ulonglong *)0x0;
    local_4b8 = uVar7;
    if (*(ulonglong **)(param_1 + 0x268) < puVar8) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x248);
    local_4a0 = *(ulonglong **)(param_1 + 0x268);
    local_490 = (longlong *)0x0;
    if (local_4a0 < *(ulonglong **)(param_1 + 0x260)) {
      _invalid_parameter_noinfo();
    }
    local_490 = *(longlong **)(param_1 + 0x248);
    uVar10 = 1;
    local_4a4 = 1;
    FUN_140a9f260(local_478);
    uVar5 = FUN_140a9f310((longlong)local_478,0,(short)param_3,(short)uVar7);
    if ((char)uVar5 == '\0') {
      FUN_140a9f2b0((undefined8 *)local_478);
    }
    else {
      iVar11 = 0;
      local_4a8 = 0;
      while( true ) {
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_490)) {
          _invalid_parameter_noinfo();
        }
        if (puVar8 == local_4a0) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(ulonglong **)(lVar9 + 0x20) <= puVar8) {
          _invalid_parameter_noinfo();
        }
        uVar7 = *puVar8;
        local_4b8 = uVar7;
        if (uVar7 != 0) {
          if (((param_3 * 5 + -5) * 2 + 1U <= uVar10) && (uVar10 <= (uint)(param_3 * 10))) {
            uVar3 = FUN_140a9cef0(uVar7);
            local_68 = (undefined2)uVar3;
            uVar5 = FUN_140a9cc40(uVar7,4);
            local_54 = (undefined4)uVar5;
            local_50 = FUN_140a9cf30(uVar7);
            local_4c = FUN_140a9cf40(uVar7);
            lVar9 = **(longlong **)(param_1 + 0x2e0);
            uVar3 = FUN_140a9cf20(local_4b8);
            local_48 = (**(code **)(lVar9 + 0x50))(*(undefined8 *)(param_1 + 0x2e0),uVar3);
            puVar6 = (undefined8 *)FUN_140a9cf10(local_4b8);
            local_66 = *puVar6;
            local_5e = puVar6[1];
            uVar7 = FUN_140a9f360((longlong)local_478,(undefined4 *)&local_68);
            if ((char)uVar7 == '\0') break;
          }
          uVar10 = uVar10 + 1;
          local_4a4 = uVar10;
        }
        iVar11 = iVar11 + 1;
        local_4a8 = iVar11;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(ulonglong **)(lVar9 + 0x20) <= puVar8) {
          _invalid_parameter_noinfo();
        }
        puVar8 = puVar8 + 1;
      }
      FUN_140a9f450((longlong)local_478);
      (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),local_4b0,local_478);
      FUN_140a9f2b0((undefined8 *)local_478);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a8a1d0(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_4d8 [32];
  ulonglong local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  int local_4a8;
  uint local_4a4;
  ulonglong *local_4a0;
  longlong *local_490;
  undefined8 local_480;
  CMsg local_478 [1040];
  undefined2 local_68;
  undefined8 local_66;
  undefined8 local_5e;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  ulonglong local_40;
  
  local_480 = 0xfffffffffffffffe;
  local_40 = DAT_140ab7408 ^ (ulonglong)auStack_4d8;
  local_4b0 = param_2;
  local_4ac = param_2;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar2 != '\0') {
    uVar4 = *(longlong *)(param_1 + 0x298) - *(longlong *)(param_1 + 0x290) >> 3;
    uVar7 = 1000;
    if (uVar4 < 1000) {
      uVar7 = uVar4;
    }
    puVar8 = *(ulonglong **)(param_1 + 0x290);
    local_4a0 = (ulonglong *)0x0;
    local_4b8 = uVar7;
    if (*(ulonglong **)(param_1 + 0x298) < puVar8) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x278);
    local_4a0 = *(ulonglong **)(param_1 + 0x298);
    local_490 = (longlong *)0x0;
    if (local_4a0 < *(ulonglong **)(param_1 + 0x290)) {
      _invalid_parameter_noinfo();
    }
    local_490 = *(longlong **)(param_1 + 0x278);
    uVar10 = 1;
    local_4a4 = 1;
    FUN_140a9f260(local_478);
    uVar5 = FUN_140a9f310((longlong)local_478,1,(short)param_3,(short)uVar7);
    if ((char)uVar5 == '\0') {
      FUN_140a9f2b0((undefined8 *)local_478);
    }
    else {
      iVar11 = 0;
      local_4a8 = 0;
      while( true ) {
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_490)) {
          _invalid_parameter_noinfo();
        }
        if (puVar8 == local_4a0) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(ulonglong **)(lVar9 + 0x20) <= puVar8) {
          _invalid_parameter_noinfo();
        }
        uVar7 = *puVar8;
        local_4b8 = uVar7;
        if (uVar7 != 0) {
          if (((param_3 * 5 + -5) * 2 + 1U <= uVar10) && (uVar10 <= (uint)(param_3 * 10))) {
            uVar3 = FUN_140a9cf00(uVar7);
            local_68 = (undefined2)uVar3;
            uVar5 = FUN_140a9cc40(uVar7,6);
            local_54 = (undefined4)uVar5;
            local_50 = FUN_140a9cf30(uVar7);
            local_4c = FUN_140a9cf40(uVar7);
            lVar9 = **(longlong **)(param_1 + 0x2e0);
            uVar3 = FUN_140a9cf20(local_4b8);
            local_48 = (**(code **)(lVar9 + 0x50))(*(undefined8 *)(param_1 + 0x2e0),uVar3);
            puVar6 = (undefined8 *)FUN_140a9cf10(local_4b8);
            local_66 = *puVar6;
            local_5e = puVar6[1];
            uVar7 = FUN_140a9f360((longlong)local_478,(undefined4 *)&local_68);
            if ((char)uVar7 == '\0') break;
          }
          uVar10 = uVar10 + 1;
          local_4a4 = uVar10;
        }
        iVar11 = iVar11 + 1;
        local_4a8 = iVar11;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(ulonglong **)(lVar9 + 0x20) <= puVar8) {
          _invalid_parameter_noinfo();
        }
        puVar8 = puVar8 + 1;
      }
      FUN_140a9f450((longlong)local_478);
      (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),local_4b0,local_478);
      FUN_140a9f2b0((undefined8 *)local_478);
    }
  }
  return;
}




void FUN_140a8a490(longlong param_1)

{
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  operator_delete(*(void **)(param_1 + 0x70));
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  operator_delete(*(void **)(param_1 + 0x40));
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a8a550(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *_Source;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  undefined4 local_4b4;
  int local_4b0;
  longlong *local_4a8;
  undefined8 local_498;
  longlong *local_490;
  CMsg local_478 [1040];
  undefined4 local_68;
  char local_64 [16];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_498 = 0xfffffffffffffffe;
  local_30 = DAT_140ab7408 ^ (ulonglong)auStack_4d8;
  local_4b8 = param_2;
  local_4b4 = param_2;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar4 != '\0') {
    FUN_140a9f6e0(local_478);
    FUN_140a9f790((longlong)local_478);
    plVar7 = *(longlong **)(param_1 + 0x2c0);
    local_490 = (longlong *)0x0;
    if (*(longlong **)(param_1 + 0x2c8) < plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x2a8);
    plVar2 = *(longlong **)(param_1 + 0x2c8);
    local_4a8 = (longlong *)0x0;
    local_490 = plVar1;
    if (plVar2 < *(longlong **)(param_1 + 0x2c0)) {
      _invalid_parameter_noinfo();
    }
    local_4a8 = *(longlong **)(param_1 + 0x2a8);
    iVar9 = 0;
    local_4b0 = 0;
    while( true ) {
      if ((plVar1 == (longlong *)0x0) || (plVar1 != local_4a8)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar7 == plVar2) || (9 < iVar9)) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
        _invalid_parameter_noinfo();
      }
      lVar8 = *plVar7;
      if (lVar8 != 0) {
        uVar6 = FUN_140a9cc40(lVar8,3);
        local_68 = (undefined4)uVar6;
        lVar3 = **(longlong **)(param_1 + 0x2e0);
        uVar5 = FUN_140a9cf20(lVar8);
        local_48 = (**(code **)(lVar3 + 0x50))(*(undefined8 *)(param_1 + 0x2e0),uVar5);
        local_54 = FUN_140a9cf20(lVar8);
        local_50 = FUN_140a9cf40(lVar8);
        local_4c = FUN_140a9cf30(lVar8);
        uVar5 = FUN_140a9cef0(lVar8);
        local_44 = (undefined2)uVar5;
        uVar6 = FUN_140a9cc40(lVar8,4);
        local_40 = (undefined4)uVar6;
        uVar6 = FUN_140a9cc40(lVar8,7);
        local_3c = (undefined4)uVar6;
        uVar6 = FUN_140a9cc40(lVar8,8);
        local_38 = (undefined4)uVar6;
        _Source = (char *)FUN_140a9cf10(lVar8);
        strncpy(local_64,_Source,0x10);
        uVar6 = FUN_140a9f7c0((longlong)local_478,&local_68);
        if ((char)uVar6 == '\0') break;
      }
      iVar9 = iVar9 + 1;
      local_4b0 = iVar9;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
        _invalid_parameter_noinfo();
      }
      plVar7 = plVar7 + 1;
    }
    FUN_140a9f880((longlong)local_478);
    (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),local_4b8,local_478);
    FUN_140a9f730((undefined8 *)local_478);
  }
  return;
}




void FUN_140a8a7f0(longlong param_1)

{
  FUN_140a8a490(param_1 + 8);
  return;
}




undefined8 * FUN_140a8a810(undefined8 *param_1)

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




undefined8 * FUN_140a8a870(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140a8a8c0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140a8aa50(undefined8 *param_1)

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




ulonglong FUN_140a8aab0(longlong *param_1)

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
  uVar1 = uVar1 - 8;
  if (uVar1 <= *(ulonglong *)(lVar3 + 0x20)) {
    lVar3 = lVar4;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140a8ab27;
  }
  _invalid_parameter_noinfo();
LAB_140a8ab27:
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




undefined8 * FUN_140a8ab60(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140a8abf0(longlong *param_1)

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




void FUN_140a8acb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a8acd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a8acf0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a8ad10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a8ad30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140a8ad50(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140a8adf0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140a87890((longlong)param_1);
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
    FUN_140a884c0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140a8afe0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140a88970(param_1,param_2,param_3);
  return param_2;
}




void FUN_140a8b000(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar7 = FUN_140a888e0(param_1,*(undefined8 **)(*(longlong *)(param_2 + 0x30) + 8),lVar2);
  *(undefined8 **)(lVar2 + 8) = puVar7;
  plVar3 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x29) != '\0') {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
    return;
  }
  cVar1 = *(char *)(*plVar4 + 0x29);
  plVar6 = (longlong *)*plVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x29);
    plVar4 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar3 = (longlong)plVar4;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
  lVar5 = *(longlong *)(lVar2 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x29);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x29);
    lVar2 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = lVar2;
  return;
}




undefined8 * FUN_140a8b0b0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ab5fb0);
  }
  plVar5 = FUN_140a864b0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_140a8b3f0(longlong *param_1)

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
  FUN_140a8adf0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140a8b4a0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140a88ae0(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_140a8b4c0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140a8b550(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
  
  if (0x1555555555555553 < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ab5fb0);
  }
  plVar5 = FUN_140a86530(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x24);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x24) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x24) = 1;
        *(undefined1 *)(lVar4 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x25) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x25) == '\0') {
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
      if (*(char *)(lVar4 + 0x24) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x24) = 1;
        *(undefined1 *)(lVar4 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x25) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x25) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x24);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x24) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




undefined8 * FUN_140a8b890(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140a8b920(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140a8ba7d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140a8baac;
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
      goto LAB_140a8ba7d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140a88130(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140a8baac:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_140a8bad0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140a87810((longlong)param_1);
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
    FUN_140a89010(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




longlong * FUN_140a8bc80(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140a8bddd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140a8be0c;
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
      goto LAB_140a8bddd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140a88c80(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140a8be0c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140a8be30(undefined8 *param_1)

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




undefined8 * FUN_140a8be80(undefined8 *param_1)

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




undefined8 * FUN_140a8bed0(undefined8 *param_1)

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




undefined8 * FUN_140a8bf20(undefined8 *param_1)

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




undefined8 * FUN_140a8bf70(undefined8 *param_1)

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




void * FUN_140a8bfc0(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

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




void FUN_140a8c030(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)((longlong)plVar7 + 0xc1) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0xc1) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0xc1);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0xc1);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0xc1);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0xc1);
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




void * FUN_140a8c190(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_140a8c1d0(longlong param_1)

{
  FUN_140a8a490(param_1 + 0x20);
  return;
}




void FUN_140a8c200(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_140a85ba0((longlong)param_1,0,lVar2 + -8 >> 3,lVar1,param_3);
  }
  return;
}




void FUN_140a8c270(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_140a85d30((longlong)param_1,0,lVar2 + -8 >> 3,lVar1,param_3);
  }
  return;
}




undefined4 * FUN_140a8c2e0(undefined4 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = operator_new(8);
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 4);
    plVar2 = plVar1;
  }
  *(longlong **)(param_1 + 4) = plVar2;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x10);
    plVar2 = plVar1;
  }
  *(longlong **)(param_1 + 0x10) = plVar2;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 0x1c);
    plVar3 = plVar2;
  }
  *(longlong **)(param_1 + 0x1c) = plVar3;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




undefined4 FUN_140a8c3c0(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  longlong *plVar9;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x1b8);
  plVar3 = *(longlong **)(param_1 + 0x188);
  plVar4 = *(longlong **)(param_1 + 0x1b8);
  do {
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 == plVar4) {
      return 0;
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar3;
    }
    if (plVar9 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x60))(*(longlong **)(param_1 + 0x2e0),*(undefined4 *)((longlong)plVar9 + 0x1c));
    pcVar8 = param_2;
    do {
      cVar1 = *pcVar8;
      cVar2 = pcVar8[lVar7 - (longlong)param_2];
      if (cVar1 != cVar2) break;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      return *(undefined4 *)((longlong)plVar9 + 0x1c);
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar9 + 0x25) == '\0') {
      plVar5 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar5 + 0x25) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x25);
        plVar9 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x25);
          plVar9 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar9[1] + 0x25);
        plVar6 = (longlong *)plVar9[1];
        plVar5 = plVar9;
        while ((plVar9 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
          cVar1 = *(char *)(plVar9[1] + 0x25);
          plVar6 = (longlong *)plVar9[1];
          plVar5 = plVar9;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




undefined8 * FUN_140a8c540(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140a82bc0();
    }
    lVar2 = FUN_140a84b70(param_1 + 2,uVar4);
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
    pvVar3 = FUN_140a8bfc0(param_1,(longlong)&local_28,(longlong)&local_38,(void *)param_1[3]);
    param_1[4] = pvVar3;
  }
  return param_1;
}




undefined8 * FUN_140a8c670(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140a8c700(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140a8c7d0(longlong *param_1,longlong *param_2)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  if (param_1 != param_2) {
    local_38 = *param_1;
    puStack_30 = (undefined8 *)param_1[6];
    uStack_20 = *puStack_30;
    local_28 = local_38;
    FUN_140a8adf0(param_1,local_18,&local_28,&local_38);
    FUN_140a8b000((longlong)param_1,(longlong)param_2);
  }
  return param_1;
}




longlong * FUN_140a8c850(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140a8c9ad:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140a8c9dc;
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
      goto LAB_140a8c9ad;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140a8b0b0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140a8c9dc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong FUN_140a8ca00(longlong *param_1,uint *param_2)

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
  
  FUN_140a88970(param_1,&local_38,param_2);
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
  FUN_140a8adf0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




longlong * FUN_140a8cb40(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140a8cc10(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0xc1) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0xc1) == '\0');
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




longlong * FUN_140a8cce0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x25) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x25) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_140a8ce3d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140a8ce6c;
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
      if (*(char *)((longlong)plVar6 + 0x25) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x25) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x25);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x25);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x25);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x25);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x25) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x25) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_140a8ce3d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140a8b550(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140a8ce6c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140a8ce90(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined **local_80 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  plVar5 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar5 + 0x25) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140ab60c8);
  }
  FUN_140a82a50(param_3);
  plVar11 = (longlong *)*plVar5;
  if (*(char *)((longlong)plVar11 + 0x25) == '\0') {
    plVar12 = plVar11;
    if (*(char *)(plVar5[2] + 0x25) == '\0') {
      plVar10 = (longlong *)param_3[1];
      plVar12 = (longlong *)plVar10[2];
      if (plVar10 != plVar5) {
        plVar11[1] = (longlong)plVar10;
        *plVar10 = *plVar5;
        plVar11 = plVar10;
        if (plVar10 != (longlong *)plVar5[2]) {
          plVar11 = (longlong *)plVar10[1];
          if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
            plVar12[1] = (longlong)plVar11;
          }
          *plVar11 = (longlong)plVar12;
          plVar10[2] = plVar5[2];
          *(longlong **)(plVar5[2] + 8) = plVar10;
        }
        if (*(longlong **)(param_1[6] + 8) == plVar5) {
          *(longlong **)(param_1[6] + 8) = plVar10;
        }
        else {
          puVar7 = (undefined8 *)plVar5[1];
          if ((longlong *)*puVar7 == plVar5) {
            *puVar7 = plVar10;
          }
          else {
            puVar7[2] = plVar10;
          }
        }
        plVar10[1] = plVar5[1];
        puVar1 = (undefined1 *)((longlong)plVar5 + 0x24);
        puVar2 = (undefined1 *)((longlong)plVar10 + 0x24);
        if (puVar2 != puVar1) {
          uVar4 = *puVar2;
          *puVar2 = *puVar1;
          *puVar1 = uVar4;
        }
        goto LAB_140a8d07c;
      }
    }
  }
  else {
    plVar12 = (longlong *)plVar5[2];
  }
  plVar11 = (longlong *)plVar5[1];
  if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
    plVar12[1] = (longlong)plVar11;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar5) {
    *(longlong **)(param_1[6] + 8) = plVar12;
  }
  else if ((longlong *)*plVar11 == plVar5) {
    *plVar11 = (longlong)plVar12;
  }
  else {
    plVar11[2] = (longlong)plVar12;
  }
  if (*(longlong **)param_1[6] == plVar5) {
    plVar10 = plVar11;
    if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
      cVar3 = *(char *)(*plVar12 + 0x25);
      plVar6 = (longlong *)*plVar12;
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)*plVar9;
        cVar3 = *(char *)((longlong)plVar6 + 0x25);
        plVar10 = plVar9;
      }
    }
    *(longlong **)param_1[6] = plVar10;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar5) {
    plVar10 = plVar11;
    if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
      cVar3 = *(char *)(plVar12[2] + 0x25);
      plVar6 = (longlong *)plVar12[2];
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)plVar9[2];
        cVar3 = *(char *)((longlong)plVar6 + 0x25);
        plVar10 = plVar9;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar10;
  }
LAB_140a8d07c:
  if (*(char *)((longlong)plVar5 + 0x24) == '\x01') {
    if (plVar12 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar10 = plVar11;
        if (*(char *)((longlong)plVar12 + 0x24) != '\x01') break;
        plVar11 = (longlong *)*plVar10;
        if (plVar12 == plVar11) {
          plVar11 = (longlong *)plVar10[2];
          if (*(char *)((longlong)plVar11 + 0x24) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x24) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x24) = 0;
            FUN_140a848f0((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x25) == '\0') {
            if ((*(char *)(*plVar11 + 0x24) != '\x01') || (*(char *)(plVar11[2] + 0x24) != '\x01')) {
              if (*(char *)(plVar11[2] + 0x24) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x24) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
                FUN_140a826f0((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x24) = *(undefined1 *)((longlong)plVar10 + 0x24);
              *(undefined1 *)((longlong)plVar10 + 0x24) = 1;
              *(undefined1 *)(plVar11[2] + 0x24) = 1;
              FUN_140a848f0((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x24) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x24) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x24) = 0;
            FUN_140a826f0((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x25) == '\0') {
            if ((*(char *)(plVar11[2] + 0x24) != '\x01') || (*(char *)(*plVar11 + 0x24) != '\x01')) {
              if (*(char *)(*plVar11 + 0x24) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x24) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
                FUN_140a848f0((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x24) = *(undefined1 *)((longlong)plVar10 + 0x24);
              *(undefined1 *)((longlong)plVar10 + 0x24) = 1;
              *(undefined1 *)(*plVar11 + 0x24) = 1;
              FUN_140a826f0((longlong)param_1,plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
          }
        }
        plVar11 = (longlong *)plVar10[1];
        plVar12 = plVar10;
      } while (plVar10 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)((longlong)plVar12 + 0x24) = 1;
  }
  operator_delete(plVar5);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar8 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar8;
  return param_2;
}




longlong * FUN_140a8d250(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x25) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x25) == '\0');
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




undefined8 * FUN_140a8d320(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140ab60c8);
  }
  FUN_140a83030(param_3);
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
        goto LAB_140a8d50c;
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
LAB_140a8d50c:
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
            FUN_140a84980((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140a82850((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140a84980((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140a82850((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140a84980((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140a82850((longlong)param_1,plVar7);
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




longlong * FUN_140a8d6e0(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140a8d7b0(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  void *_Dst;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  rsize_t _DstSize;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    pvVar3 = (void *)param_2[3];
    uVar2 = param_2[4] - (longlong)pvVar3 >> 3;
    if (uVar2 == 0) {
      FUN_140a8abf0(param_1);
      return param_1;
    }
    _Dst = (void *)param_1[3];
    uVar7 = param_1[4] - (longlong)_Dst >> 3;
    if (uVar2 <= uVar7) {
      lVar6 = param_2[4] - (longlong)pvVar3 >> 3;
      if (0 < lVar6) {
        _DstSize = lVar6 << 3;
        memmove_s(_Dst,_DstSize,pvVar3,_DstSize);
      }
      param_1[4] = param_1[3] + (param_2[4] - param_2[3] >> 3) * 8;
      return param_1;
    }
    if (_Dst == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_1[5] - (longlong)_Dst >> 3;
    }
    if (uVar2 <= uVar5) {
      pvVar1 = (void *)((longlong)pvVar3 + uVar7 * 8);
      FUN_140a86e80(pvVar3,(longlong)pvVar1,_Dst);
      pvVar3 = FUN_140a86ec0(param_1,pvVar1,param_2[4],(void *)param_1[4]);
      param_1[4] = (longlong)pvVar3;
      return param_1;
    }
    if (_Dst != (void *)0x0) {
      operator_delete(_Dst);
    }
    uVar4 = FUN_140a86280((longlong)param_1,param_2[4] - param_2[3] >> 3);
    if ((char)uVar4 != '\0') {
      pvVar3 = FUN_140a86ec0(param_1,(void *)param_2[3],param_2[4],(void *)param_1[3]);
      param_1[4] = (longlong)pvVar3;
    }
  }
  return param_1;
}




void FUN_140a8d8f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a8d910(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a8d930(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a8d950(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a8d970(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140a8d9c0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_140a88130(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_140a88130(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_140a88130(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_140a88130(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_140a88130(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_140a88130(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_140a88130(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_140a8b920(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_140a8dce0(longlong *param_1)

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
  FUN_140a8bad0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_140a8dd50(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_140a88c80(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_140a88c80(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_140a88c80(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_140a88c80(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_140a88c80(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_140a88c80(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_140a88c80(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_140a8bc80(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_140a8e0a0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_140a82bc0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140a84b70(param_1 + 0x10,uVar8);
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
      FUN_140a8c190(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_140a8c190(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140a86f30(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined8 * FUN_140a8e340(undefined8 *param_1)

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




undefined8 * FUN_140a8e390(undefined8 *param_1)

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




undefined8 * FUN_140a8e3e0(undefined8 *param_1)

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




longlong * FUN_140a8e430(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140a87910((longlong)param_1);
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
    if (*(char *)(lVar4 + 0x25) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x25) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x25);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x25);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x25);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x25);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_140a8ce90(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140a8e5e0(undefined8 *param_1)

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




longlong * FUN_140a8e630(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140a87990((longlong)param_1);
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
    FUN_140a8d320(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140a8e7e0(undefined8 *param_1)

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




void FUN_140a8e830(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140a82ee0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140a84f10(param_1 + 0x10,uVar8);
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
      FUN_140a896e0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140a896e0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140a86fa0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void * FUN_140a8eae0(void *param_1,uint param_2)

{
  FUN_140a8a490((longlong)param_1 + 0x20);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140a8eb30(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  FUN_140a8c200(param_1,param_2,param_3);
  return;
}




void FUN_140a8eb40(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  FUN_140a8c270(param_1,param_2,param_3);
  return;
}




undefined4 * FUN_140a8eb50(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  FUN_140a8c540((undefined8 *)(param_1 + 4),(undefined8 *)(param_2 + 4));
  FUN_140a8c540((undefined8 *)(param_1 + 0x10),(undefined8 *)(param_2 + 0x10));
  FUN_140a8c540((undefined8 *)(param_1 + 0x1c),(undefined8 *)(param_2 + 0x1c));
  return param_1;
}




void FUN_140a8ebc0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong *local_208;
  undefined8 *puStack_200;
  longlong *local_1f8;
  undefined8 *puStack_1f0;
  uint local_1c4;
  int local_1c0;
  undefined8 local_1b8;
  longlong *plStack_1b0;
  longlong *local_1a8;
  undefined8 *puStack_1a0;
  longlong *local_198;
  undefined8 *puStack_190;
  longlong *local_188;
  longlong *local_178;
  undefined8 *puStack_170;
  longlong *local_168;
  longlong *local_158;
  undefined8 *puStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  longlong *plStack_140;
  longlong *local_138;
  longlong *local_128;
  undefined8 *puStack_120;
  longlong *local_118;
  undefined8 *puStack_110;
  longlong *local_108;
  undefined8 *puStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  longlong *plStack_f0;
  longlong *local_e8;
  undefined8 *puStack_e0;
  undefined8 local_d8;
  undefined8 local_d0 [2];
  undefined8 local_c0 [2];
  undefined8 local_b0 [2];
  undefined8 local_a0 [2];
  undefined8 local_90 [2];
  undefined8 local_80 [2];
  undefined8 local_70 [2];
  undefined8 local_60 [5];
  
  local_d8 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    iVar7 = 1;
    puStack_1f0 = *(undefined8 **)(param_1 + 0x260);
    local_198 = (longlong *)0x0;
    if (*(undefined8 **)(param_1 + 0x268) < puStack_1f0) {
      _invalid_parameter_noinfo();
    }
    plVar8 = *(longlong **)(param_1 + 0x248);
    local_1f8 = plVar8;
    local_198 = plVar8;
    puStack_190 = puStack_1f0;
    while( true ) {
      puVar5 = *(undefined8 **)(param_1 + 0x268);
      local_138 = (longlong *)0x0;
      if (puVar5 < *(undefined8 **)(param_1 + 0x260)) {
        _invalid_parameter_noinfo();
      }
      local_138 = *(longlong **)(param_1 + 0x248);
      if ((plVar8 == (longlong *)0x0) || (plVar8 != local_138)) {
        _invalid_parameter_noinfo();
      }
      if (puStack_1f0 == puVar5) break;
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar8;
      }
      if (*(undefined8 **)(lVar9 + 0x20) <= puStack_1f0) {
        _invalid_parameter_noinfo();
      }
      puVar5 = (undefined8 *)*puStack_1f0;
      if (puVar5 == (undefined8 *)0x0) {
        local_118 = local_1f8;
        puStack_110 = puStack_1f0;
        puVar5 = FUN_140a8ab60((undefined8 *)(param_1 + 0x248),local_a0,(longlong)&local_118);
        plVar8 = (longlong *)*puVar5;
        puStack_1f0 = (undefined8 *)puVar5[1];
        local_1f8 = plVar8;
      }
      else {
        uVar6 = FUN_140a9cc40((longlong)puVar5,4);
        if ((int)uVar6 < 1) {
          uVar6 = FUN_140a9cc40((longlong)puVar5,3);
          local_res20[0] = (uint)uVar6;
          FUN_140a8ca00((longlong *)(param_1 + 0x48),local_res20);
          FUN_140a9cba0((longlong)puVar5);
          FUN_140a9cb80(puVar5);
          local_178 = local_1f8;
          puStack_170 = puStack_1f0;
          puVar5 = FUN_140a8ab60((undefined8 *)(param_1 + 0x248),local_80,(longlong)&local_178);
          plVar8 = (longlong *)*puVar5;
          puStack_1f0 = (undefined8 *)puVar5[1];
          local_1f8 = plVar8;
        }
        else if (iVar7 < 0x41b) {
          FUN_140a9cf50((longlong)puVar5,iVar7);
          if (plVar8 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar8;
          }
          if (*(undefined8 **)(lVar9 + 0x20) <= puStack_1f0) {
            _invalid_parameter_noinfo();
          }
          puStack_1f0 = puStack_1f0 + 1;
          iVar7 = iVar7 + 1;
        }
        else {
          uVar6 = FUN_140a9cc40((longlong)puVar5,3);
          local_1c4 = (uint)uVar6;
          FUN_140a8ca00((longlong *)(param_1 + 0x48),&local_1c4);
          FUN_140a9cba0((longlong)puVar5);
          FUN_140a9cb80(puVar5);
          local_158 = local_1f8;
          puStack_150 = puStack_1f0;
          puVar5 = FUN_140a8ab60((undefined8 *)(param_1 + 0x248),local_60,(longlong)&local_158);
          plVar8 = (longlong *)*puVar5;
          puStack_1f0 = (undefined8 *)puVar5[1];
          local_1f8 = plVar8;
        }
      }
    }
  }
  else if (param_2 == 1) {
    iVar7 = 1;
    puStack_200 = *(undefined8 **)(param_1 + 0x290);
    local_1a8 = (longlong *)0x0;
    if (*(undefined8 **)(param_1 + 0x298) < puStack_200) {
      _invalid_parameter_noinfo();
    }
    plVar8 = *(longlong **)(param_1 + 0x278);
    local_208 = plVar8;
    local_1a8 = plVar8;
    puStack_1a0 = puStack_200;
    while( true ) {
      puVar5 = *(undefined8 **)(param_1 + 0x298);
      local_188 = (longlong *)0x0;
      if (puVar5 < *(undefined8 **)(param_1 + 0x290)) {
        _invalid_parameter_noinfo();
      }
      local_188 = *(longlong **)(param_1 + 0x278);
      if ((plVar8 == (longlong *)0x0) || (plVar8 != local_188)) {
        _invalid_parameter_noinfo();
      }
      if (puStack_200 == puVar5) break;
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar8;
      }
      if (*(undefined8 **)(lVar9 + 0x20) <= puStack_200) {
        _invalid_parameter_noinfo();
      }
      puVar5 = (undefined8 *)*puStack_200;
      if (puVar5 == (undefined8 *)0x0) {
        local_128 = local_208;
        puStack_120 = puStack_200;
        puVar5 = FUN_140a8ab60((undefined8 *)(param_1 + 0x278),local_70,(longlong)&local_128);
        plVar8 = (longlong *)*puVar5;
        puStack_200 = (undefined8 *)puVar5[1];
        local_208 = plVar8;
      }
      else {
        uVar6 = FUN_140a9cc40((longlong)puVar5,6);
        if ((int)uVar6 < 1) {
          FUN_140a9cf60((longlong)puVar5,0);
          local_e8 = local_208;
          puStack_e0 = puStack_200;
          puVar5 = FUN_140a8ab60((undefined8 *)(param_1 + 0x278),local_90,(longlong)&local_e8);
          plVar8 = (longlong *)*puVar5;
          puStack_200 = (undefined8 *)puVar5[1];
          local_208 = plVar8;
        }
        else if (iVar7 < 0x41b) {
          FUN_140a9cf60((longlong)puVar5,iVar7);
          if (plVar8 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar8;
          }
          if (*(undefined8 **)(lVar9 + 0x20) <= puStack_200) {
            _invalid_parameter_noinfo();
          }
          puStack_200 = puStack_200 + 1;
          iVar7 = iVar7 + 1;
        }
        else {
          uVar6 = FUN_140a9cc40((longlong)puVar5,3);
          local_res18[0] = (uint)uVar6;
          FUN_140a8ca00((longlong *)(param_1 + 200),local_res18);
          FUN_140a9cba0((longlong)puVar5);
          FUN_140a9cb80(puVar5);
          local_108 = local_208;
          puStack_100 = puStack_200;
          puVar5 = FUN_140a8ab60((undefined8 *)(param_1 + 0x278),local_c0,(longlong)&local_108);
          plVar8 = (longlong *)*puVar5;
          puStack_200 = (undefined8 *)puVar5[1];
          local_208 = plVar8;
        }
      }
    }
  }
  else if (param_2 == 2) {
    iVar7 = 1;
    local_1c0 = 1;
    plVar8 = *(longlong **)(param_1 + 0x2c0);
    local_1b8 = (longlong *)0x0;
    if (*(longlong **)(param_1 + 0x2c8) < plVar8) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x2a8);
    local_1b8._0_4_ = SUB84(plVar1,0);
    uVar3 = (undefined4)local_1b8;
    local_1b8._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uVar4 = local_1b8._4_4_;
    local_1b8 = plVar1;
    plStack_1b0 = plVar8;
    while( true ) {
      plVar2 = *(longlong **)(param_1 + 0x2c8);
      local_168 = (longlong *)0x0;
      if (plVar2 < *(longlong **)(param_1 + 0x2c0)) {
        _invalid_parameter_noinfo();
      }
      local_168 = *(longlong **)(param_1 + 0x2a8);
      if ((plVar1 == (longlong *)0x0) || (plVar1 != local_168)) {
        _invalid_parameter_noinfo();
      }
      if (plVar8 == plVar2) {
        return;
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar1;
      }
      if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
        _invalid_parameter_noinfo();
      }
      if (*plVar8 == 0) {
        local_f8 = uVar3;
        uStack_f4 = uVar4;
        plStack_f0 = plVar8;
        FUN_140a8ab60((undefined8 *)(param_1 + 0x2a8),local_d0,(longlong)&local_f8);
        return;
      }
      if (10 < iVar7) break;
      FUN_140a9cf50(*plVar8,iVar7);
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar1;
      }
      if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
        _invalid_parameter_noinfo();
      }
      plVar8 = plVar8 + 1;
      iVar7 = iVar7 + 1;
      local_1c0 = iVar7;
    }
    local_148 = uVar3;
    uStack_144 = uVar4;
    plStack_140 = plVar8;
    FUN_140a8ab60((undefined8 *)(param_1 + 0x2a8),local_b0,(longlong)&local_148);
  }
  else {
    log_InlineLogERROR("CArenicSystem::CalcPosition, nSortType not exist: %d");
  }
  return;
}




int FUN_140a8f270(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  local_res10[0] = param_2;
  FUN_140a8cc10((longlong *)(param_1 + 0x148),(longlong *)&local_18,local_res10);
  lVar2 = *(longlong *)(param_1 + 0x178);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x148))) {
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
  iVar1 = *(int *)(local_10 + 0x24);
  if (iVar1 == param_3) {
    iVar1 = *(int *)(local_10 + 0x28);
  }
  else if (*(int *)(local_10 + 0x28) != param_3) {
    return 0;
  }
  return iVar1;
}




undefined8 FUN_140a8f340(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x78))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x78);
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
  puVar8 = *(undefined8 **)(param_1 + 0x78);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x78);
    local_28 = *(longlong *)(param_1 + 0x48);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x78);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x48))) {
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




undefined8 FUN_140a8f440(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0xf8))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0xf8);
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
  puVar8 = *(undefined8 **)(param_1 + 0xf8);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 200) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0xf8);
    local_28 = *(longlong *)(param_1 + 200);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0xf8);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 200))) {
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




undefined8 FUN_140a8f560(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0xb8))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
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
  puVar8 = *(undefined8 **)(param_1 + 0xb8);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0xb8);
    local_28 = *(longlong *)(param_1 + 0x88);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0xb8);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x88))) {
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




undefined8 FUN_140a8f680(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x138))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x138);
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
  puVar8 = *(undefined8 **)(param_1 + 0x138);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x138);
    local_28 = *(longlong *)(param_1 + 0x108);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x138);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x108))) {
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




void FUN_140a8f7a0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140a8f340(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cbf0(lVar1);
  }
  lVar1 = FUN_140a8f440(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cbf0(lVar1);
  }
  lVar1 = FUN_140a8f560(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cbf0(lVar1);
  }
  lVar1 = FUN_140a8f680(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cbf0(lVar1);
  }
  return;
}




void FUN_140a8f820(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140a8f340(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf90(lVar1,param_3);
  }
  lVar1 = FUN_140a8f440(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf90(lVar1,param_3);
  }
  lVar1 = FUN_140a8f560(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf90(lVar1,param_3);
  }
  lVar1 = FUN_140a8f680(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf90(lVar1,param_3);
  }
  return;
}




void FUN_140a8f8b0(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140a8f340(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf80(lVar1,param_3);
  }
  lVar1 = FUN_140a8f440(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf80(lVar1,param_3);
  }
  lVar1 = FUN_140a8f560(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf80(lVar1,param_3);
  }
  lVar1 = FUN_140a8f680(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf80(lVar1,param_3);
  }
  return;
}




void FUN_140a8f940(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140a8f340(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf70(lVar1,param_3);
  }
  lVar1 = FUN_140a8f440(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf70(lVar1,param_3);
  }
  lVar1 = FUN_140a8f560(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf70(lVar1,param_3);
  }
  lVar1 = FUN_140a8f680(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cf70(lVar1,param_3);
  }
  return;
}




void FUN_140a8f9d0(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 < 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  lVar1 = FUN_140a8f340(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cd30(lVar1,5,param_3);
  }
  lVar1 = FUN_140a8f440(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cd30(lVar1,5,param_3);
  }
  lVar1 = FUN_140a8f560(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cd30(lVar1,5,param_3);
  }
  lVar1 = FUN_140a8f680(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140a9cd30(lVar1,5,param_3);
  }
  return;
}




undefined8 FUN_140a8fab0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint local_res10 [2];
  longlong local_18 [2];
  
  if ((*(longlong *)(param_1 + 0x40) == 0) || (1000 < param_2)) {
    return 0;
  }
  local_res10[0] = param_2;
  plVar2 = FUN_140a8c700((longlong *)(param_1 + 8),local_18,local_res10);
  lVar5 = *(longlong *)(param_1 + 0x38);
  plVar3 = (longlong *)*plVar2;
  lVar1 = plVar2[1];
  if ((plVar3 == (longlong *)0x0) || (plVar3 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  if (lVar1 != lVar5) {
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar3;
    }
    if (lVar1 == *(longlong *)(lVar5 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar3 = *(longlong **)(lVar1 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,2);
                    /* WARNING: Could not recover jumptable at 0x000140a8fbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar3 + 0x50))(plVar3);
      return uVar4;
    }
    log_InlineLogERROR(&DAT_140aa7368);
  }
  return 0;
}




longlong * FUN_140a8fbc0(longlong *param_1,longlong *param_2)

{
  FUN_140a8c7d0(param_1,param_2);
  return param_1;
}




undefined4 FUN_140a8fbe0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a8f340(param_1,param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_140a9cef0(lVar2);
    return uVar1;
  }
  return 0;
}




undefined4 FUN_140a8fc10(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a8f440(param_1,param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_140a9cf00(lVar2);
    return uVar1;
  }
  return 0;
}




undefined4 FUN_140a8fc40(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a8f560(param_1,param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_140a9cf00(lVar2);
    return uVar1;
  }
  return 0;
}




bool FUN_140a8fc70(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  puVar6 = (undefined8 *)(*(undefined8 **)(param_1 + 0x1f8))[1];
  cVar1 = *(char *)((longlong)puVar6 + 0x25);
  puVar3 = *(undefined8 **)(param_1 + 0x1f8);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar6 + 3) < param_2) {
      puVar4 = (undefined8 *)puVar6[2];
      puVar6 = puVar3;
    }
    else {
      puVar4 = (undefined8 *)*puVar6;
    }
    puVar3 = puVar6;
    puVar6 = puVar4;
    cVar1 = *(char *)((longlong)puVar4 + 0x25);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x1f8);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x1c8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar6) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar5 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x1f8);
    local_28 = *(longlong *)(param_1 + 0x1c8);
  }
  else {
    plVar5 = &local_38;
  }
  local_18 = *plVar5;
  lVar2 = *(longlong *)(param_1 + 0x1f8);
  local_10 = plVar5[1];
  if ((local_18 == 0) || (local_18 != *(longlong *)(param_1 + 0x1c8))) {
    _invalid_parameter_noinfo();
  }
  return local_10 != lVar2;
}




undefined4 FUN_140a8fd60(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x1f8))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x25);
  puVar3 = *(undefined8 **)(param_1 + 0x1f8);
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
    cVar1 = *(char *)((longlong)puVar6 + 0x25);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x1f8);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x1c8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x1f8);
    local_28 = *(longlong *)(param_1 + 0x1c8);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x1f8);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x1c8))) {
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
    uVar5 = *(undefined4 *)(lVar4 + 0x20);
  }
  return uVar5;
}




bool FUN_140a8fe80(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  puVar6 = (undefined8 *)(*(undefined8 **)(param_1 + 0x1b8))[1];
  cVar1 = *(char *)((longlong)puVar6 + 0x25);
  puVar3 = *(undefined8 **)(param_1 + 0x1b8);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar6 + 3) < param_2) {
      puVar4 = (undefined8 *)puVar6[2];
      puVar6 = puVar3;
    }
    else {
      puVar4 = (undefined8 *)*puVar6;
    }
    puVar3 = puVar6;
    puVar6 = puVar4;
    cVar1 = *(char *)((longlong)puVar4 + 0x25);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x188) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar6) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar5 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x1b8);
    local_28 = *(longlong *)(param_1 + 0x188);
  }
  else {
    plVar5 = &local_38;
  }
  local_18 = *plVar5;
  lVar2 = *(longlong *)(param_1 + 0x1b8);
  local_10 = plVar5[1];
  if ((local_18 == 0) || (local_18 != *(longlong *)(param_1 + 0x188))) {
    _invalid_parameter_noinfo();
  }
  return local_10 != lVar2;
}




undefined8 FUN_140a8ff70(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x238))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x238);
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
  puVar8 = *(undefined8 **)(param_1 + 0x238);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x208);
  if (*(longlong *)(param_1 + 0x208) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x238);
    local_28 = *(longlong *)(param_1 + 0x208);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x238);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x208))) {
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




bool FUN_140a90090(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a8ff70(param_1,param_2);
  if (lVar2 == 0) {
    return false;
  }
  iVar1 = FUN_140a81650(lVar2);
  return iVar1 == 5;
}




void FUN_140a900c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140a8ff70(param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_140a81650(lVar1);
  return;
}




undefined4 FUN_140a900e0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a8ff70(param_1,param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_140a811c0(lVar2);
    FUN_140a811d0(lVar2,0);
    (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xe0))(*(longlong **)(param_1 + 0x2e0),param_2,uVar1);
    return uVar1;
  }
  return 0;
}




void FUN_140a90160(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a8ff70(param_1,param_2);
  if (lVar2 != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xd8))(*(longlong **)(param_1 + 0x2e0),param_2);
    FUN_140a811d0(lVar2,uVar1);
  }
  return;
}




void FUN_140a901b0(longlong param_1,ulonglong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_register_00000084;
  uint local_res10 [2];
  uint local_38;
  uint uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  longlong local_28 [4];
  
  uVar4 = (uint)param_2;
  local_res10[0] = uVar4;
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x2e0);
  if (param_3 == 0) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,param_2,CONCAT71((int7)(CONCAT44(in_register_00000084,param_3) >> 8),1));
    plVar1 = (longlong *)(param_1 + 0x1c8);
    FUN_140a8d250(plVar1,(longlong *)&local_38,local_res10);
    lVar2 = *(longlong *)(param_1 + 0x1f8);
    if ((CONCAT44(uStack_34,local_38) == 0) || (CONCAT44(uStack_34,local_38) != *plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (CONCAT44(uStack_2c,iStack_30) != lVar2) {
      FUN_140a8ce90(plVar1,local_28,(longlong *)&local_38);
      return;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x88))(plVar1,param_3);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),param_2 & 0xffffffff);
      if (cVar3 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xf0))(*(longlong **)(param_1 + 0x2e0),param_2 & 0xffffffff,0);
        local_38 = uVar4;
        uStack_34 = uVar4;
        iStack_30 = param_3;
        FUN_140a8cce0((longlong *)(param_1 + 0x1c8),local_28,&local_38);
      }
    }
  }
  return;
}




void FUN_140a90310(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_res10 [2];
  longlong *local_478;
  longlong local_470;
  longlong *local_468;
  longlong *local_458;
  undefined8 local_448;
  CMsg local_438 [1040];
  
  local_448 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  FUN_140a8cc10((longlong *)(param_1 + 0x148),(longlong *)&local_478,local_res10);
  lVar8 = *(longlong *)(param_1 + 0x178);
  lVar9 = 0;
  local_468 = *(longlong **)(param_1 + 0x148);
  if ((local_478 == (longlong *)0x0) || (local_478 != local_468)) {
    _invalid_parameter_noinfo();
  }
  if (local_470 != lVar8) {
    if (local_478 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = lVar9;
    }
    else {
      lVar8 = *local_478;
    }
    if (local_470 == *(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar7 = *(uint **)(local_470 + 0xa8);
    local_478 = (longlong *)0x0;
    if (*(uint **)(local_470 + 0xb0) < puVar7) {
      _invalid_parameter_noinfo();
    }
    plVar2 = *(longlong **)(local_470 + 0x90);
    local_478 = plVar2;
    while( true ) {
      puVar3 = *(uint **)(local_470 + 0xb0);
      local_458 = (longlong *)0x0;
      if (puVar3 < *(uint **)(local_470 + 0xa8)) {
        _invalid_parameter_noinfo();
      }
      local_458 = *(longlong **)(local_470 + 0x90);
      if ((plVar2 == (longlong *)0x0) || (plVar2 != local_458)) {
        _invalid_parameter_noinfo();
      }
      if (puVar7 == puVar3) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = lVar9;
      }
      else {
        lVar8 = *plVar2;
      }
      if (*(uint **)(lVar8 + 0x20) <= puVar7) {
        _invalid_parameter_noinfo();
      }
      uVar1 = *puVar7;
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar1);
      if (cVar4 != '\0') {
        FUN_140a901b0(param_1,(ulonglong)uVar1,0);
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x158))(*(longlong **)(param_1 + 0x2e0),uVar1);
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x168))(*(longlong **)(param_1 + 0x2e0),uVar5);
        if (cVar4 != '\0') {
          FUN_140a9f940(local_438);
          uVar6 = FUN_140a9f9c0(local_438,3,uVar1);
          if ((char)uVar6 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),uVar1);
          }
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 400))(*(longlong **)(param_1 + 0x2e0),uVar5);
          if (cVar4 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x120))(*(longlong **)(param_1 + 0x2e0),uVar1);
          }
          FUN_140a9f990((undefined8 *)local_438);
        }
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = lVar9;
      }
      else {
        lVar8 = *plVar2;
      }
      if (*(uint **)(lVar8 + 0x20) <= puVar7) {
        _invalid_parameter_noinfo();
      }
      puVar7 = puVar7 + 1;
    }
  }
  return;
}




void FUN_140a90550(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *local_28;
  undefined8 *local_20;
  longlong *local_18;
  longlong *plStack_10;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x238))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar5 = *(undefined8 **)(param_1 + 0x238);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar8 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar8[2];
      puVar8 = puVar5;
    }
    else {
      puVar6 = (undefined8 *)*puVar8;
    }
    puVar5 = puVar8;
    puVar8 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  local_20 = puVar5;
  local_28 = *(longlong **)(param_1 + 0x208);
  puVar8 = *(undefined8 **)(param_1 + 0x238);
  if (*(longlong **)(param_1 + 0x208) == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar5 == puVar8) || (param_2 < *(uint *)(puVar5 + 3))) {
    plStack_10 = (longlong *)*(undefined8 *)(param_1 + 0x238);
    local_18 = *(longlong **)(param_1 + 0x208);
    pplVar7 = &local_18;
  }
  else {
    pplVar7 = &local_28;
  }
  plVar2 = *pplVar7;
  plVar3 = pplVar7[1];
  plVar4 = *(longlong **)(param_1 + 0x238);
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x208))) {
    _invalid_parameter_noinfo();
  }
  if (plVar3 != plVar4) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
    }
    if (plVar3 == *(longlong **)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((void *)plVar3[4] != (void *)0x0) {
      FUN_140a813c0((void *)plVar3[4]);
    }
    local_18 = plVar2;
    plStack_10 = plVar3;
    FUN_140a8d320((undefined8 *)(param_1 + 0x208),&local_28,(longlong *)&local_18);
  }
  return;
}




undefined8 * FUN_140a906a0(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_140a8d9c0(param_1,local_28,(longlong *)&local_38,local_48);
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




void FUN_140a907a0(longlong *param_1)

{
  FUN_140a8dce0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a907d0(longlong *param_1)

{
  FUN_140a8b3f0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140a90800(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_140a8dd50(param_1,local_28,(longlong *)&local_38,local_48);
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




undefined4 * FUN_140a90900(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = *param_2;
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  param_1[4] = param_3[2];
  FUN_140a8c540((undefined8 *)(param_1 + 6),(undefined8 *)(param_3 + 4));
  FUN_140a8c540((undefined8 *)(param_1 + 0x12),(undefined8 *)(param_3 + 0x10));
  FUN_140a8c540((undefined8 *)(param_1 + 0x1e),(undefined8 *)(param_3 + 0x1c));
  return param_1;
}




longlong * FUN_140a90980(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_140a8e0a0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140a90a74;
  }
  _invalid_parameter_noinfo();
LAB_140a90a74:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140a90ab0(undefined8 *param_1)

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
  lVar2 = FUN_140a86970();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a90b30(undefined8 *param_1)

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
  lVar2 = FUN_140a86a50();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a90bb0(undefined8 *param_1)

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
  lVar2 = FUN_140a86ab0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0xc1) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a90c30(undefined8 *param_1)

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
  lVar2 = FUN_140a86b20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x25) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140a90cb0(longlong *param_1)

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
  FUN_140a8e430(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140a90d20(undefined8 *param_1)

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
  lVar2 = FUN_140a86b80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140a90da0(longlong *param_1)

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
  FUN_140a8e630(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_140a90e10(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140a8e830((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140a90f04;
  }
  _invalid_parameter_noinfo();
LAB_140a90f04:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined4 * FUN_140a90f40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  FUN_140a8c540((undefined8 *)(param_1 + 6),(undefined8 *)(param_2 + 6));
  FUN_140a8c540((undefined8 *)(param_1 + 0x12),(undefined8 *)(param_2 + 0x12));
  FUN_140a8c540((undefined8 *)(param_1 + 0x1e),(undefined8 *)(param_2 + 0x1e));
  return param_1;
}




void FUN_140a90fc0(longlong param_1)

{
  FUN_140a8a490(param_1 + 0x20);
  return;
}




void FUN_140a90ff0(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  longlong *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 >> 3;
    if (lVar2 < 0x21) {
LAB_140a910c7:
      if (1 < lVar2) {
        FUN_140a873d0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        FUN_140a89ad0((longlong)param_1,(longlong)param_2,param_4);
        FUN_140a8c200(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_140a910c7;
    }
    FUN_140a89860(&local_18,param_1,param_2,param_4);
    plVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_140a90ff0(param_1,local_18,param_3,param_4);
      param_1 = plVar1;
    }
    else {
      FUN_140a90ff0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_140a91120(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  longlong *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 >> 3;
    if (lVar2 < 0x21) {
LAB_140a911f7:
      if (1 < lVar2) {
        FUN_140a87650(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        FUN_140a89de0((longlong)param_1,(longlong)param_2,param_4);
        FUN_140a8c270(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_140a911f7;
    }
    FUN_140a89b70(&local_18,param_1,param_2,param_4);
    plVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_140a91120(param_1,local_18,param_3,param_4);
      param_1 = plVar1;
    }
    else {
      FUN_140a91120(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_140a91250(longlong *param_1)

{
  FUN_140a8dce0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a91280(longlong *param_1)

{
  FUN_140a8b3f0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a912b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint local_res10 [2];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    puVar3 = FUN_140a81580(param_2,*(longlong *)(param_1 + 0x2e0),param_1);
    if (puVar3 == (undefined4 *)0x0) {
      log_InlineLogERROR(&DAT_140aa7368);
    }
    else {
      puVar4 = FUN_140a90800((longlong *)(param_1 + 0x208),local_res10);
      *puVar4 = puVar3;
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x38))(*(longlong **)(param_1 + 0x2e0),param_2);
      uVar2 = tq::DateStamp((ulonglong)uVar2);
      if (uVar2 < *(uint *)(param_1 + 0x2d8)) {
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1b8))(*(longlong **)(param_1 + 0x2e0),param_2,0);
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1c0))(*(longlong **)(param_1 + 0x2e0),param_2,0);
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),param_2);
        uVar5 = FUN_140a821d0(uVar2);
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1c8))(*(longlong **)(param_1 + 0x2e0),param_2,uVar5 & 0xffffffff);
        puVar4 = (undefined8 *)FUN_140a8f680(param_1,param_2);
        if (puVar4 == (undefined8 *)0x0) {
          lVar6 = FUN_140a8f560(param_1,param_2);
          if ((lVar6 != 0) && (uVar7 = FUN_140a9cc40(lVar6,9), 0 < (int)uVar7)) {
            lVar1 = **(longlong **)(param_1 + 0x2e0);
            uVar5 = FUN_140a9cc40(lVar6,6);
            (**(code **)(lVar1 + 0x1d0))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar5 & 0xffffffff);
            lVar1 = **(longlong **)(param_1 + 0x2e0);
            FUN_140a9cc40(lVar6,5);
            (**(code **)(lVar1 + 0x1d8))(*(undefined8 *)(param_1 + 0x2e0),param_2);
            FUN_140a9cd30(lVar6,9,0);
          }
        }
        else {
          lVar6 = **(longlong **)(param_1 + 0x2e0);
          uVar5 = FUN_140a9cc40((longlong)puVar4,6);
          (**(code **)(lVar6 + 0x1d0))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar5 & 0xffffffff);
          lVar6 = **(longlong **)(param_1 + 0x2e0);
          uVar5 = FUN_140a9cc40((longlong)puVar4,5);
          (**(code **)(lVar6 + 0x1d8))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar5 & 0xffffffff);
          FUN_140a8ca00((longlong *)(param_1 + 0x108),local_res10);
          FUN_140a9cba0((longlong)puVar4);
          FUN_140a9cb80(puVar4);
        }
      }
    }
  }
  return;
}




void FUN_140a914e0(longlong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  CMsg local_448 [1040];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    uVar2 = FUN_140a900c0(param_1,param_2);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1e0))(*(longlong **)(param_1 + 0x2e0),param_2);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1e8))(*(longlong **)(param_1 + 0x2e0),param_2);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1f0))(*(longlong **)(param_1 + 0x2e0),param_2);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1f8))(*(longlong **)(param_1 + 0x2e0),param_2);
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),param_2);
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x208))(*(longlong **)(param_1 + 0x2e0),param_2);
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_2);
    uVar10 = FUN_140a8fbe0(param_1,param_2);
    uVar11 = FUN_140a8fc10(param_1,param_2);
    FUN_140a9fe90(local_448);
    uVar12 = FUN_140a9ff40((longlong)local_448,uVar10,uVar11,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
    if ((char)uVar12 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_2,local_448);
    }
    FUN_140a9fee0((undefined8 *)local_448);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a91680(longlong param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStackY_608 [32];
  undefined4 local_578;
  uint local_574;
  uint local_570;
  CMsg local_4d8 [1040];
  uint local_c8;
  undefined4 local_c4;
  char local_c0 [16];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_88;
  undefined4 local_84;
  char local_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140ab7408 ^ (ulonglong)auStackY_608;
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (((cVar6 == '\0') || (param_3 == 0)) || (param_4 < param_3)) {
    return;
  }
  FUN_140a9ef10(local_4d8);
  FUN_140a9f000((longlong)local_4d8,0,param_3,param_4,(int)*(undefined8 *)(param_1 + 0x180),(int)*(undefined8 *)(param_1 + 0x1c0));
  puVar1 = *(undefined8 **)(param_1 + 0x178);
  puVar11 = (undefined8 *)*puVar1;
  plVar2 = *(longlong **)(param_1 + 0x148);
  iVar15 = 0;
  uVar13 = 1;
  do {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar11 == puVar1) goto LAB_140a91baa;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar14 = 0;
    }
    else {
      lVar14 = *plVar2;
    }
    if (puVar11 == *(undefined8 **)(lVar14 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    FUN_140a8eb50(&local_578,(undefined4 *)(puVar11 + 4));
    uVar4 = local_570;
    uVar3 = local_574;
    if ((local_574 == 0) || (local_570 == 0)) {
      FUN_140a8a490((longlong)&local_578);
    }
    else {
      bVar7 = FUN_140a90090(param_1,local_574);
      if ((bVar7) && (bVar7 = FUN_140a90090(param_1,uVar4), bVar7)) {
        if ((param_3 <= uVar13) && (uVar13 <= param_4)) {
          memset(&local_88,0,0x3c);
          memset(&local_c8,0,0x3c);
          local_88 = uVar3;
          pcVar9 = (char *)(**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x60))(*(longlong **)(param_1 + 0x2e0),uVar3);
          tq::SafeCopy(local_80,pcVar9,0x10);
          local_60 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),uVar3);
          local_54 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x208))(*(longlong **)(param_1 + 0x2e0),uVar3);
          local_50 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),uVar3);
          local_70 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),uVar3);
          local_84 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x68))(*(longlong **)(param_1 + 0x2e0),uVar3);
          local_6c = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x70))(*(longlong **)(param_1 + 0x2e0),uVar3);
          uVar8 = FUN_140a8fbe0(param_1,uVar3);
          local_64 = (undefined2)uVar8;
          local_58 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1f8))(*(longlong **)(param_1 + 0x2e0),uVar3);
          local_5c = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1f0))(*(longlong **)(param_1 + 0x2e0),uVar3);
          local_68 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x48))(*(longlong **)(param_1 + 0x2e0),uVar3);
          local_c8 = uVar4;
          pcVar9 = (char *)(**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x60))(*(longlong **)(param_1 + 0x2e0),uVar4);
          tq::SafeCopy(local_c0,pcVar9,0x10);
          local_a0 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),uVar4);
          local_94 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x208))(*(longlong **)(param_1 + 0x2e0),uVar4);
          local_90 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),uVar4);
          local_b0 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),uVar4);
          local_c4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x68))(*(longlong **)(param_1 + 0x2e0),uVar4);
          local_ac = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x70))(*(longlong **)(param_1 + 0x2e0),uVar4);
          uVar8 = FUN_140a8fbe0(param_1,uVar4);
          local_a4 = (undefined2)uVar8;
          local_98 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1f8))(*(longlong **)(param_1 + 0x2e0),uVar4);
          local_9c = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1f0))(*(longlong **)(param_1 + 0x2e0),uVar4);
          local_a8 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x48))(*(longlong **)(param_1 + 0x2e0),uVar4);
          uVar10 = FUN_140a9f070((longlong)local_4d8,&local_88,&local_c8);
          if ((char)uVar10 == '\0') {
            FUN_140a8a490((longlong)&local_578);
LAB_140a91baa:
            FUN_140a9f170((longlong)local_4d8);
            FUN_140a9f200((longlong)local_4d8,iVar15);
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_2,local_4d8);
            FUN_140a9ef60((undefined8 *)local_4d8);
            return;
          }
        }
        iVar15 = iVar15 + 1;
        uVar13 = uVar13 + 1;
        FUN_140a8a490((longlong)&local_578);
      }
      else {
        FUN_140a8a490((longlong)&local_578);
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar11 + 0xc1) == '\0') {
      puVar12 = puVar11;
      puVar5 = (undefined8 *)puVar11[2];
      if (*(char *)((longlong)puVar11[2] + 0xc1) == '\0') {
        do {
          puVar11 = puVar5;
          puVar5 = (undefined8 *)*puVar11;
        } while (*(char *)((longlong)*puVar11 + 0xc1) == '\0');
      }
      else {
        do {
          puVar11 = (undefined8 *)puVar12[1];
          if (*(char *)((longlong)puVar11 + 0xc1) != '\0') break;
          bVar7 = puVar12 == (undefined8 *)puVar11[2];
          puVar12 = puVar11;
        } while (bVar7);
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140a91c20(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  uint local_a8;
  longlong local_a0;
  uint local_98 [2];
  undefined8 *local_90;
  undefined8 local_88;
  longlong local_80 [3];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  char local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  ulonglong local_18;
  
  local_88 = 0xfffffffffffffffe;
  local_18 = DAT_140ab7408 ^ (ulonglong)auStack_d8;
  local_a8 = param_2;
  local_a0 = param_1;
  puVar1 = (undefined8 *)FUN_140a8f340(param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_23 = 1;
    local_54[0] = '\0';
    local_54[1] = '\0';
    local_54[2] = '\0';
    local_54[3] = '\0';
    local_54[4] = '\0';
    local_54[5] = '\0';
    local_54[6] = '\0';
    local_54[7] = '\0';
    local_54[8] = '\0';
    local_54[9] = '\0';
    local_54[10] = '\0';
    local_54[0xb] = '\0';
    local_54[0xc] = '\0';
    local_54[0xd] = '\0';
    local_54[0xe] = '\0';
    local_54[0xf] = '\0';
    local_68 = 0;
    local_64 = *(undefined4 *)(param_1 + 0x2d8);
    local_60 = 0;
    local_5c = 0;
    local_58 = param_2;
    local_44 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x68))(*(longlong **)(param_1 + 0x2e0),param_2);
    local_40 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x70))(*(longlong **)(param_1 + 0x2e0),param_2);
    local_3c = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),param_2);
    local_38 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_2);
    local_34 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x208))(*(longlong **)(param_1 + 0x2e0),param_2);
    local_30 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),param_2);
    local_23 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x50))(*(longlong **)(param_1 + 0x2e0),local_44);
    pcVar2 = (char *)(**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x60))(*(longlong **)(param_1 + 0x2e0),param_2);
    tq::SafeCopy(local_54,pcVar2,0x10);
    puVar1 = FUN_140a9d170();
    if (puVar1 == (undefined8 *)0x0) {
      local_b8 = 0x503;
      log_InlineLogERROR(&DAT_140aa7368);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      plVar3 = (longlong *)InstanceGet();
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,"cq_arenic");
      if (plVar3 == (longlong *)0x0) {
        local_b8 = 0x506;
        log_InlineLogERROR(&DAT_140aa7368);
        puVar1 = (undefined8 *)0x0;
      }
      else {
        uVar4 = FUN_140a9d240((longlong)puVar1,plVar3,(longlong)&local_68);
        if ((char)uVar4 == '\0') {
          local_b8 = 0x50b;
          log_InlineLogERROR(&DAT_140aa7368);
          FUN_140a9cb80(puVar1);
          puVar1 = (undefined8 *)0x0;
        }
        else {
          local_98[0] = param_2;
          local_90 = puVar1;
          FUN_140a8c850((longlong *)(param_1 + 0x48),local_80,local_98);
        }
      }
    }
  }
  else {
    log_InlineLogERROR("CArenicSystem::CreateAthlete, %u, has Athlete");
  }
  return puVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140a91f00(longlong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  uint local_b8;
  longlong local_b0;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90 [3];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  char local_64 [16];
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  ulonglong local_28;
  
  local_98 = 0xfffffffffffffffe;
  local_28 = DAT_140ab7408 ^ (ulonglong)auStack_e8;
  local_b8 = param_2;
  local_b0 = param_1;
  lVar3 = FUN_140a8f340(param_1,param_2);
  lVar4 = FUN_140a8f440(param_1,param_2);
  if (lVar4 == 0) {
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_33 = 1;
    local_64[0] = '\0';
    local_64[1] = '\0';
    local_64[2] = '\0';
    local_64[3] = '\0';
    local_64[4] = '\0';
    local_64[5] = '\0';
    local_64[6] = '\0';
    local_64[7] = '\0';
    local_64[8] = '\0';
    local_64[9] = '\0';
    local_64[10] = '\0';
    local_64[0xb] = '\0';
    local_64[0xc] = '\0';
    local_64[0xd] = '\0';
    local_64[0xe] = '\0';
    local_64[0xf] = '\0';
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = param_2;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),param_2);
    if (cVar1 == '\0') {
      if (lVar3 == 0) {
        log_InlineLogERROR("CArenicSystem::CreateHonorAthlete, User:%u not find");
        return (undefined8 *)0x0;
      }
      local_54 = FUN_140a9cf20(lVar3);
      local_50 = FUN_140a9cf30(lVar3);
      local_4c = FUN_140a9cf40(lVar3);
      uVar8 = FUN_140a821d0(local_4c);
      local_48 = (undefined4)uVar8;
      uVar8 = FUN_140a9cc40(lVar3,5);
      local_44 = (undefined4)uVar8;
      uVar8 = FUN_140a9cc40(lVar3,6);
      local_40 = (undefined4)uVar8;
      lVar4 = **(longlong **)(param_1 + 0x2e0);
      uVar2 = FUN_140a9cf20(lVar3);
      local_33 = (**(code **)(lVar4 + 0x50))(*(undefined8 *)(param_1 + 0x2e0),uVar2);
      pcVar5 = (char *)FUN_140a9cf10(lVar3);
      tq::SafeCopy(local_64,pcVar5,0x10);
    }
    else {
      local_54 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x68))(*(longlong **)(param_1 + 0x2e0),param_2);
      local_50 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x70))(*(longlong **)(param_1 + 0x2e0),param_2);
      local_4c = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),param_2);
      local_48 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_2);
      local_44 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x208))(*(longlong **)(param_1 + 0x2e0),param_2);
      local_40 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),param_2);
      local_33 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x50))(*(longlong **)(param_1 + 0x2e0),local_54);
      pcVar5 = (char *)(**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x60))(*(longlong **)(param_1 + 0x2e0),param_2);
      tq::SafeCopy(local_64,pcVar5,0x10);
    }
    puVar6 = FUN_140a9d170();
    if (puVar6 == (undefined8 *)0x0) {
      local_c8 = 0x54c;
      log_InlineLogERROR(&DAT_140aa7368);
      puVar6 = (undefined8 *)0x0;
    }
    else {
      plVar7 = (longlong *)InstanceGet();
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,"cq_arenic");
      if (plVar7 == (longlong *)0x0) {
        local_c8 = 0x54f;
        log_InlineLogERROR(&DAT_140aa7368);
        puVar6 = (undefined8 *)0x0;
      }
      else {
        uVar8 = FUN_140a9d240((longlong)puVar6,plVar7,(longlong)&local_78);
        if ((char)uVar8 == '\0') {
          local_c8 = 0x554;
          log_InlineLogERROR(&DAT_140aa7368);
          FUN_140a9cb80(puVar6);
          puVar6 = (undefined8 *)0x0;
        }
        else {
          local_a8[0] = param_2;
          local_a0 = puVar6;
          FUN_140a8c850((longlong *)(param_1 + 200),local_90,local_a8);
        }
      }
    }
  }
  else {
    log_InlineLogERROR("CArenicSystem::CreateHonorAthlete, %u, has HonorAthlete");
    puVar6 = (undefined8 *)0x0;
  }
  return puVar6;
}




undefined4 FUN_140a922c0(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    lVar3 = FUN_140a8ff70(param_1,param_2);
    if (lVar3 != 0) {
      uVar2 = FUN_140a81090(lVar3);
      if (299 < uVar2) {
        return 500;
      }
      if (0xb3 < uVar2) {
        return 0x15e;
      }
      uVar4 = 100;
      if (0x3b < uVar2) {
        uVar4 = 200;
      }
      return uVar4;
    }
    log_InlineLogERROR(&DAT_140aa7368);
  }
  return 0;
}




undefined8 FUN_140a92380(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 extraout_var;
  undefined6 uVar4;
  undefined2 uVar5;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    lVar3 = FUN_140a8ff70(param_1,param_2);
    if (lVar3 != 0) {
      uVar5 = 10;
      uVar2 = FUN_140a81090(lVar3);
      uVar4 = (undefined6)(CONCAT44(extraout_var,uVar2) >> 0x10);
      if (299 < uVar2) {
        return CONCAT62(uVar4,100);
      }
      if (0xb3 < uVar2) {
        return CONCAT62(uVar4,0x32);
      }
      if (0x3b < uVar2) {
        uVar5 = 0x14;
      }
      return CONCAT62(uVar4,uVar5);
    }
    log_InlineLogERROR(&DAT_140aa7368);
  }
  return 0;
}




void FUN_140a92450(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140a8ff70(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a811a0(lVar1,param_3);
  return;
}




void FUN_140a924b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140a8ff70(param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_140a811b0(lVar1);
  return;
}




void FUN_140a924d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140a8ff70(param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_140a81040(lVar1);
  return;
}




undefined8 FUN_140a924f0(longlong param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)FUN_140a8ff70(param_1,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar2 = FUN_140a81660(puVar1,param_3);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ulonglong FUN_140a92520(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  
  lVar2 = FUN_140a8ff70(param_1,param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_140a81040(lVar2);
    uVar3 = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 8) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




void FUN_140a92550(longlong *param_1,undefined4 *param_2)

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
  FUN_140a90980(param_1,local_18,&local_28,param_2);
  return;
}




undefined8 * FUN_140a92600(undefined8 *param_1)

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
  lVar2 = FUN_140a86970();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a92680(undefined8 *param_1)

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
  lVar2 = FUN_140a86a50();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140a92700(longlong *param_1)

{
  FUN_140a90cb0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a92730(longlong *param_1)

{
  FUN_140a90da0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a92760(longlong *param_1,undefined8 *param_2)

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
  FUN_140a90e10(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140a92810(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(param_2 + 0x20);
  return;
}




undefined8 * FUN_140a92840(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_140a90f40((undefined4 *)(param_1 + 3),param_5);
  *(undefined1 *)(param_1 + 0x18) = param_6;
  *(undefined1 *)((longlong)param_1 + 0xc1) = 0;
  return param_1;
}




void FUN_140a92890(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_140a90ff0((longlong *)param_1[1],(longlong *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




void FUN_140a928f0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_140a91120((longlong *)param_1[1],(longlong *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




void FUN_140a92950(longlong *param_1)

{
  FUN_140a90cb0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a92980(longlong *param_1)

{
  FUN_140a90da0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a929b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  IStringManager *pIVar6;
  undefined8 uVar7;
  uint local_res10 [2];
  uint local_458;
  uint uStack_454;
  undefined4 local_450;
  undefined4 uStack_44c;
  longlong local_448 [3];
  undefined8 local_430;
  CMsg local_428 [1040];
  
  local_430 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if ((((cVar2 != '\0') && (uVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),param_2), 0x27 < uVar3)) &&
      (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_2), iVar4 != 0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xb0))(*(longlong **)(param_1 + 0x2e0),param_2), cVar2 == '\0')) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x118))(*(longlong **)(param_1 + 0x2e0),param_2);
    if (cVar2 == '\0') {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x158))(*(longlong **)(param_1 + 0x2e0),param_2);
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x168))(*(longlong **)(param_1 + 0x2e0),uVar5);
      if (cVar2 != '\0') {
        FUN_140a8d250((longlong *)(param_1 + 0x188),(longlong *)&local_458,local_res10);
        lVar1 = *(longlong *)(param_1 + 0x1b8);
        local_448[0] = *(longlong *)(param_1 + 0x188);
        if ((CONCAT44(uStack_454,local_458) == 0) || (CONCAT44(uStack_454,local_458) != local_448[0])) {
          _invalid_parameter_noinfo();
        }
        if (CONCAT44(uStack_44c,local_450) == lVar1) {
          local_450 = 0;
          local_458 = param_2;
          uStack_454 = param_2;
          FUN_140a8cce0((longlong *)(param_1 + 0x188),local_448,&local_458);
        }
        else {
          iVar4 = FUN_140a924d0(param_1,param_2);
          if ((iVar4 != 0) && (iVar4 = FUN_140a924d0(param_1,param_2), iVar4 != 5)) {
            return;
          }
        }
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x170))(*(longlong **)(param_1 + 0x2e0),uVar5);
        if (cVar2 == '\0') {
          FUN_140a924f0(param_1,param_2,1);
        }
        else {
          FUN_140a924f0(param_1,param_2,6);
        }
        FUN_140a9ebe0(local_428);
        uVar7 = FUN_140a9ec90((longlong)local_428,0);
        if ((char)uVar7 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_2,local_428);
        }
        FUN_140a9ec30((undefined8 *)local_428);
      }
    }
    else {
      pIVar6 = theInstance();
      lVar1 = **(longlong **)(param_1 + 0x2e0);
      uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_ARENIC_APPLY_REJECT_IN_TEAM_ARENIC");
      (**(code **)(lVar1 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar7);
    }
  }
  return;
}




void FUN_140a92c00(longlong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x158))(*(longlong **)(param_1 + 0x2e0),param_2);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x168))(*(longlong **)(param_1 + 0x2e0),uVar2);
    if (((cVar1 != '\0') && (lVar4 = FUN_140a8ff70(param_1,param_2), lVar4 != 0)) && (iVar3 = FUN_140a81040(lVar4), iVar3 == 5)) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_2);
      if (iVar3 == 0) {
        puVar5 = (undefined4 *)FUN_140a8ff70(param_1,param_2);
        if (puVar5 == (undefined4 *)0x0) {
          return;
        }
        iVar3 = 0;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x170))(*(longlong **)(param_1 + 0x2e0),uVar2);
        if (cVar1 == '\0') {
          puVar5 = (undefined4 *)FUN_140a8ff70(param_1,param_2);
          if (puVar5 == (undefined4 *)0x0) {
            return;
          }
          iVar3 = 1;
        }
        else {
          puVar5 = (undefined4 *)FUN_140a8ff70(param_1,param_2);
          if (puVar5 == (undefined4 *)0x0) {
            return;
          }
          iVar3 = 6;
        }
      }
      FUN_140a81660(puVar5,iVar3);
    }
  }
  return;
}




void FUN_140a92d00(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x268);
    if (plVar1 < *(longlong **)(param_1 + 0x260)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *(longlong *)(param_1 + 0x248);
    plVar3 = *(longlong **)(param_1 + 0x260);
    if (*(longlong **)(param_1 + 0x268) < plVar3) {
      _invalid_parameter_noinfo();
    }
    if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0x248))) {
      _invalid_parameter_noinfo();
    }
    FUN_140a90ff0(plVar3,plVar1,(longlong)plVar1 - (longlong)plVar3 >> 3,0);
  }
  else if (param_2 == 1) {
    plVar1 = *(longlong **)(param_1 + 0x298);
    if (plVar1 < *(longlong **)(param_1 + 0x290)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *(longlong *)(param_1 + 0x278);
    plVar3 = *(longlong **)(param_1 + 0x290);
    if (*(longlong **)(param_1 + 0x298) < plVar3) {
      _invalid_parameter_noinfo();
    }
    if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0x278))) {
      _invalid_parameter_noinfo();
    }
    FUN_140a91120(plVar3,plVar1,(longlong)plVar1 - (longlong)plVar3 >> 3,0);
  }
  else if (param_2 == 2) {
    plVar1 = *(longlong **)(param_1 + 0x2c8);
    if (plVar1 < *(longlong **)(param_1 + 0x2c0)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    plVar3 = *(longlong **)(param_1 + 0x2c0);
    if (*(longlong **)(param_1 + 0x2c8) < plVar3) {
      _invalid_parameter_noinfo();
    }
    if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0x2a8))) {
      _invalid_parameter_noinfo();
    }
    FUN_140a90ff0(plVar3,plVar1,(longlong)plVar1 - (longlong)plVar3 >> 3,0);
  }
  else {
    log_InlineLogERROR("CArenicSystem::Sort, nSortType not exist: %d");
  }
  return;
}




void FUN_140a92f90(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  IStringManager *pIVar11;
  undefined8 *local_res20;
  int local_124;
  undefined8 *local_120;
  longlong local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  uint local_e0;
  undefined4 local_dc;
  int local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  uint local_c0;
  undefined4 local_bc;
  int local_b8;
  uint local_b0;
  undefined4 local_ac;
  int local_a8;
  uint local_a0;
  undefined4 local_9c;
  int local_98;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_120 = (undefined8 *)((ulonglong)local_120 & 0xffffffff00000000);
  uVar4 = FUN_140a8fbe0(param_1,param_2);
  uVar5 = FUN_140a8fc10(param_1,param_2);
  lVar7 = FUN_140a8f340(param_1,param_2);
  lVar8 = FUN_140a8f440(param_1,param_2);
  local_118 = lVar8;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),param_2);
  if (cVar2 == '\0') {
    if (lVar7 == 0) {
      if (param_3 != 1) {
        return;
      }
      if (lVar8 == 0) {
        return;
      }
      uVar10 = FUN_140a9cc40(lVar8,6);
      local_124 = (int)uVar10;
      uVar6 = FUN_140a9cf40(lVar8);
      local_res20 = (undefined8 *)CONCAT44(local_res20._4_4_,uVar6);
    }
    else {
      uVar10 = FUN_140a9cc40(lVar7,4);
      local_120 = (undefined8 *)CONCAT44(local_120._4_4_,(int)uVar10);
      uVar10 = FUN_140a9cc40(lVar7,6);
      local_124 = (int)uVar10;
      uVar6 = FUN_140a9cf40(lVar7);
      local_res20 = (undefined8 *)CONCAT44(local_res20._4_4_,uVar6);
    }
  }
  else {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_2);
    local_120 = (undefined8 *)CONCAT44(local_120._4_4_,uVar6);
    local_124 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),param_2);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),param_2);
    local_res20 = (undefined8 *)CONCAT44(local_res20._4_4_,uVar6);
  }
  if (param_3 == 0) {
    iVar1 = (int)local_120;
    if ((int)local_120 == 0) {
      return;
    }
    if (lVar7 == 0) {
      if (0x419 < (ulonglong)(*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260) >> 3)) {
        plVar9 = (longlong *)FUN_140a8aab0((longlong *)(param_1 + 0x248));
        lVar7 = *plVar9;
        if (lVar7 == 0) {
          return;
        }
        local_ec = local_res20._0_4_;
        local_e8 = (int)local_120;
        local_f0 = param_2;
        uVar10 = FUN_140a9cc40(lVar7,3);
        local_100 = (uint)uVar10;
        local_fc = FUN_140a9cf40(lVar7);
        uVar10 = FUN_140a9cc40(lVar7,4);
        local_f8 = (undefined4)uVar10;
        bVar3 = FUN_140a821a0(param_1,&local_f0,&local_100);
        if (!bVar3) {
          return;
        }
      }
      local_120 = FUN_140a91c20(param_1,param_2);
      if (local_120 == (undefined8 *)0x0) {
        return;
      }
      FUN_140a92760((longlong *)(param_1 + 0x248),&local_120);
    }
    else {
      if ((uVar4 < 0x41b) && (uVar4 != 0)) {
        if ((uVar4 == 1) || ((int)(*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260) >> 3) < (int)(uVar4 - 1))) {
          uVar6 = local_res20._0_4_;
        }
        else {
          if ((ulonglong)(*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260) >> 3) <= (ulonglong)(longlong)(int)(uVar4 - 2)) {
            _invalid_parameter_noinfo();
          }
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x260) + (longlong)(int)(uVar4 - 2) * 8);
          uVar6 = local_res20._0_4_;
          local_ac = local_res20._0_4_;
          local_a8 = iVar1;
          local_b0 = param_2;
          uVar10 = FUN_140a9cc40(lVar7,3);
          local_d0 = (uint)uVar10;
          local_cc = FUN_140a9cf40(lVar7);
          uVar10 = FUN_140a9cc40(lVar7,4);
          local_c8 = (undefined4)uVar10;
          bVar3 = FUN_140a821a0(param_1,&local_b0,&local_d0);
          if (bVar3) goto LAB_140a936f0;
        }
        if ((int)(*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260) >> 3) < (int)(uVar4 + 1)) {
          return;
        }
        if ((ulonglong)(*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260) >> 3) <= (ulonglong)(longlong)(int)uVar4) {
          _invalid_parameter_noinfo();
        }
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x260) + (longlong)(int)uVar4 * 8);
        local_88 = iVar1;
        local_90 = param_2;
        local_8c = uVar6;
        uVar10 = FUN_140a9cc40(lVar7,3);
        local_70 = (uint)uVar10;
        local_6c = FUN_140a9cf40(lVar7);
        uVar10 = FUN_140a9cc40(lVar7,4);
        local_68 = (undefined4)uVar10;
        bVar3 = FUN_140a821a0(param_1,&local_70,&local_90);
      }
      else {
        if ((ulonglong)(*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260) >> 3) < 0x41a) {
          log_InlineLogERROR("CArenicSystem::OnDataChange ARENIC_SORT_ATHLETE_POINT rank is err, unOldRank:%d.");
          goto LAB_140a936f0;
        }
        plVar9 = (longlong *)FUN_140a8aab0((longlong *)(param_1 + 0x248));
        lVar7 = *plVar9;
        if (lVar7 == 0) {
          return;
        }
        local_3c = local_res20._0_4_;
        local_38 = iVar1;
        local_40 = param_2;
        uVar10 = FUN_140a9cc40(lVar7,3);
        local_50 = (uint)uVar10;
        local_4c = FUN_140a9cf40(lVar7);
        uVar10 = FUN_140a9cc40(lVar7,4);
        local_48 = (undefined4)uVar10;
        bVar3 = FUN_140a821a0(param_1,&local_40,&local_50);
      }
      if (bVar3 == false) {
        return;
      }
    }
LAB_140a936f0:
    FUN_140a92d00(param_1,0);
    FUN_140a8ebc0(param_1,0);
    uVar5 = FUN_140a8fbe0(param_1,param_2);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),param_2);
    if (cVar2 == '\0') {
      return;
    }
    if ((((uVar4 == 0) || (1 < uVar4)) && (uVar5 != 0)) && (uVar5 == 1)) {
      pIVar11 = theInstance();
      lVar7 = **(longlong **)(param_1 + 0x2e0);
      uVar10 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ATHLETE_UP_TO_1");
      (**(code **)(lVar7 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar10,1);
    }
    else {
      if (((uVar4 == 0) || (5 < uVar4)) && ((uVar5 != 0 && (uVar5 < 6)))) {
        pIVar11 = theInstance();
        lVar7 = **(longlong **)(param_1 + 0x2e0);
        uVar10 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ATHLETE_UP_TO_5");
        (**(code **)(lVar7 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar10,uVar5);
      }
      else if (((uVar4 == 0) || (10 < uVar4)) && ((uVar5 != 0 && (uVar5 < 0xb)))) {
        pIVar11 = theInstance();
        lVar7 = **(longlong **)(param_1 + 0x2e0);
        uVar10 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ATHLETE_UP_TO_10");
        (**(code **)(lVar7 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar10,uVar5);
      }
      else if ((((uVar4 == 0) || (0x14 < uVar4)) && (uVar5 != 0)) && (uVar5 < 0x15)) {
        pIVar11 = theInstance();
        lVar7 = **(longlong **)(param_1 + 0x2e0);
        uVar10 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ATHLETE_UP_TO_20");
        (**(code **)(lVar7 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar10,uVar5);
      }
      else if (((uVar4 == 0) || (0x32 < uVar4)) && ((uVar5 != 0 && (uVar5 < 0x33)))) {
        pIVar11 = theInstance();
        lVar7 = **(longlong **)(param_1 + 0x2e0);
        uVar10 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ATHLETE_UP_TO_50");
        (**(code **)(lVar7 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar10,uVar5);
      }
      else if (((uVar4 == 0) || (100 < uVar4)) && ((uVar5 != 0 && (uVar5 < 0x65)))) {
        pIVar11 = theInstance();
        lVar7 = **(longlong **)(param_1 + 0x2e0);
        uVar10 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ATHLETE_UP_TO_100");
        (**(code **)(lVar7 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar10,uVar5);
      }
      else if ((((uVar4 == 0) || (500 < uVar4)) && (uVar5 != 0)) && (uVar5 < 0x1f5)) {
        pIVar11 = theInstance();
        lVar7 = **(longlong **)(param_1 + 0x2e0);
        uVar10 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ATHLETE_UP_TO_500");
        (**(code **)(lVar7 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar10,uVar5);
      }
      else if ((uVar4 == 0) || (1000 < uVar4)) {
        if (uVar5 == 0) {
          return;
        }
        if (uVar5 < 0x3e9) {
          pIVar11 = theInstance();
          lVar7 = **(longlong **)(param_1 + 0x2e0);
          uVar10 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ATHLETE_UP_TO_1000");
          (**(code **)(lVar7 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar10,uVar5);
        }
      }
      if (uVar5 == 0) {
        return;
      }
    }
    if (uVar4 <= uVar5) {
      return;
    }
    pIVar11 = theInstance();
    lVar7 = **(longlong **)(param_1 + 0x2e0);
    uVar10 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ATHLETE_UP");
    (**(code **)(lVar7 + 0x20))(*(undefined8 *)(param_1 + 0x2e0),param_2,0x7e6,uVar10,uVar5);
    return;
  }
  if (param_3 != 1) {
    return;
  }
  if (lVar8 == 0) {
    if (0x419 < (ulonglong)(*(longlong *)(param_1 + 0x298) - *(longlong *)(param_1 + 0x290) >> 3)) {
      plVar9 = (longlong *)FUN_140a8aab0((longlong *)(param_1 + 0x278));
      lVar7 = *plVar9;
      if (lVar7 == 0) {
        return;
      }
      local_dc = local_res20._0_4_;
      local_d8 = local_124;
      local_e0 = param_2;
      uVar10 = FUN_140a9cc40(lVar7,3);
      local_60 = (uint)uVar10;
      local_5c = FUN_140a9cf40(lVar7);
      uVar10 = FUN_140a9cc40(lVar7,6);
      local_58 = (undefined4)uVar10;
      bVar3 = FUN_140a821a0(param_1,&local_e0,&local_60);
      if (!bVar3) {
        return;
      }
    }
    local_res20 = FUN_140a91f00(param_1,param_2);
    if (local_res20 == (undefined8 *)0x0) {
      return;
    }
    FUN_140a92760((longlong *)(param_1 + 0x278),&local_res20);
  }
  else {
    if ((uVar5 < 0x41b) && (uVar5 != 0)) {
      if (uVar5 == 1) {
        return;
      }
      if ((ulonglong)(*(longlong *)(param_1 + 0x298) - *(longlong *)(param_1 + 0x290) >> 3) <= (ulonglong)uVar5) {
        return;
      }
      if ((ulonglong)(*(longlong *)(param_1 + 0x298) - *(longlong *)(param_1 + 0x290) >> 3) <= (ulonglong)(uVar5 - 2)) {
        _invalid_parameter_noinfo();
      }
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x290) + (ulonglong)(uVar5 - 2) * 8);
      local_bc = local_res20._0_4_;
      local_b8 = local_124;
      local_c0 = param_2;
      uVar10 = FUN_140a9cc40(lVar7,3);
      local_80 = (uint)uVar10;
      local_7c = FUN_140a9cf40(lVar7);
      uVar10 = FUN_140a9cc40(lVar7,6);
      local_78 = (undefined4)uVar10;
      bVar3 = FUN_140a821a0(param_1,&local_c0,&local_80);
    }
    else {
      if ((ulonglong)(*(longlong *)(param_1 + 0x298) - *(longlong *)(param_1 + 0x290) >> 3) < 0x41a) {
        if (local_124 == 0) {
          return;
        }
        FUN_140a92760((longlong *)(param_1 + 0x278),&local_118);
        goto LAB_140a9338e;
      }
      plVar9 = (longlong *)FUN_140a8aab0((longlong *)(param_1 + 0x278));
      lVar7 = *plVar9;
      if (lVar7 == 0) {
        return;
      }
      local_9c = local_res20._0_4_;
      local_98 = local_124;
      local_a0 = param_2;
      uVar10 = FUN_140a9cc40(lVar7,3);
      local_110 = (uint)uVar10;
      local_10c = FUN_140a9cf40(lVar7);
      uVar10 = FUN_140a9cc40(lVar7,6);
      local_108 = (undefined4)uVar10;
      bVar3 = FUN_140a821a0(param_1,&local_a0,&local_110);
      if (!bVar3) {
        return;
      }
      FUN_140a92760((longlong *)(param_1 + 0x278),&local_118);
      bVar3 = true;
    }
    if (bVar3 == false) {
      return;
    }
  }
LAB_140a9338e:
  FUN_140a92d00(param_1,1);
  FUN_140a8ebc0(param_1,1);
  return;
}




undefined4 FUN_140a93a00(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  ushort uVar16;
  longlong lVar17;
  ushort uVar18;
  undefined4 *puVar19;
  bool bVar20;
  longlong *local_res18;
  uint local_res20;
  longlong *local_188 [3];
  undefined4 *local_170;
  undefined4 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_148;
  uint local_144;
  longlong *local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 local_78;
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
  
  local_78 = 0xfffffffffffffffe;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (((cVar4 != '\0') && (iVar7 = FUN_140a924d0(param_1,param_2), iVar7 == 1)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 200))(*(longlong **)(param_1 + 0x2e0),param_2), cVar4 != '\0')) {
    lVar10 = FUN_140a8ff70(param_1,param_2);
    local_158 = (longlong *)lVar10;
    if (lVar10 == 0) {
      log_InlineLogERROR(&DAT_140aa7368);
    }
    else {
      local_res20 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_2);
      local_144 = FUN_140a8fbe0(param_1,param_2);
      local_148 = FUN_140a922c0(param_1,param_2);
      uVar11 = FUN_140a92380(param_1,param_2);
      uVar5 = (ushort)uVar11;
      local_res18 = operator_new(8);
      if (local_res18 == (longlong *)0x0) {
        local_188[0] = (longlong *)0x0;
      }
      else {
        *local_res18 = (longlong)local_188;
        local_188[0] = local_res18;
      }
      lVar15 = 0;
      local_170 = (undefined4 *)0x0;
      local_168 = (undefined4 *)0x0;
      local_160 = 0;
      plVar13 = (longlong *)**(undefined8 **)(param_1 + 0x1b8);
      local_138 = *(longlong **)(param_1 + 0x188);
      plStack_f0 = *(longlong **)(param_1 + 0x1b8);
      local_f8 = *(longlong **)(param_1 + 0x188);
      plStack_130 = plVar13;
      local_c8 = local_138;
      plStack_c0 = plVar13;
      local_b8 = local_f8;
      plStack_b0 = plStack_f0;
LAB_140a93bc3:
      if ((local_138 == (longlong *)0x0) || (local_138 != local_b8)) {
        _invalid_parameter_noinfo();
      }
      puVar19 = local_168;
      if (plVar13 != plStack_b0) {
        if (local_138 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar17 = lVar15;
        }
        else {
          lVar17 = *local_138;
        }
        if (plVar13 == *(longlong **)(lVar17 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar12 = *(uint *)((longlong)plVar13 + 0x1c);
        local_res18 = (longlong *)CONCAT44(local_res18._4_4_,uVar12);
        if (((uVar12 != param_2) && (uVar8 = FUN_140a810e0(lVar10), uVar12 != uVar8)) &&
           ((cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar12), cVar4 != '\0' &&
            ((cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 200))(*(longlong **)(param_1 + 0x2e0),uVar12), cVar4 != '\0' &&
             (iVar7 = FUN_140a924d0(param_1,uVar12), iVar7 == 1)))))) {
          uVar8 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),uVar12);
          uVar9 = FUN_140a8fbe0(param_1,uVar12);
          iVar7 = FUN_140a922c0(param_1,uVar12);
          uVar11 = FUN_140a92380(param_1,uVar12);
          uVar6 = (ushort)uVar11;
          if ((((int)(local_res20 - local_148) < 1) || (local_res20 - local_148 <= uVar8)) &&
             ((uVar8 <= local_148 + local_res20 && ((((int)(uVar8 - iVar7) < 1 || (uVar8 - iVar7 <= local_res20)) && (local_res20 <= iVar7 + uVar8)))))) {
            FUN_140a92550((longlong *)local_188,(undefined4 *)&local_res18);
            lVar10 = (longlong)local_158;
          }
          else {
            uVar16 = (ushort)local_144;
            lVar10 = (longlong)local_158;
            if ((((uVar16 != 0) && (uVar16 < 0x3e9)) && (uVar18 = (ushort)uVar9, uVar18 != 0)) && ((uVar18 < 0x3e9 && (uVar5 != 0)))) {
              uVar12 = local_144 & 0xffff;
              iVar7 = uVar12 - uVar5;
              if (((iVar7 < 1) || ((ushort)iVar7 <= uVar18)) && ((uVar9 = uVar9 & 0xffff, uVar9 <= uVar12 + uVar5 && (uVar6 != 0)))) {
                iVar7 = uVar9 - uVar6;
                if (((iVar7 < 1) || ((ushort)iVar7 <= uVar16)) && (uVar12 <= uVar6 + uVar9)) {
                  FUN_140a92550((longlong *)local_188,(undefined4 *)&local_res18);
                  lVar10 = (longlong)local_158;
                }
              }
            }
          }
        }
        if (local_138 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar13 + 0x25) == '\0') {
          plVar14 = plVar13;
          plVar3 = (longlong *)plVar13[2];
          if (*(char *)(plVar13[2] + 0x25) == '\0') {
            do {
              plVar13 = plVar3;
              plVar3 = (longlong *)*plVar13;
              local_d8 = plVar13;
            } while (*(char *)(*plVar13 + 0x25) == '\0');
          }
          else {
            do {
              plVar13 = (longlong *)plVar14[1];
              if (*(char *)((longlong)plVar13 + 0x25) != '\0') break;
              bVar20 = plVar14 == (longlong *)plVar13[2];
              plVar14 = plVar13;
            } while (bVar20);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_140a93bc3;
      }
      if ((longlong)local_168 - (longlong)local_170 >> 2 != 0) {
        local_118 = (longlong *)0x0;
        if (local_168 < local_170) {
          _invalid_parameter_noinfo();
        }
        puVar2 = local_170;
        plVar13 = local_188[0];
        local_118 = local_188[0];
        uStack_110 = puVar19;
        local_118._0_4_ = SUB84(local_188[0],0);
        local_118._4_4_ = (undefined4)((ulonglong)local_188[0] >> 0x20);
        uStack_110._0_4_ = SUB84(puVar19,0);
        uStack_110._4_4_ = (undefined4)((ulonglong)puVar19 >> 0x20);
        local_68 = (undefined4)local_118;
        uStack_64 = local_118._4_4_;
        uStack_60 = (undefined4)uStack_110;
        uStack_5c = uStack_110._4_4_;
        local_128 = (longlong *)0x0;
        local_118 = plVar13;
        uStack_110 = puVar19;
        if (local_168 < local_170) {
          _invalid_parameter_noinfo();
        }
        local_128 = local_188[0];
        plVar14 = local_128;
        uStack_120 = puVar2;
        local_128._0_4_ = SUB84(local_188[0],0);
        local_128._4_4_ = (undefined4)((ulonglong)local_188[0] >> 0x20);
        uStack_120._0_4_ = SUB84(puVar2,0);
        uStack_120._4_4_ = (undefined4)((ulonglong)puVar2 >> 0x20);
        local_48 = (undefined4)local_128;
        uStack_44 = local_128._4_4_;
        uStack_40 = (undefined4)uStack_120;
        uStack_3c = uStack_120._4_4_;
        local_128 = plVar14;
        uStack_120 = puVar2;
        if ((local_188[0] == (longlong *)0x0) || (local_188[0] != plVar13)) {
          _invalid_parameter_noinfo();
        }
        if (puVar2 != puVar19) {
          FUN_140a87000((longlong)puVar2,puVar19);
        }
        puVar19 = local_170;
        local_108 = (longlong *)0x0;
        if (local_168 < local_170) {
          _invalid_parameter_noinfo();
        }
        puVar2 = local_168;
        local_108 = local_188[0];
        plVar13 = local_108;
        uStack_100 = puVar19;
        local_108._0_4_ = SUB84(local_188[0],0);
        local_108._4_4_ = (undefined4)((ulonglong)local_188[0] >> 0x20);
        uStack_100._0_4_ = SUB84(puVar19,0);
        uStack_100._4_4_ = (undefined4)((ulonglong)puVar19 >> 0x20);
        local_98 = (undefined4)local_108;
        uStack_94 = local_108._4_4_;
        uStack_90 = (undefined4)uStack_100;
        uStack_8c = uStack_100._4_4_;
        local_e8 = (longlong *)0x0;
        local_108 = plVar13;
        uStack_100 = puVar19;
        if (local_168 < local_170) {
          _invalid_parameter_noinfo();
        }
        local_e8 = local_188[0];
        plVar14 = local_e8;
        uStack_e0 = puVar2;
        local_e8._0_4_ = SUB84(local_188[0],0);
        local_e8._4_4_ = (undefined4)((ulonglong)local_188[0] >> 0x20);
        uStack_e0._0_4_ = SUB84(puVar2,0);
        uStack_e0._4_4_ = (undefined4)((ulonglong)puVar2 >> 0x20);
        local_a8 = (undefined4)local_e8;
        uStack_a4 = local_e8._4_4_;
        uStack_a0 = (undefined4)uStack_e0;
        uStack_9c = uStack_e0._4_4_;
        puVar19 = (undefined4 *)CONCAT44(uStack_8c,uStack_90);
        plVar13 = (longlong *)CONCAT44(uStack_94,local_98);
        local_e8 = plVar14;
        uStack_e0 = puVar2;
        while( true ) {
          if ((plVar13 == (longlong *)0x0) || (plVar13 != (longlong *)CONCAT44(uStack_a4,local_a8))) {
            _invalid_parameter_noinfo();
          }
          puVar2 = local_170;
          if (puVar19 == (undefined4 *)CONCAT44(uStack_9c,uStack_a0)) break;
          if (plVar13 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar10 = lVar15;
          }
          else {
            lVar10 = *plVar13;
          }
          if (*(undefined4 **)(lVar10 + 0x20) <= puVar19) {
            _invalid_parameter_noinfo();
          }
          uVar1 = *puVar19;
          iVar7 = FUN_140a810c0((longlong)local_158);
          if (iVar7 == 0) {
            if (local_170 != (undefined4 *)0x0) {
              operator_delete(local_170);
            }
            local_170 = (undefined4 *)0x0;
            local_168 = (undefined4 *)0x0;
            local_160 = 0;
            operator_delete(local_188[0]);
            return uVar1;
          }
          if (iVar7 == 1) {
            plVar14 = *(longlong **)(param_1 + 0x2e0);
            uVar12 = (**(code **)(*plVar14 + 0x210))(plVar14,param_2);
            uVar8 = (**(code **)(*plVar14 + 0x210))(plVar14,uVar1);
            if (uVar12 < uVar8) {
              if (local_170 != (undefined4 *)0x0) {
                operator_delete(local_170);
              }
              local_170 = (undefined4 *)0x0;
              local_168 = (undefined4 *)0x0;
              local_160 = 0;
              operator_delete(local_188[0]);
              return uVar1;
            }
          }
          else if (iVar7 == 2) {
            plVar14 = *(longlong **)(param_1 + 0x2e0);
            uVar12 = (**(code **)(*plVar14 + 0x210))(plVar14,uVar1);
            uVar8 = (**(code **)(*plVar14 + 0x210))(plVar14,param_2);
            if (uVar12 <= uVar8) {
              if (local_170 != (undefined4 *)0x0) {
                operator_delete(local_170);
              }
              local_170 = (undefined4 *)0x0;
              local_168 = (undefined4 *)0x0;
              local_160 = 0;
              operator_delete(local_188[0]);
              return uVar1;
            }
          }
          if (plVar13 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar10 = lVar15;
          }
          else {
            lVar10 = *plVar13;
          }
          if (*(undefined4 **)(lVar10 + 0x20) <= puVar19) {
            _invalid_parameter_noinfo();
          }
          puVar19 = puVar19 + 1;
        }
        local_158 = (longlong *)0x0;
        if (local_168 < local_170) {
          _invalid_parameter_noinfo();
        }
        puVar19 = local_168;
        plVar13 = local_188[0];
        local_158 = local_188[0];
        uStack_150 = puVar2;
        local_158._0_4_ = SUB84(local_188[0],0);
        local_158._4_4_ = (undefined4)((ulonglong)local_188[0] >> 0x20);
        uStack_150._0_4_ = SUB84(puVar2,0);
        uStack_150._4_4_ = (undefined4)((ulonglong)puVar2 >> 0x20);
        local_58 = (undefined4)local_158;
        uStack_54 = local_158._4_4_;
        uStack_50 = (undefined4)uStack_150;
        uStack_4c = uStack_150._4_4_;
        local_88 = (longlong *)0x0;
        local_158 = plVar13;
        uStack_150 = puVar2;
        if (local_168 < local_170) {
          _invalid_parameter_noinfo();
        }
        local_88 = local_188[0];
        if ((plVar13 == (longlong *)0x0) || (plVar13 != local_188[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar2 == puVar19) {
          if (local_170 != (undefined4 *)0x0) {
            operator_delete(local_170);
          }
          local_170 = (undefined4 *)0x0;
          local_168 = (undefined4 *)0x0;
          local_160 = 0;
          operator_delete(local_188[0]);
          return 0;
        }
        if (plVar13 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar15 = *plVar13;
        }
        if (*(undefined4 **)(lVar15 + 0x20) <= puVar2) {
          _invalid_parameter_noinfo();
        }
        uVar1 = *puVar2;
        if (local_170 != (undefined4 *)0x0) {
          operator_delete(local_170);
        }
        local_170 = (undefined4 *)0x0;
        local_168 = (undefined4 *)0x0;
        local_160 = 0;
        operator_delete(local_188[0]);
        return uVar1;
      }
      if (local_170 != (undefined4 *)0x0) {
        operator_delete(local_170);
      }
      local_170 = (undefined4 *)0x0;
      local_168 = (undefined4 *)0x0;
      local_160 = 0;
      operator_delete(local_188[0]);
    }
  }
  return 0;
}




void FUN_140a94240(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  longlong *local_res10;
  uint local_res18;
  undefined8 *local_res20;
  uint local_c8 [2];
  undefined8 *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [2];
  longlong *local_98;
  longlong *local_88;
  longlong local_78;
  undefined8 *puStack_70;
  longlong *local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_res18 = tq::DateStamp(0);
  if (*(uint *)(param_1 + 0x2d8) < local_res18) {
    plVar15 = *(longlong **)(param_1 + 0x260);
    if (*(longlong **)(param_1 + 0x268) < plVar15) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x248);
    plVar16 = *(longlong **)(param_1 + 0x268);
    if (plVar16 < *(longlong **)(param_1 + 0x260)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = *(longlong **)(param_1 + 0x248);
    while( true ) {
      if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar2)) {
        _invalid_parameter_noinfo();
      }
      if (plVar15 == plVar16) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar12 = 0;
      }
      else {
        lVar12 = *plVar1;
      }
      if (*(longlong **)(lVar12 + 0x20) <= plVar15) {
        _invalid_parameter_noinfo();
      }
      lVar12 = *plVar15;
      if (lVar12 == 0) {
        log_InlineLogERROR(&DAT_140aa7368);
      }
      else {
        uVar10 = FUN_140a9cc40(lVar12,3);
        uVar6 = FUN_140a9cef0(lVar12);
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar10 & 0xffffffff);
        if (cVar5 == '\0') {
          FUN_140a9cd30(lVar12,9,1);
        }
        if ((uVar6 < 0x3e9) && (uVar6 != 0)) {
          uVar6 = FUN_140a9cef0(lVar12);
          uVar11 = FUN_140a8fab0(param_1,uVar6);
          iVar7 = (int)uVar11;
          if (iVar7 != 0) {
            uVar11 = FUN_140a9cc40(lVar12,6);
            FUN_140a9cd30(lVar12,6,iVar7 + (int)uVar11);
            uVar11 = FUN_140a9cc40(lVar12,5);
            FUN_140a9cd30(lVar12,5,iVar7 + (int)uVar11);
            lVar12 = FUN_140a8f440(param_1,(uint)uVar10);
            if (lVar12 != 0) {
              uVar11 = FUN_140a9cc40(lVar12,6);
              FUN_140a9cd30(lVar12,6,iVar7 + (int)uVar11);
              uVar11 = FUN_140a9cc40(lVar12,5);
              FUN_140a9cd30(lVar12,5,iVar7 + (int)uVar11);
            }
          }
          cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar10 & 0xffffffff);
          if (cVar5 != '\0') {
            lVar12 = **(longlong **)(param_1 + 0x2e0);
            iVar8 = (**(code **)(lVar12 + 0x200))(*(longlong **)(param_1 + 0x2e0),uVar10 & 0xffffffff);
            (**(code **)(lVar12 + 0x1d0))(*(undefined8 *)(param_1 + 0x2e0),uVar10 & 0xffffffff,iVar7 + iVar8);
            lVar12 = **(longlong **)(param_1 + 0x2e0);
            iVar8 = (**(code **)(lVar12 + 0x208))(*(longlong **)(param_1 + 0x2e0),uVar10 & 0xffffffff);
            (**(code **)(lVar12 + 0x1d8))(*(undefined8 *)(param_1 + 0x2e0),uVar10 & 0xffffffff,iVar7 + iVar8);
          }
        }
        FUN_140a92f90(param_1,(uint)uVar10,1);
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar12 = 0;
      }
      else {
        lVar12 = *plVar1;
      }
      if (*(longlong **)(lVar12 + 0x20) <= plVar15) {
        _invalid_parameter_noinfo();
      }
      plVar15 = plVar15 + 1;
    }
    plVar15 = (longlong *)**(undefined8 **)(param_1 + 0x238);
    plVar1 = *(longlong **)(param_1 + 0x208);
    local_88 = plVar1;
LAB_140a94560:
    plVar16 = *(longlong **)(param_1 + 0x238);
    local_98 = *(longlong **)(param_1 + 0x208);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != local_98)) {
      _invalid_parameter_noinfo();
    }
    if (plVar15 != plVar16) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar12 = 0;
      }
      else {
        lVar12 = *plVar1;
      }
      if (plVar15 == *(longlong **)(lVar12 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar6 = *(uint *)plVar15[4];
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar6);
      if (cVar5 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1b8))(*(longlong **)(param_1 + 0x2e0),uVar6,0);
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1c0))(*(longlong **)(param_1 + 0x2e0),uVar6,0);
        lVar12 = **(longlong **)(param_1 + 0x2e0);
        uVar9 = (**(code **)(lVar12 + 0x40))(*(longlong **)(param_1 + 0x2e0),uVar6);
        FUN_140a821d0(uVar9);
        (**(code **)(lVar12 + 0x1c8))(*(undefined8 *)(param_1 + 0x2e0),uVar6);
        FUN_140a914e0(param_1,uVar6);
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar15 + 0x29) == '\0') {
        plVar16 = plVar15;
        plVar2 = (longlong *)plVar15[2];
        if (*(char *)(plVar15[2] + 0x29) == '\0') {
          do {
            plVar15 = plVar2;
            plVar2 = (longlong *)*plVar15;
          } while (*(char *)(*plVar15 + 0x29) == '\0');
        }
        else {
          do {
            plVar15 = (longlong *)plVar16[1];
            if (*(char *)((longlong)plVar15 + 0x29) != '\0') break;
            bVar17 = plVar16 == (longlong *)plVar15[2];
            plVar16 = plVar15;
          } while (bVar17);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140a94560;
    }
    local_res20 = *(undefined8 **)(param_1 + 0xb8);
    puVar13 = (undefined8 *)*local_res20;
    plVar15 = *(longlong **)(param_1 + 0x88);
    local_58 = plVar15;
LAB_140a946f0:
    puVar14 = local_res20;
    if (plVar15 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar13 != puVar14) {
      if (plVar15 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar12 = 0;
      }
      else {
        lVar12 = *plVar15;
      }
      if (puVar13 == *(undefined8 **)(lVar12 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar14 = (undefined8 *)puVar13[4];
      if (puVar14 != (undefined8 *)0x0) {
        uVar11 = FUN_140a9cc40((longlong)puVar14,9);
        if ((int)uVar11 == 0) {
          FUN_140a9cb80(puVar14);
        }
        else {
          uVar11 = FUN_140a9cc40((longlong)puVar14,3);
          local_res10 = (longlong *)CONCAT44(local_res10._4_4_,(uint)uVar11);
          lVar12 = *(longlong *)(param_1 + 0x138);
          lVar3 = *(longlong *)(param_1 + 0x108);
          local_a8[0] = lVar3;
          local_res10 = FUN_140a8cb40((longlong *)(param_1 + 0x108),&local_b8,(uint *)&local_res10);
          if ((*local_res10 == 0) || (*local_res10 != lVar3)) {
            _invalid_parameter_noinfo();
          }
          if (local_res10[1] == lVar12) {
            local_c8[0] = (uint)uVar11;
            local_c0 = puVar14;
            FUN_140a8c850((longlong *)(param_1 + 0x108),&local_78,local_c8);
          }
          else {
            log_InlineLogERROR("CArenicSystem::ProcessSettlement asyn data repeat user:%u");
          }
        }
      }
      if (plVar15 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar13 + 0x29) == '\0') {
        puVar14 = puVar13;
        puVar4 = (undefined8 *)puVar13[2];
        if (*(char *)((longlong)puVar13[2] + 0x29) == '\0') {
          do {
            puVar13 = puVar4;
            puVar4 = (undefined8 *)*puVar13;
          } while (*(char *)((longlong)*puVar13 + 0x29) == '\0');
        }
        else {
          do {
            puVar13 = (undefined8 *)puVar14[1];
            if (*(char *)((longlong)puVar13 + 0x29) != '\0') break;
            bVar17 = puVar14 == (undefined8 *)puVar13[2];
            puVar14 = puVar13;
          } while (bVar17);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140a946f0;
    }
    plVar1 = (longlong *)(param_1 + 0x88);
    FUN_140a87890((longlong)plVar1);
    FUN_140a8abf0((longlong *)(param_1 + 0x2a8));
    plVar15 = (longlong *)(param_1 + 0x48);
    if (plVar1 != plVar15) {
      puStack_70 = *(undefined8 **)(param_1 + 0xb8);
      local_b8 = *plVar1;
      uStack_b0 = *puStack_70;
      local_78 = local_b8;
      FUN_140a8adf0(plVar1,local_a8,&local_b8,&local_78);
      FUN_140a8b000((longlong)plVar1,(longlong)plVar15);
    }
    FUN_140a8d7b0((longlong *)(param_1 + 0x2a8),(longlong *)(param_1 + 0x248));
    FUN_140a87890((longlong)plVar15);
    FUN_140a8abf0((longlong *)(param_1 + 0x248));
    FUN_140a92d00(param_1,2);
    FUN_140a8ebc0(param_1,2);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2d8);
    *(uint *)(param_1 + 0x2d8) = local_res18;
  }
  return;
}




void FUN_140a949d0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  char cVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong *local_res8;
  longlong *local_c8 [3];
  undefined4 *local_b0;
  undefined4 *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined4 *puStack_90;
  longlong *local_88;
  undefined4 *puStack_80;
  undefined8 local_78;
  longlong local_70 [7];
  
  local_78 = 0xfffffffffffffffe;
  puVar11 = *(undefined8 **)(param_1 + 0x178);
  puVar13 = (undefined8 *)*puVar11;
  plVar3 = *(longlong **)(param_1 + 0x148);
  while( true ) {
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar13 == puVar11) {
      return;
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar14 = 0;
    }
    else {
      lVar14 = *plVar3;
    }
    if (puVar13 == *(undefined8 **)(lVar14 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((*(int *)((longlong)puVar13 + 0x24) == param_2) || (*(int *)(puVar13 + 5) == param_2)) break;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar13 + 0xc1) == '\0') {
      puVar4 = (undefined8 *)puVar13[2];
      if (*(char *)((longlong)puVar4 + 0xc1) == '\0') {
        cVar9 = *(char *)((longlong)*puVar4 + 0xc1);
        puVar13 = puVar4;
        puVar4 = (undefined8 *)*puVar4;
        while (cVar9 == '\0') {
          cVar9 = *(char *)((longlong)*puVar4 + 0xc1);
          puVar13 = puVar4;
          puVar4 = (undefined8 *)*puVar4;
        }
      }
      else {
        cVar9 = *(char *)((longlong)puVar13[1] + 0xc1);
        puVar8 = (undefined8 *)puVar13[1];
        puVar4 = puVar13;
        while ((puVar13 = puVar8, cVar9 == '\0' && (puVar4 == (undefined8 *)puVar13[2]))) {
          cVar9 = *(char *)((longlong)puVar13[1] + 0xc1);
          puVar8 = (undefined8 *)puVar13[1];
          puVar4 = puVar13;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  uVar1 = *(undefined4 *)((longlong)puVar13 + 0x24);
  uVar2 = *(undefined4 *)(puVar13 + 5);
  cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar1);
  if (cVar9 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),uVar1,param_3);
  }
  cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar2);
  if (cVar9 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),uVar2,param_3);
  }
  puVar15 = (undefined4 *)puVar13[0x15];
  if ((undefined4 *)puVar13[0x16] < puVar15) {
    _invalid_parameter_noinfo();
  }
  plVar3 = (longlong *)puVar13[0x12];
  local_res8 = operator_new(8);
  if (local_res8 == (longlong *)0x0) {
    local_c8[0] = (longlong *)0x0;
  }
  else {
    *local_res8 = (longlong)local_c8;
    local_c8[0] = local_res8;
  }
  local_b0 = (undefined4 *)0x0;
  local_a8 = (undefined4 *)0x0;
  local_a0 = 0;
  do {
    puVar5 = (undefined4 *)puVar13[0x16];
    if (puVar5 < (undefined4 *)puVar13[0x15]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)puVar13[0x12])) {
      _invalid_parameter_noinfo();
    }
    if (puVar15 == puVar5) {
      if ((longlong)local_a8 - (longlong)local_b0 >> 2 != 0) {
        local_res8 = local_70;
        puVar11 = FUN_140a8c540(local_70,local_c8);
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x10))(*(undefined8 *)(param_1 + 0x2e0),puVar11,param_3);
      }
      if (local_b0 != (undefined4 *)0x0) {
        operator_delete(local_b0);
      }
      local_b0 = (undefined4 *)0x0;
      local_a8 = (undefined4 *)0x0;
      local_a0 = 0;
      operator_delete(local_c8[0]);
      return;
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar14 = 0;
    }
    else {
      lVar14 = *plVar3;
    }
    if (*(undefined4 **)(lVar14 + 0x20) <= puVar15) {
      _invalid_parameter_noinfo();
    }
    uVar1 = *puVar15;
    local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar1);
    cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
    puVar5 = local_a8;
    if (cVar9 != '\0') {
      if (local_b0 == (undefined4 *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = local_a0 - (longlong)local_b0 >> 2;
      }
      if ((ulonglong)((longlong)local_a8 - (longlong)local_b0 >> 2) < uVar12) {
        *local_a8 = uVar1;
        local_a8 = local_a8 + 1;
      }
      else {
        if (local_a8 < local_b0) {
          _invalid_parameter_noinfo();
        }
        puVar7 = local_b0;
        plVar6 = local_c8[0];
        local_98 = local_c8[0];
        puStack_90 = puVar5;
        if (((longlong)local_a8 - (longlong)local_b0 & 0xfffffffffffffffcU) == 0) {
          lVar14 = 0;
        }
        else {
          if (local_a8 < local_b0) {
            _invalid_parameter_noinfo();
          }
          if ((plVar6 == (longlong *)0x0) || (plVar6 != local_c8[0])) {
            _invalid_parameter_noinfo();
          }
          lVar14 = (longlong)puVar5 - (longlong)puVar7 >> 2;
        }
        local_88 = local_98;
        puStack_80 = puStack_90;
        FUN_140a8e0a0((longlong)local_c8,(longlong)&local_88,1,(undefined4 *)&local_res8);
        puVar5 = local_b0;
        if (local_a8 < local_b0) {
          _invalid_parameter_noinfo();
        }
        plVar6 = local_c8[0];
        if (local_c8[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *local_c8[0];
        }
        if (puVar5 + lVar14 <= *(undefined4 **)(lVar10 + 0x20)) {
          if (plVar6 == (longlong *)0x0) {
            lVar10 = 0;
          }
          else {
            lVar10 = *plVar6;
          }
          if (*(undefined4 **)(lVar10 + 0x18) <= puVar5 + lVar14) goto LAB_140a94d1e;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_140a94d1e:
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar14 = 0;
    }
    else {
      lVar14 = *plVar3;
    }
    if (*(undefined4 **)(lVar14 + 0x20) <= puVar15) {
      _invalid_parameter_noinfo();
    }
    puVar15 = puVar15 + 1;
  } while( true );
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a94df0(longlong param_1,uint param_2,uint param_3,char param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  IStringManager *pIVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  char local_298;
  char local_297;
  ulonglong local_290;
  longlong local_288;
  uint local_280;
  ulonglong local_278;
  longlong local_270;
  uint local_268;
  undefined8 local_260;
  ulonglong local_258;
  char local_248;
  undefined1 local_247 [510];
  undefined1 local_49;
  ulonglong local_48;
  
  local_260 = 0xfffffffffffffffe;
  local_48 = DAT_140ab7408 ^ (ulonglong)auStack_2d8;
  local_297 = param_4;
  local_280 = param_2;
  local_268 = param_3;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if ((cVar3 != '\0') && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),param_3), cVar3 != '\0')) {
    uVar4 = FUN_140a924b0(param_1,param_2);
    local_290 = CONCAT44(local_290._4_4_,uVar4);
    uVar5 = FUN_140a924b0(param_1,param_3);
    if ((uVar4 != 0) && ((uVar5 != 0 && (uVar4 == uVar5)))) {
      lVar9 = FUN_140a8f340(param_1,param_2);
      local_288 = FUN_140a8f340(param_1,param_3);
      uVar4 = FUN_140a8f270(param_1,uVar4,param_2);
      if (param_3 == uVar4) {
        FUN_140a8cc10((longlong *)(param_1 + 0x148),(longlong *)&local_278,(uint *)&local_290);
        lVar13 = *(longlong *)(param_1 + 0x178);
        local_258 = *(ulonglong *)(param_1 + 0x148);
        if ((local_278 == 0) || (local_278 != local_258)) {
          _invalid_parameter_noinfo();
        }
        if (local_270 == lVar13) {
          log_InlineLogERROR("CArenicSystem::EndAthletics Match not Match: User1:%u, User2:%u");
        }
        else {
          iVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_3);
          if ((uint)(iVar6 * 3) / 100 < 2) {
            uVar4 = 1;
          }
          else {
            iVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_3);
            uVar4 = (uint)(iVar6 * 3) / 100;
          }
          uVar10 = FUN_140a8ff70(param_1,param_2);
          local_278 = uVar10;
          local_290 = FUN_140a8ff70(param_1,param_3);
          if ((uVar10 != 0) && (local_290 != 0)) {
            plVar1 = *(longlong **)(param_1 + 0x2e0);
            lVar13 = *plVar1;
            iVar6 = (**(code **)(*plVar1 + 0x210))(plVar1,param_2);
            (**(code **)(lVar13 + 0x1c8))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar4 + iVar6);
            plVar1 = *(longlong **)(param_1 + 0x2e0);
            lVar13 = *plVar1;
            iVar6 = (**(code **)(*plVar1 + 0x1e0))(plVar1,param_2);
            (**(code **)(lVar13 + 0x1a8))(*(undefined8 *)(param_1 + 0x2e0),param_2,iVar6 + 1);
            plVar1 = *(longlong **)(param_1 + 0x2e0);
            lVar13 = *plVar1;
            iVar6 = (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2);
            (**(code **)(lVar13 + 0x1b8))(*(undefined8 *)(param_1 + 0x2e0),param_2,iVar6 + 1);
            FUN_140a810d0(uVar10,1);
            local_298 = '\0';
            iVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1f0))(*(longlong **)(param_1 + 0x2e0),param_2);
            if (iVar6 == 9) {
              plVar1 = *(longlong **)(param_1 + 0x2e0);
              lVar13 = *plVar1;
              iVar6 = (**(code **)(*plVar1 + 0x200))(plVar1,param_2);
              (**(code **)(lVar13 + 0x1d0))(*(undefined8 *)(param_1 + 0x2e0),param_2,iVar6 + 500);
              plVar1 = *(longlong **)(param_1 + 0x2e0);
              lVar13 = *plVar1;
              iVar6 = (**(code **)(*plVar1 + 0x208))(plVar1,param_2);
              (**(code **)(lVar13 + 0x1d8))(*(undefined8 *)(param_1 + 0x2e0),param_2,iVar6 + 500);
              pIVar11 = theInstance();
              lVar13 = **(longlong **)(param_1 + 0x2e0);
              uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_PRISE_WIN_9");
              (**(code **)(lVar13 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar12);
              if (lVar9 != 0) {
                uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),param_2);
                FUN_140a9cd30(lVar9,6,uVar7);
                uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x208))(*(longlong **)(param_1 + 0x2e0),param_2);
                FUN_140a9cd30(lVar9,5,uVar7);
              }
              lVar13 = FUN_140a8f440(param_1,param_2);
              if (lVar13 != 0) {
                uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),param_2);
                FUN_140a9cd30(lVar13,6,uVar7);
                uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x208))(*(longlong **)(param_1 + 0x2e0),param_2);
                FUN_140a9cd30(lVar13,5,uVar7);
              }
              local_298 = '\x01';
            }
            plVar1 = *(longlong **)(param_1 + 0x2e0);
            iVar6 = (**(code **)(*plVar1 + 0x1f8))(plVar1,param_2);
            iVar8 = (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2);
            if (iVar6 + iVar8 == 0x14) {
              plVar1 = *(longlong **)(param_1 + 0x2e0);
              lVar13 = *plVar1;
              iVar6 = (**(code **)(*plVar1 + 0x200))(plVar1,param_2);
              (**(code **)(lVar13 + 0x1d0))(*(undefined8 *)(param_1 + 0x2e0),param_2,iVar6 + 500);
              plVar1 = *(longlong **)(param_1 + 0x2e0);
              lVar13 = *plVar1;
              iVar6 = (**(code **)(*plVar1 + 0x208))(plVar1,param_2);
              (**(code **)(lVar13 + 0x1d8))(*(undefined8 *)(param_1 + 0x2e0),param_2,iVar6 + 500);
              pIVar11 = theInstance();
              lVar13 = **(longlong **)(param_1 + 0x2e0);
              uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_PRISE_BATTLE_20");
              (**(code **)(lVar13 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar12);
              if (lVar9 != 0) {
                uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),param_2);
                FUN_140a9cd30(lVar9,6,uVar7);
                uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x208))(*(longlong **)(param_1 + 0x2e0),param_2);
                FUN_140a9cd30(lVar9,5,uVar7);
              }
              lVar13 = FUN_140a8f440(param_1,param_2);
              if (lVar13 != 0) {
                uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),param_2);
                FUN_140a9cd30(lVar13,6,uVar7);
                uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x208))(*(longlong **)(param_1 + 0x2e0),param_2);
                FUN_140a9cd30(lVar13,5,uVar7);
              }
              local_298 = '\x01';
            }
            if (lVar9 != 0) {
              uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_2);
              FUN_140a9cd30(lVar9,4,uVar7);
              uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1f0))(*(longlong **)(param_1 + 0x2e0),param_2);
              FUN_140a9cd30(lVar9,7,uVar7);
            }
            uVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_3);
            if (uVar5 == uVar4) {
              iVar6 = 0;
            }
            else {
              iVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_3);
              iVar6 = iVar6 - uVar4;
            }
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1c8))(*(longlong **)(param_1 + 0x2e0),param_3,iVar6);
            plVar1 = *(longlong **)(param_1 + 0x2e0);
            lVar9 = *plVar1;
            iVar6 = (**(code **)(*plVar1 + 0x1e8))(plVar1,param_3);
            (**(code **)(lVar9 + 0x1b0))(*(undefined8 *)(param_1 + 0x2e0),param_3,iVar6 + 1);
            plVar1 = *(longlong **)(param_1 + 0x2e0);
            lVar9 = *plVar1;
            iVar6 = (**(code **)(*plVar1 + 0x1f8))(plVar1,param_3);
            (**(code **)(lVar9 + 0x1c0))(*(undefined8 *)(param_1 + 0x2e0),param_3,iVar6 + 1);
            FUN_140a810d0(local_290,2);
            plVar1 = *(longlong **)(param_1 + 0x2e0);
            iVar6 = (**(code **)(*plVar1 + 0x1f8))(plVar1,param_3);
            iVar8 = (**(code **)(*plVar1 + 0x1f0))(plVar1,param_3);
            if (iVar6 + iVar8 == 0x14) {
              plVar1 = *(longlong **)(param_1 + 0x2e0);
              lVar9 = *plVar1;
              iVar6 = (**(code **)(*plVar1 + 0x200))(plVar1,param_3);
              (**(code **)(lVar9 + 0x1d0))(*(undefined8 *)(param_1 + 0x2e0),param_3,iVar6 + 500);
              plVar1 = *(longlong **)(param_1 + 0x2e0);
              lVar9 = *plVar1;
              iVar6 = (**(code **)(*plVar1 + 0x208))(plVar1,param_3);
              (**(code **)(lVar9 + 0x1d8))(*(undefined8 *)(param_1 + 0x2e0),param_3,iVar6 + 500);
              pIVar11 = theInstance();
              lVar9 = **(longlong **)(param_1 + 0x2e0);
              uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_PRISE_BATTLE_20");
              (**(code **)(lVar9 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_3,uVar12);
              lVar9 = local_288;
              if (local_288 != 0) {
                uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),param_3);
                FUN_140a9cd30(lVar9,6,uVar7);
                uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x208))(*(longlong **)(param_1 + 0x2e0),param_3);
                FUN_140a9cd30(lVar9,5,uVar7);
              }
              bVar2 = true;
            }
            else {
              bVar2 = false;
              lVar9 = local_288;
            }
            if (lVar9 != 0) {
              uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_3);
              FUN_140a9cd30(lVar9,4,uVar7);
              uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1f8))(*(longlong **)(param_1 + 0x2e0),param_3);
              FUN_140a9cd30(lVar9,8,uVar7);
            }
            plVar1 = *(longlong **)(param_1 + 0x2e0);
            lVar9 = *plVar1;
            uVar7 = (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2);
            (**(code **)(lVar9 + 0x248))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar7);
            plVar1 = *(longlong **)(param_1 + 0x2e0);
            lVar9 = *plVar1;
            iVar6 = (**(code **)(*plVar1 + 0x1f8))(plVar1,param_2);
            iVar8 = (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2);
            (**(code **)(lVar9 + 0x250))(*(undefined8 *)(param_1 + 0x2e0),param_2,iVar8 + iVar6);
            plVar1 = *(longlong **)(param_1 + 0x2e0);
            lVar9 = *plVar1;
            (**(code **)(*plVar1 + 0x1f8))(plVar1,param_3);
            (**(code **)(*plVar1 + 0x1f0))(plVar1,param_3);
            (**(code **)(lVar9 + 0x250))(*(undefined8 *)(param_1 + 0x2e0),param_3);
            if (local_298 != '\0') {
              FUN_140a92f90(param_1,param_2,1);
            }
            if (bVar2) {
              FUN_140a92f90(param_1,param_3,1);
            }
            FUN_140a92f90(param_1,param_2,0);
            FUN_140a92f90(param_1,param_3,0);
            FUN_140a924f0(param_1,param_2,10);
            FUN_140a924f0(param_1,param_3,10);
            uVar4 = FUN_140a8fbe0(param_1,param_2);
            local_288 = CONCAT44(local_288._4_4_,uVar4);
            FUN_140a810f0(local_278,param_3);
            FUN_140a810f0(local_290,param_2);
            FUN_140a914e0(param_1,param_2);
            FUN_140a914e0(param_1,param_3);
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x150))(*(longlong **)(param_1 + 0x2e0),param_2);
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x150))(*(longlong **)(param_1 + 0x2e0),param_3);
            local_2b8 = (ulonglong)local_2b8._4_4_ << 0x20;
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x240))(*(longlong **)(param_1 + 0x2e0),param_2,7);
            if (local_297 != '\0') {
              iVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x138))(*(longlong **)(param_1 + 0x2e0),param_2);
              local_278 = CONCAT44(local_278._4_4_,iVar6);
              iVar8 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x138))();
              local_290 = CONCAT44(local_290._4_4_,iVar8);
              local_248 = '\0';
              memset(local_247,0,0x1ff);
              if ((iVar6 == 0) || (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x228))(*(longlong **)(param_1 + 0x2e0),iVar6), cVar3 == '\0')) {
                if ((iVar8 == 0) || (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x228))(*(longlong **)(param_1 + 0x2e0),iVar8), cVar3 == '\0')) {
                  if ((uVar4 == 0) || (1000 < uVar4)) {
                    pIVar11 = theInstance();
                    plVar1 = *(longlong **)(param_1 + 0x2e0);
                    uVar12 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3);
                    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
                    pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_RESULT_4");
                    local_2b8 = uVar12;
                    _snprintf(&local_248,0x200,pcVar16);
                  }
                  else {
                    pIVar11 = theInstance();
                    plVar1 = *(longlong **)(param_1 + 0x2e0);
                    uVar12 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3);
                    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
                    pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_RESULT_8");
                    local_2b0 = CONCAT44(local_2b0._4_4_,uVar4);
                    local_2b8 = uVar12;
                    _snprintf(&local_248,0x200,pcVar16);
                  }
                }
                else if ((uVar4 == 0) || (1000 < uVar4)) {
                  pIVar11 = theInstance();
                  plVar1 = *(longlong **)(param_1 + 0x2e0);
                  uVar12 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3);
                  uVar14 = (**(code **)(*plVar1 + 0x230))(plVar1,local_290 & 0xffffffff);
                  (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
                  pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_RESULT_2");
                  local_2b8 = uVar14;
                  local_2b0 = uVar12;
                  _snprintf(&local_248,0x200,pcVar16);
                }
                else {
                  pIVar11 = theInstance();
                  plVar1 = *(longlong **)(param_1 + 0x2e0);
                  uVar12 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3);
                  uVar14 = (**(code **)(*plVar1 + 0x230))(plVar1,iVar8);
                  (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
                  pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_RESULT_6");
                  local_2a8 = CONCAT44(local_2a8._4_4_,(undefined4)local_288);
                  local_2b8 = uVar14;
                  local_2b0 = uVar12;
                  _snprintf(&local_248,0x200,pcVar16);
                }
              }
              else if ((iVar8 == 0) || (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x228))(*(longlong **)(param_1 + 0x2e0),iVar8), cVar3 == '\0'))
              {
                if ((uVar4 == 0) || (1000 < uVar4)) {
                  pIVar11 = theInstance();
                  plVar1 = *(longlong **)(param_1 + 0x2e0);
                  uVar12 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3);
                  uVar14 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
                  (**(code **)(*plVar1 + 0x230))(plVar1,local_278 & 0xffffffff);
                  pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_RESULT_3");
                  local_2b8 = uVar14;
                  local_2b0 = uVar12;
                  _snprintf(&local_248,0x200,pcVar16);
                }
                else {
                  pIVar11 = theInstance();
                  plVar1 = *(longlong **)(param_1 + 0x2e0);
                  uVar12 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3);
                  uVar14 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
                  (**(code **)(*plVar1 + 0x230))(plVar1,local_278 & 0xffffffff);
                  pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_RESULT_7");
                  local_2a8 = CONCAT44(local_2a8._4_4_,(undefined4)local_288);
                  local_2b8 = uVar14;
                  local_2b0 = uVar12;
                  _snprintf(&local_248,0x200,pcVar16);
                }
              }
              else if ((uVar4 == 0) || (1000 < uVar4)) {
                pIVar11 = theInstance();
                plVar1 = *(longlong **)(param_1 + 0x2e0);
                uVar12 = (**(code **)(*plVar1 + 0x60))(plVar1,local_268);
                uVar14 = (**(code **)(*plVar1 + 0x230))(plVar1,iVar8);
                uVar15 = (**(code **)(*plVar1 + 0x60))(plVar1,local_280);
                (**(code **)(*plVar1 + 0x230))(plVar1,local_278 & 0xffffffff);
                pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_RESULT_1");
                local_2b8 = uVar15;
                local_2b0 = uVar14;
                local_2a8 = uVar12;
                _snprintf(&local_248,0x200,pcVar16);
              }
              else {
                pIVar11 = theInstance();
                plVar1 = *(longlong **)(param_1 + 0x2e0);
                uVar12 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3);
                uVar14 = (**(code **)(*plVar1 + 0x230))(plVar1,local_290 & 0xffffffff);
                uVar15 = (**(code **)(*plVar1 + 0x60))(plVar1,local_280);
                (**(code **)(*plVar1 + 0x230))(plVar1,local_278 & 0xffffffff);
                pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_RESULT_5");
                local_2a0 = (undefined4)local_288;
                local_2b8 = uVar15;
                local_2b0 = uVar14;
                local_2a8 = uVar12;
                _snprintf(&local_248,0x200,pcVar16);
              }
              local_49 = 0;
              (**(code **)**(undefined8 **)(param_1 + 0x2e0))(*(undefined8 **)(param_1 + 0x2e0),&local_248,0xffff00,0);
            }
          }
        }
      }
      else {
        log_InlineLogERROR("CArenicSystem::EndAthletics Error not Match: User1:%u, User2:%u");
      }
    }
  }
  return;
}




void FUN_140a95cc0(longlong param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    lVar7 = FUN_140a8ff70(param_1,param_2);
    if ((lVar7 != 0) && (iVar3 = FUN_140a81040(lVar7), iVar3 == 10)) {
      return;
    }
    uVar4 = FUN_140a924b0(param_1,param_2);
    if (uVar4 != 0) {
      uVar5 = FUN_140a8f270(param_1,uVar4,param_2);
      if (uVar5 == 0) {
        FUN_140a924d0(param_1,param_2);
        log_InlineLogERROR("CArenicSystem::OnAthleteRefuse, User1:%u, status1:%u, match not find");
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar5);
        if (cVar1 == '\0') {
          FUN_140a924d0(param_1,param_2);
          log_InlineLogERROR("CArenicSystem::OnAthleteRefuse, User1:%u, status1:%u, User2:%u");
        }
        else {
          bVar2 = FUN_140a90090(param_1,param_2);
          if (((bVar2) && (bVar2 = FUN_140a90090(param_1,uVar5), bVar2)) && (uVar6 = FUN_140a924b0(param_1,uVar5), uVar6 == uVar4)) {
            FUN_140a94df0(param_1,uVar5,param_2,'\x01');
            FUN_140a9ebe0(local_418);
            uVar8 = FUN_140a9ecd0((longlong)local_418,9,1);
            if ((char)uVar8 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),uVar5);
            }
            FUN_140a9ebe0(local_828);
            uVar8 = FUN_140a9ecd0((longlong)local_828,9,0);
            if ((char)uVar8 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_2,local_828);
            }
            FUN_140a9ec30((undefined8 *)local_828);
            FUN_140a9ec30((undefined8 *)local_418);
          }
        }
      }
    }
  }
  return;
}




void FUN_140a95ea0(longlong param_1,uint param_2,char param_3,char param_4,char param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  CMsg local_838 [1040];
  CMsg local_428 [1040];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    if (param_5 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 200))(*(longlong **)(param_1 + 0x2e0),param_2);
      if (cVar1 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x110))(*(longlong **)(param_1 + 0x2e0),param_2);
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xd0))(*(longlong **)(param_1 + 0x2e0),param_2,0,0,0);
      }
    }
    FUN_140a92450(param_1,param_2,0);
    lVar4 = FUN_140a8ff70(param_1,param_2);
    if (lVar4 != 0) {
      FUN_140a81120(lVar4);
      if (param_3 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x148))(*(longlong **)(param_1 + 0x2e0),param_2);
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x120))(*(longlong **)(param_1 + 0x2e0),param_2);
      }
      if (param_4 != '\0') {
        uVar2 = FUN_140a900e0(param_1,param_2);
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x30))(*(longlong **)(param_1 + 0x2e0),0x60,param_2,uVar2);
      }
      FUN_140a9ebe0(local_428);
      iVar3 = FUN_140a810c0(lVar4);
      uVar5 = FUN_140a9ecd0((longlong)local_428,10,(uint)(iVar3 == 1));
      if ((char)uVar5 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_2);
      }
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_2);
      if (iVar3 == 0) {
        FUN_140a924f0(param_1,param_2,0);
        FUN_140a9ebe0(local_838);
        uVar5 = FUN_140a9ec90((longlong)local_838,7);
        if ((char)uVar5 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_2,local_838);
        }
        FUN_140a9ec30((undefined8 *)local_838);
      }
      else {
        FUN_140a924f0(param_1,param_2,5);
      }
      FUN_140a9ec30((undefined8 *)local_428);
    }
  }
  return;
}




void FUN_140a960a0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a8f440(param_1,param_2);
  if (lVar2 != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x200))(*(longlong **)(param_1 + 0x2e0),param_2);
    FUN_140a9cd30(lVar2,6,uVar1);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x208))(*(longlong **)(param_1 + 0x2e0),param_2);
    FUN_140a9cd30(lVar2,5,uVar1);
  }
  FUN_140a914e0(param_1,param_2);
  FUN_140a92f90(param_1,param_2,1);
  return;
}




void FUN_140a96130(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140a8f440(param_1,param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_140a9cc40(lVar1,5);
    FUN_140a9cd30(lVar1,5,param_3 + (int)uVar2);
    uVar2 = FUN_140a9cc40(lVar1,6);
    FUN_140a9cd30(lVar1,6,param_3 + (int)uVar2);
    FUN_140a92f90(param_1,param_2,1);
  }
  return;
}




undefined8 * FUN_140a961c0(undefined8 *param_1)

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
  lVar2 = FUN_140a86b20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x25) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a96240(undefined8 *param_1)

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
  lVar2 = FUN_140a86b80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a962c0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar2 + 0xc1) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140ab60c8);
  }
  FUN_140a850a0(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0xc1) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0xc1) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0xc1) == '\0') {
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
        plVar3 = plVar2 + 0x18;
        plVar7 = plVar7 + 0x18;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_140a964cb;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0xc1) == '\0') {
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
    if (*(char *)((longlong)plVar9 + 0xc1) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0xc1);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0xc1);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0xc1) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0xc1);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0xc1);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_140a964cb:
  if ((char)plVar2[0x18] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[0x18] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[0x18] == '\0') {
            *(undefined1 *)(plVar8 + 0x18) = 1;
            *(undefined1 *)(plVar7 + 0x18) = 0;
            FUN_140a84da0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0xc1) == '\0') {
            if ((*(char *)(*plVar8 + 0xc0) != '\x01') || (*(char *)(plVar8[2] + 0xc0) != '\x01')) {
              if (*(char *)(plVar8[2] + 0xc0) == '\x01') {
                *(undefined1 *)(*plVar8 + 0xc0) = 1;
                *(undefined1 *)(plVar8 + 0x18) = 0;
                FUN_140a84e00((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 0x18) = (char)plVar7[0x18];
              *(undefined1 *)(plVar7 + 0x18) = 1;
              *(undefined1 *)(plVar8[2] + 0xc0) = 1;
              FUN_140a84da0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0x18) = 0;
          }
        }
        else {
          if ((char)plVar8[0x18] == '\0') {
            *(undefined1 *)(plVar8 + 0x18) = 1;
            *(undefined1 *)(plVar7 + 0x18) = 0;
            FUN_140a84e00((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0xc1) == '\0') {
            if ((*(char *)(plVar8[2] + 0xc0) != '\x01') || (*(char *)(*plVar8 + 0xc0) != '\x01')) {
              if (*(char *)(*plVar8 + 0xc0) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0xc0) = 1;
                *(undefined1 *)(plVar8 + 0x18) = 0;
                FUN_140a84da0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 0x18) = (char)plVar7[0x18];
              *(undefined1 *)(plVar7 + 0x18) = 1;
              *(undefined1 *)(*plVar8 + 0xc0) = 1;
              FUN_140a84e00((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0x18) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 0x18) = 1;
  }
  FUN_140a8a490((longlong)(plVar2 + 4));
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




undefined8 * FUN_140a96720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    FUN_140a90f40((undefined4 *)(puVar1 + 3),param_5);
    *(undefined1 *)(puVar1 + 0x18) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0xc1) = 0;
  }
  return puVar1;
}




void FUN_140a967b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0xc1);
  while (cVar1 == '\0') {
    FUN_140a967b0(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_140a8a490((longlong)(param_2 + 4));
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0xc1);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140a96830(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong extraout_RAX;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong extraout_RAX_00;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong extraout_RAX_01;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 uVar21;
  bool bVar22;
  undefined1 auStackY_368 [32];
  uint local_338;
  int local_334;
  int local_330;
  longlong *local_328;
  longlong local_320;
  undefined4 local_318;
  longlong *local_310;
  int local_308;
  longlong *local_300;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  undefined8 *local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  undefined8 *local_2d0;
  longlong *local_2c8 [3];
  uint local_2b0 [2];
  undefined8 *local_2a8;
  uint local_2a0 [2];
  undefined8 *local_298;
  longlong *local_290;
  longlong *local_280;
  longlong *local_270;
  undefined8 local_260;
  longlong *local_258;
  longlong *local_248;
  char local_238 [511];
  undefined1 local_39;
  ulonglong local_38;
  
  local_260 = 0xfffffffffffffffe;
  local_38 = DAT_140ab7408 ^ (ulonglong)auStackY_368;
  local_320 = param_1;
  iVar2 = tq::DateStamp(0);
  *(int *)(param_1 + 0x2d8) = iVar2;
  iVar2 = tq::DateStampPass(iVar2,-1);
  *(int *)(param_1 + 0x2dc) = iVar2;
  plVar7 = (longlong *)InstanceGet();
  local_300 = plVar7;
  FUN_140a87810(param_1 + 8);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,"select * from cq_arenic_honor where type = 0",1);
  if (plVar7 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    uVar8 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    local_308 = 0;
    while (iVar2 = local_308, iVar3 = (**(code **)(*plVar7 + 0x40))(plVar7), iVar2 < iVar3) {
      (**(code **)(*plVar7 + 0x30))(plVar7,(longlong)iVar2);
      plVar9 = (longlong *)(**(code **)(*plVar7 + 0x38))(plVar7);
      if (plVar9 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_140aa7368);
      }
      else {
        plVar10 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,0);
        local_338 = (**(code **)(*plVar10 + 0x50))(plVar10);
        puVar11 = FUN_140a906a0((longlong *)(param_1 + 8),&local_338);
        *puVar11 = plVar9;
      }
      local_308 = iVar2 + 1;
    }
    (**(code **)*plVar7)(plVar7);
    plVar7 = local_300;
    plVar9 = (longlong *)(**(code **)(*local_300 + 0x10))(local_300,"SELECT * FROM cq_arenic WHERE type = 0 and asyn > 0",2);
    local_310 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140aa7368);
      uVar8 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      local_330 = 0;
      while (iVar2 = local_330, iVar3 = (**(code **)(*plVar9 + 0x40))(plVar9), iVar2 < iVar3) {
        (**(code **)(*plVar9 + 0x30))(plVar9,(longlong)iVar2);
        plVar10 = (longlong *)(**(code **)(*plVar9 + 0x38))(plVar9);
        local_328 = plVar10;
        if (plVar10 == (longlong *)0x0) {
          log_InlineLogERROR(&DAT_140aa7368);
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,3);
          (**(code **)(*plVar12 + 0x40))(plVar12);
          plVar12 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,6);
          local_318 = (**(code **)(*plVar12 + 0x50))(plVar12);
          plVar12 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,5);
          local_338 = (**(code **)(*plVar12 + 0x50))(plVar12);
          _snprintf(local_238,0x200,"SELECT id, athlete_cur_honor_point, athlete_hisorty_honor_point FROM cq_user WHERE id=%lu");
          local_39 = 0;
          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,local_238,2);
          local_2e0 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            lVar13 = (**(code **)(*plVar7 + 0x40))(plVar7);
            if (lVar13 != 0) {
              plVar12 = (longlong *)(**(code **)(*plVar7 + 0x38))(plVar7);
              if (plVar12 != (longlong *)0x0) {
                plVar14 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,1);
                (**(code **)(*plVar14 + 0xa8))(plVar14,local_338);
                plVar14 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,2);
                (**(code **)(*plVar14 + 0xa8))(plVar14,local_318);
                (**(code **)(*plVar12 + 0x38))(plVar12,0);
                (**(code **)*plVar12)(plVar12,1);
              }
              (**(code **)*plVar7)(plVar7);
              plVar7 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,9);
              (**(code **)(*plVar7 + 0xb0))(plVar7,0);
              (**(code **)(*plVar10 + 0x38))(plVar10,0);
              (**(code **)*plVar10)(plVar10,1);
              plVar7 = local_300;
              goto LAB_140a96bed;
            }
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)*plVar7)(plVar7);
            local_2e0 = (longlong *)0x0;
          }
          (**(code **)*plVar10)(plVar10,1);
          plVar7 = local_300;
        }
LAB_140a96bed:
        local_330 = iVar2 + 1;
      }
      (**(code **)*plVar9)(plVar9);
      plVar7 = (longlong *)
               (**(code **)(*plVar7 + 0x10))
                         (plVar7,
                          "SELECT cq_arenic.*, cq_user.name, cq_user.lookface, cq_user.profession, cq_user.level FROM cq_arenic LEFT JOIN cq_user ON cq_arenic.user_id = cq_user.id WHERE cq_arenic.type = 0"
                          ,2);
      local_328 = plVar7;
      if (plVar7 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_140aa7368);
        uVar8 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else {
        local_334 = 0;
        while( true ) {
          iVar2 = local_334;
          lVar13 = 0;
          iVar3 = (**(code **)(*plVar7 + 0x40))(plVar7);
          uVar21 = iVar2 == iVar3;
          if (iVar3 <= iVar2) break;
          (**(code **)(*plVar7 + 0x30))(plVar7,(longlong)iVar2);
          plVar9 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,10);
          pcVar15 = (char *)(**(code **)(*plVar9 + 0x78))(plVar9);
          lVar13 = 1;
          pcVar18 = "";
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            uVar21 = *pcVar15 == *pcVar18;
            pcVar15 = pcVar15 + 1;
            pcVar18 = pcVar18 + 1;
          } while ((bool)uVar21);
          if ((bool)uVar21) {
            plVar9 = (longlong *)(**(code **)(*plVar7 + 0x38))(plVar7);
            local_2d8 = plVar9;
            if (plVar9 == (longlong *)0x0) {
              log_InlineLogERROR(&DAT_140aa7368);
            }
            else {
              (**(code **)(*plVar9 + 0x40))(plVar9,0);
              (**(code **)*plVar9)(plVar9);
              local_2d8 = (longlong *)0x0;
            }
          }
          else {
            plVar9 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,3);
            local_338 = (**(code **)(*plVar9 + 0x40))(plVar9);
            plVar9 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,2);
            iVar2 = (**(code **)(*plVar9 + 0x50))(plVar9);
            if (*(int *)(param_1 + 0x2d8) == iVar2) {
              puVar11 = FUN_140a9d170();
              if (puVar11 == (undefined8 *)0x0) {
                log_InlineLogERROR(&DAT_140aa7368);
              }
              else {
                plVar9 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0xd);
                plVar10 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0xc);
                plVar12 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0xb);
                plVar14 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,10);
                uVar4 = (**(code **)(*plVar9 + 0x50))(plVar9);
                uVar5 = (**(code **)(*plVar10 + 0x50))(plVar10);
                uVar6 = (**(code **)(*plVar12 + 0x50))(plVar12);
                puVar16 = (undefined8 *)(**(code **)(*plVar14 + 0x78))(plVar14);
                uVar17 = FUN_140a9d420((longlong)puVar11,plVar7,puVar16,uVar6,uVar5,uVar4);
                if ((char)uVar17 == '\0') {
                  log_InlineLogERROR(&DAT_140aa7368);
                  FUN_140a9cb80(puVar11);
                }
                else {
                  local_300 = (longlong *)CONCAT44(local_300._4_4_,local_338);
                  local_2f8 = puVar11;
                  FUN_140a8c850((longlong *)(param_1 + 0x48),(longlong *)local_2c8,(uint *)&local_300);
                }
              }
            }
            else if (*(int *)(param_1 + 0x2dc) == iVar2) {
              puVar11 = FUN_140a9d170();
              if (puVar11 == (undefined8 *)0x0) {
                log_InlineLogERROR(&DAT_140aa7368);
              }
              else {
                plVar9 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0xd);
                plVar10 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0xc);
                plVar12 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0xb);
                plVar14 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,10);
                uVar4 = (**(code **)(*plVar9 + 0x50))(plVar9);
                uVar5 = (**(code **)(*plVar10 + 0x50))(plVar10);
                uVar6 = (**(code **)(*plVar12 + 0x50))(plVar12);
                puVar16 = (undefined8 *)(**(code **)(*plVar14 + 0x78))(plVar14);
                uVar17 = FUN_140a9d420((longlong)puVar11,plVar7,puVar16,uVar6,uVar5,uVar4);
                if ((char)uVar17 == '\0') {
                  log_InlineLogERROR(&DAT_140aa7368);
                  FUN_140a9cb80(puVar11);
                }
                else {
                  local_2a0[0] = local_338;
                  local_298 = puVar11;
                  FUN_140a8c850((longlong *)(param_1 + 0x88),(longlong *)local_2c8,local_2a0);
                }
              }
            }
            else if (iVar2 == 0) {
              puVar11 = FUN_140a9d170();
              if (puVar11 == (undefined8 *)0x0) {
                log_InlineLogERROR(&DAT_140aa7368);
              }
              else {
                plVar9 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0xd);
                plVar10 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0xc);
                plVar12 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0xb);
                plVar14 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,10);
                uVar4 = (**(code **)(*plVar9 + 0x50))(plVar9);
                uVar5 = (**(code **)(*plVar10 + 0x50))(plVar10);
                uVar6 = (**(code **)(*plVar12 + 0x50))(plVar12);
                puVar16 = (undefined8 *)(**(code **)(*plVar14 + 0x78))(plVar14);
                uVar17 = FUN_140a9d420((longlong)puVar11,plVar7,puVar16,uVar6,uVar5,uVar4);
                if ((char)uVar17 == '\0') {
                  log_InlineLogERROR(&DAT_140aa7368);
                  FUN_140a9cb80(puVar11);
                }
                else {
                  local_2b0[0] = local_338;
                  local_2a8 = puVar11;
                  FUN_140a8c850((longlong *)(param_1 + 200),(longlong *)local_2c8,local_2b0);
                }
              }
            }
            else {
              plVar9 = (longlong *)(**(code **)(*plVar7 + 0x38))(plVar7);
              if (plVar9 == (longlong *)0x0) {
                log_InlineLogERROR(&DAT_140aa7368);
              }
              else {
                (**(code **)(*plVar9 + 0x40))(plVar9,0);
                (**(code **)*plVar9)(plVar9);
              }
            }
          }
          local_334 = local_334 + 1;
        }
        (**(code **)*plVar7)(plVar7);
        FUN_140a8abf0((longlong *)(param_1 + 0x248));
        FUN_140a8abf0((longlong *)(param_1 + 0x278));
        FUN_140a8abf0((longlong *)(param_1 + 0x2a8));
        FUN_140a87910(param_1 + 0x188);
        FUN_140a87910(param_1 + 0x1c8);
        FUN_140a87990(param_1 + 0x208);
        puVar11 = *(undefined8 **)(param_1 + 0x78);
        puVar16 = (undefined8 *)*puVar11;
        plVar7 = *(longlong **)(param_1 + 0x48);
        local_258 = plVar7;
        local_248 = plVar7;
LAB_140a971f4:
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar16 != puVar11) {
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar20 = lVar13;
          }
          else {
            lVar20 = *plVar7;
          }
          if (puVar16 == *(undefined8 **)(lVar20 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          local_328 = (longlong *)puVar16[4];
          if (local_328 == (longlong *)0x0) {
            log_InlineLogERROR(&DAT_140aa7368);
          }
          else {
            FUN_140a92760((longlong *)(param_1 + 0x248),&local_328);
          }
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar16 + 0x29) == '\0') {
            puVar19 = puVar16;
            puVar1 = (undefined8 *)puVar16[2];
            if (*(char *)((longlong)puVar16[2] + 0x29) == '\0') {
              do {
                puVar16 = puVar1;
                puVar1 = (undefined8 *)*puVar16;
                local_2f0 = puVar16;
              } while (*(char *)((longlong)*puVar16 + 0x29) == '\0');
            }
            else {
              do {
                puVar16 = (undefined8 *)puVar19[1];
                if (*(char *)((longlong)puVar16 + 0x29) != '\0') break;
                bVar22 = puVar19 == (undefined8 *)puVar16[2];
                puVar19 = puVar16;
              } while (bVar22);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          goto LAB_140a971f4;
        }
        puVar11 = *(undefined8 **)(param_1 + 0xb8);
        puVar16 = (undefined8 *)*puVar11;
        plVar7 = *(longlong **)(param_1 + 0x88);
        local_290 = plVar7;
        local_280 = plVar7;
LAB_140a97324:
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar16 != puVar11) {
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar20 = lVar13;
          }
          else {
            lVar20 = *plVar7;
          }
          if (puVar16 == *(undefined8 **)(lVar20 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          local_310 = (longlong *)puVar16[4];
          if (local_310 == (longlong *)0x0) {
            log_InlineLogERROR(&DAT_140aa7368);
          }
          else {
            FUN_140a92760((longlong *)(param_1 + 0x2a8),&local_310);
          }
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar16 + 0x29) == '\0') {
            puVar19 = puVar16;
            puVar1 = (undefined8 *)puVar16[2];
            if (*(char *)((longlong)puVar16[2] + 0x29) == '\0') {
              do {
                puVar16 = puVar1;
                puVar1 = (undefined8 *)*puVar16;
                local_2e8 = puVar16;
              } while (*(char *)((longlong)*puVar16 + 0x29) == '\0');
            }
            else {
              do {
                puVar16 = (undefined8 *)puVar19[1];
                if (*(char *)((longlong)puVar16 + 0x29) != '\0') break;
                bVar22 = puVar19 == (undefined8 *)puVar16[2];
                puVar19 = puVar16;
              } while (bVar22);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          goto LAB_140a97324;
        }
        puVar11 = *(undefined8 **)(param_1 + 0xf8);
        puVar16 = (undefined8 *)*puVar11;
        plVar7 = *(longlong **)(param_1 + 200);
        local_2c8[0] = plVar7;
        local_270 = plVar7;
LAB_140a97454:
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar16 != puVar11) {
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar20 = lVar13;
          }
          else {
            lVar20 = *plVar7;
          }
          if (puVar16 == *(undefined8 **)(lVar20 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          local_320 = puVar16[4];
          if (local_320 == 0) {
            log_InlineLogERROR(&DAT_140aa7368);
          }
          else {
            FUN_140a92760((longlong *)(param_1 + 0x278),&local_320);
          }
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar16 + 0x29) == '\0') {
            puVar19 = puVar16;
            puVar1 = (undefined8 *)puVar16[2];
            if (*(char *)((longlong)puVar16[2] + 0x29) == '\0') {
              do {
                puVar16 = puVar1;
                puVar1 = (undefined8 *)*puVar16;
                local_2d0 = puVar16;
              } while (*(char *)((longlong)*puVar16 + 0x29) == '\0');
            }
            else {
              do {
                puVar16 = (undefined8 *)puVar19[1];
                if (*(char *)((longlong)puVar16 + 0x29) != '\0') break;
                bVar22 = puVar19 == (undefined8 *)puVar16[2];
                puVar19 = puVar16;
              } while (bVar22);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          goto LAB_140a97454;
        }
        FUN_140a92d00(param_1,0);
        FUN_140a92d00(param_1,1);
        FUN_140a92d00(param_1,2);
        FUN_140a8ebc0(param_1,0);
        FUN_140a8ebc0(param_1,1);
        uVar17 = FUN_140a8ebc0(param_1,2);
        uVar8 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
      }
    }
  }
  return uVar8;
}




void FUN_140a975d0(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_2);
    if (uVar2 < 0x5dc) {
      iVar3 = (0x5dc - uVar2) * 6000;
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = iVar3;
      }
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xa8))(*(longlong **)(param_1 + 0x2e0),param_2,iVar4,1,uVar6);
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x1c8))(*(longlong **)(param_1 + 0x2e0),param_2,0x5dc);
        lVar5 = FUN_140a8f340(param_1,param_2);
        if (lVar5 != 0) {
          FUN_140a9cd30(lVar5,4,0x5dc);
          iVar4 = FUN_140a9cef0(lVar5);
          if (iVar4 != 0) {
            FUN_140a92f90(param_1,param_2,0);
          }
        }
        FUN_140a914e0(param_1,param_2);
      }
    }
  }
  return;
}




void FUN_140a976d0(longlong param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint local_858;
  undefined4 local_854;
  undefined4 local_850;
  uint local_848;
  undefined4 local_844;
  undefined4 local_840;
  undefined8 local_838;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  local_838 = 0xfffffffffffffffe;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    uVar3 = FUN_140a924b0(param_1,param_2);
    if (uVar3 == 0) {
      FUN_140a924d0(param_1,param_2);
      log_InlineLogERROR("CArenicSystem::OnFightTimeOut Map none User1:%u, status1:%u");
    }
    else {
      uVar3 = FUN_140a8f270(param_1,uVar3,param_2);
      if (uVar3 == 0) {
        FUN_140a924d0(param_1,param_2);
        log_InlineLogERROR("CArenicSystem::OnFightTimeOut, User1:%u, status:%d, Match not find");
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar3);
        if (cVar1 != '\0') {
          FUN_140a924f0(param_1,param_2,9);
          iVar4 = FUN_140a924d0(param_1,uVar3);
          if (iVar4 == 9) {
            local_858 = param_2;
            local_854 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),param_2);
            lVar5 = FUN_140a8ff70(param_1,param_2);
            if (lVar5 != 0) {
              local_850 = FUN_140a81100(lVar5);
            }
            local_848 = uVar3;
            local_844 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),uVar3);
            lVar5 = FUN_140a8ff70(param_1,uVar3);
            if (lVar5 != 0) {
              local_840 = FUN_140a81100(lVar5);
            }
            bVar2 = FUN_140a821a0(param_1,&local_858,&local_848);
            uVar7 = param_2;
            if (bVar2) {
              uVar7 = uVar3;
              uVar3 = param_2;
            }
            FUN_140a94df0(param_1,uVar3,uVar7,'\x01');
            FUN_140a9ebe0(local_418);
            uVar6 = FUN_140a9ecd0((longlong)local_418,9,1);
            if ((char)uVar6 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),uVar3);
            }
            FUN_140a9ebe0(local_828);
            uVar6 = FUN_140a9ecd0((longlong)local_828,9,0);
            if ((char)uVar6 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),uVar7,local_828);
            }
            FUN_140a9ec30((undefined8 *)local_828);
            FUN_140a9ec30((undefined8 *)local_418);
          }
        }
      }
    }
  }
  return;
}




void FUN_140a97900(longlong param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    uVar3 = FUN_140a924b0(param_1,param_2);
    if (uVar3 != 0) {
      uVar3 = FUN_140a8f270(param_1,uVar3,param_2);
      if (uVar3 == 0) {
        FUN_140a924d0(param_1,param_2);
        log_InlineLogERROR("CArenicSystem::OnDie, User1:%u, status1:%d, match not find");
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar3);
        if (cVar1 == '\0') {
          FUN_140a924d0(param_1,param_2);
          log_InlineLogERROR("CArenicSystem::OnDie, User1:%u, status1:%d, User2 not find:%u");
        }
        else {
          bVar2 = FUN_140a90090(param_1,param_2);
          if (bVar2) {
            bVar2 = FUN_140a90090(param_1,uVar3);
            if (bVar2) {
              FUN_140a94df0(param_1,uVar3,param_2,'\x01');
              FUN_140a9ebe0(local_418);
              uVar4 = FUN_140a9ecd0((longlong)local_418,9,1);
              if ((char)uVar4 != '\0') {
                (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),uVar3);
              }
              FUN_140a9ebe0(local_828);
              uVar4 = FUN_140a9ecd0((longlong)local_828,9,0);
              if ((char)uVar4 != '\0') {
                (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_2,local_828);
              }
              FUN_140a9ec30((undefined8 *)local_828);
              FUN_140a9ec30((undefined8 *)local_418);
            }
          }
        }
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a97aa0(longlong param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_4f8 [32];
  undefined4 local_4d8;
  longlong *local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  undefined8 *local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  CMsg local_488 [1040];
  uint local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  uint local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_498 = 0xfffffffffffffffe;
  local_48 = DAT_140ab7408 ^ (ulonglong)auStack_4f8;
  if (param_2 == 0) {
    local_4d8 = 0xcbc;
    log_InlineLogERROR(&DAT_140aa7368);
  }
  else {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
    if (cVar5 != '\0') {
      lVar7 = FUN_140a8ff70(param_1,param_2);
      lVar8 = 0;
      uVar6 = 0;
      if (lVar7 != 0) {
        uVar6 = FUN_140a811b0(lVar7);
      }
      puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x178))[1];
      cVar5 = *(char *)((longlong)puVar9 + 0xc1);
      puVar3 = *(undefined8 **)(param_1 + 0x178);
      while (cVar5 == '\0') {
        if (*(uint *)(puVar9 + 3) < uVar6) {
          puVar11 = (undefined8 *)puVar9[2];
          puVar9 = puVar3;
        }
        else {
          puVar11 = (undefined8 *)*puVar9;
        }
        puVar3 = puVar9;
        puVar9 = puVar11;
        cVar5 = *(char *)((longlong)puVar11 + 0xc1);
      }
      local_4b0 = puVar3;
      local_4b8 = *(longlong *)(param_1 + 0x148);
      puVar9 = *(undefined8 **)(param_1 + 0x178);
      if (*(longlong *)(param_1 + 0x148) == 0) {
        _invalid_parameter_noinfo();
      }
      if ((puVar3 == puVar9) || (uVar6 < *(uint *)(puVar3 + 3))) {
        local_4a0 = *(undefined8 *)(param_1 + 0x178);
        local_4a8 = *(longlong *)(param_1 + 0x148);
        plVar12 = &local_4a8;
      }
      else {
        plVar12 = &local_4b8;
      }
      plVar2 = (longlong *)*plVar12;
      local_4c0 = plVar12[1];
      lVar7 = *(longlong *)(param_1 + 0x178);
      local_4c8 = plVar2;
      if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x148))) {
        _invalid_parameter_noinfo();
      }
      lVar4 = local_4c0;
      if (local_4c0 == lVar7) {
        lVar8 = FUN_140a8ff70(param_1,param_2);
        if (lVar8 != 0) {
          FUN_140a81040(lVar8);
        }
        log_InlineLogERROR("CArenicSystem::ShowScoreInfo User:%u, not match not find status:%d");
      }
      else {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar8 = *plVar2;
        }
        if (lVar4 == *(longlong *)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar6 = *(uint *)(lVar4 + 0x24);
        if (((((uVar6 == param_2) || (*(uint *)(lVar4 + 0x28) == param_2)) && (uVar1 = *(uint *)(lVar4 + 0x28), uVar6 != 0)) &&
            ((uVar1 != 0 && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar6), cVar5 != '\0')))) &&
           (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar1), cVar5 != '\0')) {
          lVar8 = FUN_140a8ff70(param_1,uVar6);
          lVar7 = FUN_140a8ff70(param_1,uVar1);
          if ((lVar8 != 0) && (lVar7 != 0)) {
            FUN_140a9f550(local_488);
            local_78 = uVar6;
            local_60 = uVar1;
            local_64 = FUN_140a81100(lVar8);
            local_4c = FUN_140a81100(lVar7);
            puVar9 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x60))(*(longlong **)(param_1 + 0x2e0),uVar6);
            local_74 = *puVar9;
            local_6c = puVar9[1];
            puVar9 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x60))(*(longlong **)(param_1 + 0x2e0),uVar1);
            local_5c = *puVar9;
            local_54 = puVar9[1];
            uVar10 = FUN_140a9f600((longlong)local_488,&local_78,&local_60);
            if ((char)uVar10 != '\0') {
              cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),param_3);
              if (cVar5 == '\0') {
                FUN_140a949d0(param_1,local_78,local_488);
              }
              else {
                (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_3,local_488);
              }
            }
            FUN_140a9f5a0((undefined8 *)local_488);
          }
        }
      }
    }
  }
  return;
}




void FUN_140a97df0(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  bool bVar15;
  CMsg local_438 [1040];
  
  puVar2 = *(undefined8 **)(param_1 + 0x178);
  puVar11 = (undefined8 *)*puVar2;
  plVar3 = *(longlong **)(param_1 + 0x148);
  do {
    while( true ) {
      while( true ) {
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar11 == puVar2) {
          return;
        }
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = 0;
        }
        else {
          lVar13 = *plVar3;
        }
        if (puVar11 == *(undefined8 **)(lVar13 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((*(int *)((longlong)puVar11 + 0x24) == param_2) || (*(int *)(puVar11 + 5) == param_2)) {
          FUN_140a9f940(local_438);
          puVar14 = (undefined4 *)puVar11[0x15];
          if ((undefined4 *)puVar11[0x16] < puVar14) {
            _invalid_parameter_noinfo();
          }
          plVar3 = (longlong *)puVar11[0x12];
          uVar9 = FUN_140a9fc90(local_438,2,param_2,(int)((longlong)(puVar11[10] - puVar11[9]) >> 2),(int)((longlong)(puVar11[0x10] - puVar11[0xf]) >> 2));
          if ((char)uVar9 == '\0') {
            log_InlineLogERROR(&DAT_140aa7368);
            FUN_140a9f990((undefined8 *)local_438);
          }
          else {
            while( true ) {
              puVar4 = (undefined4 *)puVar11[0x16];
              if (puVar4 < (undefined4 *)puVar11[0x15]) {
                _invalid_parameter_noinfo();
              }
              if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)puVar11[0x12])) {
                _invalid_parameter_noinfo();
              }
              if (puVar14 == puVar4) break;
              if (plVar3 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar13 = 0;
              }
              else {
                lVar13 = *plVar3;
              }
              if (*(undefined4 **)(lVar13 + 0x20) <= puVar14) {
                _invalid_parameter_noinfo();
              }
              uVar1 = *puVar14;
              cVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar1);
              if (cVar7 != '\0') {
                plVar5 = *(longlong **)(param_1 + 0x2e0);
                pcVar10 = (char *)(**(code **)(*plVar5 + 0x60))(plVar5,uVar1);
                uVar8 = (**(code **)(*plVar5 + 0x68))(plVar5,uVar1);
                FUN_140a9fb90((longlong)local_438,uVar8,pcVar10);
              }
              if (plVar3 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar13 = 0;
              }
              else {
                lVar13 = *plVar3;
              }
              if (*(undefined4 **)(lVar13 + 0x20) <= puVar14) {
                _invalid_parameter_noinfo();
              }
              puVar14 = puVar14 + 1;
            }
            if (param_3 == 0) {
              FUN_140a949d0(param_1,*(int *)((longlong)puVar11 + 0x24),local_438);
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_3,local_438);
            }
            FUN_140a9f990((undefined8 *)local_438);
          }
          return;
        }
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)puVar11 + 0xc1) == '\0') break;
        _invalid_parameter_noinfo();
      }
      puVar12 = puVar11;
      puVar6 = (undefined8 *)puVar11[2];
      if (*(char *)((longlong)puVar11[2] + 0xc1) != '\0') break;
      do {
        puVar11 = puVar6;
        puVar6 = (undefined8 *)*puVar11;
      } while (*(char *)((longlong)*puVar11 + 0xc1) == '\0');
    }
    do {
      puVar11 = (undefined8 *)puVar12[1];
      if (*(char *)((longlong)puVar11 + 0xc1) != '\0') break;
      bVar15 = puVar12 == (undefined8 *)puVar11[2];
      puVar12 = puVar11;
    } while (bVar15);
  } while( true );
}




void FUN_140a98120(longlong param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  ulonglong uVar14;
  uint *puVar15;
  undefined4 local_res10 [2];
  uint local_res20 [2];
  undefined8 local_518;
  undefined8 uStack_510;
  longlong local_508;
  uint *puStack_500;
  uint *local_4f8;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  longlong local_4b8;
  uint *puStack_4b0;
  uint *local_4a8;
  longlong *local_4a0;
  longlong local_490;
  undefined8 local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  longlong local_468;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  CMsg local_438 [1040];
  
  local_480 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  cVar8 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (((cVar8 != '\0') && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),param_3), cVar8 != '\0')) &&
     (local_res20[0] = FUN_140a924b0(param_1,param_3), local_res20[0] != 0)) {
    FUN_140a8cc10((longlong *)(param_1 + 0x148),&local_518,local_res20);
    lVar10 = *(longlong *)(param_1 + 0x178);
    lVar11 = 0;
    local_4a0 = *(longlong **)(param_1 + 0x148);
    if ((local_518 == (longlong *)0x0) || (local_518 != local_4a0)) {
      _invalid_parameter_noinfo();
    }
    lVar7 = (longlong)uStack_510;
    if (uStack_510 != (uint *)lVar10) {
      if (local_518 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar11 = *local_518;
      }
      if (uStack_510 == (uint *)*(longlong *)(lVar11 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if ((*(uint *)((longlong)uStack_510 + 0x24) == param_3) || (*(uint *)((longlong)uStack_510 + 0x28) == param_3)) {
        uVar1 = *(uint *)((longlong)uStack_510 + 0x24);
        uVar2 = *(uint *)((longlong)uStack_510 + 0x28);
        cVar8 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar1);
        if ((cVar8 != '\0') && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar2), cVar8 != '\0')) {
          lVar10 = FUN_140a8ff70(param_1,uVar1);
          lVar11 = FUN_140a8ff70(param_1,uVar2);
          if ((((lVar10 != 0) && (lVar11 != 0)) && ((iVar9 = FUN_140a81040(lVar10), iVar9 == 8 || (iVar9 = FUN_140a81040(lVar10), iVar9 == 7)))) &&
             ((iVar9 = FUN_140a81040(lVar11), iVar9 == 8 || (iVar9 = FUN_140a81040(lVar11), iVar9 == 7)))) {
            puVar3 = *(uint **)((longlong)uStack_510 + 0x50);
            local_4d8 = 0;
            if (puVar3 < *(uint **)((longlong)uStack_510 + 0x48)) {
              _invalid_parameter_noinfo();
            }
            uVar4 = *(undefined8 *)((longlong)uStack_510 + 0x30);
            local_4d8._0_4_ = (undefined4)uVar4;
            local_4d8._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_4d0._0_4_ = SUB84(puVar3,0);
            uStack_4d0._4_4_ = (undefined4)((ulonglong)puVar3 >> 0x20);
            local_458 = (undefined4)local_4d8;
            uStack_454 = local_4d8._4_4_;
            uStack_450 = (undefined4)uStack_4d0;
            uStack_44c = uStack_4d0._4_4_;
            puVar5 = *(uint **)((longlong)uStack_510 + 0x48);
            local_4b8 = 0;
            local_4d8 = uVar4;
            uStack_4d0 = puVar3;
            if (*(uint **)((longlong)uStack_510 + 0x50) < puVar5) {
              _invalid_parameter_noinfo();
            }
            local_4b8 = *(longlong *)((longlong)uStack_510 + 0x30);
            for (puVar15 = puVar5; (puVar15 != puVar3 && (*puVar15 != param_3)); puVar15 = puVar15 + 1) {
            }
            local_4e8._0_4_ = (undefined4)local_4b8;
            local_4e8._4_4_ = (undefined4)((ulonglong)local_4b8 >> 0x20);
            uStack_4e0._0_4_ = SUB84(puVar15,0);
            uStack_4e0._4_4_ = (undefined4)((ulonglong)puVar15 >> 0x20);
            local_478 = (undefined4)local_4e8;
            uStack_474 = local_4e8._4_4_;
            uStack_470 = (undefined4)uStack_4e0;
            uStack_46c = uStack_4e0._4_4_;
            puVar3 = *(uint **)((longlong)uStack_510 + 0x50);
            local_468 = 0;
            local_4e8 = local_4b8;
            uStack_4e0 = puVar15;
            puStack_4b0 = puVar5;
            local_4a8 = puVar15;
            if (puVar3 < *(uint **)((longlong)uStack_510 + 0x48)) {
              _invalid_parameter_noinfo();
            }
            local_468 = *(longlong *)((longlong)uStack_510 + 0x30);
            if ((local_4e8 == 0) || (local_4e8 != local_468)) {
              _invalid_parameter_noinfo();
            }
            if (puVar15 == puVar3) {
              puVar3 = *(uint **)((longlong)uStack_510 + 0x80);
              local_4c8 = 0;
              if (puVar3 < *(uint **)((longlong)uStack_510 + 0x78)) {
                _invalid_parameter_noinfo();
              }
              uVar4 = *(undefined8 *)((longlong)uStack_510 + 0x60);
              local_4c8._0_4_ = (undefined4)uVar4;
              local_4c8._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
              uStack_4c0._0_4_ = SUB84(puVar3,0);
              uStack_4c0._4_4_ = (undefined4)((ulonglong)puVar3 >> 0x20);
              local_448 = (undefined4)local_4c8;
              uStack_444 = local_4c8._4_4_;
              uStack_440 = (undefined4)uStack_4c0;
              uStack_43c = uStack_4c0._4_4_;
              puVar5 = *(uint **)((longlong)uStack_510 + 0x78);
              local_508 = 0;
              local_4c8 = uVar4;
              uStack_4c0 = puVar3;
              if (*(uint **)((longlong)uStack_510 + 0x80) < puVar5) {
                _invalid_parameter_noinfo();
              }
              local_508 = *(longlong *)((longlong)uStack_510 + 0x60);
              for (puVar15 = puVar5; (puVar15 != puVar3 && (*puVar15 != param_3)); puVar15 = puVar15 + 1) {
              }
              local_518._0_4_ = (undefined4)local_508;
              local_518._4_4_ = (undefined4)((ulonglong)local_508 >> 0x20);
              uStack_510._0_4_ = SUB84(puVar15,0);
              uStack_510._4_4_ = (undefined4)((ulonglong)puVar15 >> 0x20);
              local_478 = (undefined4)local_518;
              uStack_474 = local_518._4_4_;
              uStack_470 = (undefined4)uStack_510;
              uStack_46c = uStack_510._4_4_;
              puVar3 = *(uint **)(lVar7 + 0x80);
              local_490 = 0;
              local_518 = (longlong *)local_508;
              uStack_510 = puVar15;
              puStack_500 = puVar5;
              local_4f8 = puVar15;
              if (puVar3 < *(uint **)(lVar7 + 0x78)) {
                _invalid_parameter_noinfo();
              }
              local_490 = *(longlong *)(lVar7 + 0x60);
              if ((local_518 == (longlong *)0x0) || (local_518 != (longlong *)local_490)) {
                _invalid_parameter_noinfo();
              }
              if (puVar15 == puVar3) {
                if (*(uint *)(lVar7 + 0x24) == param_3) {
                  FUN_140a92550((longlong *)(lVar7 + 0x30),local_res10);
                }
                else {
                  FUN_140a92550((longlong *)(lVar7 + 0x60),local_res10);
                }
                FUN_140a9f940(local_438);
                plVar6 = *(longlong **)(param_1 + 0x2e0);
                pcVar12 = (char *)(**(code **)(*plVar6 + 0x60))(plVar6,param_2);
                pcVar13 = (char *)(**(code **)(*plVar6 + 0x60))(plVar6,param_3);
                uVar14 = FUN_140a9fd30(local_438,4,pcVar13,pcVar12);
                if ((char)uVar14 != '\0') {
                  FUN_140a949d0(param_1,param_3,local_438);
                }
                FUN_140a97df0(param_1,param_3,0);
                FUN_140a9f990((undefined8 *)local_438);
              }
            }
          }
        }
      }
    }
  }
  return;
}




void FUN_140a98570(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  rsize_t rVar9;
  uint *puVar10;
  uint local_res18 [4];
  longlong *local_38;
  uint *puStack_30;
  
  uVar6 = FUN_140a8fd60(param_1,param_2);
  if ((uVar6 != 0) && (bVar5 = FUN_140a8fe80(param_1,uVar6), bVar5)) {
    FUN_140a901b0(param_1,(ulonglong)param_2,0);
    lVar7 = FUN_140a8ff70(param_1,uVar6);
    lVar8 = 0;
    if (lVar7 == 0) {
      local_res18[0] = 0;
    }
    else {
      local_res18[0] = FUN_140a811b0(lVar7);
    }
    if (local_res18[0] != 0) {
      FUN_140a8cc10((longlong *)(param_1 + 0x148),(longlong *)&local_38,local_res18);
      lVar7 = *(longlong *)(param_1 + 0x178);
      if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)(param_1 + 0x148))) {
        _invalid_parameter_noinfo();
      }
      puVar4 = puStack_30;
      if (puStack_30 != (uint *)lVar7) {
        if (local_38 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar8 = *local_38;
        }
        if (puStack_30 == (uint *)*(longlong *)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((*(uint *)((longlong)puStack_30 + 0x24) == uVar6) || (*(uint *)((longlong)puStack_30 + 0x28) == uVar6)) {
          puVar2 = *(uint **)((longlong)puStack_30 + 0x50);
          if (puVar2 < *(uint **)((longlong)puStack_30 + 0x48)) {
            _invalid_parameter_noinfo();
          }
          puVar3 = *(uint **)((longlong)puStack_30 + 0x48);
          if (*(uint **)((longlong)puStack_30 + 0x50) < puVar3) {
            _invalid_parameter_noinfo();
          }
          local_38 = *(longlong **)((longlong)puStack_30 + 0x30);
          for (puVar10 = puVar3; (puVar10 != puVar2 && (*puVar10 != param_2)); puVar10 = puVar10 + 1) {
          }
          puVar2 = *(uint **)((longlong)puStack_30 + 0x50);
          puVar1 = (undefined8 *)((longlong)puStack_30 + 0x48);
          puStack_30 = puVar3;
          if (puVar2 < (uint *)*puVar1) {
            _invalid_parameter_noinfo();
          }
          if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)((longlong)puVar4 + 0x30))) {
            _invalid_parameter_noinfo();
          }
          if (puVar10 != puVar2) {
            lVar8 = *(longlong *)((longlong)puVar4 + 0x50) - (longlong)(puVar10 + 1) >> 2;
            if (0 < lVar8) {
              rVar9 = lVar8 << 2;
              memmove_s(puVar10,rVar9,puVar10 + 1,rVar9);
            }
            *(longlong *)((longlong)puVar4 + 0x50) = *(longlong *)((longlong)puVar4 + 0x50) + -4;
            if ((puVar10 < *(uint **)((longlong)puVar4 + 0x48)) || (*(uint **)((longlong)puVar4 + 0x50) < puVar10)) {
              _invalid_parameter_noinfo();
            }
          }
          puVar2 = *(uint **)((longlong)puVar4 + 0x80);
          if (puVar2 < *(uint **)((longlong)puVar4 + 0x78)) {
            _invalid_parameter_noinfo();
          }
          puVar3 = *(uint **)((longlong)puVar4 + 0x78);
          if (*(uint **)((longlong)puVar4 + 0x80) < puVar3) {
            _invalid_parameter_noinfo();
          }
          local_38 = *(longlong **)((longlong)puVar4 + 0x60);
          for (puVar10 = puVar3; (puVar10 != puVar2 && (*puVar10 != param_2)); puVar10 = puVar10 + 1) {
          }
          puVar2 = *(uint **)((longlong)puVar4 + 0x80);
          puStack_30 = puVar3;
          if (puVar2 < *(uint **)((longlong)puVar4 + 0x78)) {
            _invalid_parameter_noinfo();
          }
          if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)((longlong)puVar4 + 0x60))) {
            _invalid_parameter_noinfo();
          }
          if (puVar10 != puVar2) {
            lVar8 = *(longlong *)((longlong)puVar4 + 0x80) - (longlong)(puVar10 + 1) >> 2;
            if (0 < lVar8) {
              rVar9 = lVar8 << 2;
              memmove_s(puVar10,rVar9,puVar10 + 1,rVar9);
            }
            *(longlong *)((longlong)puVar4 + 0x80) = *(longlong *)((longlong)puVar4 + 0x80) + -4;
            if ((puVar10 < *(uint **)((longlong)puVar4 + 0x78)) || (*(uint **)((longlong)puVar4 + 0x80) < puVar10)) {
              _invalid_parameter_noinfo();
            }
          }
          puVar2 = *(uint **)((longlong)puVar4 + 0xb0);
          if (puVar2 < *(uint **)((longlong)puVar4 + 0xa8)) {
            _invalid_parameter_noinfo();
          }
          puVar3 = *(uint **)((longlong)puVar4 + 0xa8);
          if (*(uint **)((longlong)puVar4 + 0xb0) < puVar3) {
            _invalid_parameter_noinfo();
          }
          local_38 = *(longlong **)((longlong)puVar4 + 0x90);
          for (puVar10 = puVar3; (puVar10 != puVar2 && (*puVar10 != param_2)); puVar10 = puVar10 + 1) {
          }
          puVar2 = *(uint **)((longlong)puVar4 + 0xb0);
          puStack_30 = puVar3;
          if (puVar2 < *(uint **)((longlong)puVar4 + 0xa8)) {
            _invalid_parameter_noinfo();
          }
          if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)((longlong)puVar4 + 0x90))) {
            _invalid_parameter_noinfo();
          }
          if (puVar10 != puVar2) {
            lVar8 = *(longlong *)((longlong)puVar4 + 0xb0) - (longlong)(puVar10 + 1) >> 2;
            if (0 < lVar8) {
              rVar9 = lVar8 << 2;
              memmove_s(puVar10,rVar9,puVar10 + 1,rVar9);
            }
            *(longlong *)((longlong)puVar4 + 0xb0) = *(longlong *)((longlong)puVar4 + 0xb0) + -4;
            if ((puVar10 < *(uint **)((longlong)puVar4 + 0xa8)) || (*(uint **)((longlong)puVar4 + 0xb0) < puVar10)) {
              _invalid_parameter_noinfo();
            }
          }
          FUN_140a97df0(param_1,uVar6,0);
        }
      }
    }
  }
  return;
}




undefined8 * FUN_140a988e0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
  
  if (0x186186186186184 < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ab5fb0);
  }
  plVar5 = FUN_140a96720(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0xc0);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0xc0) == '\0') {
        *(undefined1 *)(plVar2 + 0x18) = 1;
        *(undefined1 *)(lVar4 + 0xc0) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xc0) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0xc1) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0xc0) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xc0) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0xc1) == '\0') {
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
      if (*(char *)(lVar4 + 0xc0) == '\0') {
        *(undefined1 *)(plVar2 + 0x18) = 1;
        *(undefined1 *)(lVar4 + 0xc0) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xc0) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0xc1) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0xc0) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xc0) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0xc1) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0xc0);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0xc0) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




void FUN_140a98c60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140a967b0(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




void FUN_140a98ca0(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (((cVar1 != '\0') && (lVar4 = FUN_140a8ff70(param_1,param_2), lVar4 != 0)) && (iVar2 = FUN_140a81040(lVar4), iVar2 == 8)) {
    lVar4 = FUN_140a8ff70(param_1,param_2);
    if ((lVar4 == 0) || (uVar3 = FUN_140a811b0(lVar4), uVar3 == 0)) {
      lVar4 = FUN_140a8ff70(param_1,param_2);
      if (lVar4 != 0) {
        FUN_140a81040(lVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x000140a98df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      log_InlineLogERROR("CArenicSystem::OnLoseLife Map none User1:%u, status1:%u");
      return;
    }
    uVar3 = FUN_140a8f270(param_1,uVar3,param_2);
    if (uVar3 == 0) {
      lVar4 = FUN_140a8ff70(param_1,param_2);
      if (lVar4 != 0) {
        FUN_140a81040(lVar4);
      }
      log_InlineLogERROR("CArenicSystem::OnLoseLife, User1:%u, status1:%d, Match not find");
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar3);
      if (((cVar1 != '\0') && (lVar4 = FUN_140a8ff70(param_1,uVar3), lVar4 != 0)) && (iVar2 = FUN_140a81040(lVar4), iVar2 == 8)) {
        lVar4 = FUN_140a8ff70(param_1,uVar3);
        if (lVar4 != 0) {
          FUN_140a81110(lVar4,param_3);
        }
        FUN_140a97aa0(param_1,param_2,0);
      }
    }
  }
  return;
}




void FUN_140a98e00(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  IStringManager *pIVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint local_res10 [2];
  uint local_res20 [2];
  longlong *local_460;
  longlong local_458;
  longlong *local_450;
  undefined8 local_440;
  CMsg local_438 [1040];
  
  local_440 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  iVar6 = FUN_140a924d0(param_1,param_3);
  if (iVar6 == 10) {
    return;
  }
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x90))(*(longlong **)(param_1 + 0x2e0),param_2);
  if (cVar4 == '\0') {
    return;
  }
  bVar5 = FUN_140a8fc70(param_1,param_2);
  if (bVar5) {
    return;
  }
  bVar5 = FUN_140a90090(param_1,param_2);
  if (bVar5) {
    return;
  }
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),param_3);
  if (cVar4 == '\0') {
    return;
  }
  local_res20[0] = FUN_140a924b0(param_1,param_3);
  if (local_res20[0] == 0) {
    return;
  }
  FUN_140a8cc10((longlong *)(param_1 + 0x148),(longlong *)&local_460,local_res20);
  lVar2 = *(longlong *)(param_1 + 0x178);
  lVar13 = 0;
  local_450 = *(longlong **)(param_1 + 0x148);
  if ((local_460 == (longlong *)0x0) || (local_460 != local_450)) {
    _invalid_parameter_noinfo();
  }
  if (local_458 == lVar2) {
    return;
  }
  if (local_460 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar13 = *local_460;
  }
  if (local_458 == *(longlong *)(lVar13 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  if ((*(uint *)(local_458 + 0x24) != param_3) && (*(uint *)(local_458 + 0x28) != param_3)) {
    pIVar11 = theInstance();
    lVar2 = **(longlong **)(param_1 + 0x2e0);
    uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_NOT_BATTLE_TO_WITNESS");
    (**(code **)(lVar2 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar12);
    return;
  }
  uVar8 = *(uint *)(local_458 + 0x24);
  uVar1 = *(uint *)(local_458 + 0x28);
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar8);
  if ((cVar4 == '\0') || (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar1), cVar4 == '\0')) {
    log_InlineLogERROR("CArenicSystem::OnEnterWitness, not find User1:%u, User2:%u");
    return;
  }
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x158))(*(longlong **)(param_1 + 0x2e0),uVar8);
  if (iVar6 == 0) {
    log_InlineLogDBERROR("table:cq_map/cq_dynamap, CArenicSystem::OnEnterWitness, not find arenic map User1:%u, User2:%u");
    return;
  }
  iVar7 = FUN_140a924d0(param_1,uVar8);
  if (((iVar7 == 8) || (iVar7 = FUN_140a924d0(param_1,uVar8), iVar7 == 7)) &&
     ((iVar7 = FUN_140a924d0(param_1,uVar1), iVar7 == 8 || (iVar7 = FUN_140a924d0(param_1,uVar1), iVar7 == 7)))) {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x158))(*(longlong **)(param_1 + 0x2e0),param_2);
    local_res20[0] = uVar8;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x168))(*(longlong **)(param_1 + 0x2e0),uVar8);
    if (cVar4 == '\0') {
      return;
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x178))(*(longlong **)(param_1 + 0x2e0),uVar8);
    if (cVar4 != '\0') {
      pIVar11 = theInstance();
      lVar2 = **(longlong **)(param_1 + 0x2e0);
      uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_NOT_INVITE");
      (**(code **)(lVar2 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar12);
      return;
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x180))(*(longlong **)(param_1 + 0x2e0),uVar8);
    if (cVar4 == '\0') {
      plVar3 = *(longlong **)(param_1 + 0x2e0);
      lVar2 = *plVar3;
      uVar9 = (**(code **)(lVar2 + 0x80))(plVar3,param_2);
      uVar10 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
      uVar8 = local_res20[0];
      (**(code **)(lVar2 + 0x98))(*(undefined8 *)(param_1 + 0x2e0),param_2,local_res20[0],uVar10,uVar9,1);
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xc0))(*(longlong **)(param_1 + 0x2e0),param_2,uVar8);
    if (cVar4 == '\0') {
      return;
    }
    FUN_140a901b0(param_1,(ulonglong)param_2,param_3);
    FUN_140a9f940(local_438);
    uVar12 = FUN_140a9f9c0(local_438,0,*(undefined4 *)(local_458 + 0x24));
    if ((char)uVar12 == '\0') {
      log_InlineLogERROR(&DAT_140aa7368);
      FUN_140a9f990((undefined8 *)local_438);
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_2,local_438);
    FUN_140a92550((longlong *)(local_458 + 0x90),local_res10);
    FUN_140a97aa0(param_1,*(uint *)(local_458 + 0x24),param_2);
    FUN_140a97df0(param_1,*(int *)(local_458 + 0x24),0);
    (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xb8))(*(longlong **)(param_1 + 0x2e0),param_2,iVar6);
    FUN_140a9f990((undefined8 *)local_438);
    return;
  }
  pIVar11 = theInstance();
  lVar2 = **(longlong **)(param_1 + 0x2e0);
  uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_ARENIC_NOT_BATTLE_TO_WITNESS");
  (**(code **)(lVar2 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar12);
  return;
}




void FUN_140a99280(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  longlong lVar11;
  uint local_res20 [2];
  longlong *local_488;
  uint *puStack_480;
  longlong *local_478 [2];
  longlong *local_468;
  longlong *local_458;
  uint *puStack_450;
  undefined8 local_448;
  CMsg local_438 [1040];
  
  local_448 = 0xfffffffffffffffe;
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (((cVar5 != '\0') && (bVar6 = FUN_140a8fc70(param_1,param_2), bVar6)) && (uVar7 = FUN_140a8fd60(param_1,param_2), uVar7 != 0)) {
    FUN_140a901b0(param_1,(ulonglong)param_2,0);
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar7);
    if ((cVar5 != '\0') && (local_res20[0] = FUN_140a924b0(param_1,uVar7), local_res20[0] != 0)) {
      FUN_140a8cc10((longlong *)(param_1 + 0x148),(longlong *)&local_488,local_res20);
      lVar11 = *(longlong *)(param_1 + 0x178);
      local_468 = *(longlong **)(param_1 + 0x148);
      if ((local_488 == (longlong *)0x0) || (local_488 != local_468)) {
        _invalid_parameter_noinfo();
      }
      puVar4 = puStack_480;
      if (puStack_480 != (uint *)lVar11) {
        if (local_488 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = 0;
        }
        else {
          lVar11 = *local_488;
        }
        if (puStack_480 == (uint *)*(longlong *)(lVar11 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((*(uint *)((longlong)puStack_480 + 0x24) == uVar7) || (*(uint *)((longlong)puStack_480 + 0x28) == uVar7)) {
          puVar10 = *(uint **)((longlong)puStack_480 + 0xa8);
          local_488 = (longlong *)0x0;
          if (*(uint **)((longlong)puStack_480 + 0xb0) < puVar10) {
            _invalid_parameter_noinfo();
          }
          plVar2 = *(longlong **)((longlong)puStack_480 + 0x90);
          local_488 = plVar2;
          while( true ) {
            puVar3 = *(uint **)((longlong)puVar4 + 0xb0);
            local_478[0] = (longlong *)0x0;
            puStack_480 = puVar10;
            if (puVar3 < *(uint **)((longlong)puVar4 + 0xa8)) {
              _invalid_parameter_noinfo();
            }
            local_478[0] = *(longlong **)((longlong)puVar4 + 0x90);
            if ((plVar2 == (longlong *)0x0) || (plVar2 != local_478[0])) {
              _invalid_parameter_noinfo();
            }
            if (puVar10 == puVar3) {
              return;
            }
            if (plVar2 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar11 = 0;
            }
            else {
              lVar11 = *plVar2;
            }
            if (*(uint **)(lVar11 + 0x20) <= puVar10) {
              _invalid_parameter_noinfo();
            }
            uVar1 = *puVar10;
            if (uVar1 == param_2) break;
            if (plVar2 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar11 = 0;
            }
            else {
              lVar11 = *plVar2;
            }
            if (*(uint **)(lVar11 + 0x20) <= puVar10) {
              _invalid_parameter_noinfo();
            }
            puVar10 = puVar10 + 1;
          }
          FUN_140a9f940(local_438);
          uVar9 = FUN_140a9f9c0(local_438,3,uVar1);
          if ((char)uVar9 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_2,local_438);
          }
          uVar8 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x158))(*(longlong **)(param_1 + 0x2e0),param_2);
          cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x168))(*(longlong **)(param_1 + 0x2e0),uVar8);
          if (((cVar5 != '\0') && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 400))(*(longlong **)(param_1 + 0x2e0),uVar8), cVar5 != '\0')) &&
             (param_3 != '\0')) {
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x120))(*(longlong **)(param_1 + 0x2e0),param_2);
          }
          local_458 = local_488;
          puStack_450 = puStack_480;
          FUN_140a8c670((undefined8 *)((longlong)puVar4 + 0x90),local_478,(longlong)&local_458);
          FUN_140a97df0(param_1,uVar7,0);
          FUN_140a9f990((undefined8 *)local_438);
        }
      }
    }
  }
  return;
}




longlong * FUN_140a99590(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong local_28;
  undefined8 *local_20;
  
  puVar3 = (undefined8 *)param_1[6];
  bVar4 = true;
  if (*(char *)((longlong)puVar3[1] + 0xc1) == '\0') {
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
    } while (*(char *)((longlong)puVar1 + 0xc1) == '\0');
  }
  local_28 = *param_1;
  local_20 = puVar3;
  if (bVar4 == false) {
LAB_140a99652:
    if (*param_3 <= *(uint *)(local_20 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_28;
      goto LAB_140a9967c;
    }
  }
  else {
    puVar1 = *(undefined8 **)param_1[6];
    if (local_28 == 0) {
      _invalid_parameter_noinfo();
    }
    if (puVar3 != puVar1) {
      FUN_140a833c0(&local_28);
      goto LAB_140a99652;
    }
    bVar4 = true;
  }
  plVar2 = FUN_140a988e0(param_1,&local_28,bVar4,puVar3,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_20 = (undefined8 *)plVar2[1];
  *param_2 = *plVar2;
LAB_140a9967c:
  param_2[1] = (longlong)local_20;
  return param_2;
}




longlong * FUN_140a996a0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140a967b0(param_1,*(longlong **)(param_1[6] + 8),plVar3,plVar4);
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
    FUN_140a850a0(param_3);
    local_28 = lVar1;
    lStack_20 = lVar2;
    FUN_140a962c0(param_1,local_18,&local_28);
  }
  lVar1 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  return param_2;
}




void FUN_140a99800(longlong *param_1)

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
  FUN_140a996a0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_140a99870(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  longlong *local_9b8;
  longlong *plStack_9b0;
  undefined8 local_998;
  int local_988;
  uint local_984;
  uint local_980;
  undefined4 local_8e8 [2];
  undefined1 local_8e0 [168];
  CMsg local_838 [1040];
  CMsg local_428 [1040];
  
  local_998 = 0xfffffffffffffffe;
  plVar10 = (longlong *)**(undefined8 **)(param_1 + 0x1b8);
  plVar2 = *(longlong **)(param_1 + 0x188);
  plVar3 = *(longlong **)(param_1 + 0x1b8);
  plVar4 = *(longlong **)(param_1 + 0x188);
  local_9b8 = plVar4;
  plStack_9b0 = plVar3;
  do {
    while( true ) {
      while( true ) {
        if ((plVar2 == (longlong *)0x0) || (plVar2 != plVar4)) {
          _invalid_parameter_noinfo();
        }
        if (plVar10 == plVar3) {
          return;
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar12 = 0;
        }
        else {
          lVar12 = *plVar2;
        }
        if (plVar10 == *(longlong **)(lVar12 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar1 = *(uint *)((longlong)plVar10 + 0x1c);
        cVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar1);
        if (((cVar6 != '\0') && (uVar7 = FUN_140a93a00(param_1,uVar1), uVar7 != 0)) &&
           (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar7), cVar6 != '\0')) {
          FUN_140a8c2e0(&local_988);
          local_988 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x198))();
          if (local_988 == 0) {
            log_InlineLogERROR("Create Arenic Map Error");
            FUN_140a8a490((longlong)&local_988);
            return;
          }
          local_984 = uVar1;
          local_980 = uVar7;
          puVar8 = FUN_140a90900(local_8e8,&local_988,&local_988);
          FUN_140a99590((longlong *)(param_1 + 0x148),(longlong *)&local_9b8,puVar8);
          FUN_140a8a490((longlong)local_8e0);
          FUN_140a92450(param_1,uVar1,local_988);
          FUN_140a92450(param_1,uVar7,local_988);
          FUN_140a9ebe0(local_428);
          FUN_140a9ebe0(local_838);
          uVar9 = FUN_140a9ec90((longlong)local_428,2);
          if (((char)uVar9 != '\0') && (uVar9 = FUN_140a9ec90((longlong)local_838,2), (char)uVar9 != '\0')) {
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),uVar1,local_428);
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),uVar7,local_838);
          }
          (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xc0))(*(longlong **)(param_1 + 0x2e0),uVar1,local_988);
          (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xc0))(*(longlong **)(param_1 + 0x2e0),uVar7,local_988);
          FUN_140a924f0(param_1,uVar1,2);
          FUN_140a924f0(param_1,uVar7,2);
          FUN_140a9ec30((undefined8 *)local_838);
          FUN_140a9ec30((undefined8 *)local_428);
          FUN_140a8a490((longlong)&local_988);
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar10 + 0x25) == '\0') break;
        _invalid_parameter_noinfo();
      }
      plVar11 = plVar10;
      plVar5 = (longlong *)plVar10[2];
      if (*(char *)(plVar10[2] + 0x25) != '\0') break;
      do {
        plVar10 = plVar5;
        plVar5 = (longlong *)*plVar10;
      } while (*(char *)(*plVar10 + 0x25) == '\0');
    }
    do {
      plVar10 = (longlong *)plVar11[1];
      if (*(char *)((longlong)plVar10 + 0x25) != '\0') break;
      bVar13 = plVar11 == (longlong *)plVar10[2];
      plVar11 = plVar10;
    } while (bVar13);
  } while( true );
}




void FUN_140a99be0(longlong *param_1)

{
  FUN_140a99800(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140a99c10(longlong *param_1,uint *param_2)

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
  
  FUN_140a88ae0(param_1,&local_38,param_2);
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
    if (*(char *)((longlong)plVar7 + 0xc1) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0xc1) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0xc1);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0xc1);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0xc1);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0xc1);
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
  FUN_140a996a0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




void FUN_140a99d70(longlong *param_1)

{
  FUN_140a99800(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a99da0(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong **pplVar17;
  longlong **pplVar18;
  longlong lVar19;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  undefined8 *puStack_70;
  longlong local_68 [5];
  
  *param_1 = arenic::CArenicSystem::vftable;
  plVar10 = param_1 + 9;
  puVar2 = (undefined8 *)param_1[0xf];
  puVar11 = (undefined8 *)*puVar2;
  plVar3 = (longlong *)*plVar10;
  while( true ) {
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar11 == puVar2) break;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar19 = 0;
    }
    else {
      lVar19 = *plVar3;
    }
    if (puVar11 == *(undefined8 **)(lVar19 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((undefined8 *)puVar11[4] != (undefined8 *)0x0) {
      FUN_140a9cb80((undefined8 *)puVar11[4]);
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar11 + 0x29) == '\0') {
      puVar15 = (undefined8 *)puVar11[2];
      if (*(char *)((longlong)puVar15 + 0x29) == '\0') {
        cVar1 = *(char *)((longlong)*puVar15 + 0x29);
        puVar11 = puVar15;
        puVar15 = (undefined8 *)*puVar15;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar15 + 0x29);
          puVar11 = puVar15;
          puVar15 = (undefined8 *)*puVar15;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar11[1] + 0x29);
        puVar9 = (undefined8 *)puVar11[1];
        puVar15 = puVar11;
        while ((puVar11 = puVar9, cVar1 == '\0' && (puVar15 == (undefined8 *)puVar11[2]))) {
          cVar1 = *(char *)((longlong)puVar11[1] + 0x29);
          puVar9 = (undefined8 *)puVar11[1];
          puVar15 = puVar11;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar3 = param_1 + 0x19;
  plVar12 = *(longlong **)param_1[0x1f];
  plVar13 = (longlong *)param_1[0x19];
  plVar14 = (longlong *)param_1[0x1f];
  local_98 = plVar13;
  plStack_90 = plVar12;
  local_88 = plVar13;
  plStack_80 = plVar12;
  while( true ) {
    if (plVar13 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (plVar12 == plVar14) break;
    if (plVar13 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar19 = 0;
    }
    else {
      lVar19 = *plVar13;
    }
    if (plVar12 == *(longlong **)(lVar19 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((undefined8 *)plVar12[4] != (undefined8 *)0x0) {
      FUN_140a9cb80((undefined8 *)plVar12[4]);
    }
    if (plVar13 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
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
    }
  }
  plVar12 = param_1 + 0x11;
  plVar13 = *(longlong **)param_1[0x17];
  plVar14 = (longlong *)*plVar12;
  plVar4 = (longlong *)param_1[0x17];
  local_98 = plVar14;
  plStack_90 = plVar13;
  local_88 = plVar14;
  plStack_80 = plVar13;
  while( true ) {
    if (plVar14 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (plVar13 == plVar4) break;
    if (plVar14 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar19 = 0;
    }
    else {
      lVar19 = *plVar14;
    }
    if (plVar13 == *(longlong **)(lVar19 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((undefined8 *)plVar13[4] != (undefined8 *)0x0) {
      FUN_140a9cb80((undefined8 *)plVar13[4]);
    }
    if (plVar14 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar13 + 0x29) == '\0') {
      plVar5 = (longlong *)plVar13[2];
      if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x29);
        plVar13 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar13 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar13[1] + 0x29);
        plVar16 = (longlong *)plVar13[1];
        plVar5 = plVar13;
        while ((plVar13 = plVar16, cVar1 == '\0' && (plVar5 == (longlong *)plVar13[2]))) {
          cVar1 = *(char *)(plVar13[1] + 0x29);
          plVar16 = (longlong *)plVar13[1];
          plVar5 = plVar13;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar13 = param_1 + 0x21;
  plVar14 = *(longlong **)param_1[0x27];
  plVar4 = (longlong *)*plVar13;
  plVar5 = (longlong *)param_1[0x27];
  local_98 = plVar4;
  plStack_90 = plVar14;
  local_88 = plVar4;
  plStack_80 = plVar14;
  while( true ) {
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (plVar14 == plVar5) break;
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar19 = 0;
    }
    else {
      lVar19 = *plVar4;
    }
    if (plVar14 == *(longlong **)(lVar19 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((undefined8 *)plVar14[4] != (undefined8 *)0x0) {
      FUN_140a9cb80((undefined8 *)plVar14[4]);
    }
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar14 + 0x29) == '\0') {
      plVar16 = (longlong *)plVar14[2];
      if (*(char *)((longlong)plVar16 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar16 + 0x29);
        plVar14 = plVar16;
        plVar16 = (longlong *)*plVar16;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar16 + 0x29);
          plVar14 = plVar16;
          plVar16 = (longlong *)*plVar16;
        }
      }
      else {
        cVar1 = *(char *)(plVar14[1] + 0x29);
        plVar8 = (longlong *)plVar14[1];
        plVar16 = plVar14;
        while ((plVar14 = plVar8, cVar1 == '\0' && (plVar16 == (longlong *)plVar14[2]))) {
          cVar1 = *(char *)(plVar14[1] + 0x29);
          plVar8 = (longlong *)plVar14[1];
          plVar16 = plVar14;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar14 = param_1 + 1;
  puVar2 = (undefined8 *)param_1[7];
  plVar4 = (longlong *)*plVar14;
  puVar11 = (undefined8 *)*puVar2;
  do {
    do {
      while( true ) {
        while( true ) {
          puVar15 = puVar11;
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (puVar15 == puVar2) {
            cVar1 = *(char *)((longlong)*(longlong **)(param_1[7] + 8) + 0x29);
            plVar4 = *(longlong **)(param_1[7] + 8);
            while (cVar1 == '\0') {
              FUN_140a86140(plVar14,(longlong *)plVar4[2]);
              plVar5 = (longlong *)*plVar4;
              operator_delete(plVar4);
              plVar4 = plVar5;
              cVar1 = *(char *)((longlong)plVar5 + 0x29);
            }
            *(undefined8 *)(param_1[7] + 8) = param_1[7];
            param_1[8] = 0;
            *(undefined8 *)param_1[7] = param_1[7];
            *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
            if ((void *)param_1[0x58] != (void *)0x0) {
              operator_delete((void *)param_1[0x58]);
            }
            param_1[0x58] = 0;
            param_1[0x59] = 0;
            param_1[0x5a] = 0;
            operator_delete((void *)param_1[0x55]);
            if ((void *)param_1[0x52] != (void *)0x0) {
              operator_delete((void *)param_1[0x52]);
            }
            param_1[0x52] = 0;
            param_1[0x53] = 0;
            param_1[0x54] = 0;
            operator_delete((void *)param_1[0x4f]);
            if ((void *)param_1[0x4c] != (void *)0x0) {
              operator_delete((void *)param_1[0x4c]);
            }
            param_1[0x4c] = 0;
            param_1[0x4d] = 0;
            param_1[0x4e] = 0;
            operator_delete((void *)param_1[0x49]);
            plVar4 = param_1 + 0x41;
            plStack_80 = (longlong *)param_1[0x47];
            local_98 = (longlong *)*plVar4;
            plStack_90 = (longlong *)*plStack_80;
            local_88 = local_98;
            FUN_140a8e630(plVar4,(longlong *)&local_78,(longlong *)&local_98,(longlong *)&local_88);
            operator_delete((void *)param_1[0x47]);
            param_1[0x47] = 0;
            param_1[0x48] = 0;
            operator_delete((void *)*plVar4);
            plVar4 = param_1 + 0x39;
            plStack_80 = (longlong *)param_1[0x3f];
            local_98 = (longlong *)*plVar4;
            plStack_90 = (longlong *)*plStack_80;
            local_88 = local_98;
            FUN_140a8e430(plVar4,(longlong *)&local_78,(longlong *)&local_98,(longlong *)&local_88);
            operator_delete((void *)param_1[0x3f]);
            param_1[0x3f] = 0;
            param_1[0x40] = 0;
            operator_delete((void *)*plVar4);
            plVar4 = param_1 + 0x31;
            plStack_80 = (longlong *)param_1[0x37];
            local_98 = (longlong *)*plVar4;
            plStack_90 = (longlong *)*plStack_80;
            pplVar18 = &local_88;
            pplVar17 = &local_98;
            local_88 = local_98;
            FUN_140a8e430(plVar4,(longlong *)&local_78,(longlong *)pplVar17,(longlong *)pplVar18);
            operator_delete((void *)param_1[0x37]);
            param_1[0x37] = 0;
            param_1[0x38] = 0;
            operator_delete((void *)*plVar4);
            plVar4 = param_1 + 0x29;
            puVar2 = (undefined8 *)param_1[0x2f];
            plVar5 = (longlong *)*plVar4;
            plStack_80 = (longlong *)*puVar2;
            local_98 = plVar4;
            local_88 = plVar5;
            if (plVar5 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
            }
            puVar11 = (undefined8 *)param_1[0x2f];
            if ((plVar5 == (longlong *)0x0) || (plVar5 != (longlong *)*plVar4)) {
              _invalid_parameter_noinfo();
            }
            plVar8 = local_88;
            plVar16 = plStack_80;
            if (puVar2 == puVar11) {
              cVar1 = *(char *)((longlong)*(longlong **)(param_1[0x2f] + 8) + 0xc1);
              plVar5 = *(longlong **)(param_1[0x2f] + 8);
              while (cVar1 == '\0') {
                FUN_140a967b0(plVar4,(longlong *)plVar5[2],pplVar17,pplVar18);
                plVar16 = (longlong *)*plVar5;
                FUN_140a8a490((longlong)(plVar5 + 4));
                operator_delete(plVar5);
                plVar5 = plVar16;
                cVar1 = *(char *)((longlong)plVar16 + 0xc1);
              }
              *(undefined8 *)(param_1[0x2f] + 8) = param_1[0x2f];
              param_1[0x30] = 0;
              *(undefined8 *)param_1[0x2f] = param_1[0x2f];
              *(undefined8 *)(param_1[0x2f] + 0x10) = param_1[0x2f];
            }
            else {
              while( true ) {
                if ((plVar8 == (longlong *)0x0) || (plVar8 != plVar5)) {
                  _invalid_parameter_noinfo();
                }
                plVar7 = plStack_80;
                plVar6 = local_88;
                if (plVar16 == puVar2) break;
                if (plVar8 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (*(char *)((longlong)plVar16 + 0xc1) == '\0') {
                  puVar11 = (undefined8 *)plVar16[2];
                  if (*(char *)((longlong)puVar11 + 0xc1) == '\0') {
                    cVar1 = *(char *)((longlong)*puVar11 + 0xc1);
                    plVar16 = puVar11;
                    puVar11 = (undefined8 *)*puVar11;
                    while (plStack_80 = plVar16, cVar1 == '\0') {
                      cVar1 = *(char *)((longlong)*puVar11 + 0xc1);
                      plVar16 = puVar11;
                      puVar11 = (undefined8 *)*puVar11;
                    }
                  }
                  else {
                    cVar1 = *(char *)(plVar16[1] + 0xc1);
                    puVar15 = (undefined8 *)plVar16[1];
                    puVar11 = plVar16;
                    while ((plVar16 = puVar15, plStack_80 = plVar16, cVar1 == '\0' && (puVar11 == (undefined8 *)plVar16[2]))) {
                      cVar1 = *(char *)(plVar16[1] + 0xc1);
                      puVar15 = (undefined8 *)plVar16[1];
                      puVar11 = plVar16;
                    }
                  }
                }
                else {
                  _invalid_parameter_noinfo();
                }
                local_78 = plVar6;
                puStack_70 = plVar7;
                FUN_140a962c0(plVar4,local_68,(longlong *)&local_78);
              }
            }
            operator_delete((void *)param_1[0x2f]);
            param_1[0x2f] = 0;
            param_1[0x30] = 0;
            operator_delete((void *)*plVar4);
            puStack_70 = (undefined8 *)param_1[0x27];
            local_98 = (longlong *)*plVar13;
            plStack_90 = (longlong *)*puStack_70;
            local_88 = local_98;
            plStack_80 = plStack_90;
            local_78 = local_98;
            FUN_140a8adf0(plVar13,local_68,(longlong *)&local_88,(longlong *)&local_78);
            operator_delete((void *)param_1[0x27]);
            param_1[0x27] = 0;
            param_1[0x28] = 0;
            operator_delete((void *)*plVar13);
            puStack_70 = (undefined8 *)param_1[0x1f];
            local_98 = (longlong *)*plVar3;
            plStack_90 = (longlong *)*puStack_70;
            local_88 = local_98;
            plStack_80 = plStack_90;
            local_78 = local_98;
            FUN_140a8adf0(plVar3,local_68,(longlong *)&local_88,(longlong *)&local_78);
            operator_delete((void *)param_1[0x1f]);
            param_1[0x1f] = 0;
            param_1[0x20] = 0;
            operator_delete((void *)*plVar3);
            puStack_70 = (undefined8 *)param_1[0x17];
            local_98 = (longlong *)*plVar12;
            plStack_90 = (longlong *)*puStack_70;
            local_88 = local_98;
            plStack_80 = plStack_90;
            local_78 = local_98;
            FUN_140a8adf0(plVar12,local_68,(longlong *)&local_88,(longlong *)&local_78);
            operator_delete((void *)param_1[0x17]);
            param_1[0x17] = 0;
            param_1[0x18] = 0;
            operator_delete((void *)*plVar12);
            FUN_140a8b3f0(plVar10);
            operator_delete((void *)*plVar10);
            FUN_140a8dce0(plVar14);
            operator_delete((void *)*plVar14);
            return;
          }
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar19 = 0;
          }
          else {
            lVar19 = *plVar4;
          }
          if (puVar15 == *(undefined8 **)(lVar19 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          puVar11 = (undefined8 *)puVar15[4];
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)(puVar11,1);
          }
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar15 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          puVar11 = puVar15;
        }
        puVar11 = (undefined8 *)puVar15[2];
        if (*(char *)((longlong)puVar11 + 0x29) != '\0') break;
        cVar1 = *(char *)((longlong)*puVar11 + 0x29);
        puVar15 = (undefined8 *)*puVar11;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar15 + 0x29);
          puVar11 = puVar15;
          puVar15 = (undefined8 *)*puVar15;
        }
      }
      puVar11 = (undefined8 *)puVar15[1];
    } while (*(char *)((longlong)puVar11 + 0x29) != '\0');
    do {
      puVar9 = puVar11;
      puVar11 = puVar9;
      if (puVar15 != (undefined8 *)puVar9[2]) break;
      puVar11 = (undefined8 *)puVar9[1];
      puVar15 = puVar9;
    } while (*(char *)((longlong)puVar11 + 0x29) == '\0');
  } while( true );
}




void FUN_140a9a810(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar9;
  bool bVar10;
  ulonglong uVar8;
  
  if (*(int *)(param_1 + 0x2d8) != 0) {
    FUN_140a94240(param_1);
    FUN_140a99870(param_1);
    uVar9 = 0;
    plVar4 = (longlong *)**(undefined8 **)(param_1 + 0x238);
    puVar1 = *(ulonglong **)(param_1 + 0x208);
    uVar8 = uVar9;
LAB_140a9a880:
    plVar5 = *(longlong **)(param_1 + 0x238);
    if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 0x208))) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar5) {
      return;
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 < 0xf4241) {
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar6 = uVar9;
      }
      else {
        uVar6 = *puVar1;
      }
      if (plVar4 == *(longlong **)(uVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),(int)plVar4[3]);
      if (cVar3 != '\0') {
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar6 = uVar9;
        }
        else {
          uVar6 = *puVar1;
        }
        if (plVar4 == *(longlong **)(uVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((uint *)plVar4[4] != (uint *)0x0) {
          FUN_140a81810((uint *)plVar4[4]);
        }
      }
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
        plVar5 = plVar4;
        plVar2 = (longlong *)plVar4[2];
        if (*(char *)(plVar4[2] + 0x29) == '\0') {
          do {
            plVar4 = plVar2;
            plVar2 = (longlong *)*plVar4;
          } while (*(char *)(*plVar4 + 0x29) == '\0');
        }
        else {
          do {
            plVar4 = (longlong *)plVar5[1];
            if (*(char *)((longlong)plVar4 + 0x29) != '\0') break;
            bVar10 = plVar5 == (longlong *)plVar4[2];
            plVar5 = plVar4;
          } while (bVar10);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140a9a880;
    }
    log_InlineLogERROR(&DAT_140aa7368);
  }
  return;
}




void FUN_140a9a9e0(longlong param_1,uint param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_res8 [2];
  uint local_res10;
  
  local_res10 = param_2;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    uVar2 = FUN_140a924b0(param_1,param_2);
    if (uVar2 != 0) {
      local_res8[0] = uVar2;
      uVar3 = FUN_140a8f270(param_1,uVar2,param_2);
      if (uVar3 == 0) {
        FUN_140a924d0(param_1,param_2);
        log_InlineLogERROR("CArenicSystem::OnInviteRefuse, User1:%u, status1:%u, match not find");
      }
      else {
        iVar4 = FUN_140a924d0(param_1,uVar3);
        if ((iVar4 == 0) || (iVar4 == 1)) {
          if (param_3 == 0) {
            FUN_140a924d0(param_1,param_2);
            log_InlineLogERROR("CArenicSystem::OnInviteRefuse, status error User1:%u, status1:%d, User2:%u, user2 status:%d");
          }
          else {
            FUN_140a924d0(param_1,param_2);
            log_InlineLogERROR("CArenicSystem::OnInviteRefuse, status error User1:%u, status1:%d, User2:%u, user2 status:%d From:%s");
          }
        }
        else {
          FUN_140a94df0(param_1,uVar3,param_2,'\0');
          FUN_140a95ea0(param_1,param_2,'\0','\0','\0');
          FUN_140a95ea0(param_1,uVar3,'\0','\0','\0');
          FUN_140a99c10((longlong *)(param_1 + 0x148),local_res8);
          (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x188))(*(longlong **)(param_1 + 0x2e0),uVar2);
        }
      }
    }
  }
  return;
}




void FUN_140a9ab50(longlong param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    uVar3 = FUN_140a924b0(param_1,param_2);
    if (uVar3 == 0) {
      FUN_140a924d0(param_1,param_2);
      log_InlineLogERROR("CArenicSystem::OnInviteTimeOut Map none User1:%u, status1:%u");
    }
    else {
      uVar3 = FUN_140a8f270(param_1,uVar3,param_2);
      if (uVar3 == 0) {
        FUN_140a924d0(param_1,param_2);
        log_InlineLogERROR("CArenicSystem::OnInviteTimeOut, User1:%u, status1:%d, User2 not find");
      }
      else {
        iVar4 = FUN_140a924d0(param_1,uVar3);
        if (iVar4 == 2) {
          FUN_140a924f0(param_1,param_2,4);
        }
        else if (iVar4 == 3) {
          FUN_140a9a9e0(param_1,param_2,0x140aaafe0);
        }
        else if (iVar4 == 4) {
          local_20 = param_2;
          local_1c = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),param_2);
          local_18 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xa0))(*(longlong **)(param_1 + 0x2e0),param_2);
          local_30 = uVar3;
          local_2c = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),uVar3);
          local_28 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xa0))(*(longlong **)(param_1 + 0x2e0),uVar3);
          bVar2 = FUN_140a821a0(param_1,&local_20,&local_30);
          if (bVar2) {
            param_2 = uVar3;
          }
          FUN_140a9a9e0(param_1,param_2,0x140aaaff8);
        }
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a9acd0(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  IStringManager *pIVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined1 auStack_938 [32];
  uint local_918;
  uint local_910;
  uint local_908;
  undefined4 local_8f8;
  undefined4 local_8f4;
  uint local_8f0;
  uint local_8ec;
  uint local_8e8;
  undefined4 local_8e4;
  undefined4 local_8e0;
  uint local_8d8;
  undefined4 local_8d4;
  undefined4 local_8d0;
  undefined8 local_8c8;
  CMsg local_8b8 [1040];
  CMsg local_4a8 [1040];
  uint local_98;
  char local_94 [16];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  char local_6c [16];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_8c8 = 0xfffffffffffffffe;
  local_48 = DAT_140ab7408 ^ (ulonglong)auStack_938;
  local_8f0 = param_3;
  local_8ec = param_2;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if ((cVar2 != '\0') && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),param_3), cVar2 != '\0')) {
    uVar5 = FUN_140a924b0(param_1,param_2);
    local_908 = FUN_140a924b0(param_1,param_3);
    if ((uVar5 == 0) || ((local_908 == 0 || (uVar5 != local_908)))) {
      uVar7 = FUN_140a924d0(param_1,param_3);
      FUN_140a924d0(param_1,param_2);
      local_918 = uVar7;
      local_910 = uVar5;
      log_InlineLogERROR("CArenicSystem::BeginAthletics MapID error User1:%u, status1:%u, user2:%u, status2:%u, map1:%u, map2:%u");
    }
    else {
      uVar6 = FUN_140a8f270(param_1,uVar5,param_2);
      if (param_3 == uVar6) {
        iVar8 = FUN_140a924d0(param_1,param_2);
        iVar9 = FUN_140a924d0(param_1,param_3);
        if ((iVar8 == 3) && (iVar9 == 3)) {
          bVar3 = FUN_140a8fc70(param_1,param_2);
          if (bVar3) {
            FUN_140a99280(param_1,param_2,'\0');
          }
          bVar3 = FUN_140a8fc70(param_1,param_3);
          if (bVar3) {
            FUN_140a99280(param_1,param_3,'\0');
          }
          uVar10 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x158))(*(longlong **)(param_1 + 0x2e0),param_2);
          local_8f4 = uVar10;
          uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x158))(*(longlong **)(param_1 + 0x2e0),param_3);
          local_8f8 = uVar7;
          cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x168))(*(longlong **)(param_1 + 0x2e0),uVar10);
          if ((cVar2 != '\0') && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x168))(*(longlong **)(param_1 + 0x2e0),uVar7), cVar2 != '\0')) {
            cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x180))(*(longlong **)(param_1 + 0x2e0),uVar10);
            if (cVar2 == '\0') {
              plVar1 = *(longlong **)(param_1 + 0x2e0);
              lVar11 = *plVar1;
              uVar6 = (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
              uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
              local_910 = 1;
              local_918 = uVar6;
              (**(code **)(lVar11 + 0x98))(*(undefined8 *)(param_1 + 0x2e0),param_2,local_8f4,uVar7);
              uVar7 = local_8f8;
            }
            cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x180))(*(longlong **)(param_1 + 0x2e0),uVar7);
            if (cVar2 == '\0') {
              plVar1 = *(longlong **)(param_1 + 0x2e0);
              lVar11 = *plVar1;
              uVar6 = (**(code **)(*plVar1 + 0x80))(plVar1,param_3);
              uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,param_3);
              local_910 = 1;
              local_918 = uVar6;
              (**(code **)(lVar11 + 0x98))(*(undefined8 *)(param_1 + 0x2e0),param_3,local_8f8,uVar7);
            }
            (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x220))(*(longlong **)(param_1 + 0x2e0),uVar5);
            cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xc0))(*(longlong **)(param_1 + 0x2e0),param_2,uVar5);
            cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xc0))(*(longlong **)(param_1 + 0x2e0),param_3,uVar5);
            if (cVar2 == '\0') {
              if (cVar4 == '\0') {
                local_8d8 = param_2;
                local_8d4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),param_2);
                lVar11 = FUN_140a8ff70(param_1,param_2);
                if (lVar11 != 0) {
                  local_8d0 = FUN_140a81100(lVar11);
                }
                local_8e8 = param_3;
                local_8e4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),param_3);
                lVar11 = FUN_140a8ff70(param_1,param_3);
                if (lVar11 != 0) {
                  local_8e0 = FUN_140a81100(lVar11);
                }
                bVar3 = FUN_140a821a0(param_1,&local_8d8,&local_8e8);
                if (bVar3) {
                  param_2 = param_3;
                }
                pIVar12 = theInstance();
                lVar11 = **(longlong **)(param_1 + 0x2e0);
                uVar13 = (*(code *)**(undefined8 **)pIVar12)(pIVar12,"STR_NO_LOAD_ARENIC_MAP");
                (**(code **)(lVar11 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar13);
                FUN_140a9a9e0(param_1,param_2,0x140aab218);
              }
              else {
                FUN_140a9a9e0(param_1,param_2,0x140aab240);
              }
            }
            else if (cVar4 == '\0') {
              FUN_140a9a9e0(param_1,param_3,0x140aab208);
            }
            else {
              cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xb8))(*(longlong **)(param_1 + 0x2e0),param_2,uVar5);
              if ((cVar2 == '\0') ||
                 (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xb8))(*(longlong **)(param_1 + 0x2e0),param_3,uVar5), cVar2 == '\0')) {
                log_InlineLogERROR("CArenicSystem::BeginAthletics Trans error User1:%u, User2:%u");
                FUN_140a924f0(param_1,param_2,0);
                FUN_140a924f0(param_1,param_3,0);
              }
              else {
                cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 200))(*(longlong **)(param_1 + 0x2e0),param_2);
                if (cVar2 == '\0') {
                  (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x110))(*(longlong **)(param_1 + 0x2e0),param_2);
                  local_918 = local_918 & 0xffffff00;
                  (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xd0))(*(longlong **)(param_1 + 0x2e0),param_2,0,0);
                }
                cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 200))(*(longlong **)(param_1 + 0x2e0),param_3);
                if (cVar2 == '\0') {
                  (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x110))(*(longlong **)(param_1 + 0x2e0),param_3);
                  local_918 = local_918 & 0xffffff00;
                  (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xd0))(*(longlong **)(param_1 + 0x2e0),param_3,0,0);
                }
                FUN_140a90160(param_1,param_2);
                FUN_140a90160(param_1,param_3);
                (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xe0))(*(longlong **)(param_1 + 0x2e0),param_2,0);
                (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xe0))(*(longlong **)(param_1 + 0x2e0),param_3,0);
                (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x148))(*(longlong **)(param_1 + 0x2e0),param_2);
                (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x148))(*(longlong **)(param_1 + 0x2e0),param_3);
                plVar1 = *(longlong **)(param_1 + 0x2e0);
                lVar11 = *plVar1;
                uVar7 = (**(code **)(*plVar1 + 0xf8))(plVar1,param_2);
                local_918 = 1;
                (**(code **)(lVar11 + 0xe8))(*(undefined8 *)(param_1 + 0x2e0),param_2,0,uVar7);
                plVar1 = *(longlong **)(param_1 + 0x2e0);
                lVar11 = *plVar1;
                uVar7 = (**(code **)(*plVar1 + 0x100))(plVar1,param_2);
                local_918 = 1;
                (**(code **)(lVar11 + 0xe8))(*(undefined8 *)(param_1 + 0x2e0),param_2,2,uVar7);
                plVar1 = *(longlong **)(param_1 + 0x2e0);
                lVar11 = *plVar1;
                iVar8 = (**(code **)(*plVar1 + 0x108))(plVar1,param_2);
                local_918 = 1;
                (**(code **)(lVar11 + 0xe8))(*(undefined8 *)(param_1 + 0x2e0),param_2,8,(longlong)iVar8);
                plVar1 = *(longlong **)(param_1 + 0x2e0);
                lVar11 = *plVar1;
                uVar7 = (**(code **)(*plVar1 + 0xf8))(plVar1,param_3);
                local_918 = 1;
                (**(code **)(lVar11 + 0xe8))(*(undefined8 *)(param_1 + 0x2e0),param_3,0,uVar7);
                plVar1 = *(longlong **)(param_1 + 0x2e0);
                lVar11 = *plVar1;
                uVar7 = (**(code **)(*plVar1 + 0x100))(plVar1,param_3);
                local_918 = 1;
                (**(code **)(lVar11 + 0xe8))(*(undefined8 *)(param_1 + 0x2e0),param_3,2,uVar7);
                plVar1 = *(longlong **)(param_1 + 0x2e0);
                lVar11 = *plVar1;
                iVar8 = (**(code **)(*plVar1 + 0x108))(plVar1,param_3);
                local_918 = 1;
                (**(code **)(lVar11 + 0xe8))(*(undefined8 *)(param_1 + 0x2e0),param_3,8,(longlong)iVar8);
                FUN_140a924f0(param_1,param_2,7);
                FUN_140a924f0(param_1,param_3,7);
                FUN_140a9ebe0(local_8b8);
                FUN_140a9ebe0(local_4a8);
                local_84 = 0;
                local_80 = 0;
                local_7c = 0;
                local_78 = 0;
                local_74 = 0;
                local_94[0] = '\0';
                local_94[1] = '\0';
                local_94[2] = '\0';
                local_94[3] = '\0';
                local_94[4] = '\0';
                local_94[5] = '\0';
                local_94[6] = '\0';
                local_94[7] = '\0';
                local_94[8] = '\0';
                local_94[9] = '\0';
                local_94[10] = '\0';
                local_94[0xb] = '\0';
                local_94[0xc] = '\0';
                local_94[0xd] = '\0';
                local_94[0xe] = '\0';
                local_94[0xf] = '\0';
                local_98 = param_2;
                local_74 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),param_2);
                local_7c = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x48))(*(longlong **)(param_1 + 0x2e0),param_2);
                local_78 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_2);
                local_80 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x70))(*(longlong **)(param_1 + 0x2e0),param_2);
                local_84 = FUN_140a8fbe0(param_1,param_2);
                pcVar14 = (char *)(**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x60))(*(longlong **)(param_1 + 0x2e0),param_2);
                strncpy(local_94,pcVar14,0x10);
                local_5c = 0;
                local_58 = 0;
                local_54 = 0;
                local_50 = 0;
                local_4c = 0;
                local_6c[0] = '\0';
                local_6c[1] = '\0';
                local_6c[2] = '\0';
                local_6c[3] = '\0';
                local_6c[4] = '\0';
                local_6c[5] = '\0';
                local_6c[6] = '\0';
                local_6c[7] = '\0';
                local_6c[8] = '\0';
                local_6c[9] = '\0';
                local_6c[10] = '\0';
                local_6c[0xb] = '\0';
                local_6c[0xc] = '\0';
                local_6c[0xd] = '\0';
                local_6c[0xe] = '\0';
                local_6c[0xf] = '\0';
                local_70 = param_3;
                local_4c = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(*(longlong **)(param_1 + 0x2e0),param_3);
                local_54 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x48))(*(longlong **)(param_1 + 0x2e0),param_3);
                local_50 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x210))(*(longlong **)(param_1 + 0x2e0),param_3);
                local_58 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x70))(*(longlong **)(param_1 + 0x2e0),param_3);
                local_5c = FUN_140a8fbe0(param_1,param_3);
                pcVar14 = (char *)(**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x60))(*(longlong **)(param_1 + 0x2e0),param_3);
                strncpy(local_6c,pcVar14,0x10);
                uVar13 = FUN_140a9ed10((longlong)local_4a8,8,0,&local_98);
                if (((char)uVar13 != '\0') && (uVar13 = FUN_140a9ed10((longlong)local_8b8,8,0,&local_70), (char)uVar13 != '\0')) {
                  (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_2,local_8b8);
                  (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_3,local_4a8);
                }
                FUN_140a97aa0(param_1,param_2,param_2);
                FUN_140a97aa0(param_1,param_2,param_3);
                FUN_140a9ec30((undefined8 *)local_4a8);
                FUN_140a9ec30((undefined8 *)local_8b8);
              }
            }
          }
        }
        else {
          local_918 = iVar9;
          log_InlineLogERROR("CArenicSystem::BeginAthletics status Error: User1:%u status:%d , User2:%u status:%d");
        }
      }
      else {
        uVar7 = FUN_140a924d0(param_1,param_3);
        FUN_140a924d0(param_1,param_2);
        local_918 = uVar7;
        log_InlineLogERROR("CArenicSystem::BeginAthletics Error not Match: User1:%u, status1:%d, User2:%u, status2:%d");
      }
    }
  }
  return;
}




void FUN_140a9b6e0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    uVar2 = FUN_140a924d0(param_1,param_2);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x158))(*(longlong **)(param_1 + 0x2e0),param_2);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x168))(*(longlong **)(param_1 + 0x2e0),uVar3);
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 400))(*(longlong **)(param_1 + 0x2e0),uVar3), cVar1 == '\0')) {
      switch(uVar2) {
      case 0:
      case 4:
      case 5:
      case 10:
      case 0xb:
        return;
      case 1:
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x170))(*(longlong **)(param_1 + 0x2e0),uVar3);
        if (cVar1 != '\0') {
          FUN_140a924f0(param_1,param_2,6);
        }
        break;
      case 2:
      case 3:
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x170))(*(longlong **)(param_1 + 0x2e0),uVar3);
        if (cVar1 != '\0') {
          FUN_140a9a9e0(param_1,param_2,0x140aab308);
          FUN_140a924f0(param_1,param_2,6);
        }
        break;
      case 6:
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x170))(*(longlong **)(param_1 + 0x2e0),uVar3);
        if (cVar1 == '\0') {
          FUN_140a924f0(param_1,param_2,1);
        }
      }
    }
  }
  return;
}




void FUN_140a9b870(longlong param_1,uint param_2)

{
  uint local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_140a99c10((longlong *)(param_1 + 0x148),local_res10);
                    /* WARNING: Could not recover jumptable at 0x000140a9b8aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x188))(*(longlong **)(param_1 + 0x2e0),param_2);
  return;
}




void FUN_140a9b8c0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  IStringManager *pIVar4;
  undefined8 uVar5;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar2 != '\0') {
    iVar3 = FUN_140a924d0(param_1,param_2);
    if (iVar3 == 1) {
      pIVar4 = theInstance();
      lVar1 = **(longlong **)(param_1 + 0x2e0);
      uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_ARENIC_ENTER_CS_OR_OS");
      (**(code **)(lVar1 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar5);
      FUN_140a924f0(param_1,param_2,6);
    }
    else if (iVar3 - 2U < 2) {
      pIVar4 = theInstance();
      lVar1 = **(longlong **)(param_1 + 0x2e0);
      uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_ARENIC_ENTER_CS_OR_OS");
      (**(code **)(lVar1 + 0x28))(*(undefined8 *)(param_1 + 0x2e0),param_2,uVar5);
      FUN_140a9a9e0(param_1,param_2,0x140aab378);
      FUN_140a924f0(param_1,param_2,6);
    }
  }
  return;
}




undefined8 * FUN_140a9b9c0(undefined8 *param_1)

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
  lVar2 = FUN_140a86ab0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0xc1) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a9ba40(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = arenic::CArenicSystem::vftable;
  FUN_140a92600(param_1 + 1);
  FUN_140a92680(param_1 + 9);
  FUN_140a92680(param_1 + 0x11);
  FUN_140a92680(param_1 + 0x19);
  FUN_140a92680(param_1 + 0x21);
  FUN_140a9b9c0(param_1 + 0x29);
  FUN_140a961c0(param_1 + 0x31);
  FUN_140a961c0(param_1 + 0x39);
  FUN_140a96240(param_1 + 0x41);
  plVar1 = operator_new(8);
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x49);
    plVar2 = plVar1;
  }
  param_1[0x49] = plVar2;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x4f);
    plVar2 = plVar1;
  }
  param_1[0x4f] = plVar2;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 0x55);
    plVar3 = plVar2;
  }
  param_1[0x55] = plVar3;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5c] = param_2;
  return param_1;
}




undefined8 * FUN_140a9bbc0(undefined8 *param_1,uint param_2)

{
  FUN_140a99da0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140a844b0(param_1);
  }
  return param_1;
}




undefined8 * FUN_140a9bbf0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    log_InlineLogERROR(&DAT_140aa7368,"IF_NOT","pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\arenic\\src\\arenicsystem.cpp",0x77);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if ((DAT_140ab7448 & 1) == 0) {
      DAT_140ab7448 = DAT_140ab7448 | 1;
      CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7440,"CArenicSystem");
      atexit((_func_5014 *)&LAB_140aa6fd0);
    }
    puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140ab7440,0x2e8);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_140a9ba40(puVar1,param_1);
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140aa7368,"CHECKF","pArenicSystem","f:\\version\\cqserver-78.0.11-1204\\modules\\arenic\\src\\arenicsystem.cpp",0x7e);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_140a96830((longlong)puVar1);
      if ((char)uVar2 == '\0') {
        (**(code **)*puVar1)(puVar1,1);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}




void FUN_140a9bd00(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  longlong *local_468;
  longlong lStack_460;
  longlong *local_458 [2];
  longlong *local_448;
  undefined8 local_438;
  CMsg local_428 [1040];
  
  local_438 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar3 == '\0') {
    return;
  }
  local_res8[0] = FUN_140a924b0(param_1,param_2);
  if (local_res8[0] != 0) {
    FUN_140a8cc10((longlong *)(param_1 + 0x148),(longlong *)&local_468,local_res8);
    plVar1 = local_468;
    lVar6 = *(longlong *)(param_1 + 0x178);
    local_448 = *(longlong **)(param_1 + 0x148);
    if ((local_468 == (longlong *)0x0) || (local_468 != local_448)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = lStack_460;
    if (lStack_460 != lVar6) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar1;
      }
      if (lVar2 == *(longlong *)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (((*(int *)(lVar2 + 0x20) == 0) || (*(int *)(lVar2 + 0x24) == 0)) || (*(int *)(lVar2 + 0x28) == 0)) {
        log_InlineLogERROR("CArenicSystem::OnLeave info error idmap:%u, idUser1:%u, idUser2:%u");
        return;
      }
      iVar4 = FUN_140a924d0(param_1,param_2);
      if (2 < iVar4 - 2U) {
        return;
      }
      FUN_140a9a9e0(param_1,param_2,0x140aab4e8);
    }
  }
  FUN_140a8d250((longlong *)(param_1 + 0x188),(longlong *)&local_468,local_res10);
  lVar6 = *(longlong *)(param_1 + 0x1b8);
  local_458[0] = *(longlong **)(param_1 + 0x188);
  if ((local_468 == (longlong *)0x0) || (local_468 != local_458[0])) {
    _invalid_parameter_noinfo();
  }
  if (lStack_460 != lVar6) {
    FUN_140a8ce90((undefined8 *)(param_1 + 0x188),local_458,(longlong *)&local_468);
  }
  FUN_140a9ebe0(local_428);
  uVar5 = FUN_140a9ec90((longlong)local_428,1);
  if ((char)uVar5 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),param_2);
  }
  FUN_140a924f0(param_1,param_2,0);
  FUN_140a9ec30((undefined8 *)local_428);
  return;
}




void FUN_140a9bf00(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    uVar2 = FUN_140a924b0(param_1,param_2);
    if (uVar2 != 0) {
      uVar3 = FUN_140a8f270(param_1,uVar2,param_2);
      if (uVar3 == 0) {
        FUN_140a924d0(param_1,param_2);
        log_InlineLogERROR("CArenicSystem::OnInviteOK, User1:%u, status1: %d, not find");
      }
      else {
        iVar4 = FUN_140a924d0(param_1,uVar3);
        if (iVar4 == 2) {
          (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xc0))(*(longlong **)(param_1 + 0x2e0),param_2,uVar2);
          FUN_140a924f0(param_1,param_2,3);
        }
        else if (iVar4 == 3) {
          (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xc0))(*(longlong **)(param_1 + 0x2e0),param_2,uVar2);
          FUN_140a924f0(param_1,param_2,3);
          FUN_140a9acd0(param_1,param_2,uVar3);
        }
        else if (iVar4 == 4) {
          FUN_140a9a9e0(param_1,uVar3,0x140aab548);
        }
      }
    }
  }
  return;
}




void FUN_140a9c030(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar1 != '\0') {
    uVar2 = FUN_140a924b0(param_1,param_2);
    if (uVar2 == 0) {
      FUN_140a924d0(param_1,param_2);
      log_InlineLogERROR("CArenicSystem::OnFightEndTimeOut Map none User1:%u, status1:%u");
    }
    else {
      uVar3 = FUN_140a8f270(param_1,uVar2,param_2);
      if (uVar3 == 0) {
        FUN_140a924d0(param_1,param_2);
        log_InlineLogERROR("CArenicSystem::OnFightEndTimeOut, User1:%u, status:%d, Match not find");
      }
      else {
        uVar4 = 0;
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar3);
        if (cVar1 != '\0') {
          uVar4 = FUN_140a924b0(param_1,uVar3);
        }
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar3);
        if (((cVar1 != '\0') && (iVar5 = FUN_140a924d0(param_1,uVar3), iVar5 == 10)) && (uVar4 == uVar2)) {
          FUN_140a924f0(param_1,param_2,0xb);
          return;
        }
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x158))(*(longlong **)(param_1 + 0x2e0),param_2);
        if (uVar6 == uVar2) {
          FUN_140a95ea0(param_1,param_2,'\x01','\x01','\x01');
        }
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar3);
        if (((cVar1 != '\0') && (uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x158))(*(longlong **)(param_1 + 0x2e0),uVar3), uVar6 == uVar2)) &&
           (uVar4 == uVar2)) {
          FUN_140a95ea0(param_1,uVar3,'\x01','\x01','\x01');
        }
        FUN_140a90310(param_1,uVar2);
        FUN_140a9b870(param_1,uVar2);
      }
    }
  }
  return;
}




void FUN_140a9c1e0(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  CMsg local_418 [1040];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if ((cVar1 != '\0') && (uVar2 = FUN_140a924b0(param_1,param_2), uVar2 != 0)) {
    uVar3 = FUN_140a8f270(param_1,uVar2,param_2);
    if (uVar3 == 0) {
      FUN_140a924d0(param_1,param_2);
      log_InlineLogERROR("CArenicSystem::OnLeaveMap, User1:%u, status1:%u, match not find");
    }
    else {
      iVar4 = FUN_140a924d0(param_1,param_2);
      if (6 < iVar4) {
        if (iVar4 < 10) {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))(*(longlong **)(param_1 + 0x2e0),uVar3);
          if ((cVar1 != '\0') && (uVar5 = FUN_140a924b0(param_1,uVar3), uVar5 == uVar2)) {
            FUN_140a94df0(param_1,uVar3,param_2,'\x01');
            FUN_140a9ebe0(local_418);
            uVar6 = FUN_140a9ecd0((longlong)local_418,9,1);
            if ((char)uVar6 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(*(longlong **)(param_1 + 0x2e0),uVar3);
            }
            FUN_140a95ea0(param_1,param_2,'\0','\x01','\x01');
            FUN_140a9ec30((undefined8 *)local_418);
          }
        }
        else if (iVar4 < 0xc) {
          iVar4 = FUN_140a924d0(param_1,uVar3);
          if ((iVar4 == 0) || (uVar3 = FUN_140a924b0(param_1,uVar3), uVar3 != uVar2)) {
            FUN_140a95ea0(param_1,param_2,'\0','\x01','\x01');
            FUN_140a90310(param_1,uVar2);
            FUN_140a9b870(param_1,uVar2);
          }
          else {
            FUN_140a95ea0(param_1,param_2,'\0','\x01','\x01');
          }
        }
      }
    }
  }
  return;
}




void FUN_140a9c3a0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint local_res18 [4];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  local_res18[0] = FUN_140a924b0(param_1,param_2);
  if (local_res18[0] != 0) {
    FUN_140a8cc10((longlong *)(param_1 + 0x148),(longlong *)&local_50,local_res18);
    lVar2 = *(longlong *)(param_1 + 0x178);
    lVar3 = 0;
    local_40 = *(longlong **)(param_1 + 0x148);
    if ((local_50 == (longlong *)0x0) || (local_50 != local_40)) {
      _invalid_parameter_noinfo();
    }
    if (local_48 != lVar2) {
      if (local_50 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar3 = *local_50;
      }
      if (local_48 == *(longlong *)(lVar3 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (((*(int *)(local_48 + 0x20) == 0) || (*(int *)(local_48 + 0x24) == 0)) || (*(int *)(local_48 + 0x28) == 0)) {
        log_InlineLogERROR("CArenicSystem::OnUserLogout info error idmap:%u, idUser1:%u, idUser2:%u");
      }
      else {
        lVar2 = FUN_140a8ff70(param_1,param_2);
        if (lVar2 == 0) {
          log_InlineLogERROR(&DAT_140aa7368);
        }
        else {
          uVar1 = FUN_140a924d0(param_1,param_2);
          switch(uVar1) {
          case 2:
          case 3:
          case 4:
            FUN_140a9a9e0(param_1,param_2,0x140aab7d8);
            break;
          default:
            break;
          case 7:
          case 8:
          case 9:
            FUN_140a95cc0(param_1,param_2);
            break;
          case 10:
          case 0xb:
            FUN_140a9c030(param_1,param_2);
          }
        }
      }
    }
  }
  return;
}




void FUN_140a9c560(longlong param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  uint local_res10 [2];
  longlong local_28;
  longlong lStack_20;
  longlong local_18 [2];
  
  local_res10[0] = param_2;
  FUN_140a8d250((longlong *)(param_1 + 0x188),&local_28,local_res10);
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  local_18[0] = *(longlong *)(param_1 + 0x188);
  if ((local_28 == 0) || (local_28 != local_18[0])) {
    _invalid_parameter_noinfo();
  }
  if (lStack_20 != lVar1) {
    FUN_140a8ce90((undefined8 *)(param_1 + 0x188),local_18,&local_28);
  }
  bVar2 = FUN_140a8fc70(param_1,param_2);
  if (bVar2) {
    FUN_140a98570(param_1,param_2);
  }
  FUN_140a9c3a0(param_1,param_2);
  FUN_140a90550(param_1,param_2);
  return;
}




void FUN_140a9c640(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_res10 [2];
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88 [2];
  longlong *local_78;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_38;
  longlong *plStack_30;
  
  local_58 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x88))();
  if (cVar4 != '\0') {
    FUN_140a9c560(param_1,param_2);
    puVar6 = (undefined8 *)FUN_140a8f340(param_1,param_2);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_140a9cba0((longlong)puVar6);
      uVar5 = FUN_140a8fbe0(param_1,param_2);
      plVar1 = (longlong *)(param_1 + 0x248);
      plVar7 = *(longlong **)(param_1 + 0x260);
      if (*(longlong **)(param_1 + 0x268) < plVar7) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*plVar1;
      while( true ) {
        plVar3 = *(longlong **)(param_1 + 0x268);
        local_78 = (longlong *)0x0;
        if (plVar3 < *(longlong **)(param_1 + 0x260)) {
          _invalid_parameter_noinfo();
        }
        local_78 = (longlong *)*plVar1;
        if ((plVar2 == (longlong *)0x0) || (plVar2 != local_78)) {
          _invalid_parameter_noinfo();
        }
        if (plVar7 == plVar3) goto LAB_140a9c7b0;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar2;
        }
        if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
          _invalid_parameter_noinfo();
        }
        if (puVar6 == (undefined8 *)*plVar7) break;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar2;
        }
        if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
          _invalid_parameter_noinfo();
        }
        plVar7 = plVar7 + 1;
      }
      local_38 = plVar2;
      plStack_30 = plVar7;
      FUN_140a8ab60(plVar1,&local_98,(longlong)&local_38);
LAB_140a9c7b0:
      FUN_140a9cb80(puVar6);
      FUN_140a8ca00((longlong *)(param_1 + 0x48),local_res10);
      if ((uVar5 != 0) && (uVar5 < 0x41b)) {
        FUN_140a92d00(param_1,0);
        FUN_140a8ebc0(param_1,0);
      }
    }
    uVar5 = local_res10[0];
    lVar8 = 0;
    puVar6 = (undefined8 *)FUN_140a8f440(param_1,local_res10[0]);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_140a9cba0((longlong)puVar6);
      uVar5 = FUN_140a8fc10(param_1,uVar5);
      plVar1 = (longlong *)(param_1 + 0x278);
      plVar7 = *(longlong **)(param_1 + 0x290);
      if (*(longlong **)(param_1 + 0x298) < plVar7) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*plVar1;
      while( true ) {
        plVar3 = *(longlong **)(param_1 + 0x298);
        local_50 = (longlong *)0x0;
        if (plVar3 < *(longlong **)(param_1 + 0x290)) {
          _invalid_parameter_noinfo();
        }
        local_50 = (longlong *)*plVar1;
        if ((plVar2 == (longlong *)0x0) || (plVar2 != local_50)) {
          _invalid_parameter_noinfo();
        }
        if (plVar7 == plVar3) goto LAB_140a9c916;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = lVar8;
        }
        else {
          lVar9 = *plVar2;
        }
        if (*(longlong **)(lVar9 + 0x20) <= plVar7) {
          _invalid_parameter_noinfo();
        }
        if (puVar6 == (undefined8 *)*plVar7) break;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = lVar8;
        }
        else {
          lVar9 = *plVar2;
        }
        if (*(longlong **)(lVar9 + 0x20) <= plVar7) {
          _invalid_parameter_noinfo();
        }
        plVar7 = plVar7 + 1;
      }
      local_68 = plVar2;
      plStack_60 = plVar7;
      FUN_140a8ab60(plVar1,&local_98,(longlong)&local_68);
LAB_140a9c916:
      FUN_140a9cb80(puVar6);
      FUN_140a8ca00((longlong *)(param_1 + 200),local_res10);
      if ((uVar5 != 0) && (uVar5 < 0x41b)) {
        FUN_140a92d00(param_1,1);
        FUN_140a8ebc0(param_1,1);
      }
    }
    puVar6 = (undefined8 *)FUN_140a8f560(param_1,local_res10[0]);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_140a9cba0((longlong)puVar6);
      uVar5 = FUN_140a8fc40(param_1,local_res10[0]);
      plVar1 = (longlong *)(param_1 + 0x2a8);
      plVar7 = *(longlong **)(param_1 + 0x2c0);
      if (*(longlong **)(param_1 + 0x2c8) < plVar7) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*plVar1;
      while( true ) {
        plVar3 = *(longlong **)(param_1 + 0x2c8);
        local_88[0] = (longlong *)0x0;
        if (plVar3 < *(longlong **)(param_1 + 0x2c0)) {
          _invalid_parameter_noinfo();
        }
        local_88[0] = (longlong *)*plVar1;
        if ((plVar2 == (longlong *)0x0) || (plVar2 != local_88[0])) {
          _invalid_parameter_noinfo();
        }
        if (plVar7 == plVar3) goto LAB_140a9ca7a;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = lVar8;
        }
        else {
          lVar9 = *plVar2;
        }
        if (*(longlong **)(lVar9 + 0x20) <= plVar7) {
          _invalid_parameter_noinfo();
        }
        if (puVar6 == (undefined8 *)*plVar7) break;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = lVar8;
        }
        else {
          lVar9 = *plVar2;
        }
        if (*(longlong **)(lVar9 + 0x20) <= plVar7) {
          _invalid_parameter_noinfo();
        }
        plVar7 = plVar7 + 1;
      }
      local_98 = plVar2;
      plStack_90 = plVar7;
      FUN_140a8ab60(plVar1,local_88,(longlong)&local_98);
LAB_140a9ca7a:
      FUN_140a9cb80(puVar6);
      FUN_140a8ca00((longlong *)(param_1 + 0x88),local_res10);
      if ((uVar5 != 0) && (uVar5 < 0x41b)) {
        FUN_140a92d00(param_1,2);
        FUN_140a8ebc0(param_1,2);
      }
    }
    puVar6 = (undefined8 *)FUN_140a8f680(param_1,local_res10[0]);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_140a9cba0((longlong)puVar6);
      FUN_140a9cb80(puVar6);
      FUN_140a8ca00((longlong *)(param_1 + 0x108),local_res10);
    }
  }
  return;
}




void FUN_140a9cb50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = arenic::CAthlete::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}




void FUN_140a9cb80(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_140a9cba0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a9cbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),0);
  return;
}




ulonglong FUN_140a9cbf0(longlong param_1)

{
  ulonglong extraout_RAX;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




undefined8 FUN_140a9cc40(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return 0;
  }
  if (0xd < param_2) {
    log_InlineLogERROR(&DAT_140aa7368);
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000140a9ccc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  return uVar2;
}




undefined8 FUN_140a9ccd0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000140a9cd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1);
  return uVar2;
}




void FUN_140a9cd30(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  if (0xd < param_2) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x000140a9cde2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return;
}




void FUN_140a9cdf0(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  if (0xd < param_2) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  (**(code **)(*plVar1 + 0x80))(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x000140a9cedd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return;
}




undefined4 FUN_140a9cef0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined4 FUN_140a9cf00(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}




longlong FUN_140a9cf10(longlong param_1)

{
  return param_1 + 0x18;
}




undefined4 FUN_140a9cf20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




undefined4 FUN_140a9cf30(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




undefined4 FUN_140a9cf40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_140a9cf50(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_140a9cf60(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}




void FUN_140a9cf70(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_140a9cf80(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_140a9cf90(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




undefined * FUN_140a9cfa0(void)

{
  if ((DAT_140ab7458 & 1) == 0) {
    DAT_140ab7458 = DAT_140ab7458 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7450,"CAthlete");
    atexit((_func_5014 *)&LAB_140aa6fe0);
  }
  return &DAT_140ab7450;
}




void FUN_140a9d000(__uint64 param_1)

{
  if ((DAT_140ab7458 & 1) == 0) {
    DAT_140ab7458 = DAT_140ab7458 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7450,"CAthlete");
    atexit((_func_5014 *)&LAB_140aa6fe0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a9d055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140ab7450,param_1);
  return;
}




void FUN_140a9d060(void *param_1)

{
  if ((DAT_140ab7458 & 1) == 0) {
    DAT_140ab7458 = DAT_140ab7458 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7450,"CAthlete");
    atexit((_func_5014 *)&LAB_140aa6fe0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a9d0b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140ab7450,param_1);
  return;
}




void FUN_140a9d0c0(void *param_1)

{
  if ((DAT_140ab7458 & 1) == 0) {
    DAT_140ab7458 = DAT_140ab7458 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7450,"CAthlete");
    atexit((_func_5014 *)&LAB_140aa6fe0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a9d115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140ab7450,param_1);
  return;
}




undefined8 * FUN_140a9d120(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = arenic::CAthlete::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    FUN_140a9d060(param_1);
  }
  return param_1;
}




undefined8 * FUN_140a9d170(void)

{
  undefined8 *puVar1;
  
  if ((DAT_140ab7458 & 1) == 0) {
    DAT_140ab7458 = DAT_140ab7458 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ab7450,"CAthlete");
    atexit((_func_5014 *)&LAB_140aa6fe0);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140ab7450,0x38);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = arenic::CAthlete::vftable;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368,"CHECKF","pAthlete","f:\\version\\cqserver-78.0.11-1204\\modules\\arenic\\src\\athlete.cpp",0x29);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




ulonglong FUN_140a9d240(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    uVar2 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      log_InlineLogERROR("CAthlete::Create1 User:%u data repeat");
      (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
    }
    *(longlong **)(param_1 + 8) = param_2;
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,1);
    (**(code **)(*plVar1 + 0xb0))(plVar1,0);
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
    (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_3 + 4));
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
    (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined4 *)(param_3 + 0x10));
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
    (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_3 + 0x30));
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),5);
    (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_3 + 0x34));
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),6);
    (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_3 + 0x38));
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x14);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_3 + 0x1c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x2c);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),1);
    if ((char)uVar2 == '\0') {
      if (*(longlong *)(param_1 + 8) != 0) {
        uVar2 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
        *(undefined8 *)(param_1 + 8) = 0;
      }
      uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2;
}




ulonglong FUN_140a9d420(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  ulonglong extraout_RAX_00;
  
  if ((param_2 == (longlong *)0x0) || (param_3 == (undefined8 *)0x0)) {
    log_InlineLogERROR(&DAT_140aa7368);
    uVar4 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      plVar1 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
      if (plVar1 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_140aa7368);
      }
      else {
        plVar2 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,3);
        (**(code **)(*plVar2 + 0x40))(plVar2);
        log_InlineLogERROR("CAthlete::Create2 User:%u data repeat");
      }
      (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)*plVar1)(plVar1,1);
      }
    }
    lVar3 = (**(code **)(*param_2 + 0x38))(param_2);
    *(longlong *)(param_1 + 8) = lVar3;
    *(undefined4 *)(param_1 + 0x28) = param_4;
    *(undefined4 *)(param_1 + 0x2c) = param_5;
    *(undefined4 *)(param_1 + 0x30) = param_6;
    *(undefined8 *)(param_1 + 0x18) = *param_3;
    *(undefined8 *)(param_1 + 0x20) = param_3[1];
    if (lVar3 == 0) {
      log_InlineLogERROR(&DAT_140aa7368);
      uVar4 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  return uVar4;
}




void FUN_140a9d5c0(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_140a9d5d0(void)

{
  return 0;
}




undefined8 FUN_140a9d5e0(void)

{
  return 0;
}




undefined8 FUN_140a9d5f0(void)

{
  return 0;
}




undefined8 FUN_140a9d600(void)

{
  return 0;
}




undefined8 * FUN_140a9d610(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140a9d650(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_140a9d670(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))(*(longlong **)(param_1 + 0x10),4);
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140a9dd50(*(longlong *)(param_1 + 0x20),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ushort FUN_140a9d750(longlong param_1,uint param_2,ushort *param_3,ushort param_4)

{
  ushort uVar1;
  bool bVar2;
  CMsg local_418 [1040];
  
  if ((param_3 == (ushort *)0x0) || (param_4 == 0)) {
    return 0;
  }
  if (param_4 < *param_3) {
    return 0;
  }
  uVar1 = param_3[1];
  if (uVar1 < 0x89e) {
    if (uVar1 == 0x89d) {
      FUN_140a9ebe0(local_418);
      bVar2 = FUN_140a9ec60(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140a9edc0((longlong)local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x20));
      }
      FUN_140a9ec30((undefined8 *)local_418);
      goto LAB_140a9da11;
    }
    if (uVar1 == 0x3ea) {
      FUN_140aa0090(local_418);
      bVar2 = FUN_140aa0150(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140aa0180(local_418,param_2,*(longlong **)(param_1 + 0x20));
      }
      FUN_140aa00e0((undefined8 *)local_418);
      goto LAB_140a9da11;
    }
    if (uVar1 == 0x3eb) {
      FUN_140aa0220(local_418);
      bVar2 = FUN_140aa02e0(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140aa0310(local_418,param_2,*(longlong **)(param_1 + 0x20));
      }
      FUN_140aa0270((undefined8 *)local_418);
      goto LAB_140a9da11;
    }
  }
  else {
    if (uVar1 == 0x89e) {
      FUN_140a9ef10(local_418);
      bVar2 = FUN_140a9ef90(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140a9f190((longlong)local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x20));
      }
      FUN_140a9ef60((undefined8 *)local_418);
      goto LAB_140a9da11;
    }
    if (uVar1 == 0x89f) {
      FUN_140a9f260(local_418);
      bVar2 = FUN_140a9f2e0(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140a9f470((longlong)local_418,param_2,*(longlong **)(param_1 + 0x20));
      }
      FUN_140a9f2b0((undefined8 *)local_418);
      goto LAB_140a9da11;
    }
    if (uVar1 == 0x8a0) {
      FUN_140a9f6e0(local_418);
      bVar2 = FUN_140a9f760(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140a9f8a0(local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x20));
      }
      FUN_140a9f730((undefined8 *)local_418);
      goto LAB_140a9da11;
    }
    if (uVar1 == 0x8a1) {
      FUN_140a9fe90(local_418);
      bVar2 = FUN_140a9ff10(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140a9fff0(local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x20));
      }
      FUN_140a9fee0((undefined8 *)local_418);
      goto LAB_140a9da11;
    }
    if (uVar1 == 0x8a3) {
      FUN_140a9f940(local_418);
      bVar2 = FUN_140a9fa30(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140a9fa60((longlong)local_418,param_2,*(longlong **)(param_1 + 0x20),*(longlong **)(param_1 + 0x18));
      }
      FUN_140a9f990((undefined8 *)local_418);
      goto LAB_140a9da11;
    }
  }
  log_InlineLogWARNING("arenic:: Recv fault MsgType:%d");
LAB_140a9da11:
  return *param_3;
}




void FUN_140a9da40(longlong param_1)

{
  ulong uVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a9da5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CModule::OnTimer Arenic module doesn\'t have provider");
    return;
  }
  uVar1 = tq::TimeGet(0);
                    /* WARNING: Could not recover jumptable at 0x000140a9da79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20),uVar1);
  return;
}




bool FUN_140a9da80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_140a9eaa0(puVar2);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),0x8a1,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),0x8a0,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),0x89f,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),0x89e,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),0x89d,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),0x8a3,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),0x3eb,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),0x3ea,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(*(longlong **)(param_1 + 0x10),4,*(undefined8 *)(param_1 + 0x20));
  return cVar1 != '\0';
}




undefined8 FUN_140a9db70(void)

{
  return 1;
}




void FUN_140a9db80(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x138))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_140a9dbb0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_140a9dbe0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = arenic::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}




void FUN_140a9dc20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = arenic::CModule::vftable;
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x138))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  *param_1 = gs::IModule::vftable;
  return;
}




longlong * ModuleCreate(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
                    /* 0x1dc70  1  ModuleCreate */
  uVar3 = (undefined4)param_2;
  plVar2 = operator_new(0x28);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)arenic::CModule::vftable;
    *(undefined4 *)(plVar2 + 1) = uVar3;
    plVar2[2] = param_1;
    plVar2[3] = 0;
    plVar2[4] = 0;
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_140a9da80((longlong)plVar2,param_2,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




undefined8 * FUN_140a9dd10(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140a9dc20(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140a9dd50(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  undefined8 *puVar1;
  ulonglong extraout_RAX_00;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 8) = param_2;
  puVar1 = FUN_140a9bbf0(param_2);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




bool FUN_140a9dde0(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return false;
  }
  bVar1 = FUN_140a8fc70(*(longlong *)(param_1 + 0x10),param_2);
  return bVar1;
}




bool FUN_140a9de30(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return false;
  }
  bVar1 = FUN_140a8fe80(*(longlong *)(param_1 + 0x10),param_2);
  return bVar1;
}




bool FUN_140a9de80(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return false;
  }
  bVar1 = FUN_140a90090(*(longlong *)(param_1 + 0x10),param_2);
  return bVar1;
}




undefined8 FUN_140a9ded0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return 0;
  }
  uVar1 = FUN_140a924d0(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




void FUN_140a9df20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a9a810(*(longlong *)(param_1 + 0x10));
  return;
}




void FUN_140a9df70(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a912b0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9dfc0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a9c560(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9e010(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a929b0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9e060(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a9bd00(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9e0b0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a9a9e0(*(longlong *)(param_1 + 0x10),param_2,0x140aabf58);
  return;
}




void FUN_140a9e100(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a9bf00(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_140a9e150(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a975d0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9e1a0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a92c00(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9e1f0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a914e0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9e240(longlong param_1,undefined4 param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a89f00(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a9e290(longlong param_1,undefined4 param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a8a1d0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a9e2e0(longlong param_1,undefined4 param_2,uint param_3,uint param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a91680(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_140a9e330(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a8a550(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9e380(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a98e00(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a9e3d0(longlong param_1,uint param_2,char param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a99280(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a9e420(longlong param_1,undefined4 param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a98120(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a9e470(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a9c640(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9e4c0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a97900(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9e510(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a9b6e0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_140a9e560(longlong param_1,uint param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a8f820(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a9e5b0(longlong param_1,uint param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a8f940(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a9e600(longlong param_1,uint param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a8f8b0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a9e650(longlong param_1,uint param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a8f9d0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a9e6a0(longlong param_1,uint param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a98ca0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a9e6f0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a9c1e0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9e740(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a95cc0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




bool FUN_140a9e790(longlong param_1,uint param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
  }
  else {
    lVar2 = FUN_140a8ff70(*(longlong *)(param_1 + 0x10),param_2);
    if (lVar2 != 0) {
      bVar1 = FUN_140a81060(lVar2);
      return bVar1;
    }
  }
  return false;
}




ulonglong FUN_140a9e7f0(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    uVar2 = extraout_RAX;
  }
  else {
    lVar1 = FUN_140a8ff70(*(longlong *)(param_1 + 0x10),param_2);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_140a81070(lVar1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




undefined8 FUN_140a9e850(undefined8 *param_1,undefined4 param_2,uint param_3)

{
  char extraout_AL;
  char extraout_AL_00;
  char extraout_AL_01;
  bool bVar1;
  undefined4 uVar2;
  uint7 extraout_var;
  uint7 extraout_var_00;
  uint7 extraout_var_01;
  uint7 extraout_var_02;
  uint7 uVar3;
  
  uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x158))();
  (**(code **)(*(longlong *)param_1[1] + 0x168))((longlong *)param_1[1],uVar2);
  uVar3 = extraout_var;
  if ((((extraout_AL != '\0') && ((**(code **)(*(longlong *)param_1[1] + 400))((longlong *)param_1[1],uVar2), uVar3 = extraout_var_00, extraout_AL_00 != '\0'))
      && ((**(code **)*param_1)(param_1,param_2), uVar3 = extraout_var_01, extraout_AL_01 != '\0')) &&
     (bVar1 = FUN_140a90090(param_1[2],param_3), uVar3 = extraout_var_02, bVar1)) {
    return (ulonglong)extraout_var_02 << 8;
  }
  return CONCAT71(uVar3,1);
}




void FUN_140a9e8e0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a960a0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a9e930(longlong param_1,uint param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a96130(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




undefined4 FUN_140a9e980(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return 0;
  }
  uVar1 = FUN_140a8fbe0(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




undefined4 FUN_140a9e9d0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return 0;
  }
  uVar1 = FUN_140a8fc10(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




void FUN_140a9ea20(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  FUN_140a9b8c0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_140a9ea70(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140a81f80((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_140a9eaa0(undefined8 *param_1)

{
  *param_1 = arenic::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void FUN_140a9eac0(undefined8 *param_1)

{
  *param_1 = arenic::CProvider::vftable;
  if (param_1[2] != 0) {
    FUN_140a81f80((undefined8 *)param_1[2]);
    param_1[2] = 0;
  }
  return;
}




undefined8 * FUN_140a9eb00(undefined8 *param_1,uint param_2)

{
  FUN_140a9eac0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a9eb30(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_140a9eb60(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_140a9eb80(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140a9eb87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_140a9eb90(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140a9eb97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_140a9eba0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140a9eba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_140a9ebb0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a9ebe0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = arenic::CMsgArenic::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a9ec30(undefined8 *param_1)

{
  *param_1 = arenic::CMsgArenic::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140a9ec60(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x89d;
}




undefined8 FUN_140a9ec90(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x34;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x89d;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 4) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8 FUN_140a9ecd0(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x34;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x89d;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 8) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8 FUN_140a9ed10(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  **(undefined2 **)(param_1 + 0x408) = 0x34;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x89d;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = *param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_4[5];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = param_4[6];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x2c) = param_4[8];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x30) = param_4[9];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x28) = param_4[7];
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_4 + 1);
  uVar2 = *(undefined8 *)(param_4 + 3);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




void FUN_140a9edc0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  switch(*(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4)) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x000140a9ee27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x40))(param_3);
    return;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x000140a9ee35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x48))(param_3);
    return;
  case 3:
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x408) + 8);
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140a9ee4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x58))(param_3);
      return;
    }
    if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000140a9ee5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x50))(param_3);
      return;
    }
    break;
  case 4:
    (**(code **)(*param_3 + 0x70))(param_3);
    break;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x000140a9ee6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x60))(param_3);
    return;
  case 0xb:
                    /* WARNING: Could not recover jumptable at 0x000140a9ee7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x68))(param_3);
    return;
  }
  return;
}




undefined8 * FUN_140a9eec0(undefined8 *param_1,byte param_2)

{
  *param_1 = arenic::CMsgArenic::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a9ef10(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = arenic::CMsgArenicRacing::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a9ef60(undefined8 *param_1)

{
  *param_1 = arenic::CMsgArenicRacing::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140a9ef90(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x89e;
}




undefined8 FUN_140a9f000(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  **(undefined2 **)(param_1 + 0x408) = 0x94;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x89e;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_6;
  return CONCAT71((uint7)(uint3)((uint)param_6 >> 8),1);
}




ulonglong FUN_140a9f070(longlong param_1,void *param_2,void *param_3)

{
  int *piVar1;
  ushort *puVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  void *pvVar3;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x78) {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (puVar2 == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x78;
  memcpy((void *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x18) * 0x78 + 0x1c + *(longlong *)(param_1 + 0x408)),param_2,0x3c);
  pvVar3 = memcpy((void *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x18) * 0x78 + 0x58 + *(longlong *)(param_1 + 0x408)),param_3,0x3c);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 0x18);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
}




undefined4 FUN_140a9f170(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18);
}




void FUN_140a9f190(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x408);
  if (*(short *)(lVar1 + 0x14) == 0) {
    (**(code **)(*param_3 + 0x90))(param_3,param_2,*(undefined4 *)(lVar1 + 4),*(undefined4 *)(lVar1 + 8));
  }
  return;
}




void FUN_140a9f200(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_2;
  return;
}




undefined8 * FUN_140a9f210(undefined8 *param_1,byte param_2)

{
  *param_1 = arenic::CMsgArenicRacing::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a9f260(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = arenic::CMsgArenicRank::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a9f2b0(undefined8 *param_1)

{
  *param_1 = arenic::CMsgArenicRank::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140a9f2e0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x89f;
}




undefined8 FUN_140a9f310(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x10;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x89f;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 6) = param_3;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 8) = param_4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_140a9f360(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar4;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x24) {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (puVar2 == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar4 = (ulonglong)*(uint *)(puVar2 + 6);
  *(undefined4 *)(puVar2 + uVar4 * 0x12 + 8) = *param_2;
  *(undefined4 *)(puVar2 + uVar4 * 0x12 + 10) = param_2[1];
  *(undefined4 *)(puVar2 + uVar4 * 0x12 + 0xc) = param_2[2];
  *(undefined4 *)(puVar2 + uVar4 * 0x12 + 0xe) = param_2[3];
  *(undefined4 *)(puVar2 + uVar4 * 0x12 + 0x10) = param_2[4];
  *(undefined4 *)(puVar2 + uVar4 * 0x12 + 0x12) = param_2[5];
  *(undefined4 *)(puVar2 + uVar4 * 0x12 + 0x14) = param_2[6];
  *(undefined4 *)(puVar2 + uVar4 * 0x12 + 0x16) = param_2[7];
  *(undefined4 *)(puVar2 + uVar4 * 0x12 + 0x18) = param_2[8];
  **(short **)(param_1 + 0x408) = **(short **)(param_1 + 0x408) + 0x24;
  lVar3 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar3 + 0xc);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




undefined4 FUN_140a9f450(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc);
}




void FUN_140a9f470(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x408);
  if (*(short *)(lVar1 + 4) == 0) {
    (**(code **)(*param_3 + 0x80))(param_3,param_2,*(undefined2 *)(lVar1 + 6));
  }
  else if (*(short *)(lVar1 + 4) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140a9f4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x88))(param_3,param_2,*(undefined2 *)(lVar1 + 6));
    return;
  }
  return;
}




undefined8 * FUN_140a9f500(undefined8 *param_1,byte param_2)

{
  *param_1 = arenic::CMsgArenicRank::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a9f550(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = arenic::CMsgArenicScore::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a9f5a0(undefined8 *param_1)

{
  *param_1 = arenic::CMsgArenicScore::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140a9f5d0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a2;
}




undefined8 FUN_140a9f600(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  **(undefined2 **)(param_1 + 0x408) = 0x34;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a2;
  lVar2 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar2 + 4) = *param_2;
  *(undefined4 *)(lVar2 + 8) = param_2[1];
  *(undefined4 *)(lVar2 + 0xc) = param_2[2];
  *(undefined4 *)(lVar2 + 0x10) = param_2[3];
  *(undefined4 *)(lVar2 + 0x14) = param_2[4];
  *(undefined4 *)(lVar2 + 0x18) = param_2[5];
  lVar2 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar2 + 0x1c) = *param_3;
  *(undefined4 *)(lVar2 + 0x20) = param_3[1];
  *(undefined4 *)(lVar2 + 0x24) = param_3[2];
  *(undefined4 *)(lVar2 + 0x28) = param_3[3];
  *(undefined4 *)(lVar2 + 0x2c) = param_3[4];
  uVar1 = param_3[5];
  *(undefined4 *)(lVar2 + 0x30) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}




undefined8 * FUN_140a9f690(undefined8 *param_1,byte param_2)

{
  *param_1 = arenic::CMsgArenicScore::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a9f6e0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = arenic::CMsgArenicTopTen::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a9f730(undefined8 *param_1)

{
  *param_1 = arenic::CMsgArenicTopTen::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140a9f760(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a0;
}




undefined8 FUN_140a9f790(longlong param_1)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 8;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 2) = 0x8a0;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_140a9f7c0(longlong param_1,void *param_2)

{
  int *piVar1;
  ushort *puVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  void *pvVar3;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x34) {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (puVar2 == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x34;
  pvVar3 = memcpy((void *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 4) * 0x34 + 8 + *(longlong *)(param_1 + 0x408)),param_2,0x34);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
}




undefined4 FUN_140a9f880(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4);
}




void FUN_140a9f8a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a9f8e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x98))(param_3);
  return;
}




undefined8 * FUN_140a9f8f0(undefined8 *param_1,byte param_2)

{
  *param_1 = arenic::CMsgArenicTopTen::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a9f940(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = arenic::CMsgArenicWitness::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a9f990(undefined8 *param_1)

{
  *param_1 = arenic::CMsgArenicWitness::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_140a9f9c0(CMsg *param_1,undefined2 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a3;
  **(undefined2 **)(param_1 + 0x408) = 0x36;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 10) = param_3;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 4) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




bool FUN_140a9fa30(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a3;
}




void FUN_140a9fa60(longlong param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  IStringManager *pIVar4;
  undefined8 uVar5;
  
  cVar3 = (**(code **)(*param_4 + 0x88))(param_4);
  if ((cVar3 != '\0') && ((*(int *)(*(longlong *)(param_1 + 0x408) + 6) == 0 || (*(short *)(*(longlong *)(param_1 + 0x408) + 4) != 0)))) {
    cVar3 = (**(code **)(*param_4 + 200))(param_4,param_2);
    if (cVar3 == '\0') {
      pIVar4 = theInstance();
      lVar2 = *param_4;
      uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_DIE");
      (**(code **)(lVar2 + 0x28))(param_4,param_2,uVar5);
    }
    else {
      cVar3 = (**(code **)(*param_4 + 0xb0))(param_4,param_2);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_4 + 0x160))(param_4,param_2);
        if (cVar3 == '\0') {
          lVar2 = *(longlong *)(param_1 + 0x408);
          sVar1 = *(short *)(lVar2 + 4);
          if (sVar1 == 0) {
            (**(code **)(*param_3 + 0xa0))(param_3,param_2,*(undefined4 *)(lVar2 + 10));
          }
          else if (sVar1 == 1) {
            (**(code **)(*param_3 + 0xa8))(param_3,param_2,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
          }
          else if (sVar1 == 4) {
            (**(code **)(*param_3 + 0xb0))(param_3,param_2,*(undefined4 *)(lVar2 + 10));
          }
          else {
            log_InlineLogERROR("CMsgArenicWitness::Process invalid action:%d");
          }
        }
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140a9fb90(longlong param_1,uint param_2,char *param_3)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140ab7408 ^ (ulonglong)auStack_58;
  if (0x3ff < (ulonglong)**(ushort **)(param_1 + 0x408) + 0x24) {
    return (ulonglong)*(ushort **)(param_1 + 0x408) & 0xffffffffffffff00;
  }
  local_38 = (ulonglong)param_2;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (param_3 != (char *)0x0) {
    tq::SafeCopy((char *)((longlong)&local_38 + 4),param_3,0x20);
  }
  lVar3 = *(longlong *)(param_1 + 0x408);
  lVar4 = (longlong)*(int *)(lVar3 + 0xe);
  *(ulonglong *)(lVar3 + 0x1a + lVar4 * 0x24) = local_38;
  *(undefined8 *)(lVar3 + 0x22 + lVar4 * 0x24) = local_30;
  *(undefined8 *)(lVar3 + 0x2a + lVar4 * 0x24) = local_28;
  *(undefined8 *)(lVar3 + 0x32 + lVar4 * 0x24) = local_20;
  *(undefined4 *)(lVar3 + 0x3a + lVar4 * 0x24) = local_18;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 0xe);
  *piVar1 = *piVar1 + 1;
  sVar2 = (*(short **)(param_1 + 0x408))[7];
  **(short **)(param_1 + 0x408) = sVar2 * 0x24 + 0x5a;
  return CONCAT71((uint7)(byte)((ushort)(sVar2 * 8) >> 8),1);
}




undefined8 FUN_140a9fc90(CMsg *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a3;
  **(undefined2 **)(param_1 + 0x408) = 0x5a;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 10) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xe) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x12) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x16) = param_5;
  return CONCAT71((uint7)(uint3)((uint)param_5 >> 8),1);
}




ulonglong FUN_140a9fd30(CMsg *param_1,undefined2 param_2,char *param_3,char *param_4)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  ulonglong extraout_RAX_00;
  undefined7 extraout_var;
  
  if (param_3 == (char *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_4 == (char *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    uVar1 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a3;
    **(undefined2 **)(param_1 + 0x408) = 0x5a;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
    tq::SafeCopy((char *)(*(longlong *)(param_1 + 0x408) + 0x1a),param_3,0x20);
    tq::SafeCopy((char *)(*(longlong *)(param_1 + 0x408) + 0x3a),param_4,0x20);
    uVar1 = CONCAT71(extraout_var,1);
  }
  return uVar1;
}




undefined8 * FUN_140a9fe40(undefined8 *param_1,byte param_2)

{
  *param_1 = arenic::CMsgArenicWitness::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a9fe90(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = arenic::CMsgAthlete::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a9fee0(undefined8 *param_1)

{
  *param_1 = arenic::CMsgAthlete::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140a9ff10(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a1;
}




undefined8
FUN_140a9ff40(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
             undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  **(undefined2 **)(param_1 + 0x408) = 0x2c;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = param_8;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_9;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = param_10;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x28) = param_11;
  return CONCAT71((uint7)(uint3)((uint)param_11 >> 8),1);
}




void FUN_140a9fff0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140aa7368);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140aa0032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x78))(param_3);
  return;
}




undefined8 * FUN_140aa0040(undefined8 *param_1,byte param_2)

{
  *param_1 = arenic::CMsgAthlete::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140aa0090(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = arenic::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140aa00e0(undefined8 *param_1)

{
  *param_1 = arenic::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140aa0150(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_140aa0180(undefined8 param_1,int param_2,longlong *param_3)

{
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140aa7368);
      return;
    }
    (**(code **)(*param_3 + 0x30))(param_3);
  }
  return;
}




undefined8 * FUN_140aa01d0(undefined8 *param_1,byte param_2)

{
  *param_1 = arenic::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140aa0220(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = arenic::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140aa0270(undefined8 *param_1)

{
  *param_1 = arenic::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140aa02e0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}




void FUN_140aa0310(undefined8 param_1,int param_2,longlong *param_3)

{
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140aa7368);
      return;
    }
    (**(code **)(*param_3 + 0x38))(param_3);
  }
  return;
}




undefined8 * FUN_140aa0360(undefined8 *param_1,byte param_2)

{
  *param_1 = arenic::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
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
  
  local_res10 = _decode_pointer(DAT_140ab7a00);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140ab7a00);
    local_res18[0] = _decode_pointer(DAT_140ab79f8);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140ab7a00 = _encode_pointer(local_res10);
    DAT_140ab79f8 = _encode_pointer(local_res18[0]);
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




undefined8 FUN_140aa05b4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  if ((_StackCookie == DAT_140ab7408) && ((short)(_StackCookie >> 0x30) == 0)) {
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




bool FUN_140aa0730(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140ab79f8 = _encode_pointer(puVar1);
  DAT_140ab7a00 = DAT_140ab79f8;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140aa0da8();
    atexit(FUN_140aa0de0);
    atexit((_func_5014 *)&LAB_140aa0d9c);
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
    if (DAT_140ab745c < 1) {
      return 0;
    }
    DAT_140ab745c = DAT_140ab745c + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_140ab79e8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140ab79e8;
        pvVar3 = DAT_140ab79e8;
      }
      DAT_140ab79e8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140aa080a;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140aa080a:
    if (DAT_140ab79e0 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140ab7a00);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_140ab79f8);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_140ab7a00);
            plVar12 = (longlong *)_decode_pointer(DAT_140ab79f8);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_140ab79f8 = _encoded_null();
        DAT_140ab7a00 = DAT_140ab79f8;
      }
      DAT_140ab79e0 = 0;
      if (!bVar2) {
        LOCK();
        DAT_140ab79e8 = (void *)0x0;
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
      bVar13 = DAT_140ab79e8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140ab79e8;
        pvVar3 = DAT_140ab79e8;
      }
      DAT_140ab79e8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140aa0933;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140aa0933:
    if (DAT_140ab79e0 == 0) {
      DAT_140ab79e0 = 1;
      iVar4 = _initterm_e(&DAT_140aa7268,&DAT_140aa7278);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_140aa7258,&DAT_140aa7260);
      DAT_140ab79e0 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_140ab79e8 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_140ab79f0 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140ab79f0), BVar5 != 0)) {
      (*DAT_140ab79f0)(param_1,2,param_3);
    }
    DAT_140ab745c = DAT_140ab745c + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000140aa0aac) */
/* WARNING: Removing unreachable block (ram,0x000140aa0a43) */
/* WARNING: Removing unreachable block (ram,0x000140aa0ae7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_140ab745c == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_140ab7420 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_140ab7420 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_140a9db70();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_140a9db70();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_140ab7420 = 0xffffffff;
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




undefined8 FUN_140aa0b88(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_140ab7500);
  local_30 = DAT_140ab75f8;
  local_38 = RtlLookupFunctionEntry(DAT_140ab75f8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140ab7598 = local_res8;
    DAT_140ab75f8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140ab7500,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140ab7470 = DAT_140ab75f8;
  _DAT_140ab7580 = local_res8[0];
  _DAT_140ab7460 = 0xc0000409;
  _DAT_140ab7464 = 1;
  local_20 = DAT_140ab7408;
  local_18 = DAT_140ab7410;
  DAT_140ab74f8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140aacb98);
  if (DAT_140ab74f8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_140aa0da8(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140aad6c0; puVar1 < &DAT_140aad6c0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_140aa0de0(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140aad6d0; puVar1 < &DAT_140aad6d0; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_140a80000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140a80000);
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
  if (DAT_140ab7408 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140ab7408 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_140ab7408 == 0x2b992ddfa232) {
      DAT_140ab7408 = 0x2b992ddfa233;
    }
  }
  DAT_140ab7410 = ~DAT_140ab7408;
  return;
}




void Unwind_140aa1030(void)

{
  DAT_140ab7438 = DAT_140ab7438 & 0xfffffffe;
  return;
}




void Unwind_140aa1050(void)

{
  DAT_140ab7438 = DAT_140ab7438 & 0xfffffffe;
  return;
}




void Unwind_140aa1070(void)

{
  DAT_140ab7438 = DAT_140ab7438 & 0xfffffffe;
  return;
}




void Unwind_140aa1090(void)

{
  DAT_140ab7438 = DAT_140ab7438 & 0xfffffffe;
  return;
}




void Unwind_140aa10b0(void)

{
  DAT_140ab7438 = DAT_140ab7438 & 0xfffffffe;
  return;
}




void Unwind_140aa10d0(undefined8 param_1,longlong param_2)

{
  FUN_140a813c0(*(void **)(param_2 + 0x68));
  return;
}




void Unwind_140aa10f0(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa1110(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa1130(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x440));
  return;
}




void Unwind_140aa1150(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1170(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1190(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa11b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa11d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa11f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1210(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa1230(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1250(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa1270(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1290(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa12b0(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa12d0(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa12f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1310(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa1330(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1350(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1370(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa1390(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa13b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa13d0(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa13f0(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1410(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1430(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa1450(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1470(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1490(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa14b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140aa14d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140aa14f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140aa1510(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140aa1530(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1550(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa1570(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1590(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa15b0(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa15d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140aa15f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140aa1610(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140aa1630(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140aa1650(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa1670(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa1690(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa16b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa16d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa16f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa1710(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa1730(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa1750(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1770(void)

{
  DAT_140ab7448 = DAT_140ab7448 & 0xfffffffe;
  return;
}




void Unwind_140aa1790(void)

{
  DAT_140ab7448 = DAT_140ab7448 & 0xfffffffe;
  return;
}




void Unwind_140aa17b0(void)

{
  DAT_140ab7448 = DAT_140ab7448 & 0xfffffffe;
  return;
}




void Unwind_140aa17d0(void)

{
  DAT_140ab7448 = DAT_140ab7448 & 0xfffffffe;
  return;
}




void Unwind_140aa17f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa1810(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa1830(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa1850(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa1870(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa1890(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa18b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa18d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140aa18f0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa1910(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa1930(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa1950(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa1970(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa1990(undefined8 param_1,longlong param_2)

{
  FUN_140a84820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa19b0(undefined8 param_1,longlong param_2)

{
  FUN_140a84a00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa19d0(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa19f0(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1a10(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1a30(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1a50(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1a70(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa1a90(void)

{
  FUN_140a81b90();
  return;
}




void Catch_140aa1ab0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140aa1ae0(void)

{
  FUN_140a81b90();
  return;
}




void Catch_140aa1b00(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140aa1b30(void)

{
  FUN_140a81b90();
  return;
}




void Catch_140aa1b50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140aa1b80(void)

{
  FUN_140a81b90();
  return;
}




void Catch_140aa1ba0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140aa1bd0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140aa1c00(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140aa1c30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140aa1c60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140aa1c90(void)

{
  FUN_140a81b90();
  return;
}




void Catch_140aa1cb0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140aa1ce0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa1d00(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1d20(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa1d40(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1d60(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa1d80(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1da0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa1dc0(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1de0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa1e00(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1e20(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1e40(undefined8 param_1,longlong param_2)

{
  FUN_140a84820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1e60(undefined8 param_1,longlong param_2)

{
  FUN_140a85fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1e80(undefined8 param_1,longlong param_2)

{
  FUN_140a84a00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1ea0(undefined8 param_1,longlong param_2)

{
  FUN_140a86000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1ec0(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1ee0(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1f00(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1f20(undefined8 param_1,longlong param_2)

{
  FUN_140a86040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1f40(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1f60(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1f80(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1fa0(undefined8 param_1,longlong param_2)

{
  FUN_140a86080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1fc0(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa1fe0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2000(undefined8 param_1,longlong param_2)

{
  FUN_140a84820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2020(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2040(undefined8 param_1,longlong param_2)

{
  FUN_140a84a00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2060(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140aa2080(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140aa20a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140aa20c0(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140aa20e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140aa2100(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140aa2120(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140aa2140(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140aa2160(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2180(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140aa21a0(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0(*(exception **)(param_2 + 0x40));
  return;
}




void Catch_140aa21c0(undefined8 param_1,longlong param_2)

{
  FUN_140a86190(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140aa21f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140aa2210(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140aa2230(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140aa2250(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140aa2270(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140aa2290(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140aa22b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140aa22d0(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140aa22f0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2310(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2330(undefined8 param_1,longlong param_2)

{
  FUN_140a86000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2350(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2370(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2390(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa23b0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa23d0(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa23f0(undefined8 param_1,longlong param_2)

{
  FUN_140a86040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2410(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2430(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2450(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2470(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2490(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa24b0(undefined8 param_1,longlong param_2)

{
  FUN_140a86080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa24d0(undefined8 param_1,longlong param_2)

{
  FUN_140a9f2b0((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140aa24f0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnShowRankAthletePoint, idUser:%u @%s,%d");
  return 0x140a8a1a4;
}




void Unwind_140aa2530(undefined8 param_1,longlong param_2)

{
  FUN_140a9f2b0((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140aa2550(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnShowRankHistoryHonor, idUser:%u @%s,%d");
  return 0x140a8a464;
}




void Unwind_140aa2590(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140aa25b0(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140aa25d0(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x70));
  return;
}




void Unwind_140aa25f0(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140aa2610(undefined8 param_1,longlong param_2)

{
  FUN_140a84820(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140aa2630(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140aa2650(undefined8 param_1,longlong param_2)

{
  FUN_140a84820(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140aa2670(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2690(undefined8 param_1,longlong param_2)

{
  FUN_140a84820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa26b0(undefined8 param_1,longlong param_2)

{
  FUN_140a9f730((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140aa26d0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnShowYesterdayInfo, idUser:%u @%s,%d");
  return 0x140a8a7bd;
}




void Unwind_140aa2710(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140aa2730(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2750(undefined8 param_1,longlong param_2)

{
  FUN_140a84820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2770(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2790(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa27b0(undefined8 param_1,longlong param_2)

{
  FUN_140a84a00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa27d0(undefined8 param_1,longlong param_2)

{
  FUN_140a85fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa27f0(undefined8 param_1,longlong param_2)

{
  FUN_140a87b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2810(undefined8 param_1,longlong param_2)

{
  FUN_140a86000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2830(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2850(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2870(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2890(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa28b0(undefined8 param_1,longlong param_2)

{
  FUN_140a87bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa28d0(undefined8 param_1,longlong param_2)

{
  FUN_140a86040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa28f0(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2910(undefined8 param_1,longlong param_2)

{
  FUN_140a87be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2930(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2950(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2970(undefined8 param_1,longlong param_2)

{
  FUN_140a87c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2990(undefined8 param_1,longlong param_2)

{
  FUN_140a86080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa29b0(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa29d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140aa29f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140aa2a10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140aa2a30(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140aa2a50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140aa2a70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140aa2a90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140aa2ab0(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140aa2ad0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2af0(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2b10(undefined8 param_1,longlong param_2)

{
  FUN_140a86000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2b30(undefined8 param_1,longlong param_2)

{
  FUN_140a87b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2b50(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2b70(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2b90(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2bb0(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2bd0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2bf0(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2c10(undefined8 param_1,longlong param_2)

{
  FUN_140a86040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2c30(undefined8 param_1,longlong param_2)

{
  FUN_140a87bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2c50(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2c70(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2c90(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2cb0(undefined8 param_1,longlong param_2)

{
  FUN_140a87be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2cd0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2cf0(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2d10(undefined8 param_1,longlong param_2)

{
  FUN_140a86080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2d30(undefined8 param_1,longlong param_2)

{
  FUN_140a87c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa2d50(undefined8 param_1,longlong param_2)

{
  FUN_140a8a7f0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140aa2d70(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140aa2d90(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2db0(undefined8 param_1,longlong param_2)

{
  FUN_140a84820(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140aa2dd0(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140aa2df0(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Unwind_140aa2e10(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2e30(undefined8 param_1,longlong param_2)

{
  FUN_140a84820(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140aa2e50(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140aa2e70(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x40));
  return;
}




void Unwind_140aa2e90(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2eb0(undefined8 param_1,longlong param_2)

{
  FUN_140a84820(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140aa2ed0(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140aa2ef0(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x70));
  return;
}




void Unwind_140aa2f10(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa2f40(undefined8 param_1,longlong param_2)

{
  FUN_140a84820(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140aa2f60(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Catch_140aa2f80(undefined8 param_1,longlong param_2)

{
  FUN_140a86110(*(longlong *)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140aa2fb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140aa2fd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140aa2ff0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140aa3010(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140aa3030(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140aa3050(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140aa3070(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140aa3090(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140aa30b0(undefined8 param_1,longlong param_2)

{
  FUN_140a8acb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa30d0(undefined8 param_1,longlong param_2)

{
  FUN_140a87b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa30f0(undefined8 param_1,longlong param_2)

{
  FUN_140a86000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3110(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3130(undefined8 param_1,longlong param_2)

{
  FUN_140a8acd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3150(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3170(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3190(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa31b0(undefined8 param_1,longlong param_2)

{
  FUN_140a8acf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa31d0(undefined8 param_1,longlong param_2)

{
  FUN_140a87bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa31f0(undefined8 param_1,longlong param_2)

{
  FUN_140a86040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3210(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3230(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3250(undefined8 param_1,longlong param_2)

{
  FUN_140a87be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3270(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3290(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa32b0(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa32d0(undefined8 param_1,longlong param_2)

{
  FUN_140a87c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa32f0(undefined8 param_1,longlong param_2)

{
  FUN_140a86080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3310(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140aa3330(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140aa3360(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140aa3380(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa33a0(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa33c0(undefined8 param_1,longlong param_2)

{
  FUN_140a86000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa33e0(undefined8 param_1,longlong param_2)

{
  FUN_140a87b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3400(undefined8 param_1,longlong param_2)

{
  FUN_140a8acb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3420(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa3440(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3460(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3480(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa34a0(undefined8 param_1,longlong param_2)

{
  FUN_140a8acd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa34c0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa34e0(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3500(undefined8 param_1,longlong param_2)

{
  FUN_140a86040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3520(undefined8 param_1,longlong param_2)

{
  FUN_140a87bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3540(undefined8 param_1,longlong param_2)

{
  FUN_140a8acf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3560(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa3580(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa35a0(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa35c0(undefined8 param_1,longlong param_2)

{
  FUN_140a87be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa35e0(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3600(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa3620(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3640(undefined8 param_1,longlong param_2)

{
  FUN_140a86080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3660(undefined8 param_1,longlong param_2)

{
  FUN_140a87c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3680(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140aa36a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140aa36d0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140aa36f0(undefined8 param_1,longlong param_2)

{
  FUN_140a8a7f0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140aa3710(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140aa3730(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140aa3750(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140aa3770(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x70));
  return;
}




undefined8 Catch_140aa3790(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::CalcPosition, nSortType = %d @%s,%d");
  return 0x140a8f254;
}




void Unwind_140aa37d0(undefined8 param_1,longlong param_2)

{
  FUN_140a9f990((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140aa37f0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::ClearWitness, map: %u @%s,%d");
  return 0x140a90533;
}




undefined * Catch_140aa3830(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pArenicInfo) @%s,%d");
  return &DAT_140a90662;
}




void Unwind_140aa3870(undefined8 param_1,longlong param_2)

{
  FUN_140a8d8f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3890(undefined8 param_1,longlong param_2)

{
  FUN_140a8acb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa38b0(undefined8 param_1,longlong param_2)

{
  FUN_140a87b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa38d0(undefined8 param_1,longlong param_2)

{
  FUN_140a86000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa38f0(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3910(undefined8 param_1,longlong param_2)

{
  FUN_140a8d910(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3930(undefined8 param_1,longlong param_2)

{
  FUN_140a8acd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3950(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3970(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3990(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa39b0(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}




void Unwind_140aa39d0(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x40));
  return;
}




void Unwind_140aa39f0(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x70));
  return;
}




void Unwind_140aa3a10(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140aa3a30(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa3a50(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3a70(undefined8 param_1,longlong param_2)

{
  FUN_140a86000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3a90(undefined8 param_1,longlong param_2)

{
  FUN_140a87b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3ab0(undefined8 param_1,longlong param_2)

{
  FUN_140a8acb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3ad0(undefined8 param_1,longlong param_2)

{
  FUN_140a8d8f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3af0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa3b10(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3b30(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3b50(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3b70(undefined8 param_1,longlong param_2)

{
  FUN_140a8acd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3b90(undefined8 param_1,longlong param_2)

{
  FUN_140a8d910(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3bb0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa3bd0(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3bf0(undefined8 param_1,longlong param_2)

{
  FUN_140a86040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3c10(undefined8 param_1,longlong param_2)

{
  FUN_140a87bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3c30(undefined8 param_1,longlong param_2)

{
  FUN_140a8acf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3c50(undefined8 param_1,longlong param_2)

{
  FUN_140a8d930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3c70(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa3c90(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3cb0(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3cd0(undefined8 param_1,longlong param_2)

{
  FUN_140a87be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3cf0(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3d10(undefined8 param_1,longlong param_2)

{
  FUN_140a8d950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3d30(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa3d50(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3d70(undefined8 param_1,longlong param_2)

{
  FUN_140a86080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3d90(undefined8 param_1,longlong param_2)

{
  FUN_140a87c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3db0(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3dd0(undefined8 param_1,longlong param_2)

{
  FUN_140a8d970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3df0(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}




void Unwind_140aa3e10(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x40));
  return;
}




void Unwind_140aa3e30(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x70));
  return;
}




void Unwind_140aa3e50(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140aa3e70(undefined8 param_1,longlong param_2)

{
  FUN_140a8a7f0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140aa3e90(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140aa3eb0(undefined8 param_1,longlong param_2)

{
  FUN_140a907a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3ed0(undefined8 param_1,longlong param_2)

{
  FUN_140a8d8f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3ef0(undefined8 param_1,longlong param_2)

{
  FUN_140a8acb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3f10(undefined8 param_1,longlong param_2)

{
  FUN_140a87b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3f30(undefined8 param_1,longlong param_2)

{
  FUN_140a86000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3f50(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3f70(undefined8 param_1,longlong param_2)

{
  FUN_140a907d0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3f90(undefined8 param_1,longlong param_2)

{
  FUN_140a8d910(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3fb0(undefined8 param_1,longlong param_2)

{
  FUN_140a8acd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3fd0(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa3ff0(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4010(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140aa4030(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnUserLogin, idUser:%u @%s,%d");
  return 0x140a914c3;
}




void Unwind_140aa4070(undefined8 param_1,longlong param_2)

{
  FUN_140a9fee0((undefined8 *)(param_2 + 0x70));
  return;
}




undefined8 Catch_140aa4090(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnShowUserInfo, idUser:%u @%s,%d");
  return 0x140a9166b;
}




void Unwind_140aa40d0(undefined8 param_1,longlong param_2)

{
  FUN_140a9ef60((undefined8 *)(param_2 + 0x130));
  return;
}




void Unwind_140aa40f0(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(param_2 + 0x90);
  return;
}




undefined8 Catch_140aa4110(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnShowCompetingInfo, idUser:%u @%s,%d");
  return 0x140a91bf2;
}




undefined * Catch_140aa4150(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::CreateAthlete, idUser:%u, date:%u @%s,%d");
  return &DAT_140a91ec9;
}




undefined * Catch_140aa41a0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::CreateHonorAthlete, idUser:%u, date:%u @%s,%d");
  return &DAT_140a92295;
}




void Unwind_140aa41f0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa4210(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4230(undefined8 param_1,longlong param_2)

{
  FUN_140a86000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4250(undefined8 param_1,longlong param_2)

{
  FUN_140a87b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4270(undefined8 param_1,longlong param_2)

{
  FUN_140a8acb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4290(undefined8 param_1,longlong param_2)

{
  FUN_140a8d8f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa42b0(undefined8 param_1,longlong param_2)

{
  FUN_140a907a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140aa42d0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa42f0(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4310(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4330(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4350(undefined8 param_1,longlong param_2)

{
  FUN_140a8acd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4370(undefined8 param_1,longlong param_2)

{
  FUN_140a8d910(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4390(undefined8 param_1,longlong param_2)

{
  FUN_140a907d0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140aa43b0(undefined8 param_1,longlong param_2)

{
  FUN_140a8d950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa43d0(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa43f0(undefined8 param_1,longlong param_2)

{
  FUN_140a87be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4410(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4430(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4450(undefined8 param_1,longlong param_2)

{
  FUN_140a8d970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4470(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4490(undefined8 param_1,longlong param_2)

{
  FUN_140a87c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa44b0(undefined8 param_1,longlong param_2)

{
  FUN_140a86080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa44d0(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa44f0(undefined8 param_1,longlong param_2)

{
  FUN_140a8a7f0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140aa4510(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(*(longlong *)(param_2 + 0x48) + 8);
  return;
}




void Unwind_140aa4530(undefined8 param_1,longlong param_2)

{
  FUN_140a8a7f0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140aa4550(undefined8 param_1,longlong param_2)

{
  FUN_140a92700(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4570(undefined8 param_1,longlong param_2)

{
  FUN_140a8d950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4590(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa45b0(undefined8 param_1,longlong param_2)

{
  FUN_140a87be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa45d0(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa45f0(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4610(undefined8 param_1,longlong param_2)

{
  FUN_140a92730(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4630(undefined8 param_1,longlong param_2)

{
  FUN_140a8d970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4650(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4670(undefined8 param_1,longlong param_2)

{
  FUN_140a87c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4690(undefined8 param_1,longlong param_2)

{
  FUN_140a86080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa46b0(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa46d0(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_140aa46f0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnApply, idUser:%u @%s,%d");
  return 0x140a92be0;
}




undefined8 Catch_140aa4730(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::Sort, nSortType:%d @%s,%d");
  return 0x140a92f67;
}




undefined8 Catch_140aa4770(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnDataChange2, nSortType:%d @%s,%d");
  return 0x140a939d7;
}




void Unwind_140aa47b0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa47e0(undefined8 param_1,longlong param_2)

{
  FUN_140a84820((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa4800(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa4820(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa4840(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa4860(undefined8 param_1,longlong param_2)

{
  FUN_140a84820((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa4880(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa48a0(undefined8 param_1,longlong param_2)

{
  FUN_140a84820((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa48c0(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa48e0(undefined8 param_1,longlong param_2)

{
  FUN_140a84820((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa4900(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa4920(undefined8 param_1,longlong param_2)

{
  FUN_140a84820((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa4940(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa4960(undefined8 param_1,longlong param_2)

{
  FUN_140a84820((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa4980(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa49a0(undefined8 param_1,longlong param_2)

{
  FUN_140a84820((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_140aa49c0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::SearchMatch @%s,%d");
  return 0x140a94223;
}




undefined8 Catch_140aa4a00(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::DoAthleteSettlement @%s,%d");
  return 0x140a949af;
}




void Unwind_140aa4a40(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa4a70(undefined8 param_1,longlong param_2)

{
  FUN_140a84820((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140aa4a90(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140aa4ab0(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140aa4ad0(undefined8 param_1,longlong param_2)

{
  FUN_140a877d0(*(undefined8 **)(param_2 + 0xf0));
  return;
}




void Unwind_140aa4af0(undefined8 param_1,longlong param_2)

{
  FUN_140a85fc0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140aa4b10(undefined8 param_1,longlong param_2)

{
  FUN_140a84820((undefined8 *)(param_2 + 0x20));
  return;
}




undefined8 Catch_140aa4b30(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::EndAthletics crash. @%s,%d");
  return 0x140a95c91;
}




void Unwind_140aa4b70(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x440));
  return;
}




void Unwind_140aa4b90(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_140aa4bb0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnAthleteRefuse user:%u. @%s,%d");
  return 0x140a95e7b;
}




void Unwind_140aa4bf0(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_140aa4c10(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_140aa4c30(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::ProcessStatusEndOut, idUser:%u @%s,%d");
  return 0x140a96081;
}




void Unwind_140aa4c70(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa4c90(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4cb0(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4cd0(undefined8 param_1,longlong param_2)

{
  FUN_140a87be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4cf0(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4d10(undefined8 param_1,longlong param_2)

{
  FUN_140a8d950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4d30(undefined8 param_1,longlong param_2)

{
  FUN_140a92700(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4d50(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa4d70(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4d90(undefined8 param_1,longlong param_2)

{
  FUN_140a86080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4db0(undefined8 param_1,longlong param_2)

{
  FUN_140a87c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4dd0(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4df0(undefined8 param_1,longlong param_2)

{
  FUN_140a8d970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4e10(undefined8 param_1,longlong param_2)

{
  FUN_140a92730(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140aa4e30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140aa4e50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140aa4e70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140aa4e90(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140aa4eb0(undefined8 param_1,longlong param_2)

{
  FUN_140a8a7f0(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_140aa4ed0(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(*(longlong *)(param_2 + 0xd0) + 8);
  return;
}




void Unwind_140aa4ef0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa4f10(undefined8 param_1,longlong param_2)

{
  FUN_140a8a7f0(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_140aa4f30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140aa4f60(undefined8 param_1,longlong param_2)

{
  FUN_140a8a7f0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140aa4f80(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(*(longlong *)(param_2 + 0x48) + 8);
  return;
}




undefined * Catch_140aa4fa0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pResUser) @%s,%d");
  return &DAT_140a96bca;
}




undefined * Catch_140aa4fe0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pAthleteRec) @%s,%d");
  return &DAT_140a96d12;
}




undefined8 Catch_140aa5020(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::Create @%s,%d");
  return 0x140a97596;
}




undefined8 Catch_140aa5060(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnBuyAthletePoint, idUser:%u @%s,%d");
  return 0x140a976bb;
}




void Unwind_140aa50a0(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x460));
  return;
}




void Unwind_140aa50c0(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_140aa50e0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnFightTimeOut, idUser:%u @%s,%d");
  return 0x140a978da;
}




void Unwind_140aa5120(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x440));
  return;
}




void Unwind_140aa5140(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_140aa5160(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnDie, idUser:%u @%s,%d");
  return 0x140a97a80;
}




void Unwind_140aa51a0(undefined8 param_1,longlong param_2)

{
  FUN_140a9f5a0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140aa51c0(undefined8 param_1,longlong param_2)

{
  FUN_140a9f990((undefined8 *)(param_2 + 0x90));
  return;
}




undefined8 Catch_140aa51e0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::SendWitnessInfo crash. @%s,%d");
  return 0x140a980fe;
}




void Unwind_140aa5220(undefined8 param_1,longlong param_2)

{
  FUN_140a9f990((undefined8 *)(param_2 + 0x100));
  return;
}




undefined8 Catch_140aa5240(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnWitnessCheer crash. @%s,%d");
  return 0x140a98550;
}




void Unwind_140aa5280(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140aa52a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140aa52c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140aa52e0(undefined8 param_1,longlong param_2)

{
  FUN_140a81bf0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140aa5300(undefined8 param_1,longlong param_2)

{
  FUN_140a9f990((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140aa5320(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnEnterWitness crash. @%s,%d");
  return 0x140a99257;
}




void Unwind_140aa5360(undefined8 param_1,longlong param_2)

{
  FUN_140a9f990((undefined8 *)(param_2 + 0x70));
  return;
}




undefined8 Catch_140aa5380(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnExitWitness crash. @%s,%d");
  return 0x140a9956a;
}




void Unwind_140aa53c0(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(param_2 + 0x90);
  return;
}




void Unwind_140aa53e0(undefined8 param_1,longlong param_2)

{
  FUN_140a8a7f0(param_2 + 0x130);
  return;
}




void Unwind_140aa5400(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(param_2 + 0x138);
  return;
}




void Unwind_140aa5420(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x5f0));
  return;
}




void Unwind_140aa5440(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x1e0));
  return;
}




undefined8 Catch_140aa5460(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::ProcessMatch @%s,%d");
  return 0x140a99bbd;
}




void Unwind_140aa54a0(undefined8 param_1,longlong param_2)

{
  FUN_140a8d930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa54c0(undefined8 param_1,longlong param_2)

{
  FUN_140a8acf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa54e0(undefined8 param_1,longlong param_2)

{
  FUN_140a87bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa5500(undefined8 param_1,longlong param_2)

{
  FUN_140a86040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa5520(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa5540(undefined8 param_1,longlong param_2)

{
  FUN_140a99be0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140aa5560(undefined8 param_1,longlong param_2)

{
  FUN_140a8d930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa5580(undefined8 param_1,longlong param_2)

{
  FUN_140a8acf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa55a0(undefined8 param_1,longlong param_2)

{
  FUN_140a87bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa55c0(undefined8 param_1,longlong param_2)

{
  FUN_140a86040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa55e0(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa5600(undefined8 param_1,longlong param_2)

{
  FUN_140a91250((longlong *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_140aa5620(undefined8 param_1,longlong param_2)

{
  FUN_140a91280((longlong *)(*(longlong *)(param_2 + 0xd0) + 0x48));
  return;
}




void Unwind_140aa5640(undefined8 param_1,longlong param_2)

{
  FUN_140a91280((longlong *)(*(longlong *)(param_2 + 0xd0) + 0x88));
  return;
}




void Unwind_140aa5670(undefined8 param_1,longlong param_2)

{
  FUN_140a91280((longlong *)(*(longlong *)(param_2 + 0xd0) + 200));
  return;
}




void Unwind_140aa56a0(undefined8 param_1,longlong param_2)

{
  FUN_140a91280((longlong *)(*(longlong *)(param_2 + 0xd0) + 0x108));
  return;
}




void Unwind_140aa56d0(undefined8 param_1,longlong param_2)

{
  FUN_140a99d70((longlong *)(*(longlong *)(param_2 + 0xd0) + 0x148));
  return;
}




void Unwind_140aa5700(undefined8 param_1,longlong param_2)

{
  FUN_140a92950((longlong *)(*(longlong *)(param_2 + 0xd0) + 0x188));
  return;
}




void Unwind_140aa5730(undefined8 param_1,longlong param_2)

{
  FUN_140a92950((longlong *)(*(longlong *)(param_2 + 0xd0) + 0x1c8));
  return;
}




void Unwind_140aa5760(undefined8 param_1,longlong param_2)

{
  FUN_140a92980((longlong *)(*(longlong *)(param_2 + 0xd0) + 0x208));
  return;
}




void Unwind_140aa5790(undefined8 param_1,longlong param_2)

{
  FUN_140a87a10((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x248));
  return;
}




void Unwind_140aa57c0(undefined8 param_1,longlong param_2)

{
  FUN_140a87a10((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x278));
  return;
}




void Unwind_140aa57f0(undefined8 param_1,longlong param_2)

{
  FUN_140a87a10((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x2a8));
  return;
}




void Unwind_140aa5820(undefined8 param_1,longlong param_2)

{
  FUN_140a85fe0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5840(undefined8 param_1,longlong param_2)

{
  FUN_140a84a00(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5860(undefined8 param_1,longlong param_2)

{
  FUN_140a85fe0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5880(undefined8 param_1,longlong param_2)

{
  FUN_140a84a00(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa58a0(undefined8 param_1,longlong param_2)

{
  FUN_140a85fe0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa58c0(undefined8 param_1,longlong param_2)

{
  FUN_140a84a00(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa58e0(undefined8 param_1,longlong param_2)

{
  FUN_140a92730(*(longlong **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5900(undefined8 param_1,longlong param_2)

{
  FUN_140a8d970(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5920(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad30(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5940(undefined8 param_1,longlong param_2)

{
  FUN_140a87c00(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5960(undefined8 param_1,longlong param_2)

{
  FUN_140a86080(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5980(undefined8 param_1,longlong param_2)

{
  FUN_140a849e0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa59a0(undefined8 param_1,longlong param_2)

{
  FUN_140a92700(*(longlong **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa59c0(undefined8 param_1,longlong param_2)

{
  FUN_140a8d950(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa59e0(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad10(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5a00(undefined8 param_1,longlong param_2)

{
  FUN_140a87be0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5a20(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5a40(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5a60(undefined8 param_1,longlong param_2)

{
  FUN_140a92700(*(longlong **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5a80(undefined8 param_1,longlong param_2)

{
  FUN_140a8d950(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5aa0(undefined8 param_1,longlong param_2)

{
  FUN_140a8ad10(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5ac0(undefined8 param_1,longlong param_2)

{
  FUN_140a87be0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5ae0(undefined8 param_1,longlong param_2)

{
  FUN_140a86060(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5b00(undefined8 param_1,longlong param_2)

{
  FUN_140a84950(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5b20(undefined8 param_1,longlong param_2)

{
  FUN_140a99be0(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_140aa5b40(undefined8 param_1,longlong param_2)

{
  FUN_140a8d930(*(undefined8 **)(param_2 + 0x30));
  return;
}




void Unwind_140aa5b60(undefined8 param_1,longlong param_2)

{
  FUN_140a8a7f0(*(longlong *)(param_2 + 0xd8) + 0x18);
  return;
}




void Unwind_140aa5b80(undefined8 param_1,longlong param_2)

{
  FUN_140a8a490(*(longlong *)(param_2 + 0xd8) + 8);
  return;
}




void Unwind_140aa5ba0(undefined8 param_1,longlong param_2)

{
  FUN_140a8acf0(*(undefined8 **)(param_2 + 0x30));
  return;
}




void Unwind_140aa5bc0(undefined8 param_1,longlong param_2)

{
  FUN_140a87bc0(*(undefined8 **)(param_2 + 0x30));
  return;
}




void Unwind_140aa5be0(undefined8 param_1,longlong param_2)

{
  FUN_140a86040(*(undefined8 **)(param_2 + 0x30));
  return;
}




void Unwind_140aa5c00(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x30));
  return;
}




void Unwind_140aa5c20(undefined8 param_1,longlong param_2)

{
  FUN_140a907d0(*(longlong **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5c40(undefined8 param_1,longlong param_2)

{
  FUN_140a8d910(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5c60(undefined8 param_1,longlong param_2)

{
  FUN_140a8acd0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5c80(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5ca0(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5cc0(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5ce0(undefined8 param_1,longlong param_2)

{
  FUN_140a907d0(*(longlong **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5d00(undefined8 param_1,longlong param_2)

{
  FUN_140a8d910(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5d20(undefined8 param_1,longlong param_2)

{
  FUN_140a8acd0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5d40(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5d60(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5d80(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5da0(undefined8 param_1,longlong param_2)

{
  FUN_140a907d0(*(longlong **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5dc0(undefined8 param_1,longlong param_2)

{
  FUN_140a8d910(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5de0(undefined8 param_1,longlong param_2)

{
  FUN_140a8acd0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5e00(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5e20(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5e40(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5e60(undefined8 param_1,longlong param_2)

{
  FUN_140a907d0(*(longlong **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5e80(undefined8 param_1,longlong param_2)

{
  FUN_140a8d910(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5ea0(undefined8 param_1,longlong param_2)

{
  FUN_140a8acd0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5ec0(undefined8 param_1,longlong param_2)

{
  FUN_140a87ba0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5ee0(undefined8 param_1,longlong param_2)

{
  FUN_140a86020(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5f00(undefined8 param_1,longlong param_2)

{
  FUN_140a848a0(*(undefined8 **)(param_2 + 0xd8));
  return;
}




void Unwind_140aa5f20(undefined8 param_1,longlong param_2)

{
  FUN_140a907a0(*(longlong **)(param_2 + 0xd0));
  return;
}




void Unwind_140aa5f40(undefined8 param_1,longlong param_2)

{
  FUN_140a8d8f0(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140aa5f60(undefined8 param_1,longlong param_2)

{
  FUN_140a8acb0(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140aa5f80(undefined8 param_1,longlong param_2)

{
  FUN_140a87b80(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140aa5fa0(undefined8 param_1,longlong param_2)

{
  FUN_140a86000(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140aa5fc0(undefined8 param_1,longlong param_2)

{
  FUN_140a84870(*(undefined8 **)(param_2 + 0xd0));
  return;
}




undefined8 Catch_140aa5fe0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnTimer @%s,%d");
  return 0x140a9a9bd;
}




undefined8 Catch_140aa6020(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnInviteRefuse, idUser:%u @%s,%d");
  return 0x140a9ab3a;
}




undefined8 Catch_140aa6060(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnInviteTimeOut, idUser:%u @%s,%d");
  return 0x140a9acb9;
}




void Unwind_140aa60a0(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_140aa60c0(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x490));
  return;
}




undefined8 Catch_140aa60e0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::BeginAthletics, User1:%u, User2 @%s,%d");
  return 0x140a9b6ae;
}




undefined8 Catch_140aa6130(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnEnterMap, iduser:%u @%s,%d");
  return 0x140a9b824;
}




undefined8 Catch_140aa6170(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnEnterCSOrOS, iduser:%u @%s,%d");
  return 0x140a9b9a6;
}




void Unwind_140aa61b0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa61d0(undefined8 param_1,longlong param_2)

{
  FUN_140a848d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa61f0(undefined8 param_1,longlong param_2)

{
  FUN_140a86040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6210(undefined8 param_1,longlong param_2)

{
  FUN_140a87bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6230(undefined8 param_1,longlong param_2)

{
  FUN_140a8acf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6250(undefined8 param_1,longlong param_2)

{
  FUN_140a8d930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6270(undefined8 param_1,longlong param_2)

{
  FUN_140a99be0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6290(undefined8 param_1,longlong param_2)

{
  FUN_140a91250((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_140aa62b0(undefined8 param_1,longlong param_2)

{
  FUN_140a91280((longlong *)(*(longlong *)(param_2 + 0x50) + 0x48));
  return;
}




void Unwind_140aa62d0(undefined8 param_1,longlong param_2)

{
  FUN_140a91280((longlong *)(*(longlong *)(param_2 + 0x50) + 0x88));
  return;
}




void Unwind_140aa62f0(undefined8 param_1,longlong param_2)

{
  FUN_140a91280((longlong *)(*(longlong *)(param_2 + 0x50) + 200));
  return;
}




void Unwind_140aa6310(undefined8 param_1,longlong param_2)

{
  FUN_140a91280((longlong *)(*(longlong *)(param_2 + 0x50) + 0x108));
  return;
}




void Unwind_140aa6330(undefined8 param_1,longlong param_2)

{
  FUN_140a99d70((longlong *)(*(longlong *)(param_2 + 0x50) + 0x148));
  return;
}




void Unwind_140aa6350(undefined8 param_1,longlong param_2)

{
  FUN_140a92950((longlong *)(*(longlong *)(param_2 + 0x50) + 0x188));
  return;
}




void Unwind_140aa6370(undefined8 param_1,longlong param_2)

{
  FUN_140a92950((longlong *)(*(longlong *)(param_2 + 0x50) + 0x1c8));
  return;
}




void Unwind_140aa6390(undefined8 param_1,longlong param_2)

{
  FUN_140a92980((longlong *)(*(longlong *)(param_2 + 0x50) + 0x208));
  return;
}




void Unwind_140aa63b0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa63d0(undefined8 param_1,longlong param_2)

{
  FUN_140a84a00(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140aa63f0(undefined8 param_1,longlong param_2)

{
  FUN_140a85fe0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140aa6410(undefined8 param_1,longlong param_2)

{
  FUN_140a87a10((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x248));
  return;
}




void Unwind_140aa6430(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa6450(undefined8 param_1,longlong param_2)

{
  FUN_140a84a00(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140aa6470(undefined8 param_1,longlong param_2)

{
  FUN_140a85fe0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140aa6490(undefined8 param_1,longlong param_2)

{
  FUN_140a87a10((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x278));
  return;
}




void Unwind_140aa64b0(void)

{
  FUN_140a81b90();
  return;
}




void Unwind_140aa64d0(undefined8 param_1,longlong param_2)

{
  FUN_140a84a00(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140aa64f0(undefined8 param_1,longlong param_2)

{
  FUN_140a85fe0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140aa6510(undefined8 param_1,longlong param_2)

{
  FUN_140a87a10((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x2a8));
  return;
}




void Unwind_140aa6530(void)

{
  DAT_140ab7448 = DAT_140ab7448 & 0xfffffffe;
  return;
}




void Unwind_140aa6550(undefined8 param_1,longlong param_2)

{
  FUN_140a844b0(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140aa6570(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140aa6590(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnLeave, idUser:%u @%s,%d");
  return 0x140a9bee6;
}




undefined8 Catch_140aa65d0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnInviteOK, idUser:%u @%s,%d");
  return 0x140a9c00e;
}




undefined8 Catch_140aa6610(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnFightEndTimeOut user:%u. @%s,%d");
  return 0x140a9c1c6;
}




void Unwind_140aa6650(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_140aa6670(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnLeaveMap, idUser:%u @%s,%d");
  return 0x140a9c37d;
}




undefined8 Catch_140aa66b0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnArenicLogout, user:%u @%s,%d");
  return 0x140a9c513;
}




undefined8 Catch_140aa66f0(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnUserLogout, idUser:%u @%s,%d");
  return 0x140a9c623;
}




undefined8 Catch_140aa6730(void)

{
  log_InlineLogCATCH_ERROR("CArenicSystem::OnDelUser, idUser:%u @%s,%d");
  return 0x140a9cb02;
}




void Unwind_140aa6770(void)

{
  DAT_140ab7458 = DAT_140ab7458 & 0xfffffffe;
  return;
}




void Unwind_140aa6790(void)

{
  DAT_140ab7458 = DAT_140ab7458 & 0xfffffffe;
  return;
}




void Unwind_140aa67b0(void)

{
  DAT_140ab7458 = DAT_140ab7458 & 0xfffffffe;
  return;
}




void Unwind_140aa67d0(void)

{
  DAT_140ab7458 = DAT_140ab7458 & 0xfffffffe;
  return;
}




void Unwind_140aa67f0(void)

{
  DAT_140ab7458 = DAT_140ab7458 & 0xfffffffe;
  return;
}




void Unwind_140aa6810(undefined8 param_1,longlong param_2)

{
  FUN_140a9d060(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140aa6830(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pData) @%s,%d");
  return 0x140a9d405;
}




undefined * Catch_140aa6870(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRec) @%s,%d");
  return &DAT_140a9d4f2;
}




void Unwind_140aa68b0(undefined8 param_1,longlong param_2)

{
  FUN_140a9fee0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa68d0(undefined8 param_1,longlong param_2)

{
  FUN_140a9f730((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa68f0(undefined8 param_1,longlong param_2)

{
  FUN_140a9f2b0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa6910(undefined8 param_1,longlong param_2)

{
  FUN_140a9ef60((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa6930(undefined8 param_1,longlong param_2)

{
  FUN_140a9ec30((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa6950(undefined8 param_1,longlong param_2)

{
  FUN_140a9f990((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa6970(undefined8 param_1,longlong param_2)

{
  FUN_140aa0270((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140aa6990(undefined8 param_1,longlong param_2)

{
  FUN_140aa00e0((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_140aa69b0(void)

{
  log_InlineLogCATCH_ERROR("arenic::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_140a9da09;
}




void Unwind_140aa6a00(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6a20(undefined8 param_1,longlong param_2)

{
  FUN_140a9d5c0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140aa6a40(undefined8 param_1,longlong param_2)

{
  FUN_140a9d5c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140aa6a60(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pProvider) @%s,%d");
  return &DAT_140a9dc5a;
}




void Unwind_140aa6aa0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140aa6ac0(undefined8 param_1,longlong param_2)

{
  FUN_140a9d5c0(*(undefined8 **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140aa6ae0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x140a9dcf3;
}




undefined8 Catch_140aa6b20(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pArenicSystem) @%s,%d");
  return 0x140a9eaf4;
}




void Unwind_140aa6b60(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6b80(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140aa6ba0(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6bc0(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6be0(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140aa6c00(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6c20(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6c40(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140aa6c60(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6c80(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6ca0(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140aa6cc0(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6ce0(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6d00(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140aa6d20(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6d40(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6d60(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140aa6d80(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6da0(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6dc0(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140aa6de0(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6e00(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6e20(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140aa6e40(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6e60(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aa6e80(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140aa6ea0(undefined8 param_1,longlong param_2)

{
  FUN_140a9eb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_140aa6eb8(void)

{
  _unlock(8);
  return;
}




void FUN_140aa6ed1(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aa6f01(void)

{
  _DAT_140ab7420 = 0xffffffff;
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




bool FUN_140aa6f90(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=1398 failed=0 total=1488 */
