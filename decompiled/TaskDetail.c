/* Decompiled by Ghidra 12.1.4 | program: TaskDetail.dll
   image base: 1418b0000 | functions: 758 */


void FUN_1418b1000(void)

{
  log_InlineLogERROR(&DAT_1418c3358);
  return;
}




void FUN_1418b1030(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_1418b1040(void)

{
  return 0;
}




undefined8 FUN_1418b1050(void)

{
  return 0;
}




undefined8 FUN_1418b1060(void)

{
  return 0;
}




undefined8 FUN_1418b1070(void)

{
  return 0;
}




undefined8 * FUN_1418b1080(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1418b10e0(undefined8 *param_1)

{
  *param_1 = taskdetail::CModule::vftable;
  FUN_1418b1a50();
  FUN_1418be9c0(param_1 + 0x20b);
  FUN_1418bdb00(param_1 + 0x189);
  FUN_1418bde50(param_1 + 0x107);
  FUN_1418bd920(param_1 + 0x84);
  FUN_1418bd6b0(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  return;
}




void FUN_1418b1160(void)

{
  return;
}




ulonglong FUN_1418b1170(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




bool FUN_1418b1190(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = FUN_1418b5a70();
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1418c3358);
    return false;
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x30))(*(longlong **)(param_1 + 0x830),0xd);
  if (lVar3 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    return false;
  }
  cVar1 = FUN_1418b43a0((longlong)puVar2,lVar3);
  return cVar1 != '\0';
}




longlong * FUN_1418b1250(longlong param_1,ushort *param_2,ushort param_3)

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
    else if (uVar1 == 0x46e) {
      plVar3 = (longlong *)(param_1 + 0x838);
    }
    else if (uVar1 == 0x46f) {
      plVar3 = (longlong *)(param_1 + 0x1058);
    }
    else {
      if (uVar1 != 3000) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)(param_1 + 0xc48);
    }
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2,*param_2);
    if (cVar2 == '\0') {
      plVar3 = (longlong *)0x0;
    }
    return plVar3;
  }
  return (longlong *)0x0;
}




bool FUN_1418b12e0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_1418b5a70();
  if (puVar2 == (undefined8 *)0x0) {
    return false;
  }
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x46e,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x3ea,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x3eb,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x46f,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),3000,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x18))(*(longlong **)(param_1 + 0x830),0xd,puVar2);
  return cVar1 != '\0';
}




undefined8 FUN_1418b13a0(void)

{
  return 1;
}




undefined8 * FUN_1418b13b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = taskdetail::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_1418bd660((CMsg *)(param_1 + 2));
  FUN_1418bd8d0((CMsg *)(param_1 + 0x84));
  param_1[0x106] = param_2;
  FUN_1418bde00((CMsg *)(param_1 + 0x107));
  FUN_1418bdab0((CMsg *)(param_1 + 0x189));
  FUN_1418be970((CMsg *)(param_1 + 0x20b));
  return param_1;
}




undefined8 * FUN_1418b1440(undefined8 *param_1,uint param_2)

{
  FUN_1418b10e0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined2 FUN_1418b1470(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_1418b1250(param_1,param_3,param_4);
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
  
                    /* 0x14d0  1  ModuleCreate */
  puVar2 = operator_new(0x1468);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = FUN_1418b13b0(puVar2,param_1,param_2);
  }
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1418c3358);
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_1418b12e0((longlong)plVar3);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




exception * FUN_1418b1600(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1418b1640(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001418b1660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1418b1670(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1418b16d0(void)

{
  return;
}




exception * FUN_1418b16e0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1418b1730(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001418b1763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_1418b1770(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_1418b1790(exception *param_1,uint param_2)

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




exception * FUN_1418b17f0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_1418b1850(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001418b188d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1418b18a0(exception *param_1,uint param_2)

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




exception * FUN_1418b1910(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_1418b1970(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001418b19ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1418b19c0(exception *param_1,uint param_2)

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




void FUN_1418b1a50(void)

{
  if (DAT_1418cb360 != (longlong *)0x0) {
    (**(code **)(*DAT_1418cb360 + 0x108))(DAT_1418cb360,1);
  }
  DAT_1418cb360 = (longlong *)0x0;
  return;
}




void * FUN_1418b1a90(longlong *param_1,int param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  IStringManager *pIVar6;
  undefined8 uVar7;
  ulonglong extraout_RAX_01;
  void *pvVar8;
  ulonglong extraout_RAX_02;
  undefined4 local_res10 [2];
  CMsg local_428 [1040];
  
  if ((param_2 == 0) || (param_3 == 0)) {
    log_InlineLogERROR(&DAT_1418c3358);
    pvVar8 = (void *)(extraout_RAX_02 & 0xffffffffffffff00);
  }
  else {
    uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x90))();
    if ((char)uVar4 == '\0') {
      lVar5 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
      if (lVar5 == 0) {
        log_InlineLogERROR(&DAT_1418c3358);
        pvVar8 = (void *)(extraout_RAX & 0xffffffffffffff00);
      }
      else {
        uVar4 = FUN_1418b5b80(param_3);
        bVar2 = FUN_1418b8110(lVar5,(char)uVar4);
        if (bVar2 < 0x14) {
          if ((param_4 != 0) && (uVar4 = FUN_1418b83c0(lVar5), (char)uVar4 != '\0')) {
            if (param_1[1] == 0) {
              log_InlineLogERROR(&DAT_1418c3358);
              return (void *)(extraout_RAX_01 & 0xffffffffffffff00);
            }
            pIVar6 = theInstance();
            puVar1 = *(undefined8 **)param_1[1];
            uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_TASK_DETAIL_HAS_TIME_OVER_TASK");
            uVar4 = (*(code *)*puVar1)(param_1[1],param_2,uVar7,0xff0000,0x7e1);
            return (void *)(uVar4 & 0xffffffffffffff00);
          }
          uVar3 = 0;
          local_res10[0] = 0;
          if (param_4 != 0) {
            uVar3 = (**(code **)(*param_1 + 0xe0))(param_1,param_4,local_res10);
          }
          pvVar8 = FUN_1418bc2b0(lVar5,param_3,uVar3,local_res10[0],param_4);
          if ((char)pvVar8 != '\0') {
            FUN_1418bde00(local_428);
            uVar4 = FUN_1418bde80(local_428,1);
            if ((char)uVar4 == '\0') {
              log_InlineLogERROR(&DAT_1418c3358);
              uVar4 = FUN_1418bde50((undefined8 *)local_428);
              pvVar8 = (void *)(uVar4 & 0xffffffffffffff00);
            }
            else {
              FUN_1418bdf20((longlong)local_428,param_3,0,param_4 * 0x3c);
              (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2,local_428);
              uVar7 = FUN_1418bde50((undefined8 *)local_428);
              pvVar8 = (void *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
            }
          }
        }
        else if (param_1[1] == 0) {
          log_InlineLogERROR(&DAT_1418c3358);
          pvVar8 = (void *)(extraout_RAX_00 & 0xffffffffffffff00);
        }
        else {
          pIVar6 = theInstance();
          puVar1 = *(undefined8 **)param_1[1];
          uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_TASK_DETAIL_NUM_MAX");
          uVar4 = (*(code *)*puVar1)(param_1[1],param_2,uVar7,0xff0000,0x7e1);
          pvVar8 = (void *)(uVar4 & 0xffffffffffffff00);
        }
      }
    }
    else {
      pvVar8 = (void *)(uVar4 & 0xffffffffffffff00);
    }
  }
  return pvVar8;
}




bool FUN_1418b1d60(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((((int)param_2 != 0) && (param_3 != 0)) && (lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0), lVar1 != 0)) {
    uVar2 = FUN_1418ba310(lVar1,param_3);
    return (char)uVar2 != '\0';
  }
  log_InlineLogERROR(&DAT_1418c3358);
  return false;
}




ulonglong FUN_1418b1de0(undefined8 param_1,int param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_1418b5b80(param_2);
  return uVar1;
}




ulonglong FUN_1418b1e30(undefined8 param_1,int param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_1418b5ba0(param_2);
  return uVar1;
}




undefined1 FUN_1418b1e80(longlong *param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  CMsg local_418 [1040];
  
  if ((param_2 == 0) || (param_3 == 0)) {
    log_InlineLogERROR(&DAT_1418c3358);
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x90))();
    if (cVar1 == '\0') {
      uVar4 = FUN_1418b5b80(param_3);
      if ((char)uVar4 == '\0') {
        lVar5 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
        if (lVar5 == 0) {
          log_InlineLogERROR(&DAT_1418c3358);
          uVar2 = 0;
        }
        else {
          cVar1 = FUN_1418ba0c0(lVar5,param_3);
          uVar2 = 0;
          if (cVar1 != '\0') {
            FUN_1418bde00(local_418);
            uVar4 = FUN_1418bde80(local_418,2);
            if ((char)uVar4 == '\0') {
              log_InlineLogERROR(&DAT_1418c3358);
              FUN_1418bde50((undefined8 *)local_418);
              uVar2 = 0;
            }
            else {
              uVar3 = FUN_1418bb680(lVar5,param_3);
              FUN_1418bdf20((longlong)local_418,param_3,0,uVar3);
              if (param_1[1] == 0) {
                log_InlineLogERROR(&DAT_1418c3358);
                FUN_1418bde50((undefined8 *)local_418);
                uVar2 = 0;
              }
              else {
                (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2,local_418);
                FUN_1418bde50((undefined8 *)local_418);
                uVar2 = 1;
              }
            }
          }
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}




undefined4 FUN_1418b2070(longlong *param_1,undefined8 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((((int)param_2 == 0) || (param_3 == 0)) || (lVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0), lVar2 == 0)) {
    log_InlineLogERROR(&DAT_1418c3358);
  }
  else if (param_4 - 1U < 7) {
    uVar1 = FUN_1418ba380(lVar2,param_3,param_4);
    return uVar1;
  }
  return 0;
}




ulonglong FUN_1418b2110(longlong *param_1,ulonglong param_2,uint param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong extraout_RAX;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong extraout_RAX_00;
  CMsg local_448 [1040];
  
  if (((int)param_2 == 0) || (param_3 == 0)) {
    log_InlineLogERROR(&DAT_1418c3358);
    uVar9 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    lVar8 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    if (lVar8 == 0) {
      log_InlineLogERROR(&DAT_1418c3358);
      uVar9 = extraout_RAX & 0xffffffffffffff00;
    }
    else if (param_4 - 1U < 7) {
      uVar9 = FUN_1418ba530(lVar8,param_3,param_4,param_5);
      if ((char)uVar9 != '\0') {
        FUN_1418be970(local_448);
        uVar1 = FUN_1418ba380(lVar8,param_3,7);
        uVar2 = FUN_1418ba380(lVar8,param_3,6);
        uVar3 = FUN_1418ba380(lVar8,param_3,5);
        uVar4 = FUN_1418ba380(lVar8,param_3,4);
        uVar5 = FUN_1418ba380(lVar8,param_3,3);
        uVar6 = FUN_1418ba380(lVar8,param_3,2);
        uVar7 = FUN_1418ba380(lVar8,param_3,1);
        FUN_1418be9f0(local_448,0,param_3,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
        (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2 & 0xffffffff,local_448);
        uVar10 = FUN_1418be9c0((undefined8 *)local_448);
        uVar9 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      }
    }
    else {
      uVar9 = (ulonglong)(uint3)(param_4 - 1U >> 8) << 8;
    }
  }
  return uVar9;
}




ulonglong FUN_1418b2300(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong extraout_RAX;
  
  if ((((int)param_2 != 0) && (param_3 != 0)) && (lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0), lVar1 != 0)) {
    uVar2 = FUN_1418ba710(lVar1,param_3);
    return uVar2;
  }
  log_InlineLogERROR(&DAT_1418c3358);
  return extraout_RAX & 0xffffffffffffff00;
}




ulonglong FUN_1418b2380(longlong *param_1,undefined8 param_2,uint param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong extraout_RAX;
  
  if ((((int)param_2 != 0) && (param_3 != 0)) && (lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0), lVar1 != 0)) {
    uVar2 = FUN_1418ba840(lVar1,param_3,param_4);
    return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  log_InlineLogERROR(&DAT_1418c3358);
  return extraout_RAX & 0xffffffffffffff00;
}




undefined4 FUN_1418b2410(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (((int)param_2 != 0) && (param_3 != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    if (lVar2 == 0) {
      log_InlineLogERROR(&DAT_1418c3358);
      return 0;
    }
    uVar1 = FUN_1418bac60(lVar2,param_3);
    return uVar1;
  }
  log_InlineLogERROR("CTaskDetailMgr::GetMaxAccumulateTimes error , user_id[%u], task_id[%u]");
  return 0;
}




ulonglong FUN_1418b2490(longlong *param_1,undefined8 param_2,uint param_3,int param_4)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  undefined8 uVar2;
  ulonglong extraout_RAX_00;
  
  if (((int)param_2 != 0) && (param_3 != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    if (lVar1 == 0) {
      log_InlineLogERROR(&DAT_1418c3358);
      return extraout_RAX & 0xffffffffffffff00;
    }
    uVar2 = FUN_1418bad40(lVar1,param_3,param_4);
    return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  log_InlineLogERROR("CTaskDetailMgr::SetMaxAccumulateTimes error , user_id[%u], task_id[%u]");
  return extraout_RAX_00 & 0xffffffffffffff00;
}




ulonglong FUN_1418b2530(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong extraout_RAX;
  
  if ((((int)param_2 != 0) && (param_3 != 0)) && (lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0), lVar1 != 0)) {
    uVar2 = FUN_1418ba9b0(lVar1,param_3);
    return uVar2;
  }
  log_InlineLogERROR(&DAT_1418c3358);
  return extraout_RAX & 0xffffffffffff0000;
}




ulonglong FUN_1418b25b0(longlong *param_1,undefined4 param_2,uint param_3,short param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  IStringManager *pIVar7;
  undefined8 uVar8;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x90))();
  if ((char)uVar5 != '\0') {
    return uVar5 & 0xffffffffffffff00;
  }
  lVar6 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
  if (lVar6 == 0) {
    return 0;
  }
  uVar5 = FUN_1418ba310(lVar6,param_3);
  if ((char)uVar5 == '\0') {
    return uVar5;
  }
  uVar5 = FUN_1418ba9b0(lVar6,param_3);
  if ((short)uVar5 == param_4) {
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
  uVar5 = FUN_1418ba9b0(lVar6,param_3);
  if (((short)uVar5 == 0) || (param_4 != 0)) {
    if ((param_4 == 5) || (param_4 == 3)) goto LAB_1418b27a4;
  }
  else {
    bVar2 = FUN_1418b8110(lVar6,'\0');
    if (0x13 < bVar2) {
      pIVar7 = theInstance();
      puVar1 = *(undefined8 **)param_1[1];
      uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_TASK_DETAIL_NUM_MAX");
      uVar5 = (*(code *)*puVar1)(param_1[1],param_2,uVar8,0xff0000,0x7e1);
      return uVar5 & 0xffffffffffffff00;
    }
  }
  cVar3 = FUN_1418bb380(lVar6,param_3);
  if (cVar3 == '\0') {
    uVar5 = FUN_1418baaf0(lVar6,param_3,param_4);
    if ((char)uVar5 != '\0') {
      FUN_1418bde00(local_828);
      if (param_4 == 0) {
        FUN_1418bde80(local_828,1);
        uVar4 = FUN_1418bb680(lVar6,param_3);
        FUN_1418bdf20((longlong)local_828,param_3,0,uVar4);
        (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2,local_828);
      }
      else {
        uVar5 = FUN_1418ba710(lVar6,param_3);
        if ((char)uVar5 == '\0') {
          FUN_1418bde80(local_828,4);
        }
        else {
          FUN_1418bde80(local_828,5);
        }
        uVar4 = FUN_1418bb680(lVar6,param_3);
        uVar5 = FUN_1418ba9b0(lVar6,param_3);
        FUN_1418bdf20((longlong)local_828,param_3,(short)uVar5,uVar4);
        (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2,local_828);
      }
      uVar8 = FUN_1418bde50((undefined8 *)local_828);
      return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    }
    return uVar5;
  }
LAB_1418b27a4:
  uVar5 = FUN_1418baaf0(lVar6,param_3,5);
  if ((char)uVar5 != '\0') {
    FUN_1418bde00(local_418);
    FUN_1418bde80(local_418,8);
    uVar4 = FUN_1418bb680(lVar6,param_3);
    FUN_1418bdf20((longlong)local_418,param_3,5,uVar4);
    (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2,local_418);
    uVar5 = FUN_1418bde50((undefined8 *)local_418);
  }
  return uVar5 & 0xffffffffffffff00;
}




undefined4 FUN_1418b2850(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((((int)param_2 != 0) && (param_3 != 0)) && (lVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0), lVar2 != 0)) {
    uVar1 = FUN_1418bae70(lVar2,param_3);
    return uVar1;
  }
  log_InlineLogERROR(&DAT_1418c3358);
  return 0;
}




undefined4 FUN_1418b28d0(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((((int)param_2 != 0) && (param_3 != 0)) && (lVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0), lVar2 != 0)) {
    uVar1 = FUN_1418bb110(lVar2,param_3);
    return uVar1;
  }
  log_InlineLogERROR(&DAT_1418c3358);
  return 0;
}




ulonglong FUN_1418b2950(longlong *param_1,ulonglong param_2,uint param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong extraout_RAX_00;
  CMsg local_418 [1040];
  
  if (((int)param_2 == 0) || (param_3 == 0)) {
    log_InlineLogERROR(&DAT_1418c3358);
    uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    if (lVar2 == 0) {
      log_InlineLogERROR(&DAT_1418c3358);
      uVar3 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      FUN_1418bafa0(lVar2,param_3,param_4);
      FUN_1418bb240(lVar2,param_3,param_5);
      FUN_1418bde00(local_418);
      uVar3 = FUN_1418bde80(local_418,9);
      if ((char)uVar3 == '\0') {
        log_InlineLogERROR(&DAT_1418c3358);
      }
      else {
        uVar1 = FUN_1418bb680(lVar2,param_3);
        FUN_1418bdf20((longlong)local_418,param_3,0,uVar1);
        (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2 & 0xffffffff,local_418);
      }
      uVar4 = FUN_1418bde50((undefined8 *)local_418);
      uVar3 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
  return uVar3;
}




ulonglong FUN_1418b2ad0(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong extraout_RAX;
  
  if ((((int)param_2 != 0) && (param_3 != 0)) && (lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0), lVar1 != 0)) {
    uVar2 = FUN_1418bb380(lVar1,param_3);
    return uVar2;
  }
  log_InlineLogERROR(&DAT_1418c3358);
  return extraout_RAX & 0xffffffffffffff00;
}




ulonglong FUN_1418b2b50(longlong *param_1,undefined8 param_2)

{
  ulonglong extraout_RAX;
  longlong lVar1;
  ulonglong extraout_RAX_00;
  ulonglong uVar2;
  
  if ((int)param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    return extraout_RAX & 0xffffffffffffff00;
  }
  lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1418b8d30(lVar1);
  return uVar2;
}




void * FUN_1418b2be0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  void *pvVar2;
  
  if ((int)param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    in_RAX = 0;
    if (lVar1 != 0) {
      pvVar2 = FUN_1418b8ee0(lVar1,param_3);
      return pvVar2;
    }
  }
  return (void *)(in_RAX & 0xffffffffffffff00);
}




bool FUN_1418b2c20(longlong *param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  
  if ((int)param_2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    if (lVar2 != 0) {
      bVar1 = FUN_1418b8110(lVar2,param_3);
      return 0x13 < bVar1;
    }
    log_InlineLogERROR(&DAT_1418c3358);
  }
  return false;
}




ulonglong FUN_1418b2c90(longlong *param_1,undefined8 param_2,int param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  
  if (((int)param_2 != 0) && (param_3 != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    if (lVar1 != 0) {
      uVar2 = FUN_1418b5bc0(lVar1,param_3);
      return uVar2;
    }
    log_InlineLogERROR(&DAT_1418c3358);
    in_RAX = extraout_RAX;
  }
  return in_RAX & 0xffffffffffffff00;
}




int FUN_1418b2d00(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((int)param_2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    if (lVar2 != 0) {
      iVar1 = FUN_1418b8270(lVar2);
      return iVar1;
    }
    log_InlineLogERROR(&DAT_1418c3358);
  }
  return -1;
}




undefined1 * FUN_1418b2d60(longlong *param_1,undefined8 param_2,uint param_3,char param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong extraout_RAX;
  undefined1 *puVar2;
  
  if (((int)param_2 != 0) && (param_3 != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    if (lVar1 != 0) {
      puVar2 = FUN_1418bc620(lVar1,param_3,param_4);
      return puVar2;
    }
    log_InlineLogERROR(&DAT_1418c3358);
    in_RAX = extraout_RAX;
  }
  return (undefined1 *)(in_RAX & 0xffffffffffffff00);
}




ulonglong FUN_1418b2de0(longlong *param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  
  if ((int)param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    if (lVar1 != 0) {
      uVar2 = FUN_1418bb3d0(lVar1);
      return uVar2;
    }
    log_InlineLogERROR(&DAT_1418c3358);
    in_RAX = extraout_RAX;
  }
  return in_RAX & 0xffffffffffffff00;
}




bool FUN_1418b2e40(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((int)param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    if (lVar1 != 0) {
      uVar2 = FUN_1418b83c0(lVar1);
      return (char)uVar2 != '\0';
    }
    log_InlineLogERROR(&DAT_1418c3358);
  }
  return false;
}




ulonglong FUN_1418b2ea0(longlong *param_1,undefined8 param_2,uint param_3,void *param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong extraout_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 in_register_00000084;
  
  uVar3 = (ulonglong)param_3;
  if (((int)param_2 != 0) && (0 < (int)param_3)) {
    lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,CONCAT71((int7)(CONCAT44(in_register_00000084,param_3) >> 8),1));
    if (lVar1 == 0) {
      log_InlineLogERROR(&DAT_1418c3358);
      return extraout_RAX & 0xffffffffffffff00;
    }
    lVar2 = lVar1;
    if (0 < (int)param_3) {
      do {
        lVar2 = FUN_1418bcb40(lVar1,param_4);
        param_4 = (void *)((longlong)param_4 + 0x40);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_1418b2f60(longlong *param_1,int param_2,int param_3,longlong param_4)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  longlong lVar4;
  short *psVar5;
  
  if ((param_2 != 0) && (0 < param_3)) {
    if (0x14 < param_3) {
      param_3 = 0x14;
      log_InlineLogERROR("CTaskDetailMgr::LoadOSTaskInfo max than CURRENT_TASK_MAX, user_id[%u]");
    }
    in_RAX = (**(code **)(*(longlong *)param_1[1] + 0x90))((longlong *)param_1[1],param_2);
    if ((char)in_RAX == '\0') {
      uVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
      if (uVar2 == 0) {
        log_InlineLogERROR(&DAT_1418c3358);
        return extraout_RAX & 0xffffffffffffff00;
      }
      lVar4 = (longlong)param_3;
      uVar3 = uVar2;
      if (0 < param_3) {
        psVar5 = (short *)(param_4 + 0xc);
        do {
          uVar1 = *(uint *)(psVar5 + -2);
          if (((uVar1 != 0) && (uVar3 = FUN_1418b5b80(uVar1), (char)uVar3 != '\0')) && (uVar3 = FUN_1418ba310(uVar2,uVar1), (char)uVar3 != '\0')) {
            FUN_1418baaf0(uVar2,uVar1,*psVar5);
            FUN_1418ba840(uVar2,uVar1,(char)psVar5[1]);
            FUN_1418ba530(uVar2,uVar1,1,*(undefined4 *)(psVar5 + 2));
            FUN_1418ba530(uVar2,uVar1,2,*(undefined4 *)(psVar5 + 4));
            FUN_1418ba530(uVar2,uVar1,3,*(undefined4 *)(psVar5 + 6));
            FUN_1418ba530(uVar2,uVar1,4,*(undefined4 *)(psVar5 + 8));
            FUN_1418ba530(uVar2,uVar1,5,*(undefined4 *)(psVar5 + 10));
            FUN_1418ba530(uVar2,uVar1,6,*(undefined4 *)(psVar5 + 0xc));
            FUN_1418ba530(uVar2,uVar1,7,*(undefined4 *)(psVar5 + 0xe));
            FUN_1418bafa0(uVar2,uVar1,*(int *)(psVar5 + 0x10));
            FUN_1418bb240(uVar2,uVar1,*(undefined4 *)(psVar5 + 0x12));
            FUN_1418bb6d0(uVar2,uVar1,*(int *)(psVar5 + 0x14));
            uVar3 = FUN_1418bbaa0(uVar2,uVar1,*(undefined4 *)(psVar5 + 0x16));
          }
          psVar5 = psVar5 + 0x20;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




int FUN_1418b3160(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  tm *ptVar6;
  __time64_t local_res20;
  __time64_t local_18 [2];
  
  local_res20 = 0;
  local_18[0] = 0;
  _time64(&local_res20);
  local_18[0] = param_2 * 0x3c + local_res20;
  ptVar6 = _localtime64(local_18);
  if (ptVar6 != (tm *)0x0) {
    iVar1 = ptVar6->tm_year;
    iVar2 = ptVar6->tm_mon;
    iVar3 = ptVar6->tm_mday;
    iVar4 = ptVar6->tm_hour;
    iVar5 = ptVar6->tm_min;
    *param_3 = ptVar6->tm_sec;
    return ((((iVar1 % 100) * 100 + 1 + iVar2) * 100 + iVar3) * 100 + iVar4) * 100 + iVar5;
  }
  return 0;
}




undefined4 FUN_1418b3210(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((((int)param_2 != 0) && (param_3 != 0)) && (lVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0), lVar2 != 0)) {
    uVar1 = FUN_1418bb840(lVar2,param_3);
    return uVar1;
  }
  log_InlineLogERROR(&DAT_1418c3358);
  return 0;
}




ulonglong FUN_1418b3290(longlong *param_1,undefined8 param_2,uint param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong extraout_RAX;
  
  if ((((int)param_2 != 0) && (param_3 != 0)) && (lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0), lVar1 != 0)) {
    uVar2 = FUN_1418bb6d0(lVar1,param_3,param_4);
    return uVar2;
  }
  log_InlineLogERROR(&DAT_1418c3358);
  return extraout_RAX & 0xffffffffffffff00;
}




ulonglong FUN_1418b3320(longlong *param_1,undefined8 param_2,uint param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  
  if (((int)param_2 != 0) && (0 < (int)param_3)) {
    lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
    if (lVar1 != 0) {
      uVar2 = FUN_1418bd190(lVar1,param_3);
      return uVar2;
    }
    log_InlineLogERROR(&DAT_1418c3358);
    in_RAX = extraout_RAX;
  }
  return in_RAX & 0xffffffffffffff00;
}




bool FUN_1418b3390(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1418b33d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1418b34f0(longlong param_1,longlong *param_2)

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




longlong FUN_1418b35e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418b3602;
  }
  lVar2 = *plVar1;
LAB_1418b3602:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1418b3620(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418b3644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1418b36c0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418b36f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1418b3820(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1418c9e58);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_1418b38b0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1418c9e58);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_1418b3920(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1418b3960(longlong param_1,longlong param_2)

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




void FUN_1418b39c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1418b39e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418b3a02;
  }
  lVar2 = *plVar1;
LAB_1418b3a02:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1418b3a20(longlong *param_1)

{
  FUN_1418b3620(param_1);
  return param_1;
}




longlong * FUN_1418b3a80(longlong *param_1)

{
  FUN_1418b36c0(param_1);
  return param_1;
}




longlong * FUN_1418b3ac0(longlong *param_1)

{
  FUN_1418b36c0(param_1);
  return param_1;
}




longlong * FUN_1418b3ae0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1418b3620(param_1);
  return param_2;
}




void FUN_1418b3b10(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1418c9e58);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_1418b3b90(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1418c9e58);
  }
  operator_new(param_2 * 8);
  return;
}




longlong FUN_1418b3c00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418b3c22;
  }
  lVar2 = *plVar1;
LAB_1418b3c22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1418b3c40(longlong *param_1)

{
  FUN_1418b3620(param_1);
  return param_1;
}




void FUN_1418b3c60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418b3c80(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1418b3c80(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 * FUN_1418b3ce0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_1418b3d20(void)

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




undefined8 * FUN_1418b3d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1418b3e00(undefined8 *param_1)

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




void FUN_1418b3e40(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1418b3c80(param_1,(longlong *)plVar2[2]);
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




void FUN_1418b3ec0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418b3ee0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_1418b3f20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1418b3d20();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1418b3f60(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1418c9ee0);
  }
  plVar5 = FUN_1418b3d80(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




exception * FUN_1418b42a0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_1418b42f0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




undefined8 * FUN_1418b4350(undefined8 *param_1)

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




undefined1 FUN_1418b43a0(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  FUN_1418b3e40(param_1 + 0x10);
  return 1;
}




void FUN_1418b4430(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418b4450(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_1418b44e0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1418b463d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1418b466c;
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
      goto LAB_1418b463d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1418b3f60(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1418b466c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1418b4690(undefined8 *param_1)

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




undefined8 * FUN_1418b46e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1418c9f70);
  }
  FUN_1418b3620(param_3);
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
        goto LAB_1418b48cc;
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
LAB_1418b48cc:
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
            FUN_1418b3960((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1418b34f0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1418b3960((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1418b34f0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1418b3960((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1418b34f0((longlong)param_1,plVar7);
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




exception * FUN_1418b4aa0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




longlong * FUN_1418b4b00(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_1418b4bd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1418b4bf0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_1418b3f60(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_1418b3f60(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_1418b3f60(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_1418b3f60(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_1418b3f60(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_1418b3f60(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_1418b3f60(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_1418b44e0(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




longlong * FUN_1418b4f10(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1418b3e40((longlong)param_1);
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
    FUN_1418b46e0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1418b50c0(undefined8 *param_1)

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




ulonglong FUN_1418b5110(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  longlong *plVar2;
  longlong *extraout_RAX_00;
  longlong lVar3;
  undefined8 *puVar4;
  longlong **pplVar5;
  uint *puVar6;
  uint local_res10 [2];
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28 [2];
  
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    puVar6 = local_res10;
    pplVar5 = &local_38;
    plVar2 = FUN_1418b4b00((longlong *)(param_1 + 0x10),(longlong *)pplVar5,puVar6);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)(param_1 + 0x10))) {
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
        FUN_1418bc0b0(*(undefined8 **)(lStack_30 + 0x20),pplVar5,puVar6,param_4);
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
      puVar4 = FUN_1418b46e0((undefined8 *)(param_1 + 0x10),local_28,(longlong *)&local_38);
      uVar1 = CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
    }
  }
  return uVar1;
}




ulonglong FUN_1418b5290(longlong param_1,uint param_2,int *param_3,longlong param_4)

{
  ulonglong in_RAX;
  longlong *plVar1;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *extraout_RAX_01;
  undefined8 uVar2;
  longlong lVar3;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_res10[0] = param_2;
  plVar1 = FUN_1418b4b00((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
  lVar3 = *(longlong *)(param_1 + 0x40);
  if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
    plVar1 = extraout_RAX;
  }
  if (local_20 != lVar3) {
    if (local_28 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = 0;
      plVar1 = extraout_RAX_00;
    }
    else {
      lVar3 = *local_28;
    }
    if (local_20 == *(longlong *)(lVar3 + 0x30)) {
      _invalid_parameter_noinfo();
      plVar1 = extraout_RAX_01;
    }
    if (*(longlong *)(local_20 + 0x20) != 0) {
      uVar2 = FUN_1418b9070(*(longlong *)(local_20 + 0x20),param_3,param_4);
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}




undefined8 * FUN_1418b5360(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_1418b4bf0(param_1,local_28,(longlong *)&local_38,local_48);
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




void FUN_1418b5460(longlong *param_1)

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
  FUN_1418b4f10(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1418b54d0(undefined8 *param_1)

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




undefined8 * FUN_1418b5520(longlong param_1,uint param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint local_res10 [2];
  longlong *local_38;
  longlong local_30;
  
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    return (undefined8 *)0x0;
  }
  FUN_1418b4b00((longlong *)(param_1 + 0x10),(longlong *)&local_38,local_res10);
  lVar3 = *(longlong *)(param_1 + 0x40);
  if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  if (local_30 == lVar3) {
    puVar1 = FUN_1418bd030(param_2,*(longlong *)(param_1 + 8),param_3);
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_1418c3358);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar2 = FUN_1418b5360((longlong *)(param_1 + 0x10),local_res10);
      *puVar2 = puVar1;
    }
  }
  else {
    if (local_38 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = 0;
    }
    else {
      lVar3 = *local_38;
    }
    if (local_30 == *(longlong *)(lVar3 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar1 = *(undefined8 **)(local_30 + 0x20);
  }
  return puVar1;
}




void FUN_1418b5660(longlong *param_1)

{
  FUN_1418b5460(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418b5690(undefined8 *param_1)

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
  lVar2 = FUN_1418b3d20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1418b5710(longlong *param_1)

{
  FUN_1418b5460(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418b5740(undefined8 *param_1,char *param_2,char *param_3,char *param_4)

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
  
  *param_1 = taskdetail::CTaskDetailMgr::vftable;
  plVar5 = *(longlong **)param_1[8];
  plVar2 = (longlong *)param_1[2];
  local_38 = plVar2;
  plStack_30 = plVar5;
  while( true ) {
    plVar3 = (longlong *)param_1[8];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[2])) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar3) break;
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
    if ((undefined8 *)plVar5[4] == (undefined8 *)0x0) {
      param_4 = "f:\\version\\cqserver-78.0.11-1204\\modules\\taskdetail\\src\\taskdetailmgr.cpp";
      param_3 = "pTaskList";
      param_2 = "IF_OK";
      log_InlineLogERROR(&DAT_1418c3358);
    }
    else {
      FUN_1418bc0b0((undefined8 *)plVar5[4],param_2,param_3,param_4);
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
  plVar5 = param_1 + 2;
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[8] + 8) + 0x29);
  plVar2 = *(longlong **)(param_1[8] + 8);
  while (cVar1 == '\0') {
    FUN_1418b3c80(plVar5,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x29);
  }
  *(undefined8 *)(param_1[8] + 8) = param_1[8];
  param_1[9] = 0;
  *(undefined8 *)param_1[8] = param_1[8];
  *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
  plStack_30 = (longlong *)param_1[8];
  local_38 = (longlong *)*plVar5;
  uStack_20 = *plStack_30;
  local_28 = local_38;
  FUN_1418b4f10(plVar5,local_18,(longlong *)&local_28,(longlong *)&local_38);
  operator_delete((void *)param_1[8]);
  param_1[8] = 0;
  param_1[9] = 0;
  operator_delete((void *)*plVar5);
  return;
}




undefined8 FUN_1418b5970(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 * FUN_1418b5980(undefined8 *param_1)

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
  lVar2 = FUN_1418b3d20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1418b5a00(undefined8 *param_1)

{
  *param_1 = taskdetail::CTaskDetailMgr::vftable;
  param_1[1] = 0;
  FUN_1418b5980(param_1 + 2);
  return param_1;
}




undefined8 * FUN_1418b5a40(undefined8 *param_1,char *param_2,char *param_3,char *param_4)

{
  FUN_1418b5740(param_1,param_2,param_3,param_4);
  if (((ulonglong)param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_1418b5a70(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_1418cb360;
  if (DAT_1418cb360 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x50);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      *puVar1 = taskdetail::CTaskDetailMgr::vftable;
      puVar1[1] = 0;
      FUN_1418b5980(puVar1 + 2);
    }
    DAT_1418cb360 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_1418c3358);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}




void * FUN_1418b5b40(void *param_1)

{
  memset(param_1,0,0x40);
  return param_1;
}




ulonglong FUN_1418b5b80(int param_1)

{
  ulonglong in_RAX;
  
  if (param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  return (ulonglong)CONCAT31((int3)(param_1 - 0x7531U >> 8),param_1 - 0x7531U < 9999);
}




ulonglong FUN_1418b5ba0(int param_1)

{
  ulonglong in_RAX;
  
  if (param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  return (ulonglong)CONCAT31((int3)(param_1 - 6000U >> 8),param_1 - 6000U < 0xbb9);
}




ulonglong FUN_1418b5bc0(longlong param_1,int param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 uVar2;
  CMsg local_418 [1040];
  
  if (param_2 == 0) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    FUN_1418bdab0(local_418);
    uVar2 = FUN_1418bdb30(local_418,4,param_2,0,0);
    if ((char)uVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 8))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),local_418);
    }
    uVar2 = FUN_1418bdb00((undefined8 *)local_418);
    uVar1 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  return uVar1;
}




ulonglong FUN_1418b5c40(undefined8 param_1,uint param_2,int param_3)

{
  ulonglong in_RAX;
  __time64_t _Var1;
  tm *_Tm;
  ulonglong extraout_RAX;
  __time64_t local_res20;
  tm local_38;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_2 != 0) {
    local_38.tm_isdst = 0;
    local_38.tm_min = (int)(byte)((char)param_2 + (char)((ulonglong)param_2 / 100) * -100);
    local_38.tm_hour = (param_2 % 10000) / 100;
    local_38.tm_mday = (param_2 % 1000000) / 10000;
    local_38.tm_mon = (param_2 % 100000000) / 1000000 - 1;
    local_38.tm_year = (ushort)((short)(param_2 / 100000000) + 2000) - 0x76c;
    local_38.tm_sec = param_3;
    _Var1 = _mktime64(&local_38);
    local_res20 = 0;
    _time64(&local_res20);
    _Tm = _localtime64(&local_res20);
    if (_Tm == (tm *)0x0) {
      log_InlineLogERROR(&DAT_1418c3358);
      in_RAX = extraout_RAX;
    }
    else {
      in_RAX = _mktime64(_Tm);
      if (_Var1 < (longlong)in_RAX) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_1418b5db0(undefined8 param_1,uint param_2,int param_3)

{
  __time64_t _Var1;
  ulonglong uVar2;
  __time64_t local_res20;
  tm local_38;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = 0;
  local_38.tm_isdst = 0;
  local_38.tm_min = (int)(byte)((char)param_2 + (char)((ulonglong)param_2 / 100) * -100);
  local_38.tm_hour = (param_2 % 10000) / 100;
  local_38.tm_mday = (param_2 % 1000000) / 10000;
  local_38.tm_mon = (param_2 % 100000000) / 1000000 - 1;
  local_38.tm_year = (ushort)((short)(param_2 / 100000000) + 2000) - 0x76c;
  local_38.tm_sec = param_3;
  _Var1 = _mktime64(&local_38);
  local_res20 = 0;
  _time64(&local_res20);
  if (0 < _Var1 - local_res20) {
    uVar2 = _Var1 - local_res20 & 0xffffffff;
  }
  return uVar2;
}




bool FUN_1418b5ed0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1418b5f10(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1418b6020(longlong param_1,longlong *param_2)

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




void FUN_1418b60a0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418b60c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




bool FUN_1418b6170(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_1418b62b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418b62d2;
  }
  lVar2 = *plVar1;
LAB_1418b62d2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1418b6300(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418b6332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1418b63e0(longlong param_1,longlong *param_2)

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




void FUN_1418b6590(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1418c9e58);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_1418b6620(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1418c9e58);
  }
  operator_new(param_1 * 0x28);
  return;
}




undefined * FUN_1418b66d0(void)

{
  if ((DAT_1418cb370 & 1) == 0) {
    DAT_1418cb370 = DAT_1418cb370 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1418cb368,"CTaskList");
    atexit((_func_5014 *)&LAB_1418c27d0);
  }
  return &DAT_1418cb368;
}




void FUN_1418b6730(__uint64 param_1)

{
  if ((DAT_1418cb370 & 1) == 0) {
    DAT_1418cb370 = DAT_1418cb370 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1418cb368,"CTaskList");
    atexit((_func_5014 *)&LAB_1418c27d0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001418b6785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1418cb368,param_1);
  return;
}




void FUN_1418b6790(void *param_1)

{
  if ((DAT_1418cb370 & 1) == 0) {
    DAT_1418cb370 = DAT_1418cb370 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1418cb368,"CTaskList");
    atexit((_func_5014 *)&LAB_1418c27d0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001418b67e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1418cb368,param_1);
  return;
}




void FUN_1418b67f0(void *param_1)

{
  if ((DAT_1418cb370 & 1) == 0) {
    DAT_1418cb370 = DAT_1418cb370 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1418cb368,"CTaskList");
    atexit((_func_5014 *)&LAB_1418c27d0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001418b6845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1418cb368,param_1);
  return;
}




undefined8 FUN_1418b6850(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}




longlong * FUN_1418b6860(longlong *param_1)

{
  FUN_1418b60a0(param_1);
  return param_1;
}




bool FUN_1418b6880(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1418b68d0(longlong param_1,longlong param_2)

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




void FUN_1418b6930(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1418b6950(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418b6972;
  }
  lVar2 = *plVar1;
LAB_1418b6972:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1418b69b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1418b69c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418b69e2;
  }
  lVar2 = *plVar1;
LAB_1418b69e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1418b6a60(longlong *param_1)

{
  FUN_1418b6300(param_1);
  return param_1;
}




void FUN_1418b6ac0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418b6ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_1418b6b70(longlong *param_1)

{
  FUN_1418b6300(param_1);
  return param_1;
}




longlong * FUN_1418b6b90(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1418b60a0(param_1);
  return param_2;
}




void FUN_1418b6bd0(longlong param_1,longlong param_2)

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




void FUN_1418b6c30(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418b6c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1418b6cd0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1418c9e58);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_1418b6d50(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1418c9e58);
  }
  operator_new(param_2 * 0x28);
  return;
}




longlong * FUN_1418b6de0(longlong *param_1)

{
  FUN_1418b60a0(param_1);
  return param_1;
}




longlong FUN_1418b6e00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418b6e22;
  }
  lVar2 = *plVar1;
LAB_1418b6e22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1418b6e40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418b6e62;
  }
  lVar2 = *plVar1;
LAB_1418b6e62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1418b6e80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418b6ea0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418b6ec0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1418b6ec0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong FUN_1418b6f10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418b6f32;
  }
  lVar2 = *plVar1;
LAB_1418b6f32:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




undefined8 * FUN_1418b6f50(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1418b6f90(longlong *param_1)

{
  FUN_1418b6ac0(param_1);
  return param_1;
}




undefined8 * FUN_1418b6fc0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1418b7000(longlong *param_1)

{
  FUN_1418b6c30(param_1);
  return param_1;
}




void FUN_1418b7020(void)

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




undefined8 * FUN_1418b7080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




void FUN_1418b7100(void)

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




undefined8 * FUN_1418b7160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




longlong * FUN_1418b71e0(longlong *param_1)

{
  FUN_1418b6c30(param_1);
  return param_1;
}




longlong * FUN_1418b7200(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1418b6ac0(param_1);
  return param_2;
}




void FUN_1418b7230(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1418b7230(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




undefined8 * FUN_1418b7280(undefined8 *param_1)

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




undefined8 * FUN_1418b72c0(undefined8 *param_1)

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




void FUN_1418b7340(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1418b6ec0(param_1,(longlong *)plVar2[2]);
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




longlong FUN_1418b73c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418b73e2;
  }
  lVar2 = *plVar1;
LAB_1418b73e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1418b7400(longlong *param_1)

{
  FUN_1418b6ac0(param_1);
  return param_1;
}




void FUN_1418b7420(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418b7440(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418b7460(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1418b74a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_1418b74e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1418b7020();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1418b7520(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1418c9ee0);
  }
  plVar5 = FUN_1418b7080(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_1418b7860(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1418b7100();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1418b78a0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1418c9ee0);
  }
  plVar5 = FUN_1418b7160(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1418b7be0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1418b7c30(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1418c9f70);
  }
  FUN_1418b6ac0(param_3);
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
        goto LAB_1418b7e1c;
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
LAB_1418b7e1c:
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
            FUN_1418b6bd0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1418b63e0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_1418b6bd0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_1418b63e0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1418b6bd0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_1418b63e0((longlong)param_1,plVar7);
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




void FUN_1418b7ff0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1418b7230(param_1,(longlong *)plVar2[2]);
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




undefined8 * FUN_1418b8070(undefined8 *param_1)

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




undefined8 * FUN_1418b80c0(undefined8 *param_1)

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




char FUN_1418b8110(longlong param_1,char param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  
  plVar2 = *(longlong **)(param_1 + 8);
  cVar6 = '\0';
  plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  do {
    do {
      while( true ) {
        while( true ) {
          plVar5 = plVar3;
          plVar3 = *(longlong **)(param_1 + 0x38);
          if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
            _invalid_parameter_noinfo();
          }
          if (plVar5 == plVar3) {
            return cVar6;
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = 0;
          }
          else {
            lVar7 = *plVar2;
          }
          if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          lVar7 = plVar5[4];
          if (lVar7 == 0) {
            log_InlineLogERROR(&DAT_1418c3358);
          }
          else if (((*(int *)(lVar7 + 8) != 0 && *(int *)(lVar7 + 8) - 0x7531U < 9999) == (bool)param_2) && (*(short *)(lVar7 + 0xc) == 0)) {
            cVar6 = cVar6 + '\x01';
          }
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




int FUN_1418b8270(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  plVar2 = *(longlong **)(param_1 + 8);
  iVar6 = 0;
  plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  do {
    do {
      while( true ) {
        while( true ) {
          plVar5 = plVar3;
          plVar3 = *(longlong **)(param_1 + 0x38);
          if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
            _invalid_parameter_noinfo();
          }
          if (plVar5 == plVar3) {
            return iVar6;
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = 0;
          }
          else {
            lVar7 = *plVar2;
          }
          if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          lVar7 = plVar5[4];
          if (lVar7 == 0) {
            log_InlineLogERROR(&DAT_1418c3358);
          }
          else if ((*(int *)(lVar7 + 8) != 0) && (*(int *)(lVar7 + 8) - 0x7531U < 9999)) {
            iVar6 = iVar6 + *(int *)(lVar7 + 0x24);
          }
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




ulonglong FUN_1418b83c0(longlong param_1)

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
  
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 8);
  puVar6 = (undefined8 *)*puVar5;
  while( true ) {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
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
    lVar7 = puVar6[4];
    if (lVar7 == 0) {
      log_InlineLogERROR(&DAT_1418c3358);
    }
    else if ((*(short *)(lVar7 + 0xc) == 0) && (*(int *)(lVar7 + 0x2c) != 0)) {
      return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
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
  return (ulonglong)puVar5 & 0xffffffffffffff00;
}




void FUN_1418b8580(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418b85a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418b85c0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_1418b8690(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1418b87ed:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1418b881c;
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
      goto LAB_1418b87ed;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1418b7520(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1418b881c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_1418b8840(longlong *param_1,longlong *param_2,byte *param_3)

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
      bVar7 = *param_3 < *(byte *)(plVar6 + 3);
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
LAB_1418b899d:
    local_30 = plVar4;
    if (*param_3 <= *(byte *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1418b89cd;
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
      goto LAB_1418b899d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1418b78a0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1418b89cd:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_1418b89f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1418b7ff0((longlong)param_1);
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
    FUN_1418b7c30(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1418b8ba0(undefined8 *param_1)

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




undefined8 * FUN_1418b8bf0(undefined8 *param_1)

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




undefined4 FUN_1418b8c40(longlong param_1,ushort param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  
  if ((ulonglong)param_2 < *(ulonglong *)(param_1 + 0x40)) {
    plVar2 = *(longlong **)(param_1 + 8);
    plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    lVar7 = 0;
    bVar6 = 0;
    if (param_2 != 0) {
      do {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
          plVar3 = (longlong *)plVar5[2];
          if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x29);
            plVar5 = plVar3;
            plVar3 = (longlong *)*plVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar3 + 0x29);
              plVar5 = plVar3;
              plVar3 = (longlong *)*plVar3;
            }
          }
          else {
            cVar1 = *(char *)(plVar5[1] + 0x29);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
              cVar1 = *(char *)(plVar5[1] + 0x29);
              plVar4 = (longlong *)plVar5[1];
              plVar3 = plVar5;
            }
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        bVar6 = bVar6 + 1;
      } while (bVar6 < param_2);
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar7 = *plVar2;
    }
    if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    return (int)plVar5[3];
  }
  return 0;
}




undefined8 FUN_1418b8d30(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *extraout_RAX;
  ulonglong uVar8;
  longlong *extraout_RAX_00;
  longlong *plVar9;
  longlong lVar10;
  CMsg local_428 [1040];
  
  plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  plVar3 = *(longlong **)(param_1 + 8);
  plVar6 = (longlong *)_time64((__time64_t *)0x0);
  plVar7 = plVar6;
  while( true ) {
    plVar4 = *(longlong **)(param_1 + 0x38);
    if ((plVar3 == (longlong *)0x0) || (plVar3 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      plVar7 = extraout_RAX;
    }
    if (plVar9 == plVar4) break;
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
    lVar10 = plVar9[4];
    if ((lVar10 != 0) && (((iVar2 = *(int *)(lVar10 + 8), iVar2 != 0 && (iVar2 - 6000U < 0xbb9)) || ((iVar2 != 0 && (iVar2 - 0x7531U < 9999)))))) {
      *(undefined4 *)(lVar10 + 0x24) = 0;
      *(int *)(lVar10 + 0x28) = (int)plVar6;
      if ((iVar2 != 0) && (iVar2 - 0x7531U < 9999)) {
        *(undefined2 *)(lVar10 + 0xc) = 0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),lVar10,0);
      FUN_1418be970(local_428);
      uVar8 = FUN_1418beac0(local_428,0,lVar10);
      if ((char)uVar8 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 8))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),local_428);
      }
      FUN_1418be9c0((undefined8 *)local_428);
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      plVar4 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x29);
        plVar7 = (longlong *)*plVar4;
        while (plVar9 = plVar4, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x29);
          plVar4 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar1 = *(char *)(plVar9[1] + 0x29);
        plVar5 = (longlong *)plVar9[1];
        plVar4 = plVar9;
        while ((plVar7 = plVar5, plVar9 = plVar7, cVar1 == '\0' && (plVar4 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar5 = (longlong *)plVar7[1];
          plVar4 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      plVar7 = extraout_RAX_00;
    }
  }
  return CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
}




void * FUN_1418b8ee0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *extraout_RAX;
  ulonglong uVar6;
  undefined8 *extraout_RAX_00;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  CMsg local_428 [1040];
  
  uVar9 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 100) != '\0') {
    puVar5 = *(undefined8 **)(param_1 + 0x38);
    plVar2 = *(longlong **)(param_1 + 8);
    puVar7 = (undefined8 *)*puVar5;
    while( true ) {
      puVar3 = *(undefined8 **)(param_1 + 0x38);
      if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
        puVar5 = extraout_RAX;
      }
      if (puVar7 == puVar3) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar2;
      }
      if (puVar7 == *(undefined8 **)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar8 = puVar7[4];
      if (((lVar8 != 0) && (*(int *)(lVar8 + 8) != 0)) && (*(int *)(lVar8 + 8) - 0x7531U < 9999)) {
        *(undefined4 *)(lVar8 + 0x24) = 0;
        *(undefined4 *)(lVar8 + 0x28) = param_2;
        *(undefined2 *)(lVar8 + 0xc) = 0;
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),lVar8,0,uVar9);
        FUN_1418be970(local_428);
        uVar6 = FUN_1418beac0(local_428,0,lVar8);
        if ((char)uVar6 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x58) + 8))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),local_428);
        }
        FUN_1418be9c0((undefined8 *)local_428);
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar7 + 0x29) == '\0') {
        puVar3 = (undefined8 *)puVar7[2];
        if (*(char *)((longlong)puVar3 + 0x29) == '\0') {
          cVar1 = *(char *)((longlong)*puVar3 + 0x29);
          puVar5 = (undefined8 *)*puVar3;
          while (puVar7 = puVar3, cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar5 + 0x29);
            puVar3 = puVar5;
            puVar5 = (undefined8 *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar7[1] + 0x29);
          puVar4 = (undefined8 *)puVar7[1];
          puVar3 = puVar7;
          while ((puVar5 = puVar4, puVar7 = puVar5, cVar1 == '\0' && (puVar3 == (undefined8 *)puVar5[2]))) {
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
    register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
  }
  return register0x00000020;
}




undefined8 FUN_1418b9070(longlong param_1,int *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *_Src;
  longlong *plVar4;
  longlong *in_RAX;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *plVar5;
  longlong lVar6;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    in_RAX = plVar2;
    plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    while( true ) {
      plVar3 = *(longlong **)(param_1 + 0x38);
      if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
        in_RAX = extraout_RAX;
      }
      if (plVar5 == plVar3) break;
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
      _Src = (void *)plVar5[4];
      if (_Src == (void *)0x0) {
        log_InlineLogERROR(&DAT_1418c3358);
      }
      else if ((*(int *)((longlong)_Src + 8) != 0) && (*(int *)((longlong)_Src + 8) - 0x7531U < 9999)) {
        in_RAX = memcpy((void *)((longlong)*param_2 * 0x40 + param_3),_Src,0x40);
        *param_2 = *param_2 + 1;
        if (0x13 < *param_2) break;
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
        plVar3 = (longlong *)plVar5[2];
        if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          in_RAX = (longlong *)*plVar3;
          while (plVar5 = plVar3, cVar1 == '\0') {
            cVar1 = *(char *)(*in_RAX + 0x29);
            plVar3 = in_RAX;
            in_RAX = (longlong *)*in_RAX;
          }
        }
        else {
          cVar1 = *(char *)(plVar5[1] + 0x29);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
          while ((in_RAX = plVar4, plVar5 = in_RAX, cVar1 == '\0' && (plVar3 == (longlong *)in_RAX[2]))) {
            cVar1 = *(char *)(in_RAX[1] + 0x29);
            plVar4 = (longlong *)in_RAX[1];
            plVar3 = in_RAX;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
        in_RAX = extraout_RAX_00;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




undefined8 * FUN_1418b9210(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1418c9f70);
  }
  FUN_1418b60a0(param_3);
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
        goto LAB_1418b93fc;
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
LAB_1418b93fc:
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
            FUN_1418b68d0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1418b6020((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1418b68d0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1418b6020((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1418b68d0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1418b6020((longlong)param_1,plVar7);
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




longlong * FUN_1418b95d0(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_1418b96a0(longlong *param_1,longlong *param_2,byte *param_3)

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
      if (*(byte *)(puVar1 + 3) < *param_3) {
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
  if ((puVar4 == puVar1) || (*param_3 < *(byte *)(puVar4 + 3))) {
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




void FUN_1418b9770(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418b9790(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1418b97b0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_1418b7520(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_1418b7520(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_1418b7520(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_1418b7520(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_1418b7520(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_1418b7520(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_1418b7520(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_1418b8690(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




longlong * FUN_1418b9ad0(longlong *param_1,longlong *param_2,longlong *param_3,byte *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  longlong *plVar9;
  longlong local_38;
  longlong *local_30;
  
  if (param_1[7] == 0) {
    FUN_1418b78a0(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(byte *)(puVar3 + 3)) {
        FUN_1418b78a0(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
        return param_2;
      }
    }
    else {
      lVar4 = param_1[6];
      if ((*param_3 == 0) || (*param_3 != *param_1)) {
        _invalid_parameter_noinfo();
      }
      if (param_3[1] == lVar4) {
        if (*(byte *)(*(undefined8 **)(param_1[6] + 0x10) + 3) < *param_4) {
          FUN_1418b78a0(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
          return param_2;
        }
      }
      else {
        bVar8 = *param_4;
        if (bVar8 < *(byte *)(param_3[1] + 0x18)) {
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
          bVar8 = *param_4;
          if (*(byte *)(plVar7 + 3) < bVar8) {
            if (*(char *)(plVar7[2] + 0x21) != '\0') {
              FUN_1418b78a0(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_1418b78a0(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
            return param_2;
          }
        }
        if (*(byte *)(param_3[1] + 0x18) < bVar8) {
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
          if ((plVar9 == plVar7) || (*param_4 < *(byte *)(plVar9 + 3))) {
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x21) != '\0') {
              FUN_1418b78a0(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_1418b78a0(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_1418b8840(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_1418b9e00(longlong *param_1)

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
  FUN_1418b89f0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_1418b9e70(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1418b7340((longlong)param_1);
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
    FUN_1418b9210(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1418ba020(undefined8 *param_1)

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




undefined8 * FUN_1418ba070(undefined8 *param_1)

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




/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1 FUN_1418ba0c0(longlong param_1,uint param_2)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint local_res10 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38 [2];
  
  local_res10[0] = param_2;
  if (param_2 != 0) {
    FUN_1418b95d0((longlong *)(param_1 + 8),(longlong *)&local_48,local_res10);
    lVar7 = *(longlong *)(param_1 + 0x38);
    plVar2 = (longlong *)CONCAT44(uStack_44,local_48);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    lVar3 = CONCAT44(uStack_3c,uStack_40);
    if (lVar3 == lVar7) {
      uVar4 = 0;
    }
    else {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar2;
      }
      if (lVar3 == *(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      pvVar1 = *(void **)(lVar3 + 0x20);
      if (pvVar1 == (void *)0x0) {
        log_InlineLogERROR(&DAT_1418c3358,"CHECKF","pTaskDetailInfo","f:\\version\\cqserver-78.0.11-1204\\modules\\taskdetail\\src\\tasklist.cpp");
        uVar4 = 0;
      }
      else if (*(short *)((longlong)pvVar1 + 0xc) == 1) {
        uVar4 = 0;
      }
      else {
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),param_2);
        uVar4 = 0;
        if (cVar5 != '\0') {
          plVar2 = *(longlong **)(param_1 + 0x58);
          (**(code **)(*plVar2 + 0x80))(plVar2,*(undefined4 *)(param_1 + 0x60));
          uVar6 = (**(code **)(*plVar2 + 0x88))(plVar2,*(undefined4 *)(param_1 + 0x60));
          tq::MyLogSave("gmlog/taskdelete",
                        "task delete: user_id=%u, account_id=%u, name=%s, action_id=%u, task_id=%u, complete_flag=%d, data1~data7[%d, %d, %d, %d, %d, %d, %d], over_time=%u, MaxAccumulateTimes=%u"
                        ,*(undefined4 *)(param_1 + 0x60),uVar6 & 0xffffffff);
          operator_delete(pvVar1);
          FUN_1418b9210((undefined8 *)(param_1 + 8),local_38,(longlong *)&local_48);
          uVar4 = 1;
        }
      }
    }
    return uVar4;
  }
  log_InlineLogERROR(&DAT_1418c3358,"IF_NOT","idTask","f:\\version\\cqserver-78.0.11-1204\\modules\\taskdetail\\src\\tasklist.cpp");
  return 0;
}




ulonglong FUN_1418ba310(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  uint local_res10 [2];
  longlong local_18 [2];
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x38);
  local_res10[0] = param_2;
  plVar3 = FUN_1418b95d0((longlong *)(param_1 + 8),local_18,local_res10);
  if ((*plVar3 == 0) || (*plVar3 != lVar1)) {
    _invalid_parameter_noinfo();
  }
  return (ulonglong)(plVar3[1] != lVar2);
}




undefined4 FUN_1418ba380(longlong param_1,uint param_2,undefined4 param_3)

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
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
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
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar6 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 != lVar8) {
    lVar8 = 0;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar8 = *plVar2;
    }
    if (lVar4 == *(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar8 = *(longlong *)(lVar4 + 0x20);
    if (lVar8 == 0) {
      log_InlineLogERROR(&DAT_1418c3358);
    }
    else {
      switch(param_3) {
      case 1:
        return *(undefined4 *)(lVar8 + 0x10);
      case 2:
        return *(undefined4 *)(lVar8 + 0x14);
      case 3:
        return *(undefined4 *)(lVar8 + 0x18);
      case 4:
        return *(undefined4 *)(lVar8 + 0x1c);
      case 5:
        return *(undefined4 *)(lVar8 + 0x20);
      case 6:
        return *(undefined4 *)(lVar8 + 0x24);
      case 7:
        return *(undefined4 *)(lVar8 + 0x28);
      }
    }
  }
  return 0;
}




ulonglong FUN_1418ba530(longlong param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int3 iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong uVar9;
  longlong lVar10;
  int7 iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  puVar13 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar2 = *(char *)((longlong)puVar13 + 0x29);
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  while (cVar2 == '\0') {
    if (*(uint *)(puVar13 + 3) < param_2) {
      puVar8 = (undefined8 *)puVar13[2];
      puVar13 = puVar6;
    }
    else {
      puVar8 = (undefined8 *)*puVar13;
    }
    puVar6 = puVar13;
    puVar13 = puVar8;
    cVar2 = *(char *)((longlong)puVar8 + 0x29);
  }
  puVar13 = *(undefined8 **)(param_1 + 0x38);
  local_40 = puVar6;
  local_48 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar6 == puVar13) || (param_2 < *(uint *)(puVar6 + 3))) {
    plVar12 = &local_38;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    local_38 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar12 = &local_48;
  }
  plVar3 = (longlong *)*plVar12;
  uVar4 = *(ulonglong *)(param_1 + 0x38);
  local_28 = plVar3;
  uVar9 = plVar12[1];
  local_20 = uVar9;
  if ((plVar3 == (longlong *)0x0) || (plVar3 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    uVar9 = extraout_RAX;
  }
  uVar7 = local_20;
  if (local_20 != uVar4) {
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar14 = 0;
      uVar9 = extraout_RAX_00;
    }
    else {
      lVar14 = *plVar3;
    }
    if (uVar7 == *(ulonglong *)(lVar14 + 0x30)) {
      _invalid_parameter_noinfo();
      uVar9 = extraout_RAX_01;
    }
    lVar14 = *(longlong *)(uVar7 + 0x20);
    if (lVar14 == 0) {
      log_InlineLogERROR(&DAT_1418c3358);
      uVar9 = extraout_RAX_02;
    }
    else {
      uVar1 = param_3 - 1;
      if (uVar1 < 7) {
        lVar10 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                           (*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),param_2,param_3 + 4,param_4);
        if ((char)lVar10 != '\0') {
          lVar10 = (longlong)(int)uVar1;
          iVar5 = (int3)(uVar1 >> 8);
          iVar11 = (int7)iVar5;
          switch(uVar1) {
          case 0:
            *(undefined4 *)(lVar14 + 0x10) = param_4;
            return CONCAT71((int7)iVar5,1);
          case 1:
            *(undefined4 *)(lVar14 + 0x14) = param_4;
            return CONCAT71((int7)iVar5,1);
          case 2:
            *(undefined4 *)(lVar14 + 0x18) = param_4;
            return CONCAT71(iVar11,1);
          case 3:
            *(undefined4 *)(lVar14 + 0x1c) = param_4;
            return CONCAT71(iVar11,1);
          case 4:
            *(undefined4 *)(lVar14 + 0x20) = param_4;
            return CONCAT71(iVar11,1);
          case 5:
            *(undefined4 *)(lVar14 + 0x24) = param_4;
            return CONCAT71(iVar11,1);
          case 6:
            *(undefined4 *)(lVar14 + 0x28) = param_4;
          }
        }
        return CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
      }
    }
  }
  return uVar9 & 0xffffffffffffff00;
}




ulonglong FUN_1418ba710(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar9[2];
      puVar9 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar9;
    }
    puVar4 = puVar9;
    puVar9 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar4;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar8 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar8 = &local_38;
  }
  plVar2 = (longlong *)*plVar8;
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  local_18 = plVar2;
  uVar7 = plVar8[1];
  local_10 = uVar7;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  uVar5 = local_10;
  if (local_10 != uVar3) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar2;
    }
    if (uVar5 == *(ulonglong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar10 = *(longlong *)(uVar5 + 0x20);
    if (lVar10 != 0) {
      return CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0xe));
    }
    log_InlineLogERROR(&DAT_1418c3358);
    uVar7 = extraout_RAX_00;
  }
  return uVar7 & 0xffffffffffffff00;
}




ulonglong FUN_1418ba840(longlong param_1,uint param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar9[2];
      puVar9 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar9;
    }
    puVar4 = puVar9;
    puVar9 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_40 = puVar4;
  local_48 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar8 = &local_38;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    local_38 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar8 = &local_48;
  }
  plVar2 = (longlong *)*plVar8;
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  local_28 = plVar2;
  uVar7 = plVar8[1];
  local_20 = uVar7;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  uVar5 = local_20;
  if (local_20 != uVar3) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
      uVar7 = extraout_RAX_00;
    }
    else {
      lVar10 = *plVar2;
    }
    if (uVar5 == *(ulonglong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
      uVar7 = extraout_RAX_01;
    }
    lVar10 = *(longlong *)(uVar5 + 0x20);
    if (lVar10 != 0) {
      if (*(char *)(lVar10 + 0xe) != param_3) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),param_2,4,param_3);
        if ((char)uVar7 == '\0') goto LAB_1418ba95e;
        *(char *)(lVar10 + 0xe) = param_3;
      }
      return CONCAT71((int7)(uVar7 >> 8),1);
    }
    log_InlineLogERROR(&DAT_1418c3358);
    uVar7 = extraout_RAX_02;
  }
LAB_1418ba95e:
  return uVar7 & 0xffffffffffffff00;
}




ulonglong FUN_1418ba9b0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong extraout_RAX;
  ulonglong uVar7;
  ulonglong extraout_RAX_00;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar9[2];
      puVar9 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar9;
    }
    puVar4 = puVar9;
    puVar9 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar4;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar8 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar8 = &local_38;
  }
  plVar2 = (longlong *)*plVar8;
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  local_18 = plVar2;
  uVar7 = plVar8[1];
  local_10 = uVar7;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  uVar5 = local_10;
  if (local_10 == uVar3) {
    uVar7 = uVar7 & 0xffffffffffff0000;
  }
  else {
    lVar10 = 0;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar10 = *plVar2;
    }
    if (uVar5 == *(ulonglong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar10 = *(longlong *)(uVar5 + 0x20);
    if (lVar10 == 0) {
      log_InlineLogERROR(&DAT_1418c3358);
      uVar7 = extraout_RAX_00 & 0xffffffffffff0000;
    }
    else {
      uVar7 = CONCAT62((int6)((ulonglong)lVar10 >> 0x10),*(undefined2 *)(lVar10 + 0xc));
    }
  }
  return uVar7;
}




ulonglong FUN_1418baaf0(longlong param_1,uint param_2,short param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar9[2];
      puVar9 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar9;
    }
    puVar4 = puVar9;
    puVar9 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_40 = puVar4;
  local_48 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar8 = &local_38;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    local_38 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar8 = &local_48;
  }
  plVar2 = (longlong *)*plVar8;
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  local_28 = plVar2;
  uVar7 = plVar8[1];
  local_20 = uVar7;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  uVar5 = local_20;
  if (local_20 != uVar3) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
      uVar7 = extraout_RAX_00;
    }
    else {
      lVar10 = *plVar2;
    }
    if (uVar5 == *(ulonglong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
      uVar7 = extraout_RAX_01;
    }
    lVar10 = *(longlong *)(uVar5 + 0x20);
    if (lVar10 != 0) {
      if (*(short *)(lVar10 + 0xc) != param_3) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),param_2,3,param_3);
        if ((char)uVar7 == '\0') goto LAB_1418bac0e;
        *(short *)(lVar10 + 0xc) = param_3;
      }
      return CONCAT71((int7)(uVar7 >> 8),1);
    }
    log_InlineLogERROR(&DAT_1418c3358);
    uVar7 = extraout_RAX_02;
  }
LAB_1418bac0e:
  return uVar7 & 0xffffffffffffff00;
}




undefined4 FUN_1418bac60(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  FUN_1418b95d0((longlong *)(param_1 + 8),(longlong *)&local_18,local_res10);
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 8))) {
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
    if (*(longlong *)(local_10 + 0x20) != 0) {
      return *(undefined4 *)(*(longlong *)(local_10 + 0x20) + 0x3c);
    }
    log_InlineLogERROR(&DAT_1418c3358);
  }
  return 0;
}




ulonglong FUN_1418bad40(longlong param_1,uint param_2,int param_3)

{
  ulonglong in_RAX;
  longlong *plVar1;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *extraout_RAX_01;
  ulonglong extraout_RAX_02;
  longlong *extraout_RAX_03;
  ulonglong uVar2;
  longlong lVar3;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_res10[0] = param_2;
  plVar1 = FUN_1418b95d0((longlong *)(param_1 + 8),(longlong *)&local_28,local_res10);
  lVar3 = *(longlong *)(param_1 + 0x38);
  if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    plVar1 = extraout_RAX;
  }
  if (local_20 == lVar3) {
LAB_1418bae48:
    uVar2 = (ulonglong)plVar1 & 0xffffffffffffff00;
  }
  else {
    if (local_28 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = 0;
      plVar1 = extraout_RAX_00;
    }
    else {
      lVar3 = *local_28;
    }
    if (local_20 == *(longlong *)(lVar3 + 0x30)) {
      _invalid_parameter_noinfo();
      plVar1 = extraout_RAX_01;
    }
    lVar3 = *(longlong *)(local_20 + 0x20);
    if (lVar3 == 0) {
      log_InlineLogERROR(&DAT_1418c3358);
      return extraout_RAX_02 & 0xffffffffffffff00;
    }
    if (*(int *)(lVar3 + 0x3c) != param_3) {
      plVar1 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),param_2,0xe,param_3);
      if ((char)plVar1 == '\0') {
        log_InlineLogERROR("CTaskList::SetMaxAccumulateTimes SetTaskDetail error! user_id[%u], task_id[%u], data[%u]");
        plVar1 = extraout_RAX_03;
        goto LAB_1418bae48;
      }
      *(int *)(lVar3 + 0x3c) = param_3;
    }
    uVar2 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  }
  return uVar2;
}




undefined4 FUN_1418bae70(longlong param_1,uint param_2)

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
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
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
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar6 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
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
      return *(undefined4 *)(lVar8 + 0x2c);
    }
    log_InlineLogERROR(&DAT_1418c3358);
  }
  return 0;
}




ulonglong FUN_1418bafa0(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar9[2];
      puVar9 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar9;
    }
    puVar4 = puVar9;
    puVar9 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_40 = puVar4;
  local_48 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar8 = &local_38;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    local_38 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar8 = &local_48;
  }
  plVar2 = (longlong *)*plVar8;
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  local_28 = plVar2;
  uVar7 = plVar8[1];
  local_20 = uVar7;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  uVar5 = local_20;
  if (local_20 != uVar3) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
      uVar7 = extraout_RAX_00;
    }
    else {
      lVar10 = *plVar2;
    }
    if (uVar5 == *(ulonglong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
      uVar7 = extraout_RAX_01;
    }
    lVar10 = *(longlong *)(uVar5 + 0x20);
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x2c) != param_3) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),param_2,0xc,param_3);
        if ((char)uVar7 == '\0') goto LAB_1418bb0be;
        *(int *)(lVar10 + 0x2c) = param_3;
      }
      return CONCAT71((int7)(uVar7 >> 8),1);
    }
    log_InlineLogERROR(&DAT_1418c3358);
    uVar7 = extraout_RAX_02;
  }
LAB_1418bb0be:
  return uVar7 & 0xffffffffffffff00;
}




undefined4 FUN_1418bb110(longlong param_1,uint param_2)

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
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
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
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar6 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
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
      return *(undefined4 *)(lVar8 + 0x30);
    }
    log_InlineLogERROR(&DAT_1418c3358);
  }
  return 0;
}




ulonglong FUN_1418bb240(longlong param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar9[2];
      puVar9 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar9;
    }
    puVar4 = puVar9;
    puVar9 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar4;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar8 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar8 = &local_38;
  }
  plVar2 = (longlong *)*plVar8;
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  local_18 = plVar2;
  uVar7 = plVar8[1];
  local_10 = uVar7;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  uVar5 = local_10;
  if (local_10 != uVar3) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar2;
    }
    if (uVar5 == *(ulonglong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar10 = *(longlong *)(uVar5 + 0x20);
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x30) = param_3;
      return CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
    }
    log_InlineLogERROR(&DAT_1418c3358);
    uVar7 = extraout_RAX_00;
  }
  return uVar7 & 0xffffffffffffff00;
}




void FUN_1418bb380(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_1418bae70(param_1,param_2);
  iVar2 = FUN_1418bb110(param_1,param_2);
  FUN_1418b5c40(param_1,uVar1,iVar2);
  return;
}




ulonglong FUN_1418bb3d0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint7 uVar13;
  ulonglong uVar11;
  ulonglong extraout_RAX;
  undefined8 uVar12;
  CMsg local_428 [1040];
  
  uVar13 = (uint7)((ulonglong)&stack0x00000000 >> 8);
  if (*(uint *)(param_1 + 0x48) == 0) {
    uVar11 = (ulonglong)uVar13 << 8;
  }
  else if (*(byte *)(param_1 + 0x4c) < 10) {
    uVar11 = FUN_1418ba310(param_1,*(uint *)(param_1 + 0x48));
    if ((char)uVar11 != '\0') {
      uVar1 = *(uint *)(param_1 + 0x48);
      if ((uVar1 == 0) || (uVar11 = (ulonglong)(uVar1 - 0x7531), 0x270e < uVar1 - 0x7531)) {
        uVar11 = uVar11 & 0xffffffffffffff00;
      }
      else {
        uVar11 = FUN_1418ba9b0(param_1,uVar1);
        if ((short)uVar11 == 0) {
          iVar3 = *(int *)(param_1 + 0x50);
          if (iVar3 - 1U < 100) {
            iVar2 = FUN_1418ba380(param_1,*(uint *)(param_1 + 0x48),4);
            FUN_1418ba530(param_1,*(uint *)(param_1 + 0x48),4,iVar2 + 1);
            iVar2 = FUN_1418ba380(param_1,*(uint *)(param_1 + 0x48),5);
            FUN_1418ba530(param_1,*(uint *)(param_1 + 0x48),5,iVar3 + iVar2);
            iVar3 = FUN_1418ba380(param_1,*(uint *)(param_1 + 0x48),6);
            FUN_1418ba530(param_1,*(uint *)(param_1 + 0x48),6,iVar3 + 1);
            FUN_1418be970(local_428);
            uVar4 = FUN_1418ba380(param_1,*(uint *)(param_1 + 0x48),7);
            uVar5 = FUN_1418ba380(param_1,*(uint *)(param_1 + 0x48),6);
            uVar6 = FUN_1418ba380(param_1,*(uint *)(param_1 + 0x48),5);
            uVar7 = FUN_1418ba380(param_1,*(uint *)(param_1 + 0x48),4);
            uVar8 = FUN_1418ba380(param_1,*(uint *)(param_1 + 0x48),3);
            uVar9 = FUN_1418ba380(param_1,*(uint *)(param_1 + 0x48),2);
            uVar10 = FUN_1418ba380(param_1,*(uint *)(param_1 + 0x48),1);
            uVar12 = FUN_1418be9f0(local_428,0,*(undefined4 *)(param_1 + 0x48),uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4);
            if ((char)uVar12 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x58) + 8))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),local_428);
            }
            *(undefined4 *)(param_1 + 0x48) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
            *(undefined1 *)(param_1 + 0x4d) = 0;
            *(undefined4 *)(param_1 + 0x50) = 0;
            uVar12 = FUN_1418be9c0((undefined8 *)local_428);
            uVar11 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
          }
          else {
            log_InlineLogERROR(&DAT_1418c3358);
            uVar11 = extraout_RAX & 0xffffffffffffff00;
          }
        }
        else {
          uVar11 = uVar11 & 0xffffffffffffff00;
        }
      }
    }
  }
  else {
    uVar11 = (ulonglong)uVar13 << 8;
  }
  return uVar11;
}




void FUN_1418bb630(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((((param_2 != 0) && (*(short *)(param_2 + 0xc) == 0)) && (*(uint *)(param_2 + 0x2c) != 0)) &&
     (uVar1 = FUN_1418b5c40(param_1,*(uint *)(param_2 + 0x2c),*(int *)(param_2 + 0x30)), (char)uVar1 != '\0')) {
    FUN_1418baaf0(param_1,*(uint *)(param_2 + 8),5);
  }
  return;
}




void FUN_1418bb680(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1418bb110(param_1,param_2);
  uVar2 = FUN_1418bae70(param_1,param_2);
  FUN_1418b5db0(param_1,uVar2,iVar1);
  return;
}




ulonglong FUN_1418bb6d0(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar9[2];
      puVar9 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar9;
    }
    puVar4 = puVar9;
    puVar9 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_40 = puVar4;
  local_48 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar8 = &local_38;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    local_38 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar8 = &local_48;
  }
  plVar2 = (longlong *)*plVar8;
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  local_28 = plVar2;
  uVar7 = plVar8[1];
  local_20 = uVar7;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  uVar5 = local_20;
  if (local_20 != uVar3) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
      uVar7 = extraout_RAX_00;
    }
    else {
      lVar10 = *plVar2;
    }
    if (uVar5 == *(ulonglong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
      uVar7 = extraout_RAX_01;
    }
    lVar10 = *(longlong *)(uVar5 + 0x20);
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x34) != param_3) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),param_2,0xd,param_3);
        if ((char)uVar7 == '\0') goto LAB_1418bb7ee;
        *(int *)(lVar10 + 0x34) = param_3;
      }
      return CONCAT71((int7)(uVar7 >> 8),1);
    }
    log_InlineLogERROR(&DAT_1418c3358);
    uVar7 = extraout_RAX_02;
  }
LAB_1418bb7ee:
  return uVar7 & 0xffffffffffffff00;
}




undefined4 FUN_1418bb840(longlong param_1,uint param_2)

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
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
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
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar6 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
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
      return *(undefined4 *)(lVar8 + 0x34);
    }
    log_InlineLogERROR(&DAT_1418c3358);
  }
  return 0;
}




undefined4 FUN_1418bb970(longlong param_1,uint param_2)

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
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
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
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar6 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
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
      return *(undefined4 *)(lVar8 + 0x38);
    }
    log_InlineLogERROR(&DAT_1418c3358);
  }
  return 0;
}




ulonglong FUN_1418bbaa0(longlong param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar9[2];
      puVar9 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar9;
    }
    puVar4 = puVar9;
    puVar9 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar4;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar8 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar8 = &local_38;
  }
  plVar2 = (longlong *)*plVar8;
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  local_18 = plVar2;
  uVar7 = plVar8[1];
  local_10 = uVar7;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  uVar5 = local_10;
  if (local_10 != uVar3) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar2;
    }
    if (uVar5 == *(ulonglong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar10 = *(longlong *)(uVar5 + 0x20);
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x38) = param_3;
      return CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
    }
    log_InlineLogERROR(&DAT_1418c3358);
    uVar7 = extraout_RAX_00;
  }
  return uVar7 & 0xffffffffffffff00;
}




undefined8 * FUN_1418bbbe0(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_1418b97b0(param_1,local_28,(longlong *)&local_38,local_48);
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




longlong FUN_1418bbce0(longlong *param_1,byte *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  byte local_res8 [4];
  undefined4 local_resc;
  longlong *local_38;
  undefined8 *puStack_30;
  longlong local_28 [2];
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x21) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(byte *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x21) == '\0');
  }
  plVar6 = (longlong *)*param_1;
  puVar1 = (undefined8 *)param_1[6];
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  lVar5 = 0;
  if ((puVar4 == puVar1) || (*param_2 < *(byte *)(puVar4 + 3))) {
    local_res8[0] = *param_2;
    local_resc = 0;
    local_38 = plVar6;
    puStack_30 = puVar4;
    plVar3 = FUN_1418b9ad0(param_1,local_28,(longlong *)&local_38,local_res8);
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
  return (longlong)puVar4 + 0x1c;
}




void FUN_1418bbde0(longlong *param_1)

{
  FUN_1418b9e00(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418bbe10(longlong *param_1)

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
  FUN_1418b9e70(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1418bbe80(undefined8 *param_1)

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




undefined8 * FUN_1418bbed0(undefined8 *param_1)

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




ulonglong FUN_1418bbf20(longlong param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *_Dst;
  undefined8 *puVar7;
  undefined8 extraout_RAX_00;
  void *pvVar8;
  ushort uVar9;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(int *)(param_1 + 0x60) = param_2;
    uVar5 = FUN_1418b7340(param_1 + 8);
    if (*(char *)(param_1 + 100) == '\0') {
      pvVar6 = operator_new(8000);
      uVar4 = 0;
      if (pvVar6 != (void *)0x0) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))(*(longlong **)(param_1 + 0x58),param_2,pvVar6,2000);
        for (uVar9 = 0; uVar9 < uVar3; uVar9 = uVar9 + 1) {
          _Dst = operator_new(0x40);
          pvVar8 = (void *)0x0;
          if (_Dst != (void *)0x0) {
            memset(_Dst,0,0x40);
            pvVar8 = _Dst;
          }
          if (pvVar8 != (void *)0x0) {
            puVar1 = (uint *)((longlong)pvVar6 + (ulonglong)uVar9 * 4);
            cVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))(*(longlong **)(param_1 + 0x58),param_2,*puVar1,pvVar8);
            if (cVar2 == '\0') {
              operator_delete(pvVar8);
            }
            else {
              puVar7 = FUN_1418bbbe0((longlong *)(param_1 + 8),puVar1);
              *puVar7 = pvVar8;
            }
          }
        }
        operator_delete__(pvVar6);
        uVar4 = CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
      }
    }
    else {
      uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
  }
  return uVar4;
}




void FUN_1418bc0b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_1418bb3d0((longlong)param_1);
  plVar5 = *(longlong **)param_1[7];
  plVar2 = (longlong *)param_1[1];
  lVar6 = 0;
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
      operator_delete((void *)plVar5[4]);
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
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x29);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
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
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[7] + 8) + 0x29);
  plVar5 = *(longlong **)(param_1[7] + 8);
  while (cVar1 == '\0') {
    FUN_1418b6ec0(param_1 + 1,(longlong *)plVar5[2]);
    plVar2 = (longlong *)*plVar5;
    operator_delete(plVar5);
    plVar5 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  *(undefined8 *)(param_1[7] + 8) = param_1[7];
  param_1[8] = 0;
  *(undefined8 *)param_1[7] = param_1[7];
  *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void * FUN_1418bc2b0(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  ulonglong extraout_RAX;
  void *extraout_RAX_00;
  undefined8 *puVar3;
  void *pvVar4;
  ulonglong extraout_RAX_01;
  uint local_res10 [2];
  void *local_30;
  longlong local_28;
  
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    register0x00000020 = (BADSPACEBASE *)(extraout_RAX & 0xffffffffffffff00);
  }
  else if (*(char *)(param_1 + 100) == '\0') {
    FUN_1418b95d0((longlong *)(param_1 + 8),(longlong *)&local_30,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((local_30 == (void *)0x0) || (local_30 != *(void **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      local_30 = extraout_RAX_00;
    }
    if (local_28 == lVar1) {
      puVar3 = (undefined8 *)
               (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),param_2,param_3);
      if ((char)puVar3 != '\0') {
        pvVar4 = operator_new(0x40);
        local_30 = pvVar4;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
          puVar3 = (undefined8 *)0x0;
        }
        else {
          puVar3 = memset(pvVar4,0,0x40);
        }
        if (pvVar4 != (void *)0x0) {
          cVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),param_2,pvVar4);
          if (cVar2 == '\0') {
            operator_delete(pvVar4);
            return (void *)(extraout_RAX_01 & 0xffffffffffffff00);
          }
          *(undefined4 *)((longlong)pvVar4 + 0x30) = param_4;
          *(undefined4 *)((longlong)pvVar4 + 0x38) = param_5;
          puVar3 = FUN_1418bbbe0((longlong *)(param_1 + 8),local_res10);
          *puVar3 = pvVar4;
        }
      }
      register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
    }
    else {
      register0x00000020 = (BADSPACEBASE *)((ulonglong)local_30 & 0xffffffffffffff00);
    }
  }
  return register0x00000020;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1418bc410(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  __time64_t _Var7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_108 [32];
  _TIME_ZONE_INFORMATION local_e8;
  ulonglong local_38;
  
  local_38 = DAT_1418cb338 ^ (ulonglong)auStack_108;
  GetTimeZoneInformation(&local_e8);
  _Var7 = _time64((__time64_t *)0x0);
  plVar3 = *(longlong **)(param_1 + 8);
  plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  uVar11 = (uint)((int)_Var7 + local_e8.Bias * -0x3c) / 0x15180;
  do {
    plVar4 = *(longlong **)(param_1 + 0x38);
    if ((plVar3 == (longlong *)0x0) || (plVar3 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 == plVar4) {
      return;
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
    lVar10 = plVar9[4];
    if (lVar10 != 0) {
      iVar2 = *(int *)(lVar10 + 8);
      if ((iVar2 != 0) && ((iVar2 - 6000U < 0xbb9 || ((iVar2 != 0 && (iVar2 - 0x7531U < 9999)))))) {
        if ((*(int *)(lVar10 + 0x28) < local_e8.Bias * 0x3c) || (uVar5 = (uint)(*(int *)(lVar10 + 0x28) + local_e8.Bias * -0x3c) / 0x15180, uVar11 < uVar5))
        goto LAB_1418bc577;
        if (uVar11 != uVar5) {
          *(undefined4 *)(lVar10 + 0x24) = 0;
          *(int *)(lVar10 + 0x28) = (int)_Var7;
          if ((iVar2 != 0) && (iVar2 - 0x7531U < 9999)) {
            *(undefined2 *)(lVar10 + 0xc) = 0;
          }
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),lVar10,0);
        }
      }
      if (((*(short *)(lVar10 + 0xc) == 0) && (*(uint *)(lVar10 + 0x2c) != 0)) &&
         (uVar8 = FUN_1418b5c40(param_1,*(uint *)(lVar10 + 0x2c),*(int *)(lVar10 + 0x30)), (char)uVar8 != '\0')) {
        FUN_1418baaf0(param_1,*(uint *)(lVar10 + 8),5);
      }
    }
LAB_1418bc577:
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      plVar4 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x29);
        plVar9 = plVar4;
        plVar4 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x29);
          plVar9 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(plVar9[1] + 0x29);
        plVar6 = (longlong *)plVar9[1];
        plVar4 = plVar9;
        while ((plVar9 = plVar6, cVar1 == '\0' && (plVar4 == (longlong *)plVar9[2]))) {
          cVar1 = *(char *)(plVar9[1] + 0x29);
          plVar6 = (longlong *)plVar9[1];
          plVar4 = plVar9;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




undefined1 * FUN_1418bc620(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  uint7 uVar13;
  ulonglong extraout_RAX;
  longlong lVar9;
  ulonglong extraout_RAX_00;
  longlong lVar10;
  ulonglong extraout_RAX_01;
  ulonglong uVar11;
  ulonglong extraout_RAX_02;
  undefined8 uVar12;
  byte bVar14;
  ulonglong uVar15;
  int local_res10 [2];
  uint local_res20 [2];
  int local_448 [2];
  undefined8 local_440;
  CMsg local_438 [1040];
  
  local_440 = 0xfffffffffffffffe;
  puVar7 = (undefined1 *)register0x00000020;
  if ((param_2 != 0) && (puVar7 = (undefined1 *)FUN_1418ba310(param_1,param_2), (char)puVar7 != '\0')) {
    if (param_2 - 0x7531 < 9999) {
      uVar8 = FUN_1418ba9b0(param_1,param_2);
      if ((short)uVar8 == 0) {
        uVar1 = FUN_1418bac60(param_1,param_2);
        puVar7 = (undefined1 *)CONCAT44(extraout_var,uVar1);
        if (uVar1 != 0) {
          uVar2 = FUN_1418ba380(param_1,param_2,4);
          if (uVar2 < uVar1) {
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x68))();
            iVar4 = FUN_1418b8270(param_1);
            if (iVar4 < iVar3) {
              uVar1 = *(uint *)(param_1 + 0x48);
              uVar8 = (ulonglong)uVar1;
              if ((uVar1 != 0) && (param_2 != uVar1)) {
                uVar8 = FUN_1418bb3d0(param_1);
              }
              uVar13 = (uint7)(uVar8 >> 8);
              if ((param_3 == '\0') || (*(char *)(param_1 + 0x4d) == '\0')) {
                if (*(int *)(param_1 + 0x50) < 100) {
                  uVar8 = 0;
                  uVar1 = 0;
                  if (*(char *)(param_1 + 0x4d) != '\0') {
                    puVar7 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x70))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60))
                    ;
                    if ((char)puVar7 == '\0') {
                      return puVar7;
                    }
                    local_448[0] = 0;
                    local_res10[0] = 0;
                    local_res20[0] = 0;
                    puVar7 = (undefined1 *)
                             (**(code **)(**(longlong **)(param_1 + 0x58) + 0x48))(*(longlong **)(param_1 + 0x58),local_448,local_res10,local_res20);
                    if ((char)puVar7 == '\0') {
                      return puVar7;
                    }
                    if (((local_448[0] == 0) && (local_res10[0] == 0)) && (local_res20[0] == 0)) {
                      log_InlineLogERROR("CTaskList::TaskAccumulateLottery, re lottery is free!");
                      return (undefined1 *)(extraout_RAX & 0xffffffffffffff00);
                    }
                    uVar5 = (*(byte *)(param_1 + 0x4d) - 1) * local_res10[0] + local_448[0];
                    uVar2 = local_res20[0];
                    if (uVar5 < local_res20[0]) {
                      uVar2 = uVar5;
                    }
                    if (uVar2 == 0) {
                      return (undefined1 *)((ulonglong)(uint3)(uVar5 >> 8) << 8);
                    }
                    puVar7 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))();
                    if ((char)puVar7 == '\0') {
                      return puVar7;
                    }
                  }
                  uVar6 = tq::TimeGet(0);
                  iVar3 = rand();
                  srand(iVar3 + uVar6);
                  lVar9 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x60))();
                  if (lVar9 == 0) {
                    log_InlineLogERROR(&DAT_1418c3358);
                    puVar7 = (undefined1 *)(extraout_RAX_00 & 0xffffffffffffff00);
                  }
                  else {
                    lVar10 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x58))();
                    if (lVar10 == 0) {
                      log_InlineLogERROR(&DAT_1418c3358);
                      puVar7 = (undefined1 *)(extraout_RAX_01 & 0xffffffffffffff00);
                    }
                    else {
                      if (param_3 == '\0') {
                        uVar2 = *(byte *)(param_1 + 0x4c) + 1;
                        if ((uVar2 == 0) || (10 < uVar2)) {
                          uVar2 = 10;
                          log_InlineLogERROR("CTaskList::TaskAccumulateLottery, the nIndexEnd[%d] is error");
                        }
                        if (uVar2 != 0) {
                          uVar11 = uVar8;
                          uVar15 = uVar8;
                          do {
                            uVar1 = (int)uVar15 + *(int *)(lVar10 + uVar11 * 4);
                            uVar15 = (ulonglong)uVar1;
                            uVar11 = uVar11 + 1;
                          } while ((longlong)uVar11 < (longlong)(int)uVar2);
                        }
                      }
                      else {
                        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))();
                      }
                      iVar3 = tq::RandGet(uVar1);
                      uVar11 = 0;
                      do {
                        bVar14 = (byte)uVar11;
                        iVar4 = *(int *)(lVar10 + uVar11 * 4);
                        if ((0 < iVar4) && (uVar1 = (int)uVar8 + iVar4, uVar8 = (ulonglong)uVar1, iVar3 + 1U <= uVar1)) {
                          if (bVar14 < 10) {
                            uVar1 = *(uint *)(lVar9 + uVar11 * 4);
                            if (100 < uVar1) {
                              log_InlineLogERROR(&DAT_1418c3358);
                              return (undefined1 *)(extraout_RAX_02 & 0xffffffffffffff00);
                            }
                            *(uint *)(param_1 + 0x48) = param_2;
                            *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x4d) + '\x01';
                            if (*(int *)(param_1 + 0x50) < (int)uVar1) {
                              *(byte *)(param_1 + 0x4c) = bVar14;
                              *(uint *)(param_1 + 0x50) = uVar1;
                            }
                            FUN_1418bdab0(local_438);
                            uVar12 = FUN_1418bdb30(local_438,0,*(undefined4 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x4c),*(undefined1 *)(param_1 + 0x4d));
                            if ((char)uVar12 != '\0') {
                              (**(code **)(**(longlong **)(param_1 + 0x58) + 8))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),local_438);
                            }
                            uVar12 = FUN_1418bdb00((undefined8 *)local_438);
                            return (undefined1 *)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                          }
                          break;
                        }
                        uVar11 = (ulonglong)(byte)(bVar14 + 1);
                      } while ((byte)(bVar14 + 1) < 10);
                      puVar7 = (undefined1 *)((ulonglong)(uint3)(iVar3 + 1U >> 8) << 8);
                    }
                  }
                }
                else {
                  puVar7 = (undefined1 *)((ulonglong)uVar13 << 8);
                }
              }
              else {
                puVar7 = (undefined1 *)((ulonglong)uVar13 << 8);
              }
            }
            else {
              puVar7 = (undefined1 *)(CONCAT44(extraout_var_01,iVar4) & 0xffffffffffffff00);
            }
          }
          else {
            puVar7 = (undefined1 *)(CONCAT44(extraout_var_00,uVar2) & 0xffffffffffffff00);
          }
        }
      }
      else {
        puVar7 = (undefined1 *)(uVar8 & 0xffffffffffffff00);
      }
    }
    else {
      puVar7 = (undefined1 *)((ulonglong)(uint3)(param_2 - 0x7531 >> 8) << 8);
    }
  }
  return puVar7;
}




void FUN_1418bc9e0(longlong *param_1)

{
  FUN_1418b9e00(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418bca10(longlong param_1,uint param_2)

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
    lVar9 = *(longlong *)(lVar4 + 0x20);
    if ((((lVar9 != 0) && (*(short *)(lVar9 + 0xc) == 0)) && (*(uint *)(lVar9 + 0x2c) != 0)) &&
       (uVar6 = FUN_1418b5c40(param_1,*(uint *)(lVar9 + 0x2c),*(int *)(lVar9 + 0x30)), (char)uVar6 != '\0')) {
      FUN_1418baaf0(param_1,*(uint *)(lVar9 + 8),5);
    }
  }
  return;
}




ulonglong FUN_1418bcb40(longlong param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong in_RAX;
  undefined8 *puVar5;
  ulonglong extraout_RAX;
  ulonglong uVar6;
  void *_Dst;
  undefined8 *puVar7;
  ulonglong *puVar8;
  uint local_res10 [2];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  uVar2 = *(uint *)((longlong)param_2 + 8);
  if ((uVar2 != 0) && (in_RAX = (ulonglong)(uVar2 - 0x7531), uVar2 - 0x7531 < 9999)) {
    puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
    cVar1 = *(char *)((longlong)puVar7 + 0x29);
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    while (cVar1 == '\0') {
      if (*(uint *)(puVar7 + 3) < uVar2) {
        puVar5 = (undefined8 *)puVar7[2];
        puVar7 = puVar4;
      }
      else {
        puVar5 = (undefined8 *)*puVar7;
      }
      puVar4 = puVar7;
      puVar7 = puVar5;
      cVar1 = *(char *)((longlong)puVar5 + 0x29);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    local_40 = puVar4;
    local_48 = *(ulonglong *)(param_1 + 8);
    local_res10[0] = uVar2;
    if (*(ulonglong *)(param_1 + 8) == 0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar4 == puVar7) || (uVar2 < *(uint *)(puVar4 + 3))) {
      puVar8 = &local_38;
      local_30 = *(undefined8 *)(param_1 + 0x38);
      local_38 = *(ulonglong *)(param_1 + 8);
    }
    else {
      puVar8 = &local_48;
    }
    uVar6 = *puVar8;
    uVar3 = *(ulonglong *)(param_1 + 0x38);
    local_28 = uVar6;
    local_20 = puVar8[1];
    if ((uVar6 == 0) || (uVar6 != *(ulonglong *)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      uVar6 = extraout_RAX;
    }
    if (((local_20 == uVar3) && (*(ulonglong *)(param_1 + 0x40) < 0x15)) &&
       (uVar6 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))(*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),param_2),
       (char)uVar6 != '\0')) {
      _Dst = operator_new(0x40);
      uVar6 = 0;
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_2,0x40);
        puVar7 = FUN_1418bbbe0((longlong *)(param_1 + 8),local_res10);
        *puVar7 = _Dst;
        return CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
      }
    }
    return uVar6 & 0xffffffffffffff00;
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_1418bccb0(longlong *param_1)

{
  FUN_1418bbe10(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418bcce0(undefined8 *param_1)

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
  lVar2 = FUN_1418b7020();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1418bcd60(undefined8 *param_1)

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
  lVar2 = FUN_1418b7100();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1418bcde0(longlong *param_1)

{
  FUN_1418bbe10(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418bce10(undefined8 *param_1)

{
  *param_1 = taskdetail::CTaskList::vftable;
  FUN_1418bbe10(param_1 + 1);
  operator_delete((void *)param_1[1]);
  return;
}




undefined8 * FUN_1418bce50(undefined8 *param_1)

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
  lVar2 = FUN_1418b7020();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1418bced0(undefined8 *param_1)

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
  lVar2 = FUN_1418b7100();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1418bcf50(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = taskdetail::CTaskList::vftable;
  FUN_1418bce50(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = param_3;
  return param_1;
}




undefined8 * FUN_1418bcfc0(undefined8 *param_1,uint param_2)

{
  *param_1 = taskdetail::CTaskList::vftable;
  FUN_1418bbe10(param_1 + 1);
  operator_delete((void *)param_1[1]);
  if ((param_2 & 1) != 0) {
    FUN_1418b6790(param_1);
  }
  return param_1;
}




undefined8 * FUN_1418bd030(int param_1,longlong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    log_InlineLogERROR(&DAT_1418c3358,"IF_NOT","idUser && pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\taskdetail\\src\\tasklist.cpp",0x1e);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if ((DAT_1418cb370 & 1) == 0) {
      DAT_1418cb370 = DAT_1418cb370 | 1;
      CMyHeap::CMyHeap((CMyHeap *)&DAT_1418cb368,"CTaskList");
      atexit((_func_5014 *)&LAB_1418c27d0);
    }
    puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_1418cb368,0x68);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_1418bcf50(puVar1,param_2,param_3);
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_1418c3358,"IF_NOT","pList","f:\\version\\cqserver-78.0.11-1204\\modules\\taskdetail\\src\\tasklist.cpp",0x24);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_1418bbf20((longlong)puVar1,param_1);
      if ((char)uVar2 == '\0') {
        pcVar5 = "f:\\version\\cqserver-78.0.11-1204\\modules\\taskdetail\\src\\tasklist.cpp";
        pcVar4 = "pList->init(idUser)";
        pcVar3 = "IF_NOT";
        log_InlineLogERROR(&DAT_1418c3358);
        FUN_1418bc0b0(puVar1,pcVar3,pcVar4,pcVar5);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}




ulonglong FUN_1418bd190(longlong param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulonglong in_RAX;
  longlong lVar8;
  ulonglong extraout_RAX;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined8 extraout_RAX_00;
  longlong **pplVar11;
  byte bVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int local_res8 [2];
  uint local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88 [6];
  longlong *local_58;
  undefined8 local_50;
  
  uVar17 = (ulonglong)param_2;
  if ((*(int *)(param_1 + 0x60) == 0) || ((int)param_2 < 1)) {
    uVar17 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_res10 = param_2;
    local_res8[0] = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))();
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x58))();
    if (lVar8 == 0) {
      log_InlineLogERROR(&DAT_1418c3358);
      uVar17 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      local_res18 = operator_new(8);
      if (local_res18 == (longlong *)0x0) {
        local_88[0] = (longlong *)0x0;
      }
      else {
        *local_res18 = (longlong)local_88;
        local_88[0] = local_res18;
      }
      local_res20 = local_res18;
      local_58 = (longlong *)FUN_1418b7100();
      iVar5 = local_res8[0];
      *(undefined1 *)((longlong)local_58 + 0x21) = 1;
      local_58[1] = (longlong)local_58;
      *local_58 = (longlong)local_58;
      local_58[2] = (longlong)local_58;
      local_50 = 0;
      if (0 < (int)param_2) {
        do {
          uVar6 = tq::TimeGet(0);
          iVar7 = rand();
          srand(uVar6 + iVar7);
          iVar7 = tq::RandGet(iVar5);
          plVar13 = local_58;
          uVar15 = 0;
          bVar12 = 0;
          do {
            iVar3 = *(int *)(lVar8 + (ulonglong)bVar12 * 4);
            if ((0 < iVar3) && (uVar15 = uVar15 + iVar3, iVar7 + 1U <= uVar15)) break;
            bVar12 = bVar12 + 1;
          } while (bVar12 < 10);
          local_res8[0] = CONCAT31((int3)((uint)local_res8[0] >> 8),bVar12);
          cVar2 = *(char *)(local_58[1] + 0x21);
          plVar9 = (longlong *)local_58[1];
          plVar4 = local_58;
          while (plVar14 = plVar9, cVar2 == '\0') {
            if (*(byte *)(plVar14 + 3) < bVar12) {
              plVar9 = (longlong *)plVar14[2];
              plVar14 = plVar4;
            }
            else {
              plVar9 = (longlong *)*plVar14;
            }
            cVar2 = *(char *)((longlong)plVar9 + 0x21);
            plVar4 = plVar14;
          }
          local_b8 = plVar4;
          local_c0 = local_88[0];
          if (local_88[0] == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          plVar9 = local_58;
          if ((plVar4 == plVar13) || (bVar12 < *(byte *)(plVar4 + 3))) {
            plStack_a0 = local_58;
            local_a8 = local_88[0];
            pplVar11 = &local_a8;
          }
          else {
            pplVar11 = &local_c0;
          }
          plVar13 = *pplVar11;
          plStack_90 = pplVar11[1];
          local_98 = plVar13;
          if ((plVar13 == (longlong *)0x0) || (plVar13 != local_88[0])) {
            _invalid_parameter_noinfo();
          }
          plVar4 = plStack_90;
          if (plStack_90 == plVar9) {
            puVar10 = (undefined4 *)FUN_1418bbce0((longlong *)local_88,(byte *)local_res8);
            *puVar10 = 1;
          }
          else {
            if (plVar13 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar16 = 0;
            }
            else {
              lVar16 = *plVar13;
            }
            if (plVar4 == *(longlong **)(lVar16 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            piVar1 = (int *)((longlong)plVar4 + 0x1c);
            *piVar1 = *piVar1 + 1;
          }
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      tq::GmLogSave("testtaskaccumulate","Test TaskAccumulate, TotalNum:%d, SuccessNum:%d");
      plVar9 = local_88[0];
      plVar13 = (longlong *)*local_58;
      while( true ) {
        plVar4 = local_58;
        if ((plVar9 == (longlong *)0x0) || (plVar9 != local_88[0])) {
          _invalid_parameter_noinfo();
        }
        if (plVar13 == plVar4) break;
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar9;
        }
        if (plVar13 == *(longlong **)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar9;
        }
        if (plVar13 == *(longlong **)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        tq::GmLogSave("testtaskaccumulate","TaskAccumulate Idx:%u, Times:%d");
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar13 + 0x21) == '\0') {
          plVar4 = (longlong *)plVar13[2];
          if (*(char *)((longlong)plVar4 + 0x21) == '\0') {
            cVar2 = *(char *)(*plVar4 + 0x21);
            plVar13 = plVar4;
            plVar4 = (longlong *)*plVar4;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*plVar4 + 0x21);
              plVar13 = plVar4;
              plVar4 = (longlong *)*plVar4;
            }
          }
          else {
            cVar2 = *(char *)(plVar13[1] + 0x21);
            plVar14 = (longlong *)plVar13[1];
            plVar4 = plVar13;
            while ((plVar13 = plVar14, cVar2 == '\0' && (plVar4 == (longlong *)plVar13[2]))) {
              cVar2 = *(char *)(plVar13[1] + 0x21);
              plVar14 = (longlong *)plVar13[1];
              plVar4 = plVar13;
            }
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
      }
      plStack_a0 = (longlong *)*local_58;
      local_98 = local_88[0];
      plStack_90 = local_58;
      local_a8 = local_88[0];
      FUN_1418b89f0((longlong *)local_88,(longlong *)&local_c0,(longlong *)&local_a8,(longlong *)&local_98);
      operator_delete(local_58);
      local_58 = (longlong *)0x0;
      local_50 = 0;
      operator_delete(local_88[0]);
      uVar17 = CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
    }
  }
  return uVar17;
}




CMsg * FUN_1418bd5c0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_1418bd5f0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_1418bd600(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001418bd607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_1418bd610(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001418bd617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_1418bd620(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001418bd627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_1418bd630(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1418bd660(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = taskdetail::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1418bd6b0(undefined8 *param_1)

{
  *param_1 = taskdetail::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_1418bd720(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_1418bd750(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
  }
  else {
    plVar1 = FUN_1418b5a70();
    if (plVar1 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1418c3358);
    }
    else {
      lVar2 = (**(code **)(*plVar1 + 0x118))(plVar1);
      if (lVar2 == 0) {
        log_InlineLogERROR(&DAT_1418c3358);
      }
      else {
        lVar2 = (**(code **)(*plVar1 + 0x110))(plVar1,param_2,0);
        if (lVar2 == 0) {
          log_InlineLogERROR(&DAT_1418c3358);
        }
        else {
          FUN_1418bc410(lVar2);
        }
      }
    }
  }
  return;
}




undefined8 * FUN_1418bd880(undefined8 *param_1,byte param_2)

{
  *param_1 = taskdetail::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1418bd8d0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = taskdetail::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1418bd920(undefined8 *param_1)

{
  *param_1 = taskdetail::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_1418bd990(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}




void FUN_1418bd9c0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
  }
  else {
    plVar1 = FUN_1418b5a70();
    if (plVar1 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1418c3358);
    }
    else {
      (**(code **)(*plVar1 + 0xc0))(plVar1,param_2);
    }
  }
  return;
}




undefined8 * FUN_1418bda60(undefined8 *param_1,byte param_2)

{
  *param_1 = taskdetail::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1418bdab0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = taskdetail::CMsgTaskAccumulate::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1418bdb00(undefined8 *param_1)

{
  *param_1 = taskdetail::CMsgTaskAccumulate::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_1418bdb30(CMsg *param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5)

{
  tq::CMsg::Init(param_1);
  **(undefined2 **)(param_1 + 0x408) = 0xb;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 3000;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 7) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 5) = param_4;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 6) = param_5;
  return 1;
}




bool FUN_1418bdbc0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 3000;
}




void FUN_1418bdbf0(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(param_1 + 0x408) == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
  }
  else {
    plVar3 = FUN_1418b5a70();
    if (plVar3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1418c3358);
    }
    else {
      lVar4 = (**(code **)(*plVar3 + 0x118))(plVar3);
      if (lVar4 == 0) {
        log_InlineLogERROR(&DAT_1418c3358);
      }
      else {
        lVar4 = (**(code **)(*plVar3 + 0x110))(plVar3,param_2);
        if (lVar4 != 0) {
          uVar5 = FUN_1418ba310(lVar4,*(uint *)(*(longlong *)(param_1 + 0x408) + 7));
          if ((char)uVar5 != '\0') {
            uVar5 = FUN_1418b5b80(*(int *)(*(longlong *)(param_1 + 0x408) + 7));
            if ((char)uVar5 != '\0') {
              uVar5 = FUN_1418ba9b0(lVar4,*(uint *)(*(longlong *)(param_1 + 0x408) + 7));
              if ((short)uVar5 != 1) {
                lVar2 = *(longlong *)(param_1 + 0x408);
                cVar1 = *(char *)(lVar2 + 4);
                if (cVar1 == '\x01') {
                  FUN_1418bc620(lVar4,*(uint *)(lVar2 + 7),'\x01');
                }
                else if (cVar1 == '\x02') {
                  FUN_1418bb3d0(lVar4);
                }
                else if (cVar1 == '\x03') {
                  FUN_1418bc620(lVar4,*(uint *)(lVar2 + 7),'\0');
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




undefined8 * FUN_1418bddb0(undefined8 *param_1,byte param_2)

{
  *param_1 = taskdetail::CMsgTaskAccumulate::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1418bde00(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = taskdetail::CMsgTaskDetail::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1418bde50(undefined8 *param_1)

{
  *param_1 = taskdetail::CMsgTaskDetail::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_1418bde80(CMsg *param_1,short param_2)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    return extraout_RAX & 0xffffffffffffff00;
  }
  tq::CMsg::Init(param_1);
  **(undefined2 **)(param_1 + 0x408) = 8;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x46e;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 6) = 0;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(short *)(lVar1 + 4) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_1418bdf20(longlong param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  short *psVar1;
  longlong lVar2;
  short *in_RAX;
  
  if ((param_2 != 0) && (in_RAX = *(short **)(param_1 + 0x408), (ushort)in_RAX[3] < 0x50)) {
    *in_RAX = *in_RAX + 0xc;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8 + (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 6) * 0xc) = param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 6) * 3 + 3) * 4) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10 + (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 6) * 0xc) = param_4;
    lVar2 = *(longlong *)(param_1 + 0x408);
    psVar1 = (short *)(lVar2 + 6);
    *psVar1 = *psVar1 + 1;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}




bool FUN_1418bdfb0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x46e;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1418bdfe0(longlong param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  CMsg local_1068 [1032];
  undefined2 *local_c60;
  CMsg local_c58 [1032];
  undefined2 *local_850;
  CMsg local_848 [1032];
  undefined2 *local_440;
  CMsg local_438 [1032];
  undefined2 *local_30;
  
  local_30 = (undefined2 *)0x1418bdffc;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
  }
  else {
    plVar5 = FUN_1418b5a70();
    if (plVar5 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1418c3358);
    }
    else {
      plVar6 = (longlong *)(**(code **)(*plVar5 + 0x118))(plVar5);
      if (plVar6 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1418c3358);
      }
      else {
        sVar1 = *(short *)(*(longlong *)(param_1 + 0x408) + 4);
        if (sVar1 == 3) {
          lVar7 = (**(code **)(*plVar5 + 0x110))(plVar5,param_2,0);
          if (lVar7 == 0) {
            log_InlineLogERROR(&DAT_1418c3358);
          }
          else {
            FUN_1418bde00(local_1068);
            uVar8 = FUN_1418bde80(local_1068,3);
            if ((char)uVar8 == '\0') {
              log_InlineLogERROR(&DAT_1418c3358);
            }
            else {
              uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x408) + 6);
              if ((uVar2 == 0) || ((longlong)(int)(uVar2 - 1) * 0xc + 0x14U < 0x3fd)) {
                for (bVar10 = 0; (ushort)bVar10 < *(ushort *)(*(longlong *)(param_1 + 0x408) + 6); bVar10 = bVar10 + 1) {
                  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x408) + 8 + (ulonglong)bVar10 * 0xc);
                  uVar8 = FUN_1418ba310(lVar7,uVar3);
                  if ((char)uVar8 == '\0') {
                    uVar4 = FUN_1418bb680(lVar7,uVar3);
                    uVar8 = FUN_1418bdf20((longlong)local_1068,uVar3,2,uVar4);
                    if ((char)uVar8 == '\0') {
                      (**(code **)(*plVar6 + 8))(plVar6,param_2,local_1068);
                      local_c60[3] = 0;
                      *local_c60 = 8;
                      uVar4 = FUN_1418bb680(lVar7,uVar3);
                      uVar8 = FUN_1418ba9b0(lVar7,uVar3);
                      FUN_1418bdf20((longlong)local_1068,uVar3,(short)uVar8,uVar4);
                    }
                  }
                  else {
                    FUN_1418bca10(lVar7,uVar3);
                    uVar4 = FUN_1418bb680(lVar7,uVar3);
                    uVar8 = FUN_1418ba9b0(lVar7,uVar3);
                    uVar8 = FUN_1418bdf20((longlong)local_1068,uVar3,(short)uVar8,uVar4);
                    if ((char)uVar8 == '\0') {
                      (**(code **)(*plVar6 + 8))(plVar6,param_2,local_1068);
                      local_c60[3] = 0;
                      *local_c60 = 8;
                      uVar4 = FUN_1418bb680(lVar7,uVar3);
                      uVar8 = FUN_1418ba9b0(lVar7,uVar3);
                      FUN_1418bdf20((longlong)local_1068,uVar3,(short)uVar8,uVar4);
                    }
                  }
                }
                (**(code **)(*plVar6 + 8))(plVar6,param_2,local_1068);
              }
            }
          }
        }
        else if (sVar1 == 4) {
          lVar7 = (**(code **)(*plVar5 + 0x110))(plVar5,param_2,0);
          if (lVar7 == 0) {
            log_InlineLogERROR(&DAT_1418c3358);
          }
          else {
            uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x408) + 6);
            if ((uVar2 == 0) || ((longlong)(int)(uVar2 - 1) * 0xc + 0x14U < 0x3fd)) {
              FUN_1418bde00(local_438);
              for (bVar10 = 0; (ushort)bVar10 < *(ushort *)(*(longlong *)(param_1 + 0x408) + 6); bVar10 = bVar10 + 1) {
                uVar8 = (ulonglong)bVar10;
                uVar3 = *(uint *)(*(longlong *)(param_1 + 0x408) + 8 + uVar8 * 0xc);
                uVar9 = FUN_1418ba310(lVar7,uVar3);
                if ((char)uVar9 == '\0') {
                  uVar4 = FUN_1418bb680(lVar7,uVar3);
                  uVar8 = FUN_1418bdf20((longlong)local_438,uVar3,2,uVar4);
                  if ((char)uVar8 == '\0') {
                    (**(code **)(*plVar6 + 8))(plVar6,param_2,local_438);
                    local_30[3] = 0;
                    *local_30 = 8;
                    uVar4 = FUN_1418bb680(lVar7,uVar3);
                    uVar8 = FUN_1418ba9b0(lVar7,uVar3);
                    FUN_1418bdf20((longlong)local_438,uVar3,(short)uVar8,uVar4);
                  }
                }
                else if ((*(short *)(*(longlong *)(param_1 + 0x408) + 0xc + uVar8 * 0xc) == 5) && (uVar9 = FUN_1418ba9b0(lVar7,uVar3), (short)uVar9 == 0)) {
                  FUN_1418baaf0(lVar7,uVar3,*(short *)(*(longlong *)(param_1 + 0x408) + 0xc + uVar8 * 0xc));
                }
              }
            }
          }
        }
        else if (sVar1 == 6) {
          lVar7 = (**(code **)(*plVar5 + 0x110))(plVar5,param_2,0);
          if (lVar7 == 0) {
            log_InlineLogERROR(&DAT_1418c3358);
          }
          else {
            FUN_1418bde00(local_848);
            uVar8 = FUN_1418bde80(local_848,6);
            if ((char)uVar8 == '\0') {
              log_InlineLogERROR(&DAT_1418c3358);
            }
            else {
              for (bVar10 = 0; uVar8 = FUN_1418b6850(lVar7), bVar10 < uVar8; bVar10 = bVar10 + 1) {
                uVar3 = FUN_1418b8c40(lVar7,(ushort)bVar10);
                if ((uVar3 != 0) && (uVar8 = FUN_1418ba9b0(lVar7,uVar3), (short)uVar8 != 0)) {
                  uVar4 = FUN_1418bb680(lVar7,uVar3);
                  uVar8 = FUN_1418ba9b0(lVar7,uVar3);
                  uVar8 = FUN_1418bdf20((longlong)local_848,uVar3,(short)uVar8,uVar4);
                  if ((char)uVar8 == '\0') {
                    (**(code **)(*plVar6 + 8))(plVar6,param_2,local_848);
                    local_440[3] = 0;
                    *local_440 = 8;
                    uVar4 = FUN_1418bb680(lVar7,uVar3);
                    uVar8 = FUN_1418ba9b0(lVar7,uVar3);
                    FUN_1418bdf20((longlong)local_848,uVar3,(short)uVar8,uVar4);
                  }
                }
              }
              (**(code **)(*plVar6 + 8))(plVar6,param_2,local_848);
            }
          }
        }
        else if (sVar1 == 7) {
          lVar7 = (**(code **)(*plVar5 + 0x110))(plVar5,param_2,0);
          if (lVar7 == 0) {
            log_InlineLogERROR(&DAT_1418c3358);
          }
          else {
            FUN_1418bde00(local_c58);
            uVar8 = FUN_1418bde80(local_c58,7);
            if ((char)uVar8 == '\0') {
              log_InlineLogERROR(&DAT_1418c3358);
            }
            else {
              for (bVar10 = 0; uVar8 = FUN_1418b6850(lVar7), bVar10 < uVar8; bVar10 = bVar10 + 1) {
                uVar3 = FUN_1418b8c40(lVar7,(ushort)bVar10);
                if (uVar3 != 0) {
                  FUN_1418bca10(lVar7,uVar3);
                  uVar4 = FUN_1418bb680(lVar7,uVar3);
                  uVar8 = FUN_1418ba9b0(lVar7,uVar3);
                  uVar8 = FUN_1418bdf20((longlong)local_c58,uVar3,(short)uVar8,uVar4);
                  if ((char)uVar8 == '\0') {
                    (**(code **)(*plVar6 + 8))(plVar6,param_2,local_c58);
                    local_850[3] = 0;
                    *local_850 = 8;
                    uVar4 = FUN_1418bb680(lVar7,uVar3);
                    uVar8 = FUN_1418ba9b0(lVar7,uVar3);
                    FUN_1418bdf20((longlong)local_c58,uVar3,(short)uVar8,uVar4);
                  }
                }
              }
              (**(code **)(*plVar6 + 8))(plVar6,param_2,local_c58);
            }
          }
        }
      }
    }
  }
  return;
}




undefined8 * FUN_1418be920(undefined8 *param_1,byte param_2)

{
  *param_1 = taskdetail::CMsgTaskDetail::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1418be970(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = taskdetail::CMsgTaskDetailInfo::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1418be9c0(undefined8 *param_1)

{
  *param_1 = taskdetail::CMsgTaskDetailInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8
FUN_1418be9f0(CMsg *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8
             ,undefined4 param_9,undefined4 param_10)

{
  tq::CMsg::Init(param_1);
  **(undefined2 **)(param_1 + 0x408) = 0x28;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x46f;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = param_8;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_9;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = param_10;
  return CONCAT71((uint7)(uint3)((uint)param_10 >> 8),1);
}




ulonglong FUN_1418beac0(CMsg *param_1,undefined2 param_2,longlong param_3)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  
  if (param_3 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  tq::CMsg::Init(param_1);
  **(undefined2 **)(param_1 + 0x408) = 0x28;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x46f;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = *(undefined4 *)(param_3 + 0x24);
  uVar1 = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}




bool FUN_1418beba0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x46f;
}




void FUN_1418bebd0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418c3358);
    return;
  }
  plVar2 = FUN_1418b5a70();
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1418c3358);
    return;
  }
  plVar3 = (longlong *)(**(code **)(*plVar2 + 0x118))(plVar2);
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1418c3358);
  }
  else {
    lVar4 = (**(code **)(*plVar2 + 0x110))(plVar2,param_2,0);
    if (lVar4 != 0) {
      uVar5 = FUN_1418ba310(lVar4,*(uint *)(*(longlong *)(param_1 + 0x408) + 8));
      if ((char)uVar5 != '\0') {
        uVar1 = FUN_1418ba380(lVar4,*(uint *)(*(longlong *)(param_1 + 0x408) + 8),1);
        *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = uVar1;
        uVar1 = FUN_1418ba380(lVar4,*(uint *)(*(longlong *)(param_1 + 0x408) + 8),2);
        *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = uVar1;
        uVar1 = FUN_1418ba380(lVar4,*(uint *)(*(longlong *)(param_1 + 0x408) + 8),3);
        *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = uVar1;
        uVar1 = FUN_1418ba380(lVar4,*(uint *)(*(longlong *)(param_1 + 0x408) + 8),4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = uVar1;
        uVar1 = FUN_1418ba380(lVar4,*(uint *)(*(longlong *)(param_1 + 0x408) + 8),5);
        *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = uVar1;
        uVar1 = FUN_1418ba380(lVar4,*(uint *)(*(longlong *)(param_1 + 0x408) + 8),6);
        *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = uVar1;
        uVar1 = FUN_1418ba380(lVar4,*(uint *)(*(longlong *)(param_1 + 0x408) + 8),7);
        *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = uVar1;
        (**(code **)(*plVar3 + 8))(plVar3,param_2,param_1);
      }
    }
  }
  return;
}




undefined8 * FUN_1418bee00(undefined8 *param_1,byte param_2)

{
  *param_1 = taskdetail::CMsgTaskDetailInfo::vftable;
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
  
  local_res10 = _decode_pointer(DAT_1418cb920);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_1418cb920);
    local_res18[0] = _decode_pointer(DAT_1418cb918);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_1418cb920 = _encode_pointer(local_res10);
    DAT_1418cb918 = _encode_pointer(local_res18[0]);
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




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_1418cb338) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




bool FUN_1418bf13c(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_1418cb918 = _encode_pointer(puVar1);
  DAT_1418cb920 = DAT_1418cb918;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_1418bf7b4();
    atexit(FUN_1418bf7ec);
    atexit((_func_5014 *)&LAB_1418bf7a8);
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
    if (DAT_1418cb374 < 1) {
      return 0;
    }
    DAT_1418cb374 = DAT_1418cb374 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_1418cb908 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1418cb908;
        pvVar3 = DAT_1418cb908;
      }
      DAT_1418cb908 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1418bf216;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1418bf216:
    if (DAT_1418cb900 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_1418cb920);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_1418cb918);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_1418cb920);
            plVar12 = (longlong *)_decode_pointer(DAT_1418cb918);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_1418cb918 = _encoded_null();
        DAT_1418cb920 = DAT_1418cb918;
      }
      DAT_1418cb900 = 0;
      if (!bVar2) {
        LOCK();
        DAT_1418cb908 = (void *)0x0;
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
      bVar13 = DAT_1418cb908 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1418cb908;
        pvVar3 = DAT_1418cb908;
      }
      DAT_1418cb908 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1418bf33f;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1418bf33f:
    if (DAT_1418cb900 == 0) {
      DAT_1418cb900 = 1;
      iVar4 = _initterm_e(&DAT_1418c3258,&DAT_1418c3268);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_1418c3248,&DAT_1418c3250);
      DAT_1418cb900 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_1418cb908 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_1418cb910 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_1418cb910), BVar5 != 0)) {
      (*DAT_1418cb910)(param_1,2,param_3);
    }
    DAT_1418cb374 = DAT_1418cb374 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x0001418bf4b8) */
/* WARNING: Removing unreachable block (ram,0x0001418bf44f) */
/* WARNING: Removing unreachable block (ram,0x0001418bf4f3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_1418cb374 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_1418cb350 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_1418cb350 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_1418b13a0();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_1418b13a0();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_1418cb350 = 0xffffffff;
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




undefined8 FUN_1418bf570(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_1418cb420);
  local_30 = DAT_1418cb518;
  local_38 = RtlLookupFunctionEntry(DAT_1418cb518,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_1418cb4b8 = local_res8;
    DAT_1418cb518 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_1418cb420,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_1418cb390 = DAT_1418cb518;
  _DAT_1418cb4a0 = local_res8[0];
  _DAT_1418cb380 = 0xc0000409;
  _DAT_1418cb384 = 1;
  local_20 = DAT_1418cb338;
  local_18 = DAT_1418cb340;
  DAT_1418cb418 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1418c55f0);
  if (DAT_1418cb418 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_1418bf7b4(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1418c5ea8; puVar1 < &DAT_1418c5ea8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_1418bf7ec(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1418c5eb8; puVar1 < &DAT_1418c5eb8; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_1418b0000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_1418b0000);
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
  if (DAT_1418cb338 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_1418cb338 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_1418cb338 == 0x2b992ddfa232) {
      DAT_1418cb338 = 0x2b992ddfa233;
    }
  }
  DAT_1418cb340 = ~DAT_1418cb338;
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




void Unwind_1418bfaa0(undefined8 param_1,longlong param_2)

{
  FUN_1418b1030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfac0(undefined8 param_1,longlong param_2)

{
  FUN_1418bd6b0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1418bfae0(undefined8 param_1,longlong param_2)

{
  FUN_1418bd920((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_1418bfb00(undefined8 param_1,longlong param_2)

{
  FUN_1418bde50((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x838));
  return;
}




void Unwind_1418bfb20(undefined8 param_1,longlong param_2)

{
  FUN_1418bdb00((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc48));
  return;
}




void Unwind_1418bfb40(undefined8 param_1,longlong param_2)

{
  FUN_1418be9c0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x1058));
  return;
}




void Unwind_1418bfb60(undefined8 param_1,longlong param_2)

{
  FUN_1418b1030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfb80(undefined8 param_1,longlong param_2)

{
  FUN_1418bd6b0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1418bfba0(undefined8 param_1,longlong param_2)

{
  FUN_1418bd920((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_1418bfbc0(undefined8 param_1,longlong param_2)

{
  FUN_1418bde50((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x838));
  return;
}




void Unwind_1418bfbe0(undefined8 param_1,longlong param_2)

{
  FUN_1418bdb00((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc48));
  return;
}




void Unwind_1418bfc00(undefined8 param_1,longlong param_2)

{
  FUN_1418be9c0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x1058));
  return;
}




undefined * Catch_1418bfc20(void)

{
  log_InlineLogCATCH_ERROR("TaskDetail::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_1418b14b0;
}




void Unwind_1418bfc60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60));
  return;
}




undefined8 Catch_1418bfc80(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1418b155b;
}




void Unwind_1418bfcc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfce0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfd00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfd20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfd40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418bfd60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfd80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418bfda0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfdc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418bfde0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfe00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418bfe20(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfe40(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfe60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfe80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418bfea0(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfec0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bfee0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418bff00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bff20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418bff40(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bff60(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bff80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bffa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418bffc0(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418bffe0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0000(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418c0020(undefined8 param_1,longlong param_2)

{
  FUN_1418bde50((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418c0040(undefined8 param_1,longlong param_2)

{
  FUN_1418bde50((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418c0060(undefined8 param_1,longlong param_2)

{
  FUN_1418be9c0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1418c0080(undefined8 param_1,longlong param_2)

{
  FUN_1418bde50((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_1418c00a0(undefined8 param_1,longlong param_2)

{
  FUN_1418bde50((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418c00c0(undefined8 param_1,longlong param_2)

{
  FUN_1418bde50((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418c00e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418c0100(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418c0120(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0140(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418c0160(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418c0180(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1418c01a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1418c01d0(void)

{
  FUN_1418b16d0();
  return;
}




void Catch_1418c01f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1418c0220(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c0240(undefined8 param_1,longlong param_2)

{
  FUN_1418b3c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0260(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0280(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1418c02a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418c02c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418c02e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418c0300(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0320(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418c0340(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0360(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418c0380(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418c03a0(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c03c0(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c03e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b3ec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0400(undefined8 param_1,longlong param_2)

{
  FUN_1418b3c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0420(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0440(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c0460(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0480(undefined8 param_1,longlong param_2)

{
  FUN_1418b3c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c04a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418c04c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418c04e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1418c0500(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418c0520(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0540(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418c0560(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0580(undefined8 param_1,longlong param_2)

{
  FUN_1418b4430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c05a0(undefined8 param_1,longlong param_2)

{
  FUN_1418b3ec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c05c0(undefined8 param_1,longlong param_2)

{
  FUN_1418b3c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c05e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0600(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c0620(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0640(undefined8 param_1,longlong param_2)

{
  FUN_1418b3c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0660(undefined8 param_1,longlong param_2)

{
  FUN_1418b3ec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_1418c0680(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1418b5221;
}




void Unwind_1418c06c0(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c06e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0700(undefined8 param_1,longlong param_2)

{
  FUN_1418b3c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0720(undefined8 param_1,longlong param_2)

{
  FUN_1418b3ec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0740(undefined8 param_1,longlong param_2)

{
  FUN_1418b4430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0760(undefined8 param_1,longlong param_2)

{
  FUN_1418b4bd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0780(undefined8 param_1,longlong param_2)

{
  FUN_1418b4430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c07a0(undefined8 param_1,longlong param_2)

{
  FUN_1418b3ec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c07c0(undefined8 param_1,longlong param_2)

{
  FUN_1418b3c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c07e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0800(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c0820(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0840(undefined8 param_1,longlong param_2)

{
  FUN_1418b3c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0860(undefined8 param_1,longlong param_2)

{
  FUN_1418b3ec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0880(undefined8 param_1,longlong param_2)

{
  FUN_1418b4430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c08a0(undefined8 param_1,longlong param_2)

{
  FUN_1418b4bd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c08c0(undefined8 param_1,longlong param_2)

{
  FUN_1418b5660(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418c08e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b4bd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0900(undefined8 param_1,longlong param_2)

{
  FUN_1418b4430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0920(undefined8 param_1,longlong param_2)

{
  FUN_1418b3ec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0940(undefined8 param_1,longlong param_2)

{
  FUN_1418b3c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0960(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0980(undefined8 param_1,longlong param_2)

{
  FUN_1418b5710((longlong *)(*(longlong *)(param_2 + 0x80) + 0x10));
  return;
}




undefined * Catch_1418c09a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1418b5800;
}




void Unwind_1418c09e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b5660(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_1418c0a00(undefined8 param_1,longlong param_2)

{
  FUN_1418b4bd0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1418c0a20(undefined8 param_1,longlong param_2)

{
  FUN_1418b4430(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1418c0a40(undefined8 param_1,longlong param_2)

{
  FUN_1418b3ec0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1418c0a60(undefined8 param_1,longlong param_2)

{
  FUN_1418b3c60(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1418c0a80(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1418c0aa0(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c0ac0(undefined8 param_1,longlong param_2)

{
  FUN_1418b39c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0ae0(undefined8 param_1,longlong param_2)

{
  FUN_1418b3c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0b00(undefined8 param_1,longlong param_2)

{
  FUN_1418b3ec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0b20(undefined8 param_1,longlong param_2)

{
  FUN_1418b4430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0b40(undefined8 param_1,longlong param_2)

{
  FUN_1418b4bd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0b60(undefined8 param_1,longlong param_2)

{
  FUN_1418b5660(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0b80(undefined8 param_1,longlong param_2)

{
  FUN_1418b5710((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1418c0ba0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_1418c0bc0(undefined8 param_1,longlong param_2)

{
  FUN_1418b5710((longlong *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Unwind_1418c0be0(undefined8 param_1,longlong param_2)

{
  FUN_1418bdb00((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418c0c00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418c0c20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418c0c40(void)

{
  DAT_1418cb370 = DAT_1418cb370 & 0xfffffffe;
  return;
}




void Unwind_1418c0c60(void)

{
  DAT_1418cb370 = DAT_1418cb370 & 0xfffffffe;
  return;
}




void Unwind_1418c0c80(void)

{
  DAT_1418cb370 = DAT_1418cb370 & 0xfffffffe;
  return;
}




void Unwind_1418c0ca0(void)

{
  DAT_1418cb370 = DAT_1418cb370 & 0xfffffffe;
  return;
}




void Unwind_1418c0cc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418c0ce0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418c0d00(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0d20(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1418c0d40(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1418c0d70(void)

{
  FUN_1418b16d0();
  return;
}




void Catch_1418c0d90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1418c0dc0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1418c0df0(void)

{
  FUN_1418b16d0();
  return;
}




void Catch_1418c0e10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1418c0e40(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c0e60(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c0e80(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0ea0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0ec0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0ee0(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c0f00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1418c0f20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418c0f40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418c0f60(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418c0f80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1418c0fa0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418c0fc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418c0fe0(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418c1000(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418c1020(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418c1040(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1418c1060(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418c1080(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c10a0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c10c0(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c10e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1100(undefined8 param_1,longlong param_2)

{
  FUN_1418b7420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1120(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1140(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1160(undefined8 param_1,longlong param_2)

{
  FUN_1418b7440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1180(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c11a0(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c11c0(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c11e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1200(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1220(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c1240(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1260(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1280(undefined8 param_1,longlong param_2)

{
  FUN_1418be9c0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1418c12a0(undefined8 param_1,longlong param_2)

{
  FUN_1418be9c0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1418c12c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418c12e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418c1300(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1418c1320(undefined8 param_1,longlong param_2)

{
  FUN_1418b1730((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418c1340(undefined8 param_1,longlong param_2)

{
  FUN_1418b8580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1360(undefined8 param_1,longlong param_2)

{
  FUN_1418b7420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1380(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c13a0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c13c0(undefined8 param_1,longlong param_2)

{
  FUN_1418b85a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c13e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b7440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1400(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1420(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1440(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c1460(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1480(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c14a0(undefined8 param_1,longlong param_2)

{
  FUN_1418b7420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c14c0(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c14e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1500(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1520(undefined8 param_1,longlong param_2)

{
  FUN_1418b7440(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_1418c1540(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1418ba2b4;
}




void Unwind_1418c1580(undefined8 param_1,longlong param_2)

{
  FUN_1418be9c0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1418c15a0(undefined8 param_1,longlong param_2)

{
  FUN_1418b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c15c0(undefined8 param_1,longlong param_2)

{
  FUN_1418b85a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c15e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b7440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1600(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1620(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1640(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c1660(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1680(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c16a0(undefined8 param_1,longlong param_2)

{
  FUN_1418b7420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c16c0(undefined8 param_1,longlong param_2)

{
  FUN_1418b8580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c16e0(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c1700(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1720(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1740(undefined8 param_1,longlong param_2)

{
  FUN_1418b7440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1760(undefined8 param_1,longlong param_2)

{
  FUN_1418b85a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1780(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30));
  return;
}




undefined * Catch_1418c17a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1418bc05d;
}




undefined * Catch_1418c17e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1418bc185;
}




void Unwind_1418c1820(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x38));
  return;
}




undefined8 Catch_1418c1840(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return 0x1418bc3e2;
}




void Unwind_1418c1880(undefined8 param_1,longlong param_2)

{
  FUN_1418bdb00((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418c18a0(undefined8 param_1,longlong param_2)

{
  FUN_1418bbde0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418c18c0(undefined8 param_1,longlong param_2)

{
  FUN_1418b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c18e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b85a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1900(undefined8 param_1,longlong param_2)

{
  FUN_1418b7440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1920(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1940(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1960(undefined8 param_1,longlong param_2)

{
  FUN_1418b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1980(undefined8 param_1,longlong param_2)

{
  FUN_1418b8580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c19a0(undefined8 param_1,longlong param_2)

{
  FUN_1418b7420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c19c0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c19e0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1a00(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c1a20(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1a40(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1a60(undefined8 param_1,longlong param_2)

{
  FUN_1418b7420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1a80(undefined8 param_1,longlong param_2)

{
  FUN_1418b8580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1aa0(undefined8 param_1,longlong param_2)

{
  FUN_1418b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1ac0(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c1ae0(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1b00(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1b20(undefined8 param_1,longlong param_2)

{
  FUN_1418b7440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1b40(undefined8 param_1,longlong param_2)

{
  FUN_1418b85a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1b60(undefined8 param_1,longlong param_2)

{
  FUN_1418b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1b80(undefined8 param_1,longlong param_2)

{
  FUN_1418bccb0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1ba0(undefined8 param_1,longlong param_2)

{
  FUN_1418b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1bc0(undefined8 param_1,longlong param_2)

{
  FUN_1418b8580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1be0(undefined8 param_1,longlong param_2)

{
  FUN_1418b7420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1c00(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1c20(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1c40(undefined8 param_1,longlong param_2)

{
  FUN_1418bcde0((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_1418c1c60(undefined8 param_1,longlong param_2)

{
  FUN_1418bccb0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1c80(undefined8 param_1,longlong param_2)

{
  FUN_1418b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1ca0(undefined8 param_1,longlong param_2)

{
  FUN_1418b8580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1cc0(undefined8 param_1,longlong param_2)

{
  FUN_1418b7420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1ce0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1d00(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1d20(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c1d40(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1d60(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1d80(undefined8 param_1,longlong param_2)

{
  FUN_1418b7420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1da0(undefined8 param_1,longlong param_2)

{
  FUN_1418b8580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1dc0(undefined8 param_1,longlong param_2)

{
  FUN_1418b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1de0(undefined8 param_1,longlong param_2)

{
  FUN_1418bccb0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1e00(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c1e20(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1e40(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1e60(undefined8 param_1,longlong param_2)

{
  FUN_1418b7440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1e80(undefined8 param_1,longlong param_2)

{
  FUN_1418b85a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1ea0(undefined8 param_1,longlong param_2)

{
  FUN_1418b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1ec0(undefined8 param_1,longlong param_2)

{
  FUN_1418bbde0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1ee0(undefined8 param_1,longlong param_2)

{
  FUN_1418bcde0((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_1418c1f00(undefined8 param_1,longlong param_2)

{
  FUN_1418bcde0((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_1418c1f20(undefined8 param_1,longlong param_2)

{
  FUN_1418bccb0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1f40(undefined8 param_1,longlong param_2)

{
  FUN_1418b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1f60(undefined8 param_1,longlong param_2)

{
  FUN_1418b8580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1f80(undefined8 param_1,longlong param_2)

{
  FUN_1418b7420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1fa0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1fc0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6930(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c1fe0(void)

{
  DAT_1418cb370 = DAT_1418cb370 & 0xfffffffe;
  return;
}




void Unwind_1418c2000(undefined8 param_1,longlong param_2)

{
  FUN_1418b6790(*(void **)(param_2 + 0x68));
  return;
}




undefined8 Catch_1418c2020(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1418bd13e;
}




void Unwind_1418c2060(void)

{
  FUN_1418b16d0();
  return;
}




void Unwind_1418c2090(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1418c20b0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1418c20d0(undefined8 param_1,longlong param_2)

{
  FUN_1418b7440((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1418c20f0(undefined8 param_1,longlong param_2)

{
  FUN_1418b85a0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1418c2110(undefined8 param_1,longlong param_2)

{
  FUN_1418b9790((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1418c2130(undefined8 param_1,longlong param_2)

{
  FUN_1418bbde0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_1418c2150(undefined8 param_1,longlong param_2)

{
  FUN_1418bc9e0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_1418c2170(undefined8 param_1,longlong param_2)

{
  FUN_1418bbde0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_1418c2190(undefined8 param_1,longlong param_2)

{
  FUN_1418b9790((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1418c21b0(undefined8 param_1,longlong param_2)

{
  FUN_1418b85a0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1418c21d0(undefined8 param_1,longlong param_2)

{
  FUN_1418b7440((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1418c21f0(undefined8 param_1,longlong param_2)

{
  FUN_1418b6ea0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1418c2210(undefined8 param_1,longlong param_2)

{
  FUN_1418b69b0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1418c2230(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c2250(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1418c2270(void)

{
  log_InlineLogCATCH_ERROR("Pigeon::CMsgLogin::Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return 0x1418bd865;
}




void Unwind_1418c22c0(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c22e0(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c2300(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1418c2320(void)

{
  log_InlineLogCATCH_ERROR("TaskDetail CMsgLogout::Process idActor:%d,MsgType:%d @%s,%d");
  return 0x1418bda4e;
}




void Unwind_1418c2370(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c2390(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c23b0(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1418c23d0(void)

{
  log_InlineLogCATCH_ERROR("CMsgTaskAccumulate::Process @%s,%d");
  return 0x1418bdd97;
}




void Unwind_1418c2410(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c2430(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c2450(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1418c2470(undefined8 param_1,longlong param_2)

{
  FUN_1418bde50((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_1418c2490(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_1418c24b0(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_1418c24d0(undefined8 param_1,longlong param_2)

{
  FUN_1418bde50((undefined8 *)(param_2 + 0x860));
  return;
}




void Unwind_1418c24f0(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0((undefined8 *)(param_2 + 0x860));
  return;
}




void Unwind_1418c2510(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0((undefined8 *)(param_2 + 0x860));
  return;
}




void Unwind_1418c2530(undefined8 param_1,longlong param_2)

{
  FUN_1418bde50((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418c2550(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418c2570(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418c2590(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418c25b0(undefined8 param_1,longlong param_2)

{
  FUN_1418bde50((undefined8 *)(param_2 + 0xc70));
  return;
}




void Unwind_1418c25d0(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0((undefined8 *)(param_2 + 0xc70));
  return;
}




undefined8 Catch_1418c25f0(void)

{
  log_InlineLogCATCH_ERROR("TaskDetail::Actor:%d,MsgType:%d,Action:%d @%s,%d");
  return 0x1418be8f4;
}




void Unwind_1418c2650(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c2670(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418c2690(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1418c26b0(undefined8 param_1,longlong param_2)

{
  FUN_1418bd5f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_1418c26c8(void)

{
  _unlock(8);
  return;
}




void FUN_1418c26e1(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418c2711(void)

{
  _DAT_1418cb350 = 0xffffffff;
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




bool FUN_1418c27a0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=668 failed=0 total=758 */
