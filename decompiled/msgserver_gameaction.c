/* Targeted decompile MsgServer.exe window [140119000,140131000) */


void FUN_140119010(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000140119027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1);
  return;
}




void FUN_140119030(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_140119070(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140944540);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1401190f0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140944540);
  }
  operator_new(param_1 << 3);
  return;
}




longlong FUN_140119160(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void * FUN_140119270(void *param_1,longlong param_2,longlong param_3)

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




undefined4 * FUN_1401192b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 2));
  return param_1;
}




void FUN_1401192e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001401192fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  return;
}




void * FUN_1401193b0(void *param_1,longlong param_2,void *param_3)

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




bool FUN_140119480(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_1400fda10(param_1,1,1);
  iVar2 = FUN_1400ff680(uVar1);
  return iVar2 == 4;
}




void FUN_1401194b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0001401194d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}




uint FUN_1401194e0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
  return (uint)(uVar2 >> 10) & 1;
}




uint FUN_140119510(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
  return (uint)(uVar2 >> 6) & 1;
}




uint FUN_140119540(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
  return (uint)(uVar2 >> 4) & 1;
}




uint FUN_140119570(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
  return (uint)(uVar2 >> 0x14) & 1;
}




uint FUN_1401195a0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
  return (uint)(uVar2 >> 0x15) & 1;
}




uint FUN_1401195d0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
  return (uint)(uVar2 >> 0x1c) & 1;
}




uint FUN_140119600(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
  return (uint)(uVar2 >> 0x1d) & 1;
}




uint FUN_140119630(longlong param_1)

{
  longlong *plVar1;
  uint extraout_var;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return extraout_var & 1;
}




uint FUN_140119660(longlong param_1)

{
  longlong *plVar1;
  uint extraout_var;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return extraout_var >> 5 & 1;
}




uint FUN_140119690(longlong param_1)

{
  longlong *plVar1;
  uint extraout_var;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return extraout_var >> 7 & 1;
}




uint FUN_1401196c0(longlong param_1)

{
  longlong *plVar1;
  uint extraout_var;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return extraout_var >> 8 & 1;
}




uint FUN_1401196f0(longlong param_1)

{
  longlong *plVar1;
  uint extraout_var;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return extraout_var >> 0xd & 1;
}




uint FUN_140119750(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 0x10))((longlong *)**(undefined8 **)(param_1 + 0x10),3);
  uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return uVar1 % 1000;
}




undefined8 FUN_140119790(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140008520();
  if (*(longlong *)(lVar1 + 0x88) == 0) {
    log_InlineLogERROR(&DAT_1406d9c10);
    return *(undefined8 *)(lVar1 + 0x88);
  }
  return *(undefined8 *)(lVar1 + 0x88);
}




void FUN_1401197f0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((*(longlong *)(lVar1 + 0x60) != 0) && (*(char *)(lVar1 + 0x68) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000140119818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x60))(*(longlong **)(lVar1 + 0x60),0x17,param_2);
    return;
  }
  log_InlineLogERROR(&DAT_1406d9c10);
  return;
}




undefined * FUN_140119850(void)

{
  if ((DAT_140975d60 & 1) == 0) {
    DAT_140975d60 = DAT_140975d60 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140975d58,"CGameAction");
    atexit((_func_5014 *)&LAB_1406d66e0);
  }
  return &DAT_140975d58;
}




void FUN_1401198b0(__uint64 param_1)

{
  if ((DAT_140975d60 & 1) == 0) {
    DAT_140975d60 = DAT_140975d60 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140975d58,"CGameAction");
    atexit((_func_5014 *)&LAB_1406d66e0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140119905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140975d58,param_1);
  return;
}




void FUN_140119910(void *param_1)

{
  if ((DAT_140975d60 & 1) == 0) {
    DAT_140975d60 = DAT_140975d60 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140975d58,"CGameAction");
    atexit((_func_5014 *)&LAB_1406d66e0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140119965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140975d58,param_1);
  return;
}




void FUN_140119970(void *param_1)

{
  if ((DAT_140975d60 & 1) == 0) {
    DAT_140975d60 = DAT_140975d60 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140975d58,"CGameAction");
    atexit((_func_5014 *)&LAB_1406d66e0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001401199c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140975d58,param_1);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_1401199d0(longlong param_1,undefined8 *param_2,char *param_3,longlong *param_4,undefined8 param_5,undefined4 param_6,char *param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  longlong *plVar8;
  IStringManager *pIVar9;
  undefined8 uVar10;
  longlong lVar11;
  char *pcVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_908 [32];
  int *local_8e8;
  int *local_8e0;
  int *local_8d8;
  undefined1 *local_8d0;
  int *local_8c8;
  undefined1 *local_8c0;
  undefined1 *local_8b8;
  undefined4 *local_8b0;
  undefined4 *local_8a8;
  undefined4 *local_8a0;
  undefined4 *local_898;
  undefined4 *local_890;
  int *local_888;
  undefined4 *local_880;
  int *local_878;
  undefined1 *local_870;
  undefined1 *local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  char *local_850;
  int local_848;
  int local_844;
  undefined4 local_840;
  int local_83c [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_830;
  undefined8 local_828;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_820 [40];
  int local_7f8;
  int local_7f4;
  undefined4 local_7f0;
  uint local_7ec;
  undefined4 local_7e8;
  int local_7e4;
  int local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  int local_7c8;
  undefined4 local_7c4;
  int local_7c0;
  undefined1 local_7bc [4];
  undefined1 local_7b8 [4];
  undefined1 local_7b4 [4];
  undefined1 local_7b0 [4];
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined1 local_79c [4];
  undefined1 local_798 [4];
  undefined1 local_794 [4];
  undefined1 local_790 [8];
  undefined1 local_788 [1072];
  char local_358;
  undefined1 local_357 [255];
  char local_258;
  undefined1 local_257 [255];
  char local_158 [256];
  ulonglong local_58;
  
  local_828 = 0xfffffffffffffffe;
  local_58 = DAT_1409707c0 ^ (ulonglong)auStack_908;
  if (param_2 == (undefined8 *)0x0) {
    local_8e8 = (int *)CONCAT44(local_8e8._4_4_,0x1050);
    log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","pAction","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
    return 0;
  }
  if (param_4 == (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    uVar2 = (**(code **)(*plVar8 + 0x48))(plVar8);
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    uVar3 = (**(code **)(*plVar8 + 0x40))(plVar8);
    local_8e8 = (int *)CONCAT44(local_8e8._4_4_,0x1054);
    log_InlineLogDBERROR
              ("table:cq_action/cq_newaction, CGameAction::ProcessActionItemOnly() ActionID=%u, ActionType=%u at %s, %d",(ulonglong)uVar3,(ulonglong)uVar2,
               "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
    return 0;
  }
  plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
  iVar4 = (**(code **)(*plVar8 + 0x48))();
  if (iVar4 == 0x191) {
    local_83c[0] = 0;
    local_848 = 0;
    local_83c[1] = 0;
    local_840 = 0;
    local_844 = 0;
    local_8d8 = &local_844;
    local_8e0 = &local_840;
    local_8e8 = local_83c + 1;
    iVar4 = sscanf(param_3,"%u %d %d %d %d",local_83c,&local_848);
    if (3 < iVar4) {
      if (local_83c[0] != 0) {
        *(int *)((longlong)param_4 + 0xa34) = local_83c[0];
        local_830 = local_820;
        uVar10 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                           (local_820,"");
        FUN_140117b50(param_4,uVar10);
        FUN_14037d4a0(local_788);
        local_8e8._0_4_ = local_840;
        iVar4 = FUN_14037d520(local_788,5,local_844,local_848);
        if (iVar4 == 0) {
          local_8e8._0_4_ = 0x1069;
          log_InlineLogERROR(&DAT_1406d9c10,"IF_OK","msg.Create(EVENT_LAYNPC, nRegion, nType, nLookFace)",
                             "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        }
        else {
          (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_788);
        }
        FUN_14037d4f0(local_788);
        return 1;
      }
      local_8e8 = (int *)CONCAT44(local_8e8._4_4_,0x1064);
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","idNextTask != ID_NONE","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
      return 0;
    }
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    uVar2 = (**(code **)(*plVar8 + 0x40))(plVar8);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar2,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1060);
  }
  else {
    if (iVar4 == 0x192) {
      local_848 = 0;
      local_8e0 = &local_848;
      local_8e8 = (int *)local_158;
      iVar4 = sscanf(param_3,"%s %s %s %d",&local_358,&local_258);
      if (iVar4 != 4) {
        plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        uVar2 = (**(code **)(*plVar8 + 0x40))(plVar8);
        log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar2,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1078);
        return 0;
      }
      iVar4 = _stricmp(&local_358,"all");
      if (iVar4 == 0) {
        uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
        plVar8 = (longlong *)FUN_1400875f0(uVar10);
        lVar14 = *plVar8;
        uVar6 = (**(code **)(param_4[2] + 0x168))();
        iVar4 = (**(code **)(lVar14 + 0x90))(plVar8,uVar6);
      }
      else {
        iVar4 = _stricmp(&local_358,"furniture");
        if (iVar4 == 0) {
          uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
          plVar8 = (longlong *)FUN_1400875f0(uVar10);
          lVar14 = *plVar8;
          uVar6 = (**(code **)(param_4[2] + 0x168))();
          iVar4 = (**(code **)(lVar14 + 0x98))(plVar8,uVar6);
        }
        else {
          iVar4 = _stricmp(&local_358,"name");
          if (iVar4 == 0) {
            uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
            plVar8 = (longlong *)FUN_1400875f0(uVar10);
            lVar14 = *plVar8;
            uVar6 = (**(code **)(param_4[2] + 0x168))();
            iVar4 = (**(code **)(lVar14 + 0xa0))(plVar8,uVar6,&local_258);
          }
          else {
            iVar4 = _stricmp(&local_358,"type");
            if (iVar4 != 0) {
              return 0;
            }
            uVar7 = strtoul(&local_258,(char **)0x0,10);
            uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
            plVar8 = (longlong *)FUN_1400875f0(uVar10);
            lVar14 = *plVar8;
            uVar6 = (**(code **)(param_4[2] + 0x168))();
            iVar4 = (**(code **)(lVar14 + 0xa8))(plVar8,uVar6,uVar7);
          }
        }
      }
      iVar5 = _stricmp(local_158,"<");
      if ((iVar5 == 0) && (iVar4 < local_848)) {
        return 1;
      }
      iVar5 = _stricmp(local_158,"==");
      if ((iVar5 == 0) && (iVar4 == local_848)) {
        return 1;
      }
      return 0;
    }
    if (iVar4 == 0x193) {
      if (param_7 != (char *)0x0) {
        lVar14 = -1;
        pcVar12 = param_7;
        do {
          if (lVar14 == 0) break;
          lVar14 = lVar14 + -1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        if (lVar14 != -2) {
          plVar8 = (longlong *)FUN_140087d40();
          lVar14 = (**(code **)(*plVar8 + 0x60))(plVar8);
          if (lVar14 == 0) {
            plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,0);
            uVar2 = (**(code **)(*plVar8 + 0x48))(plVar8);
            log_InlineLogDBERROR
                      ("table:cq_action/cq_newaction, ERROR: CGameAction::ProcessActionItemOnly() ActionID=%u at %s, %d",(ulonglong)uVar2,
                       "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x10a1);
            return 0;
          }
          memset(&local_7f8,0,0x6c);
          local_83c[0] = 0;
          local_840 = 0;
          local_844 = 0;
          local_8d8 = local_83c;
          local_8e0 = &local_840;
          local_8e8 = &local_844;
          iVar4 = sscanf(param_7,"%d %d %d %d %d",&local_7ec,&local_7e8);
          if (iVar4 < 3) {
            local_8e8 = (int *)CONCAT44(local_8e8._4_4_,0x10ac);
            log_InlineLogERROR(&DAT_1406d9c10,"IF_NOT_","ret >= 3","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
            return 0;
          }
          uVar10 = (**(code **)(param_4[2] + 0x160))(param_4 + 2);
          cVar1 = FUN_1402c3cc0(uVar10,local_7ec,local_7e8);
          if (cVar1 != '\0') {
            uVar10 = (**(code **)(param_4[2] + 0x160))(param_4 + 2);
            local_8e8 = local_83c + 1;
            cVar1 = FUN_1402c8370(uVar10,local_7ec,local_7e8,0x1040);
            if (cVar1 == '\0') {
              local_358 = '\0';
              memset(local_357,0,0xff);
              local_258 = '\0';
              memset(local_257,0,0xff);
              local_848 = 0;
              local_850 = &local_258;
              local_858 = local_7b0;
              local_860 = local_7b4;
              local_868 = local_7b8;
              local_870 = local_7bc;
              local_878 = &local_7c0;
              local_880 = &local_7c4;
              local_888 = &local_7c8;
              local_890 = &local_7cc;
              local_898 = &local_7d0;
              local_8a0 = &local_7d4;
              local_8a8 = &local_7d8;
              local_8b0 = &local_7dc;
              local_8b8 = local_79c;
              local_8c0 = local_794;
              local_8c8 = &local_848;
              local_8d0 = local_798;
              local_8d8 = &local_7f4;
              local_8e0 = &local_7e0;
              local_8e8 = (int *)local_790;
              iVar4 = sscanf(param_3,"%s %d %d %d %d %d %d %u %u %d %d %d %d %d %d %d %d %d %d %d %d %s",&local_358,&local_7e4);
              if (iVar4 < 5) {
                plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
                uVar2 = (**(code **)(*plVar8 + 0x40))(plVar8);
                log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar2,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x10c3);
                return 0;
              }
              local_7ac = 0;
              local_7a8 = 0;
              local_7a4 = 0;
              local_7a0 = 0;
              memmove(&local_7ac,&local_258,0xf);
              if (((local_7e4 == 0x19) || (local_7e4 == 0x65)) || (local_7e4 == 4)) {
                lVar11 = (**(code **)(param_4[2] + 0x160))(param_4 + 2);
                if (lVar11 == 0) {
                  local_8e8 = (int *)CONCAT44(local_8e8._4_4_,0x10cd);
                  log_InlineLogERROR(&DAT_1406d9c10,"MYASSERT","pGameMap","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
                }
                cVar1 = FUN_1401194e0(lVar11);
                if (cVar1 == '\0') {
                  plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
                  uVar2 = (**(code **)(*plVar8 + 0x40))(plVar8);
                  uVar10 = (**(code **)(param_4[2] + 0x18))(param_4 + 2);
                  log_InlineLogDBERROR(&DAT_14070bfb0,(ulonglong)uVar2,uVar10,&local_358);
                  return 0;
                }
                iVar4 = (**(code **)(**(longlong **)(lVar11 + 0x58) + 0x10))(*(longlong **)(lVar11 + 0x58),5);
                iVar5 = (**(code **)(*param_4 + 8))(param_4);
                if (iVar4 != iVar5) {
                  plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
                  uVar2 = (**(code **)(*plVar8 + 0x40))(plVar8);
                  uVar10 = (**(code **)(param_4[2] + 0x18))(param_4 + 2);
                  log_InlineLogDBERROR(&DAT_14070bf60,(ulonglong)uVar2,uVar10,&local_358);
                  return 0;
                }
              }
              if (local_7e4 == 9) {
                pcVar12 = (char *)(**(code **)(param_4[2] + 0x18))(param_4 + 2);
                local_7e0 = local_844 % 10;
                local_7dc = (**(code **)(param_4[2] + 0xf8))(param_4 + 2);
                local_7d8 = (**(code **)(param_4[2] + 0x100))(param_4 + 2);
                local_7d4 = (**(code **)(param_4[2] + 0x108))(param_4 + 2);
                local_7d0 = (**(code **)(param_4[2] + 0x110))(param_4 + 2);
                local_7cc = local_840;
                local_7c8 = local_83c[0];
                local_7c4 = (**(code **)(param_4[2] + 0x30))(param_4 + 2);
                plVar8 = (longlong *)FUN_140087ed0();
                lVar11 = *plVar8;
                uVar6 = (**(code **)(*param_4 + 8))(param_4);
                iVar4 = (**(code **)(lVar11 + 0xf8))(plVar8,uVar6);
                local_7c0 = (**(code **)(param_4[2] + 0x38))(param_4 + 2);
                local_7c0 = local_7c0 + iVar4 * 0x10000;
              }
              else {
                local_7e0 = (local_844 % 10) % 10 + (local_7e0 / 10) * 10;
                pcVar12 = &local_358;
              }
              uVar10 = (**(code **)(param_4[2] + 0x160))(param_4 + 2);
              cVar1 = FUN_140119510(uVar10);
              if ((cVar1 != '\0') && (local_7e4 == 0xf)) {
                pIVar9 = theInstance();
                lVar14 = param_4[2];
                uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_DISABLE_LAY_SYNTRANS");
                (**(code **)(lVar14 + 0x358))(param_4 + 2,uVar10);
                return 0;
              }
              if (local_848 != 0) {
                uVar10 = (**(code **)(param_4[2] + 0x160))(param_4 + 2);
                cVar1 = FUN_1402c68a0(uVar10,local_848,local_7ec,local_7e8);
                if (cVar1 == '\0') {
                  return 0;
                }
              }
              local_7f0 = (**(code **)(param_4[2] + 0x168))(param_4 + 2);
              if (local_7f4 == 0) {
                local_7f8 = 0;
              }
              else if (local_7f4 == 1) {
                local_7f8 = (**(code **)(*param_4 + 8))(param_4);
              }
              else if (local_7f4 == 2) {
                local_7f8 = (**(code **)(param_4[2] + 0x170))(param_4 + 2);
                if (local_7f8 == 0) {
                  return 0;
                }
              }
              else if (local_7f4 == 3) {
                local_8e8 = (int *)CONCAT44(local_8e8._4_4_,0x1110);
                log_InlineLogERROR(&DAT_1406d9c10,"MYASSERT","!\"OWNER_NPC\"","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
              }
              plVar8 = (longlong *)FUN_1402c0d80();
              if (plVar8 == (longlong *)0x0) {
                local_8e8 = (int *)CONCAT44(local_8e8._4_4_,0x1116);
                log_InlineLogERROR(&DAT_1406d9c10,"IF_OK",&DAT_14070bf28,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
              }
              else {
                uVar6 = FUN_1400fda10(lVar14,1,1);
                local_8e8 = (int *)pcVar12;
                cVar1 = FUN_1402c2390(plVar8,*(undefined4 *)(param_1 + 0x48),&local_7f8,uVar6);
                if (cVar1 != '\0') {
                  uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
                  plVar13 = (longlong *)FUN_1400875f0(uVar10);
                  plVar13 = (longlong *)(**(code **)(*plVar13 + 0x30))(plVar13);
                  (**(code **)(*plVar13 + 0x28))(plVar13,plVar8 + 2);
                  uVar6 = (**(code **)(*plVar8 + 8))(plVar8);
                  *(undefined4 *)(param_4 + 0x146) = uVar6;
                  *(longlong **)(param_1 + 0x10) = plVar8 + 2;
                  return 1;
                }
                local_8e8 = (int *)CONCAT44(local_8e8._4_4_,0x1118);
                log_InlineLogERROR(&DAT_1406d9c10,"IF_OK","pNpc->Create(m_idProcess, &info, pItem->GetInt(ITEMDATA_TYPE), pName)",
                                   "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
                (**(code **)(plVar8[2] + 8))();
              }
              return 0;
            }
          }
          return 0;
        }
      }
      local_8e8 = (int *)CONCAT44(local_8e8._4_4_,0x109d);
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","pszAccept && strlen(pszAccept) > 0",
                         "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
      return 0;
    }
    if (iVar4 == 0x1f2) {
      cVar1 = FUN_140340190(param_4,param_6,1,1);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_4 + 0x14c) = 0;
        pIVar9 = theInstance();
        lVar14 = param_4[2];
        uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_USE_ITEM");
        (**(code **)(lVar14 + 0x358))(param_4 + 2,uVar10);
        return 1;
      }
    }
    else {
      plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
      uVar2 = (**(code **)(*plVar8 + 0x48))(plVar8);
      plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      uVar3 = (**(code **)(*plVar8 + 0x40))(plVar8);
      log_InlineLogDBERROR(&DAT_14070c140,(ulonglong)uVar3,(ulonglong)uVar2);
    }
  }
  return 0;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14011a7e0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,undefined8 param_5,undefined8 param_6,char *param_7)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  IStringManager *pIVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined1 auStack_968 [32];
  undefined8 local_948;
  undefined8 local_940;
  undefined4 local_938;
  undefined2 local_930;
  undefined4 local_928;
  undefined4 local_920;
  undefined1 local_918;
  undefined8 local_908;
  char local_8f8;
  undefined1 local_8f7 [1103];
  undefined1 local_4a8 [1104];
  undefined1 local_58;
  undefined8 local_57;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_908 = 0xfffffffffffffffe;
  local_48 = DAT_1409707c0 ^ (ulonglong)auStack_968;
  if (param_2 == (undefined8 *)0x0) {
    local_948 = CONCAT44(local_948._4_4_,0x338f);
    log_InlineLogERROR(&DAT_1406d9c10);
  }
  else if (param_4 == (longlong *)0x0) {
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    (**(code **)(*plVar7 + 0x48))(plVar7);
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar7 + 0x40))(plVar7);
    local_948 = CONCAT44(local_948._4_4_,0x3393);
    log_InlineLogDBERROR("table:cq_action/cq_newaction, CGameAction::ProcessActionWanted() ActionID=%u, ActionType=%u at %s, %d");
  }
  else {
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    iVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
    switch(iVar3 + -0xbb9) {
    case 0:
      *(int *)(param_4 + 0x14d) = (int)param_4[0x14d] + 1;
      plVar7 = (longlong *)FUN_1401182a0();
      cVar2 = (**(code **)(*plVar7 + 0x60))(plVar7,(int)param_4[0x14d]);
      if (cVar2 != '\0') {
        return true;
      }
      break;
    case 1:
      if (param_7 != (char *)0x0) {
        lVar10 = -1;
        pcVar14 = param_7;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        if (lVar10 != -2) {
          plVar7 = (longlong *)FUN_1401182a0();
          lVar10 = *plVar7;
          uVar4 = (**(code **)(*param_4 + 8))(param_4);
          cVar2 = (**(code **)(lVar10 + 0x120))(plVar7,uVar4,param_7);
          return cVar2 != '\0';
        }
      }
      break;
    case 2:
      if (param_7 != (char *)0x0) {
        lVar10 = -1;
        pcVar14 = param_7;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        if (lVar10 != -2) {
          uVar5 = strtoul(param_7,(char **)0x0,10);
          if (9999999 < (int)uVar5) {
            pIVar11 = theInstance();
            lVar10 = param_4[2];
            uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_MAX_BONUTY");
            (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8,9999999);
            return false;
          }
          plVar7 = (longlong *)FUN_1401182a0();
          lVar10 = *plVar7;
          uVar4 = (**(code **)(*param_4 + 8))(param_4);
          (**(code **)(lVar10 + 0x130))(plVar7,uVar4,uVar5);
          return true;
        }
      }
      break;
    case 3:
      plVar7 = (longlong *)FUN_1401182a0();
      lVar10 = *plVar7;
      uVar4 = (**(code **)(*param_4 + 8))(param_4);
      iVar3 = (**(code **)(lVar10 + 0x128))(plVar7,uVar4);
      if (iVar3 < 100000) {
        pIVar11 = theInstance();
        lVar10 = param_4[2];
        uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_MIN_BONUTY");
        (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8,100000);
      }
      else {
        plVar7 = (longlong *)FUN_1401182a0();
        lVar10 = *param_4;
        lVar1 = *plVar7;
        uVar4 = (**(code **)(lVar10 + 8))(param_4);
        iVar3 = (**(code **)(lVar1 + 0x128))(plVar7,uVar4);
        cVar2 = (**(code **)(lVar10 + 0x178))(param_4,(longlong)iVar3,1);
        if (cVar2 == '\0') {
          plVar7 = (longlong *)FUN_1401182a0();
          pIVar11 = theInstance();
          lVar10 = param_4[2];
          lVar1 = *plVar7;
          uVar4 = (**(code **)(*param_4 + 8))(param_4);
          uVar4 = (**(code **)(lVar1 + 0x128))(plVar7,uVar4);
          uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_NOT_ENOUGH_MONEY");
          (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8,uVar4);
        }
        else {
          local_58 = 0;
          local_57 = 0;
          local_4f = 0;
          local_4b = 0;
          local_49 = 0;
          plVar7 = (longlong *)FUN_1401182a0();
          lVar10 = *plVar7;
          uVar4 = (**(code **)(*param_4 + 8))(param_4);
          cVar2 = (**(code **)(lVar10 + 0x118))(plVar7,uVar4,&local_58);
          if (cVar2 == '\0') {
            local_948 = CONCAT44(local_948._4_4_,0x347f);
            log_InlineLogERROR(&DAT_1406d9c10);
            return false;
          }
          plVar7 = (longlong *)FUN_1401182a0();
          plVar9 = (longlong *)FUN_1401182a0();
          lVar10 = *plVar9;
          lVar1 = *plVar7;
          uVar4 = (**(code **)(*param_4 + 8))(param_4);
          uVar4 = (**(code **)(lVar1 + 0x128))(plVar7,uVar4);
          uVar8 = (**(code **)(param_4[2] + 0x18))(param_4 + 2);
          cVar2 = (**(code **)(lVar10 + 0x70))(plVar9,&local_58,uVar8,uVar4);
          if (cVar2 != '\0') {
            return true;
          }
        }
      }
      break;
    case 4:
      if (param_7 != (char *)0x0) {
        lVar10 = -1;
        pcVar14 = param_7;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        if ((lVar10 != -2) && (uVar5 = strtoul(param_7,(char **)0x0,10), uVar5 != 0)) {
          plVar7 = (longlong *)FUN_1401182a0();
          cVar2 = (**(code **)(*plVar7 + 0x58))(plVar7,uVar5);
          if (cVar2 == '\0') {
            pIVar11 = theInstance();
            lVar10 = param_4[2];
            uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_INVALID_WANTED");
            (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8);
          }
          else {
            cVar2 = (**(code **)(*param_4 + 0x178))(param_4,1000,1);
            if (cVar2 != '\0') {
              plVar7 = (longlong *)FUN_1401182a0();
              lVar10 = *plVar7;
              uVar4 = (**(code **)(*param_4 + 8))(param_4);
              (**(code **)(lVar10 + 0x100))(plVar7,uVar4,uVar5);
              FUN_14037dfb0(&local_8f8);
              plVar7 = (longlong *)FUN_1401182a0();
              uVar8 = (**(code **)(*plVar7 + 0x80))(plVar7,uVar5);
              iVar3 = FUN_14037e0a0(&local_8f8,8,uVar8);
              if (iVar3 == 0) {
                local_948 = CONCAT44(local_948._4_4_,0x3426);
                log_InlineLogERROR(&DAT_1406d9c10);
              }
              else {
                (**(code **)(param_4[2] + 0x350))();
              }
              FUN_14037e030(&local_8f8);
              local_8f8 = '\0';
              memset(local_8f7,0,0x3ff);
              plVar7 = (longlong *)FUN_1401182a0();
              plVar9 = (longlong *)FUN_1401182a0();
              pIVar11 = theInstance();
              uVar4 = (**(code **)(*plVar7 + 0x88))(plVar7,uVar5);
              uVar8 = (**(code **)(*plVar9 + 0x80))(plVar9,uVar5);
              pcVar14 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_WANTED_ORDER");
              local_948 = CONCAT44(local_948._4_4_,uVar5);
              local_940 = uVar8;
              local_938 = uVar4;
              _snprintf(&local_8f8,0x3ff,pcVar14);
              FUN_14015b240(local_4a8);
              param_4 = param_4 + 2;
              uVar8 = (**(code **)(*param_4 + 0x18))(param_4);
              local_918 = 1;
              local_920 = 0;
              local_928 = 0;
              local_930 = 0;
              local_938 = CONCAT22(local_938._2_2_,2000);
              local_940 = CONCAT44(local_940._4_4_,0xff0000);
              local_948 = 0;
              iVar3 = FUN_14015b300(local_4a8,"SYSTEM",uVar8,&local_8f8);
              if (iVar3 != 0) {
                (**(code **)(*param_4 + 0x350))(param_4,local_4a8);
              }
              FUN_14015b2c0(local_4a8);
              plVar7 = (longlong *)FUN_1401182a0();
              uVar8 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
              plVar9 = (longlong *)FUN_140087650(uVar8);
              lVar10 = *plVar9;
              uVar8 = (**(code **)(*plVar7 + 0x80))(plVar7,uVar5);
              lVar10 = (**(code **)(lVar10 + 0x90))(plVar9,uVar8,0);
              if ((lVar10 != 0) && (lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x160))(), lVar10 != 0)) {
                local_8f8 = '\0';
                memset(local_8f7,0,0x3ff);
                pIVar11 = theInstance();
                (**(code **)(**(longlong **)(lVar10 + 0x58) + 0x18))(*(longlong **)(lVar10 + 0x58),1);
                pcVar14 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_WANTED_INFO");
                _snprintf(&local_8f8,0x3ff,pcVar14);
                FUN_14015b240(local_4a8);
                uVar8 = (**(code **)(*param_4 + 0x18))(param_4);
                local_918 = 1;
                local_920 = 0;
                local_928 = 0;
                local_930 = 0;
                local_938 = CONCAT22(local_938._2_2_,2000);
                local_940 = CONCAT44(local_940._4_4_,0xff0000);
                local_948 = 0;
                iVar3 = FUN_14015b300(local_4a8,"SYSTEM",uVar8,&local_8f8);
                if (iVar3 != 0) {
                  (**(code **)(*param_4 + 0x350))(param_4,local_4a8);
                }
                FUN_14015b2c0(local_4a8);
              }
              return true;
            }
            pIVar11 = theInstance();
            lVar10 = param_4[2];
            uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_NOT_ENOUGH_MONEY");
            (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8,1000);
          }
        }
      }
      break;
    case 5:
      if (param_7 != (char *)0x0) {
        lVar10 = -1;
        pcVar14 = param_7;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        if ((lVar10 != -2) && (uVar5 = strtoul(param_7,(char **)0x0,10), uVar5 != 0)) {
          plVar7 = (longlong *)FUN_1401182a0();
          cVar2 = (**(code **)(*plVar7 + 0x58))(plVar7,uVar5);
          if (cVar2 == '\0') {
            pIVar11 = theInstance();
            lVar10 = param_4[2];
            uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_INVALID_WANTED");
            (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8);
          }
          else {
            plVar7 = (longlong *)FUN_1401182a0();
            lVar10 = *param_4;
            iVar3 = (**(code **)(*plVar7 + 0x88))(plVar7,uVar5);
            cVar2 = (**(code **)(lVar10 + 0x178))(param_4,(longlong)(iVar3 * 2),1);
            if (cVar2 != '\0') {
              plVar7 = (longlong *)FUN_1401182a0();
              (**(code **)(*plVar7 + 0x50))(plVar7,uVar5);
              pIVar11 = theInstance();
              lVar10 = param_4[2];
              uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_CANCEL_WANTED");
              (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8,uVar5);
              return true;
            }
            plVar7 = (longlong *)FUN_1401182a0();
            pIVar11 = theInstance();
            lVar10 = param_4[2];
            iVar3 = (**(code **)(*plVar7 + 0x88))(plVar7,uVar5);
            uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_NOT_ENOUGH_MONEY");
            (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8,iVar3 * 2);
          }
        }
      }
      break;
    case 6:
      if (param_7 != (char *)0x0) {
        lVar10 = -1;
        pcVar14 = param_7;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        if ((lVar10 != -2) && (uVar5 = strtoul(param_7,(char **)0x0,10), uVar5 != 0)) {
          plVar7 = (longlong *)FUN_1401182a0();
          cVar2 = (**(code **)(*plVar7 + 0x58))(plVar7,uVar5);
          if (cVar2 != '\0') {
            plVar7 = (longlong *)FUN_1401182a0();
            lVar10 = *plVar7;
            uVar4 = (**(code **)(*param_4 + 8))(param_4);
            (**(code **)(lVar10 + 0xf0))(plVar7,uVar4,uVar5);
            return true;
          }
          pIVar11 = theInstance();
          lVar10 = param_4[2];
          uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_INVALID_WANTED");
          (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8);
        }
      }
      break;
    case 7:
      if (param_7 != (char *)0x0) {
        lVar10 = -1;
        pcVar14 = param_7;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        if (lVar10 != -2) {
          plVar7 = (longlong *)FUN_1401182a0();
          lVar10 = *plVar7;
          uVar4 = (**(code **)(*param_4 + 8))(param_4);
          uVar4 = (**(code **)(lVar10 + 0xe8))(plVar7,uVar4);
          plVar7 = (longlong *)FUN_1401182a0();
          cVar2 = (**(code **)(*plVar7 + 0x58))(plVar7,uVar4);
          if (cVar2 == '\0') {
            pIVar11 = theInstance();
            lVar10 = param_4[2];
            uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_INVALID_WANTED");
            (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8);
          }
          else {
            uVar5 = strtoul(param_7,(char **)0x0,10);
            if ((int)uVar5 < 10000) {
              pIVar11 = theInstance();
              lVar10 = param_4[2];
              uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_LOWEST_SUPERADD_BONUTY");
              (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8,10000);
            }
            else {
              plVar7 = (longlong *)FUN_1401182a0();
              iVar3 = (**(code **)(*plVar7 + 0x88))(plVar7,uVar4);
              if (9999999 < (int)(iVar3 + uVar5)) {
                pIVar11 = theInstance();
                lVar10 = param_4[2];
                uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_MAX_BONUTY");
                (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8,9999999);
                return false;
              }
              cVar2 = (**(code **)(*param_4 + 0x178))(param_4,(longlong)(int)uVar5,1);
              if (cVar2 != '\0') {
                plVar7 = (longlong *)FUN_1401182a0();
                iVar3 = (**(code **)(*plVar7 + 0x88))(plVar7,uVar4);
                plVar7 = (longlong *)FUN_1401182a0();
                (**(code **)(*plVar7 + 0x90))(plVar7,uVar4,uVar5 + iVar3);
                plVar7 = (longlong *)FUN_1401182a0();
                (**(code **)(*plVar7 + 0xa0))(plVar7,uVar4);
                plVar7 = (longlong *)FUN_1401182a0();
                pIVar11 = theInstance();
                lVar10 = param_4[2];
                lVar1 = *plVar7;
                uVar4 = (**(code **)(*param_4 + 8))(param_4);
                uVar4 = (**(code **)(lVar1 + 0xe8))(plVar7,uVar4);
                uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_SUPERADD_BONUTY");
                (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8,uVar4,uVar5 + iVar3);
                return true;
              }
              pIVar11 = theInstance();
              lVar10 = param_4[2];
              uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_NOT_ENOUGH_MONEY");
              (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8,uVar5);
            }
          }
        }
      }
      break;
    case 9:
      *(int *)(param_4 + 0x14d) = (int)param_4[0x14d] + 1;
      plVar7 = (longlong *)FUN_1401182a0();
      cVar2 = (**(code **)(*plVar7 + 0x38))(plVar7,(int)param_4[0x14d]);
      if (cVar2 != '\0') {
        return true;
      }
      break;
    case 10:
      if (param_7 != (char *)0x0) {
        uVar5 = strtoul(param_7,(char **)0x0,10);
        plVar7 = (longlong *)FUN_1401182a0();
        cVar2 = (**(code **)(*plVar7 + 0x38))(plVar7,uVar5);
        if (cVar2 == '\0') {
          pIVar11 = theInstance();
          lVar10 = param_4[2];
          uVar8 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_INVALID_WANTED");
          (**(code **)(lVar10 + 0x358))(param_4 + 2,uVar8);
        }
        else {
          FUN_14037dfb0(&local_8f8);
          plVar7 = (longlong *)FUN_1401182a0();
          uVar8 = (**(code **)(*plVar7 + 200))(plVar7,uVar5);
          iVar3 = FUN_14037e0a0(&local_8f8,0xf,uVar8);
          if (iVar3 == 0) {
            local_948 = CONCAT44(local_948._4_4_,0x33b2);
            log_InlineLogERROR(&DAT_1406d9c10);
          }
          else {
            (**(code **)(param_4[2] + 0x350))(param_4 + 2,&local_8f8);
          }
          FUN_14037e030(&local_8f8);
          plVar7 = (longlong *)FUN_1401182a0();
          uVar8 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
          plVar9 = (longlong *)FUN_140087650(uVar8);
          lVar10 = *plVar9;
          uVar4 = (**(code **)(*plVar7 + 0xe0))(plVar7,uVar5);
          lVar10 = (**(code **)(lVar10 + 0x98))(plVar9,uVar4);
          if (lVar10 != 0) {
            plVar7 = (longlong *)FUN_1401182a0();
            plVar9 = (longlong *)FUN_1401182a0();
            lVar10 = *plVar9;
            uVar4 = (**(code **)(*plVar7 + 0xe0))(plVar7,uVar5);
            uVar6 = (**(code **)(*param_4 + 8))(param_4);
            (**(code **)(lVar10 + 0x110))(plVar9,uVar6,uVar4);
            plVar7 = (longlong *)FUN_1401182a0();
            pIVar11 = theInstance();
            lVar10 = (**(code **)(param_4[2] + 0x160))();
            uVar8 = (**(code **)(**(longlong **)(lVar10 + 0x58) + 0x18))(*(longlong **)(lVar10 + 0x58),1);
            lVar10 = *param_4;
            uVar12 = (**(code **)(*plVar7 + 200))(plVar7,uVar5);
            uVar13 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_POLICE_WANTED_ORDER");
            local_948 = uVar8;
            (**(code **)(lVar10 + 0x150))(param_4,2000,uVar13,uVar12);
            return true;
          }
        }
      }
      break;
    case 0xb:
      plVar7 = (longlong *)FUN_1401182a0();
      lVar10 = *plVar7;
      uVar4 = (**(code **)(*param_4 + 8))(param_4);
      cVar2 = (**(code **)(lVar10 + 0x30))(plVar7,uVar4);
      if (cVar2 != '\0') {
        return true;
      }
    }
  }
  return false;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14011b5e0(longlong param_1,undefined8 *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  IStringManager *pIVar6;
  undefined1 auStack_918 [32];
  undefined8 local_8f8;
  undefined4 local_8f0;
  undefined2 local_8e8;
  undefined2 local_8e0;
  undefined4 local_8d8;
  undefined4 local_8d0;
  undefined1 local_8c8;
  int local_8b8;
  undefined8 local_8b0;
  undefined1 local_8a8 [1072];
  undefined1 local_478 [1104];
  ulonglong local_28;
  
  local_8b0 = 0xfffffffffffffffe;
  local_28 = DAT_1409707c0 ^ (ulonglong)auStack_918;
  if (param_2 == (undefined8 *)0x0) {
    local_8f8 = CONCAT44(local_8f8._4_4_,0x3499);
    log_InlineLogERROR(&DAT_1406d9c10);
    uVar4 = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    if (iVar1 == 0xe11) {
      local_8b8 = 0;
      iVar1 = sscanf(param_3,"%u");
      if (iVar1 < 1) {
        plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar3 + 0x40))(plVar3);
        log_InlineLogDBERROR(&DAT_14070c010);
        uVar4 = 0;
      }
      else {
        plVar3 = (longlong *)CurrentInstanceGet();
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,0x11);
        uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,local_8b8 + 40000000,0);
        FUN_1403803a0(local_8a8);
        local_8f0 = 0;
        local_8f8 = (ulonglong)local_8f8._4_4_ << 0x20;
        FUN_140380450(local_8a8,0,uVar2,1800000);
        uVar4 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
        plVar3 = (longlong *)FUN_1400876b0(uVar4);
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,local_8b8,1);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,local_8a8,0);
        }
        uVar4 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
        uVar4 = FUN_140117db0(uVar4);
        lVar5 = FUN_14020ba80(uVar4,local_8b8);
        if (lVar5 == 0) {
          FUN_1403803f0(local_8a8);
          uVar4 = 0;
        }
        else {
          FUN_14037fa00(lVar5,0x708);
          pIVar6 = theInstance();
          uVar4 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_COMPETE_BEGIN");
          FUN_14015b240(local_478);
          local_8c8 = 1;
          local_8d0 = 0;
          local_8d8 = 0;
          local_8e0 = 0;
          local_8e8 = 2000;
          local_8f0 = 0xffffff;
          local_8f8 = 0;
          iVar1 = FUN_14015b300(local_478,"SYSTEM","ALLUSERS",uVar4);
          if (iVar1 == 0) {
            local_8f8 = CONCAT44(local_8f8._4_4_,0x34c1);
            log_InlineLogERROR(&DAT_1406d9c10);
            FUN_14015b2c0(local_478);
            FUN_1403803f0(local_8a8);
            uVar4 = 0;
          }
          else {
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,local_478,0);
            }
            FUN_14037f120(lVar5,0x37);
            FUN_14015b2c0(local_478);
            FUN_1403803f0(local_8a8);
            uVar4 = 1;
          }
        }
      }
    }
    else {
      plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
      (**(code **)(*plVar3 + 0x48))(plVar3);
      plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar3 + 0x40))(plVar3);
      log_InlineLogDBERROR("table:cq_action/cq_newaction, ACTION (id=%u,type=%d): Unsupported action type");
      uVar4 = 0;
    }
  }
  return uVar4;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14011b910(longlong param_1,undefined8 *param_2,char *param_3,longlong *param_4,undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  __time32_t _Var6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined4 *local_110;
  uint *local_108;
  uint *local_100;
  uint *local_f8;
  undefined4 *local_f0;
  uint local_e8 [4];
  uint local_d8 [4];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  char local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_1409707c0 ^ (ulonglong)auStack_138;
  if (param_2 == (undefined8 *)0x0) {
    local_118 = (undefined4 *)CONCAT44(local_118._4_4_,0x37d7);
    log_InlineLogERROR(&DAT_1406d9c10);
  }
  else if (param_4 == (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    (**(code **)(*plVar8 + 0x48))(plVar8);
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar8 + 0x40))(plVar8);
    local_118 = (undefined4 *)CONCAT44(local_118._4_4_,0x37db);
    log_InlineLogDBERROR("table:cq_action/cq_newaction, CGameAction::ProcessActionItemQuench() ActionID=%u, ActionType=%u at %s, %d");
  }
  else {
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    iVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
    if (iVar3 == 0x214) {
      plVar8 = (longlong *)FUN_140087d40();
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x60))(plVar8,param_5);
      plVar9 = (longlong *)FUN_140087d40();
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x60))(plVar9,param_6);
      if ((plVar8 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
        uVar4 = FUN_1400fda10(plVar8,1,1);
        cVar2 = FUN_1400ff940(uVar4);
        if ((cVar2 != '\0') && (cVar2 = FUN_1400ffc20(plVar9), cVar2 == '\0')) {
          lVar12 = 0;
          local_d8[1] = 0;
          local_d8[2] = 0;
          local_f0 = &local_bc;
          local_f8 = local_d8 + 2;
          local_100 = local_d8 + 1;
          local_108 = local_d8;
          local_110 = &local_c8;
          local_b8 = 0;
          local_118 = &local_c0;
          local_c4 = 0;
          local_bc = 0;
          local_c0 = 0;
          local_c8 = 0;
          local_d8[0] = 0;
          iVar3 = sscanf(param_3,"%d %d %d %d %d %d %d %d");
          if (6 < iVar3) {
            uVar5 = FUN_1400fda10(plVar8,1,1);
            local_e8[0] = 0;
            local_e8[1] = 0;
            local_e8[2] = 0;
            do {
              if (*(int *)((longlong)local_d8 + lVar12) == 0) {
                *(undefined4 *)((longlong)local_e8 + lVar12) = 0xffffffff;
              }
              else {
                local_60[0] = '\0';
                local_60[1] = '\0';
                local_60[2] = '\0';
                local_60[3] = '\0';
                local_60[4] = '\0';
                local_60[5] = '\0';
                local_60[6] = '\0';
                local_60[7] = '\0';
                local_60[8] = '\0';
                local_60[9] = '\0';
                _itoa(*(int *)((longlong)local_d8 + lVar12),local_60,10);
                lVar11 = -1;
                pcVar13 = local_60;
                do {
                  if (lVar11 == 0) break;
                  lVar11 = lVar11 + -1;
                  cVar2 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                } while (cVar2 != '\0');
                if (lVar11 == -3) {
                  *(uint *)((longlong)local_e8 + lVar12) = uVar5 / 100000;
                }
                else if (lVar11 == -4) {
                  *(uint *)((longlong)local_e8 + lVar12) = uVar5 / 10000;
                }
                else if (lVar11 == -5) {
                  *(uint *)((longlong)local_e8 + lVar12) = uVar5 / 1000;
                }
                else {
                  *(undefined4 *)((longlong)local_e8 + lVar12) = 0xffffffff;
                }
              }
              lVar12 = lVar12 + 4;
              if (0xb < lVar12) {
                if ((((local_d8[0] == local_e8[0]) || (local_d8[1] == local_e8[1])) || (local_d8[2] == local_e8[2])) ||
                   (((local_d8[0] == 0 && (local_d8[1] == 0)) && (local_d8[2] == 0)))) {
                  local_88 = 0;
                  local_84 = (**(code **)(*plVar8 + 8))(plVar8);
                  local_80 = (**(code **)(*param_4 + 8))(param_4);
                  plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
                  local_7c = (**(code **)(*plVar10 + 0x48))(plVar10);
                  local_78 = local_b8;
                  local_74 = local_c4;
                  local_70 = local_bc;
                  local_68 = local_c0;
                  local_6c = local_c8;
                  uVar4 = (**(code **)(*plVar9 + 8))(plVar9);
                  cVar2 = FUN_140340190(param_4,uVar4,1,1);
                  if (cVar2 != '\0') {
                    plVar9 = (longlong *)FUN_140100070(plVar8);
                    bVar1 = false;
                    if (plVar9 != (longlong *)0x0) {
                      local_b0 = 0;
                      bVar1 = true;
                      local_ac = (**(code **)*plVar9)(plVar9);
                      local_a8 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
                      local_a4 = (**(code **)(*plVar9 + 0x30))(plVar9,3);
                      local_a0 = (**(code **)(*plVar9 + 0x30))(plVar9,4);
                      local_9c = (**(code **)(*plVar9 + 0x10))(plVar9);
                      local_98 = (**(code **)(*plVar9 + 0x18))(plVar9);
                      local_90 = (**(code **)(*plVar9 + 0x30))(plVar9,8);
                      iVar3 = (**(code **)(*plVar9 + 0x30))(plVar9,7);
                      if (iVar3 == 0) {
                        local_94 = 0;
                      }
                      else {
                        iVar3 = (**(code **)(*plVar9 + 0x30))(plVar9,7);
                        _Var6 = _time32((__time32_t *)0x0);
                        local_94 = iVar3 - _Var6;
                        if (local_94 == 0) {
                          bVar1 = false;
                        }
                      }
                      uVar4 = (**(code **)(*plVar8 + 8))(plVar8);
                      FUN_1401ad8d0(param_4,uVar4);
                      FUN_140100090(plVar8,0);
                    }
                    uVar4 = FUN_1401649c0(param_4);
                    cVar2 = FUN_140102a10(plVar8,&local_88,uVar4,0);
                    if (cVar2 != '\0') {
                      uVar4 = (**(code **)(*plVar8 + 8))(plVar8);
                      FUN_140166590(param_4,uVar4,local_7c);
                      if (!bVar1) {
                        uVar4 = (**(code **)(*plVar8 + 8))(plVar8);
                        (**(code **)(*param_4 + 8))(param_4);
                        (**(code **)(param_4[2] + 0x18))(param_4 + 2);
                        local_110 = (undefined4 *)CONCAT44(local_110._4_4_,local_7c);
                        local_118 = (undefined4 *)CONCAT44(local_118._4_4_,uVar4);
                        tq::MyLogSave("gmlog/QuenchItem","%s(%u) Add Temp ItemStatu[itemid=%u, itemstatu=%u]");
                        return 1;
                      }
                      uVar4 = FUN_1400fda10(plVar8,1,1);
                      uVar7 = (**(code **)(*plVar8 + 8))(plVar8);
                      (**(code **)(*param_4 + 8))(param_4);
                      (**(code **)(param_4[2] + 0x18))(param_4 + 2);
                      local_110 = (undefined4 *)CONCAT44(local_110._4_4_,uVar4);
                      local_118 = (undefined4 *)CONCAT44(local_118._4_4_,uVar7);
                      tq::MyLogSave("gmlog/QuenchItem","%s(%u) Erase Temp Item Statu [id=%u, type=%u]");
                      return 1;
                    }
                    if (bVar1) {
                      FUN_140102a10(plVar8,&local_b0,0,0);
                      uVar4 = (**(code **)(*plVar8 + 8))(plVar8);
                      FUN_140166590(param_4,uVar4,local_a4);
                    }
                  }
                }
                return 0;
              }
            } while( true );
          }
          plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
          (**(code **)(*plVar8 + 0x40))(plVar8);
          log_InlineLogDBERROR(&DAT_14070c010);
        }
      }
    }
    else {
      plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
      (**(code **)(*plVar8 + 0x48))(plVar8);
      plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar8 + 0x40))(plVar8);
      log_InlineLogDBERROR(&DAT_14070c140);
    }
  }
  return 0;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_14011bfa0(longlong param_1,undefined8 *param_2,char *param_3,longlong *param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_res10 [2];
  int local_48 [12];
  
  if (param_2 == (undefined8 *)0x0) {
    log_InlineLogACTION_ERROR
              ("CGameAction::ProcessActionFactionMatch() pAction is NULL at %s, %d",
               "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x3881);
  }
  else {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
    if (iVar3 - 0xed9U < 5 || iVar3 == 0xede) {
      switch(IMAGE_DOS_HEADER_140000000.e_magic + (&switchD_14011c022::switchdataD_14011c5f0)[(int)(iVar3 - 0xed9U)]) {
      case (char *)0x14011c024:
        local_48[4] = 0;
        local_48[5] = 0;
        local_48[6] = 0;
        local_48[7] = 0;
        local_48[8] = 0;
        local_48[9] = 0;
        local_48[10] = 0;
        local_48[0xb] = 0;
        iVar3 = sscanf(param_3,"%u %u %u %u %u %u %u %u",local_48 + 4,local_48 + 5);
        if (iVar3 < 8) {
          plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
          uVar9 = (**(code **)(*plVar5 + 0x40))(plVar5);
          log_InlineLogDBERROR(&DAT_14070c010,uVar9 & 0xffffffff,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x3890);
        }
        else {
          plVar5 = (longlong *)CurrentInstanceGet();
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,0x18);
          if (plVar5 != (longlong *)0x0) {
            uVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,local_48 + 4);
            return (bool)uVar1;
          }
        }
        break;
      case (char *)0x14011c10d:
        if (param_4 == (longlong *)0x0) {
          plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
          uVar9 = (**(code **)(*plVar5 + 0x40))(plVar5);
          log_InlineLogDBERROR
                    ("table:cq_action/cq_newaction, ACTION %u type:%u: pUser is null at %s, %d",uVar9 & 0xffffffff,0xeda,
                     "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        }
        else {
          plVar5 = (longlong *)CurrentInstanceGet();
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,0x18);
          if (plVar5 != (longlong *)0x0) {
            lVar7 = *plVar5;
            uVar4 = (**(code **)(param_4[2] + 0x170))(param_4 + 2);
            uVar1 = (**(code **)(lVar7 + 0x20))(plVar5,uVar4);
            return (bool)uVar1;
          }
        }
        break;
      case (char *)0x14011c193:
        if (param_4 != (longlong *)0x0) {
          uVar1 = (**(code **)(param_4[2] + 0x2d8))(param_4 + 2,0x57);
          return (bool)uVar1;
        }
        plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        uVar9 = (**(code **)(*plVar5 + 0x40))(plVar5);
        log_InlineLogDBERROR
                  ("table:cq_action/cq_newaction, ACTION %u type:%u: pUser is null at %s, %d",uVar9 & 0xffffffff,0xedb,
                   "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        break;
      case (char *)0x14011c1f2:
        if (param_4 == (longlong *)0x0) {
          plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
          uVar9 = (**(code **)(*plVar5 + 0x40))(plVar5);
          log_InlineLogDBERROR
                    ("table:cq_action/cq_newaction, ACTION %u type:%u: pUser is null at %s, %d",uVar9 & 0xffffffff,0xedb,
                     "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        }
        else {
          local_res10[0] = 0;
          iVar3 = sscanf(param_3,"%d",local_res10);
          if (iVar3 < 1) {
            plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
            uVar9 = (**(code **)(*plVar5 + 0x40))(plVar5);
            log_InlineLogDBERROR(&DAT_14070c010,uVar9 & 0xffffffff,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x38c6);
          }
          else {
            cVar2 = (**(code **)(param_4[2] + 0x2d8))(param_4 + 2,0x57);
            if (cVar2 != '\0') {
              plVar5 = (longlong *)FUN_1401181a0();
              lVar7 = *plVar5;
              uVar4 = (**(code **)(*param_4 + 8))(param_4);
              iVar3 = (**(code **)(lVar7 + 0xb0))(plVar5,uVar4,0x57);
              return local_res10[0] < iVar3;
            }
          }
        }
        break;
      case (char *)0x14011c2e8:
        if (param_4 == (longlong *)0x0) {
          plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
          uVar9 = (**(code **)(*plVar5 + 0x40))(plVar5);
          log_InlineLogDBERROR
                    ("table:cq_action/cq_newaction, ACTION %u type:%u: pUser is null at %s, %d",uVar9 & 0xffffffff,0xedd,
                     "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        }
        else {
          plVar5 = (longlong *)CurrentInstanceGet();
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,0x18);
          if (plVar5 != (longlong *)0x0) {
            lVar7 = *plVar5;
            uVar4 = (**(code **)(*param_4 + 8))(param_4);
            uVar1 = (**(code **)(lVar7 + 0x38))(plVar5,uVar4);
            return (bool)uVar1;
          }
        }
        break;
      case (char *)0x14011c369:
        uVar6 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
        lVar7 = FUN_140117e10(uVar6);
        if (lVar7 != 0) {
          local_res10[0] = 0;
          plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
          if (iVar3 == 1) {
            iVar3 = sscanf(param_3,"%u",local_res10);
            if (iVar3 < 1) {
              plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
              uVar9 = (**(code **)(*plVar5 + 0x40))(plVar5);
              log_InlineLogDBERROR(&DAT_14070c010,uVar9 & 0xffffffff,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x38fe);
            }
            else {
              lVar8 = FUN_14021b560(lVar7,local_res10[0]);
              if ((lVar8 != 0) && (cVar2 = FUN_140380900(lVar8), cVar2 == '\0')) {
                FUN_14021bd20(lVar7,local_res10[0]);
                return true;
              }
            }
          }
          else {
            local_48[0] = 0;
            local_48[3] = 0;
            local_48[2] = 0;
            local_48[1] = 0;
            iVar3 = sscanf(param_3,"%u %u %u %u %d",local_res10,local_48);
            if (iVar3 < 5) {
              plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
              uVar9 = (**(code **)(*plVar5 + 0x40))(plVar5);
              log_InlineLogDBERROR(&DAT_14070c010,uVar9 & 0xffffffff,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x391a);
            }
            else if (local_48[0] == 0) {
              plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
              uVar9 = (**(code **)(*plVar5 + 0x40))(plVar5);
              log_InlineLogDBERROR(&DAT_14070c610,uVar9 & 0xffffffff,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x3920);
            }
            else {
              lVar8 = FUN_14021b560(lVar7,local_res10[0]);
              if ((lVar8 == 0) && (lVar8 = FUN_1403814c0(*(undefined4 *)(param_1 + 0x48)), lVar8 != 0)) {
                cVar2 = FUN_140381e60(lVar8,local_res10[0],local_48[0],local_48[3]);
                if ((cVar2 != '\0') && (cVar2 = FUN_14021c1d0(lVar7,lVar8), cVar2 != '\0')) {
                  FUN_1403816d0(lVar8);
                  return true;
                }
                FUN_140381570(lVar8);
              }
            }
          }
        }
      }
    }
    else {
      plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
      uVar9 = (**(code **)(*plVar5 + 0x48))(plVar5);
      plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      uVar10 = (**(code **)(*plVar5 + 0x40))(plVar5);
      log_InlineLogDBERROR(&DAT_14070c140,uVar10 & 0xffffffff,uVar9 & 0xffffffff);
    }
  }
  return false;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14011c610(undefined8 param_1,undefined8 *param_2,char *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_178 [32];
  int *local_158;
  int local_148;
  undefined4 local_144;
  char local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1409707c0 ^ (ulonglong)auStack_178;
  if (param_2 == (undefined8 *)0x0) {
    log_InlineLogACTION_ERROR("CGameAction::ProcessActionFactionMatch() pAction is NULL at %s, %d");
    return false;
  }
  plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
  iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
  if (iVar3 == 0xf3d) {
    plVar6 = (longlong *)CurrentInstanceGet();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,0x1c);
    if (plVar6 != (longlong *)0x0) {
      plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      iVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
      if (iVar3 == 1) {
        uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,1);
        return (bool)uVar2;
      }
      uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,0);
      return (bool)uVar2;
    }
  }
  else if (iVar3 == 0xf43) {
    plVar6 = (longlong *)CurrentInstanceGet();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,0x1c);
    if (plVar6 != (longlong *)0x0) {
      local_148 = 0;
      plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      iVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
      lVar1 = *plVar6;
      uVar4 = (**(code **)(param_4[2] + 0x170))(param_4 + 2);
      iVar5 = (**(code **)(lVar1 + 0x70))(plVar6,uVar4,&local_148);
      return iVar5 == iVar3 + -1;
    }
  }
  else if (iVar3 == 0xf44) {
    plVar6 = (longlong *)CurrentInstanceGet();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,0x16);
    if ((plVar6 != (longlong *)0x0) && (param_4 != (longlong *)0x0)) {
      local_158 = &local_148;
      local_144 = 0;
      iVar3 = sscanf(param_3,"%d %s %d");
      if (iVar3 < 3) {
        plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar6 + 0x40))(plVar6);
        log_InlineLogACTION_ERROR(&DAT_14070c730);
      }
      else {
        iVar3 = _strnicmp(local_138,"<",0x100);
        if (iVar3 == 0) {
          lVar1 = *plVar6;
          uVar4 = (**(code **)(*param_4 + 8))(param_4);
          iVar3 = (**(code **)(lVar1 + 0x3d8))(plVar6,uVar4,local_144);
          return iVar3 < local_148;
        }
        iVar3 = _strnicmp(local_138,"<=",0x100);
        if (iVar3 == 0) {
          lVar1 = *plVar6;
          uVar4 = (**(code **)(*param_4 + 8))(param_4);
          iVar3 = (**(code **)(lVar1 + 0x3d8))(plVar6,uVar4,local_144);
          return iVar3 <= local_148;
        }
        iVar3 = _strnicmp(local_138,">",0x100);
        if (iVar3 == 0) {
          lVar1 = *plVar6;
          uVar4 = (**(code **)(*param_4 + 8))(param_4);
          iVar3 = (**(code **)(lVar1 + 0x3d8))(plVar6,uVar4,local_144);
          return local_148 < iVar3;
        }
        iVar3 = _strnicmp(local_138,">=",0x100);
        if (iVar3 == 0) {
          lVar1 = *plVar6;
          uVar4 = (**(code **)(*param_4 + 8))(param_4);
          iVar3 = (**(code **)(lVar1 + 0x3d8))(plVar6,uVar4,local_144);
          return local_148 <= iVar3;
        }
        iVar3 = _strnicmp(local_138,"==",0x100);
        if (iVar3 == 0) {
          lVar1 = *plVar6;
          uVar4 = (**(code **)(*param_4 + 8))(param_4);
          iVar3 = (**(code **)(lVar1 + 0x3d8))(plVar6,uVar4,local_144);
          return iVar3 == local_148;
        }
      }
    }
  }
  else {
    plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    (**(code **)(*plVar6 + 0x48))(plVar6);
    plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar6 + 0x40))(plVar6);
    log_InlineLogDBERROR(&DAT_14070c140);
  }
  return false;
}




bool FUN_14011c9e0(longlong param_1,undefined8 *param_2,char *param_3,longlong *param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  IStringManager *pIVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  
  if (param_2 == (undefined8 *)0x0) {
    log_InlineLogACTION_ERROR("CGameAction::ProcessActionCrossServer() pAction is NULL at %s, %d");
    return false;
  }
  plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
  iVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
  if (iVar3 == 0x1f41) {
    uVar9 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
    cVar1 = FUN_14008b330(uVar9);
    if (cVar1 == '\0') {
      lVar11 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
      if (*(longlong *)(lVar11 + 0x148) == 0) {
        log_InlineLogERROR(&DAT_1406d9c10);
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(lVar11 + 0x148);
      }
      uVar10 = 0;
      cVar1 = FUN_140005850(uVar9);
      if (cVar1 == '\0') {
        return false;
      }
      lVar11 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
      if (*(longlong *)(lVar11 + 0x148) == 0) {
        log_InlineLogERROR(&DAT_1406d9c10);
      }
      else {
        uVar10 = *(undefined8 *)(lVar11 + 0x148);
      }
      uVar2 = FUN_140005680(uVar10);
      return (bool)uVar2;
    }
    plVar7 = (longlong *)CurrentInstanceGet();
    if ((plVar7 != (longlong *)0x0) && (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0x25), plVar7 != (longlong *)0x0)) {
      uVar2 = (**(code **)(*plVar7 + 0x40))(plVar7);
      return (bool)uVar2;
    }
  }
  else if (iVar3 == 0x1f45) {
    uVar9 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
    cVar1 = FUN_14008b330(uVar9);
    if (((cVar1 != '\0') && (plVar7 = (longlong *)CurrentInstanceGet(), plVar7 != (longlong *)0x0)) &&
       (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0x25), plVar7 != (longlong *)0x0)) {
      uVar2 = (**(code **)(*plVar7 + 0x58))(plVar7);
      return (bool)uVar2;
    }
  }
  else {
    if (iVar3 == 0x1f47) {
      if (param_4 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1406d9c10);
        return false;
      }
      plVar7 = (longlong *)FUN_140087ed0();
      plVar12 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      iVar3 = (**(code **)(*plVar12 + 0x48))(plVar12);
      lVar11 = *plVar7;
      uVar5 = (**(code **)(param_4[2] + 0x170))();
      iVar6 = (**(code **)(lVar11 + 0x3a8))(plVar7,uVar5);
      return iVar6 == iVar3 + -1;
    }
    if (iVar3 == 0x1f4b) {
      if (param_4 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1406d9c10);
        return false;
      }
      cVar1 = (**(code **)(param_4[2] + 0x220))(param_4 + 2);
      if (cVar1 == '\0') {
        pIVar8 = theInstance();
        lVar11 = param_4[2];
        uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_CROSS_SERVER_DENY_DEAD");
        (**(code **)(lVar11 + 0x358))(param_4 + 2,uVar9);
        return false;
      }
      uVar4 = strtoul(param_3,(char **)0x0,10);
      if (4 < uVar4) {
        return false;
      }
      if (uVar4 == 1) {
        return false;
      }
      if ((uVar4 == 4) || (uVar4 == 2)) {
        cVar1 = FUN_1401a4030(param_4,0x809);
        if (cVar1 == '\0') {
          FUN_140179040(param_4,0x809);
          return false;
        }
        lVar11 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
        if (*(longlong *)(lVar11 + 0x148) == 0) {
          log_InlineLogERROR(&DAT_1406d9c10);
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar11 + 0x148);
        }
        cVar1 = FUN_140005680(uVar9);
        if (cVar1 == '\0') {
          pIVar8 = theInstance();
          lVar11 = param_4[2];
          uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_CROSS_FALG_WAR_CLOSE");
          (**(code **)(lVar11 + 0x358))(param_4 + 2,uVar9);
          return false;
        }
      }
      uVar9 = 0;
      if (uVar4 == 4) {
        uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
        iVar3 = FUN_14008b340(uVar10);
        if (iVar3 == 0) {
          pIVar8 = theInstance();
          lVar11 = param_4[2];
          uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_NO_FOUND_FRONTIER_SERVER");
          (**(code **)(lVar11 + 0x358))(param_4 + 2,uVar9);
          return false;
        }
      }
      else {
        plVar7 = (longlong *)FUN_140118320();
        lVar11 = *plVar7;
        uVar5 = (**(code **)(*param_4 + 8))(param_4);
        iVar3 = (**(code **)(lVar11 + 0x28))(plVar7,uVar5);
        if (iVar3 != 0) {
          pIVar8 = theInstance();
          lVar11 = param_4[2];
          uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_CROSS_SERVER_DENY_TEAM");
          (**(code **)(lVar11 + 0x358))(param_4 + 2,uVar9);
          return false;
        }
      }
      lVar11 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
      if (*(longlong *)(lVar11 + 0x148) == 0) {
        log_InlineLogERROR(&DAT_1406d9c10);
      }
      else {
        uVar9 = *(undefined8 *)(lVar11 + 0x148);
      }
      cVar1 = FUN_140005850(uVar9);
      if (cVar1 == '\0') {
        pIVar8 = theInstance();
        lVar11 = param_4[2];
        uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_CROSS_SERVER_DISCONNECT");
        (**(code **)(lVar11 + 0x358))(param_4 + 2,uVar9);
        return false;
      }
      if (uVar4 == 4) {
        uVar9 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
        uVar5 = FUN_14008b340(uVar9);
        FUN_1401bdae0(param_4,uVar5,1);
      }
      else {
        FUN_1401bd0d0(param_4,0,uVar4);
      }
      return true;
    }
    FUN_14008fc30(param_2);
    log_InlineLogDBERROR(&DAT_14070c140);
  }
  return false;
}




undefined8 FUN_14011cf20(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  plVar5 = DAT_140975b60;
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_2 + 0xc28);
  lVar2 = *(longlong *)(param_2 + 0xc20);
  if (DAT_140975b60 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1406d9c10);
  }
  lVar3 = *plVar5;
  uVar4 = FUN_140340e50(param_2,*param_3,*(undefined1 *)(param_3 + 2),1,1,0,1);
  plVar5 = (longlong *)(**(code **)(lVar3 + 0x60))(plVar5,uVar4);
  if (plVar5 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
    *param_4 = uVar4;
    FUN_140331120(param_2,plVar5,param_3);
    if ((ulonglong)(lVar1 - lVar2 >> 2) < 0x28) {
      plVar6 = (longlong *)FUN_140087d40();
      (**(code **)(*plVar6 + 0x130))(plVar6,param_2,plVar5,3,0,0);
    }
    uVar7 = 1;
  }
  return uVar7;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14011d050(undefined8 param_1,undefined8 *param_2,char *param_3,undefined8 param_4,undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_288 [32];
  undefined4 *local_268;
  undefined4 *local_260;
  undefined4 local_258;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240 [2];
  char local_238;
  undefined1 local_237 [254];
  undefined1 local_139;
  undefined1 local_138;
  undefined1 local_137 [255];
  ulonglong local_38;
  
  local_38 = DAT_1409707c0 ^ (ulonglong)auStack_288;
  if (param_2 == (undefined8 *)0x0) {
    local_268 = (undefined4 *)CONCAT44(local_268._4_4_,0x3b56);
    log_InlineLogERROR(&DAT_1406d9c10);
    return 0;
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
  iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
  if (iVar2 == 0x4e21) {
    local_238 = '\0';
    memset(local_237,0,0xff);
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,5);
    (**(code **)(*plVar3 + 0x78))(plVar3);
    _snprintf(&local_238,0x100,"</F>%s");
    local_139 = 0;
    uVar4 = FUN_140087e30();
    local_260 = (undefined4 *)param_7;
    local_268 = (undefined4 *)CONCAT44(local_268._4_4_,param_6);
    cVar1 = FUN_1402863b0(uVar4,&local_238,param_4,param_5);
    if (cVar1 == '\0') {
      log_InlineLogLuaERROR("Lua return fault, Call From:CGameAction::ProcessActionLua ACTION_LUA_DO_SCRIPT_FUN_0, lua function:%s.");
      return 0;
    }
  }
  else if (iVar2 == 0x4e22) {
    local_138 = 0;
    memset(local_137,0,0xff);
    local_248 = 0;
    iVar2 = sscanf(param_3,"%s %d");
    if (iVar2 < 2) goto LAB_14011d369;
    local_238 = '\0';
    memset(local_237,0,0xff);
    local_268._0_4_ = local_248;
    _snprintf(&local_238,0x100,"</F>%s</N>%d");
    local_139 = 0;
    uVar4 = FUN_140087e30();
    local_260 = (undefined4 *)param_7;
    local_268 = (undefined4 *)CONCAT44(local_268._4_4_,param_6);
    cVar1 = FUN_1402863b0(uVar4,&local_238,param_4,param_5);
    if (cVar1 == '\0') {
      log_InlineLogLuaERROR("Lua return fault, Call From:CGameAction::ProcessActionLua ACTION_LUA_DO_SCRIPT_FUN_1N, lua function:%s.");
      return 0;
    }
  }
  else if (iVar2 == 0x4e23) {
    local_138 = 0;
    memset(local_137,0,0xff);
    local_268 = &local_248;
    local_244 = 0;
    local_248 = 0;
    iVar2 = sscanf(param_3,"%s %d %d");
    if (iVar2 < 3) goto LAB_14011d369;
    local_238 = '\0';
    memset(local_237,0,0xff);
    local_260 = (undefined4 *)CONCAT44(local_260._4_4_,local_248);
    local_268._0_4_ = local_244;
    _snprintf(&local_238,0x100,"</F>%s</N>%d</N>%d");
    local_139 = 0;
    uVar4 = FUN_140087e30();
    local_260 = (undefined4 *)param_7;
    local_268 = (undefined4 *)CONCAT44(local_268._4_4_,param_6);
    cVar1 = FUN_1402863b0(uVar4,&local_238,param_4,param_5);
    if (cVar1 == '\0') {
      log_InlineLogLuaERROR("Lua return fault, Call From:CGameAction::ProcessActionLua ACTION_LUA_DO_SCRIPT_FUN_2N, lua function:%s.");
      return 0;
    }
  }
  else {
    if (iVar2 != 0x4e24) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
      (**(code **)(*plVar3 + 0x48))(plVar3);
      log_InlineLogLuaERROR(&DAT_14070cb28);
      return 0;
    }
    local_138 = 0;
    memset(local_137,0,0xff);
    local_260 = local_240;
    local_268 = &local_244;
    local_248 = 0;
    local_244 = 0;
    local_240[0] = 0;
    iVar2 = sscanf(param_3,"%s %d %d %d");
    if (iVar2 < 3) {
LAB_14011d369:
      plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,5);
      (**(code **)(*plVar3 + 0x78))(plVar3);
      plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
      (**(code **)(*plVar3 + 0x48))(plVar3);
      log_InlineLogLuaERROR("CGameAction::ProcessActionLua(), ACTIONTYPE %u, PARAM:%s");
      return 0;
    }
    local_238 = '\0';
    memset(local_237,0,0xff);
    local_258 = local_240[0];
    local_260 = (undefined4 *)CONCAT44(local_260._4_4_,local_244);
    local_268._0_4_ = local_248;
    _snprintf(&local_238,0x100,"</F>%s</N>%d</N>%d</N>%d");
    local_139 = 0;
    uVar4 = FUN_140087e30();
    local_260 = (undefined4 *)param_7;
    local_268 = (undefined4 *)CONCAT44(local_268._4_4_,param_6);
    cVar1 = FUN_1402863b0(uVar4,&local_238,param_4,param_5);
    if (cVar1 == '\0') {
      log_InlineLogLuaERROR("Lua return fault, Call From:CGameAction::ProcessActionLua ACTION_LUA_DO_SCRIPT_FUN_3N, lua function:%s.");
      return 0;
    }
  }
  return 1;
}




bool FUN_14011d500(longlong param_1,ulonglong param_2)

{
  if (0xbf < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140118b50();
  }
  return (*(uint *)(param_1 + (param_2 >> 5) * 4) >> ((byte)param_2 & 0x1f) & 1) != 0;
}




bool FUN_14011d530(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_14011d570(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14011d592;
  }
  lVar2 = *plVar1;
LAB_14011d592:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_14011d5b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14011d5d2;
  }
  lVar2 = *plVar1;
LAB_14011d5d2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_14011d5f0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_14011d630(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14011d652;
  }
  lVar2 = *plVar1;
LAB_14011d652:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_14011d670(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14011d692;
  }
  lVar2 = *plVar1;
LAB_14011d692:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_14011d6b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_14011d6f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14011d700(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14011d730(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140944540);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_14011d7c0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140944540);
  }
  operator_new(param_2 * 8);
  return;
}




bool FUN_14011d830(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




undefined8 FUN_14011d890(undefined8 param_1)

{
  FUN_140118f80();
  return param_1;
}




void * FUN_14011d900(void *param_1,longlong param_2,longlong param_3)

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




undefined4 * FUN_14011d940(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *param_3 = *param_1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2));
    param_3 = param_3 + 0xc;
  }
  return param_3;
}




void * FUN_14011d9a0(void *param_1,uint param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((longlong)param_1 + 8));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void * FUN_14011da40(void *param_1,longlong param_2,void *param_3)

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




void FUN_14011dac0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar1 = param_2;
  while( true ) {
    lVar3 = lVar1 * 2 + 2;
    if (param_3 <= lVar3) break;
    if (*(uint *)(param_1 + lVar3 * 4) < *(uint *)(param_1 + -4 + lVar3 * 4)) {
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
    uVar2 = *(uint *)(param_1 + lVar3 * 4);
    if (param_4 <= uVar2) break;
    *(uint *)(param_1 + lVar1 * 4) = uVar2;
    lVar1 = lVar3;
  }
  *(uint *)(param_1 + lVar1 * 4) = param_4;
  return;
}




void * FUN_14011db50(void *param_1,longlong param_2,longlong param_3)

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




undefined1 FUN_14011dbb0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
  uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
  if ((uVar3 >> 0x15 & 1) == 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
    uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
    if ((uVar3 >> 0x1c & 1) == 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
      uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
      if ((uVar3 >> 0x1d & 1) == 0) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
        uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
        if ((uVar3 >> 0x20 & 1) == 0) {
          cVar1 = FUN_140119660(param_1);
          if (cVar1 == '\0') {
            cVar1 = FUN_140119690(param_1);
            if (cVar1 == '\0') {
              cVar1 = FUN_1401196f0(param_1);
              if (cVar1 == '\0') {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}




undefined8 * FUN_14011dc80(undefined8 *param_1,byte param_2)

{
  *param_1 = CGameAction::vftable;
  if ((param_2 & 1) != 0) {
    FUN_140119910();
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14011dcb0(undefined8 param_1,undefined8 *param_2,char *param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  byte *pbVar6;
  IStringManager *pIVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_628 [32];
  undefined4 *local_608;
  undefined8 local_600;
  undefined1 *local_5f8;
  undefined4 local_5f0;
  uint local_5e8;
  undefined4 local_5e0;
  undefined4 local_5d8;
  int local_5c8;
  undefined4 local_5c0 [2];
  undefined8 local_5b8;
  undefined1 local_5b0 [24];
  undefined1 local_598 [1104];
  undefined1 local_148;
  undefined1 local_147 [255];
  ulonglong local_48;
  
  local_5b8 = 0xfffffffffffffffe;
  local_48 = DAT_1409707c0 ^ (ulonglong)auStack_628;
  if (param_2 == (undefined8 *)0x0) {
    log_InlineLogDBERROR("table:cq_action/cq_newaction, CGameAction::ProcessActionEspecial() at %s, %d");
    uVar8 = 0;
  }
  else if (param_4 == (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    (**(code **)(*plVar5 + 0x48))(plVar5);
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar5 + 0x40))(plVar5);
    local_608 = (undefined4 *)CONCAT44(local_608._4_4_,0x379b);
    log_InlineLogDBERROR("table:cq_action/cq_newaction, CGameAction::ProcessActionEspecial() ActionID=%u ActionType=%u at %s, %d");
    uVar8 = 0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    iVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
    if (iVar2 == 0xe75) {
      local_148 = 0;
      memset(local_147,0,0xff);
      local_5c8 = 0;
      local_5c0[0] = 0;
      pbVar6 = (byte *)(**(code **)(*param_4 + 0xa8))(param_4,local_5b0);
      if ((*pbVar6 & 1) == 0) {
        local_608 = local_5c0;
        iVar2 = sscanf(param_3,"%d %s %d");
        if (iVar2 == 3) {
          if (local_5c8 < 1) {
            uVar8 = 0;
          }
          else {
            plVar5 = param_4 + 2;
            if (plVar5 != (longlong *)0x0) {
              plVar9 = (longlong *)FUN_1401181a0();
              lVar1 = *plVar9;
              uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
              (**(code **)(lVar1 + 0x10))(plVar9,uVar3,0x56);
            }
            local_5f8 = (undefined1 *)0x0;
            local_600 = 0;
            local_608 = (undefined4 *)((ulonglong)local_608 & 0xffffffff00000000);
            FUN_140164e30(param_4,0,0,0);
            plVar9 = (longlong *)FUN_1401181a0();
            lVar1 = *plVar9;
            uVar3 = (**(code **)(*param_4 + 8))(param_4);
            local_5d8 = 0;
            local_5e0 = (uint)local_5e0._2_2_ << 0x10;
            local_5e8 = local_5e8 & 0xffffff00;
            local_5f0 = 0;
            local_5f8 = (undefined1 *)((ulonglong)local_5f8 & 0xffffffff00000000);
            local_600 = CONCAT44(local_600._4_4_,1);
            local_608._0_4_ = local_5c8;
            (**(code **)(lVar1 + 8))(plVar9,uVar3,0x56,0xf);
            plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,2);
            uVar3 = (**(code **)(*plVar9 + 0x48))(plVar9);
            plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,1);
            uVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
            local_5f8 = (undefined1 *)0x0;
            local_600 = 0;
            local_608 = (undefined4 *)CONCAT44(local_608._4_4_,uVar3);
            FUN_140164e30(param_4,1,local_5c0[0],uVar4);
            FUN_140362560(local_598);
            uVar3 = (**(code **)(*param_4 + 8))(param_4);
            local_5e0 = 0;
            local_5e8 = local_5c8;
            local_5f0 = local_5c0[0];
            local_5f8 = &local_148;
            local_600 = CONCAT62(local_600._2_6_,0xa4);
            local_608 = (undefined4 *)CONCAT62(local_608._2_6_,1);
            iVar2 = FUN_140362700(local_598,uVar3,0,0);
            if (iVar2 != 0) {
              (**(code **)(*plVar5 + 0x348))(plVar5,local_598,1);
            }
            FUN_1403625e0(local_598);
            uVar8 = 1;
          }
        }
        else {
          plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
          (**(code **)(*plVar5 + 0x40))(plVar5);
          log_InlineLogDBERROR(&DAT_14070c010);
          uVar8 = 0;
        }
      }
      else {
        pIVar7 = theInstance();
        lVar1 = param_4[2];
        uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_DIE");
        (**(code **)(lVar1 + 0x358))(param_4 + 2,uVar8);
        uVar8 = 0;
      }
    }
    else {
      plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
      (**(code **)(*plVar5 + 0x48))(plVar5);
      plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar5 + 0x40))(plVar5);
      log_InlineLogDBERROR(&DAT_14070c140);
      uVar8 = 0;
    }
  }
  return uVar8;
}




void FUN_14011e060(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14011e080(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_14011e0a0(longlong param_1,ulonglong param_2)

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
      FUN_140118d90();
    }
    lVar1 = FUN_14011d730(param_1 + 0x10);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




longlong * FUN_14011e100(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar1 = lVar3 + param_3 * -4;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_14011e16d;
  }
  _invalid_parameter_noinfo();
LAB_14011e16d:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 FUN_14011e1a0(longlong param_1,ulonglong param_2)

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
      FUN_140118e60();
    }
    lVar1 = FUN_14011d7c0(param_1 + 0x10);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_14011e210(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (void *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




longlong * FUN_14011e250(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_14011e2ba;
  }
  _invalid_parameter_noinfo();
LAB_14011e2ba:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_14011e2f0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_14011e360(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (void *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_14011e3a0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_14011e400(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_14011e490(void *param_1,longlong param_2,longlong param_3)

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




longlong FUN_14011e4d0(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  if (param_1 != param_2) {
    lVar1 = param_3 - (longlong)param_1;
    do {
      *(undefined4 *)(lVar1 + (longlong)param_1) = *param_1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2) + lVar1),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2));
      param_1 = param_1 + 0xc;
    } while (param_1 != param_2);
  }
  return (lVar2 / 0x30) * 0x30 + param_3;
}




void * FUN_14011e590(void *param_1,longlong param_2,void *param_3)

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




void FUN_14011e5d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014011e5ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  return;
}




void FUN_14011e600(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  
  lVar3 = (longlong)param_3 - (longlong)param_1 >> 2;
  if (lVar3 < 0x29) {
    uVar2 = *param_2;
    if ((uVar2 < *param_1) && (param_2 != param_1)) {
      *param_2 = *param_1;
      *param_1 = uVar2;
    }
    uVar2 = *param_3;
    if ((uVar2 < *param_2) && (param_3 != param_2)) {
      *param_3 = *param_2;
      *param_2 = uVar2;
    }
    uVar2 = *param_2;
    if ((uVar2 < *param_1) && (param_2 != param_1)) {
      *param_2 = *param_1;
      *param_1 = uVar2;
    }
  }
  else {
    lVar3 = lVar3 + 1;
    lVar3 = (longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 7)) >> 3;
    uVar2 = param_1[lVar3];
    puVar1 = param_1 + lVar3;
    puVar5 = param_1 + lVar3 * 2;
    if ((uVar2 < *param_1) && (puVar1 != param_1)) {
      *puVar1 = *param_1;
      *param_1 = uVar2;
    }
    uVar2 = *puVar5;
    if ((uVar2 < *puVar1) && (puVar5 != puVar1)) {
      *puVar5 = *puVar1;
      *puVar1 = uVar2;
    }
    uVar2 = *puVar1;
    if ((uVar2 < *param_1) && (puVar1 != param_1)) {
      *puVar1 = *param_1;
      *param_1 = uVar2;
    }
    uVar2 = *param_2;
    puVar5 = param_2 + lVar3;
    puVar4 = param_2 + -lVar3;
    if ((uVar2 < *puVar4) && (param_2 != puVar4)) {
      *param_2 = *puVar4;
      *puVar4 = uVar2;
    }
    uVar2 = *puVar5;
    if ((uVar2 < *param_2) && (puVar5 != param_2)) {
      *puVar5 = *param_2;
      *param_2 = uVar2;
    }
    uVar2 = *param_2;
    if ((uVar2 < *puVar4) && (param_2 != puVar4)) {
      *param_2 = *puVar4;
      *puVar4 = uVar2;
    }
    puVar5 = param_3 + -lVar3;
    puVar4 = param_3 + lVar3 * -2;
    uVar2 = *puVar5;
    if ((uVar2 < *puVar4) && (puVar5 != puVar4)) {
      *puVar5 = *puVar4;
      *puVar4 = uVar2;
    }
    uVar2 = *param_3;
    if ((uVar2 < *puVar5) && (param_3 != puVar5)) {
      *param_3 = *puVar5;
      *puVar5 = uVar2;
    }
    uVar2 = *puVar5;
    if ((uVar2 < *puVar4) && (puVar5 != puVar4)) {
      *puVar5 = *puVar4;
      *puVar4 = uVar2;
    }
    uVar2 = *param_2;
    if ((uVar2 < *puVar1) && (param_2 != puVar1)) {
      *param_2 = *puVar1;
      *puVar1 = uVar2;
    }
    uVar2 = *puVar5;
    if ((uVar2 < *param_2) && (puVar5 != param_2)) {
      *puVar5 = *param_2;
      *param_2 = uVar2;
    }
    uVar2 = *param_2;
    if ((uVar2 < *puVar1) && (param_2 != puVar1)) {
      *param_2 = *puVar1;
      *puVar1 = uVar2;
      return;
    }
  }
  return;
}




void FUN_14011e7b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_2 - param_1 >> 2;
  lVar4 = lVar7 - (param_2 - param_1 >> 0x3f) >> 1;
  if (0 < lVar4) {
    lVar6 = lVar4 * 2 + 2;
    do {
      uVar2 = *(uint *)(param_1 + -4 + lVar4 * 4);
      lVar4 = lVar4 + -1;
      lVar6 = lVar6 + -2;
      lVar1 = lVar4;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        if (*(uint *)(param_1 + lVar5 * 4) < *(uint *)(param_1 + -4 + lVar5 * 4)) {
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
        uVar3 = *(uint *)(param_1 + lVar5 * 4);
        if (uVar2 <= uVar3) break;
        *(uint *)(param_1 + lVar1 * 4) = uVar3;
        lVar1 = lVar5;
      }
      *(uint *)(param_1 + lVar1 * 4) = uVar2;
    } while (0 < lVar4);
  }
  return;
}




void FUN_14011e890(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 1, puVar5 != param_2)) {
    do {
      uVar1 = *puVar5;
      if (uVar1 < *param_1) {
        lVar4 = (longlong)puVar5 - (longlong)param_1 >> 2;
        if (0 < lVar4) {
          memmove_s(puVar5 + (1 - lVar4),lVar4 * 4,param_1,lVar4 * 4);
        }
        *param_1 = uVar1;
      }
      else {
        uVar2 = puVar5[-1];
        puVar3 = puVar5;
        while (uVar1 < uVar2) {
          *puVar3 = uVar2;
          uVar2 = puVar3[-2];
          puVar3 = puVar3 + -1;
        }
        *puVar3 = uVar1;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != param_2);
  }
  return;
}




ulonglong FUN_14011e970(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = param_1[4];
  if (uVar1 < (ulonglong)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  param_1 = (longlong *)*param_1;
  lVar3 = 0;
  if (param_1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar2 = lVar3;
  }
  else {
    lVar2 = *param_1;
  }
  uVar1 = uVar1 - 4;
  if (uVar1 <= *(ulonglong *)(lVar2 + 0x20)) {
    lVar2 = lVar3;
    if (param_1 != (longlong *)0x0) {
      lVar2 = *param_1;
    }
    if (*(ulonglong *)(lVar2 + 0x18) <= uVar1) goto LAB_14011e9e7;
  }
  _invalid_parameter_noinfo();
LAB_14011e9e7:
  if (param_1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar3 = *param_1;
  }
  if (*(ulonglong *)(lVar3 + 0x20) <= uVar1) {
    _invalid_parameter_noinfo();
  }
  return uVar1;
}




void FUN_14011ea70(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_14011eaa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (void *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_14011eaf0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_14011eb50(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_14011eb80(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (void *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_14011ebd0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_14011ec30(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_14011ec90(void)

{
  FUN_14011e4d0();
  return;
}




void * FUN_14011ecf0(void *param_1,longlong param_2,void *param_3)

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




void FUN_14011ed30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014011ed4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 8));
  return;
}




ulonglong * FUN_14011ed60(ulonglong *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar6 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 2) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_14011e600(param_2,puVar6,param_3 + -1);
  puVar7 = puVar6 + 1;
  while (puVar9 = puVar6, param_2 < puVar9) {
    uVar1 = puVar9[-1];
    uVar2 = *puVar9;
    if ((uVar2 >= uVar1 && uVar2 != uVar1) || (puVar6 = puVar9 + -1, uVar2 < uVar1)) break;
  }
  puVar6 = puVar7;
  puVar4 = puVar9;
  if (puVar7 < param_3) {
    uVar1 = *puVar9;
    do {
      uVar2 = *puVar7;
      puVar6 = puVar7;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      puVar7 = puVar7 + 1;
      puVar6 = puVar7;
    } while (puVar7 < param_3);
  }
joined_r0x00014011edeb:
  do {
    puVar3 = puVar6;
    puVar6 = puVar9;
    puVar5 = puVar4;
    if (param_3 <= puVar3) {
joined_r0x00014011ee1b:
      for (; param_2 < puVar9; puVar9 = puVar9 + -1) {
        puVar6 = puVar6 + -1;
        uVar1 = *puVar6;
        if (*puVar5 <= uVar1) {
          if (*puVar5 < uVar1) break;
          puVar5 = puVar5 + -1;
          if (puVar5 != puVar6) {
            uVar2 = *puVar5;
            *puVar5 = uVar1;
            *puVar6 = uVar2;
          }
        }
      }
      if (puVar9 == param_2) {
        if (puVar3 == param_3) {
          *param_1 = (ulonglong)puVar5;
          param_1[1] = (ulonglong)puVar7;
          return param_1;
        }
        if ((puVar7 != puVar3) && (puVar5 != puVar7)) {
          uVar1 = *puVar5;
          *puVar5 = *puVar7;
          *puVar7 = uVar1;
        }
        puVar7 = puVar7 + 1;
        puVar6 = puVar3 + 1;
        puVar4 = puVar5 + 1;
        if (puVar5 != puVar3) {
          uVar1 = *puVar5;
          *puVar5 = *puVar3;
          *puVar3 = uVar1;
        }
      }
      else {
        puVar9 = puVar9 + -1;
        if (puVar3 == param_3) {
          puVar4 = puVar5 + -1;
          if (puVar9 != puVar4) {
            uVar1 = *puVar9;
            *puVar9 = *puVar4;
            *puVar4 = uVar1;
          }
          puVar7 = puVar7 + -1;
          puVar6 = puVar3;
          if (puVar4 != puVar7) {
            uVar1 = *puVar4;
            *puVar4 = *puVar7;
            *puVar7 = uVar1;
          }
        }
        else {
          if (puVar3 != puVar9) {
            uVar1 = *puVar3;
            *puVar3 = *puVar9;
            *puVar9 = uVar1;
          }
          puVar6 = puVar3 + 1;
          puVar4 = puVar5;
        }
      }
      goto joined_r0x00014011edeb;
    }
    uVar1 = *puVar3;
    puVar8 = puVar7;
    if (uVar1 <= *puVar4) {
      if (uVar1 < *puVar4) goto joined_r0x00014011ee1b;
      puVar8 = puVar7 + 1;
      if (puVar7 != puVar3) {
        uVar2 = *puVar7;
        *puVar7 = uVar1;
        *puVar3 = uVar2;
      }
    }
    puVar6 = puVar3 + 1;
    puVar7 = puVar8;
  } while( true );
}




void FUN_14011ef10(longlong param_1,longlong param_2)

{
  if (4 < (longlong)(param_2 - param_1 & 0xfffffffffffffffcU)) {
    FUN_14011e7b0(param_1,param_2,0,0);
  }
  return;
}




void FUN_14011ef50(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (4 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffffcU)) {
    uVar1 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = *param_1;
    FUN_14011dac0(param_1,0,(longlong)((param_2 - (longlong)param_1) - 4U) >> 2,uVar1);
  }
  return;
}




undefined4 FUN_14011ef90(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_14011e970(param_1 + 0xc08);
  return *puVar1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14011efb0(longlong param_1,char *param_2,char *param_3,int param_4,char *param_5,longlong *param_6,longlong *param_7,int param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  tm *ptVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  IStringManager *pIVar17;
  char *pcVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 auStack_4718 [32];
  undefined8 local_46f8;
  undefined4 *local_46f0;
  undefined4 local_46e8;
  undefined4 local_46e0;
  longlong local_46d8;
  int local_46d0;
  undefined4 local_46cc;
  undefined4 local_46c8;
  undefined4 local_46c4;
  undefined4 local_46c0;
  undefined4 local_46bc;
  undefined4 local_46b8;
  undefined4 local_46b4;
  undefined4 local_46b0;
  undefined4 local_46ac;
  undefined4 local_46a8;
  int local_46a4;
  undefined4 local_46a0;
  char *local_4698;
  longlong *local_4690;
  longlong local_4688;
  undefined4 local_4680;
  undefined4 local_467c;
  undefined4 local_4678;
  undefined4 local_4674;
  int local_4670;
  int local_466c;
  uint local_4668;
  char *local_4660;
  undefined2 local_4658;
  undefined1 local_4656 [253];
  undefined1 local_4559;
  undefined2 local_4558;
  undefined1 local_4556;
  undefined1 local_4555 [252];
  undefined1 local_4459;
  char local_4458 [255];
  undefined1 local_4359;
  undefined2 local_4358;
  undefined1 local_4356;
  undefined1 local_4355 [252];
  undefined1 local_4259;
  undefined2 local_4258;
  undefined1 local_4256;
  undefined1 local_4255 [252];
  undefined1 local_4159;
  undefined2 local_4158;
  undefined1 local_4156;
  undefined1 local_4155 [252];
  undefined1 local_4059;
  undefined2 local_4058;
  undefined1 local_4056;
  undefined1 local_4055 [252];
  undefined1 local_3f59;
  undefined2 local_3f58;
  undefined1 local_3f56;
  undefined1 local_3f55 [252];
  undefined1 local_3e59;
  char local_3e58 [255];
  undefined1 local_3d59;
  undefined2 local_3d58;
  undefined1 local_3d56;
  undefined1 local_3d55 [252];
  undefined1 local_3c59;
  char local_3c58 [255];
  undefined1 local_3b59;
  char local_3b58 [256];
  char local_3a58 [256];
  char local_3958 [256];
  char local_3858 [255];
  undefined1 local_3759;
  undefined2 local_3758;
  undefined1 local_3756 [253];
  undefined1 local_3659;
  char local_3658 [255];
  undefined1 local_3559;
  undefined2 local_3558;
  undefined1 local_3556 [253];
  undefined1 local_3459;
  char local_3458 [256];
  char local_3358 [255];
  undefined1 local_3259;
  undefined2 local_3258;
  undefined1 local_3256;
  undefined1 local_3255 [252];
  undefined1 local_3159;
  undefined2 local_3158;
  undefined1 local_3156 [253];
  undefined1 local_3059;
  char local_3058 [256];
  char local_2f58 [255];
  undefined1 local_2e59;
  char local_2e58 [255];
  undefined1 local_2d59;
  char local_2d58 [255];
  undefined1 local_2c59;
  char local_2c58 [256];
  char local_2b58 [256];
  char local_2a58 [256];
  char local_2958 [256];
  char local_2858 [256];
  char local_2758 [256];
  char local_2658 [256];
  char local_2558 [256];
  char local_2458 [256];
  char local_2358 [256];
  char local_2258 [256];
  char local_2158 [256];
  char local_2058 [256];
  char local_1f58 [256];
  char local_1e58 [256];
  char local_1d58 [256];
  char local_1c58 [256];
  char local_1b58 [256];
  char local_1a58 [256];
  char local_1958 [256];
  char local_1858 [256];
  undefined2 local_1758;
  undefined1 local_1756;
  undefined1 local_1755 [253];
  char local_1658 [256];
  char local_1558 [256];
  char local_1458 [256];
  char local_1358 [256];
  char local_1258 [256];
  char local_1158 [256];
  char local_1058 [256];
  char local_f58 [256];
  char local_e58 [256];
  char local_d58 [256];
  char local_c58 [256];
  char local_b58 [256];
  char local_a58 [256];
  char local_958 [256];
  char local_858 [256];
  char local_758 [256];
  char local_658 [256];
  char local_558 [256];
  undefined1 local_458;
  undefined1 local_457 [255];
  undefined1 local_358;
  undefined1 local_357 [255];
  undefined1 local_258;
  undefined1 local_257 [255];
  undefined1 local_158;
  undefined1 local_157 [255];
  ulonglong local_58;
  
  local_58 = DAT_1409707c0 ^ (ulonglong)auStack_4718;
  local_4698 = param_5;
  local_4690 = param_6;
  local_4688 = param_1;
  plVar8 = (longlong *)FUN_140087ed0();
  local_4670 = (**(code **)(*plVar8 + 0x1d0))(plVar8);
  plVar8 = (longlong *)FUN_140087ed0();
  local_466c = (**(code **)(*plVar8 + 0x1d8))(plVar8);
  if ((param_2 == (char *)0x0) || (param_3 == (char *)0x0)) {
    local_46f8 = (undefined4 *)CONCAT44(local_46f8._4_4_,0x92);
    log_InlineLogERROR(&DAT_1406d9c10);
  }
  else {
    pcVar9 = strchr(param_3,0x25);
    if (pcVar9 == (char *)0x0) {
      tq::SafeCopy(param_2,param_3,(longlong)param_4);
    }
    else {
      local_46d8 = 0;
      if (param_7 != (longlong *)0x0) {
        (**(code **)(*param_7 + 0x298))(param_7,0x1040,&local_46d8);
      }
      local_4668 = 0;
      cVar1 = *param_3;
      while (cVar1 != '\0') {
        local_4668 = local_4668 + 1;
        if (1000000 < local_4668) {
          local_46f8._4_4_ = (undefined4)((ulonglong)local_46f8 >> 0x20);
          local_46f8 = (undefined4 *)CONCAT44(local_46f8._4_4_,0xa5);
          log_InlineLogERROR(&DAT_1406d9c10);
          break;
        }
        if (*param_3 == '%') {
          pcVar9 = param_3 + 1;
          local_46d0 = 0;
          iVar2 = isdigit((int)param_3[1]);
          iVar21 = 0;
          if (iVar2 != 0) {
            local_46d0 = *pcVar9 + -0x30;
            pcVar9 = param_3 + 2;
            iVar21 = local_46d0;
          }
          iVar2 = isdigit((int)*pcVar9);
          if (iVar2 != 0) {
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            local_46d0 = cVar1 + -0x30 + iVar21 * 10;
            iVar21 = local_46d0;
          }
          local_4660 = param_2 + iVar21;
          if (*pcVar9 == '%') {
            *param_2 = '%';
            pcVar9 = pcVar9 + 2;
            param_2 = param_2 + 1;
          }
          pcVar10 = strstr(pcVar9,"sysdata(");
          if ((pcVar10 == (char *)0x0) || (pcVar10 = strstr(pcVar9,")"), pcVar10 == (char *)0x0)) {
            pcVar10 = strstr(pcVar9,"sysdatastr(");
            if ((pcVar10 == (char *)0x0) || (pcVar10 = strstr(pcVar9,")"), pcVar10 == (char *)0x0)) {
              pcVar10 = strstr(pcVar9,"taskdata(");
              if ((pcVar10 != (char *)0x0) && (pcVar10 = strstr(pcVar9,")"), pcVar10 != (char *)0x0)) {
                local_46bc = 0;
                local_46a0 = 0;
                sscanf(pcVar9,"taskdata(%u, %d)");
                if (param_6 != (longlong *)0x0) {
                  plVar8 = (longlong *)FUN_140118220();
                  lVar19 = *plVar8;
                  uVar3 = (**(code **)(*param_6 + 8))(param_6);
                  (**(code **)(lVar19 + 0x38))(plVar8,uVar3,local_46bc,local_46a0);
                }
                local_3858[0] = '\0';
                memset(local_3858 + 1,0,0xff);
                _snprintf(local_3858,0x100,"%d");
                local_3759 = 0;
                pcVar10 = local_3858;
                do {
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                  pcVar10[(longlong)(param_2 + (-1 - (longlong)local_3858))] = cVar1;
                } while (cVar1 != '\0');
                pcVar9 = strstr(pcVar9,")");
                uVar20 = 0xffffffffffffffff;
                pcVar9 = pcVar9 + 1;
                pcVar10 = local_3858;
                do {
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 != '\0');
                param_2 = param_2 + (~uVar20 - 1);
              }
            }
            else {
              local_46a8 = 0;
              local_46c4 = 0;
              sscanf(pcVar9,"sysdatastr(%u, %d)");
              uVar11 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
              FUN_1400b4040(uVar11,local_46a8,local_46c4);
              local_4458[0] = '\0';
              memset(local_4458 + 1,0,0xff);
              _snprintf(local_4458,0x100,"%s");
              local_4359 = 0;
              pcVar10 = local_4458;
              do {
                cVar1 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[(longlong)(param_2 + (-1 - (longlong)local_4458))] = cVar1;
              } while (cVar1 != '\0');
              pcVar9 = strstr(pcVar9,")");
              uVar20 = 0xffffffffffffffff;
              pcVar9 = pcVar9 + 1;
              pcVar10 = local_4458;
              do {
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar1 != '\0');
              param_2 = param_2 + (~uVar20 - 1);
            }
          }
          else {
            local_46b4 = 0;
            local_46b8 = 0;
            sscanf(pcVar9,"sysdata(%u, %d)");
            uVar11 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
            FUN_1400b3e50(uVar11,local_46b4,local_46b8);
            local_3358[0] = '\0';
            memset(local_3358 + 1,0,0xff);
            _snprintf(local_3358,0x100,"%d");
            local_3259 = 0;
            pcVar10 = local_3358;
            do {
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar10[(longlong)(param_2 + (-1 - (longlong)local_3358))] = cVar1;
            } while (cVar1 != '\0');
            pcVar9 = strstr(pcVar9,")");
            uVar20 = 0xffffffffffffffff;
            pcVar9 = pcVar9 + 1;
            pcVar10 = local_3358;
            do {
              if (uVar20 == 0) break;
              uVar20 = uVar20 - 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            param_2 = param_2 + (~uVar20 - 1);
          }
          if (param_6 != (longlong *)0x0) {
            iVar2 = _strnicmp(pcVar9,"iter_emoney",0xb);
            if (iVar2 == 0) {
              local_558[0] = '\0';
              memset(local_558 + 1,0,0xff);
              _snprintf(local_558,0xff,"%u");
              pcVar10 = local_558;
              do {
                cVar1 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[(longlong)(param_2 + (-1 - (longlong)local_558))] = cVar1;
              } while (cVar1 != '\0');
              uVar20 = 0xffffffffffffffff;
              pcVar10 = local_558;
              do {
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar1 != '\0');
              pcVar9 = pcVar9 + 0xb;
              param_2 = param_2 + (~uVar20 - 1);
            }
            else {
              iVar2 = _strnicmp(pcVar9,"iter_blesstime",0xe);
              if (iVar2 == 0) {
                local_1758 = 0x2d2d;
                local_1756 = 0;
                memset(local_1755,0,0xfd);
                FUN_140382a40(param_6,&local_1758);
                pcVar10 = (char *)&local_1758;
                do {
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                  pcVar10[(longlong)(param_2 + (-1 - (longlong)&local_1758))] = cVar1;
                } while (cVar1 != '\0');
                uVar20 = 0xffffffffffffffff;
                pcVar10 = (char *)&local_1758;
                do {
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 != '\0');
                pcVar9 = pcVar9 + 0xe;
                param_2 = param_2 + (~uVar20 - 1);
              }
              else {
                pcVar10 = strstr(pcVar9,"emoney_card1(");
                if ((pcVar10 == (char *)0x0) || (pcVar10 = strstr(pcVar9,")"), pcVar10 == (char *)0x0)) {
                  iVar2 = _strnicmp(pcVar9,"emoney_card2",0xc);
                  if (iVar2 == 0) {
                    local_2958[0] = '\0';
                    memset(local_2958 + 1,0,0xff);
                    FUN_1401749c0(param_6);
                    _snprintf(local_2958,0xff,"%d");
                    pcVar10 = local_2958;
                    do {
                      cVar1 = *pcVar10;
                      pcVar10 = pcVar10 + 1;
                      pcVar10[(longlong)(param_2 + (-1 - (longlong)local_2958))] = cVar1;
                    } while (cVar1 != '\0');
                    uVar20 = 0xffffffffffffffff;
                    pcVar10 = local_2958;
                    do {
                      if (uVar20 == 0) break;
                      uVar20 = uVar20 - 1;
                      cVar1 = *pcVar10;
                      pcVar10 = pcVar10 + 1;
                    } while (cVar1 != '\0');
                    pcVar9 = pcVar9 + 0xc;
                    param_2 = param_2 + (~uVar20 - 1);
                  }
                  else {
                    iVar2 = _strnicmp(pcVar9,"emoney_card3",0xc);
                    if (iVar2 == 0) {
                      local_3258 = 0x2d2d;
                      local_3256 = 0;
                      memset(local_3255,0,0xfd);
                      FUN_140174b80(param_6);
                      _snprintf((char *)&local_3258,0x100,"%d");
                      local_3159 = 0;
                      pcVar10 = (char *)&local_3258;
                      do {
                        cVar1 = *pcVar10;
                        pcVar10 = pcVar10 + 1;
                        pcVar10[(longlong)(param_2 + (-1 - (longlong)&local_3258))] = cVar1;
                      } while (cVar1 != '\0');
                      uVar20 = 0xffffffffffffffff;
                      pcVar10 = (char *)&local_3258;
                      do {
                        if (uVar20 == 0) break;
                        uVar20 = uVar20 - 1;
                        cVar1 = *pcVar10;
                        pcVar10 = pcVar10 + 1;
                      } while (cVar1 != '\0');
                      pcVar9 = pcVar9 + 0xc;
                      param_2 = param_2 + (~uVar20 - 1);
                    }
                    else {
                      iVar2 = _strnicmp(pcVar9,"emoney_card4",0xc);
                      if (iVar2 == 0) {
                        local_4058 = 0x2d2d;
                        local_4056 = 0;
                        memset(local_4055,0,0xfd);
                        FUN_140174d40(param_6);
                        _snprintf((char *)&local_4058,0x100,"%d");
                        local_3f59 = 0;
                        pcVar10 = (char *)&local_4058;
                        do {
                          cVar1 = *pcVar10;
                          pcVar10 = pcVar10 + 1;
                          pcVar10[(longlong)(param_2 + (-1 - (longlong)&local_4058))] = cVar1;
                        } while (cVar1 != '\0');
                        uVar20 = 0xffffffffffffffff;
                        pcVar10 = (char *)&local_4058;
                        do {
                          if (uVar20 == 0) break;
                          uVar20 = uVar20 - 1;
                          cVar1 = *pcVar10;
                          pcVar10 = pcVar10 + 1;
                        } while (cVar1 != '\0');
                        pcVar9 = pcVar9 + 0xc;
                        param_2 = param_2 + (~uVar20 - 1);
                      }
                      else {
                        iVar2 = _strnicmp(pcVar9,"dragon_type1",0xc);
                        if (iVar2 == 0) {
                          local_3658[0] = '\0';
                          memset(local_3658 + 1,0,0xff);
                          FUN_140175200(param_6,1);
                          _snprintf(local_3658,0x100,"%d");
                          local_3559 = 0;
                          pcVar10 = local_3658;
                          do {
                            cVar1 = *pcVar10;
                            pcVar10 = pcVar10 + 1;
                            pcVar10[(longlong)(param_2 + (-1 - (longlong)local_3658))] = cVar1;
                          } while (cVar1 != '\0');
                          uVar20 = 0xffffffffffffffff;
                          pcVar10 = local_3658;
                          do {
                            if (uVar20 == 0) break;
                            uVar20 = uVar20 - 1;
                            cVar1 = *pcVar10;
                            pcVar10 = pcVar10 + 1;
                          } while (cVar1 != '\0');
                          pcVar9 = pcVar9 + 0xc;
                          param_2 = param_2 + (~uVar20 - 1);
                        }
                        else {
                          iVar2 = _strnicmp(pcVar9,"dragon_type2",0xc);
                          if (iVar2 == 0) {
                            local_3e58[0] = '\0';
                            memset(local_3e58 + 1,0,0xff);
                            FUN_140175200(param_6,2);
                            _snprintf(local_3e58,0x100,"%d");
                            local_3d59 = 0;
                            pcVar10 = local_3e58;
                            do {
                              cVar1 = *pcVar10;
                              pcVar10[(longlong)param_2 - (longlong)local_3e58] = cVar1;
                              pcVar10 = pcVar10 + 1;
                            } while (cVar1 != '\0');
                            uVar20 = 0xffffffffffffffff;
                            pcVar10 = local_3e58;
                            do {
                              if (uVar20 == 0) break;
                              uVar20 = uVar20 - 1;
                              cVar1 = *pcVar10;
                              pcVar10 = pcVar10 + 1;
                            } while (cVar1 != '\0');
                            pcVar9 = pcVar9 + 0xc;
                            param_2 = param_2 + (~uVar20 - 1);
                          }
                          else {
                            iVar2 = _strnicmp(pcVar9,"levelup_exp",0xb);
                            if (iVar2 == 0) {
                              local_2e58[0] = '\0';
                              memset(local_2e58 + 1,0,0xff);
                              FUN_14016e130(param_6);
                              _snprintf(local_2e58,0x100,"%I64d");
                              local_2d59 = 0;
                              pcVar10 = local_2e58;
                              do {
                                cVar1 = *pcVar10;
                                pcVar10[(longlong)param_2 - (longlong)local_2e58] = cVar1;
                                pcVar10 = pcVar10 + 1;
                              } while (cVar1 != '\0');
                              uVar20 = 0xffffffffffffffff;
                              pcVar10 = local_2e58;
                              do {
                                if (uVar20 == 0) break;
                                uVar20 = uVar20 - 1;
                                cVar1 = *pcVar10;
                                pcVar10 = pcVar10 + 1;
                              } while (cVar1 != '\0');
                              pcVar9 = pcVar9 + 0xb;
                              param_2 = param_2 + (~uVar20 - 1);
                            }
                            else {
                              iVar2 = _strnicmp(pcVar9,"businessman_days",0x10);
                              if (iVar2 == 0) {
                                local_3c58[0] = '\0';
                                memset(local_3c58 + 1,0,0xff);
                                FUN_140176110(param_6);
                                _snprintf(local_3c58,0x100,"%d");
                                local_3b59 = 0;
                                pcVar10 = local_3c58;
                                do {
                                  cVar1 = *pcVar10;
                                  pcVar10[(longlong)param_2 - (longlong)local_3c58] = cVar1;
                                  pcVar10 = pcVar10 + 1;
                                } while (cVar1 != '\0');
                                uVar20 = 0xffffffffffffffff;
                                pcVar10 = local_3c58;
                                do {
                                  if (uVar20 == 0) break;
                                  uVar20 = uVar20 - 1;
                                  cVar1 = *pcVar10;
                                  pcVar10 = pcVar10 + 1;
                                } while (cVar1 != '\0');
                                pcVar9 = pcVar9 + 0x10;
                                param_2 = param_2 + (~uVar20 - 1);
                              }
                              else {
                                iVar2 = _strnicmp(pcVar9,"iter_time",9);
                                if (iVar2 == 0) {
                                  local_46a4 = iVar2;
                                  _time32(&local_46a4);
                                  ptVar12 = _localtime32(&local_46a4);
                                  if (ptVar12 == (tm *)0x0) {
                                    return;
                                  }
                                  local_d58[0] = '\0';
                                  memset(local_d58 + 1,0,0xff);
                                  _snprintf(local_d58,0xff,"%u");
                                  pcVar10 = local_d58;
                                  do {
                                    cVar1 = *pcVar10;
                                    pcVar10[(longlong)param_2 - (longlong)local_d58] = cVar1;
                                    pcVar10 = pcVar10 + 1;
                                  } while (cVar1 != '\0');
                                  uVar20 = 0xffffffffffffffff;
                                  pcVar10 = local_d58;
                                  do {
                                    if (uVar20 == 0) break;
                                    uVar20 = uVar20 - 1;
                                    cVar1 = *pcVar10;
                                    pcVar10 = pcVar10 + 1;
                                  } while (cVar1 != '\0');
                                  pcVar9 = pcVar9 + 9;
                                  param_2 = param_2 + (~uVar20 - 1);
                                }
                                else {
                                  iVar2 = _strnicmp(pcVar9,"user_lev",8);
                                  if (iVar2 == 0) {
                                    local_2758[0] = '\0';
                                    memset(local_2758 + 1,0,0xff);
                                    (**(code **)(param_6[2] + 0x70))(param_6 + 2);
                                    _snprintf(local_2758,0xff,"%d");
                                    pcVar10 = local_2758;
                                    do {
                                      cVar1 = *pcVar10;
                                      pcVar10[(longlong)param_2 - (longlong)local_2758] = cVar1;
                                      pcVar10 = pcVar10 + 1;
                                    } while (cVar1 != '\0');
                                    uVar20 = 0xffffffffffffffff;
                                    pcVar10 = local_2758;
                                    do {
                                      if (uVar20 == 0) break;
                                      uVar20 = uVar20 - 1;
                                      cVar1 = *pcVar10;
                                      pcVar10 = pcVar10 + 1;
                                    } while (cVar1 != '\0');
                                    pcVar9 = pcVar9 + 8;
                                    param_2 = param_2 + (~uVar20 - 1);
                                  }
                                  else {
                                    iVar2 = _strnicmp(pcVar9,"user_sex",8);
                                    if (iVar2 == 0) {
                                      local_1558[0] = '\0';
                                      memset(local_1558 + 1,0,0xff);
                                      (**(code **)(*param_6 + 0x50))(param_6);
                                      _snprintf(local_1558,0xff,"%d");
                                      pcVar10 = local_1558;
                                      do {
                                        cVar1 = *pcVar10;
                                        pcVar10[(longlong)param_2 - (longlong)local_1558] = cVar1;
                                        pcVar10 = pcVar10 + 1;
                                      } while (cVar1 != '\0');
                                      uVar20 = 0xffffffffffffffff;
                                      pcVar10 = local_1558;
                                      do {
                                        if (uVar20 == 0) break;
                                        uVar20 = uVar20 - 1;
                                        cVar1 = *pcVar10;
                                        pcVar10 = pcVar10 + 1;
                                      } while (cVar1 != '\0');
                                      pcVar9 = pcVar9 + 8;
                                      param_2 = param_2 + (~uVar20 - 1);
                                    }
                                    else {
                                      iVar2 = _strnicmp(pcVar9,"user_team",9);
                                      if (iVar2 == 0) {
                                        plVar8 = (longlong *)FUN_140118320();
                                        if (plVar8 != (longlong *)0x0) {
                                          lVar19 = *plVar8;
                                          uVar3 = (**(code **)(*param_6 + 8))(param_6);
                                          iVar2 = (**(code **)(lVar19 + 0x28))(plVar8,uVar3);
                                          if (iVar2 != 0) {
                                            (**(code **)(*plVar8 + 0x50))(plVar8,iVar2,0);
                                          }
                                        }
                                        local_2558[0] = '\0';
                                        memset(local_2558 + 1,0,0xff);
                                        _snprintf(local_2558,0xff,"%d");
                                        pcVar10 = local_2558;
                                        do {
                                          cVar1 = *pcVar10;
                                          pcVar10[(longlong)param_2 - (longlong)local_2558] = cVar1;
                                          pcVar10 = pcVar10 + 1;
                                        } while (cVar1 != '\0');
                                        uVar20 = 0xffffffffffffffff;
                                        pcVar10 = local_2558;
                                        do {
                                          if (uVar20 == 0) break;
                                          uVar20 = uVar20 - 1;
                                          cVar1 = *pcVar10;
                                          pcVar10 = pcVar10 + 1;
                                        } while (cVar1 != '\0');
                                        pcVar9 = pcVar9 + 9;
                                        param_2 = param_2 + (~uVar20 - 1);
                                      }
                                      else {
                                        iVar2 = _strnicmp(pcVar9,"user_meto",9);
                                        if (iVar2 == 0) {
                                          local_2c58[0] = '\0';
                                          memset(local_2c58 + 1,0,0xff);
                                          (**(code **)(*param_6 + 0x108))(param_6);
                                          _snprintf(local_2c58,0xff,"%d");
                                          pcVar10 = local_2c58;
                                          do {
                                            cVar1 = *pcVar10;
                                            pcVar10[(longlong)param_2 - (longlong)local_2c58] = cVar1;
                                            pcVar10 = pcVar10 + 1;
                                          } while (cVar1 != '\0');
                                          uVar20 = 0xffffffffffffffff;
                                          pcVar10 = local_2c58;
                                          do {
                                            if (uVar20 == 0) break;
                                            uVar20 = uVar20 - 1;
                                            cVar1 = *pcVar10;
                                            pcVar10 = pcVar10 + 1;
                                          } while (cVar1 != '\0');
                                          pcVar9 = pcVar9 + 9;
                                          param_2 = param_2 + (~uVar20 - 1);
                                        }
                                        else {
                                          iVar2 = _strnicmp(pcVar9,"user_pro",8);
                                          if (iVar2 == 0) {
                                            local_2358[0] = '\0';
                                            memset(local_2358 + 1,0,0xff);
                                            _snprintf(local_2358,0xff,"%d");
                                            pcVar10 = local_2358;
                                            do {
                                              cVar1 = *pcVar10;
                                              pcVar10[(longlong)param_2 - (longlong)local_2358] = cVar1;
                                              pcVar10 = pcVar10 + 1;
                                            } while (cVar1 != '\0');
                                            uVar20 = 0xffffffffffffffff;
                                            pcVar10 = local_2358;
                                            do {
                                              if (uVar20 == 0) break;
                                              uVar20 = uVar20 - 1;
                                              cVar1 = *pcVar10;
                                              pcVar10 = pcVar10 + 1;
                                            } while (cVar1 != '\0');
                                            pcVar9 = pcVar9 + 8;
                                            param_2 = param_2 + (~uVar20 - 1);
                                          }
                                          else {
                                            iVar2 = _strnicmp(pcVar9,"iter_rand",9);
                                            if (iVar2 == 0) {
                                              local_1358[0] = '\0';
                                              memset(local_1358 + 1,0,0xff);
                                              rand();
                                              _snprintf(local_1358,0xff,"%d");
                                              pcVar10 = local_1358;
                                              do {
                                                cVar1 = *pcVar10;
                                                pcVar10[(longlong)param_2 - (longlong)local_1358] = cVar1;
                                                pcVar10 = pcVar10 + 1;
                                              } while (cVar1 != '\0');
                                              uVar20 = 0xffffffffffffffff;
                                              pcVar10 = local_1358;
                                              do {
                                                if (uVar20 == 0) break;
                                                uVar20 = uVar20 - 1;
                                                cVar1 = *pcVar10;
                                                pcVar10 = pcVar10 + 1;
                                              } while (cVar1 != '\0');
                                              pcVar9 = pcVar9 + 9;
                                              param_2 = param_2 + (~uVar20 - 1);
                                            }
                                            else {
                                              iVar2 = _strnicmp(pcVar9,"iter_var_data",0xd);
                                              if (((iVar2 == 0) && (cVar1 = pcVar9[0xd], '/' < cVar1)) && (cVar1 < '8')) {
                                                local_2158[0] = '\0';
                                                memset(local_2158 + 1,0,0xff);
                                                FUN_1401644d0(param_6,cVar1 + -0x30);
                                                _snprintf(local_2158,0xff,"%I64d");
                                                pcVar10 = local_2158;
                                                do {
                                                  cVar1 = *pcVar10;
                                                  pcVar10 = pcVar10 + 1;
                                                  pcVar10[(longlong)(param_2 + (-1 - (longlong)local_2158))] = cVar1;
                                                } while (cVar1 != '\0');
                                                uVar20 = 0xffffffffffffffff;
                                                pcVar10 = local_2158;
                                                do {
                                                  if (uVar20 == 0) break;
                                                  uVar20 = uVar20 - 1;
                                                  cVar1 = *pcVar10;
                                                  pcVar10 = pcVar10 + 1;
                                                } while (cVar1 != '\0');
                                                pcVar9 = pcVar9 + 0xe;
                                                param_2 = param_2 + (~uVar20 - 1);
                                              }
                                              else {
                                                iVar2 = _strnicmp(pcVar9,"iter_var_str",0xc);
                                                if (((iVar2 == 0) && (cVar1 = pcVar9[0xc], '/' < cVar1)) && (cVar1 < '8')) {
                                                  local_b58[0] = '\0';
                                                  memset(local_b58 + 1,0,0xff);
                                                  FUN_140164570(param_6,cVar1 + -0x30);
                                                  _snprintf(local_b58,0xff,"%s");
                                                  pcVar10 = local_b58;
                                                  do {
                                                    cVar1 = *pcVar10;
                                                    pcVar10 = pcVar10 + 1;
                                                    pcVar10[(longlong)(param_2 + (-1 - (longlong)local_b58))] = cVar1;
                                                  } while (cVar1 != '\0');
                                                  uVar20 = 0xffffffffffffffff;
                                                  pcVar10 = local_b58;
                                                  do {
                                                    if (uVar20 == 0) break;
                                                    uVar20 = uVar20 - 1;
                                                    cVar1 = *pcVar10;
                                                    pcVar10 = pcVar10 + 1;
                                                  } while (cVar1 != '\0');
                                                  pcVar9 = pcVar9 + 0xd;
                                                  param_2 = param_2 + (~uVar20 - 1);
                                                }
                                                else {
                                                  iVar2 = _strnicmp(pcVar9,"accept",6);
                                                  if (((iVar2 == 0) && ('/' < pcVar9[6])) && (pcVar9[6] < '4')) {
                                                    local_458 = 0;
                                                    memset(local_457,0,0xff);
                                                    local_358 = 0;
                                                    memset(local_357,0,0xff);
                                                    local_258 = 0;
                                                    memset(local_257,0,0xff);
                                                    local_158 = 0;
                                                    memset(local_157,0,0xff);
                                                    if (param_5 != (char *)0x0) {
                                                      local_46f0 = (undefined4 *)&local_158;
                                                      local_46f8 = (undefined4 *)&local_258;
                                                      sscanf(param_5,"%s %s %s %s");
                                                    }
                                                    local_1f58[0] = '\0';
                                                    memset(local_1f58 + 1,0,0xff);
                                                    _snprintf(local_1f58,0xff,"%s");
                                                    pcVar10 = local_1f58;
                                                    do {
                                                      cVar1 = *pcVar10;
                                                      pcVar10 = pcVar10 + 1;
                                                      pcVar10[(longlong)(param_2 + (-1 - (longlong)local_1f58))] = cVar1;
                                                    } while (cVar1 != '\0');
                                                    uVar20 = 0xffffffffffffffff;
                                                    pcVar10 = local_1f58;
                                                    do {
                                                      if (uVar20 == 0) break;
                                                      uVar20 = uVar20 - 1;
                                                      cVar1 = *pcVar10;
                                                      pcVar10 = pcVar10 + 1;
                                                    } while (cVar1 != '\0');
                                                    pcVar9 = pcVar9 + 7;
                                                    param_2 = param_2 + (~uVar20 - 1);
                                                  }
                                                  else {
                                                    iVar2 = _strnicmp(pcVar9,"accept_data",0xb);
                                                    if (((iVar2 == 0) && ('/' < pcVar9[0xb])) && (pcVar9[0xb] < '4')) {
                                                      local_4680 = 0;
                                                      local_467c = 0;
                                                      local_4678 = 0;
                                                      local_4674 = 0;
                                                      if (param_5 != (char *)0x0) {
                                                        local_46f0 = &local_4674;
                                                        local_46f8 = &local_4678;
                                                        sscanf(param_5,"%d %d %d %d");
                                                      }
                                                      local_1158[0] = '\0';
                                                      memset(local_1158 + 1,0,0xff);
                                                      _snprintf(local_1158,0xff,"%d");
                                                      pcVar10 = local_1158;
                                                      do {
                                                        cVar1 = *pcVar10;
                                                        pcVar10 = pcVar10 + 1;
                                                        pcVar10[(longlong)(param_2 + (-1 - (longlong)local_1158))] = cVar1;
                                                      } while (cVar1 != '\0');
                                                      uVar20 = 0xffffffffffffffff;
                                                      pcVar10 = local_1158;
                                                      do {
                                                        if (uVar20 == 0) break;
                                                        uVar20 = uVar20 - 1;
                                                        cVar1 = *pcVar10;
                                                        pcVar10 = pcVar10 + 1;
                                                      } while (cVar1 != '\0');
                                                      pcVar9 = pcVar9 + 0xc;
                                                      param_2 = param_2 + (~uVar20 - 1);
                                                    }
                                                    else {
                                                      iVar2 = _strnicmp(pcVar9,"iter_game_card4",0xf);
                                                      if (iVar2 == 0) {
                                                        local_1d58[0] = '\0';
                                                        memset(local_1d58 + 1,0,0xff);
                                                        FUN_140331010(param_6,0xbe6e3);
                                                        _snprintf(local_1d58,0xff,"%d");
                                                        pcVar10 = local_1d58;
                                                        do {
                                                          cVar1 = *pcVar10;
                                                          pcVar10 = pcVar10 + 1;
                                                          pcVar10[(longlong)(param_2 + (-1 - (longlong)local_1d58))] = cVar1;
                                                        } while (cVar1 != '\0');
                                                        uVar20 = 0xffffffffffffffff;
                                                        pcVar10 = local_1d58;
                                                        do {
                                                          if (uVar20 == 0) break;
                                                          uVar20 = uVar20 - 1;
                                                          cVar1 = *pcVar10;
                                                          pcVar10 = pcVar10 + 1;
                                                        } while (cVar1 != '\0');
                                                        pcVar9 = pcVar9 + 0xf;
                                                        param_2 = param_2 + (~uVar20 - 1);
                                                      }
                                                      else {
                                                        iVar2 = _strnicmp(pcVar9,"iter_game_card3",0xf);
                                                        if (iVar2 == 0) {
                                                          local_758[0] = '\0';
                                                          memset(local_758 + 1,0,0xff);
                                                          FUN_140331010(param_6,0xbe6e2);
                                                          _snprintf(local_758,0xff,"%d");
                                                          pcVar10 = local_758;
                                                          do {
                                                            cVar1 = *pcVar10;
                                                            pcVar10 = pcVar10 + 1;
                                                            pcVar10[(longlong)(param_2 + (-1 - (longlong)local_758))] = cVar1;
                                                          } while (cVar1 != '\0');
                                                          uVar20 = 0xffffffffffffffff;
                                                          pcVar10 = local_758;
                                                          do {
                                                            if (uVar20 == 0) break;
                                                            uVar20 = uVar20 - 1;
                                                            cVar1 = *pcVar10;
                                                            pcVar10 = pcVar10 + 1;
                                                          } while (cVar1 != '\0');
                                                          pcVar9 = pcVar9 + 0xf;
                                                          param_2 = param_2 + (~uVar20 - 1);
                                                        }
                                                        else {
                                                          iVar2 = _strnicmp(pcVar9,"iter_game_card2",0xf);
                                                          if (iVar2 == 0) {
                                                            local_1b58[0] = '\0';
                                                            memset(local_1b58 + 1,0,0xff);
                                                            FUN_140330f80(param_6);
                                                            _snprintf(local_1b58,0xff,"%d");
                                                            pcVar10 = local_1b58;
                                                            do {
                                                              cVar1 = *pcVar10;
                                                              pcVar10 = pcVar10 + 1;
                                                              pcVar10[(longlong)(param_2 + (-1 - (longlong)local_1b58))] = cVar1;
                                                            } while (cVar1 != '\0');
                                                            uVar20 = 0xffffffffffffffff;
                                                            pcVar10 = local_1b58;
                                                            do {
                                                              if (uVar20 == 0) break;
                                                              uVar20 = uVar20 - 1;
                                                              cVar1 = *pcVar10;
                                                              pcVar10 = pcVar10 + 1;
                                                            } while (cVar1 != '\0');
                                                            pcVar9 = pcVar9 + 0xf;
                                                            param_2 = param_2 + (~uVar20 - 1);
                                                          }
                                                          else {
                                                            iVar2 = _strnicmp(pcVar9,"iter_game_card1",0xf);
                                                            if (iVar2 == 0) {
                                                              local_f58[0] = '\0';
                                                              memset(local_f58 + 1,0,0xff);
                                                              FUN_140330ef0(param_6);
                                                              _snprintf(local_f58,0xff,"%d");
                                                              pcVar10 = local_f58;
                                                              do {
                                                                cVar1 = *pcVar10;
                                                                pcVar10 = pcVar10 + 1;
                                                                pcVar10[(longlong)(param_2 + (-1 - (longlong)local_f58))] = cVar1;
                                                              } while (cVar1 != '\0');
                                                              uVar20 = 0xffffffffffffffff;
                                                              pcVar10 = local_f58;
                                                              do {
                                                                if (uVar20 == 0) break;
                                                                uVar20 = uVar20 - 1;
                                                                cVar1 = *pcVar10;
                                                                pcVar10 = pcVar10 + 1;
                                                              } while (cVar1 != '\0');
                                                              pcVar9 = pcVar9 + 0xf;
                                                              param_2 = param_2 + (~uVar20 - 1);
                                                            }
                                                            else {
                                                              iVar2 = _strnicmp(pcVar9,"iter_cost_durrecover",0x14);
                                                              if (iVar2 == 0) {
                                                                local_3458[0] = '\0';
                                                                memset(local_3458 + 1,0,0xff);
                                                                _snprintf(local_3458,0xff,"--");
                                                                if ((int)param_6[0x14d] != 0) {
                                                                  plVar8 = (longlong *)FUN_140087d40();
                                                                  lVar19 = *plVar8;
                                                                  uVar3 = FUN_14032b4b0(param_6,(int)param_6[0x14d]);
                                                                  lVar19 = (**(code **)(lVar19 + 0x60))(plVar8,uVar3);
                                                                  if (lVar19 != 0) {
                                                                    FUN_140102030(lVar19);
                                                                    _snprintf(local_3458,0xff,"%d");
                                                                  }
                                                                }
                                                                pcVar10 = local_3458;
                                                                do {
                                                                  cVar1 = *pcVar10;
                                                                  pcVar10 = pcVar10 + 1;
                                                                  pcVar10[(longlong)(param_2 + (-1 - (longlong)local_3458))] = cVar1;
                                                                } while (cVar1 != '\0');
                                                                uVar20 = 0xffffffffffffffff;
                                                                pcVar10 = local_3458;
                                                                do {
                                                                  if (uVar20 == 0) break;
                                                                  uVar20 = uVar20 - 1;
                                                                  cVar1 = *pcVar10;
                                                                  pcVar10 = pcVar10 + 1;
                                                                } while (cVar1 != '\0');
                                                                pcVar9 = pcVar9 + 0x14;
                                                                param_2 = param_2 + (~uVar20 - 1);
                                                              }
                                                              else {
                                                                iVar2 = _strnicmp(pcVar9,"iter_police_wanted",0x12);
                                                                if (iVar2 == 0) {
                                                                  local_3a58[0] = '\0';
                                                                  memset(local_3a58 + 1,0,0xff);
                                                                  _snprintf(local_3a58,0xff,"--");
                                                                  uVar3 = (undefined4)param_6[0x14d];
                                                                  plVar8 = (longlong *)FUN_1401182a0();
                                                                  cVar1 = (**(code **)(*plVar8 + 0x38))(plVar8,uVar3);
                                                                  if (cVar1 != '\0') {
                                                                    plVar8 = (longlong *)FUN_1401182a0();
                                                                    plVar13 = (longlong *)FUN_1401182a0();
                                                                    plVar14 = (longlong *)FUN_1401182a0();
                                                                    plVar15 = (longlong *)FUN_1401182a0();
                                                                    uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8,uVar3);
                                                                    uVar5 = (**(code **)(*plVar13 + 0xd8))(plVar13,uVar3);
                                                                    puVar16 = (undefined4 *)(**(code **)(*plVar14 + 0xd0))(plVar14,uVar3);
                                                                    local_46f8 = (undefined4 *)(**(code **)(*plVar15 + 200))(plVar15,uVar3);
                                                                    local_46f0 = puVar16;
                                                                    local_46e8 = uVar5;
                                                                    local_46e0 = uVar4;
                                                                    _snprintf(local_3a58,0xff,"%03u %-15s %-15s %03d %d");
                                                                  }
                                                                  pcVar10 = local_3a58;
                                                                  do {
                                                                    cVar1 = *pcVar10;
                                                                    pcVar10 = pcVar10 + 1;
                                                                    pcVar10[(longlong)(param_2 + (-1 - (longlong)local_3a58))] = cVar1;
                                                                  } while (cVar1 != '\0');
                                                                  uVar20 = 0xffffffffffffffff;
                                                                  pcVar9 = pcVar9 + 0x12;
                                                                  pcVar10 = local_3a58;
                                                                  do {
                                                                    if (uVar20 == 0) break;
                                                                    uVar20 = uVar20 - 1;
                                                                    cVar1 = *pcVar10;
                                                                    pcVar10 = pcVar10 + 1;
                                                                  } while (cVar1 != '\0');
                                                                  param_2 = param_2 + (~uVar20 - 1);
                                                                  iVar21 = local_46d0;
                                                                }
                                                                else {
                                                                  iVar2 = _strnicmp(pcVar9,"iter_wanted",0xb);
                                                                  if (iVar2 == 0) {
                                                                    local_3058[0] = '\0';
                                                                    memset(local_3058 + 1,0,0xff);
                                                                    _snprintf(local_3058,0xff,"--");
                                                                    uVar3 = (undefined4)param_6[0x14d];
                                                                    plVar8 = (longlong *)FUN_1401182a0();
                                                                    cVar1 = (**(code **)(*plVar8 + 0x60))(plVar8,uVar3);
                                                                    if (cVar1 != '\0') {
                                                                      plVar8 = (longlong *)FUN_1401182a0();
                                                                      plVar13 = (longlong *)FUN_1401182a0();
                                                                      plVar14 = (longlong *)FUN_1401182a0();
                                                                      uVar4 = (**(code **)(*plVar8 + 0xb8))(plVar8,uVar3);
                                                                      puVar16 = (undefined4 *)(**(code **)(*plVar13 + 0xb0))(plVar13,uVar3);
                                                                      (**(code **)(*plVar14 + 0xa8))(plVar14,uVar3);
                                                                      local_46f0 = (undefined4 *)CONCAT44(local_46f0._4_4_,uVar4);
                                                                      local_46f8 = puVar16;
                                                                      _snprintf(local_3058,0xff,"%06u %-15s %u");
                                                                    }
                                                                    pcVar10 = local_3058;
                                                                    do {
                                                                      cVar1 = *pcVar10;
                                                                      pcVar10 = pcVar10 + 1;
                                                                      pcVar10[(longlong)(param_2 + (-1 - (longlong)local_3058))] = cVar1;
                                                                    } while (cVar1 != '\0');
                                                                    uVar20 = 0xffffffffffffffff;
                                                                    pcVar10 = local_3058;
                                                                    do {
                                                                      if (uVar20 == 0) break;
                                                                      uVar20 = uVar20 - 1;
                                                                      cVar1 = *pcVar10;
                                                                      pcVar10 = pcVar10 + 1;
                                                                    } while (cVar1 != '\0');
                                                                    pcVar9 = pcVar9 + 0xb;
                                                                    param_2 = param_2 + (~uVar20 - 1);
                                                                  }
                                                                  else {
                                                                    iVar6 = _strnicmp(pcVar9,"enemy_syn",9);
                                                                    iVar2 = local_4670;
                                                                    if (((iVar6 == 0) && (cVar1 = pcVar9[9], '/' < cVar1)) && ((int)cVar1 < local_4670 + 0x30))
                                                                    {
                                                                      local_4558 = 0x2d2d;
                                                                      local_4556 = 0;
                                                                      memset(local_4555,0,0xfd);
                                                                      iVar6 = cVar1 + -0x30;
                                                                      if (((-1 < iVar6) && (iVar6 < iVar2)) &&
                                                                         (iVar2 = (**(code **)(param_6[2] + 0x170))(param_6 + 2), iVar2 != 0)) {
                                                                        plVar8 = (longlong *)FUN_140087ed0();
                                                                        lVar19 = *plVar8;
                                                                        uVar3 = (**(code **)(param_6[2] + 0x170))(param_6 + 2);
                                                                        lVar19 = (**(code **)(lVar19 + 0x1e0))(plVar8,uVar3,iVar6);
                                                                        if (lVar19 != 0) {
                                                                          _snprintf((char *)&local_4558,0x100,"%s");
                                                                          local_4459 = 0;
                                                                        }
                                                                      }
                                                                      pcVar10 = (char *)&local_4558;
                                                                      do {
                                                                        cVar1 = *pcVar10;
                                                                        pcVar10 = pcVar10 + 1;
                                                                        pcVar10[(longlong)(param_2 + (-1 - (longlong)&local_4558))] = cVar1;
                                                                      } while (cVar1 != '\0');
                                                                      uVar20 = 0xffffffffffffffff;
                                                                      pcVar10 = (char *)&local_4558;
                                                                      do {
                                                                        if (uVar20 == 0) break;
                                                                        uVar20 = uVar20 - 1;
                                                                        cVar1 = *pcVar10;
                                                                        pcVar10 = pcVar10 + 1;
                                                                      } while (cVar1 != '\0');
                                                                      pcVar9 = pcVar9 + 10;
                                                                      param_2 = param_2 + (~uVar20 - 1);
                                                                    }
                                                                    else {
                                                                      iVar6 = _strnicmp(pcVar9,"ally_syn",8);
                                                                      iVar2 = local_466c;
                                                                      if (((iVar6 == 0) && (cVar1 = pcVar9[8], '/' < cVar1)) && ((int)cVar1 < local_466c + 0x30)
                                                                         ) {
                                                                        local_4358 = 0x2d2d;
                                                                        local_4356 = 0;
                                                                        memset(local_4355,0,0xfd);
                                                                        iVar6 = cVar1 + -0x30;
                                                                        if (((-1 < iVar6) && (iVar6 < iVar2)) &&
                                                                           (iVar2 = (**(code **)(param_6[2] + 0x170))(param_6 + 2), iVar2 != 0)) {
                                                                          plVar8 = (longlong *)FUN_140087ed0();
                                                                          lVar19 = *plVar8;
                                                                          uVar3 = (**(code **)(param_6[2] + 0x170))(param_6 + 2);
                                                                          lVar19 = (**(code **)(lVar19 + 0x1e8))(plVar8,uVar3,iVar6);
                                                                          if (lVar19 != 0) {
                                                                            _snprintf((char *)&local_4358,0x100,"%s");
                                                                            local_4259 = 0;
                                                                          }
                                                                        }
                                                                        pcVar10 = (char *)&local_4358;
                                                                        do {
                                                                          cVar1 = *pcVar10;
                                                                          pcVar10 = pcVar10 + 1;
                                                                          pcVar10[(longlong)(param_2 + (-1 - (longlong)&local_4358))] = cVar1;
                                                                        } while (cVar1 != '\0');
                                                                        uVar20 = 0xffffffffffffffff;
                                                                        pcVar10 = (char *)&local_4358;
                                                                        do {
                                                                          if (uVar20 == 0) break;
                                                                          uVar20 = uVar20 - 1;
                                                                          cVar1 = *pcVar10;
                                                                          pcVar10 = pcVar10 + 1;
                                                                        } while (cVar1 != '\0');
                                                                        pcVar9 = pcVar9 + 9;
                                                                        param_2 = param_2 + (~uVar20 - 1);
                                                                      }
                                                                      else {
                                                                        iVar2 = _strnicmp(pcVar9,"account_id",10);
                                                                        if (iVar2 == 0) {
                                                                          local_1958[0] = '\0';
                                                                          memset(local_1958 + 1,0,0xff);
                                                                          _snprintf(local_1958,0xff,"%u");
                                                                          pcVar10 = local_1958;
                                                                          do {
                                                                            cVar1 = *pcVar10;
                                                                            pcVar10 = pcVar10 + 1;
                                                                            pcVar10[(longlong)(param_2 + (-1 - (longlong)local_1958))] = cVar1;
                                                                          } while (cVar1 != '\0');
                                                                          uVar20 = 0xffffffffffffffff;
                                                                          pcVar10 = local_1958;
                                                                          do {
                                                                            if (uVar20 == 0) break;
                                                                            uVar20 = uVar20 - 1;
                                                                            cVar1 = *pcVar10;
                                                                            pcVar10 = pcVar10 + 1;
                                                                          } while (cVar1 != '\0');
                                                                          pcVar9 = pcVar9 + 10;
                                                                          param_2 = param_2 + (~uVar20 - 1);
                                                                        }
                                                                        else {
                                                                          iVar2 = _strnicmp(pcVar9,"user_id",7);
                                                                          if (iVar2 == 0) {
                                                                            local_958[0] = '\0';
                                                                            memset(local_958 + 1,0,0xff);
                                                                            (**(code **)(*param_6 + 8))(param_6);
                                                                            _snprintf(local_958,0xff,"%u");
                                                                            pcVar10 = local_958;
                                                                            do {
                                                                              cVar1 = *pcVar10;
                                                                              pcVar10 = pcVar10 + 1;
                                                                              pcVar10[(longlong)(param_2 + (-1 - (longlong)local_958))] = cVar1;
                                                                            } while (cVar1 != '\0');
                                                                            uVar20 = 0xffffffffffffffff;
                                                                            pcVar10 = local_958;
                                                                            do {
                                                                              if (uVar20 == 0) break;
                                                                              uVar20 = uVar20 - 1;
                                                                              cVar1 = *pcVar10;
                                                                              pcVar10 = pcVar10 + 1;
                                                                            } while (cVar1 != '\0');
                                                                            pcVar9 = pcVar9 + 7;
                                                                            param_2 = param_2 + (~uVar20 - 1);
                                                                          }
                                                                          else {
                                                                            iVar2 = _strnicmp(pcVar9,"user_map_id",0xb);
                                                                            if (iVar2 == 0) {
                                                                              local_2b58[0] = '\0';
                                                                              memset(local_2b58 + 1,0,0xff);
                                                                              (**(code **)(param_6[2] + 0x168))(param_6 + 2);
                                                                              _snprintf(local_2b58,0xff,"%u");
                                                                              pcVar10 = local_2b58;
                                                                              do {
                                                                                cVar1 = *pcVar10;
                                                                                pcVar10[(longlong)param_2 - (longlong)local_2b58] = cVar1;
                                                                                pcVar10 = pcVar10 + 1;
                                                                              } while (cVar1 != '\0');
                                                                              uVar20 = 0xffffffffffffffff;
                                                                              pcVar10 = local_2b58;
                                                                              do {
                                                                                if (uVar20 == 0) break;
                                                                                uVar20 = uVar20 - 1;
                                                                                cVar1 = *pcVar10;
                                                                                pcVar10 = pcVar10 + 1;
                                                                              } while (cVar1 != '\0');
                                                                              pcVar9 = pcVar9 + 0xb;
                                                                              param_2 = param_2 + (~uVar20 - 1);
                                                                            }
                                                                            else {
                                                                              iVar2 = _strnicmp(pcVar9,"user_map_x",10);
                                                                              if (iVar2 == 0) {
                                                                                local_2a58[0] = '\0';
                                                                                memset(local_2a58 + 1,0,0xff);
                                                                                (**(code **)(param_6[2] + 0x40))(param_6 + 2);
                                                                                _snprintf(local_2a58,0xff,"%u");
                                                                                pcVar10 = local_2a58;
                                                                                do {
                                                                                  cVar1 = *pcVar10;
                                                                                  pcVar10[(longlong)param_2 - (longlong)local_2a58] = cVar1;
                                                                                  pcVar10 = pcVar10 + 1;
                                                                                } while (cVar1 != '\0');
                                                                                uVar20 = 0xffffffffffffffff;
                                                                                pcVar10 = local_2a58;
                                                                                do {
                                                                                  if (uVar20 == 0) break;
                                                                                  uVar20 = uVar20 - 1;
                                                                                  cVar1 = *pcVar10;
                                                                                  pcVar10 = pcVar10 + 1;
                                                                                } while (cVar1 != '\0');
                                                                                pcVar9 = pcVar9 + 10;
                                                                                param_2 = param_2 + (~uVar20 - 1);
                                                                              }
                                                                              else {
                                                                                iVar2 = _strnicmp(pcVar9,"user_map_y",10);
                                                                                if (iVar2 == 0) {
                                                                                  local_2858[0] = '\0';
                                                                                  memset(local_2858 + 1,0,0xff);
                                                                                  (**(code **)(param_6[2] + 0x48))(param_6 + 2);
                                                                                  _snprintf(local_2858,0xff,"%u");
                                                                                  pcVar10 = local_2858;
                                                                                  do {
                                                                                    cVar1 = *pcVar10;
                                                                                    pcVar10[(longlong)param_2 - (longlong)local_2858] = cVar1;
                                                                                    pcVar10 = pcVar10 + 1;
                                                                                  } while (cVar1 != '\0');
                                                                                  uVar20 = 0xffffffffffffffff;
                                                                                  pcVar10 = local_2858;
                                                                                  do {
                                                                                    if (uVar20 == 0) break;
                                                                                    uVar20 = uVar20 - 1;
                                                                                    cVar1 = *pcVar10;
                                                                                    pcVar10 = pcVar10 + 1;
                                                                                  } while (cVar1 != '\0');
                                                                                  pcVar9 = pcVar9 + 10;
                                                                                  param_2 = param_2 + (~uVar20 - 1);
                                                                                }
                                                                                else {
                                                                                  iVar2 = _strnicmp(pcVar9,"user_virtue",0xb);
                                                                                  if (iVar2 == 0) {
                                                                                    local_2658[0] = '\0';
                                                                                    memset(local_2658 + 1,0,0xff);
                                                                                    _snprintf(local_2658,0xff,"%u");
                                                                                    pcVar10 = local_2658;
                                                                                    do {
                                                                                      cVar1 = *pcVar10;
                                                                                      pcVar10[(longlong)param_2 - (longlong)local_2658] = cVar1;
                                                                                      pcVar10 = pcVar10 + 1;
                                                                                    } while (cVar1 != '\0');
                                                                                    uVar20 = 0xffffffffffffffff;
                                                                                    pcVar10 = local_2658;
                                                                                    do {
                                                                                      if (uVar20 == 0) break;
                                                                                      uVar20 = uVar20 - 1;
                                                                                      cVar1 = *pcVar10;
                                                                                      pcVar10 = pcVar10 + 1;
                                                                                    } while (cVar1 != '\0');
                                                                                    pcVar9 = pcVar9 + 0xb;
                                                                                    param_2 = param_2 + (~uVar20 - 1);
                                                                                  }
                                                                                  else {
                                                                                    iVar2 = _strnicmp(pcVar9,"user_home_id",0xc);
                                                                                    if (iVar2 == 0) {
                                                                                      local_2458[0] = '\0';
                                                                                      memset(local_2458 + 1,0,0xff);
                                                                                      _snprintf(local_2458,0xff,"%u");
                                                                                      pcVar10 = local_2458;
                                                                                      do {
                                                                                        cVar1 = *pcVar10;
                                                                                        pcVar10[(longlong)param_2 - (longlong)local_2458] = cVar1;
                                                                                        pcVar10 = pcVar10 + 1;
                                                                                      } while (cVar1 != '\0');
                                                                                      uVar20 = 0xffffffffffffffff;
                                                                                      pcVar10 = local_2458;
                                                                                      do {
                                                                                        if (uVar20 == 0) break;
                                                                                        uVar20 = uVar20 - 1;
                                                                                        cVar1 = *pcVar10;
                                                                                        pcVar10 = pcVar10 + 1;
                                                                                      } while (cVar1 != '\0');
                                                                                      pcVar9 = pcVar9 + 0xc;
                                                                                      param_2 = param_2 + (~uVar20 - 1);
                                                                                    }
                                                                                    else {
                                                                                      iVar2 = _strnicmp(pcVar9,"battle_lev",10);
                                                                                      if (iVar2 == 0) {
                                                                                        local_2258[0] = '\0';
                                                                                        memset(local_2258 + 1,0,0xff);
                                                                                        FUN_14018eb30(param_6);
                                                                                        _snprintf(local_2258,0xff,"%u");
                                                                                        pcVar10 = local_2258;
                                                                                        do {
                                                                                          cVar1 = *pcVar10;
                                                                                          pcVar10 = pcVar10 + 1;
                                                                                          pcVar10[(longlong)(param_2 + (-1 - (longlong)local_2258))] = cVar1;
                                                                                        } while (cVar1 != '\0');
                                                                                        uVar20 = 0xffffffffffffffff;
                                                                                        pcVar10 = local_2258;
                                                                                        do {
                                                                                          if (uVar20 == 0) break;
                                                                                          uVar20 = uVar20 - 1;
                                                                                          cVar1 = *pcVar10;
                                                                                          pcVar10 = pcVar10 + 1;
                                                                                        } while (cVar1 != '\0');
                                                                                        pcVar9 = pcVar9 + 10;
                                                                                        param_2 = param_2 + (~uVar20 - 1);
                                                                                      }
                                                                                      else {
                                                                                        iVar2 = _strnicmp(pcVar9,"syn_id",6);
                                                                                        if (iVar2 == 0) {
                                                                                          local_2058[0] = '\0';
                                                                                          memset(local_2058 + 1,0,0xff);
                                                                                          (**(code **)(param_6[2] + 0x170))(param_6 + 2);
                                                                                          _snprintf(local_2058,0xff,"%u");
                                                                                          pcVar10 = local_2058;
                                                                                          do {
                                                                                            cVar1 = *pcVar10;
                                                                                            pcVar10 = pcVar10 + 1;
                                                                                            pcVar10[(longlong)(param_2 + (-1 - (longlong)local_2058))] = cVar1;
                                                                                          } while (cVar1 != '\0');
                                                                                          uVar20 = 0xffffffffffffffff;
                                                                                          pcVar10 = local_2058;
                                                                                          do {
                                                                                            if (uVar20 == 0) break;
                                                                                            uVar20 = uVar20 - 1;
                                                                                            cVar1 = *pcVar10;
                                                                                            pcVar10 = pcVar10 + 1;
                                                                                          } while (cVar1 != '\0');
                                                                                          pcVar9 = pcVar9 + 6;
                                                                                          param_2 = param_2 + (~uVar20 - 1);
                                                                                        }
                                                                                        else {
                                                                                          iVar2 = _strnicmp(pcVar9,"syn_name",8);
                                                                                          if (iVar2 == 0) {
                                                                                            pIVar17 = theInstance();
                                                                                            pcVar10 = (char *)(*(code *)**(undefined8 **)pIVar17)
                                                                                                                        (pIVar17,"SYNNAME_NONE");
                                                                                            iVar2 = (**(code **)(param_6[2] + 0x170))(param_6 + 2);
                                                                                            if (iVar2 != 0) {
                                                                                              plVar8 = (longlong *)FUN_140087ed0();
                                                                                              lVar19 = *plVar8;
                                                                                              uVar3 = (**(code **)(param_6[2] + 0x170))(param_6 + 2);
                                                                                              pcVar18 = (char *)(**(code **)(lVar19 + 0x290))(plVar8,uVar3);
                                                                                              if (pcVar18 != (char *)0x0) {
                                                                                                pcVar10 = pcVar18;
                                                                                              }
                                                                                            }
                                                                                            pcVar18 = pcVar10;
                                                                                            do {
                                                                                              cVar1 = *pcVar18;
                                                                                              pcVar18 = pcVar18 + 1;
                                                                                              pcVar18[(longlong)(param_2 + (-1 - (longlong)pcVar10))] = cVar1;
                                                                                            } while (cVar1 != '\0');
                                                                                            uVar20 = 0xffffffffffffffff;
                                                                                            do {
                                                                                              if (uVar20 == 0) break;
                                                                                              uVar20 = uVar20 - 1;
                                                                                              cVar1 = *pcVar10;
                                                                                              pcVar10 = pcVar10 + 1;
                                                                                            } while (cVar1 != '\0');
                                                                                            pcVar9 = pcVar9 + 8;
                                                                                            param_2 = param_2 + (~uVar20 - 1);
                                                                                          }
                                                                                          else {
                                                                                            iVar2 = _strnicmp(pcVar9,"family_id",9);
                                                                                            if (iVar2 == 0) {
                                                                                              local_1e58[0] = '\0';
                                                                                              memset(local_1e58 + 1,0,0xff);
                                                                                              FUN_140164ac0(param_6);
                                                                                              _snprintf(local_1e58,0xff,"%u");
                                                                                              pcVar10 = local_1e58;
                                                                                              do {
                                                                                                cVar1 = *pcVar10;
                                                                                                pcVar10 = pcVar10 + 1;
                                                                                                pcVar10[(longlong)(param_2 + (-1 - (longlong)local_1e58))] =
                                                                                                     cVar1;
                                                                                              } while (cVar1 != '\0');
                                                                                              uVar20 = 0xffffffffffffffff;
                                                                                              pcVar10 = local_1e58;
                                                                                              do {
                                                                                                if (uVar20 == 0) break;
                                                                                                uVar20 = uVar20 - 1;
                                                                                                cVar1 = *pcVar10;
                                                                                                pcVar10 = pcVar10 + 1;
                                                                                              } while (cVar1 != '\0');
                                                                                              pcVar9 = pcVar9 + 9;
                                                                                              param_2 = param_2 + (~uVar20 - 1);
                                                                                            }
                                                                                            else {
                                                                                              iVar2 = _strnicmp(pcVar9,"user_name",9);
                                                                                              if (iVar2 == 0) {
                                                                                                pcVar18 = (char *)(**(code **)(param_6[2] + 0x18))(param_6 + 2);
                                                                                                pcVar10 = param_2;
                                                                                                do {
                                                                                                  cVar1 = *pcVar18;
                                                                                                  pcVar18 = pcVar18 + 1;
                                                                                                  *pcVar10 = cVar1;
                                                                                                  pcVar10 = pcVar10 + 1;
                                                                                                } while (cVar1 != '\0');
                                                                                                pcVar9 = pcVar9 + 9;
                                                                                                pcVar10 = (char *)(**(code **)(param_6[2] + 0x18))();
                                                                                                uVar20 = 0xffffffffffffffff;
                                                                                                do {
                                                                                                  if (uVar20 == 0) break;
                                                                                                  uVar20 = uVar20 - 1;
                                                                                                  cVar1 = *pcVar10;
                                                                                                  pcVar10 = pcVar10 + 1;
                                                                                                } while (cVar1 != '\0');
                                                                                                param_2 = param_2 + (~uVar20 - 1);
                                                                                              }
                                                                                              else {
                                                                                                iVar2 = _strnicmp(pcVar9,"mate_name",9);
                                                                                                if (iVar2 == 0) {
                                                                                                  pcVar18 = (char *)(**(code **)(*param_6 + 0x40))(param_6);
                                                                                                  pcVar10 = param_2;
                                                                                                  do {
                                                                                                    cVar1 = *pcVar18;
                                                                                                    pcVar18 = pcVar18 + 1;
                                                                                                    *pcVar10 = cVar1;
                                                                                                    pcVar10 = pcVar10 + 1;
                                                                                                  } while (cVar1 != '\0');
                                                                                                  pcVar9 = pcVar9 + 9;
                                                                                                  pcVar10 = (char *)(**(code **)(*param_6 + 0x40))();
                                                                                                  uVar20 = 0xffffffffffffffff;
                                                                                                  do {
                                                                                                    if (uVar20 == 0) break;
                                                                                                    uVar20 = uVar20 - 1;
                                                                                                    cVar1 = *pcVar10;
                                                                                                    pcVar10 = pcVar10 + 1;
                                                                                                  } while (cVar1 != '\0');
                                                                                                  param_2 = param_2 + (~uVar20 - 1);
                                                                                                }
                                                                                                else {
                                                                                                  iVar2 = _strnicmp(pcVar9,"map_owner_id",0xc);
                                                                                                  if (iVar2 == 0) {
                                                                                                    local_1c58[0] = '\0';
                                                                                                    memset(local_1c58 + 1,0,0xff);
                                                                                                    lVar19 = (**(code **)(param_6[2] + 0x160))(param_6 + 2);
                                                                                                    (**(code **)(**(longlong **)(lVar19 + 0x58) + 0x10))
                                                                                                              (*(longlong **)(lVar19 + 0x58),5);
                                                                                                    _snprintf(local_1c58,0xff,"%u");
                                                                                                    pcVar10 = local_1c58;
                                                                                                    do {
                                                                                                      cVar1 = *pcVar10;
                                                                                                      pcVar10 = pcVar10 + 1;
                                                                                                      pcVar10[(longlong)(param_2 + (-1 - (longlong)local_1c58))]
                                                                                                           = cVar1;
                                                                                                    } while (cVar1 != '\0');
                                                                                                    uVar20 = 0xffffffffffffffff;
                                                                                                    pcVar10 = local_1c58;
                                                                                                    do {
                                                                                                      if (uVar20 == 0) break;
                                                                                                      uVar20 = uVar20 - 1;
                                                                                                      cVar1 = *pcVar10;
                                                                                                      pcVar10 = pcVar10 + 1;
                                                                                                    } while (cVar1 != '\0');
                                                                                                    pcVar9 = pcVar9 + 0xc;
                                                                                                    param_2 = param_2 + (~uVar20 - 1);
                                                                                                  }
                                                                                                  else {
                                                                                                    iVar2 = _strnicmp(pcVar9,"map_owner_type",0xe);
                                                                                                    if (iVar2 == 0) {
                                                                                                      local_1a58[0] = '\0';
                                                                                                      memset(local_1a58 + 1,0,0xff);
                                                                                                      lVar19 = (**(code **)(param_6[2] + 0x160))(param_6 + 2);
                                                                                                      (**(code **)(**(longlong **)(lVar19 + 0x58) + 0x10))
                                                                                                                (*(longlong **)(lVar19 + 0x58),0x10);
                                                                                                      _snprintf(local_1a58,0xff,"%u");
                                                                                                      pcVar10 = local_1a58;
                                                                                                      do {
                                                                                                        cVar1 = *pcVar10;
                                                                                                        pcVar10 = pcVar10 + 1;
                                                                                                        pcVar10[(longlong)
                                                                                                                (param_2 + (-1 - (longlong)local_1a58))] = cVar1
                                                                                                        ;
                                                                                                      } while (cVar1 != '\0');
                                                                                                      uVar20 = 0xffffffffffffffff;
                                                                                                      pcVar10 = local_1a58;
                                                                                                      do {
                                                                                                        if (uVar20 == 0) break;
                                                                                                        uVar20 = uVar20 - 1;
                                                                                                        cVar1 = *pcVar10;
                                                                                                        pcVar10 = pcVar10 + 1;
                                                                                                      } while (cVar1 != '\0');
                                                                                                      pcVar9 = pcVar9 + 0xe;
                                                                                                      param_2 = param_2 + (~uVar20 - 1);
                                                                                                    }
                                                                                                    else {
                                                                                                      iVar2 = _strnicmp(pcVar9,"iter_value",10);
                                                                                                      if (iVar2 == 0) {
                                                                                                        local_1858[0] = '\0';
                                                                                                        memset(local_1858 + 1,0,0xff);
                                                                                                        _snprintf(local_1858,0xff,"%u");
                                                                                                        pcVar10 = local_1858;
                                                                                                        do {
                                                                                                          cVar1 = *pcVar10;
                                                                                                          pcVar10 = pcVar10 + 1;
                                                                                                          pcVar10[(longlong)
                                                                                                                  (param_2 + (-1 - (longlong)local_1858))] =
                                                                                                               cVar1;
                                                                                                        } while (cVar1 != '\0');
                                                                                                        uVar20 = 0xffffffffffffffff;
                                                                                                        pcVar10 = local_1858;
                                                                                                        do {
                                                                                                          if (uVar20 == 0) break;
                                                                                                          uVar20 = uVar20 - 1;
                                                                                                          cVar1 = *pcVar10;
                                                                                                          pcVar10 = pcVar10 + 1;
                                                                                                        } while (cVar1 != '\0');
                                                                                                        pcVar9 = pcVar9 + 10;
                                                                                                        param_2 = param_2 + (~uVar20 - 1);
                                                                                                      }
                                                                                                      else {
                                                                                                        iVar2 = _strnicmp(pcVar9,"iter_syn_name",0xd);
                                                                                                        if (iVar2 == 0) {
                                                                                                          pcVar10 = "--";
                                                                                                          if ((int)param_6[0x14d] != 0) {
                                                                                                            plVar8 = (longlong *)FUN_140087ed0();
                                                                                                            lVar19 = (**(code **)(*plVar8 + 0x290))
                                                                                                                               (plVar8,(int)param_6[0x14d]);
                                                                                                            if (lVar19 != 0) {
                                                                                                              plVar8 = (longlong *)FUN_140087ed0();
                                                                                                              pcVar10 = (char *)(**(code **)(*plVar8 + 0x290))
                                                                                                                                          (plVar8,(int)param_6[
                                                                                0x14d]);
                                                                                }
                                                                                }
                                                                                pcVar18 = pcVar10;
                                                                                do {
                                                                                  cVar1 = *pcVar18;
                                                                                  pcVar18 = pcVar18 + 1;
                                                                                  pcVar18[(longlong)(param_2 + (-1 - (longlong)pcVar10))] = cVar1;
                                                                                } while (cVar1 != '\0');
                                                                                uVar20 = 0xffffffffffffffff;
                                                                                do {
                                                                                  if (uVar20 == 0) break;
                                                                                  uVar20 = uVar20 - 1;
                                                                                  cVar1 = *pcVar10;
                                                                                  pcVar10 = pcVar10 + 1;
                                                                                } while (cVar1 != '\0');
                                                                                pcVar9 = pcVar9 + 0xd;
                                                                                param_2 = param_2 + (~uVar20 - 1);
                                                                                }
                                                                                else {
                                                                                  iVar2 = _strnicmp(pcVar9,"iter_syn_leader",0xf);
                                                                                  if (iVar2 == 0) {
                                                                                    pcVar10 = "--";
                                                                                    if ((int)param_6[0x14d] != 0) {
                                                                                      plVar8 = (longlong *)FUN_140087ed0();
                                                                                      lVar19 = (**(code **)(*plVar8 + 0x298))(plVar8,(int)param_6[0x14d]);
                                                                                      if (lVar19 != 0) {
                                                                                        plVar8 = (longlong *)FUN_140087ed0();
                                                                                        pcVar10 = (char *)(**(code **)(*plVar8 + 0x298))
                                                                                                                    (plVar8,(int)param_6[0x14d]);
                                                                                      }
                                                                                    }
                                                                                    pcVar18 = pcVar10;
                                                                                    do {
                                                                                      cVar1 = *pcVar18;
                                                                                      pcVar18 = pcVar18 + 1;
                                                                                      pcVar18[(longlong)(param_2 + (-1 - (longlong)pcVar10))] = cVar1;
                                                                                    } while (cVar1 != '\0');
                                                                                    uVar20 = 0xffffffffffffffff;
                                                                                    do {
                                                                                      if (uVar20 == 0) break;
                                                                                      uVar20 = uVar20 - 1;
                                                                                      cVar1 = *pcVar10;
                                                                                      pcVar10 = pcVar10 + 1;
                                                                                    } while (cVar1 != '\0');
                                                                                    pcVar9 = pcVar9 + 0xf;
                                                                                    param_2 = param_2 + (~uVar20 - 1);
                                                                                  }
                                                                                  else {
                                                                                    iVar2 = _strnicmp(pcVar9,"iter_syn_money",0xe);
                                                                                    if (iVar2 == 0) {
                                                                                      local_4158 = 0x2d2d;
                                                                                      local_4156 = 0;
                                                                                      memset(local_4155,0,0xfd);
                                                                                      if ((int)param_6[0x14d] != 0) {
                                                                                        plVar8 = (longlong *)FUN_140087ed0();
                                                                                        lVar19 = (**(code **)(*plVar8 + 0x290))(plVar8,(int)param_6[0x14d]);
                                                                                        if (lVar19 != 0) {
                                                                                          plVar8 = (longlong *)FUN_140087ed0();
                                                                                          (**(code **)(*plVar8 + 0x268))(plVar8,(int)param_6[0x14d]);
                                                                                          _snprintf((char *)&local_4158,0x100,"%I64d");
                                                                                          local_4059 = 0;
                                                                                        }
                                                                                      }
                                                                                      pcVar10 = (char *)&local_4158;
                                                                                      do {
                                                                                        cVar1 = *pcVar10;
                                                                                        pcVar10 = pcVar10 + 1;
                                                                                        pcVar10[(longlong)(param_2 + (-1 - (longlong)&local_4158))] = cVar1;
                                                                                      } while (cVar1 != '\0');
                                                                                      uVar20 = 0xffffffffffffffff;
                                                                                      pcVar10 = (char *)&local_4158;
                                                                                      do {
                                                                                        if (uVar20 == 0) break;
                                                                                        uVar20 = uVar20 - 1;
                                                                                        cVar1 = *pcVar10;
                                                                                        pcVar10 = pcVar10 + 1;
                                                                                      } while (cVar1 != '\0');
                                                                                      pcVar9 = pcVar9 + 0xe;
                                                                                      param_2 = param_2 + (~uVar20 - 1);
                                                                                    }
                                                                                    else {
                                                                                      iVar2 = _strnicmp(pcVar9,"iter_syn_amount",0xf);
                                                                                      if (iVar2 == 0) {
                                                                                        local_3f58 = 0x2d2d;
                                                                                        local_3f56 = 0;
                                                                                        memset(local_3f55,0,0xfd);
                                                                                        if ((int)param_6[0x14d] != 0) {
                                                                                          plVar8 = (longlong *)FUN_140087ed0();
                                                                                          lVar19 = (**(code **)(*plVar8 + 0x290))(plVar8,(int)param_6[0x14d]);
                                                                                          if (lVar19 != 0) {
                                                                                            plVar8 = (longlong *)FUN_140087ed0();
                                                                                            (**(code **)(*plVar8 + 600))(plVar8,(int)param_6[0x14d]);
                                                                                            _snprintf((char *)&local_3f58,0x100,"%u");
                                                                                            local_3e59 = 0;
                                                                                          }
                                                                                        }
                                                                                        pcVar10 = (char *)&local_3f58;
                                                                                        do {
                                                                                          cVar1 = *pcVar10;
                                                                                          pcVar10 = pcVar10 + 1;
                                                                                          pcVar10[(longlong)(param_2 + (-1 - (longlong)&local_3f58))] = cVar1;
                                                                                        } while (cVar1 != '\0');
                                                                                        uVar20 = 0xffffffffffffffff;
                                                                                        pcVar10 = (char *)&local_3f58;
                                                                                        do {
                                                                                          if (uVar20 == 0) break;
                                                                                          uVar20 = uVar20 - 1;
                                                                                          cVar1 = *pcVar10;
                                                                                          pcVar10 = pcVar10 + 1;
                                                                                        } while (cVar1 != '\0');
                                                                                        pcVar9 = pcVar9 + 0xf;
                                                                                        param_2 = param_2 + (~uVar20 - 1);
                                                                                      }
                                                                                      else {
                                                                                        iVar2 = _strnicmp(pcVar9,"iter_member_rank",0x10);
                                                                                        if (iVar2 == 0) {
                                                                                          pcVar10 = "--";
                                                                                          if ((int)param_6[0x14d] != 0) {
                                                                                            uVar11 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
                                                                                            plVar8 = (longlong *)FUN_140087650(uVar11);
                                                                                            plVar8 = (longlong *)
                                                                                                     (**(code **)(*plVar8 + 0x98))(plVar8,(int)param_6[0x14d]);
                                                                                            if ((plVar8 != (longlong *)0x0) &&
                                                                                               (iVar2 = (**(code **)(plVar8[2] + 0x170))(plVar8 + 2), iVar2 != 0
                                                                                               )) {
                                                                                              plVar13 = (longlong *)FUN_140087ed0();
                                                                                              lVar19 = *plVar13;
                                                                                              uVar3 = (**(code **)(*plVar8 + 8))(plVar8);
                                                                                              uVar3 = (**(code **)(lVar19 + 0xf8))(plVar13,uVar3);
                                                                                              plVar8 = (longlong *)FUN_140087ed0();
                                                                                              pcVar10 = (char *)(**(code **)(*plVar8 + 0x2a0))(plVar8,uVar3);
                                                                                            }
                                                                                          }
                                                                                          pcVar18 = pcVar10;
                                                                                          do {
                                                                                            cVar1 = *pcVar18;
                                                                                            pcVar18 = pcVar18 + 1;
                                                                                            pcVar18[(longlong)(param_2 + (-1 - (longlong)pcVar10))] = cVar1;
                                                                                          } while (cVar1 != '\0');
                                                                                          uVar20 = 0xffffffffffffffff;
                                                                                          do {
                                                                                            if (uVar20 == 0) break;
                                                                                            uVar20 = uVar20 - 1;
                                                                                            cVar1 = *pcVar10;
                                                                                            pcVar10 = pcVar10 + 1;
                                                                                          } while (cVar1 != '\0');
                                                                                          pcVar9 = pcVar9 + 0x10;
                                                                                          param_2 = param_2 + (~uVar20 - 1);
                                                                                        }
                                                                                        else {
                                                                                          iVar2 = _strnicmp(pcVar9,"iter_member_name",0x10);
                                                                                          if (iVar2 == 0) {
                                                                                            pcVar10 = "--";
                                                                                            if ((int)param_6[0x14d] != 0) {
                                                                                              uVar11 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
                                                                                              plVar8 = (longlong *)FUN_140087650(uVar11);
                                                                                              lVar19 = (**(code **)(*plVar8 + 0x98))(plVar8,(int)param_6[0x14d])
                                                                                              ;
                                                                                              if (lVar19 != 0) {
                                                                                                plVar8 = (longlong *)(lVar19 + 0x10);
                                                                                                iVar2 = (**(code **)(*plVar8 + 0x170))(plVar8);
                                                                                                if (iVar2 != 0) {
                                                                                                  pcVar10 = (char *)(**(code **)(*plVar8 + 0x18))(plVar8);
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                            pcVar18 = pcVar10;
                                                                                            do {
                                                                                              cVar1 = *pcVar18;
                                                                                              pcVar18 = pcVar18 + 1;
                                                                                              pcVar18[(longlong)(param_2 + (-1 - (longlong)pcVar10))] = cVar1;
                                                                                            } while (cVar1 != '\0');
                                                                                            uVar20 = 0xffffffffffffffff;
                                                                                            do {
                                                                                              if (uVar20 == 0) break;
                                                                                              uVar20 = uVar20 - 1;
                                                                                              cVar1 = *pcVar10;
                                                                                              pcVar10 = pcVar10 + 1;
                                                                                            } while (cVar1 != '\0');
                                                                                            pcVar9 = pcVar9 + 0x10;
                                                                                            param_2 = param_2 + (~uVar20 - 1);
                                                                                          }
                                                                                          else {
                                                                                            iVar2 = _strnicmp(pcVar9,"iter_member_proffer",0x13);
                                                                                            if (iVar2 == 0) {
                                                                                              local_3d58 = 0x2d2d;
                                                                                              local_3d56 = 0;
                                                                                              memset(local_3d55,0,0xfd);
                                                                                              if ((int)param_6[0x14d] != 0) {
                                                                                                uVar11 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
                                                                                                plVar8 = (longlong *)FUN_140087650(uVar11);
                                                                                                plVar8 = (longlong *)
                                                                                                         (**(code **)(*plVar8 + 0x98))
                                                                                                                   (plVar8,(int)param_6[0x14d]);
                                                                                                if (plVar8 != (longlong *)0x0) {
                                                                                                  plVar13 = (longlong *)FUN_140087ed0();
                                                                                                  lVar19 = *plVar13;
                                                                                                  uVar3 = (**(code **)(*plVar8 + 8))(plVar8);
                                                                                                  (**(code **)(lVar19 + 0x168))(plVar13,uVar3);
                                                                                                }
                                                                                                _snprintf((char *)&local_3d58,0x100,"%d");
                                                                                                local_3c59 = 0;
                                                                                              }
                                                                                              pcVar10 = (char *)&local_3d58;
                                                                                              do {
                                                                                                cVar1 = *pcVar10;
                                                                                                pcVar10 = pcVar10 + 1;
                                                                                                pcVar10[(longlong)(param_2 + (-1 - (longlong)&local_3d58))] =
                                                                                                     cVar1;
                                                                                              } while (cVar1 != '\0');
                                                                                              uVar20 = 0xffffffffffffffff;
                                                                                              pcVar10 = (char *)&local_3d58;
                                                                                              do {
                                                                                                if (uVar20 == 0) break;
                                                                                                uVar20 = uVar20 - 1;
                                                                                                cVar1 = *pcVar10;
                                                                                                pcVar10 = pcVar10 + 1;
                                                                                              } while (cVar1 != '\0');
                                                                                              pcVar9 = pcVar9 + 0x13;
                                                                                              param_2 = param_2 + (~uVar20 - 1);
                                                                                            }
                                                                                            else {
                                                                                              iVar2 = _strnicmp(pcVar9,"last_add_item_id",0x10);
                                                                                              if (iVar2 == 0) {
                                                                                                local_3b58[0] = '\0';
                                                                                                memset(local_3b58 + 1,0,0xff);
                                                                                                plVar8 = (longlong *)FUN_140087d40();
                                                                                                puVar16 = (undefined4 *)FUN_14011e970(param_6 + 0x181);
                                                                                                plVar8 = (longlong *)
                                                                                                         (**(code **)(*plVar8 + 0x60))(plVar8,*puVar16);
                                                                                                if (plVar8 == (longlong *)0x0) {
                                                                                                  _snprintf(local_3b58,0xff,"%u");
                                                                                                }
                                                                                                else {
                                                                                                  (**(code **)(*plVar8 + 8))(plVar8);
                                                                                                  _snprintf(local_3b58,0xff,"%u");
                                                                                                }
                                                                                                pcVar10 = local_3b58;
                                                                                                do {
                                                                                                  cVar1 = *pcVar10;
                                                                                                  pcVar10 = pcVar10 + 1;
                                                                                                  pcVar10[(longlong)(param_2 + (-1 - (longlong)local_3b58))] =
                                                                                                       cVar1;
                                                                                                } while (cVar1 != '\0');
                                                                                                uVar20 = 0xffffffffffffffff;
                                                                                                pcVar10 = local_3b58;
                                                                                                do {
                                                                                                  if (uVar20 == 0) break;
                                                                                                  uVar20 = uVar20 - 1;
                                                                                                  cVar1 = *pcVar10;
                                                                                                  pcVar10 = pcVar10 + 1;
                                                                                                } while (cVar1 != '\0');
                                                                                                pcVar9 = pcVar9 + 0x10;
                                                                                                param_2 = param_2 + (~uVar20 - 1);
                                                                                              }
                                                                                              else {
                                                                                                iVar2 = _strnicmp(pcVar9,"last_add_item_type",0x12);
                                                                                                if (iVar2 == 0) {
                                                                                                  local_3958[0] = '\0';
                                                                                                  memset(local_3958 + 1,0,0xff);
                                                                                                  plVar8 = (longlong *)FUN_140087d40();
                                                                                                  puVar16 = (undefined4 *)FUN_14011e970(param_6 + 0x181);
                                                                                                  lVar19 = (**(code **)(*plVar8 + 0x60))(plVar8,*puVar16);
                                                                                                  if (lVar19 == 0) {
                                                                                                    _snprintf(local_3958,0xff,"%u");
                                                                                                  }
                                                                                                  else {
                                                                                                    FUN_1400fda10(lVar19,1,1);
                                                                                                    _snprintf(local_3958,0xff,"%u");
                                                                                                  }
                                                                                                  pcVar10 = local_3958;
                                                                                                  do {
                                                                                                    cVar1 = *pcVar10;
                                                                                                    pcVar10 = pcVar10 + 1;
                                                                                                    pcVar10[(longlong)(param_2 + (-1 - (longlong)local_3958))] =
                                                                                                         cVar1;
                                                                                                  } while (cVar1 != '\0');
                                                                                                  uVar20 = 0xffffffffffffffff;
                                                                                                  pcVar10 = local_3958;
                                                                                                  do {
                                                                                                    if (uVar20 == 0) break;
                                                                                                    uVar20 = uVar20 - 1;
                                                                                                    cVar1 = *pcVar10;
                                                                                                    pcVar10 = pcVar10 + 1;
                                                                                                  } while (cVar1 != '\0');
                                                                                                  pcVar9 = pcVar9 + 0x12;
                                                                                                  param_2 = param_2 + (~uVar20 - 1);
                                                                                                }
                                                                                                else {
                                                                                                  iVar2 = _strnicmp(pcVar9,"last_del_item_id",0x10);
                                                                                                  if (iVar2 == 0) {
                                                                                                    local_1658[0] = '\0';
                                                                                                    memset(local_1658 + 1,0,0xff);
                                                                                                    _snprintf(local_1658,0xff,"%u");
                                                                                                    pcVar10 = local_1658;
                                                                                                    do {
                                                                                                      cVar1 = *pcVar10;
                                                                                                      pcVar10 = pcVar10 + 1;
                                                                                                      pcVar10[(longlong)(param_2 + (-1 - (longlong)local_1658))]
                                                                                                           = cVar1;
                                                                                                    } while (cVar1 != '\0');
                                                                                                    uVar20 = 0xffffffffffffffff;
                                                                                                    pcVar10 = local_1658;
                                                                                                    do {
                                                                                                      if (uVar20 == 0) break;
                                                                                                      uVar20 = uVar20 - 1;
                                                                                                      cVar1 = *pcVar10;
                                                                                                      pcVar10 = pcVar10 + 1;
                                                                                                    } while (cVar1 != '\0');
                                                                                                    pcVar9 = pcVar9 + 0x10;
                                                                                                    param_2 = param_2 + (~uVar20 - 1);
                                                                                                  }
                                                                                                  else {
                                                                                                    iVar2 = _strnicmp(pcVar9,"pk_bonus_target_name",0x14);
                                                                                                    if (iVar2 == 0) {
                                                                                                      pcVar10 = (char *)(param_1 + 0x20);
                                                                                                      pcVar18 = pcVar10;
                                                                                                      do {
                                                                                                        cVar1 = *pcVar18;
                                                                                                        pcVar18 = pcVar18 + 1;
                                                                                                        pcVar18[(longlong)(param_2 + (-1 - (longlong)pcVar10))]
                                                                                                             = cVar1;
                                                                                                      } while (cVar1 != '\0');
                                                                                                      uVar20 = 0xffffffffffffffff;
                                                                                                      pcVar9 = pcVar9 + 0x14;
                                                                                                      do {
                                                                                                        if (uVar20 == 0) break;
                                                                                                        uVar20 = uVar20 - 1;
                                                                                                        cVar1 = *pcVar10;
                                                                                                        pcVar10 = pcVar10 + 1;
                                                                                                      } while (cVar1 != '\0');
                                                                                                      param_2 = param_2 + (~uVar20 - 1);
                                                                                                    }
                                                                                                    else {
                                                                                                      iVar2 = _strnicmp(pcVar9,"pk_bonus_hunter_name",0x14);
                                                                                                      if (iVar2 == 0) {
                                                                                                        pcVar10 = (char *)(param_1 + 0x30);
                                                                                                        pcVar18 = pcVar10;
                                                                                                        do {
                                                                                                          cVar1 = *pcVar18;
                                                                                                          pcVar18 = pcVar18 + 1;
                                                                                                          pcVar18[(longlong)(param_2 + (-1 - (longlong)pcVar10))
                                                                                                                 ] = cVar1;
                                                                                                        } while (cVar1 != '\0');
                                                                                                        uVar20 = 0xffffffffffffffff;
                                                                                                        pcVar9 = pcVar9 + 0x14;
                                                                                                        do {
                                                                                                          if (uVar20 == 0) break;
                                                                                                          uVar20 = uVar20 - 1;
                                                                                                          cVar1 = *pcVar10;
                                                                                                          pcVar10 = pcVar10 + 1;
                                                                                                        } while (cVar1 != '\0');
                                                                                                        param_2 = param_2 + (~uVar20 - 1);
                                                                                                      }
                                                                                                      else {
                                                                                                        iVar2 = _strnicmp(pcVar9,"pk_bonus_bonus",0xe);
                                                                                                        if (iVar2 == 0) {
                                                                                                          local_3758 = 0x30;
                                                                                                          memset(local_3756,0,0xfe);
                                                                                                          _snprintf((char *)&local_3758,0x100,"%u");
                                                                                                          local_3659 = 0;
                                                                                                          pcVar10 = (char *)&local_3758;
                                                                                                          do {
                                                                                                            cVar1 = *pcVar10;
                                                                                                            pcVar10 = pcVar10 + 1;
                                                                                                            pcVar10[(longlong)
                                                                                                                    (param_2 + (-1 - (longlong)&local_3758))] =
                                                                                                                 cVar1;
                                                                                                          } while (cVar1 != '\0');
                                                                                                          uVar20 = 0xffffffffffffffff;
                                                                                                          pcVar10 = (char *)&local_3758;
                                                                                                          do {
                                                                                                            if (uVar20 == 0) break;
                                                                                                            uVar20 = uVar20 - 1;
                                                                                                            cVar1 = *pcVar10;
                                                                                                            pcVar10 = pcVar10 + 1;
                                                                                                          } while (cVar1 != '\0');
                                                                                                          pcVar9 = pcVar9 + 0xe;
                                                                                                          param_2 = param_2 + (~uVar20 - 1);
                                                                                                        }
                                                                                                        else {
                                                                                                          iVar2 = _strnicmp(pcVar9,"pk_bonus_num",0xc);
                                                                                                          if (iVar2 == 0) {
                                                                                                            local_3558 = 0x30;
                                                                                                            memset(local_3556,0,0xfe);
                                                                                                            _snprintf((char *)&local_3558,0x100,"%u");
                                                                                                            local_3459 = 0;
                                                                                                            pcVar10 = (char *)&local_3558;
                                                                                                            do {
                                                                                                              cVar1 = *pcVar10;
                                                                                                              pcVar10 = pcVar10 + 1;
                                                                                                              pcVar10[(longlong)
                                                                                                                      (param_2 + (-1 - (longlong)&local_3558))]
                                                                                                                   = cVar1;
                                                                                                            } while (cVar1 != '\0');
                                                                                                            uVar20 = 0xffffffffffffffff;
                                                                                                            pcVar10 = (char *)&local_3558;
                                                                                                            do {
                                                                                                              if (uVar20 == 0) break;
                                                                                                              uVar20 = uVar20 - 1;
                                                                                                              cVar1 = *pcVar10;
                                                                                                              pcVar10 = pcVar10 + 1;
                                                                                                            } while (cVar1 != '\0');
                                                                                                            pcVar9 = pcVar9 + 0xc;
                                                                                                            param_2 = param_2 + (~uVar20 - 1);
                                                                                                          }
                                                                                                          else {
                                                                                                            iVar2 = _strnicmp(pcVar9,"riding_points",0xd);
                                                                                                            if (iVar2 == 0) {
                                                                                                              local_4658 = 0x30;
                                                                                                              memset(local_4656,0,0xfe);
                                                                                                              (**(code **)(*param_6 + 0x70))(param_6);
                                                                                                              _snprintf((char *)&local_4658,0x100,"%d");
                                                                                                              local_4559 = 0;
                                                                                                              pcVar10 = (char *)&local_4658;
                                                                                                              do {
                                                                                                                cVar1 = *pcVar10;
                                                                                                                pcVar10[(longlong)param_2 -
                                                                                                                        (longlong)&local_4658] = cVar1;
                                                                                                                pcVar10 = pcVar10 + 1;
                                                                                                              } while (cVar1 != '\0');
                                                                                                              uVar20 = 0xffffffffffffffff;
                                                                                                              pcVar10 = (char *)&local_4658;
                                                                                                              do {
                                                                                                                if (uVar20 == 0) break;
                                                                                                                uVar20 = uVar20 - 1;
                                                                                                                cVar1 = *pcVar10;
                                                                                                                pcVar10 = pcVar10 + 1;
                                                                                                              } while (cVar1 != '\0');
                                                                                                              pcVar9 = pcVar9 + 0xd;
                                                                                                              param_2 = param_2 + (~uVar20 - 1);
                                                                                                            }
                                                                                                            else {
                                                                                                              iVar2 = _strnicmp(pcVar9,"server_remaindays",0x11)
                                                                                                              ;
                                                                                                              if (iVar2 == 0) {
                                                                                                                local_3158 = 0x30;
                                                                                                                memset(local_3156,0,0xfe);
                                                                                                                FUN_1400e2430();
                                                                                                                _snprintf((char *)&local_3158,0x100,"%d");
                                                                                                                local_3059 = 0;
                                                                                                                pcVar10 = (char *)&local_3158;
                                                                                                                do {
                                                                                                                  cVar1 = *pcVar10;
                                                                                                                  pcVar10[(longlong)param_2 -
                                                                                                                          (longlong)&local_3158] = cVar1;
                                                                                                                  pcVar10 = pcVar10 + 1;
                                                                                                                } while (cVar1 != '\0');
                                                                                                                uVar20 = 0xffffffffffffffff;
                                                                                                                pcVar10 = (char *)&local_3158;
                                                                                                                do {
                                                                                                                  if (uVar20 == 0) break;
                                                                                                                  uVar20 = uVar20 - 1;
                                                                                                                  cVar1 = *pcVar10;
                                                                                                                  pcVar10 = pcVar10 + 1;
                                                                                                                } while (cVar1 != '\0');
                                                                                                                pcVar9 = pcVar9 + 0x11;
                                                                                                                param_2 = param_2 + (~uVar20 - 1);
                                                                                                              }
                                                                                                              else {
                                                                                                                pcVar10 = strstr(pcVar9,"stc(");
                                                                                                                if ((pcVar10 == (char *)0x0) ||
                                                                                                                   (pcVar10 = strstr(pcVar9,")"),
                                                                                                                   pcVar10 == (char *)0x0)) {
                                                                                                                  pcVar10 = strstr(pcVar9,"stc_daily(");
                                                                                                                  if ((pcVar10 != (char *)0x0) &&
                                                                                                                     (pcVar10 = strstr(pcVar9,")"),
                                                                                                                     pcVar10 != (char *)0x0)) {
                                                                                                                    local_46c8 = 0;
                                                                                                                    local_46c0 = 0;
                                                                                                                    sscanf(pcVar9,"stc_daily(%u, %u)");
                                                                                                                    FUN_140384af0(param_6,local_46c8,local_46c0)
                                                                                                                    ;
                                                                                                                    local_2d58[0] = '\0';
                                                                                                                    memset(local_2d58 + 1,0,0xff);
                                                                                                                    _snprintf(local_2d58,0x100,"%d");
                                                                                                                    local_2c59 = 0;
                                                                                                                    pcVar10 = local_2d58;
                                                                                                                    do {
                                                                                                                      cVar1 = *pcVar10;
                                                                                                                      pcVar10[(longlong)param_2 -
                                                                                                                              (longlong)local_2d58] = cVar1;
                                                                                                                      pcVar10 = pcVar10 + 1;
                                                                                                                    } while (cVar1 != '\0');
                                                                                                                    pcVar9 = strstr(pcVar9,")");
                                                                                                                    uVar20 = 0xffffffffffffffff;
                                                                                                                    pcVar9 = pcVar9 + 1;
                                                                                                                    pcVar10 = local_2d58;
                                                                                                                    do {
                                                                                                                      if (uVar20 == 0) break;
                                                                                                                      uVar20 = uVar20 - 1;
                                                                                                                      cVar1 = *pcVar10;
                                                                                                                      pcVar10 = pcVar10 + 1;
                                                                                                                    } while (cVar1 != '\0');
                                                                                                                    param_2 = param_2 + (~uVar20 - 1);
                                                                                                                  }
                                                                                                                }
                                                                                                                else {
                                                                                                                  local_46cc = 0;
                                                                                                                  local_46ac = 0;
                                                                                                                  sscanf(pcVar9,"stc(%u, %u)");
                                                                                                                  FUN_140385cf0(param_6,local_46cc,local_46ac);
                                                                                                                  local_2f58[0] = '\0';
                                                                                                                  memset(local_2f58 + 1,0,0xff);
                                                                                                                  _snprintf(local_2f58,0x100,"%d");
                                                                                                                  local_2e59 = 0;
                                                                                                                  pcVar10 = local_2f58;
                                                                                                                  do {
                                                                                                                    cVar1 = *pcVar10;
                                                                                                                    pcVar10[(longlong)param_2 -
                                                                                                                            (longlong)local_2f58] = cVar1;
                                                                                                                    pcVar10 = pcVar10 + 1;
                                                                                                                  } while (cVar1 != '\0');
                                                                                                                  pcVar9 = strstr(pcVar9,")");
                                                                                                                  uVar20 = 0xffffffffffffffff;
                                                                                                                  pcVar9 = pcVar9 + 1;
                                                                                                                  pcVar10 = local_2f58;
                                                                                                                  do {
                                                                                                                    if (uVar20 == 0) break;
                                                                                                                    uVar20 = uVar20 - 1;
                                                                                                                    cVar1 = *pcVar10;
                                                                                                                    pcVar10 = pcVar10 + 1;
                                                                                                                  } while (cVar1 != '\0');
                                                                                                                  param_2 = param_2 + (~uVar20 - 1);
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
                }
                else {
                  local_46b0 = 0;
                  sscanf(pcVar9,"emoney_card1(%d)");
                  local_4258 = 0x2d2d;
                  local_4256 = 0;
                  memset(local_4255,0,0xfd);
                  FUN_140174810(param_6,local_46b0);
                  _snprintf((char *)&local_4258,0x100,"%d");
                  local_4159 = 0;
                  pcVar10 = (char *)&local_4258;
                  do {
                    cVar1 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                    pcVar10[(longlong)(param_2 + (-1 - (longlong)&local_4258))] = cVar1;
                  } while (cVar1 != '\0');
                  pcVar9 = strstr(pcVar9,")");
                  uVar20 = 0xffffffffffffffff;
                  pcVar9 = pcVar9 + 1;
                  pcVar10 = (char *)&local_4258;
                  do {
                    if (uVar20 == 0) break;
                    uVar20 = uVar20 - 1;
                    cVar1 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar1 != '\0');
                  param_2 = param_2 + (~uVar20 - 1);
                }
              }
            }
          }
          if (local_46d8 != 0) {
            iVar2 = _strnicmp(pcVar9,"datastr",7);
            if (iVar2 == 0) {
              pcVar10 = param_2;
              if (*(longlong *)(local_46d8 + 0x60) == 0) {
                local_46f8 = (undefined4 *)CONCAT44(local_46f8._4_4_,0x143);
                log_InlineLogERROR(&DAT_1406d9c10);
                pcVar18 = (char *)0x0;
              }
              else {
                pcVar18 = (char *)(**(code **)(**(longlong **)(local_46d8 + 0x60) + 0x18))(*(longlong **)(local_46d8 + 0x60),0x16);
              }
              do {
                cVar1 = *pcVar18;
                pcVar18 = pcVar18 + 1;
                *pcVar10 = cVar1;
                pcVar10 = pcVar10 + 1;
              } while (cVar1 != '\0');
              pcVar9 = pcVar9 + 7;
              if (*(longlong *)(local_46d8 + 0x60) == 0) {
                local_46f8 = (undefined4 *)CONCAT44(local_46f8._4_4_,0x143);
                log_InlineLogERROR(&DAT_1406d9c10);
                pcVar10 = (char *)0x0;
              }
              else {
                pcVar10 = (char *)(**(code **)(**(longlong **)(local_46d8 + 0x60) + 0x18))(*(longlong **)(local_46d8 + 0x60),0x16);
              }
              uVar20 = 0xffffffffffffffff;
              do {
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar1 != '\0');
              param_2 = param_2 + (~uVar20 - 1);
            }
            else {
              iVar2 = _strnicmp(pcVar9,"data",4);
              if (((iVar2 == 0) && (cVar1 = pcVar9[4], '/' < cVar1)) && (cVar1 < '4')) {
                local_1458[0] = '\0';
                memset(local_1458 + 1,0,0xff);
                if ((int)cVar1 - 0x30U < 4) {
                  FUN_140087300(local_46d8);
                  _snprintf(local_1458,0xff,"%d");
                }
                pcVar10 = local_1458;
                do {
                  cVar1 = *pcVar10;
                  pcVar10[(longlong)param_2 - (longlong)local_1458] = cVar1;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 != '\0');
                uVar20 = 0xffffffffffffffff;
                pcVar10 = local_1458;
                do {
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 != '\0');
                pcVar9 = pcVar9 + 5;
                param_2 = param_2 + (~uVar20 - 1);
              }
              else {
                iVar2 = _strnicmp(pcVar9,"name",4);
                if (iVar2 == 0) {
                  pcVar18 = (char *)(**(code **)(*(longlong *)(local_46d8 + 0x10) + 0x18))(local_46d8 + 0x10);
                  pcVar10 = param_2;
                  do {
                    cVar1 = *pcVar18;
                    pcVar18 = pcVar18 + 1;
                    *pcVar10 = cVar1;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar1 != '\0');
                  pcVar9 = pcVar9 + 4;
                  pcVar10 = (char *)FUN_140117cc0(local_46d8,3);
                  uVar20 = 0xffffffffffffffff;
                  do {
                    if (uVar20 == 0) break;
                    uVar20 = uVar20 - 1;
                    cVar1 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar1 != '\0');
                  param_2 = param_2 + (~uVar20 - 1);
                }
                else {
                  iVar2 = _strnicmp(pcVar9,"id",2);
                  if (iVar2 == 0) {
                    local_1258[0] = '\0';
                    memset(local_1258 + 1,0,0xff);
                    FUN_140087360(local_46d8);
                    _snprintf(local_1258,0xff,"%u");
                    pcVar10 = local_1258;
                    do {
                      cVar1 = *pcVar10;
                      pcVar10[(longlong)param_2 - (longlong)local_1258] = cVar1;
                      pcVar10 = pcVar10 + 1;
                    } while (cVar1 != '\0');
                    uVar20 = 0xffffffffffffffff;
                    pcVar10 = local_1258;
                    do {
                      if (uVar20 == 0) break;
                      uVar20 = uVar20 - 1;
                      cVar1 = *pcVar10;
                      pcVar10 = pcVar10 + 1;
                    } while (cVar1 != '\0');
                    pcVar9 = pcVar9 + 2;
                    param_2 = param_2 + (~uVar20 - 1);
                  }
                  else {
                    iVar2 = _strnicmp(pcVar9,"npc_x",5);
                    if (iVar2 == 0) {
                      local_1058[0] = '\0';
                      memset(local_1058 + 1,0,0xff);
                      (**(code **)(*(longlong *)(local_46d8 + 0x10) + 0x40))(local_46d8 + 0x10);
                      _snprintf(local_1058,0xff,"%u");
                      pcVar10 = local_1058;
                      do {
                        cVar1 = *pcVar10;
                        pcVar10[(longlong)param_2 - (longlong)local_1058] = cVar1;
                        pcVar10 = pcVar10 + 1;
                      } while (cVar1 != '\0');
                      uVar20 = 0xffffffffffffffff;
                      pcVar10 = local_1058;
                      do {
                        if (uVar20 == 0) break;
                        uVar20 = uVar20 - 1;
                        cVar1 = *pcVar10;
                        pcVar10 = pcVar10 + 1;
                      } while (cVar1 != '\0');
                      pcVar9 = pcVar9 + 5;
                      param_2 = param_2 + (~uVar20 - 1);
                    }
                    else {
                      iVar2 = _strnicmp(pcVar9,"npc_y",5);
                      if (iVar2 == 0) {
                        local_e58[0] = '\0';
                        memset(local_e58 + 1,0,0xff);
                        (**(code **)(*(longlong *)(local_46d8 + 0x10) + 0x48))(local_46d8 + 0x10);
                        _snprintf(local_e58,0xff,"%u");
                        pcVar10 = local_e58;
                        do {
                          cVar1 = *pcVar10;
                          pcVar10[(longlong)param_2 - (longlong)local_e58] = cVar1;
                          pcVar10 = pcVar10 + 1;
                        } while (cVar1 != '\0');
                        uVar20 = 0xffffffffffffffff;
                        pcVar10 = local_e58;
                        do {
                          if (uVar20 == 0) break;
                          uVar20 = uVar20 - 1;
                          cVar1 = *pcVar10;
                          pcVar10 = pcVar10 + 1;
                        } while (cVar1 != '\0');
                        pcVar9 = pcVar9 + 5;
                        param_2 = param_2 + (~uVar20 - 1);
                      }
                      else {
                        iVar2 = _strnicmp(pcVar9,"npc_ownerid",0xb);
                        if (iVar2 == 0) {
                          local_c58[0] = '\0';
                          memset(local_c58 + 1,0,0xff);
                          FUN_1400872b0(local_46d8,1);
                          _snprintf(local_c58,0xff,"%u");
                          pcVar10 = local_c58;
                          do {
                            cVar1 = *pcVar10;
                            pcVar10[(longlong)param_2 - (longlong)local_c58] = cVar1;
                            pcVar10 = pcVar10 + 1;
                          } while (cVar1 != '\0');
                          uVar20 = 0xffffffffffffffff;
                          pcVar10 = local_c58;
                          do {
                            if (uVar20 == 0) break;
                            uVar20 = uVar20 - 1;
                            cVar1 = *pcVar10;
                            pcVar10 = pcVar10 + 1;
                          } while (cVar1 != '\0');
                          pcVar9 = pcVar9 + 0xb;
                          param_2 = param_2 + (~uVar20 - 1);
                        }
                        else {
                          iVar2 = _strnicmp(pcVar9,"npc_life",8);
                          if (iVar2 == 0) {
                            local_a58[0] = '\0';
                            memset(local_a58 + 1,0,0xff);
                            FUN_1400872b0(local_46d8,0x18);
                            _snprintf(local_a58,0xff,"%u");
                            pcVar10 = local_a58;
                            do {
                              cVar1 = *pcVar10;
                              pcVar10[(longlong)param_2 - (longlong)local_a58] = cVar1;
                              pcVar10 = pcVar10 + 1;
                            } while (cVar1 != '\0');
                            uVar20 = 0xffffffffffffffff;
                            pcVar10 = local_a58;
                            do {
                              if (uVar20 == 0) break;
                              uVar20 = uVar20 - 1;
                              cVar1 = *pcVar10;
                              pcVar10 = pcVar10 + 1;
                            } while (cVar1 != '\0');
                            pcVar9 = pcVar9 + 8;
                            param_2 = param_2 + (~uVar20 - 1);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (param_8 != 0) {
            plVar8 = DAT_140975b60;
            if (DAT_140975b60 == (longlong *)0x0) {
              local_46f8 = (undefined4 *)CONCAT44(local_46f8._4_4_,0x3c0);
              log_InlineLogERROR(&DAT_1406d9c10);
              plVar8 = (longlong *)0x0;
            }
            lVar19 = (**(code **)(*plVar8 + 0x60))(plVar8,param_8);
            if (lVar19 != 0) {
              iVar2 = _strnicmp(pcVar9,"item_type",9);
              if (iVar2 == 0) {
                local_858[0] = '\0';
                memset(local_858 + 1,0,0xff);
                FUN_1400fda10(lVar19,1,1);
                _snprintf(local_858,0xff,"%u");
                pcVar10 = local_858;
                do {
                  cVar1 = *pcVar10;
                  pcVar10[(longlong)param_2 - (longlong)local_858] = cVar1;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 != '\0');
                uVar20 = 0xffffffffffffffff;
                pcVar10 = local_858;
                do {
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 != '\0');
                pcVar9 = pcVar9 + 9;
                param_2 = param_2 + (~uVar20 - 1);
              }
              else {
                iVar2 = _strnicmp(pcVar9,"item_data",9);
                if (iVar2 == 0) {
                  local_658[0] = '\0';
                  memset(local_658 + 1,0,0xff);
                  FUN_1400fda10(lVar19,0xd,1);
                  _snprintf(local_658,0xff,"%u");
                  pcVar10 = local_658;
                  do {
                    cVar1 = *pcVar10;
                    pcVar10[(longlong)param_2 - (longlong)local_658] = cVar1;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar1 != '\0');
                  uVar20 = 0xffffffffffffffff;
                  pcVar10 = local_658;
                  do {
                    if (uVar20 == 0) break;
                    uVar20 = uVar20 - 1;
                    cVar1 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar1 != '\0');
                  pcVar9 = pcVar9 + 9;
                  param_2 = param_2 + (~uVar20 - 1);
                }
              }
            }
          }
          param_5 = local_4698;
          param_1 = local_4688;
          param_6 = local_4690;
          if (iVar21 != 0) {
            uVar7 = 0;
            for (; param_2 < local_4660; param_2 = param_2 + 1) {
              uVar7 = uVar7 + 1;
              if (1000000 < uVar7) {
                local_46f8 = (undefined4 *)CONCAT44(local_46f8._4_4_,0x4b7);
                log_InlineLogERROR(&DAT_1406d9c10);
                param_5 = local_4698;
                param_1 = local_4688;
                param_6 = local_4690;
                break;
              }
              *param_2 = ' ';
            }
          }
        }
        else {
          *param_2 = *param_3;
          pcVar9 = param_3 + 1;
          param_2 = param_2 + 1;
        }
        param_3 = pcVar9;
        cVar1 = *pcVar9;
      }
      *param_2 = '\0';
    }
  }
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140122f90(longlong param_1,int param_2,longlong *param_3,undefined4 param_4,undefined4 param_5,char *param_6)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined1 auStack_1528 [32];
  char *local_1508;
  undefined1 *local_1500;
  char *local_14f8;
  uint local_14f0;
  char *local_14e8;
  undefined4 local_14e0;
  undefined1 local_14d8;
  char local_14c8;
  int local_14c4;
  uint local_14c0;
  char *local_14b8;
  longlong *local_14b0;
  undefined8 local_14a8;
  undefined1 local_1498 [1104];
  char local_1048 [256];
  undefined1 local_f48;
  undefined1 local_f47 [255];
  char local_e48;
  undefined1 local_e47 [254];
  undefined1 local_d49;
  undefined1 local_a8a;
  char local_a48 [256];
  char local_948 [256];
  undefined1 local_848;
  undefined1 local_847 [957];
  undefined1 local_48a;
  char local_448;
  undefined1 local_447 [254];
  undefined1 local_349;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140122fa6;
  local_14a8 = 0xfffffffffffffffe;
  local_48 = DAT_1409707c0 ^ (ulonglong)auStack_1528;
  local_14b8 = param_6;
  if (param_2 == 0) {
    uVar10 = 0;
  }
  else {
    *(longlong **)(param_1 + 8) = param_3;
    *(undefined4 *)(param_1 + 0x18) = param_4;
    local_14c0 = 0;
    local_14c4 = param_2;
    local_14b0 = param_3;
    do {
      pcVar12 = local_14b8;
      uVar2 = local_14c0;
      if (local_14c4 == 0) goto LAB_140123565;
      plVar9 = DAT_140975b88;
      if (DAT_140975b88 == (longlong *)0x0) {
        local_1508 = (char *)CONCAT44(local_1508._4_4_,0x3c4);
        log_InlineLogERROR(&DAT_1406d9c10);
        plVar9 = (longlong *)0x0;
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x40))();
      if (puVar8 == (undefined8 *)0x0) {
        log_InlineLogDBERROR("table:cq_action/cq_newaction, CGameAction::ProcessEqpQuenchAction Error: game action %u not found.");
        goto LAB_140123565;
      }
      local_848 = 0;
      memset(local_847,0,0x3ff);
      plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,5);
      uVar10 = (**(code **)(*plVar9 + 0x78))(plVar9);
      FUN_1401184a0(param_1,&local_848,uVar10,0x400);
      local_48a = 0;
      local_e48 = '\0';
      memset(local_e47,0,0x3ff);
      local_14f0 = *(uint *)(param_1 + 0x18);
      local_14f8 = *(char **)(param_1 + 0x10);
      local_1500 = *(undefined1 **)(param_1 + 8);
      local_1508 = pcVar12;
      FUN_14011efb0(param_1,&local_e48,&local_848,0x400);
      local_a8a = 0;
      local_d49 = 0;
      if ((*(longlong *)(param_1 + 8) != 0) && (cVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x238))(), cVar1 != '\0')) {
        local_448 = '\0';
        memset(local_447,0,0x3ff);
        plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,4);
        uVar2 = (**(code **)(*plVar9 + 0x48))(plVar9);
        plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,3);
        uVar3 = (**(code **)(*plVar9 + 0x48))(plVar9);
        plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,2);
        uVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
        plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,1);
        uVar5 = (**(code **)(*plVar9 + 0x48))(plVar9);
        FUN_1400bb7e0(puVar8);
        local_14e8 = &local_e48;
        local_14f8 = (char *)CONCAT44(local_14f8._4_4_,uVar3);
        local_1508 = (char *)CONCAT44(local_1508._4_4_,uVar5);
        local_14f0 = uVar2;
        local_1500._0_4_ = uVar4;
        _snprintf(&local_448,0x3ff,"%d: [%d,%d]. type[%d], data[%d], param:[%s].");
        local_349 = 0;
        FUN_14015b240(local_1498);
        uVar10 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18))();
        local_14d8 = 1;
        local_14e0 = 0;
        local_14e8 = (char *)((ulonglong)local_14e8 & 0xffffffff00000000);
        local_14f0 = local_14f0 & 0xffff0000;
        local_14f8 = (char *)CONCAT62(local_14f8._2_6_,2000);
        local_1500 = (undefined1 *)CONCAT44(local_1500._4_4_,0xffff00);
        local_1508 = (char *)0x0;
        iVar6 = FUN_14015b300(local_1498,"SYSTEM",uVar10,&local_448);
        if (iVar6 != 0) {
          plVar9 = (longlong *)(*(longlong *)(param_1 + 8) + 0x10);
          (**(code **)(*plVar9 + 0x350))(plVar9,local_1498);
        }
        FUN_14015b2c0(local_1498);
        pcVar12 = local_14b8;
        param_3 = local_14b0;
        uVar2 = local_14c0;
      }
      local_14c8 = '\0';
      plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,3);
      iVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
      if (iVar6 == 0x214) {
        local_1500 = (undefined1 *)CONCAT44(local_1500._4_4_,param_5);
        local_1508 = (char *)CONCAT44(local_1508._4_4_,*(undefined4 *)(param_1 + 0x18));
        local_14f8 = pcVar12;
        local_14c8 = FUN_14011b910(param_1,puVar8,&local_e48,*(undefined8 *)(param_1 + 8));
LAB_1401234c6:
        if (local_14c8 == '\0') goto LAB_140123514;
LAB_1401234cb:
        plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,1);
        local_14c4 = (**(code **)(*plVar9 + 0x48))(plVar9);
      }
      else {
        if (iVar6 == 0x3f2) {
          plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,4);
          iVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
          if (iVar6 == 0) {
            iVar6 = 2000;
          }
          (**(code **)(*param_3 + 0x150))(param_3,iVar6,&DAT_1406e4608,&local_e48);
          local_14c8 = '\x01';
          goto LAB_1401234cb;
        }
        if (iVar6 == 0x3e9) {
          local_f48 = 0;
          memset(local_f47,0,0xff);
          local_1500 = &local_f48;
          local_1508 = local_948;
          iVar6 = sscanf(&local_e48,"%s %s %s %s");
          if (iVar6 < 3) {
            FUN_1400bb7e0(puVar8);
            log_InlineLogDBERROR(&DAT_14070c010);
            goto LAB_140123565;
          }
          uVar11 = _strtoi64(local_948,(char **)0x0,10);
          iVar6 = _stricmp(local_a48,"vip");
          if (iVar6 == 0) {
            iVar6 = _stricmp(local_1048,"==");
            if (iVar6 == 0) {
              uVar7 = FUN_1401649c0(param_3);
              local_14c8 = uVar11 == uVar7;
            }
            iVar6 = _stricmp(local_1048,"<");
            if (iVar6 == 0) {
              uVar7 = FUN_1401649c0(param_3);
              local_14c8 = (longlong)(ulonglong)uVar7 < (longlong)uVar11;
            }
            iVar6 = _stricmp(local_1048,">");
            if (iVar6 == 0) {
              uVar7 = FUN_1401649c0(param_3);
              local_14c8 = (longlong)uVar11 < (longlong)(ulonglong)uVar7;
              goto LAB_1401234c6;
            }
            local_14c8 = '\0';
          }
        }
        else {
          local_1508 = (char *)CONCAT44(local_1508._4_4_,0x5f6);
          log_InlineLogDBERROR("table:cq_action/cq_newaction, Game action %u has a bad type %d @%s,%d");
        }
LAB_140123514:
        plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,2);
        local_14c4 = (**(code **)(*plVar9 + 0x48))(plVar9);
      }
      local_14c0 = uVar2 + 1;
    } while (uVar2 < 0x20);
    FUN_1400bb7e0(puVar8);
    log_InlineLogDBERROR("table:cq_action/cq_newaction, Error: too many game action,cur action:%u, last action:%u.");
LAB_140123565:
    uVar10 = 1;
  }
  return uVar10;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_140123590(longlong param_1,undefined8 *param_2,char *param_3,longlong *param_4,undefined8 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong lVar13;
  IStringManager *pIVar14;
  undefined8 uVar15;
  char *pcVar16;
  undefined4 *puVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_7e8 [32];
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 local_7a8;
  int *local_7a0;
  uint *local_798;
  int *local_790;
  int *local_788;
  undefined4 *local_780;
  uint *local_778;
  int *local_770;
  undefined8 *local_768;
  undefined8 *local_760;
  uint *local_758;
  int *local_750;
  undefined4 *local_748;
  undefined4 *local_740;
  uint local_738;
  int local_734;
  int local_730;
  uint local_72c;
  int local_728 [2];
  uint local_720 [2];
  int local_718;
  int local_714;
  int local_710 [2];
  undefined4 local_708;
  undefined4 local_704;
  char local_700 [4];
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8;
  undefined4 local_6d4;
  undefined4 local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_6bc;
  undefined8 local_6b8;
  int local_6b0;
  int local_6ac;
  int local_6a8;
  undefined4 local_6a4;
  int local_6a0;
  int local_69c;
  undefined8 local_698;
  undefined8 local_690;
  undefined1 local_688 [1072];
  char local_258 [256];
  char local_158;
  undefined1 local_157 [255];
  ulonglong local_58;
  
  local_690 = 0xfffffffffffffffe;
  local_58 = DAT_1409707c0 ^ (ulonglong)auStack_7e8;
  local_6b8 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,0x113d);
    log_InlineLogERROR(&DAT_1406d9c10);
    return false;
  }
  if (param_4 == (longlong *)0x0) {
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    (**(code **)(*plVar10 + 0x48))(plVar10);
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar10 + 0x40))(plVar10);
    local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,0x1141);
    log_InlineLogDBERROR("table:cq_action/cq_newaction, CGameAction::ProcessActionItem() ActionID=%u, ActionType=%u at %s, %d");
    return false;
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
  uVar5 = (**(code **)(*plVar10 + 0x48))(plVar10);
  switch(uVar5) {
  case 0x1f5:
    iVar18 = 0;
    local_734 = 0;
    local_708 = 0;
    local_704 = 0;
    local_700[0] = '\0';
    local_6fc = 0;
    local_6f8 = 0;
    local_6f4 = 0;
    local_6f0 = 0;
    local_6ec = 0;
    local_6e8 = 0;
    local_6e4 = 0;
    local_6e0 = 0;
    local_6dc = 0;
    local_6d8 = 0;
    local_6d4 = 0;
    local_6d0 = 0;
    local_6cc = 0;
    local_6c8 = 0;
    local_6c4 = 0;
    local_6c0 = 0;
    local_6bc = 3;
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    local_708 = (**(code **)(*plVar10 + 0x48))(plVar10);
    local_748 = &local_6fc;
    local_750 = &local_734;
    local_758 = &local_6f8;
    local_760 = (undefined8 *)&local_6f4;
    local_768 = (undefined8 *)&local_6e4;
    local_770 = &local_6f0;
    local_778 = (uint *)local_700;
    local_780 = &local_6bc;
    local_788 = &local_6c4;
    local_790 = &local_6e8;
    local_798 = &local_6ec;
    local_7a0 = &local_6d0;
    local_7a8 = &local_6d4;
    local_7b0 = &local_6e0;
    local_7b8 = &local_6d8;
    local_7c0 = &local_6dc;
    local_7c8 = &local_6c0;
    sscanf(param_3,"%d %d %d %d %d %d %d %d %u %u %u %u %u %d %u %d %d %d %d");
    if (local_734 == 0) {
      uVar3 = FUN_1401188e0(param_1,param_4,&local_708);
      return (bool)uVar3;
    }
    if (0 < local_734) {
      if (0 < local_734) {
        do {
          cVar4 = FUN_1401188e0(param_1,param_4,&local_708);
          if (cVar4 == '\0') {
            return true;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < local_734);
      }
      return true;
    }
    break;
  case 0x1f6:
    local_158 = '\0';
    memset(local_157,0,0xff);
    local_738 = 1;
    plVar12 = (longlong *)0x0;
    local_728[0] = 0;
    local_7c8 = (uint *)local_728;
    local_720[0] = sscanf(param_3,"%s %d %d");
    bVar19 = local_728[0] == 1;
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar18 = (**(code **)(*plVar10 + 0x48))(plVar10);
    if (iVar18 != 0) {
      plVar10 = (longlong *)FUN_140087d40();
      plVar12 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar5 = (**(code **)(*plVar12 + 0x48))(plVar12);
      lVar13 = *plVar10;
      uVar5 = FUN_14032f2e0(param_4,uVar5,local_738,bVar19);
      plVar12 = (longlong *)(**(code **)(lVar13 + 0x60))(plVar10,uVar5);
    }
    if (0 < (int)local_720[0]) {
      pIVar14 = theInstance();
      pcVar11 = (char *)(*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NO_ITEM_NAME");
      iVar18 = _stricmp(&local_158,pcVar11);
      if (iVar18 != 0) {
        plVar10 = (longlong *)FUN_140087d40();
        lVar13 = *plVar10;
        uVar5 = FUN_14032f1a0(param_4,&local_158,local_738);
        plVar12 = (longlong *)(**(code **)(lVar13 + 0x60))(plVar10,uVar5);
      }
    }
    if (plVar12 == (longlong *)0x0) {
      return false;
    }
    cVar4 = FUN_140167b70(param_4);
    if (cVar4 != '\0') {
      lVar13 = (**(code **)(param_4[2] + 0x160))(param_4 + 2);
      if (lVar13 == 0) {
        return false;
      }
      uVar15 = (**(code **)(param_4[2] + 0x160))(param_4 + 2);
      cVar4 = FUN_1400f8890(uVar15);
      if (cVar4 == '\0') {
        return false;
      }
      cVar4 = FUN_140100c40(plVar12);
      if (cVar4 == '\0') {
        return false;
      }
    }
    cVar4 = FUN_1400ffc20(plVar12);
    if (((cVar4 == '\0') && (cVar4 = FUN_1400ff650(plVar12,2), cVar4 == '\0')) && (cVar4 = FUN_1400ff650(plVar12,1), cVar4 == '\0')) {
      uVar5 = (**(code **)(*plVar12 + 8))(plVar12);
      cVar4 = FUN_1403380a0(param_4,uVar5);
      if ((cVar4 == '\0') && (((local_738 == 1 || (cVar4 = FUN_1400ffbe0(plVar12), cVar4 == '\0')) && (iVar18 = FUN_1400fda10(plVar12,0x17,1), iVar18 == 0)))) {
        uVar5 = (**(code **)(*plVar12 + 8))(plVar12);
        cVar4 = FUN_140340190(param_4,uVar5,1,1);
        if (cVar4 != '\0') {
          return true;
        }
      }
    }
    break;
  case 0x1f7:
    local_158 = '\0';
    memset(local_157,0,0xff);
    local_738 = 1;
    plVar12 = (longlong *)0x0;
    local_728[0] = 0;
    local_7c8 = (uint *)local_728;
    local_720[0] = sscanf(param_3,"%s %d %d");
    bVar19 = local_728[0] == 1;
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar18 = (**(code **)(*plVar10 + 0x48))(plVar10);
    if (iVar18 != 0) {
      plVar10 = (longlong *)FUN_140087d40();
      plVar12 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar5 = (**(code **)(*plVar12 + 0x48))(plVar12);
      lVar13 = *plVar10;
      uVar5 = FUN_14032f2e0(param_4,uVar5,local_738,bVar19);
      plVar12 = (longlong *)(**(code **)(lVar13 + 0x60))(plVar10,uVar5);
    }
    if (0 < (int)local_720[0]) {
      pIVar14 = theInstance();
      pcVar11 = (char *)(*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NO_ITEM_NAME");
      iVar18 = _stricmp(&local_158,pcVar11);
      if (iVar18 != 0) {
        plVar10 = (longlong *)FUN_140087d40();
        lVar13 = *plVar10;
        uVar5 = FUN_14032f1a0(param_4,&local_158,local_738);
        plVar12 = (longlong *)(**(code **)(lVar13 + 0x60))(plVar10,uVar5);
      }
    }
    if ((((plVar12 != (longlong *)0x0) && (cVar4 = FUN_1400ffc20(plVar12), cVar4 == '\0')) && (cVar4 = FUN_1400ff650(plVar12,2), cVar4 == '\0')) &&
       (cVar4 = FUN_1400ff650(plVar12,1), cVar4 == '\0')) {
      uVar5 = (**(code **)(*plVar12 + 8))(plVar12);
      cVar4 = FUN_1403380a0(param_4,uVar5);
      if ((cVar4 == '\0') && ((local_738 == 1 || (cVar4 = FUN_1400ffbe0(plVar12), cVar4 == '\0')))) {
        return true;
      }
    }
    break;
  case 0x1f8:
    local_158 = '\0';
    memset(local_157,0,0xff);
    local_738 = 0;
    iVar18 = sscanf(param_3,"%s %d");
    if (iVar18 == 2) {
      iVar18 = _stricmp(&local_158,"ChkHole");
      if (iVar18 == 0) {
        plVar10 = (longlong *)FUN_140087d40();
        lVar13 = *plVar10;
        uVar5 = FUN_14032d440(param_4);
        lVar13 = (**(code **)(lVar13 + 0x60))(plVar10,uVar5);
        if (lVar13 != 0) {
          if ((local_738 == 1) && (iVar18 = FUN_1400fda10(lVar13,8,1), iVar18 != 0)) {
            return true;
          }
          if ((local_738 == 2) && (iVar18 = FUN_1400fda10(lVar13,9,1), iVar18 != 0)) {
            return true;
          }
        }
      }
      else {
        iVar18 = _stricmp(&local_158,"MakeHole");
        if (iVar18 == 0) {
          plVar10 = (longlong *)FUN_140087d40();
          lVar13 = *plVar10;
          uVar5 = FUN_14032d440(param_4);
          plVar10 = (longlong *)(**(code **)(lVar13 + 0x60))(plVar10,uVar5);
          if (plVar10 != (longlong *)0x0) {
            uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
            FUN_140188880(param_4,uVar5);
            if ((local_738 == 1) && (iVar18 = FUN_1400fda10(plVar10,8,1), iVar18 == 0)) {
              FUN_140104140(plVar10,8,0xff,1);
              FUN_140194390(param_4);
              plVar12 = (longlong *)FUN_140087d40();
              local_7c0 = (uint *)((ulonglong)local_7c0._4_4_ << 0x20);
              local_7c8 = (uint *)((ulonglong)local_7c8._4_4_ << 0x20);
              (**(code **)(*plVar12 + 0x130))(plVar12,param_4,plVar10,3);
              FUN_140170e90(param_4,0x28b9);
              return true;
            }
            if (((local_738 == 2) && (iVar18 = FUN_1400fda10(plVar10,8,1), iVar18 != 0)) && (iVar18 = FUN_1400fda10(plVar10,9,1), iVar18 == 0)) {
              FUN_140104140(plVar10,9,0xff,1);
              FUN_140194390(param_4);
              plVar12 = (longlong *)FUN_140087d40();
              local_7c0 = (uint *)((ulonglong)local_7c0._4_4_ << 0x20);
              local_7c8 = (uint *)((ulonglong)local_7c8._4_4_ << 0x20);
              (**(code **)(*plVar12 + 0x130))(plVar12,param_4,plVar10,3);
              FUN_140170e90(param_4,0x28ba);
              return true;
            }
          }
        }
      }
    }
    break;
  case 0x1f9:
    plVar10 = (longlong *)FUN_140087d40();
    plVar12 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar5 = (**(code **)(*plVar12 + 0x48))(plVar12);
    lVar13 = *plVar10;
    uVar5 = FUN_14032b4b0(param_4,uVar5);
    lVar13 = (**(code **)(lVar13 + 0x60))(plVar10,uVar5);
    if ((lVar13 != 0) && (bVar2 = FUN_1400fda10(lVar13,0x87,1), (bVar2 & 2) == 0)) {
      uVar5 = FUN_1400fda10(lVar13,5,1);
      FUN_140104140(lVar13,4,uVar5,1);
      plVar10 = (longlong *)FUN_140087d40();
      local_7c0 = (uint *)((ulonglong)local_7c0._4_4_ << 0x20);
      local_7c8 = (uint *)((ulonglong)local_7c8._4_4_ << 0x20);
      (**(code **)(*plVar10 + 0x130))(plVar10,param_4,lVar13,3);
      return true;
    }
    break;
  case 0x1fa:
    local_728[0] = 0;
    local_730 = 0;
    local_734 = 0;
    local_738 = 0;
    local_72c = 0;
    local_7b8 = &local_72c;
    local_7c0 = &local_738;
    local_7c8 = (uint *)&local_734;
    iVar18 = sscanf(param_3,"%u %u %d %d %d");
    if (local_734 < 1) {
      plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar10 + 0x40))(plVar10);
      log_InlineLogDBERROR(&DAT_14070d420);
      return false;
    }
    if (2 < iVar18) {
      local_7c0 = (uint *)CONCAT71(local_7c0._1_7_,local_72c == 1);
      local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,local_738);
      uVar3 = FUN_140350360(param_4,local_728[0],local_730);
      return (bool)uVar3;
    }
    local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,0x129a);
    log_InlineLogERROR(&DAT_1406d9c10);
    break;
  case 0x1fb:
    local_730 = 0;
    local_738 = 0;
    local_734 = 0;
    local_72c = 0;
    local_728[0] = 0;
    local_7b8 = (uint *)local_728;
    local_7c0 = &local_72c;
    local_7c8 = (uint *)&local_734;
    iVar18 = sscanf(param_3,"%u %u %d %d %d");
    if (2 < iVar18) {
      local_7c0 = (uint *)CONCAT71(local_7c0._1_7_,local_728[0] == 1);
      local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,local_72c);
      uVar3 = FUN_140338940(param_4,local_730,local_738,local_734);
      return (bool)uVar3;
    }
    local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,0x12ae);
    log_InlineLogERROR(&DAT_1406d9c10);
    break;
  case 0x1fc:
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar18 = (**(code **)(*plVar10 + 0x48))(plVar10);
    if ((iVar18 < 1) || ((ulonglong)((param_4[0x185] - param_4[0x184] >> 2) + (longlong)iVar18) < 0x29)) {
      return true;
    }
    break;
  case 0x1fd:
    local_158 = '\0';
    memset(local_157,0,0xff);
    local_738 = 0;
    local_720[0] = 0;
    local_7c8 = local_720;
    iVar18 = sscanf(param_3,"%s %d %d");
    if (iVar18 < 2) {
      plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar10 + 0x40))(plVar10);
      log_InlineLogDBERROR(&DAT_14070c010);
    }
    else {
      iVar18 = _stricmp("down_lev",&local_158);
      if (iVar18 == 0) {
        plVar10 = (longlong *)FUN_140087d40();
        lVar13 = *plVar10;
        uVar5 = FUN_14032b4b0(param_4,local_738);
        lVar13 = (**(code **)(lVar13 + 0x60))(plVar10,uVar5);
        if ((lVar13 != 0) && (cVar4 = FUN_140332590(param_4,local_738), cVar4 != '\0')) {
          return true;
        }
      }
      else {
        iVar18 = _stricmp("down_one_lev",&local_158);
        if (iVar18 == 0) {
          cVar4 = FUN_140332370(param_4,local_738);
          if (cVar4 != '\0') {
            return true;
          }
        }
        else {
          iVar18 = _stricmp("recover_dur",&local_158);
          if (iVar18 == 0) {
            cVar4 = FUN_14032c310(param_4,local_738);
            if (cVar4 != '\0') {
              return true;
            }
          }
          else {
            plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
            (**(code **)(*plVar10 + 0x40))(plVar10);
            log_InlineLogDBERROR(&DAT_14070c010);
          }
        }
      }
    }
    break;
  case 0x1fe:
    local_258[0] = '\0';
    memset(local_258 + 1,0,0xff);
    local_158 = '\0';
    memset(local_157,0,0xff);
    local_738 = 0;
    local_72c = 0;
    local_7c0 = &local_738;
    local_7c8 = (uint *)&local_158;
    iVar18 = sscanf(param_3,"%d %s %s %d");
    if (iVar18 == 4) {
      plVar10 = (longlong *)FUN_140087d40();
      lVar13 = *plVar10;
      uVar5 = FUN_14032b4b0(param_4,local_72c);
      lVar13 = (**(code **)(lVar13 + 0x60))(plVar10,uVar5);
      if (lVar13 != 0) {
        iVar18 = _stricmp("level",local_258);
        if (iVar18 == 0) {
          uVar9 = FUN_1400fee00(lVar13);
        }
        else {
          iVar18 = _stricmp("quality",local_258);
          if (iVar18 == 0) {
            uVar9 = FUN_1401011d0(lVar13);
          }
          else {
            iVar18 = _stricmp("durability",local_258);
            if (iVar18 == 0) {
              if (local_738 == 0xffffffff) {
                iVar18 = FUN_1400fda10(lVar13,5,1);
                local_738 = iVar18 / 100;
              }
              iVar18 = FUN_1400fda10(lVar13,4,1);
              uVar9 = iVar18 / 100;
            }
            else {
              iVar18 = _stricmp("max_dur",local_258);
              if (iVar18 != 0) {
                plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
                (**(code **)(*plVar10 + 0x40))(plVar10);
                log_InlineLogDBERROR(&DAT_14070c010);
                return false;
              }
              if (local_738 == 0xffffffff) {
                iVar18 = FUN_1400fda10(lVar13,0x7a,1);
                local_738 = iVar18 / 100;
              }
              iVar18 = FUN_1400fda10(lVar13,5,1);
              iVar8 = FUN_1400ff520(lVar13,0);
              uVar9 = ((iVar18 * 100) / (iVar8 + 100)) / 100;
            }
          }
        }
        iVar18 = _stricmp(&local_158,"==");
        if (iVar18 == 0) {
          return uVar9 == local_738;
        }
        iVar18 = _stricmp(&local_158,"<=");
        if (iVar18 == 0) {
          return (int)uVar9 <= (int)local_738;
        }
        iVar18 = _stricmp(&local_158,">=");
        if (iVar18 == 0) {
          return (int)local_738 <= (int)uVar9;
        }
        plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar10 + 0x40))(plVar10);
        log_InlineLogDBERROR(&DAT_14070c010);
      }
    }
    else {
      local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,0x1229);
      log_InlineLogERROR(&DAT_1406d9c10);
      plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar10 + 0x40))(plVar10);
      log_InlineLogDBERROR(&DAT_14070c010);
    }
    break;
  case 0x1ff:
    plVar10 = (longlong *)FUN_140087d40();
    plVar12 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar5 = (**(code **)(*plVar12 + 0x48))(plVar12);
    lVar13 = *plVar10;
    uVar5 = FUN_14032b4b0(param_4,uVar5);
    lVar13 = (**(code **)(lVar13 + 0x60))(plVar10,uVar5);
    if (lVar13 != 0) {
      return true;
    }
    break;
  case 0x200:
    local_734 = 0;
    local_72c = 0;
    iVar18 = sscanf(param_3,"%d %d");
    if (iVar18 == 2) {
      plVar10 = (longlong *)FUN_140087d40();
      lVar13 = *plVar10;
      uVar5 = FUN_14032b4b0(param_4,local_72c);
      lVar13 = (**(code **)(lVar13 + 0x60))(plVar10,uVar5);
      if (lVar13 == 0) {
        return false;
      }
      cVar4 = FUN_140106cf0(lVar13,local_734);
      if (cVar4 != '\0') {
        FUN_140387320(local_688);
        uVar5 = (**(code **)(*param_4 + 8))(param_4);
        local_7c8._0_4_ = 2;
        iVar18 = FUN_1403873d0(local_688,lVar13,uVar5,0);
        if (iVar18 == 0) {
          local_7c8._0_4_ = 0x1211;
          log_InlineLogERROR(&DAT_1406d9c10);
        }
        else {
          (**(code **)(param_4[2] + 0x348))(param_4 + 2,local_688,1);
        }
        FUN_140387370(local_688);
        return true;
      }
    }
    else {
      local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,0x1209);
      log_InlineLogERROR(&DAT_1406d9c10);
    }
    break;
  case 0x201:
    cVar4 = FUN_14016e3f0(param_4);
    if (cVar4 == '\0') {
      local_72c = 0;
      local_728[0] = 0;
      local_738 = 0;
      local_734 = 0;
      local_7c0 = (uint *)&local_734;
      local_7c8 = &local_738;
      iVar18 = sscanf(param_3,"%d %d %d %d");
      if (iVar18 != 4) {
        local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,0x137d);
        log_InlineLogERROR(&DAT_1406d9c10);
        plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar10 + 0x40))(plVar10);
        log_InlineLogDBERROR(&DAT_14070c010);
      }
      FUN_140386780(local_688);
      uVar5 = (**(code **)(*param_4 + 8))(param_4);
      uVar6 = (**(code **)(*param_4 + 8))(param_4);
      local_7a0 = (int *)((ulonglong)local_7a0 & 0xffffffffffffff00);
      local_7a8 = (int *)((ulonglong)local_7a8._4_4_ << 0x20);
      local_7b0 = (uint *)((ulonglong)local_7b0._4_4_ << 0x20);
      local_7b8 = (uint *)((ulonglong)local_7b8._4_4_ << 0x20);
      local_7c0 = (uint *)CONCAT44(local_7c0._4_4_,uVar5);
      local_7c8 = (uint *)((ulonglong)local_7c8 & 0xffffffffffffff00);
      iVar18 = FUN_1403868f0(local_688,uVar6,local_72c,local_728[0]);
      if (iVar18 == 0) {
        local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,0x1383);
        log_InlineLogERROR(&DAT_1406d9c10);
      }
      else {
        (**(code **)(param_4[2] + 0x348))(param_4 + 2,local_688,1);
      }
      local_7c8 = (uint *)CONCAT71(local_7c8._1_7_,1);
      uVar3 = FUN_140172eb0(param_4,local_738,local_734,"ACTION:transform!");
      FUN_1403867d0(local_688);
      return (bool)uVar3;
    }
    return false;
  case 0x202:
    plVar10 = (longlong *)FUN_140087d40();
    lVar13 = (**(code **)(*plVar10 + 0x60))(plVar10,param_6);
    if ((lVar13 != 0) && (iVar18 = FUN_1400fda10(lVar13,0x87,1), iVar18 == 2)) {
      plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      iVar18 = (**(code **)(*plVar10 + 0x48))(plVar10);
      iVar8 = FUN_1400fda10(lVar13,4,1);
      if (iVar8 + iVar18 < 0) {
        iVar8 = 0;
      }
      else {
        plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
        iVar18 = (**(code **)(*plVar10 + 0x48))(plVar10);
        iVar8 = FUN_1400fda10(lVar13,4,1);
        iVar8 = iVar8 + iVar18;
      }
      FUN_140104140(lVar13,4,iVar8,1);
      plVar10 = (longlong *)FUN_140087d40();
      local_7c0 = (uint *)((ulonglong)local_7c0._4_4_ << 0x20);
      local_7c8 = (uint *)((ulonglong)local_7c8._4_4_ << 0x20);
      (**(code **)(*plVar10 + 0x130))(plVar10,param_4,lVar13,3);
      return true;
    }
    break;
  case 0x203:
    plVar10 = (longlong *)FUN_140087d40();
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x60))(plVar10);
    if (plVar10 != (longlong *)0x0) {
      local_738 = 0;
      local_730 = 0;
      local_734 = 0;
      local_258[0] = '\0';
      memset(local_258 + 1,0,0xff);
      local_7c0 = (uint *)&local_734;
      local_7c8 = (uint *)&local_730;
      iVar18 = sscanf(param_3,"%d %s %d %d");
      if (2 < iVar18) {
        FUN_140188880(param_4,param_6);
        iVar18 = _stricmp("set",local_258);
        if (iVar18 == 0) {
          if ((local_738 == 0x13) && (iVar18 = FUN_1400fda10(plVar10,0x13,1), iVar18 != local_730)) {
            uVar5 = FUN_1400fda10(plVar10,0x13,1);
            plVar12 = (longlong *)(**(code **)(*(longlong *)*local_6b8 + 0x20))((longlong *)*local_6b8,&DAT_14094da3c);
            uVar6 = (**(code **)(*plVar12 + 0x40))(plVar12);
            uVar7 = FUN_1400fda10(plVar10,1,1);
            FUN_1400fda10(plVar10,2,1);
            (**(code **)(*plVar10 + 8))(plVar10);
            local_7a8 = (int *)CONCAT44(local_7a8._4_4_,7);
            local_7b0 = (uint *)CONCAT44(local_7b0._4_4_,uVar6);
            local_7b8 = (uint *)CONCAT44(local_7b8._4_4_,uVar7);
            local_7c0 = (uint *)CONCAT44(local_7c0._4_4_,uVar5);
            local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,local_730);
            tq::MyLogSave("gmlog/EquipmentLockStatus","item id:%u owner id:%u lock status:%d org lock status:%d item type:%d action id:%u Change Flag From:%d");
          }
          FUN_140104140(plVar10,local_738,local_730,1);
          if (local_734 != 0) {
            plVar12 = (longlong *)FUN_140087d40();
            lVar13 = *plVar12;
            uVar5 = (**(code **)(*param_4 + 8))(param_4);
            local_7c0 = (uint *)((ulonglong)local_7c0 & 0xffffffff00000000);
            local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,uVar5);
            (**(code **)(lVar13 + 0x130))(plVar12,param_4,plVar10,3);
          }
          return true;
        }
        iVar18 = _stricmp("+=",local_258);
        if (iVar18 == 0) {
          if (local_738 == 0x13) {
            iVar18 = FUN_1400fda10(plVar10,0x13,1);
            plVar12 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
            uVar5 = (**(code **)(*plVar12 + 0x40))(plVar12);
            uVar6 = FUN_1400fda10(plVar10,1,1);
            iVar8 = iVar18 + local_730;
            FUN_1400fda10(plVar10,2,1);
            (**(code **)(*plVar10 + 8))(plVar10);
            local_7a8 = (int *)CONCAT44(local_7a8._4_4_,8);
            local_7b0 = (uint *)CONCAT44(local_7b0._4_4_,uVar5);
            local_7b8 = (uint *)CONCAT44(local_7b8._4_4_,uVar6);
            local_7c0 = (uint *)CONCAT44(local_7c0._4_4_,iVar18);
            local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,iVar8);
            tq::MyLogSave("gmlog/EquipmentLockStatus","item id:%u owner id:%u lock status:%d org lock status:%d item type:%d action id:%u Change Flag From:%d");
          }
          iVar18 = FUN_1400fda10(plVar10,local_738,1);
          FUN_140104140(plVar10,local_738,iVar18 + local_730,1);
          if (local_734 != 0) {
            plVar12 = (longlong *)FUN_140087d40();
            lVar13 = *plVar12;
            uVar5 = (**(code **)(*param_4 + 8))(param_4);
            local_7c0 = (uint *)((ulonglong)local_7c0 & 0xffffffff00000000);
            local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,uVar5);
            (**(code **)(lVar13 + 0x130))(plVar12,param_4,plVar10,3);
          }
          return true;
        }
        iVar18 = _stricmp("==",local_258);
        if (iVar18 == 0) {
          iVar18 = FUN_1400fda10(plVar10,local_738,1);
          return iVar18 == local_730;
        }
        iVar18 = _stricmp(">=",local_258);
        if (iVar18 == 0) {
          iVar18 = FUN_1400fda10(plVar10,local_738,1);
          return local_730 <= iVar18;
        }
      }
      plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar10 + 0x40))(plVar10);
      log_InlineLogDBERROR(&DAT_14070c010);
    }
    break;
  case 0x204:
    local_72c = 0;
    local_734 = 0;
    local_738 = 0;
    local_730 = 0;
    local_258[0] = '\0';
    memset(local_258 + 1,0,0xff);
    local_7b8 = &local_738;
    local_7c0 = (uint *)&local_734;
    local_7c8 = (uint *)local_258;
    iVar18 = sscanf(param_3,"%d %u %s %d to %d");
    if (iVar18 == 5) {
      lVar13 = 2;
      bVar19 = true;
      pcVar11 = ">";
      pcVar16 = local_258;
      do {
        if (lVar13 == 0) break;
        lVar13 = lVar13 + -1;
        bVar19 = *pcVar11 == *pcVar16;
        pcVar11 = pcVar11 + 1;
        pcVar16 = pcVar16 + 1;
      } while (bVar19);
      if (bVar19) {
        uVar15 = 1;
      }
      else {
        lVar13 = 3;
        pcVar11 = ">=";
        pcVar16 = local_258;
        do {
          if (lVar13 == 0) break;
          lVar13 = lVar13 + -1;
          bVar19 = *pcVar11 == *pcVar16;
          pcVar11 = pcVar11 + 1;
          pcVar16 = pcVar16 + 1;
        } while (bVar19);
        if (bVar19) {
          uVar15 = 2;
        }
        else {
          lVar13 = 2;
          pcVar11 = "<";
          pcVar16 = local_258;
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            bVar19 = *pcVar11 == *pcVar16;
            pcVar11 = pcVar11 + 1;
            pcVar16 = pcVar16 + 1;
          } while (bVar19);
          if (bVar19) {
            uVar15 = 3;
          }
          else {
            lVar13 = 3;
            pcVar11 = "<=";
            pcVar16 = local_258;
            do {
              if (lVar13 == 0) break;
              lVar13 = lVar13 + -1;
              bVar19 = *pcVar11 == *pcVar16;
              pcVar11 = pcVar11 + 1;
              pcVar16 = pcVar16 + 1;
            } while (bVar19);
            uVar15 = 0;
            if (bVar19) {
              uVar15 = 4;
            }
          }
        }
      }
      if (8 < (int)local_738) {
        local_738 = 8;
      }
      if ((int)local_738 < 0) {
        local_738 = 0;
      }
      local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,local_734);
      iVar18 = FUN_14033ea80(param_4,local_72c,local_730,uVar15);
      if (iVar18 == -1) {
        return false;
      }
      FUN_140164520(param_4,local_738,(longlong)iVar18);
      return true;
    }
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar10 + 0x40))(plVar10);
    log_InlineLogDBERROR(&DAT_14070c010);
    break;
  case 0x205:
    local_72c = 0;
    local_730 = 0;
    local_738 = 0;
    local_734 = 0;
    local_258[0] = '\0';
    memset(local_258 + 1,0,0xff);
    local_7b8 = (uint *)&local_734;
    local_7c0 = &local_738;
    local_7c8 = (uint *)local_258;
    iVar18 = sscanf(param_3,"%d %d %s %d %d");
    if (iVar18 < 4) {
      plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar10 + 0x40))(plVar10);
      log_InlineLogDBERROR(&DAT_14070c010);
    }
    else {
      plVar10 = (longlong *)FUN_140087d40();
      lVar13 = *plVar10;
      uVar5 = FUN_14032b4b0(param_4,local_72c);
      plVar10 = (longlong *)(**(code **)(lVar13 + 0x60))(plVar10,uVar5);
      if (plVar10 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        FUN_140188880(param_4,uVar5);
        iVar18 = _stricmp("set",local_258);
        if (iVar18 == 0) {
          if ((local_730 == 0x13) && (uVar9 = FUN_1400fda10(plVar10,0x13,1), uVar9 != local_738)) {
            uVar5 = FUN_1400fda10(plVar10,0x13,1);
            plVar12 = (longlong *)(**(code **)(*(longlong *)*local_6b8 + 0x20))((longlong *)*local_6b8,&DAT_14094da3c);
            uVar6 = (**(code **)(*plVar12 + 0x40))(plVar12);
            uVar7 = FUN_1400fda10(plVar10,1,1);
            FUN_1400fda10(plVar10,2,1);
            (**(code **)(*plVar10 + 8))(plVar10);
            local_7a8 = (int *)CONCAT44(local_7a8._4_4_,5);
            local_7b0 = (uint *)CONCAT44(local_7b0._4_4_,uVar6);
            local_7b8 = (uint *)CONCAT44(local_7b8._4_4_,uVar7);
            local_7c0 = (uint *)CONCAT44(local_7c0._4_4_,uVar5);
            local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,local_738);
            tq::MyLogSave("gmlog/EquipmentLockStatus","item id:%u owner id:%u lock status:%d org lock status:%d item type:%d action id:%u Change Flag From:%d");
          }
          FUN_140104140(plVar10,local_730,local_738,1);
          FUN_140194390(param_4);
          if (local_734 != 0) {
            plVar12 = (longlong *)FUN_140087d40();
            local_7c0 = (uint *)((ulonglong)local_7c0 & 0xffffffff00000000);
            local_7c8 = (uint *)((ulonglong)local_7c8 & 0xffffffff00000000);
            (**(code **)(*plVar12 + 0x130))(plVar12,param_4,plVar10,3);
          }
          return true;
        }
        iVar18 = _stricmp("+=",local_258);
        if (iVar18 == 0) {
          if (local_730 == 0x13) {
            iVar18 = FUN_1400fda10(plVar10,0x13,1);
            plVar12 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
            uVar5 = (**(code **)(*plVar12 + 0x40))(plVar12);
            uVar6 = FUN_1400fda10(plVar10,1,1);
            iVar8 = iVar18 + local_738;
            FUN_1400fda10(plVar10,2,1);
            (**(code **)(*plVar10 + 8))(plVar10);
            local_7a8 = (int *)CONCAT44(local_7a8._4_4_,6);
            local_7b0 = (uint *)CONCAT44(local_7b0._4_4_,uVar5);
            local_7b8 = (uint *)CONCAT44(local_7b8._4_4_,uVar6);
            local_7c0 = (uint *)CONCAT44(local_7c0._4_4_,iVar18);
            local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,iVar8);
            tq::MyLogSave("gmlog/EquipmentLockStatus","item id:%u owner id:%u lock status:%d org lock status:%d item type:%d action id:%u Change Flag From:%d");
          }
          iVar18 = FUN_1400fda10(plVar10,local_730,1);
          FUN_140104140(plVar10,local_730,iVar18 + local_738,1);
          if (local_734 != 0) {
            plVar12 = (longlong *)FUN_140087d40();
            local_7c0 = (uint *)((ulonglong)local_7c0 & 0xffffffff00000000);
            local_7c8 = (uint *)((ulonglong)local_7c8 & 0xffffffff00000000);
            (**(code **)(*plVar12 + 0x130))(plVar12,param_4,plVar10,3);
          }
          return true;
        }
        iVar18 = _stricmp("==",local_258);
        if (iVar18 == 0) {
          uVar9 = FUN_1400fda10(plVar10,local_730,1);
          return uVar9 == local_738;
        }
        iVar18 = _stricmp(">=",local_258);
        if (iVar18 == 0) {
          iVar18 = FUN_1400fda10(plVar10,local_730,1);
          return (int)local_738 <= iVar18;
        }
      }
    }
    break;
  case 0x206:
    iVar18 = 0;
    local_734 = 0;
    local_708 = 0;
    local_704 = 0;
    local_700[0] = '\0';
    local_6fc = 0;
    local_6f8 = 0;
    local_6f4 = 0;
    local_6f0 = 0;
    local_6ec = 0;
    local_6e8 = 0;
    local_6e4 = 0;
    local_6e0 = 0;
    local_6dc = 0;
    local_6d8 = 0;
    local_6d4 = 0;
    local_6d0 = 0;
    local_6cc = 0;
    local_6c8 = 0;
    local_6c4 = 0;
    local_6c0 = 0;
    local_6bc = 3;
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    local_708 = (**(code **)(*plVar10 + 0x48))(plVar10);
    local_748 = &local_6fc;
    local_750 = &local_734;
    local_758 = &local_6f8;
    local_760 = (undefined8 *)&local_6f4;
    local_768 = (undefined8 *)&local_6e4;
    local_770 = &local_6f0;
    local_778 = (uint *)local_700;
    local_780 = &local_6bc;
    local_788 = &local_6c4;
    local_790 = &local_6e8;
    local_798 = &local_6ec;
    local_7a0 = &local_6d0;
    local_7a8 = &local_6d4;
    local_7b0 = &local_6e0;
    local_7b8 = &local_6d8;
    local_7c0 = &local_6dc;
    local_7c8 = &local_6c0;
    sscanf(param_3,"%d %d %d %d %d %d %d %d %u %u %u %u %u %d %d %d %d %d %d");
    if (local_734 == 0) {
      uVar3 = FUN_14011cf20(param_1,param_4,&local_708,local_720);
      return (bool)uVar3;
    }
    if (0 < local_734) {
      if (0 < local_734) {
        do {
          cVar4 = FUN_14011cf20(param_1,param_4,&local_708,local_720);
          if (cVar4 == '\0') {
            return true;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < local_734);
      }
      return true;
    }
    break;
  case 0x207:
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar5 = (**(code **)(*plVar10 + 0x48))(plVar10);
    cVar4 = FUN_1403408c0(param_4,uVar5);
    if (cVar4 != '\0') {
      return true;
    }
    break;
  case 0x208:
    local_728[0] = 0;
    local_72c = 0;
    local_708 = 0;
    local_704 = 0;
    local_700[0] = '\0';
    local_6fc = 0;
    local_6f8 = 0;
    local_6f4 = 0;
    local_6f0 = 0;
    local_6ec = 0;
    local_6e8 = 0;
    local_6e4 = 0;
    local_6e0 = 0;
    local_6dc = 0;
    local_6d8 = 0;
    local_6d4 = 0;
    local_6d0 = 0;
    local_6cc = 0;
    local_6c8 = 0;
    local_6c4 = 0;
    local_6c0 = 0;
    local_6bc = 3;
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    local_708 = (**(code **)(*plVar10 + 0x48))(plVar10);
    local_748 = &local_6fc;
    local_750 = &local_6f8;
    local_758 = &local_6f4;
    local_760 = (undefined8 *)&local_6e4;
    local_768 = (undefined8 *)&local_6f0;
    local_770 = (int *)local_700;
    local_778 = &local_6bc;
    local_780 = &local_6c4;
    local_788 = &local_6e8;
    local_790 = &local_6ec;
    local_798 = &local_6d0;
    local_7a0 = &local_6d4;
    local_7a8 = &local_6e0;
    local_7b0 = &local_6d8;
    local_7b8 = &local_6dc;
    local_7c0 = &local_6c0;
    local_7c8 = &local_6c8;
    sscanf(param_3,"%d %d %d %d %d %d %d %d %d %u %u %u %u %u %d %d %d %d %d");
    cVar4 = FUN_14011cf20(param_1,param_4,&local_708,&local_72c);
    if (cVar4 != '\0') {
      FUN_1403865d0(local_688);
      iVar18 = FUN_140386650(local_688,1,local_72c,local_728[0]);
      if (iVar18 != 0) {
        (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_688);
      }
      FUN_140386620(local_688);
      return true;
    }
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar10 + 0x40))(plVar10);
    log_InlineLogDBERROR(&DAT_14070d270);
    break;
  default:
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    (**(code **)(*plVar10 + 0x48))(plVar10);
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar10 + 0x40))(plVar10);
    log_InlineLogDBERROR(&DAT_14070c140);
    break;
  case 0x210:
    plVar10 = (longlong *)FUN_140118320();
    if (plVar10 != (longlong *)0x0) {
      lVar13 = *plVar10;
      uVar5 = (**(code **)(*param_4 + 8))(param_4);
      iVar18 = (**(code **)(lVar13 + 0x28))(plVar10,uVar5);
      if (iVar18 != 0) {
        (**(code **)(*plVar10 + 0x88))(plVar10,iVar18);
      }
    }
    plVar10 = (longlong *)FUN_140087d40();
    plVar12 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar5 = (**(code **)(*plVar12 + 0x48))(plVar12);
    lVar13 = *plVar10;
    local_7b8 = (uint *)CONCAT71(local_7b8._1_7_,1);
    local_7c0 = (uint *)((ulonglong)local_7c0._4_4_ << 0x20);
    local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,1);
    uVar5 = FUN_14034a8d0(param_4,uVar5,0,1);
    lVar13 = (**(code **)(lVar13 + 0x60))(plVar10,uVar5);
    if (lVar13 != 0) {
      local_728[0] = 0;
      local_734 = 0;
      local_710[0] = 0;
      local_72c = 0;
      local_738 = 0;
      local_730 = 0;
      local_718 = 0;
      local_714 = 0;
      local_720[0] = 0;
      local_798 = local_720;
      local_7a0 = &local_714;
      local_7a8 = &local_718;
      local_7b0 = (uint *)&local_730;
      local_7b8 = &local_738;
      local_7c0 = &local_72c;
      local_7c8 = (uint *)local_710;
      iVar18 = sscanf(param_3,"%d %d %d %d %d %d %d %d %d");
      if (iVar18 == 9) {
        if (local_728[0] != 0) {
          FUN_140104140(lVar13,4,local_728[0],0);
        }
        if (local_734 != 0) {
          FUN_140104140(lVar13,5);
          uVar5 = FUN_140385cf0(param_4,1,local_734);
          FUN_140104140(lVar13,0xd,uVar5);
        }
        if (local_72c != 0) {
          FUN_140104140(lVar13,8);
        }
        if (local_738 != 0) {
          FUN_140104140(lVar13,9);
        }
        if (local_730 != 0) {
          FUN_140104140(lVar13,10);
        }
        if (local_718 != 0) {
          FUN_140104140(lVar13,0xb);
        }
        if (local_714 != 0) {
          FUN_140104140(lVar13,0xc);
        }
        FUN_140117670(lVar13,local_710[0] != 0,1);
      }
      plVar10 = (longlong *)FUN_140087d40();
      local_7c0 = (uint *)((ulonglong)local_7c0 & 0xffffffff00000000);
      local_7c8 = (uint *)((ulonglong)local_7c8 & 0xffffffff00000000);
      (**(code **)(*plVar10 + 0x130))(plVar10,param_4,lVar13,3);
      return true;
    }
    break;
  case 0x211:
    local_738 = 0;
    local_734 = 0;
    iVar18 = sscanf(param_3,"%d %d");
    if (((iVar18 == 2) && (local_738 != 0)) && (local_734 != 0)) {
      local_6b8 = (longlong *)FUN_14032b450(param_4);
      local_720[0] = FUN_140385cf0(param_4,1,local_738);
      puVar17 = (undefined4 *)local_6b8[3];
      if ((undefined4 *)local_6b8[4] < puVar17) {
        _invalid_parameter_noinfo();
      }
      plVar10 = (longlong *)*local_6b8;
      local_698 = plVar10;
      while( true ) {
        puVar1 = (undefined4 *)local_6b8[4];
        if (puVar1 < (undefined4 *)local_6b8[3]) {
          _invalid_parameter_noinfo();
        }
        if ((plVar10 == (longlong *)0x0) || (plVar10 != (longlong *)*local_6b8)) {
          _invalid_parameter_noinfo();
        }
        if (puVar17 == puVar1) break;
        plVar12 = (longlong *)FUN_140087d40();
        if (plVar10 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = 0;
        }
        else {
          lVar13 = *plVar10;
        }
        if (*(undefined4 **)(lVar13 + 0x20) <= puVar17) {
          _invalid_parameter_noinfo();
        }
        plVar10 = (longlong *)(**(code **)(*plVar12 + 0x60))(plVar12,*puVar17);
        if (plVar10 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          iVar18 = (**(code **)(*plVar12 + 0x48))(plVar12);
          iVar8 = FUN_1400fda10(plVar10,1,1);
          if (((iVar8 == iVar18) && (iVar18 = FUN_1400fda10(plVar10,0xd,1), local_734 <= (int)(local_720[0] - iVar18))) &&
             (uVar9 = FUN_1400fda10(plVar10,5,1), uVar9 == local_738)) {
            uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
            cVar4 = FUN_140340190(param_4,uVar5,1,1);
            if (cVar4 != '\0') {
              return true;
            }
          }
        }
        plVar10 = local_698;
        if (local_698 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = 0;
        }
        else {
          lVar13 = *local_698;
        }
        if (*(undefined4 **)(lVar13 + 0x20) <= puVar17) {
          _invalid_parameter_noinfo();
        }
        puVar17 = puVar17 + 1;
      }
    }
    break;
  case 0x212:
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar18 = (**(code **)(*plVar10 + 0x48))(plVar10);
    if (((iVar18 < 1) || (0x13 < iVar18)) && (8 < iVar18 - 0x15U)) {
      plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar10 + 0x40))(plVar10);
      local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,0x1450);
      log_InlineLogDBERROR(&DAT_14070d200);
      return false;
    }
    cVar4 = FUN_14034ec60(param_4,iVar18,1,0);
    return cVar4 != '\0';
  case 0x21c:
    local_718 = 0;
    local_714 = 0;
    local_710[0] = 0;
    local_7c8 = (uint *)local_710;
    iVar18 = sscanf(param_3,"%u %d %d");
    if ((iVar18 == 2) && (-1 < local_714)) {
      local_7c0 = (uint *)CONCAT71(local_7c0._1_7_,local_710[0] == 1);
      local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,1);
      uVar3 = FUN_140338940(param_4,local_718,local_718);
      return (bool)uVar3;
    }
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar10 + 0x40))(plVar10);
    log_InlineLogDBERROR(&DAT_14070c010);
    return false;
  case 0x21d:
    local_718 = 0;
    local_714 = 0;
    local_710[0] = 0;
    local_7c8 = (uint *)local_710;
    iVar18 = sscanf(param_3,"%u %d %d");
    if ((iVar18 == 2) && (-1 < local_714)) {
      if (local_714 != 0) {
        local_7c0 = (uint *)CONCAT71(local_7c0._1_7_,local_710[0] == 1);
        local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,1);
        uVar3 = FUN_140350360(param_4,local_718,local_718);
        return (bool)uVar3;
      }
      plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar10 + 0x40))(plVar10);
      log_InlineLogDBERROR(&DAT_14070d420);
      return false;
    }
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar10 + 0x40))(plVar10);
    log_InlineLogDBERROR(&DAT_14070c010);
    return false;
  case 0x21e:
    local_69c = 0;
    local_698 = (longlong *)((ulonglong)local_698._4_4_ << 0x20);
    local_6b8 = (longlong *)((ulonglong)local_6b8._4_4_ << 0x20);
    local_720[0] = 0;
    local_730 = 0;
    local_734 = 0;
    local_72c = 0;
    local_728[0] = 0;
    local_718 = 0;
    local_6a0 = 0;
    local_714 = 0;
    local_710[0] = 0;
    local_6ac = 0;
    local_6a8 = 0;
    local_6b0 = 0;
    local_738 = 0;
    local_6a4 = 3;
    local_758 = local_720;
    local_760 = &local_6b8;
    local_768 = &local_698;
    local_770 = &local_69c;
    local_778 = &local_738;
    local_780 = &local_6a4;
    local_788 = &local_6b0;
    local_790 = &local_6a8;
    local_798 = (uint *)&local_6ac;
    local_7a0 = &local_730;
    local_7a8 = &local_734;
    local_7b0 = &local_72c;
    local_7b8 = (uint *)local_728;
    local_7c0 = (uint *)&local_718;
    local_7c8 = (uint *)&local_6a0;
    sscanf(param_3,"%d %d %d %d %d %d %d %d %u %u %u %u %u %d %d %d %d");
    if (((local_738 != 1) && (local_738 != 2)) && (local_738 != 3)) {
      local_738 = *(uint *)(param_1 + 0x1c);
    }
    plVar10 = (longlong *)FUN_140087d40();
    plVar12 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar5 = (**(code **)(*plVar12 + 0x48))(plVar12);
    lVar13 = *plVar10;
    local_7b8 = (uint *)CONCAT71(local_7b8._1_7_,1);
    local_7c0 = (uint *)((ulonglong)local_7c0 & 0xffffffff00000000);
    local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,1);
    uVar5 = FUN_14034a8d0(param_4,uVar5,(undefined2)local_738,1);
    plVar10 = (longlong *)(**(code **)(lVar13 + 0x60))(plVar10,uVar5);
    if (plVar10 != (longlong *)0x0) {
      if (local_710[0] != 0) {
        FUN_140104140(plVar10,4,local_710[0],0);
      }
      if (local_714 != 0) {
        FUN_140104140(plVar10,5);
      }
      if (local_718 != 0) {
        FUN_140104140(plVar10,8);
      }
      if (local_728[0] != 0) {
        FUN_140104140(plVar10,9);
      }
      if (local_72c != 0) {
        FUN_140104140(plVar10,10);
      }
      if (local_734 != 0) {
        FUN_140104140(plVar10,0xb);
      }
      if (local_730 != 0) {
        FUN_140104140(plVar10,0xc);
      }
      if (local_6ac != 0) {
        FUN_140104140(plVar10,0xe);
      }
      if (local_6a8 != 0) {
        FUN_140104140(plVar10,0xf);
      }
      if (local_6b0 != 0) {
        FUN_140104140(plVar10,0x10);
      }
      FUN_140104140(plVar10,0x14,local_6a4);
      FUN_140117670(plVar10,local_6a0 != 0,0);
      if (local_69c != 0) {
        FUN_140104140(plVar10,0xd);
      }
      if (0 < (int)local_698) {
        FUN_140104140(plVar10,0x15);
      }
      if (0 < (int)local_6b8) {
        uVar15 = FUN_1400fe600((ulonglong)local_6b8 & 0xffffffff,1);
        FUN_140106830(plVar10,0x18,uVar15);
        plVar12 = (longlong *)FUN_140087d40();
        lVar13 = *plVar12;
        uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        (**(code **)(lVar13 + 0x158))(plVar12,uVar5);
      }
      if (local_720[0] == 1) {
        FUN_14032daf0(param_4,plVar10);
      }
      FUN_140104080(plVar10,1);
      plVar12 = (longlong *)FUN_140087d40();
      local_7c0 = (uint *)((ulonglong)local_7c0 & 0xffffffff00000000);
      local_7c8 = (uint *)((ulonglong)local_7c8 & 0xffffffff00000000);
      (**(code **)(*plVar12 + 0x130))(plVar12,param_4,plVar10,3);
      return true;
    }
    break;
  case 0x21f:
    plVar10 = (longlong *)FUN_140087d40();
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x60))(plVar10,param_6);
    if (plVar10 == (longlong *)0x0) {
      return false;
    }
    uVar5 = FUN_1400fda10(plVar10,0x16,1);
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    cVar4 = FUN_1400ffc20(plVar10);
    if (((cVar4 == '\0') && (cVar4 = FUN_1400ff650(plVar10,2), cVar4 == '\0')) && (cVar4 = FUN_1400ff650(plVar10,1), cVar4 == '\0')) {
      uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
      cVar4 = FUN_1403380a0(param_4,uVar5);
      if ((cVar4 == '\0') && (iVar18 = FUN_1400fda10(plVar10,0x17,1), iVar18 == 0)) {
        uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        cVar4 = FUN_140340190(param_4,uVar5,1,1);
        if (cVar4 != '\0') {
          return true;
        }
      }
    }
    break;
  case 0x220:
    uVar15 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
    uVar15 = FUN_140117f70(uVar15);
    uVar3 = FUN_14020ec80(uVar15,param_4,param_6);
    return (bool)uVar3;
  case 0x221:
    local_6b8 = (longlong *)((ulonglong)local_6b8._4_4_ << 0x20);
    local_720[0] = 0;
    iVar18 = sscanf(param_3,"%d %d");
    if (iVar18 == 2) {
      uVar3 = FUN_140337ee0(param_4,(ulonglong)local_6b8 & 0xffffffff,local_720[0]);
      return (bool)uVar3;
    }
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar10 + 0x40))(plVar10);
    log_InlineLogDBERROR(&DAT_14070c010);
    break;
  case 0x222:
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar18 = (**(code **)(*plVar10 + 0x48))(plVar10);
    if ((iVar18 != 4) && (iVar18 != 5)) {
      return false;
    }
    plVar10 = (longlong *)FUN_140087d40();
    lVar13 = *plVar10;
    uVar5 = FUN_140337820(param_4,iVar18);
    lVar13 = (**(code **)(lVar13 + 0x60))(plVar10,uVar5);
    if (lVar13 != 0) {
      uVar5 = FUN_1400fda10(lVar13,1,1);
      iVar18 = FUN_1400ff680(uVar5);
      if (iVar18 == 4) {
        return true;
      }
    }
    return false;
  case 0x226:
    iVar18 = 0;
    local_708 = 0;
    local_704 = 0;
    local_700[0] = '\0';
    local_6fc = 0;
    local_6f8 = 0;
    local_6f4 = 0;
    local_6f0 = 0;
    local_6ec = 0;
    local_6e8 = 0;
    local_6e4 = 0;
    local_6e0 = 0;
    local_6dc = 0;
    local_6d8 = 0;
    local_6d4 = 0;
    local_6d0 = 0;
    local_6cc = 0;
    local_6c8 = 0;
    local_6c4 = 0;
    local_6c0 = 0;
    local_6bc = 3;
    local_720[0] = 0;
    local_738 = 0;
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    local_708 = (**(code **)(*plVar10 + 0x48))(plVar10);
    local_740 = &local_6bc;
    local_748 = &local_6c0;
    local_750 = &local_6c4;
    local_758 = &local_6c8;
    local_760 = (undefined8 *)&local_6cc;
    local_768 = (undefined8 *)&local_6d4;
    local_770 = &local_6e0;
    local_778 = &local_6d8;
    local_780 = &local_6dc;
    local_788 = &local_6d0;
    local_790 = &local_6e4;
    local_798 = &local_6e8;
    local_7a0 = &local_6ec;
    local_7a8 = &local_6f0;
    local_7b0 = &local_6f4;
    local_7b8 = &local_6f8;
    local_7c0 = &local_6fc;
    local_7c8 = (uint *)local_700;
    sscanf(param_3,"%d %d %u %d %d %d %d %u %u %d %d %d %d %d %d %d %d %u %d %u");
    bVar19 = (local_720[0] & 1) == 0;
    if (((((local_720[0] & 2) != 0) && (local_700[0] != '\x01')) && (local_700[0] != '\x02')) && (local_700[0] != '\x03')) {
      local_700[0] = *(char *)(param_1 + 0x1c);
    }
    cVar4 = FUN_140102780(local_708);
    if (cVar4 == '\0') {
      if (local_738 == 0) {
        local_738 = 1;
      }
      if (0 < (int)local_738) {
        do {
          if (bVar19) {
            cVar4 = FUN_14011cf20(param_1,param_4,&local_708,&local_6b8);
          }
          else {
            cVar4 = FUN_1401188e0(param_1,param_4,&local_708);
          }
          if (cVar4 == '\0') {
            return false;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < (int)local_738);
      }
      return true;
    }
    if (local_738 == 0) {
      local_738 = 1;
    }
    if (!bVar19) {
      local_7c8 = (uint *)CONCAT71(local_7c8._1_7_,1);
      cVar4 = FUN_140339ec0(param_4,local_708,local_738,local_700[0]);
      if (cVar4 == '\0') {
        pIVar14 = theInstance();
        lVar13 = param_4[2];
        uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_FULLBAG_NO_MORE");
        (**(code **)(lVar13 + 0x358))(param_4 + 2,uVar15);
        return false;
      }
    }
    local_7c8 = (uint *)CONCAT71(local_7c8._1_7_,1);
    iVar18 = FUN_14033fc80(param_4,local_708,local_738,&local_708);
    return iVar18 != 0;
  }
  return false;
}




undefined8 * FUN_140126b40(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1400ca6d0();
  return param_2;
}




undefined8 * FUN_140126b70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  puVar2 = (void *)0x0;
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




void FUN_140126bd0(undefined8 *param_1)

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




undefined8 * FUN_140126c10(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140126c60(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140126cb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  puVar2 = (void *)0x0;
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




void FUN_140126d10(undefined8 *param_1)

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




undefined8 * FUN_140126d50(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140126da0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140126df0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140126e40(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140126e90(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void * FUN_140126f20(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_140126f60(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  }
  return;
}




void FUN_140126fb0(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  param_2 = param_2 - (longlong)param_1;
  do {
    if (param_2 >> 2 < 2) {
      return;
    }
    uVar1 = *(uint *)((longlong)param_1 + param_2 + -4);
    lVar4 = param_2 + -4 >> 2;
    lVar2 = 2;
    lVar3 = 0;
    bVar6 = lVar4 == 2;
    *(undefined4 *)((longlong)param_1 + param_2 + -4) = *param_1;
    lVar5 = lVar3;
    if (2 < lVar4) {
      do {
        lVar3 = lVar2;
        if ((uint)param_1[lVar2] < (uint)param_1[lVar2 + -1]) {
          lVar3 = lVar2 + -1;
        }
        param_1[lVar5] = param_1[lVar3];
        lVar2 = lVar3 * 2 + 2;
        bVar6 = lVar2 == lVar4;
        lVar5 = lVar3;
      } while (lVar2 < lVar4);
    }
    if (bVar6) {
      param_1[lVar3] = param_1[lVar4 + -1];
      lVar3 = lVar4 + -1;
    }
    while (0 < lVar3) {
      lVar2 = (lVar3 + -1) / 2;
      if (uVar1 <= (uint)param_1[lVar2]) break;
      param_1[lVar3] = param_1[lVar2];
      lVar3 = lVar2;
    }
    param_2 = param_2 + -4;
    param_1[lVar3] = uVar1;
  } while( true );
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140127070(longlong param_1,undefined8 *param_2,char *param_3,longlong *param_4,longlong *param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined1 auStack_1f8 [32];
  uint *local_1d8;
  uint local_1c8;
  int local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0 [3];
  undefined4 *local_198;
  undefined4 *local_190;
  undefined8 local_188;
  longlong local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong *local_168;
  char local_158;
  undefined1 local_157 [255];
  ulonglong local_58;
  
  local_170 = 0xfffffffffffffffe;
  local_58 = DAT_1409707c0 ^ (ulonglong)auStack_1f8;
  local_180 = param_1;
  if (param_2 == (undefined8 *)0x0) {
    local_1d8 = (uint *)CONCAT44(local_1d8._4_4_,0x611);
    log_InlineLogERROR(&DAT_1406d9c10);
    return 0;
  }
  if (param_5 == (longlong *)0x0) {
    return 0;
  }
  plVar9 = (longlong *)0x0;
  local_1b8 = 0;
  cVar3 = (**(code **)(*param_5 + 0x298))(param_5,0x1002,&local_1b8);
  if (cVar3 == '\0') {
    plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar9 + 0x40))(plVar9);
    log_InlineLogDBERROR(&DAT_14070d800);
    return 0;
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))();
  iVar4 = (**(code **)(*plVar10 + 0x48))(plVar10);
  if (iVar4 == 0x321) {
    local_158 = '\0';
    memset(local_157,0,0xff);
    iVar4 = sscanf(param_3,"%s");
    if (iVar4 == 1) {
      iVar4 = _stricmp(&local_158,"dropitem");
      if (iVar4 == 0) {
        local_1c8 = 0;
        iVar4 = sscanf(param_3,"%s %u");
        if (iVar4 == 2) {
          iVar4 = _stricmp(&local_158,"dropitem");
          if (iVar4 == 0) {
            if (param_4 != (longlong *)0x0) {
              uVar7 = (**(code **)(*param_4 + 8))(param_4);
              plVar9 = (longlong *)(ulonglong)uVar7;
            }
            cVar3 = FUN_14038a790(local_1b8,local_1c8,plVar9);
            if (cVar3 != '\0') {
              return 1;
            }
          }
        }
        else {
          plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
          (**(code **)(*plVar9 + 0x40))(plVar9);
          log_InlineLogDBERROR(&DAT_14070c010);
        }
      }
      else {
        iVar4 = _stricmp(&local_158,"dropmoney");
        if (iVar4 == 0) {
          local_1c4 = 0;
          local_1c8 = 0;
          local_1d8 = &local_1c8;
          iVar4 = sscanf(param_3,"%s %u %u");
          if (iVar4 == 2) {
            local_1c8 = 100;
          }
          else {
            if (iVar4 != 3) {
              plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
              (**(code **)(*plVar9 + 0x40))(plVar9);
              log_InlineLogDBERROR(&DAT_14070c010);
              return 0;
            }
            local_1c8 = local_1c8 % 100;
          }
          iVar4 = tq::RandGet(100 - local_1c8);
          uVar7 = ((iVar4 + local_1c8) * local_1c4) / 100;
          if (uVar7 == 0) {
            return 0;
          }
          if (param_4 != (longlong *)0x0) {
            uVar8 = (**(code **)(*param_4 + 8))(param_4);
            plVar9 = (longlong *)(ulonglong)uVar8;
          }
          cVar3 = FUN_14038a560(local_1b8,uVar7,plVar9);
          if (cVar3 != '\0') {
            return 1;
          }
        }
      }
    }
    else {
      plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar9 + 0x40))(plVar9);
      log_InlineLogDBERROR(&DAT_14070c010);
    }
  }
  else {
    if (iVar4 == 0x322) {
      local_1c8 = 0;
      local_1c4 = 0;
      local_1c0 = 0;
      local_1d8 = (uint *)&local_1c0;
      iVar4 = sscanf(param_3,"%d %d %I64d");
      if (iVar4 != 3) {
        plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar9 + 0x40))(plVar9);
        log_InlineLogDBERROR(&DAT_14070c010);
        return 0;
      }
      if ((((local_1c4 < (int)local_1c8) && (local_1c4 != 0)) || ((int)local_1c8 < 0)) || (local_1c4 < 0)) {
        plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar9 + 0x40))(plVar9);
        log_InlineLogDBERROR(&DAT_14070d780);
        return 0;
      }
      plVar10 = (longlong *)(**(code **)(*param_5 + 0x160))(param_5);
      if (plVar10 == (longlong *)0x0) {
        local_1d8 = (uint *)CONCAT44(local_1d8._4_4_,0x675);
        log_InlineLogERROR(&DAT_1406d9c10);
        return 0;
      }
      plVar11 = (longlong *)FUN_140118320();
      if (plVar11 != (longlong *)0x0) {
        local_178 = operator_new(8);
        local_1b0[0] = plVar9;
        if (local_178 != (longlong *)0x0) {
          *local_178 = (longlong)local_1b0;
          local_1b0[0] = local_178;
        }
        local_198 = (undefined4 *)0x0;
        local_190 = (undefined4 *)0x0;
        local_188 = 0;
        lVar14 = *plVar11;
        local_168 = local_178;
        uVar5 = (**(code **)(*param_4 + 8))(param_4);
        cVar3 = (**(code **)(lVar14 + 0x38))(plVar11,uVar5,local_1b0);
        puVar15 = local_198;
        if (cVar3 != '\0') {
          plVar11 = local_1b0[0];
          if (local_190 < local_198) {
            _invalid_parameter_noinfo();
            plVar11 = local_1b0[0];
          }
          do {
            puVar2 = local_190;
            if (local_190 < local_198) {
              _invalid_parameter_noinfo();
            }
            if ((plVar11 == (longlong *)0x0) || (plVar11 != local_1b0[0])) {
              _invalid_parameter_noinfo();
            }
            if (puVar2 <= puVar15) {
              if (local_198 != (undefined4 *)0x0) {
                operator_delete(local_198);
              }
              local_198 = (undefined4 *)0x0;
              local_190 = (undefined4 *)0x0;
              local_188 = 0;
              operator_delete(local_1b0[0]);
              return 1;
            }
            if (plVar11 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar13 = plVar9;
            }
            else {
              plVar13 = (longlong *)*plVar11;
            }
            if ((undefined4 *)plVar13[4] <= puVar15) {
              _invalid_parameter_noinfo();
            }
            uVar5 = *puVar15;
            uVar12 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
            plVar13 = (longlong *)FUN_140087650(uVar12);
            lVar14 = (**(code **)(*plVar13 + 0x98))(plVar13,uVar5);
            if (lVar14 != 0) {
              if (local_1c8 == 0) {
                if ((local_1c4 == 0) || (iVar4 = (**(code **)(*(longlong *)(lVar14 + 0x10) + 0x70))(), iVar4 <= local_1c4)) goto LAB_140127407;
              }
              else if (local_1c4 == 0) {
                iVar4 = (**(code **)(*(longlong *)(lVar14 + 0x10) + 0x70))();
                if ((int)local_1c8 <= iVar4) {
LAB_140127407:
                  iVar4 = (**(code **)(*plVar10 + 8))(plVar10);
                  iVar6 = (**(code **)(*(longlong *)(lVar14 + 0x10) + 0x168))(lVar14 + 0x10);
                  if (iVar4 == iVar6) {
                    lVar1 = *(longlong *)(lVar14 + 0x10);
                    uVar12 = (**(code **)(*param_5 + 0x2a0))(param_5);
                    iVar4 = (**(code **)(lVar1 + 0x150))(lVar14 + 0x10,uVar12);
                    if (iVar4 < 0x13) {
                      FUN_1401669f0(lVar14,local_1c0,0);
                    }
                  }
                }
              }
              else {
                iVar4 = (**(code **)(*(longlong *)(lVar14 + 0x10) + 0x70))(lVar14 + 0x10);
                if (((int)local_1c8 <= iVar4) && (iVar4 = (**(code **)(*(longlong *)(lVar14 + 0x10) + 0x70))(lVar14 + 0x10), iVar4 <= local_1c4))
                goto LAB_140127407;
              }
            }
            if (plVar11 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar13 = plVar9;
            }
            else {
              plVar13 = (longlong *)*plVar11;
            }
            if ((undefined4 *)plVar13[4] <= puVar15) {
              _invalid_parameter_noinfo();
            }
            puVar15 = puVar15 + 1;
            param_1 = local_180;
          } while( true );
        }
        if (local_198 != (undefined4 *)0x0) {
          operator_delete(local_198);
        }
        local_198 = (undefined4 *)0x0;
        local_190 = (undefined4 *)0x0;
        local_188 = 0;
        operator_delete(local_1b0[0]);
      }
      if (local_1c8 == 0) {
        if ((local_1c4 != 0) && (iVar4 = (**(code **)(param_4[2] + 0x70))(), local_1c4 < iVar4)) {
          return 1;
        }
      }
      else if (local_1c4 == 0) {
        iVar4 = (**(code **)(param_4[2] + 0x70))();
        if (iVar4 < (int)local_1c8) {
          return 1;
        }
      }
      else {
        iVar4 = (**(code **)(param_4[2] + 0x70))(param_4 + 2);
        if ((iVar4 < (int)local_1c8) || (iVar4 = (**(code **)(param_4[2] + 0x70))(param_4 + 2), local_1c4 < iVar4)) {
          return 1;
        }
      }
      FUN_1401669f0(param_4,local_1c0,0);
      return 1;
    }
    plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    (**(code **)(*plVar9 + 0x48))(plVar9);
    log_InlineLogDBERROR(&DAT_14070d7d0);
  }
  return 0;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140127820(longlong param_1,undefined8 *param_2,char *param_3,undefined8 param_4,longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  IStringManager *pIVar11;
  longlong lVar12;
  char *pcVar13;
  undefined1 auStack_668 [32];
  int *local_648;
  undefined4 *local_640;
  int *local_638;
  undefined8 local_630;
  undefined8 local_628;
  uint local_620;
  undefined1 local_618;
  int local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  int local_5f4;
  longlong local_5f0;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined8 uStack_5d0;
  undefined1 local_5c8 [4];
  undefined4 local_5c4;
  int local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined2 local_5b4;
  undefined2 local_5b2;
  undefined2 local_5ae;
  undefined1 local_5ac;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined8 local_578;
  undefined1 local_570 [24];
  undefined1 local_558 [1072];
  char local_128 [256];
  ulonglong local_28;
  
  local_578 = 0xfffffffffffffffe;
  local_28 = DAT_1409707c0 ^ (ulonglong)auStack_668;
  if (param_2 == (undefined8 *)0x0) {
    local_648 = (int *)CONCAT44(local_648._4_4_,0x1575);
    log_InlineLogERROR(&DAT_1406d9c10);
  }
  else {
    cVar4 = (**(code **)(*param_5 + 0x298))(param_5,0x1040,&local_5f0);
    if (cVar4 == '\0') {
      local_648 = (int *)CONCAT44(local_648._4_4_,0x1578);
      log_InlineLogERROR(&DAT_1406d9c10);
    }
    else {
      plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
      iVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
      if (iVar6 == 0x259) {
        local_608 = 0;
        local_604 = 0;
        local_5fc = 0;
        local_600 = 0;
        local_5f8 = 0;
        local_128[0] = '\0';
        memset(local_128 + 1,0,0xff);
        local_630 = local_128;
        local_638 = &local_5f8;
        local_640 = &local_604;
        local_648 = &local_608;
        iVar6 = sscanf(param_3,"%d %d %u %u %d %s");
        if (3 < iVar6) {
          iVar6 = tq::NameStrCheck(local_128,false);
          if (iVar6 != 0) {
            uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
            cVar4 = FUN_14008a1d0(uVar10,local_128,0);
            if (cVar4 == '\0') {
              uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
              plVar9 = (longlong *)FUN_1400876b0(uVar10);
              lVar12 = *plVar9;
              uVar8 = (**(code **)(*(longlong *)(local_5f0 + 0x10) + 0x168))();
              lVar12 = (**(code **)(lVar12 + 0x20))(plVar9,uVar8,1);
              if (lVar12 != 0) {
                cVar4 = FUN_14011dbb0(lVar12);
                if (cVar4 != '\0') {
                  plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
                  (**(code **)(*plVar9 + 0x40))(plVar9);
                  (**(code **)(*(longlong *)(local_5f0 + 0x10) + 0x168))();
                  log_InlineLogDBERROR("table:cq_action/cq_newaction, ACTION %lu, map[%lu] is Arenic map, can not create monster!");
                  return 0;
                }
                cVar4 = FUN_140119540(lVar12);
                if (cVar4 != '\0') {
                  plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
                  (**(code **)(*plVar9 + 0x40))(plVar9);
                  (**(code **)(*(longlong *)(local_5f0 + 0x10) + 0x168))();
                  log_InlineLogDBERROR("table:cq_action/cq_newaction, ACTION %lu, type[%u], map[%lu] is market map, can not create monster");
                  return 0;
                }
              }
              memset(local_5c8,0,0x40);
              local_5c4 = (**(code **)(*(longlong *)(local_5f0 + 0x10) + 0x168))();
              local_5c0 = local_608;
              local_5bc = FUN_1400872b0(local_5f0,1);
              local_5b4 = (undefined2)local_5fc;
              local_5b2 = (undefined2)local_600;
              local_5ae = (undefined2)local_604;
              local_5ac = FUN_1400872b0(local_5f0,2);
              local_5b8 = local_5f8;
              lVar12 = -1;
              pcVar13 = local_128;
              do {
                if (lVar12 == 0) break;
                lVar12 = lVar12 + -1;
                cVar4 = *pcVar13;
                pcVar13 = pcVar13 + 1;
              } while (cVar4 != '\0');
              if (lVar12 != -2) {
                pIVar11 = theInstance();
                lVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"ACTIONSTR_NONE");
                pcVar13 = local_128;
                lVar12 = lVar12 - (longlong)pcVar13;
                do {
                  cVar4 = *pcVar13;
                  cVar1 = pcVar13[lVar12];
                  if (cVar4 != cVar1) break;
                  pcVar13 = pcVar13 + 1;
                } while (cVar1 != '\0');
                if (cVar4 != cVar1) {
                  uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
                  plVar9 = (longlong *)FUN_1400e1d30(uVar10);
                  uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,local_5c8,local_128);
                  return uVar5;
                }
              }
              uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
              plVar9 = (longlong *)FUN_1400e1d30(uVar10);
              uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,local_5c8,0);
              return uVar5;
            }
          }
          return 0;
        }
        plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar9 + 0x40))(plVar9);
        log_InlineLogDBERROR(&DAT_14070c010);
      }
      else if (iVar6 == 0x25a) {
        local_608 = 0;
        local_5f4 = 0;
        local_128[0] = '\0';
        memset(local_128 + 1,0,0xff);
        local_648 = (int *)local_128;
        iVar6 = sscanf(param_3,"%u %d %s");
        if (0 < iVar6) {
          plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
          (**(code **)(*plVar9 + 0x40))(plVar9);
          local_648 = (int *)CONCAT44(local_648._4_4_,0x15bb);
          tq::SysLogSave("delmonsternow","ActionID[%u] at %s, %d");
          uVar5 = 0;
          iVar6 = (**(code **)(*(longlong *)(local_5f0 + 0x10) + 0x168))();
          uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
          plVar9 = (longlong *)FUN_1400875f0(uVar10);
          plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
          (**(code **)(*plVar9 + 0x10))(plVar9,&local_5d8);
LAB_140127d10:
          do {
            do {
              uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
              plVar9 = (longlong *)FUN_1400875f0(uVar10);
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x18))(plVar9,local_570);
              if ((CONCAT44(uStack_5d4,local_5d8) == 0) || (CONCAT44(uStack_5d4,local_5d8) != *plVar9)) {
                _invalid_parameter_noinfo();
              }
              if (uStack_5d0 == (longlong *)plVar9[1]) {
                return uVar5;
              }
              local_588 = local_5d8;
              uStack_584 = uStack_5d4;
              uStack_580 = (undefined4)uStack_5d0;
              uStack_57c = uStack_5d0._4_4_;
              uVar10 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
              plVar9 = (longlong *)FUN_1400875f0(uVar10);
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,&local_588);
              if (CONCAT44(uStack_5d4,local_5d8) == 0) {
                _invalid_parameter_noinfo();
              }
              if (*(char *)((longlong)uStack_5d0 + 0x29) == '\0') {
                plVar2 = (longlong *)uStack_5d0[2];
                if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
                  cVar4 = *(char *)(*plVar2 + 0x29);
                  uStack_5d0 = plVar2;
                  plVar2 = (longlong *)*plVar2;
                  while (cVar4 == '\0') {
                    cVar4 = *(char *)(*plVar2 + 0x29);
                    uStack_5d0 = plVar2;
                    plVar2 = (longlong *)*plVar2;
                  }
                }
                else {
                  cVar4 = *(char *)(uStack_5d0[1] + 0x29);
                  plVar3 = (longlong *)uStack_5d0[1];
                  plVar2 = uStack_5d0;
                  while ((uStack_5d0 = plVar3, cVar4 == '\0' && (plVar2 == (longlong *)uStack_5d0[2]))) {
                    cVar4 = *(char *)(uStack_5d0[1] + 0x29);
                    plVar3 = (longlong *)uStack_5d0[1];
                    plVar2 = uStack_5d0;
                  }
                }
              }
              else {
                _invalid_parameter_noinfo();
              }
            } while (((plVar9 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar9 + 0x298))(plVar9,0x1002,&local_5e8), cVar4 == '\0')) ||
                    (iVar7 = (**(code **)(*(longlong *)(CONCAT44(uStack_5e4,local_5e8) + 0x10) + 0x78))(), iVar7 == 0));
            plVar9 = (longlong *)(**(code **)(*(longlong *)(CONCAT44(uStack_5e4,local_5e8) + 0x10) + 0x160))();
            iVar7 = (**(code **)(*plVar9 + 8))(plVar9);
          } while (((iVar7 != iVar6) || (iVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_5e4,local_5e8) + 0x50))(), iVar7 != local_608)) ||
                  ((local_5f4 != 0 && (iVar7 = FUN_1401178a0(), iVar7 != local_5f4))));
          lVar12 = -1;
          pcVar13 = local_128;
          do {
            if (lVar12 == 0) break;
            lVar12 = lVar12 + -1;
            cVar4 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar4 != '\0');
          if (lVar12 != -2) goto code_r0x000140127edc;
          goto LAB_140127f1a;
        }
        plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar9 + 0x40))(plVar9);
        log_InlineLogDBERROR(&DAT_14070c010);
      }
      else if (iVar6 == 0x25b) {
        local_5f8 = 0;
        local_5fc = 0;
        local_604 = 0;
        local_600 = 0;
        local_608 = 0;
        local_638 = &local_608;
        local_640 = &local_5fc;
        local_648 = &local_600;
        iVar6 = sscanf(param_3,"%u %d %d %u %d");
        if (4 < iVar6) {
          FUN_140386780(local_558);
          local_620 = local_620 & 0xffffff00;
          local_628 = (int *)((ulonglong)local_628._4_4_ << 0x20);
          local_630 = (char *)((ulonglong)local_630._4_4_ << 0x20);
          local_638 = (int *)CONCAT44(local_638._4_4_,local_608);
          local_640 = (undefined4 *)CONCAT44(local_640._4_4_,local_5fc);
          local_648 = (int *)((ulonglong)local_648 & 0xffffffffffffff00);
          iVar6 = FUN_1403868f0(local_558,local_5f8,local_604,local_600);
          if (iVar6 == 0) {
            local_648 = (int *)CONCAT44(local_648._4_4_,0x15df);
            log_InlineLogERROR(&DAT_1406d9c10);
          }
          else {
            (**(code **)(*(longlong *)(local_5f0 + 0x10) + 0x348))((longlong *)(local_5f0 + 0x10),local_558,0);
          }
          FUN_1403867d0(local_558);
          return 1;
        }
        plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar9 + 0x40))(plVar9);
        log_InlineLogDBERROR(&DAT_14070c010);
      }
      else if (iVar6 == 0x25c) {
        local_5f8 = 0;
        local_608 = 0;
        local_5fc = 0;
        local_600 = 0;
        local_604 = 0;
        local_5f4 = 0;
        local_628 = &local_5f4;
        local_630 = (char *)&local_5f8;
        local_638 = &local_604;
        local_640 = &local_600;
        local_648 = &local_5fc;
        iVar6 = sscanf(param_3,"%u %d %d %d %d %u %d");
        if (4 < iVar6) {
          FUN_140386780(local_558);
          local_618 = 0;
          local_620 = 0;
          local_628 = (int *)CONCAT44(local_628._4_4_,local_5f4);
          local_630 = (char *)CONCAT44(local_630._4_4_,local_5f8);
          local_638 = (int *)CONCAT44(local_638._4_4_,local_604);
          local_640 = (undefined4 *)CONCAT44(local_640._4_4_,local_600);
          local_648 = (int *)((ulonglong)local_648 & 0xffffffffffffff00);
          iVar6 = FUN_140386a50(local_558,local_5e8,local_608,local_5fc);
          if (iVar6 == 0) {
            local_648 = (int *)CONCAT44(local_648._4_4_,0x15f1);
            log_InlineLogERROR(&DAT_1406d9c10);
          }
          else {
            (**(code **)(*(longlong *)(local_5f0 + 0x10) + 0x348))((longlong *)(local_5f0 + 0x10),local_558,0);
          }
          FUN_1403867d0(local_558);
          return 1;
        }
        plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar9 + 0x40))(plVar9);
        log_InlineLogDBERROR(&DAT_14070c010);
      }
      else {
        plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
        (**(code **)(*plVar9 + 0x48))(plVar9);
        plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar9 + 0x40))(plVar9);
        log_InlineLogDBERROR(&DAT_14070c140);
      }
    }
  }
  return 0;
code_r0x000140127edc:
  lVar12 = (**(code **)(*(longlong *)(CONCAT44(uStack_5e4,local_5e8) + 0x10) + 0x18))();
  pcVar13 = local_128;
  lVar12 = lVar12 - (longlong)pcVar13;
  do {
    cVar4 = *pcVar13;
    cVar1 = pcVar13[lVar12];
    if (cVar4 != cVar1) break;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  if (cVar4 == cVar1) {
LAB_140127f1a:
    if (*(int *)(CONCAT44(uStack_5e4,local_5e8) + 0x154) == 0) {
      FUN_14038e270(CONCAT44(uStack_5e4,local_5e8),1);
      uVar5 = 1;
    }
  }
  goto LAB_140127d10;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140128290(longlong param_1,longlong *param_2,char *param_3,longlong *param_4,undefined8 param_5,undefined8 param_6,char *param_7)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  longlong *plVar13;
  IStringManager *pIVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  char *pcVar22;
  longlong lVar23;
  uint uVar24;
  int *piVar25;
  char *pcVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  bool bVar29;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  int *local_370;
  undefined1 *local_368;
  undefined1 *local_360;
  undefined8 *local_358;
  longlong local_350;
  int local_348;
  uint local_344;
  undefined8 local_340;
  longlong *local_338;
  longlong *local_330;
  undefined1 local_328 [4];
  undefined1 local_324 [4];
  undefined1 local_320 [4];
  undefined1 local_31c [4];
  undefined8 local_318;
  int *local_310;
  undefined8 local_308;
  longlong local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  int local_2c8;
  undefined2 local_2c4;
  undefined2 local_2c2;
  undefined8 local_2c0;
  undefined4 *local_2b8;
  undefined8 local_2b0;
  longlong *local_298 [3];
  undefined8 *local_280;
  undefined8 *local_278;
  undefined8 local_270;
  longlong *local_268;
  undefined8 *local_260;
  undefined8 local_258;
  char local_248 [256];
  char local_148 [256];
  ulonglong local_48;
  
  local_258 = 0xfffffffffffffffe;
  local_48 = DAT_1409707c0 ^ (ulonglong)auStack_398;
  local_338 = param_2;
  local_300 = param_1;
  local_2f8 = (longlong *)param_1;
  local_2f0 = param_2;
  if (param_2 == (longlong *)0x0) {
    local_378 = (uint *)CONCAT44(local_378._4_4_,0x1601);
    log_InlineLogERROR(&DAT_1406d9c10);
    return false;
  }
  plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
  iVar7 = (**(code **)(*plVar13 + 0x48))(plVar13);
  if ((param_4 == (longlong *)0x0) && ((iVar7 < 0x2d5 || (0x2d9 < iVar7)))) {
    plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    (**(code **)(*plVar13 + 0x48))(plVar13);
    plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar13 + 0x40))(plVar13);
    local_378 = (uint *)CONCAT44(local_378._4_4_,0x1608);
    log_InlineLogDBERROR("table:cq_action/cq_newaction, CGameAction::ProcessActionSyn() ActionID=%u, ActionType=%u at %s, %d");
    return false;
  }
  switch(iVar7) {
  case 0x2bd:
    local_340 = (longlong *)((ulonglong)local_340._4_4_ << 0x20);
    local_348 = 0;
    local_344 = 0;
    local_378 = &local_344;
    iVar7 = sscanf(param_3,"%d %d %d");
    if (2 < iVar7) {
      if (param_7 == (char *)0x0) {
        return false;
      }
      uVar21 = 0xffffffffffffffff;
      pcVar22 = param_7;
      do {
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        cVar6 = *pcVar22;
        pcVar22 = pcVar22 + 1;
      } while (cVar6 != '\0');
      if (((1 < ~uVar21 - 1) && (~uVar21 - 1 < 0x24)) && (iVar7 = tq::NameStrCheck(param_7,false), iVar7 != 0)) {
        uVar20 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
        cVar6 = FUN_14008a1d0(uVar20,param_7,0);
        if (cVar6 == '\0') {
          plVar13 = (longlong *)FUN_140087ed0();
          lVar23 = *plVar13;
          uVar12 = (**(code **)(*param_4 + 8))(param_4);
          local_370 = (int *)CONCAT44(local_370._4_4_,local_344);
          local_378 = (uint *)CONCAT44(local_378._4_4_,local_348);
          uVar5 = (**(code **)(lVar23 + 0x228))(plVar13,uVar12,param_7,(ulonglong)local_340 & 0xffffffff);
          return uVar5;
        }
      }
      pIVar14 = theInstance();
      lVar23 = param_4[2];
      uVar20 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_INVALID_GUILD_NAME");
      (**(code **)(lVar23 + 0x358))(param_4 + 2,uVar20);
      return false;
    }
    plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar13 + 0x40))(plVar13);
    log_InlineLogDBERROR(&DAT_14070c010);
    goto LAB_14012a62d;
  case 0x2be:
    plVar13 = (longlong *)FUN_140087ed0();
    lVar23 = *plVar13;
    uVar12 = (**(code **)(*param_4 + 8))(param_4);
    iVar7 = (**(code **)(lVar23 + 0x510))(plVar13,uVar12);
    if (iVar7 == 0) {
      uVar12 = (**(code **)(param_4[2] + 0x170))();
      uVar20 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
      uVar20 = FUN_140117fc0(uVar20);
      FUN_14024bea0(uVar20,uVar12);
      plVar13 = (longlong *)FUN_140087ed0();
      lVar23 = *plVar13;
      uVar12 = (**(code **)(*param_4 + 8))(param_4);
      uVar5 = (**(code **)(lVar23 + 0x230))(plVar13,uVar12);
    }
    else {
      pIVar14 = theInstance();
      lVar23 = param_4[2];
      uVar20 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_SYN_IN_LEAGUE");
      (**(code **)(lVar23 + 0x358))(param_4 + 2,uVar20);
      uVar5 = 0;
    }
    break;
  case 0x2bf:
    if (param_7 == (char *)0x0) {
      uVar5 = 0;
    }
    else {
      lVar8 = strtol(param_7,(char **)&local_338,10);
      if (lVar8 < 1) {
        uVar5 = 0;
      }
      else {
        plVar13 = (longlong *)FUN_140087ed0();
        lVar23 = *plVar13;
        uVar12 = (**(code **)(*param_4 + 8))(param_4);
        uVar5 = (**(code **)(lVar23 + 0x138))(plVar13,uVar12,lVar8);
      }
    }
    break;
  case 0x2c0:
    if (param_7 == (char *)0x0) {
      uVar5 = 0;
    }
    else {
      plVar13 = (longlong *)FUN_140087ed0();
      lVar23 = *plVar13;
      uVar12 = (**(code **)(*param_4 + 8))(param_4);
      uVar5 = (**(code **)(lVar23 + 0xe8))(plVar13,uVar12,param_7,0);
    }
    break;
  default:
    plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    (**(code **)(*plVar13 + 0x48))(plVar13);
    plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar13 + 0x40))(plVar13);
    log_InlineLogDBERROR(&DAT_14070c140);
    goto LAB_14012a62d;
  case 0x2c2:
    if (param_7 == (char *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar20 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
      plVar13 = (longlong *)FUN_140087650(uVar20);
      plVar13 = (longlong *)(**(code **)(*plVar13 + 0x90))(plVar13,param_7,0);
      if (plVar13 == (longlong *)0x0) {
        pIVar14 = theInstance();
        lVar23 = param_4[2];
        uVar20 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NOT_HERE");
        (**(code **)(lVar23 + 0x358))(param_4 + 2,uVar20);
        uVar5 = 0;
      }
      else {
        iVar7 = (**(code **)(*param_4 + 8))(param_4);
        iVar11 = (**(code **)(*plVar13 + 8))(plVar13);
        if (iVar7 == iVar11) {
          uVar5 = 0;
        }
        else {
          plVar18 = (longlong *)FUN_140087ed0();
          lVar23 = *plVar18;
          uVar12 = (**(code **)(*plVar13 + 8))(plVar13);
          uVar10 = (**(code **)(*param_4 + 8))(param_4);
          uVar5 = (**(code **)(lVar23 + 0xd8))(plVar18,uVar10,uVar12);
        }
      }
    }
    break;
  case 0x2c3:
    if (param_7 == (char *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar9 = strtoul(param_7,(char **)0x0,10);
      lVar19 = param_4[0x14d];
      plVar13 = (longlong *)FUN_140087ed0();
      lVar23 = *plVar13;
      uVar12 = (**(code **)(*param_4 + 8))(param_4);
      uVar5 = (**(code **)(lVar23 + 0x198))(plVar13,uVar12,(int)lVar19,uVar9);
    }
    break;
  case 0x2c7:
    if (param_7 == (char *)0x0) {
      uVar5 = 0;
    }
    else {
      plVar13 = (longlong *)FUN_140087ed0();
      lVar23 = *plVar13;
      uVar12 = (**(code **)(*param_4 + 8))(param_4);
      uVar5 = (**(code **)(lVar23 + 0x1a8))(plVar13,uVar12,param_7);
    }
    break;
  case 0x2c8:
    if (param_7 == (char *)0x0) {
      uVar5 = 0;
    }
    else {
      plVar13 = (longlong *)FUN_140087ed0();
      lVar23 = *plVar13;
      uVar12 = (**(code **)(*param_4 + 8))(param_4);
      uVar5 = (**(code **)(lVar23 + 0x1b8))(plVar13,uVar12,param_7);
    }
    break;
  case 0x2c9:
    plVar13 = (longlong *)FUN_140118320();
    if (plVar13 != (longlong *)0x0) {
      local_338 = operator_new(8);
      if (local_338 == (longlong *)0x0) {
        local_330 = (longlong *)0x0;
      }
      else {
        *local_338 = (longlong)&local_330;
        local_330 = local_338;
      }
      local_318 = (int *)0x0;
      local_310 = (int *)0x0;
      local_308 = 0;
      lVar23 = *plVar13;
      local_2f8 = local_338;
      uVar12 = (**(code **)(*param_4 + 8))(param_4);
      cVar6 = (**(code **)(lVar23 + 0x38))(plVar13,uVar12,&local_330);
      piVar25 = local_318;
      if (cVar6 != '\0') {
        plVar13 = local_330;
        if (local_310 < local_318) {
          _invalid_parameter_noinfo();
          plVar13 = local_330;
        }
        while( true ) {
          piVar2 = local_310;
          if (local_310 < local_318) {
            _invalid_parameter_noinfo();
          }
          if ((plVar13 == (longlong *)0x0) || (plVar13 != local_330)) {
            _invalid_parameter_noinfo();
          }
          if (piVar2 <= piVar25) break;
          if (plVar13 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar23 = 0;
          }
          else {
            lVar23 = *plVar13;
          }
          if (*(int **)(lVar23 + 0x20) <= piVar25) {
            _invalid_parameter_noinfo();
          }
          iVar7 = *piVar25;
          iVar11 = (**(code **)(*param_4 + 8))(param_4);
          if (iVar7 != iVar11) {
            plVar13 = (longlong *)FUN_140087ed0();
            lVar23 = *plVar13;
            uVar12 = (**(code **)(*param_4 + 8))(param_4);
            uVar5 = (**(code **)(lVar23 + 0x1a0))(plVar13,uVar12,iVar7);
            if (local_318 != (int *)0x0) {
              operator_delete(local_318);
            }
            local_318 = (int *)0x0;
            local_310 = (int *)0x0;
            local_308 = 0;
            operator_delete(local_330);
            return uVar5;
          }
          if (plVar13 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar23 = 0;
          }
          else {
            lVar23 = *plVar13;
          }
          if (*(int **)(lVar23 + 0x20) <= piVar25) {
            _invalid_parameter_noinfo();
          }
          piVar25 = piVar25 + 1;
        }
      }
      if (local_318 != (int *)0x0) {
        operator_delete(local_318);
      }
      local_318 = (int *)0x0;
      local_310 = (int *)0x0;
      local_308 = 0;
      operator_delete(local_330);
    }
    uVar5 = 0;
    break;
  case 0x2ca:
    if (param_7 == (char *)0x0) {
      uVar5 = 0;
    }
    else {
      plVar13 = (longlong *)FUN_140087ed0();
      lVar23 = *plVar13;
      uVar12 = (**(code **)(*param_4 + 8))(param_4);
      uVar5 = (**(code **)(lVar23 + 0x1b0))(plVar13,uVar12,param_7);
    }
    break;
  case 0x2cb:
    if (param_7 != (char *)0x0) {
      uVar21 = 0xffffffffffffffff;
      pcVar22 = param_7;
      do {
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        cVar6 = *pcVar22;
        pcVar22 = pcVar22 + 1;
      } while (cVar6 != '\0');
      if (~uVar21 - 1 < 0x24) {
        lVar23 = (**(code **)(param_4[2] + 0x18))();
        pcVar22 = param_7;
        do {
          cVar6 = *pcVar22;
          cVar1 = pcVar22[lVar23 - (longlong)param_7];
          if (cVar6 != cVar1) break;
          pcVar22 = pcVar22 + 1;
        } while (cVar1 != '\0');
        if (cVar6 == cVar1) {
          return false;
        }
        plVar13 = (longlong *)FUN_140087ed0();
        lVar23 = *plVar13;
        uVar12 = (**(code **)(*param_4 + 8))(param_4);
        uVar5 = (**(code **)(lVar23 + 0x118))(plVar13,uVar12,param_7);
        return uVar5;
      }
    }
    uVar5 = 0;
    break;
  case 0x2cc:
    local_340 = (longlong *)((ulonglong)local_340._4_4_ << 0x20);
    local_344 = 0;
    local_348 = 0;
    local_378 = (uint *)&local_348;
    iVar7 = sscanf(param_3,"%u %u %d");
    if (1 < iVar7) {
      plVar13 = param_4 + 2;
      uVar12 = (**(code **)(*plVar13 + 0x170))(plVar13);
      plVar18 = (longlong *)FUN_140087ed0();
      lVar23 = *plVar18;
      uVar10 = (**(code **)(*param_4 + 8))(param_4);
      (**(code **)(lVar23 + 0xf8))(plVar18,uVar10);
      plVar18 = (longlong *)FUN_140087ed0();
      lVar23 = *plVar18;
      uVar10 = (**(code **)(*param_4 + 8))(param_4);
      cVar6 = (**(code **)(lVar23 + 0x78))(plVar18,uVar10);
      if (cVar6 == '\0') {
        return false;
      }
      iVar7 = tq::NameStrCheck(param_7,false);
      lVar23 = local_300;
      if (iVar7 != 0) {
        uVar20 = FUN_140008520(*(undefined4 *)(local_300 + 0x48));
        cVar6 = FUN_14008a1d0(uVar20,param_7,0);
        if (cVar6 == '\0') {
          uVar20 = FUN_140008520(*(undefined4 *)(lVar23 + 0x48));
          plVar18 = (longlong *)FUN_1400876b0(uVar20);
          lVar19 = *plVar18;
          uVar10 = (**(code **)(*plVar13 + 0x168))(plVar13);
          lVar19 = (**(code **)(lVar19 + 0x20))(plVar18,uVar10,1);
          if (lVar19 != 0) {
            cVar6 = FUN_14011dbb0(lVar19);
            if (cVar6 != '\0') {
              plVar18 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
              (**(code **)(*plVar18 + 0x40))(plVar18);
              (**(code **)(*plVar13 + 0x168))(plVar13);
              log_InlineLogDBERROR("table:cq_action/cq_newaction, ACTION %lu, map[%lu] is Arenic map, can not create monster!");
              return false;
            }
            cVar6 = FUN_140119540(lVar19);
            if (cVar6 != '\0') {
              plVar18 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
              (**(code **)(*plVar18 + 0x40))(plVar18);
              (**(code **)(*plVar13 + 0x168))(plVar13);
              log_InlineLogDBERROR("table:cq_action/cq_newaction, ACTION %lu, type[%u], map[%lu] is market map, can not create monster");
              return false;
            }
          }
          memset(&local_2d8,0,0x40);
          uVar10 = (**(code **)(*plVar13 + 0x168))(plVar13);
          local_2d8 = (longlong *)CONCAT44(uVar10,(undefined4)local_2d8);
          local_2d0 = (int)local_340;
          local_2cc = uVar12;
          local_2c4 = (**(code **)(*plVar13 + 0x40))(plVar13);
          local_2c2 = (**(code **)(*plVar13 + 0x48))();
          uVar20 = local_2c0;
          local_2c0._5_3_ = SUB83(uVar20,5);
          local_2c0._0_5_ = CONCAT14(2,CONCAT22((undefined2)local_344,(undefined2)local_2c0));
          local_2c8 = local_348;
          if (param_7 != (char *)0x0) {
            lVar19 = -1;
            pcVar22 = param_7;
            do {
              if (lVar19 == 0) break;
              lVar19 = lVar19 + -1;
              cVar6 = *pcVar22;
              pcVar22 = pcVar22 + 1;
            } while (cVar6 != '\0');
            if (lVar19 != -2) {
              uVar20 = FUN_140008520(*(undefined4 *)(lVar23 + 0x48));
              plVar13 = (longlong *)FUN_1400e1d30(uVar20);
              uVar5 = (**(code **)(*plVar13 + 0x20))(plVar13,&local_2d8,param_7);
              return uVar5;
            }
          }
          uVar20 = FUN_140008520(*(undefined4 *)(lVar23 + 0x48));
          plVar13 = (longlong *)FUN_1400e1d30(uVar20);
          uVar5 = (**(code **)(*plVar13 + 0x20))(plVar13,&local_2d8,0);
          return uVar5;
        }
      }
      pIVar14 = theInstance();
      lVar23 = *plVar13;
      uVar20 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_INVALID_NAME");
      (**(code **)(lVar23 + 0x358))(plVar13,uVar20);
      return false;
    }
    plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar13 + 0x40))(plVar13);
    log_InlineLogDBERROR(&DAT_14070c010);
    goto LAB_14012a62d;
  case 0x2cd:
    local_344 = 0;
    local_348 = 0;
    local_370 = &local_348;
    local_378 = &local_344;
    iVar7 = sscanf(param_3,"%s %s %d %u");
    if (iVar7 < 3) {
      plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar13 + 0x40))(plVar13);
      log_InlineLogDBERROR(&DAT_14070c010);
    }
    else if ((local_348 != 0) || (local_348 = (**(code **)(param_4[2] + 0x170))(), local_348 != 0)) {
      plVar13 = (longlong *)FUN_140087ed0();
      cVar6 = (**(code **)(*plVar13 + 0x248))(plVar13,local_348);
      if (cVar6 != '\0') {
        iVar7 = _stricmp(local_248,"money");
        bVar29 = iVar7 == 0;
        if (bVar29) {
          lVar23 = 3;
          pcVar22 = local_148;
          pcVar26 = "+=";
          do {
            if (lVar23 == 0) break;
            lVar23 = lVar23 + -1;
            bVar29 = *pcVar22 == *pcVar26;
            pcVar22 = pcVar22 + 1;
            pcVar26 = pcVar26 + 1;
          } while (bVar29);
          if (bVar29) {
            plVar13 = (longlong *)FUN_140087ed0();
            (**(code **)(*plVar13 + 0x270))(plVar13,local_348,local_344);
            return true;
          }
          lVar23 = 2;
          bVar29 = false;
          pcVar22 = local_148;
          pcVar26 = "<";
          do {
            if (lVar23 == 0) break;
            lVar23 = lVar23 + -1;
            bVar29 = *pcVar22 == *pcVar26;
            pcVar22 = pcVar22 + 1;
            pcVar26 = pcVar26 + 1;
          } while (bVar29);
          if (bVar29) {
            plVar13 = (longlong *)FUN_140087ed0();
            lVar23 = (**(code **)(*plVar13 + 0x268))(plVar13,local_348);
            return lVar23 < (int)local_344;
          }
        }
        else {
          iVar7 = _stricmp(local_248,"member_title");
          bVar29 = iVar7 == 0;
          if (bVar29) {
            lVar23 = 2;
            pcVar22 = local_148;
            pcVar26 = "=";
            do {
              if (lVar23 == 0) break;
              lVar23 = lVar23 + -1;
              bVar29 = *pcVar22 == *pcVar26;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            } while (bVar29);
            if (!bVar29) {
              if ((local_348 == 0) && (local_348 = (**(code **)(param_4[2] + 0x170))(), local_348 == 0)) {
                local_378 = (uint *)CONCAT44(local_378._4_4_,0x17b0);
                log_InlineLogERROR(&DAT_1406d9c10);
                return false;
              }
              plVar13 = (longlong *)FUN_140087ed0();
              cVar6 = (**(code **)(*plVar13 + 0x110))(plVar13,local_348,(undefined1)local_344);
              if (cVar6 != '\0') {
                return true;
              }
            }
          }
          else {
            iVar7 = _stricmp(local_248,"has_domain");
            if (iVar7 == 0) {
              lVar23 = 3;
              bVar29 = true;
              pcVar22 = local_148;
              pcVar26 = "==";
              do {
                if (lVar23 == 0) break;
                lVar23 = lVar23 + -1;
                bVar29 = *pcVar22 == *pcVar26;
                pcVar22 = pcVar22 + 1;
                pcVar26 = pcVar26 + 1;
              } while (bVar29);
              if (!bVar29) {
                if ((local_348 == 0) && (local_348 = (**(code **)(param_4[2] + 0x170))(), local_348 == 0)) {
                  local_378 = (uint *)CONCAT44(local_378._4_4_,0x17c0);
                  log_InlineLogERROR(&DAT_1406d9c10);
                  return false;
                }
                plVar13 = (longlong *)FUN_140087ed0();
                uVar5 = (**(code **)(*plVar13 + 0x2e8))(plVar13,local_348);
                return uVar5;
              }
            }
          }
        }
      }
    }
    goto LAB_14012a62d;
  case 0x2d0:
    plVar13 = (longlong *)FUN_140087ed0();
    uVar5 = (**(code **)(*plVar13 + 0x260))(plVar13,param_4 + 0x14d);
    break;
  case 0x2d1:
    if (param_7 != (char *)0x0) {
      uVar21 = 0xffffffffffffffff;
      pcVar22 = param_7;
      do {
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        cVar6 = *pcVar22;
        pcVar22 = pcVar22 + 1;
      } while (cVar6 != '\0');
      if (~uVar21 - 1 < 0x10) {
        plVar13 = (longlong *)FUN_140087ed0();
        iVar7 = (**(code **)(*plVar13 + 0x250))(plVar13,param_7);
        *(int *)(param_4 + 0x14d) = iVar7;
        return iVar7 != 0;
      }
    }
    uVar5 = 0;
    break;
  case 0x2d2:
    iVar7 = (**(code **)(param_4[2] + 0x170))();
    if (iVar7 != 0) {
      uVar20 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
      plVar13 = (longlong *)FUN_140087650(uVar20);
      uVar5 = (**(code **)(*plVar13 + 0xb8))(plVar13,iVar7,param_4 + 0x14d);
      return uVar5;
    }
    goto LAB_14012a62d;
  case 0x2d3:
    local_148[0] = '\0';
    memset(local_148 + 1,0,0xff);
    local_248[0] = '\0';
    memset(local_248 + 1,0,0xff);
    local_348 = 0;
    uVar12 = (**(code **)(*param_4 + 8))(param_4);
    iVar7 = (**(code **)(param_4[2] + 0x170))();
    if (iVar7 != 0) {
      plVar13 = (longlong *)FUN_140087ed0();
      cVar6 = (**(code **)(*plVar13 + 0x70))(plVar13,uVar12,iVar7);
      if (cVar6 != '\0') {
        local_378 = (uint *)&local_348;
        iVar7 = sscanf(param_3,"%s %s %d");
        if (iVar7 < 3) {
          plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
          (**(code **)(*plVar13 + 0x40))(plVar13);
          log_InlineLogDBERROR(&DAT_14070c010);
        }
        else {
          iVar7 = _stricmp(local_148,"money");
          bVar29 = iVar7 == 0;
          if (bVar29) {
            lVar23 = 3;
            pcVar22 = local_248;
            pcVar26 = "+=";
            do {
              if (lVar23 == 0) break;
              lVar23 = lVar23 + -1;
              bVar29 = *pcVar22 == *pcVar26;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            } while (bVar29);
            if (bVar29) {
              plVar13 = (longlong *)FUN_140087ed0();
              (**(code **)(*plVar13 + 0x140))(plVar13,uVar12,local_348);
              return true;
            }
            lVar23 = 3;
            bVar29 = false;
            pcVar22 = local_248;
            pcVar26 = "==";
            do {
              if (lVar23 == 0) break;
              lVar23 = lVar23 + -1;
              bVar29 = *pcVar22 == *pcVar26;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            } while (bVar29);
            if (bVar29) {
              plVar13 = (longlong *)FUN_140087ed0();
              iVar7 = (**(code **)(*plVar13 + 0x168))(plVar13,uVar12);
              return iVar7 == local_348;
            }
            lVar23 = 2;
            bVar29 = false;
            pcVar22 = local_248;
            pcVar26 = ">";
            do {
              if (lVar23 == 0) break;
              lVar23 = lVar23 + -1;
              bVar29 = *pcVar22 == *pcVar26;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            } while (bVar29);
            if (bVar29) {
              plVar13 = (longlong *)FUN_140087ed0();
              iVar7 = (**(code **)(*plVar13 + 0x168))(plVar13,uVar12);
              return local_348 < iVar7;
            }
            lVar23 = 2;
            bVar29 = false;
            pcVar22 = local_248;
            pcVar26 = "<";
            do {
              if (lVar23 == 0) break;
              lVar23 = lVar23 + -1;
              bVar29 = *pcVar22 == *pcVar26;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            } while (bVar29);
            if (bVar29) {
              plVar13 = (longlong *)FUN_140087ed0();
              iVar7 = (**(code **)(*plVar13 + 0x168))(plVar13,uVar12);
              return iVar7 < local_348;
            }
          }
          else {
            iVar7 = _stricmp(local_148,"emoney");
            bVar29 = iVar7 == 0;
            if (bVar29) {
              lVar23 = 3;
              pcVar22 = local_248;
              pcVar26 = "==";
              do {
                if (lVar23 == 0) break;
                lVar23 = lVar23 + -1;
                bVar29 = *pcVar22 == *pcVar26;
                pcVar22 = pcVar22 + 1;
                pcVar26 = pcVar26 + 1;
              } while (bVar29);
              if (bVar29) {
                plVar13 = (longlong *)FUN_140087ed0();
                iVar7 = (**(code **)(*plVar13 + 0x170))(plVar13,uVar12);
                return iVar7 == local_348;
              }
              lVar23 = 2;
              bVar29 = false;
              pcVar22 = local_248;
              pcVar26 = ">";
              do {
                if (lVar23 == 0) break;
                lVar23 = lVar23 + -1;
                bVar29 = *pcVar22 == *pcVar26;
                pcVar22 = pcVar22 + 1;
                pcVar26 = pcVar26 + 1;
              } while (bVar29);
              if (bVar29) {
                plVar13 = (longlong *)FUN_140087ed0();
                iVar7 = (**(code **)(*plVar13 + 0x170))(plVar13,uVar12);
                return local_348 < iVar7;
              }
              lVar23 = 2;
              bVar29 = false;
              pcVar22 = local_248;
              pcVar26 = "<";
              do {
                if (lVar23 == 0) break;
                lVar23 = lVar23 + -1;
                bVar29 = *pcVar22 == *pcVar26;
                pcVar22 = pcVar22 + 1;
                pcVar26 = pcVar26 + 1;
              } while (bVar29);
              if (bVar29) {
                plVar13 = (longlong *)FUN_140087ed0();
                iVar7 = (**(code **)(*plVar13 + 0x170))(plVar13,uVar12);
                return iVar7 < local_348;
              }
            }
            else {
              iVar7 = _stricmp(local_148,"edu");
              bVar29 = iVar7 == 0;
              if (bVar29) {
                lVar23 = 3;
                pcVar22 = local_248;
                pcVar26 = "+=";
                do {
                  if (lVar23 == 0) break;
                  lVar23 = lVar23 + -1;
                  bVar29 = *pcVar22 == *pcVar26;
                  pcVar22 = pcVar22 + 1;
                  pcVar26 = pcVar26 + 1;
                } while (bVar29);
                if (bVar29) {
                  plVar13 = (longlong *)FUN_140087ed0();
                  (**(code **)(*plVar13 + 0x148))(plVar13,uVar12,local_348);
                  return true;
                }
                lVar23 = 3;
                bVar29 = false;
                pcVar22 = local_248;
                pcVar26 = "==";
                do {
                  if (lVar23 == 0) break;
                  lVar23 = lVar23 + -1;
                  bVar29 = *pcVar22 == *pcVar26;
                  pcVar22 = pcVar22 + 1;
                  pcVar26 = pcVar26 + 1;
                } while (bVar29);
                if (bVar29) {
                  plVar13 = (longlong *)FUN_140087ed0();
                  iVar7 = (**(code **)(*plVar13 + 0x178))(plVar13,uVar12);
                  return iVar7 == local_348;
                }
                lVar23 = 2;
                bVar29 = false;
                pcVar22 = local_248;
                pcVar26 = ">";
                do {
                  if (lVar23 == 0) break;
                  lVar23 = lVar23 + -1;
                  bVar29 = *pcVar22 == *pcVar26;
                  pcVar22 = pcVar22 + 1;
                  pcVar26 = pcVar26 + 1;
                } while (bVar29);
                if (bVar29) {
                  plVar13 = (longlong *)FUN_140087ed0();
                  iVar7 = (**(code **)(*plVar13 + 0x178))(plVar13,uVar12);
                  return local_348 < iVar7;
                }
                lVar23 = 2;
                bVar29 = false;
                pcVar22 = local_248;
                pcVar26 = "<";
                do {
                  if (lVar23 == 0) break;
                  lVar23 = lVar23 + -1;
                  bVar29 = *pcVar22 == *pcVar26;
                  pcVar22 = pcVar22 + 1;
                  pcVar26 = pcVar26 + 1;
                } while (bVar29);
                if (bVar29) {
                  plVar13 = (longlong *)FUN_140087ed0();
                  iVar7 = (**(code **)(*plVar13 + 0x178))(plVar13,uVar12);
                  return iVar7 < local_348;
                }
              }
              else {
                iVar7 = _stricmp(local_148,"pk");
                bVar29 = iVar7 == 0;
                if (bVar29) {
                  lVar23 = 3;
                  pcVar22 = local_248;
                  pcVar26 = "+=";
                  do {
                    if (lVar23 == 0) break;
                    lVar23 = lVar23 + -1;
                    bVar29 = *pcVar22 == *pcVar26;
                    pcVar22 = pcVar22 + 1;
                    pcVar26 = pcVar26 + 1;
                  } while (bVar29);
                  if (bVar29) {
                    plVar13 = (longlong *)FUN_140087ed0();
                    (**(code **)(*plVar13 + 0x150))(plVar13,uVar12,local_348);
                    return true;
                  }
                  lVar23 = 3;
                  bVar29 = false;
                  pcVar22 = local_248;
                  pcVar26 = "==";
                  do {
                    if (lVar23 == 0) break;
                    lVar23 = lVar23 + -1;
                    bVar29 = *pcVar22 == *pcVar26;
                    pcVar22 = pcVar22 + 1;
                    pcVar26 = pcVar26 + 1;
                  } while (bVar29);
                  if (bVar29) {
                    plVar13 = (longlong *)FUN_140087ed0();
                    iVar7 = (**(code **)(*plVar13 + 0x180))(plVar13,uVar12);
                    return iVar7 == local_348;
                  }
                  lVar23 = 2;
                  bVar29 = false;
                  pcVar22 = local_248;
                  pcVar26 = ">";
                  do {
                    if (lVar23 == 0) break;
                    lVar23 = lVar23 + -1;
                    bVar29 = *pcVar22 == *pcVar26;
                    pcVar22 = pcVar22 + 1;
                    pcVar26 = pcVar26 + 1;
                  } while (bVar29);
                  if (bVar29) {
                    plVar13 = (longlong *)FUN_140087ed0();
                    iVar7 = (**(code **)(*plVar13 + 0x180))(plVar13,uVar12);
                    return local_348 < iVar7;
                  }
                  lVar23 = 2;
                  bVar29 = false;
                  pcVar22 = local_248;
                  pcVar26 = "<";
                  do {
                    if (lVar23 == 0) break;
                    lVar23 = lVar23 + -1;
                    bVar29 = *pcVar22 == *pcVar26;
                    pcVar22 = pcVar22 + 1;
                    pcVar26 = pcVar26 + 1;
                  } while (bVar29);
                  if (bVar29) {
                    plVar13 = (longlong *)FUN_140087ed0();
                    iVar7 = (**(code **)(*plVar13 + 0x180))(plVar13,uVar12);
                    return iVar7 < local_348;
                  }
                }
                else {
                  iVar7 = _stricmp(local_148,"merit");
                  if (iVar7 == 0) {
                    lVar23 = 3;
                    bVar29 = true;
                    pcVar22 = local_248;
                    pcVar26 = "+=";
                    do {
                      if (lVar23 == 0) break;
                      lVar23 = lVar23 + -1;
                      bVar29 = *pcVar22 == *pcVar26;
                      pcVar22 = pcVar22 + 1;
                      pcVar26 = pcVar26 + 1;
                    } while (bVar29);
                    if (bVar29) {
                      plVar13 = (longlong *)FUN_140087ed0();
                      uVar5 = (**(code **)(*plVar13 + 0x158))(plVar13,uVar12,local_348);
                      return uVar5;
                    }
                    lVar23 = 3;
                    bVar29 = false;
                    pcVar22 = local_248;
                    pcVar26 = "-=";
                    do {
                      if (lVar23 == 0) break;
                      lVar23 = lVar23 + -1;
                      bVar29 = *pcVar22 == *pcVar26;
                      pcVar22 = pcVar22 + 1;
                      pcVar26 = pcVar26 + 1;
                    } while (bVar29);
                    if (bVar29) {
                      plVar13 = (longlong *)FUN_140087ed0();
                      uVar5 = (**(code **)(*plVar13 + 0x160))(plVar13,uVar12,local_348);
                      return uVar5;
                    }
                    lVar23 = 3;
                    bVar29 = false;
                    pcVar22 = local_248;
                    pcVar26 = "==";
                    do {
                      if (lVar23 == 0) break;
                      lVar23 = lVar23 + -1;
                      bVar29 = *pcVar22 == *pcVar26;
                      pcVar22 = pcVar22 + 1;
                      pcVar26 = pcVar26 + 1;
                    } while (bVar29);
                    if (bVar29) {
                      plVar13 = (longlong *)FUN_140087ed0();
                      iVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,uVar12);
                      return iVar7 == local_348;
                    }
                    lVar23 = 2;
                    bVar29 = false;
                    pcVar22 = local_248;
                    pcVar26 = ">";
                    do {
                      if (lVar23 == 0) break;
                      lVar23 = lVar23 + -1;
                      bVar29 = *pcVar22 == *pcVar26;
                      pcVar22 = pcVar22 + 1;
                      pcVar26 = pcVar26 + 1;
                    } while (bVar29);
                    if (bVar29) {
                      plVar13 = (longlong *)FUN_140087ed0();
                      iVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,uVar12);
                      return local_348 < iVar7;
                    }
                    lVar23 = 2;
                    bVar29 = false;
                    pcVar22 = local_248;
                    pcVar26 = "<";
                    do {
                      if (lVar23 == 0) break;
                      lVar23 = lVar23 + -1;
                      bVar29 = *pcVar22 == *pcVar26;
                      pcVar22 = pcVar22 + 1;
                      pcVar26 = pcVar26 + 1;
                    } while (bVar29);
                    if (bVar29) {
                      plVar13 = (longlong *)FUN_140087ed0();
                      iVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,uVar12);
                      return iVar7 < local_348;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_14012a62d;
  case 0x2d4:
    local_340 = (longlong *)((ulonglong)local_340._4_4_ << 0x20);
    iVar7 = tq::DateStamp(0);
    iVar11 = sscanf(param_3,"%d");
    if (iVar11 < 1) {
      plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar13 + 0x40))(plVar13);
      log_InlineLogDBERROR(&DAT_14070c010);
    }
    else {
      iVar11 = (**(code **)(param_4[2] + 0x170))();
      if (iVar11 == 0) {
        return false;
      }
      plVar13 = (longlong *)FUN_140087ed0();
      lVar23 = *plVar13;
      uVar12 = (**(code **)(*param_4 + 8))(param_4);
      iVar11 = (**(code **)(lVar23 + 0x130))(plVar13,uVar12);
      if (iVar11 == 0) {
        return true;
      }
      iVar7 = tq::DateStampDiff(iVar11,iVar7);
      if ((int)local_340 < iVar7) {
        return true;
      }
    }
    goto LAB_14012a62d;
  case 0x2d5:
    plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar7 = (**(code **)(*plVar13 + 0x48))(plVar13);
    if ((iVar7 != 0) ||
       (((param_4 != (longlong *)0x0 && (plVar13 = (longlong *)(**(code **)(param_4[2] + 0x160))(), plVar13 != (longlong *)0x0)) &&
        (iVar7 = (**(code **)(*plVar13 + 8))(plVar13), iVar7 != 0)))) {
      plVar13 = (longlong *)FUN_140087ed0();
      (**(code **)(*plVar13 + 0x350))(plVar13,iVar7);
      return true;
    }
    goto LAB_14012a62d;
  case 0x2d6:
    local_348 = 0;
    local_344 = 0;
    local_340 = (longlong *)((ulonglong)local_340._4_4_ << 0x20);
    local_370 = (int *)&local_340;
    local_378 = (uint *)local_148;
    iVar7 = sscanf(param_3,"%u %u %s %d");
    bVar29 = iVar7 == 3;
    if (iVar7 < 3) {
      plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar13 + 0x40))(plVar13);
      log_InlineLogDBERROR(&DAT_14070c010);
    }
    else {
      lVar23 = 3;
      pcVar22 = local_148;
      pcVar26 = "+=";
      do {
        if (lVar23 == 0) break;
        lVar23 = lVar23 + -1;
        bVar29 = *pcVar22 == *pcVar26;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar29);
      if (bVar29) {
        uVar12 = (**(code **)(*param_4 + 8))(param_4);
        plVar13 = (longlong *)FUN_140087ed0();
        local_378 = (uint *)CONCAT44(local_378._4_4_,(int)local_340);
        (**(code **)(*plVar13 + 0x340))(plVar13,local_348,local_344,uVar12);
        return true;
      }
    }
    goto LAB_14012a62d;
  case 0x2d7:
    local_350 = (longlong)&local_318 + 4;
    local_358 = &local_318;
    local_360 = local_31c;
    local_368 = local_320;
    local_370 = (int *)local_324;
    local_378 = (uint *)local_328;
    iVar7 = sscanf(param_3,"%u %u %u %u %u %u %u %u");
    if (iVar7 < 8) {
      plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar13 + 0x40))(plVar13);
      log_InlineLogDBERROR(&DAT_14070c010);
    }
    else {
      plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      iVar7 = (**(code **)(*plVar13 + 0x48))(plVar13);
      local_348 = iVar7;
      if (iVar7 != 0) {
        local_340 = operator_new(8);
        if (local_340 == (longlong *)0x0) {
          local_298[0] = (longlong *)0x0;
        }
        else {
          *local_340 = (longlong)local_298;
          local_298[0] = local_340;
        }
        plVar18 = (longlong *)0x0;
        local_280 = (undefined8 *)0x0;
        local_278 = (undefined8 *)0x0;
        local_270 = 0;
        local_2e8 = local_340;
        plVar13 = (longlong *)FUN_140087ed0();
        (**(code **)(*plVar13 + 0x358))(plVar13,iVar7,local_298);
        plVar13 = (longlong *)InstanceGet();
        plVar13 = (longlong *)(**(code **)(*plVar13 + 0x10))(plVar13,"SELECT * FROM cq_syncompeterank",2);
        local_2e8 = plVar13;
        if ((plVar13 != (longlong *)0x0) && (lVar23 = (**(code **)(*plVar13 + 0x40))(plVar13), lVar23 != 0)) {
          local_340 = (longlong *)((ulonglong)local_340 & 0xffffffff00000000);
          plVar17 = plVar18;
          while (lVar23 = local_300, plVar15 = plVar18, (int)plVar17 < 8) {
            plVar15 = (longlong *)(**(code **)(*plVar13 + 0x38))(plVar13);
            if (plVar15 != (longlong *)0x0) {
              plVar16 = (longlong *)(**(code **)(*plVar15 + 0x10))(plVar15,2);
              (**(code **)(*plVar16 + 0xb0))(plVar16,0);
              plVar16 = (longlong *)(**(code **)(*plVar15 + 0x10))(plVar15,1);
              (**(code **)(*plVar16 + 0xb0))(plVar16,0);
              plVar16 = (longlong *)(**(code **)(*plVar15 + 0x10))(plVar15,3);
              (**(code **)(*plVar16 + 0xb0))(plVar16,0);
              plVar16 = (longlong *)(**(code **)(*plVar15 + 0x10))(plVar15,4);
              (**(code **)(*plVar16 + 0xb0))(plVar16,0);
              (**(code **)(*plVar15 + 0x38))(plVar15,0);
              (**(code **)*plVar15)(plVar15,1);
            }
            uVar24 = (int)plVar17 + 1;
            local_340 = (longlong *)CONCAT44(local_340._4_4_,uVar24);
            (**(code **)(*plVar13 + 0x30))(plVar13,(longlong)(int)uVar24);
            plVar17 = (longlong *)(ulonglong)uVar24;
          }
          do {
            uVar20 = FUN_140008520(*(undefined4 *)(lVar23 + 0x48));
            plVar17 = (longlong *)FUN_1400875f0(uVar20);
            lVar19 = (**(code **)(*plVar17 + 0x88))(plVar17,*(undefined4 *)(local_328 + (longlong)plVar15 * 4 + -8));
            if (lVar19 != 0) {
              if ((*(longlong *)(lVar19 + 0x60) == 0) || (*(char *)(lVar19 + 0x68) == '\0')) {
                local_378 = (uint *)CONCAT44(local_378._4_4_,0x148);
                log_InlineLogERROR(&DAT_1406d9c10);
              }
              else {
                (**(code **)(**(longlong **)(lVar19 + 0x60) + 0x60))(*(longlong **)(lVar19 + 0x60),1);
              }
              if ((*(longlong *)(lVar19 + 0x60) == 0) || (*(char *)(lVar19 + 0x68) == '\0')) {
                local_378 = (uint *)CONCAT44(local_378._4_4_,0x148);
                log_InlineLogERROR(&DAT_1406d9c10);
              }
              else {
                (**(code **)(**(longlong **)(lVar19 + 0x60) + 0x60))(*(longlong **)(lVar19 + 0x60),2);
              }
              if ((*(longlong *)(lVar19 + 0x60) == 0) || (*(char *)(lVar19 + 0x68) == '\0')) {
                local_378 = (uint *)CONCAT44(local_378._4_4_,0x148);
                log_InlineLogERROR(&DAT_1406d9c10);
              }
              else {
                (**(code **)(**(longlong **)(lVar19 + 0x60) + 0x60))(*(longlong **)(lVar19 + 0x60),0x12);
              }
              if ((*(longlong *)(lVar19 + 0x60) == 0) || (*(char *)(lVar19 + 0x68) == '\0')) {
                local_378 = (uint *)CONCAT44(local_378._4_4_,0x149);
                log_InlineLogERROR(&DAT_1406d9c10);
              }
              else {
                (**(code **)(**(longlong **)(lVar19 + 0x60) + 0x68))(*(longlong **)(lVar19 + 0x60),3);
                (**(code **)(**(longlong **)(lVar19 + 0x60) + 0x70))();
              }
            }
            puVar27 = local_280;
            plVar15 = (longlong *)((longlong)plVar15 + 1);
          } while ((longlong)plVar15 < 8);
          local_344 = 0;
          if (local_278 < local_280) {
            _invalid_parameter_noinfo();
          }
          plVar17 = local_298[0];
          local_268 = local_298[0];
          plVar15 = plVar18;
          while( true ) {
            puVar4 = local_278;
            local_260 = puVar27;
            if (local_278 < local_280) {
              _invalid_parameter_noinfo();
            }
            if ((plVar17 == (longlong *)0x0) || (plVar17 != local_298[0])) {
              _invalid_parameter_noinfo();
            }
            if (puVar27 == puVar4) break;
            if (plVar17 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar16 = plVar18;
            }
            else {
              plVar16 = (longlong *)*plVar17;
            }
            if ((undefined8 *)plVar16[4] <= puVar27) {
              _invalid_parameter_noinfo();
            }
            puVar28 = (undefined4 *)*puVar27;
            local_340 = (longlong *)puVar28;
            if (puVar28 != (undefined4 *)0x0) {
              (**(code **)(*plVar13 + 0x30))(plVar13,(longlong)(int)plVar15);
              plVar15 = (longlong *)(**(code **)(*plVar13 + 0x38))(plVar13);
              if (plVar15 != (longlong *)0x0) {
                plVar16 = (longlong *)(**(code **)(*plVar15 + 0x10))(plVar15,2);
                (**(code **)(*plVar16 + 0xb8))(plVar16,*puVar28);
                plVar16 = (longlong *)(**(code **)(*plVar15 + 0x10))(plVar15,1);
                (**(code **)(*plVar16 + 0xb0))(plVar16,puVar28[1]);
                (**(code **)(*plVar15 + 0x38))(plVar15,0);
                (**(code **)*plVar15)(plVar15,1);
              }
              uVar20 = FUN_140008520(*(undefined4 *)(local_300 + 0x48));
              plVar15 = (longlong *)FUN_1400875f0(uVar20);
              uVar24 = local_344;
              lVar23 = (**(code **)(*plVar15 + 0x88))(plVar15,*(undefined4 *)(local_328 + (longlong)(int)local_344 * 4 + -8));
              if (lVar23 == 0) {
                plVar15 = (longlong *)(**(code **)(*(longlong *)*local_2f0 + 0x20))((longlong *)*local_2f0,&DAT_14094da3c);
                (**(code **)(*plVar15 + 0x40))(plVar15);
                log_InlineLogDBERROR(&DAT_14070daf8);
                local_344 = uVar24 + 1;
                plVar15 = (longlong *)(ulonglong)local_344;
              }
              else {
                if ((*(longlong *)(lVar23 + 0x60) == 0) || (*(char *)(lVar23 + 0x68) == '\0')) {
                  local_378 = (uint *)CONCAT44(local_378._4_4_,0x148);
                  log_InlineLogERROR(&DAT_1406d9c10);
                }
                else {
                  (**(code **)(**(longlong **)(lVar23 + 0x60) + 0x60))(*(longlong **)(lVar23 + 0x60),1,*puVar28);
                }
                if ((*(longlong *)(lVar23 + 0x60) == 0) || (*(char *)(lVar23 + 0x68) == '\0')) {
                  local_378 = (uint *)CONCAT44(local_378._4_4_,0x148);
                  log_InlineLogERROR(&DAT_1406d9c10);
                }
                else {
                  (**(code **)(**(longlong **)(lVar23 + 0x60) + 0x60))(*(longlong **)(lVar23 + 0x60),2,2);
                }
                if ((*(longlong *)(lVar23 + 0x60) == 0) || (*(char *)(lVar23 + 0x68) == '\0')) {
                  local_378 = (uint *)CONCAT44(local_378._4_4_,0x148);
                  log_InlineLogERROR(&DAT_1406d9c10);
                }
                else {
                  (**(code **)(**(longlong **)(lVar23 + 0x60) + 0x60))(*(longlong **)(lVar23 + 0x60),0x12,puVar28[1]);
                }
                if ((*(longlong *)(lVar23 + 0x60) == 0) || (*(char *)(lVar23 + 0x68) == '\0')) {
                  local_378 = (uint *)CONCAT44(local_378._4_4_,0x149);
                  log_InlineLogERROR(&DAT_1406d9c10);
                }
                else {
                  (**(code **)(**(longlong **)(lVar23 + 0x60) + 0x68))(*(longlong **)(lVar23 + 0x60),3,puVar28 + 2);
                  (**(code **)(**(longlong **)(lVar23 + 0x60) + 0x70))();
                }
                local_344 = uVar24 + 1;
                plVar15 = (longlong *)(ulonglong)local_344;
                operator_delete(puVar28);
              }
            }
            if (plVar17 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar16 = plVar18;
            }
            else {
              plVar16 = (longlong *)*plVar17;
            }
            if ((undefined8 *)plVar16[4] <= puVar27) {
              _invalid_parameter_noinfo();
            }
            puVar27 = puVar27 + 1;
          }
          plVar17 = (longlong *)CurrentInstanceGet();
          plVar17 = (longlong *)(**(code **)(*plVar17 + 0x20))(plVar17,0x18);
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x68))(plVar17);
          }
          local_338 = operator_new(8);
          local_2d8 = plVar18;
          if (local_338 != (longlong *)0x0) {
            *local_338 = (longlong)&local_2d8;
            local_2d8 = local_338;
          }
          local_2c0 = (undefined4 *)0x0;
          local_2b8 = (undefined4 *)0x0;
          local_2b0 = 0;
          local_2f8 = local_338;
          plVar17 = (longlong *)FUN_140087ed0();
          iVar7 = local_348;
          (**(code **)(*plVar17 + 0x370))(plVar17,local_348,&local_2d8);
          puVar28 = local_2c0;
          plVar17 = local_2d8;
          if (local_2b8 < local_2c0) {
            _invalid_parameter_noinfo();
            plVar17 = local_2d8;
          }
          while( true ) {
            puVar3 = local_2b8;
            if (local_2b8 < local_2c0) {
              _invalid_parameter_noinfo();
            }
            if ((plVar17 == (longlong *)0x0) || (plVar17 != local_2d8)) {
              _invalid_parameter_noinfo();
            }
            if (puVar28 == puVar3) break;
            if (plVar17 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar15 = plVar18;
            }
            else {
              plVar15 = (longlong *)*plVar17;
            }
            if ((undefined4 *)plVar15[4] <= puVar28) {
              _invalid_parameter_noinfo();
            }
            uVar12 = *puVar28;
            plVar15 = (longlong *)FUN_140087ed0();
            (**(code **)(*plVar15 + 0x3d0))(plVar15,uVar12,1);
            if (plVar17 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar15 = plVar18;
            }
            else {
              plVar15 = (longlong *)*plVar17;
            }
            if ((undefined4 *)plVar15[4] <= puVar28) {
              _invalid_parameter_noinfo();
            }
            puVar28 = puVar28 + 1;
          }
          plVar18 = (longlong *)FUN_140087ed0();
          (**(code **)(*plVar18 + 0x368))(plVar18,iVar7);
          plVar18 = (longlong *)FUN_140087ed0();
          (**(code **)(*plVar18 + 0x360))(plVar18,iVar7);
          if (plVar13 != (longlong *)0x0) {
            (**(code **)*plVar13)(plVar13);
          }
          if (local_2c0 != (undefined4 *)0x0) {
            operator_delete(local_2c0);
          }
          local_2c0 = (undefined4 *)0x0;
          local_2b8 = (undefined4 *)0x0;
          local_2b0 = 0;
          operator_delete(local_2d8);
          if (local_280 != (undefined8 *)0x0) {
            operator_delete(local_280);
          }
          local_280 = (undefined8 *)0x0;
          local_278 = (undefined8 *)0x0;
          local_270 = 0;
          operator_delete(local_298[0]);
          return true;
        }
        plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
        (**(code **)(*plVar13 + 0x40))(plVar13);
        log_InlineLogDBERROR(&DAT_14070dab0);
        if (local_280 != (undefined8 *)0x0) {
          operator_delete(local_280);
        }
        local_280 = (undefined8 *)0x0;
        local_278 = (undefined8 *)0x0;
        local_270 = 0;
        operator_delete(local_298[0]);
        return false;
      }
      plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
      (**(code **)(*plVar13 + 0x40))(plVar13);
      log_InlineLogDBERROR(&DAT_14070db60);
    }
    goto LAB_14012a62d;
  case 0x2d8:
    local_350 = (longlong)&local_318 + 4;
    local_358 = &local_318;
    local_360 = local_31c;
    local_368 = local_320;
    local_370 = (int *)local_324;
    local_378 = (uint *)local_328;
    iVar7 = sscanf(param_3,"%u %u %u %u %u %u %u %u");
    if (7 < iVar7) {
      lVar23 = 0;
      do {
        uVar20 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
        plVar13 = (longlong *)FUN_1400875f0(uVar20);
        lVar19 = (**(code **)(*plVar13 + 0x88))(plVar13,*(undefined4 *)(local_328 + lVar23 * 4 + -8));
        if (lVar19 != 0) {
          if ((*(longlong *)(lVar19 + 0x60) == 0) || (*(char *)(lVar19 + 0x68) == '\0')) {
            local_378 = (uint *)CONCAT44(local_378._4_4_,0x148);
            log_InlineLogERROR(&DAT_1406d9c10);
          }
          else {
            (**(code **)(**(longlong **)(lVar19 + 0x60) + 0x60))(*(longlong **)(lVar19 + 0x60),1);
          }
          if ((*(longlong *)(lVar19 + 0x60) == 0) || (*(char *)(lVar19 + 0x68) == '\0')) {
            local_378 = (uint *)CONCAT44(local_378._4_4_,0x148);
            log_InlineLogERROR(&DAT_1406d9c10);
          }
          else {
            (**(code **)(**(longlong **)(lVar19 + 0x60) + 0x60))(*(longlong **)(lVar19 + 0x60),2);
          }
          if ((*(longlong *)(lVar19 + 0x60) == 0) || (*(char *)(lVar19 + 0x68) == '\0')) {
            local_378 = (uint *)CONCAT44(local_378._4_4_,0x148);
            log_InlineLogERROR(&DAT_1406d9c10);
          }
          else {
            (**(code **)(**(longlong **)(lVar19 + 0x60) + 0x60))(*(longlong **)(lVar19 + 0x60),0x12);
          }
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < 8);
      plVar13 = (longlong *)FUN_140087ed0();
      (**(code **)(*plVar13 + 0x3e0))(plVar13,2);
      return true;
    }
    plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar13 + 0x40))(plVar13);
    log_InlineLogDBERROR(&DAT_14070c010);
    goto LAB_14012a62d;
  case 0x2d9:
    local_340 = (longlong *)((ulonglong)local_340._4_4_ << 0x20);
    iVar7 = sscanf(param_3,"%u");
    if (0 < iVar7) {
      plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      iVar7 = (**(code **)(*plVar13 + 0x48))(plVar13);
      uVar20 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
      plVar13 = (longlong *)FUN_1400875f0(uVar20);
      plVar13 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13,iVar7);
      local_338 = (longlong *)0x0;
      if ((plVar13 == (longlong *)0x0) || (cVar6 = (**(code **)(*plVar13 + 0x298))(plVar13,0x1040,&local_338), cVar6 == '\0')) {
        return false;
      }
      if ((local_338 != (longlong *)0x0) && (iVar11 = FUN_1400872b0(local_338,1), iVar7 == iVar11)) {
        return true;
      }
      return false;
    }
    plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar13 + 0x40))(plVar13);
    log_InlineLogDBERROR(&DAT_14070c010);
    goto LAB_14012a62d;
  case 0x2da:
    uVar20 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
    uVar20 = FUN_140117fc0(uVar20);
    uVar5 = FUN_14024c1e0(uVar20,param_4);
    break;
  case 0x2db:
    uVar20 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
    uVar20 = FUN_140117fc0(uVar20);
    uVar5 = FUN_14024ba80(uVar20,param_4);
    break;
  case 0x2dc:
    if (param_7 == (char *)0x0) {
      return false;
    }
    local_340 = (longlong *)((ulonglong)local_340._4_4_ << 0x20);
    local_344 = 0;
    iVar7 = sscanf(param_3,"%u %u");
    if (iVar7 == 2) {
      plVar13 = (longlong *)FUN_140087ed0();
      lVar23 = *plVar13;
      uVar12 = (**(code **)(*param_4 + 8))(param_4);
      local_378._0_4_ = local_344;
      cVar6 = (**(code **)(lVar23 + 0x238))(plVar13,uVar12,param_7,(ulonglong)local_340 & 0xffffffff);
      if (cVar6 == '\0') {
        uVar20 = FUN_140008520(*(undefined4 *)(param_1 + 0x48));
        uVar20 = FUN_140087730(uVar20);
        local_370 = (int *)0x0;
        local_378 = (uint *)((ulonglong)local_378._4_4_ << 0x20);
        FUN_140145f60(uVar20,local_344,param_4,0);
      }
      return true;
    }
    plVar13 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    (**(code **)(*plVar13 + 0x40))(plVar13);
    log_InlineLogDBERROR(&DAT_14070c010);
LAB_14012a62d:
    uVar5 = 0;
  }
  return uVar5;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140139a3e) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14012a6e0(longlong *param_1,undefined8 *param_2,char *param_3,longlong *param_4,longlong *param_5,undefined4 param_6,char *param_7)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined2 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  __time32_t _Var16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  longlong *plVar26;
  IStringManager *pIVar27;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  ulonglong uVar28;
  int *piVar29;
  undefined8 *puVar30;
  undefined4 *puVar31;
  longlong *plVar32;
  char *pcVar33;
  longlong lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  longlong *plVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  longlong lVar40;
  ulonglong uVar41;
  char *pcVar42;
  byte bVar43;
  bool bVar44;
  bool bVar45;
  undefined1 auStack_a438 [32];
  undefined8 local_a418;
  undefined8 local_a410;
  undefined8 local_a408;
  undefined8 local_a400;
  undefined8 local_a3f8;
  undefined4 *local_a3f0;
  undefined8 local_a3e8;
  int *local_a3e0;
  undefined1 *local_a3d8;
  undefined1 *local_a3d0;
  undefined1 *local_a3c8;
  undefined1 *local_a3c0;
  undefined1 *local_a3b8;
  undefined1 *local_a3b0;
  undefined1 *local_a3a8;
  undefined1 *local_a3a0;
  undefined1 *local_a398;
  undefined1 *local_a390;
  longlong local_a388;
  ulonglong uStack_a380;
  uint local_a378;
  undefined4 local_a374;
  undefined4 local_a370;
  uint local_a36c;
  undefined8 local_a368;
  uint local_a360;
  uint local_a35c;
  undefined4 local_a358;
  undefined4 local_a354;
  undefined4 local_a350;
  int local_a34c;
  undefined4 local_a348;
  undefined4 local_a344;
  undefined8 *local_a340;
  longlong *local_a338;
  short local_a330 [2];
  undefined4 local_a32c;
  undefined4 local_a328;
  int local_a324;
  uint local_a320;
  undefined4 local_a31c;
  int local_a318;
  uint local_a314;
  undefined4 local_a310;
  uint local_a30c;
  uint local_a308;
  int local_a304;
  uint local_a300;
  ulonglong local_a2f8;
  uint local_a2f0;
  undefined4 local_a2ec;
  uint local_a2e8;
  undefined4 local_a2e4;
  uint local_a2e0 [2];
  uint local_a2d8;
  undefined4 uStack_a2d4;
  ulonglong local_a2d0;
  uint local_a2c8;
  undefined4 local_a2c4;
  undefined4 local_a2c0;
  int local_a2bc;
  int local_a2b8;
  int local_a2b4;
  undefined4 local_a2b0;
  int local_a2ac;
  undefined4 local_a2a8;
  uint local_a2a4;
  uint local_a2a0;
  int local_a29c;
  undefined4 local_a298;
  uint local_a294;
  undefined4 local_a290 [2];
  char *local_a288;
  int local_a280;
  undefined4 local_a27c;
  uint local_a278;
  undefined4 local_a274;
  undefined4 local_a270;
  int local_a26c;
  uint local_a268;
  undefined4 local_a264;
  undefined4 local_a260;
  undefined4 local_a25c;
  int local_a258;
  int local_a254;
  int local_a250;
  undefined4 local_a24c;
  int local_a248;
  int local_a244;
  int local_a240;
  undefined4 local_a23c;
  int local_a238;
  undefined4 local_a234;
  int local_a230;
  int local_a22c;
  int local_a228;
  undefined4 local_a224;
  int local_a220;
  undefined4 local_a21c;
  int local_a218;
  undefined4 local_a214;
  int local_a210;
  undefined4 local_a20c;
  undefined4 local_a208;
  undefined4 local_a204;
  undefined4 local_a200;
  undefined4 local_a1fc;
  uint local_a1f8;
  int local_a1f4;
  uint local_a1f0;
  undefined4 local_a1ec;
  uint local_a1e8;
  int local_a1e4;
  int local_a1e0;
  undefined4 local_a1dc;
  uint local_a1d8;
  undefined4 local_a1d4;
  uint local_a1d0;
  undefined4 local_a1cc;
  undefined4 local_a1c8;
  undefined4 local_a1c4;
  undefined4 local_a1c0;
  undefined4 local_a1bc;
  uint local_a1b8;
  undefined4 local_a1b4;
  int local_a1b0;
  undefined4 local_a1ac;
  int local_a1a8;
  undefined4 local_a1a4;
  undefined4 local_a1a0;
  undefined4 local_a19c;
  undefined4 local_a198;
  int local_a190;
  undefined4 local_a18c;
  undefined4 local_a188;
  undefined4 local_a184;
  undefined4 local_a180;
  undefined4 local_a17c;
  int local_a178;
  undefined4 local_a174;
  int local_a170;
  int local_a16c;
  undefined4 local_a168;
  undefined4 local_a164;
  undefined4 local_a160;
  undefined4 local_a15c;
  int local_a158;
  undefined4 local_a154;
  int local_a150;
  undefined4 local_a14c;
  undefined4 local_a148;
  undefined4 local_a144;
  undefined4 local_a140;
  undefined4 local_a13c;
  undefined4 local_a138;
  int local_a134;
  undefined4 local_a130;
  undefined4 local_a12c;
  undefined4 local_a128;
  int local_a124;
  undefined4 local_a120;
  undefined4 local_a11c;
  undefined4 local_a118;
  int local_a114;
  undefined4 local_a110;
  int local_a10c;
  undefined4 local_a108;
  undefined4 local_a104;
  undefined4 local_a100;
  undefined4 local_a0fc;
  undefined4 local_a0f8;
  undefined4 local_a0f4;
  int local_a0f0;
  undefined4 local_a0ec;
  int local_a0e8;
  int local_a0e4;
  undefined4 local_a0e0;
  undefined4 local_a0dc;
  undefined4 local_a0d8;
  undefined4 local_a0d4;
  undefined4 local_a0d0;
  undefined4 local_a0cc;
  undefined4 local_a0c8;
  int local_a0c4;
  undefined4 local_a0c0;
  int local_a0bc;
  int local_a0b8;
  undefined4 local_a0b4;
  undefined4 local_a0b0;
  undefined4 local_a0ac;
  undefined4 local_a0a8;
  undefined4 local_a0a4;
  undefined4 local_a0a0;
  undefined4 local_a09c;
  int local_a098;
  undefined4 local_a094;
  undefined4 local_a090;
  int local_a08c;
  undefined4 local_a088;
  int local_a084;
  undefined4 local_a080;
  undefined4 local_a07c;
  uint local_a078;
  undefined4 local_a074;
  undefined4 local_a070;
  undefined4 local_a06c;
  undefined4 local_a068;
  undefined4 local_a064;
  undefined4 local_a060;
  undefined4 local_a05c;
  longlong local_a058;
  longlong local_a050;
  longlong local_a048;
  longlong *local_a040;
  undefined4 local_a038;
  undefined4 local_a034;
  undefined4 local_a030;
  longlong local_a028;
  longlong local_a020 [3];
  ulonglong local_a008;
  ulonglong local_a000;
  longlong *local_9ff0;
  longlong local_9fe8 [3];
  ulonglong local_9fd0;
  ulonglong local_9fc8;
  longlong local_9fb8;
  longlong *local_9fb0;
  longlong local_9fa8;
  undefined8 local_9fa0;
  longlong *local_9f98;
  undefined8 local_9f90;
  longlong *local_9f88;
  undefined8 local_9f80;
  undefined4 local_9f78;
  undefined1 local_9f74 [4];
  undefined1 local_9f70 [4];
  undefined1 local_9f6c [4];
  undefined1 local_9f68 [4];
  undefined1 local_9f64 [4];
  undefined1 local_9f60 [4];
  undefined1 local_9f5c [4];
  undefined1 local_9f58 [4];
  undefined1 local_9f54 [4];
  undefined1 local_9f50 [4];
  undefined1 local_9f4c [4];
  undefined1 local_9f48 [4];
  undefined1 local_9f44 [4];
  undefined1 local_9f40 [8];
  undefined4 local_9f38;
  undefined1 local_9f34 [4];
  undefined1 local_9f30 [4];
  undefined1 local_9f2c [4];
  undefined1 local_9f28 [4];
  undefined1 local_9f24 [4];
  undefined1 local_9f20 [4];
  undefined1 local_9f1c [4];
  undefined1 local_9f18 [4];
  undefined1 local_9f14 [4];
  undefined1 local_9f10 [4];
  undefined1 local_9f0c [4];
  undefined1 local_9f08 [4];
  undefined1 local_9f04 [4];
  undefined1 local_9f00 [8];
  longlong local_9ef8 [3];
  ulonglong local_9ee0;
  ulonglong local_9ed8;
  undefined4 local_9ec8;
  undefined1 local_9ec4 [4];
  undefined1 local_9ec0 [4];
  undefined1 local_9ebc [4];
  undefined1 local_9eb8 [4];
  undefined1 local_9eb4 [4];
  undefined1 local_9eb0 [4];
  undefined1 local_9eac [4];
  undefined1 local_9ea8 [4];
  undefined1 local_9ea4 [4];
  undefined1 local_9ea0 [4];
  undefined1 local_9e9c [4];
  undefined1 local_9e98 [4];
  undefined1 local_9e94 [4];
  undefined1 local_9e90 [4];
  undefined1 local_9e8c [4];
  undefined1 local_9e88 [4];
  undefined1 local_9e84 [4];
  undefined1 local_9e80 [4];
  undefined1 local_9e7c [4];
  undefined4 local_9e78;
  undefined1 local_9e74 [4];
  undefined1 local_9e70 [4];
  undefined1 local_9e6c [4];
  undefined1 local_9e68 [4];
  undefined1 local_9e64 [4];
  undefined1 local_9e60 [4];
  undefined1 local_9e5c [4];
  undefined1 local_9e58 [4];
  undefined1 local_9e54 [4];
  undefined1 local_9e50 [4];
  undefined1 local_9e4c [4];
  undefined1 local_9e48 [4];
  undefined1 local_9e44 [4];
  undefined1 local_9e40 [4];
  undefined1 local_9e3c [4];
  undefined1 local_9e38 [4];
  undefined1 local_9e34 [4];
  undefined1 local_9e30 [4];
  undefined1 local_9e2c [4];
  undefined4 local_9e28;
  undefined1 local_9e24 [4];
  undefined1 local_9e20 [4];
  undefined1 local_9e1c [4];
  undefined1 local_9e18 [4];
  undefined1 local_9e14 [4];
  undefined1 local_9e10 [4];
  undefined1 local_9e0c [4];
  undefined1 local_9e08 [4];
  undefined1 local_9e04 [4];
  undefined1 local_9e00 [4];
  undefined1 local_9dfc [4];
  undefined1 local_9df8 [4];
  undefined1 local_9df4 [4];
  undefined1 local_9df0 [4];
  undefined1 local_9dec [4];
  undefined1 local_9de8 [4];
  undefined1 local_9de4 [4];
  undefined1 local_9de0 [4];
  undefined1 local_9ddc [4];
  longlong local_9dd8 [3];
  ulonglong local_9dc0;
  ulonglong local_9db8;
  longlong local_9da8 [3];
  ulonglong local_9d90;
  ulonglong local_9d88;
  longlong local_9d78 [3];
  ulonglong local_9d60;
  ulonglong local_9d58;
  longlong local_9d48 [3];
  ulonglong local_9d30;
  ulonglong local_9d28;
  longlong local_9d18 [3];
  ulonglong local_9d00;
  ulonglong local_9cf8;
  longlong local_9ce8 [3];
  ulonglong local_9cd0;
  ulonglong local_9cc8;
  longlong local_9cb8 [3];
  ulonglong local_9ca0;
  ulonglong local_9c98;
  longlong local_9c88 [3];
  ulonglong local_9c70;
  ulonglong local_9c68;
  longlong local_9c58 [3];
  ulonglong local_9c40;
  ulonglong local_9c38;
  longlong local_9c28 [3];
  ulonglong local_9c10;
  ulonglong local_9c08;
  longlong local_9bf8 [3];
  ulonglong local_9be0;
  ulonglong local_9bd8;
  longlong local_9bc8 [3];
  ulonglong local_9bb0;
  ulonglong local_9ba8;
  longlong local_9b98;
  undefined1 local_9b90 [16];
  longlong *local_9b80;
  longlong local_9b78 [3];
  ulonglong local_9b60;
  ulonglong local_9b58;
  longlong local_9b48;
  undefined1 local_9b40 [16];
  longlong *local_9b30;
  undefined8 local_9b28;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_9b20 [40];
  char local_9af8 [36];
  undefined4 local_9ad4;
  undefined8 local_9ad0;
  undefined4 local_9ac8;
  undefined4 local_9ac4;
  int local_9ac0;
  undefined4 local_9abc;
  undefined4 local_9ab8;
  undefined4 local_9ab4;
  undefined4 local_9ab0;
  undefined4 local_9aac;
  undefined4 local_9aa8;
  undefined4 local_9aa4;
  int local_9aa0;
  char local_9a98 [256];
  undefined1 local_9998 [256];
  undefined4 local_9898;
  uint local_9894 [3];
  _TIME_ZONE_INFORMATION local_9888;
  _TIME_ZONE_INFORMATION local_97d8;
  undefined1 local_9728 [1104];
  undefined1 local_92d8 [1104];
  undefined1 local_8e88 [1104];
  undefined1 local_8a38 [1104];
  undefined1 local_85e8 [1104];
  undefined1 local_8198 [1104];
  undefined1 local_7d48 [1104];
  undefined1 local_78f8 [1104];
  undefined1 local_74a8 [1072];
  undefined1 local_7078 [1072];
  undefined1 local_6c48 [1072];
  undefined1 local_6818 [1104];
  undefined1 local_63c8 [1072];
  undefined1 local_5f98 [1104];
  undefined1 local_5b48 [1104];
  undefined1 local_56f8 [1104];
  undefined1 local_52a8 [1104];
  undefined1 local_4e58 [1104];
  undefined1 local_4a08 [1072];
  undefined1 local_45d8 [1104];
  char local_4188 [256];
  char local_4088 [256];
  undefined8 local_3f88;
  undefined8 local_3f80;
  char local_3f78 [256];
  undefined1 local_3e78 [16];
  char local_3e68 [256];
  char local_3d68 [256];
  char local_3c68 [256];
  char local_3b68 [256];
  char local_3a68;
  undefined1 local_3a67 [255];
  char local_3968 [256];
  char local_3868 [256];
  char local_3768;
  undefined1 local_3767 [255];
  undefined1 local_3668;
  undefined1 local_3667 [255];
  char local_3568;
  undefined1 local_3567 [255];
  char local_3468 [256];
  char local_3368 [256];
  char local_3268;
  undefined1 local_3267 [255];
  char local_3168 [256];
  char local_3068;
  undefined1 local_3067 [255];
  char local_2f68;
  undefined1 local_2f67 [255];
  undefined4 local_2e68;
  uint local_2e64;
  undefined4 local_2e60;
  char local_2e5c [16];
  char local_2e4c [16];
  char local_2e3c [16];
  undefined4 local_2e2c;
  undefined4 local_2e28;
  char local_2a48;
  undefined1 local_2a47 [255];
  char local_2948;
  undefined1 local_2947 [255];
  char local_2848;
  undefined1 local_2847 [255];
  char local_2748 [256];
  char local_2648;
  undefined1 local_2647 [255];
  char local_2548 [256];
  char local_2448 [256];
  char local_2348;
  undefined1 local_2347 [254];
  undefined1 local_2249;
  char local_2248 [256];
  char local_2148 [256];
  char local_2048 [256];
  char local_1f48 [256];
  char local_1e48 [256];
  char local_1d48;
  undefined1 local_1d47 [255];
  char local_1c48;
  undefined1 local_1c47 [255];
  char local_1b48;
  undefined1 local_1b47 [255];
  char local_1a48 [256];
  char local_1948 [256];
  char local_1848;
  undefined1 local_1847 [255];
  char local_1748;
  undefined1 local_1747 [255];
  char local_1648;
  undefined1 local_1647 [255];
  char local_1548;
  undefined1 local_1547 [255];
  char local_1448;
  undefined1 local_1447 [255];
  char local_1348 [256];
  char local_1248;
  undefined1 local_1247 [255];
  char local_1148 [256];
  char local_1048 [256];
  char local_f48 [256];
  char local_e48 [256];
  undefined1 local_d48;
  undefined1 local_d47 [255];
  char local_c48 [256];
  undefined1 local_b48;
  undefined1 local_b47 [255];
  undefined1 local_a48;
  undefined1 local_a47 [255];
  char local_948 [256];
  undefined1 local_848;
  undefined1 local_847 [255];
  char local_748 [256];
  char local_648 [256];
  char local_548 [256];
  char local_448 [256];
  char local_348 [256];
  char local_248 [256];
  undefined1 local_148 [256];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14012a6f6;
  local_9b28 = 0xfffffffffffffffe;
  local_48 = DAT_1409707c0 ^ (ulonglong)auStack_a438;
  local_a368 = param_1;
  local_a340 = param_2;
  local_a338 = param_4;
  local_a288 = param_3;
  local_a040 = param_4;
  if (param_2 == (undefined8 *)0x0) {
    local_a418 = (char *)CONCAT44(local_a418._4_4_,0x18e9);
    log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","pAction","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
    return 0;
  }
  if (param_4 == (longlong *)0x0) {
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&DAT_14094da3c);
    uVar13 = (**(code **)(*plVar26 + 0x40))(plVar26);
    local_a418 = (char *)CONCAT44(local_a418._4_4_,0x18ed);
    log_InlineLogDBERROR
              ("table:cq_action/cq_newaction, CGameAction::ProcessActionUser() ActionID=%u, ActionType=%u at %s, %d",(ulonglong)uVar13,(ulonglong)uVar12,
               "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
    return 0;
  }
  plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
  iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
  if (0x2d8 < iVar14 - 0x3e9U) {
switchD_14012a831_caseD_bb:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
    uVar13 = FUN_14008fc30(param_2);
    log_InlineLogDBERROR(&DAT_14070c140,(ulonglong)uVar13,(ulonglong)uVar12);
    goto LAB_14013a784;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_14013aa9c)[(int)(iVar14 - 0x3e9U)]) {
  case 0:
    local_1d48 = '\0';
    memset(local_1d47,0,0xff);
    local_a410 = (uint *)&local_1d48;
    local_a418 = local_948;
    iVar14 = sscanf(param_3,"%s %s %s %s",local_4088,local_4188);
    if (iVar14 < 3) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x215a);
    }
    else {
      uVar41 = _strtoi64(local_948,(char **)0x0,10);
      iVar14 = _stricmp(local_4088,"life");
      bVar45 = iVar14 == 0;
      if (bVar45) {
        lVar40 = 3;
        pcVar33 = local_4188;
        pcVar42 = "+=";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          cVar7 = (**(code **)(param_4[2] + 0x220))(param_4 + 2);
          if (cVar7 != '\0') {
            local_a418 = (char *)0x0;
            uVar41 = (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,0,uVar41,1);
            return uVar41;
          }
          uVar12 = FUN_1400bb7e0(param_2);
          uVar13 = (**(code **)(*param_4 + 8))(param_4);
          log_InlineLogDBERROR("table:cq_action/cq_newaction, user[%u] has died in action[%u].",(ulonglong)uVar13,(ulonglong)uVar12);
          return 0;
        }
        lVar40 = 3;
        bVar45 = false;
        pcVar33 = local_4188;
        pcVar42 = "==";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          iVar14 = (**(code **)(param_4[2] + 0x78))();
          return (ulonglong)((longlong)iVar14 == uVar41);
        }
        lVar40 = 2;
        bVar45 = false;
        pcVar33 = local_4188;
        pcVar42 = "<";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          iVar14 = (**(code **)(param_4[2] + 0x78))();
          return (ulonglong)((longlong)iVar14 < (longlong)uVar41);
        }
      }
      else {
        iVar14 = _stricmp(local_4088,"mana");
        bVar45 = iVar14 == 0;
        if (bVar45) {
          lVar40 = 3;
          pcVar33 = local_4188;
          pcVar42 = "+=";
          do {
            if (lVar40 == 0) break;
            lVar40 = lVar40 + -1;
            bVar45 = *pcVar33 == *pcVar42;
            pcVar33 = pcVar33 + 1;
            pcVar42 = pcVar42 + 1;
          } while (bVar45);
          if (bVar45) {
            local_a418 = (char *)0x0;
            uVar41 = (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,2,uVar41,1);
            return uVar41;
          }
          lVar40 = 3;
          bVar45 = false;
          pcVar33 = local_4188;
          pcVar42 = "==";
          do {
            if (lVar40 == 0) break;
            lVar40 = lVar40 + -1;
            bVar45 = *pcVar33 == *pcVar42;
            pcVar33 = pcVar33 + 1;
            pcVar42 = pcVar42 + 1;
          } while (bVar45);
          if (bVar45) {
            iVar14 = (**(code **)(*param_4 + 0x80))(param_4);
            return (ulonglong)((longlong)iVar14 == uVar41);
          }
          lVar40 = 2;
          bVar45 = false;
          pcVar33 = local_4188;
          pcVar42 = "<";
          do {
            if (lVar40 == 0) break;
            lVar40 = lVar40 + -1;
            bVar45 = *pcVar33 == *pcVar42;
            pcVar33 = pcVar33 + 1;
            pcVar42 = pcVar42 + 1;
          } while (bVar45);
          if (bVar45) {
            iVar14 = (**(code **)(*param_4 + 0x80))(param_4);
            return (ulonglong)((longlong)iVar14 < (longlong)uVar41);
          }
        }
        else {
          iVar14 = _stricmp(local_4088,"mentor");
          bVar45 = iVar14 == 0;
          uVar9 = (ushort)uVar41;
          uVar12 = (uint)uVar41;
          if (bVar45) {
            lVar40 = 3;
            pcVar33 = local_4188;
            pcVar42 = "+=";
            do {
              if (lVar40 == 0) break;
              lVar40 = lVar40 + -1;
              bVar45 = *pcVar33 == *pcVar42;
              pcVar33 = pcVar33 + 1;
              pcVar42 = pcVar42 + 1;
            } while (bVar45);
            if (bVar45) {
              iVar14 = FUN_140163420(param_4);
              FUN_140163430(param_4,uVar12 + iVar14,0);
              FUN_14039e680(local_6c48);
              uVar11 = FUN_140163420(param_4);
              uVar25 = (**(code **)(*param_4 + 8))(param_4);
              iVar14 = FUN_14039e700(local_6c48,uVar25,0x29,uVar11);
              if (iVar14 != 0) {
                (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_6c48);
              }
              FUN_14039ed70(local_78f8);
              iVar14 = FUN_14039eef0(local_78f8,param_4 + 2,0,0);
              if (iVar14 != 0) {
                (**(code **)(param_4[2] + 0x348))(param_4 + 2,local_78f8,0);
              }
              FUN_14039edf0(local_78f8);
              FUN_14039e6d0(local_6c48);
              return 1;
            }
            lVar40 = 3;
            bVar45 = false;
            pcVar33 = local_4188;
            pcVar42 = "==";
            do {
              if (lVar40 == 0) break;
              lVar40 = lVar40 + -1;
              bVar45 = *pcVar33 == *pcVar42;
              pcVar33 = pcVar33 + 1;
              pcVar42 = pcVar42 + 1;
            } while (bVar45);
            if (bVar45) {
              uVar10 = FUN_140163420(param_4);
              return (ulonglong)(uVar10 == uVar9);
            }
            lVar40 = 2;
            bVar45 = false;
            pcVar33 = local_4188;
            pcVar42 = "<";
            do {
              if (lVar40 == 0) break;
              lVar40 = lVar40 + -1;
              bVar45 = *pcVar33 == *pcVar42;
              pcVar33 = pcVar33 + 1;
              pcVar42 = pcVar42 + 1;
            } while (bVar45);
            if (bVar45) {
              uVar10 = FUN_140163420(param_4);
              return (ulonglong)(uVar10 < uVar9);
            }
            lVar40 = 3;
            bVar45 = false;
            pcVar33 = local_4188;
            pcVar42 = "<=";
            do {
              if (lVar40 == 0) break;
              lVar40 = lVar40 + -1;
              bVar45 = *pcVar33 == *pcVar42;
              pcVar33 = pcVar33 + 1;
              pcVar42 = pcVar42 + 1;
            } while (bVar45);
            if (bVar45) {
              uVar10 = FUN_140163420(param_4);
              return (ulonglong)(uVar10 <= uVar9);
            }
            lVar40 = 3;
            bVar45 = false;
            pcVar33 = local_4188;
            pcVar42 = ">=";
            do {
              if (lVar40 == 0) break;
              lVar40 = lVar40 + -1;
              bVar45 = *pcVar33 == *pcVar42;
              pcVar33 = pcVar33 + 1;
              pcVar42 = pcVar42 + 1;
            } while (bVar45);
            if (bVar45) {
              uVar10 = FUN_140163420(param_4);
              return (ulonglong)(uVar9 <= uVar10);
            }
          }
          else {
            iVar14 = _stricmp(local_4088,"lookface");
            bVar45 = iVar14 == 0;
            if (bVar45) {
              lVar40 = 3;
              pcVar33 = local_4188;
              pcVar42 = "==";
              do {
                if (lVar40 == 0) break;
                lVar40 = lVar40 + -1;
                bVar45 = *pcVar33 == *pcVar42;
                pcVar33 = pcVar33 + 1;
                pcVar42 = pcVar42 + 1;
              } while (bVar45);
              if (bVar45) {
                uVar13 = (**(code **)(param_4[2] + 0x30))();
                return (ulonglong)(uVar13 == uVar12);
              }
              lVar40 = 2;
              bVar45 = false;
              pcVar33 = local_4188;
              pcVar42 = "<";
              do {
                if (lVar40 == 0) break;
                lVar40 = lVar40 + -1;
                bVar45 = *pcVar33 == *pcVar42;
                pcVar33 = pcVar33 + 1;
                pcVar42 = pcVar42 + 1;
              } while (bVar45);
              if (bVar45) {
                iVar14 = (**(code **)(param_4[2] + 0x30))();
                return (ulonglong)((longlong)iVar14 < (longlong)uVar41);
              }
              iVar14 = _stricmp(local_4188,"set");
              if (iVar14 == 0) {
                FUN_1401a6420(param_4,0xb,uVar41,2);
                return 1;
              }
            }
            else {
              iVar14 = _stricmp(local_4088,"look");
              uVar8 = iVar14 == 0;
              if ((bool)uVar8) {
                uVar13 = (**(code **)(param_4[2] + 0x30))();
                lVar40 = 3;
                pcVar33 = local_4188;
                pcVar42 = "==";
                do {
                  if (lVar40 == 0) break;
                  lVar40 = lVar40 + -1;
                  uVar8 = *pcVar33 == *pcVar42;
                  pcVar33 = pcVar33 + 1;
                  pcVar42 = pcVar42 + 1;
                } while ((bool)uVar8);
                if ((bool)uVar8) {
                  return (ulonglong)((longlong)(int)(uVar13 % 1000) == uVar41);
                }
                lVar40 = 2;
                bVar45 = false;
                pcVar33 = local_4188;
                pcVar42 = "<";
                do {
                  if (lVar40 == 0) break;
                  lVar40 = lVar40 + -1;
                  bVar45 = *pcVar33 == *pcVar42;
                  pcVar33 = pcVar33 + 1;
                  pcVar42 = pcVar42 + 1;
                } while (bVar45);
                if (bVar45) {
                  return (ulonglong)((longlong)(int)(uVar13 % 1000) < (longlong)uVar41);
                }
                iVar14 = _stricmp(local_4188,"set");
                if (iVar14 == 0) {
                  FUN_1401a6420(param_4,0xb,uVar12 + (uVar13 / 1000 - (int)uVar12 / 1000) * 1000,2);
                  return 1;
                }
              }
              else {
                iVar14 = _stricmp(local_4088,"face");
                uVar8 = iVar14 == 0;
                if ((bool)uVar8) {
                  uVar13 = (**(code **)(param_4[2] + 0x30))();
                  uVar28 = (ulonglong)uVar13;
                  lVar40 = 3;
                  pcVar33 = local_4188;
                  pcVar42 = "==";
                  do {
                    if (lVar40 == 0) break;
                    lVar40 = lVar40 + -1;
                    uVar8 = *pcVar33 == *pcVar42;
                    pcVar33 = pcVar33 + 1;
                    pcVar42 = pcVar42 + 1;
                  } while ((bool)uVar8);
                  if ((bool)uVar8) {
                    return (ulonglong)((longlong)((int)(uVar28 / 10000) + (int)((uVar28 / 10000) / 1000) * -1000) == uVar41);
                  }
                  lVar40 = 2;
                  bVar45 = false;
                  pcVar33 = local_4188;
                  pcVar42 = "<";
                  do {
                    if (lVar40 == 0) break;
                    lVar40 = lVar40 + -1;
                    bVar45 = *pcVar33 == *pcVar42;
                    pcVar33 = pcVar33 + 1;
                    pcVar42 = pcVar42 + 1;
                  } while (bVar45);
                  if (bVar45) {
                    return (ulonglong)((longlong)((int)(uVar28 / 10000) + (int)((uVar28 / 10000) / 1000) * -1000) < (longlong)uVar41);
                  }
                  iVar14 = _stricmp(local_4188,"set");
                  if (iVar14 == 0) {
                    iVar14 = (int)((ulonglong)((longlong)(int)uVar12 * -0x10624dd3) >> 0x20);
                    FUN_1401a6420(param_4,0xb,
                                  ((((iVar14 >> 6) - (iVar14 >> 0x1f)) * 1000 - ((int)(uVar28 / 10000) + (int)((uVar28 / 10000) / 1000) * -1000)) + uVar12) *
                                  10000 + uVar13,2);
                    return 1;
                  }
                }
                else {
                  iVar14 = _stricmp(local_4088,"sex");
                  uVar8 = iVar14 == 0;
                  if ((bool)uVar8) {
                    uVar12 = (**(code **)(param_4[2] + 0x30))();
                    lVar40 = 3;
                    pcVar33 = local_4188;
                    pcVar42 = "==";
                    do {
                      if (lVar40 == 0) break;
                      lVar40 = lVar40 + -1;
                      uVar8 = *pcVar33 == *pcVar42;
                      pcVar33 = pcVar33 + 1;
                      pcVar42 = pcVar42 + 1;
                    } while ((bool)uVar8);
                    if ((bool)uVar8) {
                      uVar28 = (ulonglong)uVar12 / 1000;
                      return (ulonglong)((longlong)((int)uVar28 + (int)(uVar28 / 10) * -10) == uVar41);
                    }
                    lVar40 = 2;
                    bVar45 = false;
                    pcVar33 = local_4188;
                    pcVar42 = "<";
                    do {
                      if (lVar40 == 0) break;
                      lVar40 = lVar40 + -1;
                      bVar45 = *pcVar33 == *pcVar42;
                      pcVar33 = pcVar33 + 1;
                      pcVar42 = pcVar42 + 1;
                    } while (bVar45);
                    if (bVar45) {
                      uVar28 = (ulonglong)uVar12 / 1000;
                      return (ulonglong)((longlong)((int)uVar28 + (int)(uVar28 / 10) * -10) < (longlong)uVar41);
                    }
                    iVar14 = _stricmp(local_4188,"set");
                    if (iVar14 == 0) {
                      uVar41 = FUN_1401a6670(param_4,uVar41 & 0xffffffff);
                      return uVar41;
                    }
                  }
                  else {
                    iVar14 = _stricmp(local_4088,"transform");
                    uVar8 = iVar14 == 0;
                    if ((bool)uVar8) {
                      (**(code **)(param_4[2] + 0x30))();
                      lVar40 = 2;
                      pcVar33 = local_4188;
                      pcVar42 = "=";
                      do {
                        if (lVar40 == 0) break;
                        lVar40 = lVar40 + -1;
                        uVar8 = *pcVar33 == *pcVar42;
                        pcVar33 = pcVar33 + 1;
                        pcVar42 = pcVar42 + 1;
                      } while ((bool)uVar8);
                      if ((bool)uVar8) {
                        if (uVar41 == 0) {
                          if (param_4[0x151] == 0) {
                            if ((int)param_4[0x153] != -1) {
                              FUN_140173130(param_4);
                            }
                          }
                          else {
                            FUN_140173030(param_4);
                          }
                          return 1;
                        }
                      }
                      else {
                        lVar40 = 3;
                        pcVar33 = local_4188;
                        pcVar42 = "==";
                        do {
                          if (lVar40 == 0) break;
                          lVar40 = lVar40 + -1;
                          uVar8 = *pcVar33 == *pcVar42;
                          pcVar33 = pcVar33 + 1;
                          pcVar42 = pcVar42 + 1;
                        } while ((bool)uVar8);
                        if ((bool)uVar8) {
                          if (param_4[0x151] != 0) {
                            iVar14 = FUN_140119750();
                            return (ulonglong)((longlong)iVar14 == uVar41);
                          }
                          if ((int)param_4[0x153] == -1) {
                            return CONCAT71(0xffffffffffffff,uVar41 == 0);
                          }
                          return (ulonglong)((longlong)(int)param_4[0x153] == uVar41);
                        }
                        lVar40 = 2;
                        bVar45 = false;
                        pcVar33 = local_4188;
                        pcVar42 = "<";
                        do {
                          if (lVar40 == 0) break;
                          lVar40 = lVar40 + -1;
                          bVar45 = *pcVar33 == *pcVar42;
                          pcVar33 = pcVar33 + 1;
                          pcVar42 = pcVar42 + 1;
                        } while (bVar45);
                        if (bVar45) {
                          if (param_4[0x151] != 0) {
                            iVar14 = FUN_140119750();
                            return (ulonglong)((longlong)iVar14 < (longlong)uVar41);
                          }
                          if ((int)param_4[0x153] == -1) {
                            return CONCAT71(0xffffffffffffff,0 < (longlong)uVar41);
                          }
                          return (ulonglong)((longlong)(int)param_4[0x153] < (longlong)uVar41);
                        }
                      }
                    }
                    else {
                      iVar14 = _stricmp(local_4088,"money");
                      bVar45 = iVar14 == 0;
                      if (bVar45) {
                        lVar40 = 3;
                        pcVar33 = local_4188;
                        pcVar42 = "+=";
                        do {
                          if (lVar40 == 0) break;
                          lVar40 = lVar40 + -1;
                          bVar45 = *pcVar33 == *pcVar42;
                          pcVar33 = pcVar33 + 1;
                          pcVar42 = pcVar42 + 1;
                        } while (bVar45);
                        if (bVar45) {
                          plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
                          iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
                          if ((iVar14 != 0) && (iVar14 = FUN_140175470(param_4), iVar14 != 0)) {
                            iVar14 = FUN_140164ee0(param_4);
                            lVar40 = (longlong)iVar14 * uVar41 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)((longlong)iVar14 * uVar41)),8);
                            uVar41 = (lVar40 >> 6) - (lVar40 >> 0x3f);
                          }
                          uVar39 = FUN_140008520((int)local_a368[9]);
                          uVar39 = FUN_1400d6610(uVar39);
                          lVar40 = FUN_140006cc0(uVar39);
                          lVar34 = (**(code **)(*param_4 + 0x60))(param_4);
                          if (((longlong)(lVar34 + uVar41) < lVar40) && (lVar40 = (**(code **)(*param_4 + 0x60))(param_4), -1 < (longlong)(lVar40 + uVar41))) {
                            local_a418 = (char *)0x0;
                            uVar41 = (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,4,uVar41,1);
                            return uVar41;
                          }
                          return 0;
                        }
                        lVar40 = 3;
                        bVar45 = false;
                        pcVar33 = local_4188;
                        pcVar42 = "==";
                        do {
                          if (lVar40 == 0) break;
                          lVar40 = lVar40 + -1;
                          bVar45 = *pcVar33 == *pcVar42;
                          pcVar33 = pcVar33 + 1;
                          pcVar42 = pcVar42 + 1;
                        } while (bVar45);
                        if (bVar45) {
                          uVar28 = (**(code **)(*param_4 + 0x60))(param_4);
                          return (ulonglong)(uVar28 == uVar41);
                        }
                        lVar40 = 2;
                        bVar45 = false;
                        pcVar33 = local_4188;
                        pcVar42 = "<";
                        do {
                          if (lVar40 == 0) break;
                          lVar40 = lVar40 + -1;
                          bVar45 = *pcVar33 == *pcVar42;
                          pcVar33 = pcVar33 + 1;
                          pcVar42 = pcVar42 + 1;
                        } while (bVar45);
                        if (bVar45) {
                          lVar40 = (**(code **)(*param_4 + 0x60))(param_4);
                          return (ulonglong)(lVar40 < (longlong)uVar41);
                        }
                      }
                      else {
                        iVar14 = _stricmp(local_4088,"e_money_trial");
                        bVar45 = iVar14 == 0;
                        if (bVar45) {
                          lVar40 = 3;
                          pcVar33 = local_4188;
                          pcVar42 = "+=";
                          do {
                            if (lVar40 == 0) break;
                            lVar40 = lVar40 + -1;
                            bVar45 = *pcVar33 == *pcVar42;
                            pcVar33 = pcVar33 + 1;
                            pcVar42 = pcVar42 + 1;
                          } while (bVar45);
                          if (bVar45) {
                            plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
                            iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
                            if ((iVar14 != 0) && (iVar14 = FUN_140175470(param_4), iVar14 != 0)) {
                              iVar14 = FUN_140164ee0(param_4);
                              lVar40 = (longlong)iVar14 * uVar41 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)((longlong)iVar14 * uVar41)),8);
                              uVar41 = (lVar40 >> 6) - (lVar40 >> 0x3f);
                            }
                            uVar25 = 0;
                            local_a418 = (char *)0x0;
                            cVar7 = (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,0x1d,uVar41,1);
                            if (cVar7 == '\0') {
                              return 0;
                            }
                            if ((longlong)uVar41 < 1) {
                              uVar23 = (**(code **)(*param_4 + 8))(param_4);
                            }
                            else {
                              uVar23 = 0;
                              uVar25 = (**(code **)(*param_4 + 8))(param_4);
                            }
                            uVar12 = (int)(uint)uVar41 >> 0x1f;
                            local_a418 = (char *)CONCAT44(local_a418._4_4_,((uint)uVar41 ^ uVar12) - uVar12);
                            FUN_1401742b0(param_4,0x34,uVar23,uVar25);
                            return 1;
                          }
                        }
                        else {
                          iVar14 = _stricmp(local_4088,"e_money");
                          bVar45 = iVar14 == 0;
                          if (bVar45) {
                            lVar40 = 3;
                            pcVar33 = local_4188;
                            pcVar42 = "+=";
                            do {
                              if (lVar40 == 0) break;
                              lVar40 = lVar40 + -1;
                              bVar45 = *pcVar33 == *pcVar42;
                              pcVar33 = pcVar33 + 1;
                              pcVar42 = pcVar42 + 1;
                            } while (bVar45);
                            if (bVar45) {
                              plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
                              iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
                              if ((iVar14 != 0) && (iVar14 = FUN_140175470(param_4), iVar14 != 0)) {
                                iVar14 = FUN_140164ee0(param_4);
                                lVar40 = (longlong)iVar14 * uVar41 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)((longlong)iVar14 * uVar41)),8);
                                uVar41 = (lVar40 >> 6) - (lVar40 >> 0x3f);
                              }
                              uVar25 = 0;
                              local_a418 = (char *)0x0;
                              cVar7 = (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,0x1d,uVar41,1);
                              if (cVar7 == '\0') {
                                return 0;
                              }
                              if ((longlong)uVar41 < 1) {
                                uVar23 = (**(code **)(*param_4 + 8))(param_4);
                              }
                              else {
                                uVar23 = 0;
                                uVar25 = (**(code **)(*param_4 + 8))(param_4);
                              }
                              uVar12 = (int)(uint)uVar41 >> 0x1f;
                              local_a418 = (char *)CONCAT44(local_a418._4_4_,((uint)uVar41 ^ uVar12) - uVar12);
                              FUN_1401742b0(param_4,1,uVar23,uVar25);
                              return 1;
                            }
                            lVar40 = 3;
                            bVar45 = false;
                            pcVar33 = local_4188;
                            pcVar42 = "==";
                            do {
                              if (lVar40 == 0) break;
                              lVar40 = lVar40 + -1;
                              bVar45 = *pcVar33 == *pcVar42;
                              pcVar33 = pcVar33 + 1;
                              pcVar42 = pcVar42 + 1;
                            } while (bVar45);
                            if (bVar45) {
                              return (ulonglong)((longlong)*(int *)((longlong)param_4 + 0xfa4) == uVar41);
                            }
                            lVar40 = 2;
                            bVar45 = false;
                            pcVar33 = local_4188;
                            pcVar42 = "<";
                            do {
                              if (lVar40 == 0) break;
                              lVar40 = lVar40 + -1;
                              bVar45 = *pcVar33 == *pcVar42;
                              pcVar33 = pcVar33 + 1;
                              pcVar42 = pcVar42 + 1;
                            } while (bVar45);
                            if (bVar45) {
                              return (ulonglong)((longlong)*(int *)((longlong)param_4 + 0xfa4) < (longlong)uVar41);
                            }
                          }
                          else {
                            iVar14 = _stricmp(local_4088,"e_money_mono");
                            bVar45 = iVar14 == 0;
                            if (bVar45) {
                              lVar40 = 3;
                              pcVar33 = local_4188;
                              pcVar42 = "+=";
                              do {
                                if (lVar40 == 0) break;
                                lVar40 = lVar40 + -1;
                                bVar45 = *pcVar33 == *pcVar42;
                                pcVar33 = pcVar33 + 1;
                                pcVar42 = pcVar42 + 1;
                              } while (bVar45);
                              if (bVar45) {
                                plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
                                iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
                                if ((iVar14 != 0) && (iVar14 = FUN_140175470(param_4), iVar14 != 0)) {
                                  iVar14 = FUN_140164ee0(param_4);
                                  lVar40 = (longlong)iVar14 * uVar41 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)((longlong)iVar14 * uVar41)),8);
                                  uVar41 = (lVar40 >> 6) - (lVar40 >> 0x3f);
                                }
                                uVar25 = 0;
                                local_a418 = (char *)0x0;
                                cVar7 = (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,0x2d,uVar41,1);
                                if (cVar7 == '\0') {
                                  return 0;
                                }
                                if ((longlong)uVar41 < 1) {
                                  uVar23 = (**(code **)(*param_4 + 8))(param_4);
                                }
                                else {
                                  uVar23 = 0;
                                  uVar25 = (**(code **)(*param_4 + 8))(param_4);
                                }
                                uVar12 = (int)(uint)uVar41 >> 0x1f;
                                local_a418 = (char *)CONCAT44(local_a418._4_4_,((uint)uVar41 ^ uVar12) - uVar12);
                                FUN_140174470(param_4,1,uVar23,uVar25);
                                return 1;
                              }
                              lVar40 = 3;
                              bVar45 = false;
                              pcVar33 = local_4188;
                              pcVar42 = "==";
                              do {
                                if (lVar40 == 0) break;
                                lVar40 = lVar40 + -1;
                                bVar45 = *pcVar33 == *pcVar42;
                                pcVar33 = pcVar33 + 1;
                                pcVar42 = pcVar42 + 1;
                              } while (bVar45);
                              if (bVar45) {
                                iVar14 = FUN_140371860(param_4 + 0x1cf);
                                return (ulonglong)((longlong)iVar14 == uVar41);
                              }
                              lVar40 = 2;
                              bVar45 = false;
                              pcVar33 = local_4188;
                              pcVar42 = "<";
                              do {
                                if (lVar40 == 0) break;
                                lVar40 = lVar40 + -1;
                                bVar45 = *pcVar33 == *pcVar42;
                                pcVar33 = pcVar33 + 1;
                                pcVar42 = pcVar42 + 1;
                              } while (bVar45);
                              if (bVar45) {
                                iVar14 = FUN_140371860(param_4 + 0x1cf);
                                return (ulonglong)((longlong)iVar14 < (longlong)uVar41);
                              }
                            }
                            else {
                              iVar14 = _stricmp(local_4088,"exp");
                              bVar45 = iVar14 == 0;
                              if (bVar45) {
                                lVar40 = 3;
                                pcVar33 = local_4188;
                                pcVar42 = "+=";
                                do {
                                  if (lVar40 == 0) break;
                                  lVar40 = lVar40 + -1;
                                  bVar45 = *pcVar33 == *pcVar42;
                                  pcVar33 = pcVar33 + 1;
                                  pcVar42 = pcVar42 + 1;
                                } while (bVar45);
                                if (bVar45) {
                                  if ((longlong)uVar41 < 0) {
                                    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
                                    uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
                                    uVar13 = FUN_1400bb7e0(param_2);
                                    log_InlineLogDBERROR
                                              ("table:cq_action/cq_newaction, CGameAction::ProcessActionUser() ActionID:%u,ActionType:%u,n64Data:%I64d",
                                               (ulonglong)uVar13,(ulonglong)uVar12,uVar41);
                                    uVar41 = 0;
                                  }
                                  cVar7 = FUN_140178c90(param_4);
                                  if (cVar7 == '\0') {
                                    iVar14 = _stricmp(&local_1d48,"nocontribute");
                                    if (iVar14 == 0) {
                                      FUN_1401a7e10(param_4,uVar41,0,1);
                                    }
                                    else {
                                      FUN_1401a7e10(param_4,uVar41,1);
                                    }
                                    return 1;
                                  }
                                  pIVar27 = theInstance();
                                  lVar40 = param_4[2];
                                  uVar39 = (*(code *)**(undefined8 **)pIVar27)(pIVar27,"STR_EXP_DISABLE_AT_NO_EXP_MAP");
                                  (**(code **)(lVar40 + 0x358))(param_4 + 2,uVar39);
                                  return 0;
                                }
                                lVar40 = 3;
                                bVar45 = false;
                                pcVar33 = local_4188;
                                pcVar42 = "==";
                                do {
                                  if (lVar40 == 0) break;
                                  lVar40 = lVar40 + -1;
                                  bVar45 = *pcVar33 == *pcVar42;
                                  pcVar33 = pcVar33 + 1;
                                  pcVar42 = pcVar42 + 1;
                                } while (bVar45);
                                if (bVar45) {
                                  uVar28 = (**(code **)(*param_4 + 0xa0))(param_4);
                                  return (ulonglong)(uVar28 == uVar41);
                                }
                                lVar40 = 2;
                                bVar45 = false;
                                pcVar33 = local_4188;
                                pcVar42 = "<";
                                do {
                                  if (lVar40 == 0) break;
                                  lVar40 = lVar40 + -1;
                                  bVar45 = *pcVar33 == *pcVar42;
                                  pcVar33 = pcVar33 + 1;
                                  pcVar42 = pcVar42 + 1;
                                } while (bVar45);
                                if (bVar45) {
                                  lVar40 = (**(code **)(*param_4 + 0xa0))(param_4);
                                  return (ulonglong)(lVar40 < (longlong)uVar41);
                                }
                              }
                              else {
                                iVar14 = _stricmp(local_4088,"pk");
                                bVar45 = iVar14 == 0;
                                if (bVar45) {
                                  lVar40 = 3;
                                  pcVar33 = local_4188;
                                  pcVar42 = "+=";
                                  do {
                                    if (lVar40 == 0) break;
                                    lVar40 = lVar40 + -1;
                                    bVar45 = *pcVar33 == *pcVar42;
                                    pcVar33 = pcVar33 + 1;
                                    pcVar42 = pcVar42 + 1;
                                  } while (bVar45);
                                  if (bVar45) {
                                    FUN_1401a9c40(param_4,uVar41 & 0xffffffff);
                                  }
                                  else {
                                    lVar40 = 3;
                                    pcVar33 = local_4188;
                                    pcVar42 = "==";
                                    do {
                                      if (lVar40 == 0) break;
                                      lVar40 = lVar40 + -1;
                                      bVar45 = *pcVar33 == *pcVar42;
                                      pcVar33 = pcVar33 + 1;
                                      pcVar42 = pcVar42 + 1;
                                    } while (bVar45);
                                    if (bVar45) {
                                      if ((longlong)*(short *)((longlong)param_4 + 0xef4) == uVar41) {
                                        return 1;
                                      }
                                    }
                                    else {
                                      lVar40 = 2;
                                      pcVar33 = local_4188;
                                      pcVar42 = "<";
                                      do {
                                        if (lVar40 == 0) break;
                                        lVar40 = lVar40 + -1;
                                        bVar45 = *pcVar33 == *pcVar42;
                                        pcVar33 = pcVar33 + 1;
                                        pcVar42 = pcVar42 + 1;
                                      } while (bVar45);
                                      if ((bVar45) && ((longlong)*(short *)((longlong)param_4 + 0xef4) < (longlong)uVar41)) {
                                        return 1;
                                      }
                                    }
                                  }
                                }
                                else {
                                  iVar14 = _stricmp(local_4088,"profession");
                                  bVar45 = iVar14 == 0;
                                  if (bVar45) {
                                    lVar40 = 3;
                                    pcVar33 = local_4188;
                                    pcVar42 = "==";
                                    do {
                                      if (lVar40 == 0) break;
                                      lVar40 = lVar40 + -1;
                                      bVar45 = *pcVar33 == *pcVar42;
                                      pcVar33 = pcVar33 + 1;
                                      pcVar42 = pcVar42 + 1;
                                    } while (bVar45);
                                    if (bVar45) {
                                      return (ulonglong)(*(byte *)((longlong)param_4 + 0xeee) == uVar41);
                                    }
                                    lVar40 = 3;
                                    bVar45 = false;
                                    pcVar33 = local_4188;
                                    pcVar42 = ">=";
                                    do {
                                      if (lVar40 == 0) break;
                                      lVar40 = lVar40 + -1;
                                      bVar45 = *pcVar33 == *pcVar42;
                                      pcVar33 = pcVar33 + 1;
                                      pcVar42 = pcVar42 + 1;
                                    } while (bVar45);
                                    if (bVar45) {
                                      return (ulonglong)((longlong)uVar41 <= (longlong)(ulonglong)*(byte *)((longlong)param_4 + 0xeee));
                                    }
                                    lVar40 = 3;
                                    bVar45 = false;
                                    pcVar33 = local_4188;
                                    pcVar42 = "<=";
                                    do {
                                      if (lVar40 == 0) break;
                                      lVar40 = lVar40 + -1;
                                      bVar45 = *pcVar33 == *pcVar42;
                                      pcVar33 = pcVar33 + 1;
                                      pcVar42 = pcVar42 + 1;
                                    } while (bVar45);
                                    if (bVar45) {
                                      return (ulonglong)((longlong)(ulonglong)*(byte *)((longlong)param_4 + 0xeee) <= (longlong)uVar41);
                                    }
                                    lVar40 = 4;
                                    bVar45 = false;
                                    pcVar33 = local_4188;
                                    pcVar42 = "set";
                                    do {
                                      if (lVar40 == 0) break;
                                      lVar40 = lVar40 + -1;
                                      bVar45 = *pcVar33 == *pcVar42;
                                      pcVar33 = pcVar33 + 1;
                                      pcVar42 = pcVar42 + 1;
                                    } while (bVar45);
                                    if (bVar45) {
                                      FUN_140372400(param_4 + 0x1cf,uVar41 & 0xffffffff,1);
                                      FUN_1401a6420(param_4,7,uVar41);
                                      return 1;
                                    }
                                  }
                                  else {
                                    iVar14 = _stricmp(local_4088,"level");
                                    bVar45 = iVar14 == 0;
                                    if (bVar45) {
                                      lVar40 = 3;
                                      pcVar33 = local_4188;
                                      pcVar42 = "+=";
                                      do {
                                        if (lVar40 == 0) break;
                                        lVar40 = lVar40 + -1;
                                        bVar45 = *pcVar33 == *pcVar42;
                                        pcVar33 = pcVar33 + 1;
                                        pcVar42 = pcVar42 + 1;
                                      } while (bVar45);
                                      if (bVar45) {
                                        cVar7 = FUN_140178c90(param_4);
                                        if (cVar7 != '\0') {
                                          pIVar27 = theInstance();
                                          lVar40 = param_4[2];
                                          uVar39 = (*(code *)**(undefined8 **)pIVar27)(pIVar27,"STR_EXP_DISABLE_AT_NO_EXP_MAP");
                                          (**(code **)(lVar40 + 0x358))(param_4 + 2,uVar39);
                                          return 0;
                                        }
                                        FUN_1401a6420(param_4,5,0,1);
                                        (**(code **)(*param_4 + 200))(param_4,1,0);
                                        cVar7 = (**(code **)(*param_4 + 0x118))(param_4);
                                        if (cVar7 == '\0') {
                                          local_a418 = (char *)0x0;
                                          (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,3,1);
                                        }
                                        else {
                                          (**(code **)(*param_4 + 0xd0))(param_4,1);
                                        }
                                        uVar25 = (**(code **)(param_4[2] + 0x80))(param_4 + 2);
                                        FUN_1401a6420(param_4,0,uVar25,1);
                                        (**(code **)(*param_4 + 0xd8))(param_4);
                                        (**(code **)(param_4[2] + 0x338))(param_4 + 2);
                                      }
                                      else {
                                        lVar40 = 3;
                                        pcVar33 = local_4188;
                                        pcVar42 = "==";
                                        do {
                                          if (lVar40 == 0) break;
                                          lVar40 = lVar40 + -1;
                                          bVar45 = *pcVar33 == *pcVar42;
                                          pcVar33 = pcVar33 + 1;
                                          pcVar42 = pcVar42 + 1;
                                        } while (bVar45);
                                        if (bVar45) {
                                          iVar14 = (**(code **)(param_4[2] + 0x70))();
                                          if ((longlong)iVar14 == uVar41) {
                                            return 1;
                                          }
                                        }
                                        else {
                                          lVar40 = 2;
                                          pcVar33 = local_4188;
                                          pcVar42 = "<";
                                          do {
                                            if (lVar40 == 0) break;
                                            lVar40 = lVar40 + -1;
                                            bVar45 = *pcVar33 == *pcVar42;
                                            pcVar33 = pcVar33 + 1;
                                            pcVar42 = pcVar42 + 1;
                                          } while (bVar45);
                                          if ((bVar45) && (iVar14 = (**(code **)(param_4[2] + 0x70))(), (longlong)iVar14 < (longlong)uVar41)) {
                                            return 1;
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      iVar14 = _stricmp(local_4088,"force");
                                      bVar45 = iVar14 == 0;
                                      if (!bVar45) {
                                        iVar14 = _stricmp(local_4088,"strength");
                                        bVar45 = iVar14 == 0;
                                        if (!bVar45) {
                                          iVar14 = _stricmp(local_4088,"speed");
                                          bVar45 = iVar14 == 0;
                                          if (bVar45) {
                                            lVar40 = 3;
                                            pcVar33 = local_4188;
                                            pcVar42 = "+=";
                                            do {
                                              if (lVar40 == 0) break;
                                              lVar40 = lVar40 + -1;
                                              bVar45 = *pcVar33 == *pcVar42;
                                              pcVar33 = pcVar33 + 1;
                                              pcVar42 = pcVar42 + 1;
                                            } while (bVar45);
                                            if (bVar45) {
                                              local_a418 = (char *)0x0;
                                              (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,0x10,uVar41,1);
                                              return 1;
                                            }
                                            lVar40 = 3;
                                            bVar45 = false;
                                            pcVar33 = local_4188;
                                            pcVar42 = "==";
                                            do {
                                              if (lVar40 == 0) break;
                                              lVar40 = lVar40 + -1;
                                              bVar45 = *pcVar33 == *pcVar42;
                                              pcVar33 = pcVar33 + 1;
                                              pcVar42 = pcVar42 + 1;
                                            } while (bVar45);
                                            if (bVar45) {
                                              return (ulonglong)(*(ushort *)((longlong)param_4 + 0xedc) == uVar41);
                                            }
                                            lVar40 = 2;
                                            bVar45 = false;
                                            pcVar33 = local_4188;
                                            pcVar42 = "<";
                                            do {
                                              if (lVar40 == 0) break;
                                              lVar40 = lVar40 + -1;
                                              bVar45 = *pcVar33 == *pcVar42;
                                              pcVar33 = pcVar33 + 1;
                                              pcVar42 = pcVar42 + 1;
                                            } while (bVar45);
                                            if (bVar45) {
                                              return (ulonglong)((longlong)(ulonglong)*(ushort *)((longlong)param_4 + 0xedc) < (longlong)uVar41);
                                            }
                                            lVar40 = 3;
                                            bVar45 = false;
                                            pcVar33 = local_4188;
                                            pcVar42 = "-=";
                                            do {
                                              if (lVar40 == 0) break;
                                              lVar40 = lVar40 + -1;
                                              bVar45 = *pcVar33 == *pcVar42;
                                              pcVar33 = pcVar33 + 1;
                                              pcVar42 = pcVar42 + 1;
                                            } while (bVar45);
                                            if (bVar45) {
                                              if (0 < (longlong)uVar41) {
                                                uVar28 = (ulonglong)*(ushort *)((longlong)param_4 + 0xedc);
                                                if ((longlong)uVar41 < (longlong)uVar28) {
                                                  FUN_1401a6420(param_4,0x10,uVar28 - uVar41,1);
                                                  local_a418 = (char *)0x0;
                                                  (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,uVar41,1);
                                                }
                                                else {
                                                  FUN_1401a6420(param_4,0x10,0,1);
                                                  local_a418 = (char *)0x0;
                                                  (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,uVar28,1);
                                                }
                                                return 1;
                                              }
                                              return 0;
                                            }
                                          }
                                          else {
                                            iVar14 = _stricmp(local_4088,"health");
                                            bVar45 = iVar14 == 0;
                                            if (bVar45) {
                                              lVar40 = 3;
                                              pcVar33 = local_4188;
                                              pcVar42 = "+=";
                                              do {
                                                if (lVar40 == 0) break;
                                                lVar40 = lVar40 + -1;
                                                bVar45 = *pcVar33 == *pcVar42;
                                                pcVar33 = pcVar33 + 1;
                                                pcVar42 = pcVar42 + 1;
                                              } while (bVar45);
                                              if (bVar45) {
                                                local_a418 = (char *)0x0;
                                                (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,0xe,uVar41,1);
                                                return 1;
                                              }
                                              lVar40 = 3;
                                              bVar45 = false;
                                              pcVar33 = local_4188;
                                              pcVar42 = "==";
                                              do {
                                                if (lVar40 == 0) break;
                                                lVar40 = lVar40 + -1;
                                                bVar45 = *pcVar33 == *pcVar42;
                                                pcVar33 = pcVar33 + 1;
                                                pcVar42 = pcVar42 + 1;
                                              } while (bVar45);
                                              if (bVar45) {
                                                return (ulonglong)(*(ushort *)((longlong)param_4 + 0xede) == uVar41);
                                              }
                                              lVar40 = 2;
                                              bVar45 = false;
                                              pcVar33 = local_4188;
                                              pcVar42 = "<";
                                              do {
                                                if (lVar40 == 0) break;
                                                lVar40 = lVar40 + -1;
                                                bVar45 = *pcVar33 == *pcVar42;
                                                pcVar33 = pcVar33 + 1;
                                                pcVar42 = pcVar42 + 1;
                                              } while (bVar45);
                                              if (bVar45) {
                                                return (ulonglong)((longlong)(ulonglong)*(ushort *)((longlong)param_4 + 0xede) < (longlong)uVar41);
                                              }
                                              lVar40 = 3;
                                              bVar45 = false;
                                              pcVar33 = local_4188;
                                              pcVar42 = "-=";
                                              do {
                                                if (lVar40 == 0) break;
                                                lVar40 = lVar40 + -1;
                                                bVar45 = *pcVar33 == *pcVar42;
                                                pcVar33 = pcVar33 + 1;
                                                pcVar42 = pcVar42 + 1;
                                              } while (bVar45);
                                              if (bVar45) {
                                                if (0 < (longlong)uVar41) {
                                                  uVar28 = (ulonglong)*(ushort *)((longlong)param_4 + 0xede);
                                                  if ((longlong)uVar41 < (longlong)uVar28) {
                                                    FUN_1401a6420(param_4,0xe,uVar28 - uVar41,1);
                                                    local_a418 = (char *)0x0;
                                                    (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,uVar41,1);
                                                  }
                                                  else {
                                                    FUN_1401a6420(param_4,0xe,0,1);
                                                    local_a418 = (char *)0x0;
                                                    (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,uVar28,1);
                                                  }
                                                  return 1;
                                                }
                                                return 0;
                                              }
                                            }
                                            else {
                                              iVar14 = _stricmp(local_4088,"soul");
                                              bVar45 = iVar14 == 0;
                                              if (bVar45) {
                                                lVar40 = 3;
                                                pcVar33 = local_4188;
                                                pcVar42 = "+=";
                                                do {
                                                  if (lVar40 == 0) break;
                                                  lVar40 = lVar40 + -1;
                                                  bVar45 = *pcVar33 == *pcVar42;
                                                  pcVar33 = pcVar33 + 1;
                                                  pcVar42 = pcVar42 + 1;
                                                } while (bVar45);
                                                if (bVar45) {
                                                  local_a418 = (char *)0x0;
                                                  (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,0xd,uVar41,1);
                                                  return 1;
                                                }
                                                lVar40 = 3;
                                                bVar45 = false;
                                                pcVar33 = local_4188;
                                                pcVar42 = "==";
                                                do {
                                                  if (lVar40 == 0) break;
                                                  lVar40 = lVar40 + -1;
                                                  bVar45 = *pcVar33 == *pcVar42;
                                                  pcVar33 = pcVar33 + 1;
                                                  pcVar42 = pcVar42 + 1;
                                                } while (bVar45);
                                                if (bVar45) {
                                                  return (ulonglong)(*(ushort *)(param_4 + 0x1dc) == uVar41);
                                                }
                                                lVar40 = 2;
                                                bVar45 = false;
                                                pcVar33 = local_4188;
                                                pcVar42 = "<";
                                                do {
                                                  if (lVar40 == 0) break;
                                                  lVar40 = lVar40 + -1;
                                                  bVar45 = *pcVar33 == *pcVar42;
                                                  pcVar33 = pcVar33 + 1;
                                                  pcVar42 = pcVar42 + 1;
                                                } while (bVar45);
                                                if (bVar45) {
                                                  return (ulonglong)((longlong)(ulonglong)*(ushort *)(param_4 + 0x1dc) < (longlong)uVar41);
                                                }
                                                lVar40 = 3;
                                                bVar45 = false;
                                                pcVar33 = local_4188;
                                                pcVar42 = "-=";
                                                do {
                                                  if (lVar40 == 0) break;
                                                  lVar40 = lVar40 + -1;
                                                  bVar45 = *pcVar33 == *pcVar42;
                                                  pcVar33 = pcVar33 + 1;
                                                  pcVar42 = pcVar42 + 1;
                                                } while (bVar45);
                                                if (bVar45) {
                                                  if (0 < (longlong)uVar41) {
                                                    uVar28 = (ulonglong)*(ushort *)(param_4 + 0x1dc);
                                                    if ((longlong)uVar41 < (longlong)uVar28) {
                                                      FUN_1401a6420(param_4,0xd,uVar28 - uVar41,1);
                                                      local_a418 = (char *)0x0;
                                                      (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,uVar41,1);
                                                    }
                                                    else {
                                                      FUN_1401a6420(param_4,0xd,0,1);
                                                      local_a418 = (char *)0x0;
                                                      (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,uVar28,1);
                                                    }
                                                    return 1;
                                                  }
                                                  return 0;
                                                }
                                              }
                                              else {
                                                iVar14 = _stricmp(local_4088,"rank");
                                                if (iVar14 == 0) {
                                                  iVar14 = (**(code **)(param_4[2] + 0x170))();
                                                  plVar26 = (longlong *)FUN_140087ed0();
                                                  lVar40 = *plVar26;
                                                  uVar25 = (**(code **)(*param_4 + 8))(param_4);
                                                  iVar24 = (**(code **)(lVar40 + 0xf8))(plVar26,uVar25);
                                                  if (iVar14 == 0) {
                                                    return 0;
                                                  }
                                                  lVar40 = 3;
                                                  bVar45 = false;
                                                  pcVar33 = local_4188;
                                                  pcVar42 = "==";
                                                  do {
                                                    if (lVar40 == 0) break;
                                                    lVar40 = lVar40 + -1;
                                                    bVar45 = *pcVar33 == *pcVar42;
                                                    pcVar33 = pcVar33 + 1;
                                                    pcVar42 = pcVar42 + 1;
                                                  } while (bVar45);
                                                  if (bVar45) {
                                                    return (ulonglong)((longlong)iVar24 == uVar41);
                                                  }
                                                  lVar40 = 2;
                                                  bVar45 = false;
                                                  pcVar33 = local_4188;
                                                  pcVar42 = "<";
                                                  do {
                                                    if (lVar40 == 0) break;
                                                    lVar40 = lVar40 + -1;
                                                    bVar45 = *pcVar33 == *pcVar42;
                                                    pcVar33 = pcVar33 + 1;
                                                    pcVar42 = pcVar42 + 1;
                                                  } while (bVar45);
                                                  if (bVar45) {
                                                    return (ulonglong)((longlong)iVar24 < (longlong)uVar41);
                                                  }
                                                }
                                                else {
                                                  iVar14 = _stricmp(local_4088,"iterator");
                                                  bVar45 = iVar14 == 0;
                                                  if (bVar45) {
                                                    lVar40 = 2;
                                                    pcVar33 = local_4188;
                                                    pcVar42 = "=";
                                                    do {
                                                      if (lVar40 == 0) break;
                                                      lVar40 = lVar40 + -1;
                                                      bVar45 = *pcVar33 == *pcVar42;
                                                      pcVar33 = pcVar33 + 1;
                                                      pcVar42 = pcVar42 + 1;
                                                    } while (bVar45);
                                                    if (bVar45) {
                                                      *(uint *)(param_4 + 0x14d) = uVar12;
                                                      return 1;
                                                    }
                                                    lVar40 = 3;
                                                    bVar45 = false;
                                                    pcVar33 = local_4188;
                                                    pcVar42 = "<=";
                                                    do {
                                                      if (lVar40 == 0) break;
                                                      lVar40 = lVar40 + -1;
                                                      bVar45 = *pcVar33 == *pcVar42;
                                                      pcVar33 = pcVar33 + 1;
                                                      pcVar42 = pcVar42 + 1;
                                                    } while (bVar45);
                                                    if (bVar45) {
                                                      if ((longlong)(int)param_4[0x14d] <= (longlong)uVar41) {
                                                        return 1;
                                                      }
                                                    }
                                                    else {
                                                      lVar40 = 3;
                                                      pcVar33 = local_4188;
                                                      pcVar42 = "+=";
                                                      do {
                                                        if (lVar40 == 0) break;
                                                        lVar40 = lVar40 + -1;
                                                        bVar45 = *pcVar33 == *pcVar42;
                                                        pcVar33 = pcVar33 + 1;
                                                        pcVar42 = pcVar42 + 1;
                                                      } while (bVar45);
                                                      if (bVar45) {
                                                        *(uint *)(param_4 + 0x14d) = (int)param_4[0x14d] + uVar12;
                                                        return 1;
                                                      }
                                                      lVar40 = 3;
                                                      bVar45 = false;
                                                      pcVar33 = local_4188;
                                                      pcVar42 = "==";
                                                      do {
                                                        if (lVar40 == 0) break;
                                                        lVar40 = lVar40 + -1;
                                                        bVar45 = *pcVar33 == *pcVar42;
                                                        pcVar33 = pcVar33 + 1;
                                                        pcVar42 = pcVar42 + 1;
                                                      } while (bVar45);
                                                      if ((bVar45) && ((longlong)(int)param_4[0x14d] == uVar41)) {
                                                        return 1;
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    iVar14 = _stricmp(local_4088,"crime");
                                                    bVar45 = iVar14 == 0;
                                                    if (bVar45) {
                                                      lVar40 = 3;
                                                      pcVar33 = local_4188;
                                                      pcVar42 = "==";
                                                      do {
                                                        if (lVar40 == 0) break;
                                                        lVar40 = lVar40 + -1;
                                                        bVar45 = *pcVar33 == *pcVar42;
                                                        pcVar33 = pcVar33 + 1;
                                                        pcVar42 = pcVar42 + 1;
                                                      } while (bVar45);
                                                      if (bVar45) {
                                                        if (uVar41 != 0) {
                                                          uVar41 = (**(code **)(param_4[2] + 0x2d8))(param_4 + 2,1);
                                                          return uVar41;
                                                        }
                                                        cVar7 = (**(code **)(param_4[2] + 0x2d8))(param_4 + 2,1);
                                                        return (ulonglong)(cVar7 == '\0');
                                                      }
                                                      lVar40 = 4;
                                                      bVar45 = false;
                                                      pcVar33 = local_4188;
                                                      pcVar42 = "set";
                                                      do {
                                                        if (lVar40 == 0) break;
                                                        lVar40 = lVar40 + -1;
                                                        bVar45 = *pcVar33 == *pcVar42;
                                                        pcVar33 = pcVar33 + 1;
                                                        pcVar42 = pcVar42 + 1;
                                                      } while (bVar45);
                                                      if (bVar45) {
                                                        if (uVar41 != 0) {
                                                          FUN_1401ab480(param_4,1,0xf);
                                                          return 1;
                                                        }
                                                        param_4 = param_4 + 2;
                                                        if (param_4 != (longlong *)0x0) {
                                                          plVar26 = (longlong *)FUN_1401181a0();
                                                          lVar40 = *plVar26;
                                                          uVar25 = (**(code **)(*param_4 + 0x10))(param_4);
                                                          (**(code **)(lVar40 + 0x10))(plVar26,uVar25,1);
                                                        }
                                                        return 1;
                                                      }
                                                    }
                                                    else {
                                                      iVar14 = _stricmp(local_4088,"virtue");
                                                      bVar45 = iVar14 == 0;
                                                      if (bVar45) {
                                                        lVar40 = 3;
                                                        pcVar33 = local_4188;
                                                        pcVar42 = "+=";
                                                        do {
                                                          if (lVar40 == 0) break;
                                                          lVar40 = lVar40 + -1;
                                                          bVar45 = *pcVar33 == *pcVar42;
                                                          pcVar33 = pcVar33 + 1;
                                                          pcVar42 = pcVar42 + 1;
                                                        } while (bVar45);
                                                        if (bVar45) {
                                                          iVar14 = FUN_140175470(param_4);
                                                          if (iVar14 != 0) {
                                                            iVar14 = FUN_140164ee0(param_4);
                                                            lVar40 = (longlong)iVar14 * uVar41 +
                                                                     SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)((longlong)iVar14 * uVar41)),8);
                                                            uVar41 = (lVar40 >> 6) - (lVar40 >> 0x3f);
                                                          }
                                                          local_a418 = (char *)0x0;
                                                          uVar41 = (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,0x17,uVar41,1);
                                                          return uVar41;
                                                        }
                                                        lVar40 = 3;
                                                        bVar45 = false;
                                                        pcVar33 = local_4188;
                                                        pcVar42 = "==";
                                                        do {
                                                          if (lVar40 == 0) break;
                                                          lVar40 = lVar40 + -1;
                                                          bVar45 = *pcVar33 == *pcVar42;
                                                          pcVar33 = pcVar33 + 1;
                                                          pcVar42 = pcVar42 + 1;
                                                        } while (bVar45);
                                                        if (bVar45) {
                                                          return (ulonglong)((longlong)(int)param_4[0x1e5] == uVar41);
                                                        }
                                                        lVar40 = 2;
                                                        bVar45 = false;
                                                        pcVar33 = local_4188;
                                                        pcVar42 = "<";
                                                        do {
                                                          if (lVar40 == 0) break;
                                                          lVar40 = lVar40 + -1;
                                                          bVar45 = *pcVar33 == *pcVar42;
                                                          pcVar33 = pcVar33 + 1;
                                                          pcVar42 = pcVar42 + 1;
                                                        } while (bVar45);
                                                        if (bVar45) {
                                                          return (ulonglong)((longlong)(int)param_4[0x1e5] < (longlong)uVar41);
                                                        }
                                                      }
                                                      else {
                                                        iVar14 = _stricmp(local_4088,"gamecard");
                                                        bVar45 = iVar14 == 0;
                                                        if (bVar45) {
                                                          lVar40 = 3;
                                                          pcVar33 = local_4188;
                                                          pcVar42 = "==";
                                                          do {
                                                            if (lVar40 == 0) break;
                                                            lVar40 = lVar40 + -1;
                                                            bVar45 = *pcVar33 == *pcVar42;
                                                            pcVar33 = pcVar33 + 1;
                                                            pcVar42 = pcVar42 + 1;
                                                          } while (bVar45);
                                                          if (bVar45) {
                                                            iVar14 = FUN_140330ef0(param_4);
                                                            return (ulonglong)((longlong)iVar14 == uVar41);
                                                          }
                                                          lVar40 = 3;
                                                          bVar45 = false;
                                                          pcVar33 = local_4188;
                                                          pcVar42 = ">=";
                                                          do {
                                                            if (lVar40 == 0) break;
                                                            lVar40 = lVar40 + -1;
                                                            bVar45 = *pcVar33 == *pcVar42;
                                                            pcVar33 = pcVar33 + 1;
                                                            pcVar42 = pcVar42 + 1;
                                                          } while (bVar45);
                                                          if (bVar45) {
                                                            iVar14 = FUN_140330ef0(param_4);
                                                            return (ulonglong)((longlong)uVar41 <= (longlong)iVar14);
                                                          }
                                                          lVar40 = 3;
                                                          bVar45 = false;
                                                          pcVar33 = local_4188;
                                                          pcVar42 = "<=";
                                                          do {
                                                            if (lVar40 == 0) break;
                                                            lVar40 = lVar40 + -1;
                                                            bVar45 = *pcVar33 == *pcVar42;
                                                            pcVar33 = pcVar33 + 1;
                                                            pcVar42 = pcVar42 + 1;
                                                          } while (bVar45);
                                                          if (bVar45) {
                                                            iVar14 = FUN_140330ef0(param_4);
                                                            return (ulonglong)((longlong)iVar14 <= (longlong)uVar41);
                                                          }
                                                        }
                                                        else {
                                                          iVar14 = _stricmp(local_4088,"gamecard2");
                                                          bVar45 = iVar14 == 0;
                                                          if (bVar45) {
                                                            lVar40 = 3;
                                                            pcVar33 = local_4188;
                                                            pcVar42 = "==";
                                                            do {
                                                              if (lVar40 == 0) break;
                                                              lVar40 = lVar40 + -1;
                                                              bVar45 = *pcVar33 == *pcVar42;
                                                              pcVar33 = pcVar33 + 1;
                                                              pcVar42 = pcVar42 + 1;
                                                            } while (bVar45);
                                                            if (bVar45) {
                                                              iVar14 = FUN_140330f80(param_4);
                                                              return (ulonglong)((longlong)iVar14 == uVar41);
                                                            }
                                                            lVar40 = 3;
                                                            bVar45 = false;
                                                            pcVar33 = local_4188;
                                                            pcVar42 = ">=";
                                                            do {
                                                              if (lVar40 == 0) break;
                                                              lVar40 = lVar40 + -1;
                                                              bVar45 = *pcVar33 == *pcVar42;
                                                              pcVar33 = pcVar33 + 1;
                                                              pcVar42 = pcVar42 + 1;
                                                            } while (bVar45);
                                                            if (bVar45) {
                                                              iVar14 = FUN_140330f80(param_4);
                                                              return (ulonglong)((longlong)uVar41 <= (longlong)iVar14);
                                                            }
                                                            lVar40 = 3;
                                                            bVar45 = false;
                                                            pcVar33 = local_4188;
                                                            pcVar42 = "<=";
                                                            do {
                                                              if (lVar40 == 0) break;
                                                              lVar40 = lVar40 + -1;
                                                              bVar45 = *pcVar33 == *pcVar42;
                                                              pcVar33 = pcVar33 + 1;
                                                              pcVar42 = pcVar42 + 1;
                                                            } while (bVar45);
                                                            if (bVar45) {
                                                              iVar14 = FUN_140330f80(param_4);
                                                              return (ulonglong)((longlong)iVar14 <= (longlong)uVar41);
                                                            }
                                                          }
                                                          else {
                                                            iVar14 = _stricmp(local_4088,"xp");
                                                            bVar45 = iVar14 == 0;
                                                            if (bVar45) {
                                                              lVar40 = 3;
                                                              pcVar33 = local_4188;
                                                              pcVar42 = "+=";
                                                              do {
                                                                if (lVar40 == 0) break;
                                                                lVar40 = lVar40 + -1;
                                                                bVar45 = *pcVar33 == *pcVar42;
                                                                pcVar33 = pcVar33 + 1;
                                                                pcVar42 = pcVar42 + 1;
                                                              } while (bVar45);
                                                              if (bVar45) {
                                                                FUN_140183d90(param_4,uVar41 & 0xffffffff,1);
                                                                return 1;
                                                              }
                                                              lVar40 = 4;
                                                              bVar45 = false;
                                                              pcVar33 = local_4188;
                                                              pcVar42 = "set";
                                                              do {
                                                                if (lVar40 == 0) break;
                                                                lVar40 = lVar40 + -1;
                                                                bVar45 = *pcVar33 == *pcVar42;
                                                                pcVar33 = pcVar33 + 1;
                                                                pcVar42 = pcVar42 + 1;
                                                              } while (bVar45);
                                                              if (bVar45) {
                                                                FUN_1401a9e70(param_4,uVar41 & 0xffffffff);
                                                                return 1;
                                                              }
                                                              lVar40 = 2;
                                                              bVar45 = false;
                                                              pcVar33 = local_4188;
                                                              pcVar42 = "<";
                                                              do {
                                                                if (lVar40 == 0) break;
                                                                lVar40 = lVar40 + -1;
                                                                bVar45 = *pcVar33 == *pcVar42;
                                                                pcVar33 = pcVar33 + 1;
                                                                pcVar42 = pcVar42 + 1;
                                                              } while (bVar45);
                                                              if (bVar45) {
                                                                iVar14 = FUN_140161fb0(param_4);
                                                                return (ulonglong)((longlong)iVar14 < (longlong)uVar41);
                                                              }
                                                              lVar40 = 3;
                                                              bVar45 = false;
                                                              pcVar33 = local_4188;
                                                              pcVar42 = "==";
                                                              do {
                                                                if (lVar40 == 0) break;
                                                                lVar40 = lVar40 + -1;
                                                                bVar45 = *pcVar33 == *pcVar42;
                                                                pcVar33 = pcVar33 + 1;
                                                                pcVar42 = pcVar42 + 1;
                                                              } while (bVar45);
                                                              if (bVar45) {
                                                                iVar14 = FUN_140161fb0(param_4);
                                                                return (ulonglong)((longlong)iVar14 == uVar41);
                                                              }
                                                            }
                                                            else {
                                                              iVar14 = _stricmp(local_4088,"ep");
                                                              bVar45 = iVar14 == 0;
                                                              if (bVar45) {
                                                                lVar40 = 3;
                                                                pcVar33 = local_4188;
                                                                pcVar42 = "+=";
                                                                do {
                                                                  if (lVar40 == 0) break;
                                                                  lVar40 = lVar40 + -1;
                                                                  bVar45 = *pcVar33 == *pcVar42;
                                                                  pcVar33 = pcVar33 + 1;
                                                                  pcVar42 = pcVar42 + 1;
                                                                } while (bVar45);
                                                                if (bVar45) {
                                                                  local_a418 = (char *)0x0;
                                                                  uVar41 = (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,8,uVar41,1);
                                                                  return uVar41;
                                                                }
                                                                lVar40 = 4;
                                                                bVar45 = false;
                                                                pcVar33 = local_4188;
                                                                pcVar42 = "set";
                                                                do {
                                                                  if (lVar40 == 0) break;
                                                                  lVar40 = lVar40 + -1;
                                                                  bVar45 = *pcVar33 == *pcVar42;
                                                                  pcVar33 = pcVar33 + 1;
                                                                  pcVar42 = pcVar42 + 1;
                                                                } while (bVar45);
                                                                if (bVar45) {
                                                                  FUN_1401a6420(param_4,8,uVar41);
                                                                  return 1;
                                                                }
                                                                lVar40 = 2;
                                                                bVar45 = false;
                                                                pcVar33 = local_4188;
                                                                pcVar42 = "<";
                                                                do {
                                                                  if (lVar40 == 0) break;
                                                                  lVar40 = lVar40 + -1;
                                                                  bVar45 = *pcVar33 == *pcVar42;
                                                                  pcVar33 = pcVar33 + 1;
                                                                  pcVar42 = pcVar42 + 1;
                                                                } while (bVar45);
                                                                if (bVar45) {
                                                                  return (ulonglong)
                                                                         ((longlong)(ulonglong)*(ushort *)((longlong)param_4 + 0xf92) < (longlong)uVar41);
                                                                }
                                                                lVar40 = 3;
                                                                bVar45 = false;
                                                                pcVar33 = local_4188;
                                                                pcVar42 = "==";
                                                                do {
                                                                  if (lVar40 == 0) break;
                                                                  lVar40 = lVar40 + -1;
                                                                  bVar45 = *pcVar33 == *pcVar42;
                                                                  pcVar33 = pcVar33 + 1;
                                                                  pcVar42 = pcVar42 + 1;
                                                                } while (bVar45);
                                                                if (bVar45) {
                                                                  return (ulonglong)(*(ushort *)((longlong)param_4 + 0xf92) == uVar41);
                                                                }
                                                              }
                                                              else {
                                                                iVar14 = _stricmp(local_4088,"addpoint");
                                                                bVar45 = iVar14 == 0;
                                                                if (bVar45) {
                                                                  lVar40 = 3;
                                                                  pcVar33 = local_4188;
                                                                  pcVar42 = "+=";
                                                                  do {
                                                                    if (lVar40 == 0) break;
                                                                    lVar40 = lVar40 + -1;
                                                                    bVar45 = *pcVar33 == *pcVar42;
                                                                    pcVar33 = pcVar33 + 1;
                                                                    pcVar42 = pcVar42 + 1;
                                                                  } while (bVar45);
                                                                  if (bVar45) {
                                                                    local_a418 = (char *)0x0;
                                                                    uVar41 = (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,uVar41,1);
                                                                    return uVar41;
                                                                  }
                                                                  lVar40 = 4;
                                                                  bVar45 = false;
                                                                  pcVar33 = local_4188;
                                                                  pcVar42 = "set";
                                                                  do {
                                                                    if (lVar40 == 0) break;
                                                                    lVar40 = lVar40 + -1;
                                                                    bVar45 = *pcVar33 == *pcVar42;
                                                                    pcVar33 = pcVar33 + 1;
                                                                    pcVar42 = pcVar42 + 1;
                                                                  } while (bVar45);
                                                                  if (bVar45) {
                                                                    FUN_1401a6420(param_4,10,uVar41,1);
                                                                    return 1;
                                                                  }
                                                                  lVar40 = 2;
                                                                  bVar45 = false;
                                                                  pcVar33 = local_4188;
                                                                  pcVar42 = "<";
                                                                  do {
                                                                    if (lVar40 == 0) break;
                                                                    lVar40 = lVar40 + -1;
                                                                    bVar45 = *pcVar33 == *pcVar42;
                                                                    pcVar33 = pcVar33 + 1;
                                                                    pcVar42 = pcVar42 + 1;
                                                                  } while (bVar45);
                                                                  if (bVar45) {
                                                                    iVar14 = FUN_140160eb0(param_4);
                                                                    return (ulonglong)((longlong)iVar14 < (longlong)uVar41);
                                                                  }
                                                                  lVar40 = 3;
                                                                  bVar45 = false;
                                                                  pcVar33 = local_4188;
                                                                  pcVar42 = "==";
                                                                  do {
                                                                    if (lVar40 == 0) break;
                                                                    lVar40 = lVar40 + -1;
                                                                    bVar45 = *pcVar33 == *pcVar42;
                                                                    pcVar33 = pcVar33 + 1;
                                                                    pcVar42 = pcVar42 + 1;
                                                                  } while (bVar45);
                                                                  if (bVar45) {
                                                                    iVar14 = FUN_140160eb0(param_4);
                                                                    return (ulonglong)((longlong)iVar14 == uVar41);
                                                                  }
                                                                }
                                                                else {
                                                                  iVar14 = _stricmp(local_4088,"metempsychosis");
                                                                  bVar45 = iVar14 == 0;
                                                                  if (bVar45) {
                                                                    lVar40 = 3;
                                                                    pcVar33 = local_4188;
                                                                    pcVar42 = "==";
                                                                    do {
                                                                      if (lVar40 == 0) break;
                                                                      lVar40 = lVar40 + -1;
                                                                      bVar45 = *pcVar33 == *pcVar42;
                                                                      pcVar33 = pcVar33 + 1;
                                                                      pcVar42 = pcVar42 + 1;
                                                                    } while (bVar45);
                                                                    if (bVar45) {
                                                                      iVar14 = (**(code **)(*param_4 + 0x108))(param_4);
                                                                      return (ulonglong)((longlong)iVar14 == uVar41);
                                                                    }
                                                                    lVar40 = 2;
                                                                    bVar45 = false;
                                                                    pcVar33 = local_4188;
                                                                    pcVar42 = "<";
                                                                    do {
                                                                      if (lVar40 == 0) break;
                                                                      lVar40 = lVar40 + -1;
                                                                      bVar45 = *pcVar33 == *pcVar42;
                                                                      pcVar33 = pcVar33 + 1;
                                                                      pcVar42 = pcVar42 + 1;
                                                                    } while (bVar45);
                                                                    if (bVar45) {
                                                                      iVar14 = (**(code **)(*param_4 + 0x108))(param_4);
                                                                      return (ulonglong)((longlong)iVar14 < (longlong)uVar41);
                                                                    }
                                                                  }
                                                                  else {
                                                                    iVar14 = _stricmp(local_4088,"client_ver");
                                                                    bVar45 = iVar14 == 0;
                                                                    if (bVar45) {
                                                                      lVar40 = 3;
                                                                      pcVar33 = local_4188;
                                                                      pcVar42 = "==";
                                                                      do {
                                                                        if (lVar40 == 0) break;
                                                                        lVar40 = lVar40 + -1;
                                                                        bVar45 = *pcVar33 == *pcVar42;
                                                                        pcVar33 = pcVar33 + 1;
                                                                        pcVar42 = pcVar42 + 1;
                                                                      } while (bVar45);
                                                                      if (bVar45) {
                                                                        uVar13 = FUN_140165160(param_4);
                                                                        return (ulonglong)(uVar13 == uVar12);
                                                                      }
                                                                      lVar40 = 2;
                                                                      bVar45 = false;
                                                                      pcVar33 = local_4188;
                                                                      pcVar42 = "<";
                                                                      do {
                                                                        if (lVar40 == 0) break;
                                                                        lVar40 = lVar40 + -1;
                                                                        bVar45 = *pcVar33 == *pcVar42;
                                                                        pcVar33 = pcVar33 + 1;
                                                                        pcVar42 = pcVar42 + 1;
                                                                      } while (bVar45);
                                                                      if (bVar45) {
                                                                        uVar13 = FUN_140165160(param_4);
                                                                        return (ulonglong)(uVar13 < uVar12);
                                                                      }
                                                                    }
                                                                    else {
                                                                      iVar14 = _stricmp(local_4088,"peerage");
                                                                      if (iVar14 == 0) {
                                                                        iVar14 = _stricmp(local_4188,"==");
                                                                        if (iVar14 == 0) {
                                                                          plVar26 = (longlong *)CurrentInstanceGet();
                                                                          if (plVar26 == (longlong *)0x0) {
                                                                            plVar26 = (longlong *)
                                                                                      (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
                                                                            uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
                                                                            uVar13 = FUN_1400bb7e0(param_2);
                                                                            log_InlineLogDBERROR
                                                                                      ("table:cq_action/cq_newaction, ACTION %u %u: Root is NULL",
                                                                                       (ulonglong)uVar13,(ulonglong)uVar12);
                                                                            return 0;
                                                                          }
                                                                          puVar30 = (undefined8 *)(**(code **)(*plVar26 + 0x20))(plVar26,0xb);
                                                                          if (puVar30 != (undefined8 *)0x0) {
                                                                            puVar4 = (undefined8 *)*puVar30;
                                                                            uVar25 = (**(code **)(*param_4 + 8))(param_4);
                                                                            iVar14 = (*(code *)*puVar4)(puVar30,uVar25);
                                                                            return (ulonglong)((longlong)iVar14 == uVar41);
                                                                          }
                                                                          plVar26 = (longlong *)
                                                                                    (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
                                                                          uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
                                                                          uVar13 = FUN_1400bb7e0(param_2);
                                                                          log_InlineLogDBERROR
                                                                                    ("table:cq_action/cq_newaction, ACTION %u: PeerageProvider is NULL",
                                                                                     (ulonglong)uVar13,(ulonglong)uVar12);
                                                                          return 0;
                                                                        }
                                                                      }
                                                                      else {
                                                                        iVar14 = _stricmp(local_4088,"business");
                                                                        if (iVar14 == 0) {
                                                                          iVar14 = _stricmp(local_4188,"==");
                                                                          if (iVar14 == 0) {
                                                                            iVar14 = FUN_140165180(param_4);
                                                                            return (ulonglong)(uVar41 == (longlong)iVar14);
                                                                          }
                                                                          iVar14 = _stricmp(local_4188,"<");
                                                                          if (iVar14 == 0) {
                                                                            uVar21 = tq::TimeGet(3);
                                                                            uVar12 = FUN_140165180(param_4);
                                                                            return (ulonglong)(uVar21 + 19000000 < uVar12);
                                                                          }
                                                                          iVar14 = _stricmp(local_4188,"set");
                                                                          if (iVar14 == 0) {
                                                                            if (uVar41 == 0) {
                                                                              FUN_140165190(param_4,0);
                                                                              FUN_140164cf0(param_4,0);
                                                                              uVar39 = (**(code **)(param_4[2] + 0x18))();
                                                                              uVar12 = (**(code **)(*param_4 + 8))(param_4);
                                                                              local_a418 = (char *)0x0;
                                                                              tq::MyLogSave("gmlog/businessman","UserID:%u\tName:%s\tBusinessState:%u\t",
                                                                                            (ulonglong)uVar12,uVar39);
                                                                            }
                                                                            else {
                                                                              FUN_1401651a0(param_4);
                                                                            }
                                                                            return 1;
                                                                          }
                                                                        }
                                                                        else {
                                                                          iVar14 = _stricmp(local_4088,"vip");
                                                                          if (iVar14 == 0) {
                                                                            iVar14 = _stricmp(local_4188,"==");
                                                                            if (iVar14 == 0) {
                                                                              uVar28 = FUN_1401649c0(param_4);
                                                                              return (ulonglong)(uVar41 == (uVar28 & 0xffffffff));
                                                                            }
                                                                            iVar14 = _stricmp(local_4188,"<");
                                                                            if (iVar14 == 0) {
                                                                              uVar28 = FUN_1401649c0(param_4);
                                                                              return (ulonglong)((longlong)(uVar28 & 0xffffffff) < (longlong)uVar41);
                                                                            }
                                                                            iVar14 = _stricmp(local_4188,">");
                                                                            if (iVar14 == 0) {
                                                                              uVar28 = FUN_1401649c0(param_4);
                                                                              return (ulonglong)((longlong)uVar41 < (longlong)(uVar28 & 0xffffffff));
                                                                            }
                                                                          }
                                                                          else {
                                                                            iVar14 = _stricmp(local_4088,"vipvalue");
                                                                            bVar45 = iVar14 == 0;
                                                                            if (bVar45) {
                                                                              lVar40 = 3;
                                                                              pcVar33 = local_4188;
                                                                              pcVar42 = "+=";
                                                                              do {
                                                                                if (lVar40 == 0) break;
                                                                                lVar40 = lVar40 + -1;
                                                                                bVar45 = *pcVar33 == *pcVar42;
                                                                                pcVar33 = pcVar33 + 1;
                                                                                pcVar42 = pcVar42 + 1;
                                                                              } while (bVar45);
                                                                              if (bVar45) {
                                                                                uVar41 = FUN_140175810(param_4,uVar41 & 0xffffffff);
                                                                                return uVar41;
                                                                              }
                                                                              lVar40 = 4;
                                                                              bVar45 = false;
                                                                              pcVar33 = local_4188;
                                                                              pcVar42 = "set";
                                                                              do {
                                                                                if (lVar40 == 0) break;
                                                                                lVar40 = lVar40 + -1;
                                                                                bVar45 = *pcVar33 == *pcVar42;
                                                                                pcVar33 = pcVar33 + 1;
                                                                                pcVar42 = pcVar42 + 1;
                                                                              } while (bVar45);
                                                                              if (bVar45) {
                                                                                FUN_140175990(param_4,uVar41 & 0xffffffff);
                                                                                return 1;
                                                                              }
                                                                              lVar40 = 2;
                                                                              bVar45 = false;
                                                                              pcVar33 = local_4188;
                                                                              pcVar42 = "<";
                                                                              do {
                                                                                if (lVar40 == 0) break;
                                                                                lVar40 = lVar40 + -1;
                                                                                bVar45 = *pcVar33 == *pcVar42;
                                                                                pcVar33 = pcVar33 + 1;
                                                                                pcVar42 = pcVar42 + 1;
                                                                              } while (bVar45);
                                                                              if (bVar45) {
                                                                                uVar28 = FUN_1401649b0(param_4);
                                                                                return (ulonglong)((longlong)(uVar28 & 0xffffffff) < (longlong)uVar41);
                                                                              }
                                                                              lVar40 = 3;
                                                                              bVar45 = false;
                                                                              pcVar33 = local_4188;
                                                                              pcVar42 = "==";
                                                                              do {
                                                                                if (lVar40 == 0) break;
                                                                                lVar40 = lVar40 + -1;
                                                                                bVar45 = *pcVar33 == *pcVar42;
                                                                                pcVar33 = pcVar33 + 1;
                                                                                pcVar42 = pcVar42 + 1;
                                                                              } while (bVar45);
                                                                              if (bVar45) {
                                                                                uVar28 = FUN_1401649b0(param_4);
                                                                                return (ulonglong)((uVar28 & 0xffffffff) == uVar41);
                                                                              }
                                                                            }
                                                                            else {
                                                                              iVar14 = _stricmp(local_4088,"storage_money");
                                                                              bVar45 = iVar14 == 0;
                                                                              if (bVar45) {
                                                                                lVar40 = 3;
                                                                                pcVar33 = local_4188;
                                                                                pcVar42 = "+=";
                                                                                do {
                                                                                  if (lVar40 == 0) break;
                                                                                  lVar40 = lVar40 + -1;
                                                                                  bVar45 = *pcVar33 == *pcVar42;
                                                                                  pcVar33 = pcVar33 + 1;
                                                                                  pcVar42 = pcVar42 + 1;
                                                                                } while (bVar45);
                                                                                if (bVar45) {
                                                                                  uVar41 = FUN_140171280(param_4,uVar41,1);
                                                                                  return uVar41;
                                                                                }
                                                                                lVar40 = 3;
                                                                                bVar45 = false;
                                                                                pcVar33 = local_4188;
                                                                                pcVar42 = "==";
                                                                                do {
                                                                                  if (lVar40 == 0) break;
                                                                                  lVar40 = lVar40 + -1;
                                                                                  bVar45 = *pcVar33 == *pcVar42;
                                                                                  pcVar33 = pcVar33 + 1;
                                                                                  pcVar42 = pcVar42 + 1;
                                                                                } while (bVar45);
                                                                                if (bVar45) {
                                                                                  uVar28 = (**(code **)(*param_4 + 0x68))(param_4);
                                                                                  return (ulonglong)(uVar28 == uVar41);
                                                                                }
                                                                                lVar40 = 2;
                                                                                bVar45 = false;
                                                                                pcVar33 = local_4188;
                                                                                pcVar42 = "<";
                                                                                do {
                                                                                  if (lVar40 == 0) break;
                                                                                  lVar40 = lVar40 + -1;
                                                                                  bVar45 = *pcVar33 == *pcVar42;
                                                                                  pcVar33 = pcVar33 + 1;
                                                                                  pcVar42 = pcVar42 + 1;
                                                                                } while (bVar45);
                                                                                if (bVar45) {
                                                                                  lVar40 = (**(code **)(*param_4 + 0x68))(param_4);
                                                                                  return (ulonglong)(lVar40 < (longlong)uVar41);
                                                                                }
                                                                              }
                                                                              else {
                                                                                iVar14 = _stricmp(local_4088,"battlelev");
                                                                                bVar45 = iVar14 == 0;
                                                                                if (bVar45) {
                                                                                  lVar40 = 3;
                                                                                  pcVar33 = local_4188;
                                                                                  pcVar42 = ">=";
                                                                                  do {
                                                                                    if (lVar40 == 0) break;
                                                                                    lVar40 = lVar40 + -1;
                                                                                    bVar45 = *pcVar33 == *pcVar42;
                                                                                    pcVar33 = pcVar33 + 1;
                                                                                    pcVar42 = pcVar42 + 1;
                                                                                  } while (bVar45);
                                                                                  if (bVar45) {
                                                                                    iVar14 = FUN_14018eb30(param_4);
                                                                                    return (ulonglong)((longlong)uVar41 <= (longlong)iVar14);
                                                                                  }
                                                                                  lVar40 = 3;
                                                                                  bVar45 = false;
                                                                                  pcVar33 = local_4188;
                                                                                  pcVar42 = "<=";
                                                                                  do {
                                                                                    if (lVar40 == 0) break;
                                                                                    lVar40 = lVar40 + -1;
                                                                                    bVar45 = *pcVar33 == *pcVar42;
                                                                                    pcVar33 = pcVar33 + 1;
                                                                                    pcVar42 = pcVar42 + 1;
                                                                                  } while (bVar45);
                                                                                  if (bVar45) {
                                                                                    iVar14 = FUN_14018eb30(param_4);
                                                                                    return (ulonglong)((longlong)iVar14 <= (longlong)uVar41);
                                                                                  }
                                                                                }
                                                                                else {
                                                                                  iVar14 = _stricmp(local_4088,"first_prof");
                                                                                  bVar45 = iVar14 == 0;
                                                                                  if (bVar45) {
                                                                                    lVar40 = 2;
                                                                                    pcVar33 = local_4188;
                                                                                    pcVar42 = "<";
                                                                                    do {
                                                                                      if (lVar40 == 0) break;
                                                                                      lVar40 = lVar40 + -1;
                                                                                      bVar45 = *pcVar33 == *pcVar42;
                                                                                      pcVar33 = pcVar33 + 1;
                                                                                      pcVar42 = pcVar42 + 1;
                                                                                    } while (bVar45);
                                                                                    if (bVar45) {
                                                                                      uVar28 = FUN_140165570(param_4);
                                                                                      return (ulonglong)((longlong)(uVar28 & 0xffffffff) < (longlong)uVar41);
                                                                                    }
                                                                                    lVar40 = 3;
                                                                                    bVar45 = false;
                                                                                    pcVar33 = local_4188;
                                                                                    pcVar42 = "==";
                                                                                    do {
                                                                                      if (lVar40 == 0) break;
                                                                                      lVar40 = lVar40 + -1;
                                                                                      bVar45 = *pcVar33 == *pcVar42;
                                                                                      pcVar33 = pcVar33 + 1;
                                                                                      pcVar42 = pcVar42 + 1;
                                                                                    } while (bVar45);
                                                                                    if (bVar45) {
                                                                                      uVar28 = FUN_140165570(param_4);
                                                                                      return (ulonglong)((uVar28 & 0xffffffff) == uVar41);
                                                                                    }
                                                                                    lVar40 = 2;
                                                                                    bVar45 = false;
                                                                                    pcVar33 = local_4188;
                                                                                    pcVar42 = ">";
                                                                                    do {
                                                                                      if (lVar40 == 0) break;
                                                                                      lVar40 = lVar40 + -1;
                                                                                      bVar45 = *pcVar33 == *pcVar42;
                                                                                      pcVar33 = pcVar33 + 1;
                                                                                      pcVar42 = pcVar42 + 1;
                                                                                    } while (bVar45);
                                                                                    if (bVar45) {
                                                                                      uVar28 = FUN_140165570(param_4);
                                                                                      return (ulonglong)((longlong)uVar41 < (longlong)(uVar28 & 0xffffffff));
                                                                                    }
                                                                                  }
                                                                                  else {
                                                                                    iVar14 = _stricmp(local_4088,"old_prof");
                                                                                    bVar45 = iVar14 == 0;
                                                                                    if (bVar45) {
                                                                                      lVar40 = 2;
                                                                                      pcVar33 = local_4188;
                                                                                      pcVar42 = "<";
                                                                                      do {
                                                                                        if (lVar40 == 0) break;
                                                                                        lVar40 = lVar40 + -1;
                                                                                        bVar45 = *pcVar33 == *pcVar42;
                                                                                        pcVar33 = pcVar33 + 1;
                                                                                        pcVar42 = pcVar42 + 1;
                                                                                      } while (bVar45);
                                                                                      if (bVar45) {
                                                                                        uVar28 = FUN_140165580(param_4);
                                                                                        return (ulonglong)((longlong)(uVar28 & 0xffffffff) < (longlong)uVar41);
                                                                                      }
                                                                                      lVar40 = 3;
                                                                                      bVar45 = false;
                                                                                      pcVar33 = local_4188;
                                                                                      pcVar42 = "==";
                                                                                      do {
                                                                                        if (lVar40 == 0) break;
                                                                                        lVar40 = lVar40 + -1;
                                                                                        bVar45 = *pcVar33 == *pcVar42;
                                                                                        pcVar33 = pcVar33 + 1;
                                                                                        pcVar42 = pcVar42 + 1;
                                                                                      } while (bVar45);
                                                                                      if (bVar45) {
                                                                                        uVar28 = FUN_140165580(param_4);
                                                                                        return (ulonglong)((uVar28 & 0xffffffff) == uVar41);
                                                                                      }
                                                                                      lVar40 = 2;
                                                                                      bVar45 = false;
                                                                                      pcVar33 = local_4188;
                                                                                      pcVar42 = ">";
                                                                                      do {
                                                                                        if (lVar40 == 0) break;
                                                                                        lVar40 = lVar40 + -1;
                                                                                        bVar45 = *pcVar33 == *pcVar42;
                                                                                        pcVar33 = pcVar33 + 1;
                                                                                        pcVar42 = pcVar42 + 1;
                                                                                      } while (bVar45);
                                                                                      if (bVar45) {
                                                                                        uVar28 = FUN_140165580(param_4);
                                                                                        return (ulonglong)((longlong)uVar41 < (longlong)(uVar28 & 0xffffffff));
                                                                                      }
                                                                                    }
                                                                                    else {
                                                                                      iVar14 = _stricmp(local_4088,"addmount");
                                                                                      bVar45 = iVar14 == 0;
                                                                                      if (bVar45) {
                                                                                        lVar40 = 3;
                                                                                        pcVar33 = local_4188;
                                                                                        pcVar42 = "+=";
                                                                                        do {
                                                                                          if (lVar40 == 0) break;
                                                                                          lVar40 = lVar40 + -1;
                                                                                          bVar45 = *pcVar33 == *pcVar42;
                                                                                          pcVar33 = pcVar33 + 1;
                                                                                          pcVar42 = pcVar42 + 1;
                                                                                        } while (bVar45);
                                                                                        if (bVar45) {
                                                                                          cVar7 = (**(code **)(param_4[2] + 0x2d8))(param_4 + 2,0x2f);
                                                                                          if (cVar7 == '\0') {
                                                                                            return 0;
                                                                                          }
                                                                                          uVar41 = FUN_140160ba0(param_4,uVar41 & 0xffffffff);
                                                                                          return uVar41;
                                                                                        }
                                                                                      }
                                                                                      else {
                                                                                        iVar14 = _stricmp(local_4088,"ridingpoint");
                                                                                        if (iVar14 == 0) {
                                                                                          iVar14 = _stricmp(local_4188,">");
                                                                                          if (iVar14 == 0) {
                                                                                            uVar28 = (**(code **)(*param_4 + 0x70))(param_4);
                                                                                            return (ulonglong)
                                                                                                   ((longlong)uVar41 < (longlong)(uVar28 & 0xffffffff));
                                                                                          }
                                                                                          iVar14 = _stricmp(local_4188,">=");
                                                                                          if (iVar14 == 0) {
                                                                                            uVar28 = (**(code **)(*param_4 + 0x70))(param_4);
                                                                                            return (ulonglong)
                                                                                                   ((longlong)uVar41 <= (longlong)(uVar28 & 0xffffffff));
                                                                                          }
                                                                                          iVar14 = _stricmp(local_4188,"==");
                                                                                          if (iVar14 == 0) {
                                                                                            uVar28 = (**(code **)(*param_4 + 0x70))(param_4);
                                                                                            return (ulonglong)((uVar28 & 0xffffffff) == uVar41);
                                                                                          }
                                                                                          iVar14 = _stricmp(local_4188,"+=");
                                                                                          if (iVar14 == 0) {
                                                                                            uVar41 = FUN_140162b60(param_4,uVar41 & 0xffffffff);
                                                                                            return uVar41;
                                                                                          }
                                                                                        }
                                                                                        else {
                                                                                          iVar14 = _stricmp(local_4088,"cultivation");
                                                                                          if (iVar14 == 0) {
                                                                                            iVar14 = _stricmp(local_4188,"+=");
                                                                                            if (iVar14 == 0) {
                                                                                              uVar41 = FUN_1401669f0(param_4,uVar41,0);
                                                                                              return uVar41;
                                                                                            }
                                                                                            iVar14 = _stricmp(local_4188,"==");
                                                                                            if (iVar14 == 0) {
                                                                                              uVar28 = FUN_1401669e0(param_4);
                                                                                              return (ulonglong)(uVar28 == uVar41);
                                                                                            }
                                                                                            iVar14 = _stricmp(local_4188,"<");
                                                                                            if (iVar14 == 0) {
                                                                                              lVar40 = FUN_1401669e0(param_4);
                                                                                              return (ulonglong)(lVar40 < (longlong)uVar41);
                                                                                            }
                                                                                          }
                                                                                          else {
                                                                                            iVar14 = _stricmp(local_4088,"pkprotocol");
                                                                                            if (iVar14 == 0) {
                                                                                              iVar14 = _stricmp(local_4188,"==");
                                                                                              if (iVar14 == 0) {
                                                                                                uVar10 = FUN_140373e40(param_4 + 0x1cf);
                                                                                                return (ulonglong)(uVar10 == uVar9);
                                                                                              }
                                                                                              iVar14 = _stricmp(local_4188,"set");
                                                                                              if (iVar14 == 0) {
                                                                                                FUN_140373dd0(param_4 + 0x1cf,uVar41 & 0xffffffff,0);
                                                                                                return 1;
                                                                                              }
                                                                                            }
                                                                                            else {
                                                                                              iVar14 = _stricmp(local_4088,"viplevel");
                                                                                              if (iVar14 == 0) {
                                                                                                iVar14 = _stricmp(local_4188,"+=");
                                                                                                if (iVar14 == 0) {
                                                                                                  iVar14 = FUN_1401649c0(param_4);
                                                                                                  FUN_1401649d0(param_4,iVar14 + uVar12);
                                                                                                  return 1;
                                                                                                }
                                                                                                iVar14 = _stricmp(local_4188,"==");
                                                                                                if (iVar14 == 0) {
                                                                                                  uVar28 = FUN_1401649c0(param_4);
                                                                                                  return (ulonglong)((uVar28 & 0xffffffff) == uVar41);
                                                                                                }
                                                                                                iVar14 = _stricmp(local_4188,"<");
                                                                                                if (iVar14 == 0) {
                                                                                                  uVar28 = FUN_1401649c0(param_4);
                                                                                                  return (ulonglong)
                                                                                                         ((longlong)(uVar28 & 0xffffffff) < (longlong)uVar41);
                                                                                                }
                                                                                              }
                                                                                              else {
                                                                                                iVar14 = _stricmp(local_4088,"strengthvalue");
                                                                                                if (iVar14 == 0) {
                                                                                                  iVar14 = _stricmp(local_4188,"+=");
                                                                                                  if (iVar14 == 0) {
                                                                                                    uVar41 = FUN_140166c40(param_4,uVar41,0);
                                                                                                    return uVar41;
                                                                                                  }
                                                                                                  iVar14 = _stricmp(local_4188,"==");
                                                                                                  if (iVar14 == 0) {
                                                                                                    uVar28 = FUN_140166bf0(param_4);
                                                                                                    return (ulonglong)((uVar28 & 0xffffffff) == uVar41);
                                                                                                  }
                                                                                                  iVar14 = _stricmp(local_4188,"<=");
                                                                                                  if (iVar14 == 0) {
                                                                                                    uVar28 = FUN_140166bf0(param_4);
                                                                                                    return (ulonglong)
                                                                                                           ((longlong)(uVar28 & 0xffffffff) <= (longlong)uVar41)
                                                                                                    ;
                                                                                                  }
                                                                                                }
                                                                                                else {
                                                                                                  iVar14 = _stricmp(local_4088,"culture_value");
                                                                                                  if (iVar14 == 0) {
                                                                                                    iVar14 = _stricmp(local_4188,"+=");
                                                                                                    if (iVar14 == 0) {
                                                                                                      uVar41 = FUN_140166ac0(param_4,uVar41,0);
                                                                                                      return uVar41;
                                                                                                    }
                                                                                                    iVar14 = _stricmp(local_4188,"==");
                                                                                                    if (iVar14 == 0) {
                                                                                                      uVar28 = FUN_140166ab0(param_4);
                                                                                                      return (ulonglong)((uVar28 & 0xffffffff) == uVar41);
                                                                                                    }
                                                                                                    iVar14 = _stricmp(local_4188,"<");
                                                                                                    if (iVar14 == 0) {
                                                                                                      uVar28 = FUN_140166ab0(param_4);
                                                                                                      return (ulonglong)
                                                                                                             ((longlong)(uVar28 & 0xffffffff) < (longlong)uVar41
                                                                                                             );
                                                                                                    }
                                                                                                    iVar14 = _stricmp(local_4188,">");
                                                                                                    if (iVar14 == 0) {
                                                                                                      uVar28 = FUN_140166ab0(param_4);
                                                                                                      return (ulonglong)
                                                                                                             ((longlong)uVar41 < (longlong)(uVar28 & 0xffffffff)
                                                                                                             );
                                                                                                    }
                                                                                                  }
                                                                                                  else {
                                                                                                    uVar12 = FUN_14008fc30(param_2);
                                                                                                    local_a400 = (int *)CONCAT44(local_a400._4_4_,0x2567);
                                                                                                    local_a408 = 
                                                                                "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp";
                                                                                local_a410 = (uint *)&local_1d48;
                                                                                local_a418 = local_948;
                                                                                log_InlineLogDBERROR
                                                                                          (
                                                                                "table:cq_action/cq_newaction, ACTION_USER_ATTR ActionID:%u, %s %s %s %s at %s, %d"
                                                                                ,(ulonglong)uVar12,local_4088,local_4188);
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
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          goto LAB_14013a784;
                                        }
                                      }
                                      lVar40 = 3;
                                      pcVar33 = local_4188;
                                      pcVar42 = "+=";
                                      do {
                                        if (lVar40 == 0) break;
                                        lVar40 = lVar40 + -1;
                                        bVar45 = *pcVar33 == *pcVar42;
                                        pcVar33 = pcVar33 + 1;
                                        pcVar42 = pcVar42 + 1;
                                      } while (bVar45);
                                      if (bVar45) {
                                        local_a418 = (char *)0x0;
                                        (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,0xf,uVar41,1);
                                        return 1;
                                      }
                                      lVar40 = 3;
                                      bVar45 = false;
                                      pcVar33 = local_4188;
                                      pcVar42 = "==";
                                      do {
                                        if (lVar40 == 0) break;
                                        lVar40 = lVar40 + -1;
                                        bVar45 = *pcVar33 == *pcVar42;
                                        pcVar33 = pcVar33 + 1;
                                        pcVar42 = pcVar42 + 1;
                                      } while (bVar45);
                                      if (bVar45) {
                                        return (ulonglong)(*(ushort *)(param_4 + 0x1db) == uVar41);
                                      }
                                      lVar40 = 2;
                                      bVar45 = false;
                                      pcVar33 = local_4188;
                                      pcVar42 = "<";
                                      do {
                                        if (lVar40 == 0) break;
                                        lVar40 = lVar40 + -1;
                                        bVar45 = *pcVar33 == *pcVar42;
                                        pcVar33 = pcVar33 + 1;
                                        pcVar42 = pcVar42 + 1;
                                      } while (bVar45);
                                      if (bVar45) {
                                        return (ulonglong)((longlong)(ulonglong)*(ushort *)(param_4 + 0x1db) < (longlong)uVar41);
                                      }
                                      lVar40 = 3;
                                      bVar45 = false;
                                      pcVar33 = local_4188;
                                      pcVar42 = "-=";
                                      do {
                                        if (lVar40 == 0) break;
                                        lVar40 = lVar40 + -1;
                                        bVar45 = *pcVar33 == *pcVar42;
                                        pcVar33 = pcVar33 + 1;
                                        pcVar42 = pcVar42 + 1;
                                      } while (bVar45);
                                      if (bVar45) {
                                        if (0 < (longlong)uVar41) {
                                          uVar28 = (ulonglong)*(ushort *)(param_4 + 0x1db);
                                          if ((longlong)uVar41 < (longlong)uVar28) {
                                            FUN_1401a6420(param_4,0xf,uVar28 - uVar41,1);
                                            local_a418 = (char *)0x0;
                                            (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,uVar41,1);
                                          }
                                          else {
                                            FUN_1401a6420(param_4,0xf,0,1);
                                            local_a418 = (char *)0x0;
                                            (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,uVar28,1);
                                          }
                                          return 1;
                                        }
                                        return 0;
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
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_14013a784;
  case 1:
    iVar14 = _stricmp(param_3,"life");
    if (iVar14 == 0) {
      lVar40 = param_4[2];
      uVar25 = (**(code **)(lVar40 + 0x80))(param_4 + 2);
      local_a418 = (char *)0x0;
      uVar41 = (**(code **)(lVar40 + 0x2e0))(param_4 + 2,0,uVar25,1);
      return uVar41;
    }
    iVar14 = _stricmp(param_3,"mana");
    if (iVar14 == 0) {
      lVar40 = param_4[2];
      uVar25 = (**(code **)(*param_4 + 0x88))(param_4);
      local_a418 = (char *)0x0;
      uVar41 = (**(code **)(lVar40 + 0x2e0))(param_4 + 2,2,uVar25,1);
      return uVar41;
    }
    goto LAB_14013a784;
  case 2:
    local_a308 = 0;
    local_a278 = 0;
    local_a2a0 = 0;
    local_a098 = 0;
    local_a410 = (uint *)&local_a098;
    local_a418 = (char *)&local_a2a0;
    iVar14 = sscanf(param_3,"%u %d %d %d",&local_a308,&local_a278);
    if (iVar14 < 3) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x26ac);
    }
    else {
      uVar39 = (**(code **)(param_4[2] + 0x160))();
      cVar7 = FUN_140119510(uVar39);
      if ((cVar7 == '\0') || (local_a098 != 0)) {
        uVar39 = FUN_140008520((int)param_1[9]);
        plVar26 = (longlong *)FUN_1400876b0(uVar39);
        lVar40 = (**(code **)(*plVar26 + 0x10))(plVar26,local_a308,1);
        if (lVar40 == 0) {
          uVar12 = FUN_1400bb7e0(param_2);
          log_InlineLogDBERROR("table:cq_action/cq_newaction, map[%lu] is not exist, Action[%lu]",(ulonglong)local_a308,(ulonglong)uVar12);
          return 0;
        }
        cVar7 = FUN_1402c3cc0(lVar40,local_a278,local_a2a0);
        if (cVar7 == '\0') {
          uVar25 = FUN_1400bb7e0(param_2);
          local_a418 = (char *)CONCAT44(local_a418._4_4_,uVar25);
          log_InlineLogDBERROR
                    ("table:cq_action/cq_newaction, map[%lu] pos.x[%d] pos.y[%d] can not stand, Action[%lu]",(ulonglong)local_a308,(ulonglong)local_a278,
                     (ulonglong)local_a2a0);
          return 0;
        }
        local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
        uVar41 = FUN_1401c55b0(param_4,local_a308,local_a278,local_a2a0);
        iVar14 = (int)uVar41;
        if (iVar14 == 0) {
          return 1;
        }
        if (iVar14 == 1) {
          param_1[1] = 0;
          return uVar41;
        }
        if (iVar14 == -1) {
          local_a038 = 0;
          local_a034 = 0;
          local_a030 = 0;
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_1400d6610(uVar39);
          FUN_140006c50(uVar39,&local_a038);
          local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
          FUN_1401c55b0(param_4,local_a038,local_a034,local_a030);
          uVar12 = FUN_1400bb7e0(param_2);
          log_InlineLogDBERROR(&DAT_14070e870,(ulonglong)uVar12);
          uVar39 = FUN_140008520((int)param_1[9]);
          plVar26 = (longlong *)FUN_140087650(uVar39);
          (**(code **)(*plVar26 + 0x50))(plVar26,param_4,&DAT_14070e850);
        }
        else if (iVar14 == 2) {
          return 0;
        }
      }
    }
    goto LAB_14013a784;
  case 3:
    local_a2f0 = 0;
    local_a268 = 0;
    local_a298 = 0;
    local_a418 = (char *)&local_a298;
    iVar14 = sscanf(param_3,"%u %d %d",&local_a2f0,&local_a268);
    if (iVar14 == 3) {
      uVar39 = FUN_140008520((int)param_1[9]);
      plVar26 = (longlong *)FUN_1400876b0(uVar39);
      lVar40 = (**(code **)(*plVar26 + 0x20))(plVar26,local_a2f0,1);
      if (lVar40 == 0) {
        local_a418 = (char *)CONCAT44(local_a418._4_4_,0x2729);
        log_InlineLogERROR(&DAT_1406d9c10,"IF_NOT",&DAT_140705b14,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,0);
        uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
        log_InlineLogDBERROR(&DAT_14070e7c0,(ulonglong)uVar12,(ulonglong)local_a2f0);
        return 0;
      }
      cVar7 = FUN_1402c3cc0(lVar40,local_a268,local_a298);
      if (cVar7 != '\0') {
        local_a418 = (char *)CONCAT44(local_a418._4_4_,1);
        FUN_1401732e0(param_4,local_a2f0,local_a268,local_a298);
        return 1;
      }
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,0);
      uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
      local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a298);
      log_InlineLogDBERROR(&DAT_14070e760,(ulonglong)uVar12,(ulonglong)local_a2f0,(ulonglong)local_a268);
      return 0;
    }
    goto LAB_14013a784;
  case 4:
    local_1b48 = '\0';
    memset(local_1b47,0,0xff);
    local_a2e8 = 0;
    iVar14 = sscanf(param_3,"%s %u",&local_1b48,&local_a2e8);
    if (iVar14 == 2) {
      iVar14 = (**(code **)(param_4[2] + 0x38))();
      iVar24 = _stricmp("color",&local_1b48);
      if (iVar24 == 0) {
        local_a2e8 = local_a2e8 % 10;
        FUN_1401a6420(param_4,0x1a,(longlong)(int)((local_a2e8 - (iVar14 % 1000) / 100) * 100 + iVar14),1);
        return 1;
      }
      iVar24 = _stricmp("style",&local_1b48);
      if (iVar24 == 0) {
        local_a2e8 = local_a2e8 % 100;
        iVar14 = (iVar14 / 100) * 100 + local_a2e8;
        if (iVar14 < 100) {
          iVar14 = iVar14 + 300;
        }
        FUN_1401a6420(param_4,0x1a,(longlong)iVar14,1);
        return 1;
      }
    }
    goto LAB_14013a784;
  case 5:
    local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
    uVar41 = FUN_1401c55b0(param_4,(int)param_4[0x1e1],*(undefined2 *)((longlong)param_4 + 0xf0c),*(undefined2 *)((longlong)param_4 + 0xf0e));
    if ((int)uVar41 == 0) {
      return 1;
    }
    if ((int)uVar41 == 1) {
      param_1[1] = 0;
      return uVar41;
    }
    goto LAB_14013a784;
  case 6:
    if (param_5 == (longlong *)0x0) {
      local_a418 = (char *)CONCAT44(local_a418._4_4_,0x26e6);
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","pRole","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
      return 0;
    }
    cVar7 = (**(code **)(*param_5 + 0x298))(param_5,0x1040,&local_9f98);
    if (cVar7 == '\0') {
      local_a418 = (char *)CONCAT44(local_a418._4_4_,0x26e8);
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","pRole->QueryObj(OBJ_NPC, IPP_OF(pNpc))",
                         "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
      return 0;
    }
    cVar7 = (**(code **)(*local_9f98 + 0x98))();
    if (cVar7 == '\0') {
      local_a418 = (char *)CONCAT44(local_a418._4_4_,0x26e9);
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","pNpc->IsLinkNpc()","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
      return 0;
    }
    uVar39 = (**(code **)(*local_9f98 + 0xa0))();
    plVar26 = (longlong *)FUN_14039e540(uVar39);
    if (plVar26 == (longlong *)0x0) {
      local_a418 = (char *)CONCAT44(local_a418._4_4_,0x26ec);
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF",&DAT_140705b14,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
      return 0;
    }
    FUN_1400e1ac0(plVar26,&local_a368);
    uVar25 = (**(code **)(*plVar26 + 8))(plVar26);
    local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
    iVar14 = FUN_1401c55b0(param_4,uVar25,(ulonglong)local_a368 & 0xffffffff,local_a368._4_4_);
    if (iVar14 == 0) {
      return 1;
    }
    if (iVar14 == 1) {
      local_a418 = (char *)CONCAT44(local_a418._4_4_,0x26f4);
      log_InlineLogERROR(&DAT_1406d9c10,"MYASSERT","!\"ACTION_USER_CHGLINKMAP\"","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp"
                        );
      param_1[1] = 0;
      return 1;
    }
    goto LAB_14013a784;
  case 7:
    cVar7 = FUN_14016e3f0(param_4);
    if (cVar7 == '\0') {
      local_a078 = 0;
      local_a12c = 0;
      local_a11c = 0;
      local_a0c8 = 0;
      local_a124 = 0;
      local_a408 = (char *)&local_a124;
      local_a410 = &local_a0c8;
      local_a418 = (char *)&local_a11c;
      iVar14 = sscanf(param_3,"%d %d %d %d %d",&local_a078,&local_a12c);
      if (iVar14 == 5) {
        FUN_140386780(local_63c8);
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar23 = (**(code **)(*param_4 + 8))(param_4);
        local_a3f0 = (undefined4 *)((ulonglong)local_a3f0 & 0xffffffffffffff00);
        local_a3f8 = (undefined4 *)((ulonglong)local_a3f8._4_4_ << 0x20);
        local_a400 = (int *)((ulonglong)local_a400._4_4_ << 0x20);
        local_a408 = (char *)((ulonglong)local_a408 & 0xffffffff00000000);
        local_a410 = (uint *)CONCAT44(local_a410._4_4_,uVar25);
        local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
        iVar14 = FUN_1403868f0(local_63c8,uVar23,local_a078,local_a12c);
        if (iVar14 == 0) {
          local_a418 = (char *)CONCAT44(local_a418._4_4_,0x270b);
          log_InlineLogERROR(&DAT_1406d9c10,"IF_OK","msg.Create(pUser->GetID(), nMagicType, nMagicLevel, 0, pUser->GetID(), 0, 0, 0)",
                             "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        }
        else {
          (**(code **)(param_4[2] + 0x348))(param_4 + 2,local_63c8,1);
        }
        local_a418 = (char *)CONCAT71(local_a418._1_7_,local_a124 != 0);
        bVar43 = FUN_140172b80(param_4,local_a11c,local_a0c8,1);
        FUN_1403867d0(local_63c8);
        uVar41 = (ulonglong)bVar43;
      }
      else {
        uVar12 = FUN_1400bb7e0(param_2);
        log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2705);
        uVar41 = 0;
      }
    }
    else {
      uVar41 = 0;
    }
    break;
  case 8:
    local_a114 = 0;
    local_a0c4 = 0;
    sscanf(param_3,"%d %d",&local_a114,&local_a0c4);
    cVar7 = (**(code **)(param_4[2] + 0x220))();
    if (cVar7 == '\0') {
      local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
      FUN_1401c6d40(param_4,local_a114 != 0,local_a0c4 != 0,1);
    }
    uVar41 = 1;
    break;
  case 9:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
    if (iVar14 == 0) {
      iVar14 = 2000;
    }
    (**(code **)(*param_4 + 0x150))(param_4,iVar14,&DAT_1406e4608,param_3);
    uVar41 = 1;
    break;
  case 10:
    local_a0b4 = 0;
    local_a10c = 0;
    local_a0bc = 0;
    local_a418 = (char *)&local_a0bc;
    iVar14 = sscanf(param_3,"%u %d %d",&local_a0b4,&local_a10c);
    if (iVar14 == 3) {
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
      bVar45 = local_a0bc != 0;
      bVar44 = local_a10c == 0;
      uVar23 = (**(code **)(*param_4 + 8))(param_4);
      uVar39 = FUN_140008520((int)local_a368[9]);
      uVar39 = FUN_1400877e0(uVar39);
      local_a410 = (uint *)CONCAT71(local_a410._1_7_,bVar45);
      local_a418 = (char *)CONCAT71(local_a418._1_7_,bVar44);
      uVar41 = FUN_1402f1e70(uVar39,uVar23,uVar25,(undefined1)local_a0b4);
      return uVar41;
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x276b);
    goto LAB_14013a784;
  case 0xb:
    uVar12 = (**(code **)(param_4[2] + 0x70))();
    local_a338 = (longlong *)CONCAT44(local_a338._4_4_,uVar12);
    uVar39 = FUN_140118150();
    iVar14 = FUN_14014df00(uVar39,0);
    if (iVar14 < (int)uVar12) {
      uVar13 = (**(code **)(*param_4 + 8))(param_4);
      uVar20 = FUN_1400bb7e0(param_2);
      local_a410 = (uint *)CONCAT44(local_a410._4_4_,0x2779);
      local_a418 = "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp";
      log_InlineLogDBERROR
                ("table:cq_action/cq_newaction, ACTION %u: lev error, user id:%d lev:%d at %s, %d",(ulonglong)uVar20,(ulonglong)uVar13,(ulonglong)uVar12);
      uVar41 = 0;
    }
    else {
      uVar9 = *(ushort *)(param_4 + 0x1db);
      uVar10 = *(ushort *)((longlong)param_4 + 0xedc);
      uVar2 = *(ushort *)((longlong)param_4 + 0xede);
      uVar3 = *(ushort *)(param_4 + 0x1dc);
      iVar14 = FUN_140160eb0(param_4);
      iVar15 = (uint)uVar3 + iVar14 + (uint)uVar2 + (uint)uVar10 + (uint)uVar9;
      local_a288 = (char *)CONCAT44(local_a288._4_4_,iVar15);
      iVar14 = FUN_140385cf0(param_4,0x71,0x42);
      iVar24 = iVar14 + ((int)local_a338 + 0x31) * 3;
      if (iVar15 < iVar24) {
        local_a418 = (char *)0x0;
        cVar7 = (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,(longlong)(iVar24 - iVar15),1);
        if (cVar7 == '\0') {
          uVar12 = (**(code **)(*param_4 + 8))(param_4);
          uVar13 = FUN_1400bb7e0(param_2);
          local_a418 = (char *)CONCAT44(local_a418._4_4_,0x278b);
          log_InlineLogDBERROR
                    ("table:cq_action/cq_newaction, ACTION %u: AddAttrib failed, user id:%d at %s, %d",(ulonglong)uVar13,(ulonglong)uVar12,
                     "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
          uVar41 = 0;
        }
        else {
          uVar12 = (**(code **)(*param_4 + 8))(param_4);
          local_a408 = (char *)CONCAT44(local_a408._4_4_,iVar24 - iVar15);
          local_a410 = (uint *)CONCAT44(local_a410._4_4_,iVar14);
          local_a418 = (char *)CONCAT44(local_a418._4_4_,iVar24);
          tq::MyLogSave("gmlog/add_point","ACTION_USER_ADDPOINT    user id:%10u, old point: %3d, max point: %3d, extra point: %3d, add point: %3d.",
                        (ulonglong)uVar12,(ulonglong)local_a288 & 0xffffffff);
          uVar41 = 1;
        }
      }
      else {
        uVar41 = 1;
      }
    }
    break;
  case 0xc:
    uVar12 = (**(code **)(param_4[2] + 0x70))();
    local_a338 = (longlong *)CONCAT44(local_a338._4_4_,uVar12);
    uVar39 = FUN_140118150();
    iVar14 = FUN_14014df00(uVar39,0);
    if (iVar14 < (int)uVar12) {
      uVar13 = (**(code **)(*param_4 + 8))(param_4);
      uVar20 = FUN_1400bb7e0(param_2);
      local_a410 = (uint *)CONCAT44(local_a410._4_4_,0x279b);
      local_a418 = "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp";
      log_InlineLogDBERROR
                ("table:cq_action/cq_newaction, ACTION %u: lev error, user id:%d lev:%d at %s, %d",(ulonglong)uVar20,(ulonglong)uVar13,(ulonglong)uVar12);
      uVar41 = 0;
    }
    else {
      uVar9 = *(ushort *)(param_4 + 0x1db);
      uVar10 = *(ushort *)((longlong)param_4 + 0xedc);
      uVar2 = *(ushort *)((longlong)param_4 + 0xede);
      uVar3 = *(ushort *)(param_4 + 0x1dc);
      iVar14 = FUN_140160eb0(param_4);
      iVar15 = (uint)uVar3 + iVar14 + (uint)uVar2 + (uint)uVar10 + (uint)uVar9;
      local_a288 = (char *)CONCAT44(local_a288._4_4_,iVar15);
      iVar14 = FUN_140385cf0(param_4,0x71,0x42);
      iVar24 = (int)local_a338 * 3 + 0x9b + iVar14;
      if (iVar15 < iVar24) {
        local_a418 = (char *)0x0;
        cVar7 = (**(code **)(param_4[2] + 0x2e0))(param_4 + 2,10,(longlong)(iVar24 - iVar15),1);
        if (cVar7 == '\0') {
          uVar12 = (**(code **)(*param_4 + 8))(param_4);
          uVar13 = FUN_1400bb7e0(param_2);
          local_a418 = (char *)CONCAT44(local_a418._4_4_,0x27ad);
          log_InlineLogDBERROR
                    ("table:cq_action/cq_newaction, ACTION %u: AddAttrib failed, user id:%d at %s, %d",(ulonglong)uVar13,(ulonglong)uVar12,
                     "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
          uVar41 = 0;
        }
        else {
          uVar12 = (**(code **)(*param_4 + 8))(param_4);
          local_a408 = (char *)CONCAT44(local_a408._4_4_,iVar24 - iVar15);
          local_a410 = (uint *)CONCAT44(local_a410._4_4_,iVar14);
          local_a418 = (char *)CONCAT44(local_a418._4_4_,iVar24);
          tq::MyLogSave("gmlog/add_point","ACTION_USER_ADDPOINT_EX user id:%10u, old point: %3d, max point: %3d, extra point: %3d, add point: %3d.",
                        (ulonglong)uVar12,(ulonglong)local_a288 & 0xffffffff);
          uVar41 = 1;
        }
      }
      else {
        uVar41 = 1;
      }
    }
    break;
  case 0xd:
    uVar39 = FUN_140008520((int)param_1[9]);
    cVar7 = FUN_14008abe0(uVar39);
    if (cVar7 == '\0') {
      uVar41 = 0;
    }
    else {
      FUN_140179690(param_4);
      uVar41 = 1;
    }
    break;
  case 0xe:
    local_a354 = 0;
    local_a2c4 = 0;
    local_a418 = (char *)&local_a2c4;
    iVar14 = sscanf(param_3,"%s %d %d",local_3368,&local_a354);
    if (1 < iVar14) {
      iVar24 = _stricmp(local_3368,"check");
      if (iVar24 == 0) {
        if (iVar14 != 3) {
          uVar25 = (**(code **)(*param_4 + 8))(param_4);
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_1400877e0(uVar39);
          uVar41 = FUN_1402f3830(uVar39,uVar25,local_a354);
          return uVar41;
        }
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_1400877e0(uVar39);
        uVar41 = FUN_1402f3860(uVar39,uVar25,local_a354,local_a2c4);
        return uVar41;
      }
      iVar14 = _stricmp(local_3368,"learn");
      if (iVar14 == 0) {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_1400877e0(uVar39);
        local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
        iVar14 = FUN_1402f38e0(uVar39,uVar25,local_a354,0);
        return (ulonglong)(iVar14 != 0);
      }
      iVar14 = _stricmp(local_3368,"uplevel");
      if (iVar14 == 0) {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_1400877e0(uVar39);
        uVar41 = FUN_1402f38a0(uVar39,uVar25,local_a354,1);
        return uVar41;
      }
      iVar14 = _stricmp(local_3368,"addexp");
      if (iVar14 != 0) {
        iVar14 = _stricmp(local_3368,"addlevtime");
        if (iVar14 == 0) {
          uVar25 = (**(code **)(*param_4 + 8))(param_4);
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_1400877e0(uVar39);
          uVar41 = FUN_1402f3080(uVar39,uVar25,local_a354,local_a2c4);
          return uVar41;
        }
        iVar14 = _stricmp(local_3368,"del");
        if (iVar14 != 0) {
          uVar12 = FUN_1400bb7e0(param_2);
          log_InlineLogDBERROR(&DAT_14070f620,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x27f1);
          return 1;
        }
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_1400877e0(uVar39);
        uVar41 = FUN_1402f3960(uVar39,uVar25,local_a354,2);
        return uVar41;
      }
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      uVar39 = FUN_140008520((int)param_1[9]);
      uVar39 = FUN_1400877e0(uVar39);
      uVar41 = FUN_1402f3040(uVar39,uVar25,local_a354,local_a2c4);
      return uVar41;
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x27cd);
    goto LAB_14013a784;
  case 0xf:
    local_3068 = '\0';
    memset(local_3067,0,0xff);
    local_a358 = 0;
    local_a2e0[0] = 0;
    local_a418 = (char *)local_a2e0;
    iVar14 = sscanf(param_3,"%s %d %u",&local_3068,&local_a358);
    if (iVar14 == 3) {
      iVar14 = _stricmp("check",&local_3068);
      if (iVar14 == 0) {
        lVar40 = FUN_140162320(param_4,local_a358);
        if ((lVar40 != 0) && (uVar12 = FUN_14039d7e0(lVar40), local_a2e0[0] <= (uVar12 & 0xff))) {
          return 1;
        }
      }
      else {
        iVar14 = _stricmp("learn",&local_3068);
        if (iVar14 == 0) {
          cVar7 = FUN_140170ae0(param_4,local_a358,local_a2e0[0]);
          if (cVar7 != '\0') {
            return 1;
          }
        }
        else {
          iVar14 = _stricmp("addexp",&local_3068);
          if (iVar14 == 0) {
            FUN_140183e30(param_4,local_a358,local_a2e0[0],1);
            return 1;
          }
          iVar14 = _stricmp("addlevtime",&local_3068);
          uVar12 = local_a2e0[0];
          if (iVar14 == 0) {
            if ((int)local_a2e0[0] < 1) {
              return 1;
            }
            lVar40 = FUN_140162320(param_4,local_a358);
            if (lVar40 == 0) {
              plVar26 = (longlong *)FUN_140087d40();
              local_a418 = (char *)CONCAT44(local_a418._4_4_,uVar12);
              uVar41 = (**(code **)(*plVar26 + 0x90))(plVar26,local_a358,0,0);
            }
            else {
              plVar26 = (longlong *)FUN_140087d40();
              iVar14 = (**(code **)(*plVar26 + 0x98))(plVar26,local_a358);
              uVar13 = FUN_14039d7e0(lVar40);
              if (iVar14 <= (int)(uVar13 & 0xff)) {
                return 0;
              }
              plVar26 = (longlong *)FUN_140087d40();
              lVar34 = *plVar26;
              uVar25 = FUN_14039d860(lVar40);
              uVar8 = FUN_14039d7e0(lVar40);
              local_a418 = (char *)CONCAT44(local_a418._4_4_,uVar12);
              uVar41 = (**(code **)(lVar34 + 0x90))(plVar26,local_a358,uVar8,uVar25);
            }
            if (0xffffffff < (longlong)uVar41) {
              uVar12 = FUN_1400bb7e0(param_2);
              local_a418 = (char *)(uVar41 - 0xffffffff);
              log_InlineLogDBERROR
                        ("table:cq_action/cq_newaction, GameAction %u: ACTION_USER_WEAPONSKILL, src[%I64d] effect[%u] lost[%I64d]",(ulonglong)uVar12,uVar41,
                         0xffffffff);
              uVar41 = 0xffffffff;
            }
            FUN_140183e30(param_4,local_a358,uVar41 & 0xffffffff,0);
            return 1;
          }
        }
      }
    }
    goto LAB_14013a784;
  case 0x10:
    tq::MyLogSave("gmlog/action",param_3);
    uVar41 = 1;
    break;
  case 0x11:
    uVar41 = FUN_140172910(param_4);
    break;
  case 0x12:
    uVar41 = FUN_140173e20(param_4);
    break;
  case 0x13:
    uVar41 = FUN_140164440(param_4);
    break;
  case 0x14:
    iVar14 = (**(code **)(*param_4 + 0x50))(param_4);
    uVar41 = (ulonglong)(iVar14 == 1);
    break;
  case 0x15:
    local_2948 = '\0';
    memset(local_2947,0,0xff);
    local_3668 = 0;
    memset(local_3667,0,0xff);
    local_1848 = '\0';
    memset(local_1847,0,0xff);
    local_a418 = &local_1848;
    iVar14 = sscanf(param_3,"%s %s %s",&local_2948,&local_3668);
    if (iVar14 < 2) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2124);
    }
    else {
      iVar14 = _stricmp(&local_1848,"del");
      uVar25 = 10;
      if (iVar14 == 0) {
        uVar25 = 0x18;
      }
      iVar14 = _stricmp(&local_2948,"self");
      if (iVar14 == 0) {
        FUN_14037dfb0(local_45d8);
        uVar23 = (**(code **)(*param_4 + 8))(param_4);
        iVar14 = FUN_14037e0a0(local_45d8,uVar25,&local_3668,uVar23);
        if (iVar14 == 0) {
          local_a418 = (char *)CONCAT44(local_a418._4_4_,0x20eb);
          log_InlineLogERROR(&DAT_1406d9c10,"IF_OK","msg.Create(nActType, szEffect, pUser->GetID())",
                             "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        }
        else {
          (**(code **)(param_4[2] + 0x348))(param_4 + 2,local_45d8,1);
        }
        FUN_14037e030(local_45d8);
        return 1;
      }
      iVar14 = _stricmp(&local_2948,"couple");
      if (iVar14 == 0) {
        FUN_14037dfb0(local_8a38);
        uVar23 = (**(code **)(*param_4 + 8))(param_4);
        iVar14 = FUN_14037e0a0(local_8a38,uVar25,&local_3668,uVar23);
        if (iVar14 == 0) {
          local_a418 = (char *)CONCAT44(local_a418._4_4_,0x20f3);
          log_InlineLogERROR(&DAT_1406d9c10,"IF_OK","msg.Create(nActType, szEffect, pUser->GetID())",
                             "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        }
        else {
          (**(code **)(param_4[2] + 0x348))(param_4 + 2,local_8a38,1);
        }
        cVar7 = FUN_140164440(param_4);
        if (cVar7 != '\0') {
          uVar39 = FUN_140008520((int)param_1[9]);
          plVar26 = (longlong *)FUN_140087650(uVar39);
          lVar40 = *plVar26;
          uVar23 = (**(code **)(*param_4 + 0x48))(param_4);
          plVar26 = (longlong *)(**(code **)(lVar40 + 0x98))(plVar26,uVar23);
          if (plVar26 != (longlong *)0x0) {
            uVar23 = (**(code **)(*plVar26 + 8))(plVar26);
            iVar14 = FUN_14037e0a0(local_8a38,uVar25,&local_3668,uVar23);
            if (iVar14 == 0) {
              local_a418 = (char *)CONCAT44(local_a418._4_4_,0x20fb);
              log_InlineLogERROR(&DAT_1406d9c10,"IF_OK","msg.Create(nActType, szEffect, pMate->GetID())",
                                 "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
            }
            else {
              (**(code **)(plVar26[2] + 0x348))(plVar26 + 2,local_8a38,1);
            }
          }
        }
        FUN_14037e030(local_8a38);
        return 1;
      }
      iVar14 = _stricmp(&local_2948,"team");
      if (iVar14 == 0) {
        FUN_14037dfb0(local_5f98);
        uVar23 = (**(code **)(*param_4 + 8))(param_4);
        iVar14 = FUN_14037e0a0(local_5f98,uVar25,&local_3668,uVar23);
        if (iVar14 == 0) {
          local_a418 = (char *)CONCAT44(local_a418._4_4_,0x2105);
          log_InlineLogERROR(&DAT_1406d9c10,"IF_OK","msg.Create(nActType, szEffect, pUser->GetID())",
                             "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        }
        else {
          (**(code **)(param_4[2] + 0x348))(param_4 + 2,local_5f98,1);
        }
        plVar26 = (longlong *)FUN_140118320();
        if (plVar26 != (longlong *)0x0) {
          FUN_140035210(local_9bc8);
          lVar40 = *plVar26;
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          cVar7 = (**(code **)(lVar40 + 0x38))(plVar26,uVar23,local_9bc8);
          uVar41 = local_9bb0;
          if (cVar7 != '\0') {
            if (local_9ba8 < local_9bb0) {
              _invalid_parameter_noinfo();
            }
            local_a388 = local_9bc8[0];
            uStack_a380 = uVar41;
            while( true ) {
              uVar28 = local_9ba8;
              uVar41 = uStack_a380;
              lVar40 = local_a388;
              if (local_9ba8 < local_9bb0) {
                _invalid_parameter_noinfo();
              }
              if ((lVar40 == 0) || (lVar40 != local_9bc8[0])) {
                _invalid_parameter_noinfo();
              }
              if (uVar28 <= uVar41) break;
              uVar39 = FUN_140008520((int)param_1[9]);
              plVar26 = (longlong *)FUN_140087650(uVar39);
              lVar40 = *plVar26;
              puVar31 = (undefined4 *)FUN_140033360(&local_a388);
              plVar26 = (longlong *)(**(code **)(lVar40 + 0x98))(plVar26,*puVar31);
              if ((plVar26 != (longlong *)0x0) && (plVar26 != param_4)) {
                FUN_14037dfb0(local_5b48);
                uVar23 = (**(code **)(*plVar26 + 8))(plVar26);
                iVar14 = FUN_14037e0a0(local_5b48,uVar25,&local_3668,uVar23);
                if (iVar14 == 0) {
                  local_a418 = (char *)CONCAT44(local_a418._4_4_,0x2115);
                  log_InlineLogERROR(&DAT_1406d9c10,"IF_OK","msg.Create(nActType, szEffect, pMember->GetID())",
                                     "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
                }
                else {
                  (**(code **)(plVar26[2] + 0x348))(plVar26 + 2,local_5b48,1);
                }
                FUN_14037e030(local_5b48);
              }
              FUN_1400333a0(&local_a388);
            }
          }
          FUN_1400344f0(local_9bc8);
        }
        FUN_14037e030(local_5f98);
        return 1;
      }
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070ef80,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2121);
    }
    goto LAB_14013a784;
  case 0x16:
    local_2848 = '\0';
    memset(local_2847,0,0xff);
    local_a260 = 0;
    iVar14 = sscanf(param_3,"%s %d",&local_2848,&local_a260);
    if (iVar14 == 2) {
      iVar14 = _stricmp(&local_2848,"chk");
      if (iVar14 == 0) {
        cVar7 = FUN_14039a210(param_4,local_a260);
        if (cVar7 != '\0') {
          return 1;
        }
      }
      else {
        iVar14 = _stricmp(&local_2848,"add");
        if (iVar14 == 0) {
          FUN_14039a150(param_4,local_a260);
          return 1;
        }
        iVar14 = _stricmp(&local_2848,"clr");
        if (iVar14 == 0) {
          FUN_14039a1b0(param_4,local_a260);
          return 1;
        }
        uVar12 = FUN_1400bb7e0(param_2);
        log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x204d);
      }
    }
    goto LAB_14013a784;
  case 0x17:
    memset(local_9a98,0,0x208);
    local_9894[0] = 1;
    local_a408 = (char *)local_9894;
    local_a410 = (uint *)((longlong)&local_9898 + 2);
    local_a418 = (char *)&local_9898;
    iVar14 = sscanf(param_3,"%s %s %hu %hu %u",local_9a98,local_9998);
    if (1 < iVar14) {
      iVar14 = _stricmp(local_9a98,"play");
      if (iVar14 == 0) {
        FUN_14037dfb0(local_7d48);
        iVar14 = FUN_14037e0a0(local_7d48,0x14,local_9998,local_9898);
        if (iVar14 == 0) {
          local_a418 = (char *)CONCAT44(local_a418._4_4_,0x201a);
          log_InlineLogERROR(&DAT_1406d9c10,"IF_OK","msg.Create(NAMEACT_PLAYER_WAVE, info.szMedia, info.dwData)",
                             "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        }
        else {
          local_1648 = '\0';
          memset(local_1647,0,0xff);
          _snprintf(&local_1648,0xff,"%u",(ulonglong)local_9894[0]);
          FUN_14037e280(local_7d48,&local_1648);
          (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_7d48);
        }
        FUN_14037e030(local_7d48);
      }
      else {
        iVar14 = _stricmp(local_9a98,"broacast");
        if (iVar14 == 0) {
          FUN_14037dfb0(local_85e8);
          iVar14 = FUN_14037e0a0(local_85e8,0x14,local_9998,local_9898);
          if (iVar14 == 0) {
            local_a418 = (char *)CONCAT44(local_a418._4_4_,0x2027);
            log_InlineLogERROR(&DAT_1406d9c10,"IF_OK","msg.Create(NAMEACT_PLAYER_WAVE, info.szMedia, info.dwData)",
                               "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
          }
          else {
            local_1448 = '\0';
            memset(local_1447,0,0xff);
            _snprintf(&local_1448,0xff,"%u",(ulonglong)local_9894[0]);
            FUN_14037e280(local_85e8,&local_1448);
            (**(code **)(param_4[2] + 0x348))(param_4 + 2,local_85e8,1);
          }
          FUN_14037e030(local_85e8);
        }
      }
      return 1;
    }
    goto LAB_14013a784;
  case 0x18:
    local_a104 = 0;
    local_a22c = 0;
    iVar14 = sscanf(param_3,"%u %d",&local_a104,&local_a22c);
    if (iVar14 == 2) {
      lVar40 = param_4[0x14d];
      *(int *)(param_4 + 0x14d) = local_a22c + (int)lVar40;
      uVar25 = FUN_14039d300(param_4,local_a104,&DAT_1406dd892);
      FUN_140171c10(param_4,(int)lVar40,uVar25,local_a22c);
    }
    goto LAB_14013a784;
  case 0x19:
    cVar7 = FUN_140348580(param_4);
    if (cVar7 != '\0') {
      return 1;
    }
    goto LAB_14013a784;
  case 0x1a:
    cVar7 = FUN_140352770(param_4);
    if (cVar7 != '\0') {
      return 1;
    }
    goto LAB_14013a784;
  case 0x1b:
    local_a0a4 = 0;
    local_a0ec = 0;
    local_a0fc = 0;
    local_a0ac = 0;
    local_a0f4 = 0;
    local_a09c = 0;
    local_a094 = 0;
    local_a1e4 = 0;
    local_9fa0 = 0;
    local_a3e0 = &local_a1e4;
    local_a3e8 = &local_a094;
    local_a3f0 = &local_a0ec;
    local_a3f8 = &local_a09c;
    local_a400 = &local_a0f4;
    local_a408 = (char *)&local_9fa0;
    local_a410 = &local_a0ac;
    local_a418 = (char *)&local_a0a4;
    iVar14 = sscanf(param_3,"%s %d %u %d %I64d %d %d %u %d %d",local_448,&local_a0fc);
    if (9 < iVar14) {
      memset(local_9af8,0,0x60);
      tq::SafeCopy(local_9af8,local_448,0x24);
      local_9ad4 = local_a0ac;
      local_9ad0 = local_9fa0;
      local_9ac8 = local_a0fc;
      local_9ac4 = local_a0a4;
      lVar40 = FUN_140008520((int)param_1[9]);
      local_9ac0 = *(int *)(lVar40 + 0x68) + -0xe;
      local_9abc = (**(code **)(param_4[2] + 0x168))(param_4 + 2);
      local_9ab8 = (**(code **)(param_4[2] + 0x40))(param_4 + 2);
      local_9ab4 = (**(code **)(param_4[2] + 0x48))(param_4 + 2);
      local_9ab0 = local_a0f4;
      local_9aac = local_a09c;
      local_9aa8 = local_a0ec;
      local_9aa4 = local_a094;
      local_9aa0 = local_a1e4;
      uVar39 = FUN_140008520((int)param_1[9]);
      plVar26 = (longlong *)FUN_1400876b0(uVar39);
      uVar41 = (**(code **)(*plVar26 + 0x78))(plVar26,local_9af8);
      if ((int)uVar41 != 0) {
        FUN_1403725c0(param_4 + 0x1cf,uVar41 & 0xffffffff,1);
        FUN_14039e680(local_7078);
        lVar40 = (longlong)local_a1e4;
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        FUN_14039e700(local_7078,uVar25,0x4c,lVar40);
        (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_7078);
        FUN_14039e6d0(local_7078);
        return 1;
      }
      return uVar41;
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2853);
    goto LAB_14013a784;
  case 0x1c:
    uVar12 = *(uint *)((longlong)param_4 + 0xf2c);
    if (uVar12 == 0) {
      return 0;
    }
    uVar39 = FUN_140008520((int)param_1[9]);
    plVar26 = (longlong *)FUN_1400876b0(uVar39);
    plVar26 = (longlong *)(**(code **)(*plVar26 + 0x10))(plVar26,uVar12,1);
    if (plVar26 == (longlong *)0x0) {
      uVar13 = FUN_1400bb7e0(param_2);
      uVar20 = (**(code **)(*param_4 + 8))(param_4);
      log_InlineLogDBERROR
                ("table:cq_action/cq_newaction, EnterHome fail, UserId[%u], Action[%u], HomeMap[%u]",(ulonglong)uVar20,(ulonglong)uVar13,(ulonglong)uVar12);
      return 0;
    }
    FUN_1400e1ac0(plVar26,&local_a368);
    uVar25 = (**(code **)(param_4[2] + 0x168))(param_4 + 2);
    local_a288 = (char *)CONCAT44(local_a288._4_4_,uVar25);
    uVar25 = (**(code **)(param_4[2] + 0x40))(param_4 + 2);
    local_a340 = (undefined8 *)CONCAT44(local_a340._4_4_,uVar25);
    local_a1e0 = (**(code **)(param_4[2] + 0x48))(param_4 + 2);
    uVar25 = (**(code **)(*plVar26 + 8))(plVar26);
    plVar37 = local_a368;
    local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
    iVar14 = FUN_1401c55b0(param_4,uVar25,(ulonglong)local_a368 & 0xffffffff,local_a368._4_4_);
    if (iVar14 == 0) {
      iVar14 = (**(code **)(*(longlong *)plVar26[0xb] + 0x10))((longlong *)plVar26[0xb],3);
      if (iVar14 == 0x259) {
LAB_1401349d2:
        FUN_140170e90(param_4,0x2779);
LAB_1401349df:
        FUN_140170e90(param_4,0x2778);
LAB_1401349ec:
        FUN_140170e90(param_4,0x2777);
      }
      else if (iVar14 != 0x44a) {
        if (iVar14 != 1099) {
          if (iVar14 != 0x820) {
            if (iVar14 != 0xbd0) goto LAB_140134a06;
            FUN_140170e90(param_4,0x278a);
            goto LAB_1401349d2;
          }
          goto LAB_1401349df;
        }
        goto LAB_1401349ec;
      }
      FUN_140170e90(param_4,0x2776);
LAB_140134a06:
      plVar32 = (longlong *)FUN_140118320();
      if (plVar32 != (longlong *)0x0) {
        FUN_140035210(local_9bf8);
        lVar40 = *plVar32;
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        iVar14 = (**(code **)(lVar40 + 0x28))(plVar32,uVar25);
        local_a338 = (longlong *)CONCAT44(local_a338._4_4_,iVar14);
        if (iVar14 != 0) {
          lVar40 = *plVar32;
          uVar25 = (**(code **)(*param_4 + 8))(param_4);
          cVar7 = (**(code **)(lVar40 + 0x38))(plVar32,uVar25,local_9bf8);
          if (cVar7 != '\0') {
            iVar14 = 0;
            local_a300 = (**(code **)(*plVar32 + 0x48))(plVar32,(ulonglong)local_a338 & 0xffffffff,0);
            local_a338 = (longlong *)local_9be0;
            if (local_9bd8 < local_9be0) {
              _invalid_parameter_noinfo();
            }
            uVar12 = local_a300;
            local_a388 = local_9bf8[0];
            while( true ) {
              uVar41 = local_9bd8;
              lVar40 = local_a388;
              uStack_a380 = (ulonglong)local_a338;
              if (local_9bd8 < local_9be0) {
                _invalid_parameter_noinfo();
              }
              if ((lVar40 == 0) || (lVar40 != local_9bf8[0])) {
                _invalid_parameter_noinfo();
              }
              plVar32 = local_a040;
              if (uVar41 <= local_a338) break;
              uVar39 = FUN_140008520((int)param_1[9]);
              plVar32 = (longlong *)FUN_140087650(uVar39);
              lVar40 = *plVar32;
              puVar31 = (undefined4 *)FUN_140033360(&local_a388);
              lVar40 = (**(code **)(lVar40 + 0x98))(plVar32,*puVar31);
              if (lVar40 != 0) {
                iVar24 = (**(code **)(*(longlong *)(lVar40 + 0x10) + 0x168))(lVar40 + 0x10);
                if (((iVar24 == (int)local_a288) &&
                    (iVar24 = (**(code **)(*(longlong *)(lVar40 + 0x10) + 0x158))(lVar40 + 0x10,(ulonglong)local_a340 & 0xffffffff,local_a1e0), iVar24 < 6)) &&
                   (iVar24 = FUN_140166ec0(lVar40), iVar24 == 0)) {
                  uVar25 = (**(code **)(*plVar26 + 8))(plVar26);
                  local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
                  iVar24 = FUN_1401c55b0(lVar40,uVar25,(ulonglong)plVar37 & 0xffffffff,local_a368._4_4_);
                  if (iVar24 == 0) {
                    FUN_1401734d0(lVar40);
                    piVar29 = (int *)FUN_140033360(&local_a388);
                    if (*piVar29 != uVar12) {
                      FUN_140170e90(lVar40,0x2794);
                    }
                    iVar14 = iVar14 + 1;
                  }
                }
              }
              FUN_1400333a0(&local_a388);
              local_a338 = (longlong *)uStack_a380;
            }
            iVar24 = (**(code **)(*local_a040 + 8))(local_a040);
            if ((local_a300 == iVar24) && (0 < iVar14)) {
              FUN_140170e90(plVar32,0x2793);
            }
          }
        }
        FUN_1400344f0(local_9bf8);
      }
      return 1;
    }
    goto LAB_14013a784;
  case 0x1d:
    uVar41 = FUN_1401731e0(param_4);
    if ((int)uVar41 != 0) {
      uVar39 = FUN_140008520((int)param_1[9]);
      plVar26 = (longlong *)FUN_1400876b0(uVar39);
      plVar26 = (longlong *)(**(code **)(*plVar26 + 0x10))(plVar26,uVar41 & 0xffffffff,1);
      if (plVar26 == (longlong *)0x0) {
        local_a418 = (char *)CONCAT44(local_a418._4_4_,0x28d3);
        log_InlineLogERROR(&DAT_1406d9c10,"CHECKF",&DAT_140705b14,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        uVar41 = 0;
      }
      else {
        FUN_1400e1ac0(plVar26,&local_a368);
        uVar25 = (**(code **)(*plVar26 + 8))(plVar26);
        local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
        iVar14 = FUN_1401c55b0(param_4,uVar25,(ulonglong)local_a368 & 0xffffffff,local_a368._4_4_);
        uVar41 = (ulonglong)(iVar14 == 0);
      }
    }
    break;
  case 0x1e:
    cVar7 = FUN_140348840(param_4);
    if (cVar7 != '\0') {
      return 1;
    }
    goto LAB_14013a784;
  case 0x1f:
    cVar7 = FUN_140352aa0(param_4);
    if (cVar7 != '\0') {
      return 1;
    }
    goto LAB_14013a784;
  case 0x20:
    uVar12 = 0;
    local_a0e4 = 0;
    iVar14 = sscanf(param_3,"%d",&local_a0e4);
    if (iVar14 < 1) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x28dd);
      return 0;
    }
    plVar26 = (longlong *)FUN_140119790((int)param_1[9]);
    lVar40 = (**(code **)(*plVar26 + 0x30))(plVar26);
    local_9b48 = lVar40 + 0x10;
    FUN_1400cb1f0(local_9b40,**(undefined8 **)(lVar40 + 0x40),local_9b48);
    local_9b30 = (longlong *)0x0;
    cVar7 = FUN_1400ce310(&local_9b48);
    if (cVar7 != '\0') {
      puVar30 = (undefined8 *)0x1;
      local_a340 = (undefined8 *)0x1;
      do {
        uVar12 = uVar12 + 1;
        if (1000000 < uVar12) {
          local_a418 = (char *)CONCAT44(local_a418._4_4_,0x28e5);
          log_InlineLogERROR(&DAT_1406d9c10,"DEAD_LOOP_BREAK","uLoopCount","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
          break;
        }
        if ((((local_9b30 != (longlong *)0x0) && (cVar7 = (**(code **)(*local_9b30 + 0x298))(local_9b30,0x1040,&local_a048), cVar7 != '\0')) &&
            (iVar14 = (**(code **)(**(longlong **)(local_a048 + 0x60) + 0x10))(*(longlong **)(local_a048 + 0x60),4), iVar14 == 0x1b)) &&
           (iVar14 = FUN_140087300(local_a048,3), iVar14 == local_a0e4)) {
          plVar26 = (longlong *)(local_a048 + 0x10);
          uVar25 = FUN_140087300(local_a048,2);
          uVar23 = FUN_140087300(local_a048,(ulonglong)puVar30 & 0xffffffff);
          uVar19 = (**(code **)(*plVar26 + 0x168))(plVar26);
          local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
          iVar14 = FUN_1401c55b0(param_4,uVar19,uVar23,uVar25);
          puVar30 = local_a340;
          if (iVar14 == 0) {
            return 1;
          }
        }
        cVar7 = FUN_1400ce310(&local_9b48);
      } while (cVar7 != '\0');
    }
    goto LAB_14013a784;
  case 0x21:
    lVar40 = 0;
    local_9ec8 = 0;
    memset(local_9ec4,0,0x4c);
    local_a390 = local_9e7c;
    local_a398 = local_9e80;
    local_a3a0 = local_9e84;
    local_a3a8 = local_9e88;
    local_a3b0 = local_9e8c;
    local_a3b8 = local_9e90;
    local_a3c0 = local_9e94;
    local_a3c8 = local_9e98;
    local_a3d0 = local_9e9c;
    local_a3d8 = local_9ea0;
    local_a3e0 = (int *)local_9ea4;
    local_a3e8 = (undefined4 *)local_9ea8;
    local_a3f0 = (undefined4 *)local_9eac;
    local_a3f8 = (undefined4 *)local_9eb0;
    local_a400 = (int *)local_9eb4;
    local_a408 = local_9eb8;
    local_a410 = (uint *)local_9ebc;
    local_a418 = local_9ec0;
    iVar14 = sscanf(param_3,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&local_9ec8,local_9ec4);
    if (iVar14 - 1U < 0x14) {
      if (0 < iVar14) {
        do {
          uVar25 = *(undefined4 *)(local_9ec4 + lVar40 * 4 + -4);
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_1400877e0(uVar39);
          FUN_1402f3960(uVar39,uVar23,uVar25,0);
          lVar40 = lVar40 + 1;
        } while (lVar40 < iVar14);
      }
      uVar41 = 1;
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2900);
      uVar41 = 0;
    }
    break;
  case 0x22:
    local_a21c = 0;
    local_a1a4 = 0;
    local_a224 = 1;
    local_a418 = (char *)&local_a224;
    iVar14 = sscanf(param_3,"%d %d %d",&local_a21c,&local_a1a4);
    if (iVar14 < 2) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2947);
      return 0;
    }
    lVar40 = FUN_140163c90(param_4,local_a21c,local_a224);
    if ((lVar40 != 0) && (cVar7 = FUN_1401c3180(param_4,lVar40,local_a224,local_a1a4), cVar7 != '\0')) {
      bVar43 = *(byte *)((longlong)param_4 + 0xeee);
      uVar25 = (**(code **)(param_4[2] + 0x70))(param_4 + 2);
      uVar12 = (**(code **)(*param_4 + 8))(param_4);
      uVar39 = (**(code **)(param_4[2] + 0x18))(param_4 + 2);
      local_a400 = (int *)CONCAT44(local_a400._4_4_,local_a1a4);
      local_a408 = (char *)CONCAT44(local_a408._4_4_,local_a21c);
      local_a410 = (uint *)CONCAT44(local_a410._4_4_,uVar25);
      local_a418 = (char *)CONCAT44(local_a418._4_4_,(uint)bVar43);
      tq::MyLogSave("gmlog/rebirth","User[%s][%d], prof[%d], level[%d] rebirth to prof[%d], look[%d]",uVar39,(ulonglong)uVar12);
      return 1;
    }
    goto LAB_14013a784;
  case 0x23:
    (**(code **)(*param_4 + 0x150))(param_4,0x839,param_3);
    uVar41 = 1;
    break;
  case 0x24:
    FUN_140173900(param_4,param_3);
    uVar41 = 1;
    break;
  case 0x25:
    uVar41 = FUN_140162620(param_4);
    break;
  case 0x26:
    lVar40 = 0;
    local_9e78 = 0;
    memset(local_9e74,0,0x4c);
    local_a390 = local_9e2c;
    local_a398 = local_9e30;
    local_a3a0 = local_9e34;
    local_a3a8 = local_9e38;
    local_a3b0 = local_9e3c;
    local_a3b8 = local_9e40;
    local_a3c0 = local_9e44;
    local_a3c8 = local_9e48;
    local_a3d0 = local_9e4c;
    local_a3d8 = local_9e50;
    local_a3e0 = (int *)local_9e54;
    local_a3e8 = (undefined4 *)local_9e58;
    local_a3f0 = (undefined4 *)local_9e5c;
    local_a3f8 = (undefined4 *)local_9e60;
    local_a400 = (int *)local_9e64;
    local_a408 = local_9e68;
    local_a410 = (uint *)local_9e6c;
    local_a418 = local_9e70;
    iVar14 = sscanf(param_3,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&local_9e78,local_9e74);
    if (iVar14 - 1U < 0x14) {
      if (0 < iVar14) {
        do {
          uVar25 = *(undefined4 *)(local_9e74 + lVar40 * 4 + -4);
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_1400877e0(uVar39);
          FUN_1402f3960(uVar39,uVar23,uVar25,2);
          lVar40 = lVar40 + 1;
        } while (lVar40 < iVar14);
      }
      uVar41 = 1;
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2930);
      uVar41 = 0;
    }
    break;
  case 0x27:
    lVar40 = 0;
    local_9e28 = 0;
    memset(local_9e24,0,0x4c);
    local_a390 = local_9ddc;
    local_a398 = local_9de0;
    local_a3a0 = local_9de4;
    local_a3a8 = local_9de8;
    local_a3b0 = local_9dec;
    local_a3b8 = local_9df0;
    local_a3c0 = local_9df4;
    local_a3c8 = local_9df8;
    local_a3d0 = local_9dfc;
    local_a3d8 = local_9e00;
    local_a3e0 = (int *)local_9e04;
    local_a3e8 = (undefined4 *)local_9e08;
    local_a3f0 = (undefined4 *)local_9e0c;
    local_a3f8 = (undefined4 *)local_9e10;
    local_a400 = (int *)local_9e14;
    local_a408 = local_9e18;
    local_a410 = (uint *)local_9e1c;
    local_a418 = local_9e20;
    iVar14 = sscanf(param_3,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&local_9e28,local_9e24);
    if (iVar14 - 1U < 0x14) {
      if (0 < iVar14) {
        do {
          uVar25 = *(undefined4 *)(local_9e24 + lVar40 * 4 + -4);
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_1400877e0(uVar39);
          FUN_1402f3960(uVar39,uVar23,uVar25,1);
          lVar40 = lVar40 + 1;
        } while (lVar40 < iVar14);
      }
      uVar41 = 1;
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2918);
      uVar41 = 0;
    }
    break;
  case 0x28:
    FUN_140362560(local_6818);
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    uVar11 = (**(code **)(param_4[2] + 0x50))(param_4 + 2);
    uVar23 = (**(code **)(param_4[2] + 0x48))(param_4 + 2);
    uVar19 = (**(code **)(param_4[2] + 0x40))(param_4 + 2);
    uVar17 = (**(code **)(*param_4 + 8))(param_4);
    local_a400 = (int *)((ulonglong)local_a400._4_4_ << 0x20);
    local_a408 = (char *)CONCAT44(local_a408._4_4_,uVar25);
    local_a410 = (uint *)CONCAT62(local_a410._2_6_,0x7e);
    local_a418 = (char *)CONCAT62(local_a418._2_6_,uVar11);
    iVar14 = FUN_140362620(local_6818,uVar17,uVar19,uVar23);
    if (iVar14 == 0) {
      local_a418 = (char *)CONCAT44(local_a418._4_4_,0x2963);
      log_InlineLogERROR(&DAT_1406d9c10,"IF_OK",
                         "msg.Create(pUser->GetID(), pUser->GetPosX(), pUser->GetPosY(), pUser->GetDir(), actionOpenDialog, pAction->GetInt(ACTIONDATA_DATA))",
                         "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
    }
    else {
      (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_6818);
    }
    FUN_1403625e0(local_6818);
    uVar41 = 1;
    break;
  case 0x29:
    FUN_1401abf00(param_4);
    uVar41 = 1;
    break;
  case 0x2a:
    local_a060 = 100;
    local_a13c = 0;
    iVar14 = sscanf(param_3,"%d %u",&local_a060,&local_a13c);
    if (iVar14 == 2) {
      FUN_140382c50(param_4,local_a060,local_a13c);
    }
    goto LAB_14013a784;
  case 0x2b:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    iVar14 = FUN_140331010(param_4,uVar25);
    uVar41 = (ulonglong)(0 < iVar14);
    break;
  case 0x2c:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    cVar7 = FUN_140348b00(param_4,uVar25);
    if (cVar7 != '\0') {
      return 1;
    }
    goto LAB_14013a784;
  case 0x2d:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    cVar7 = FUN_140352dd0(param_4,uVar25);
    if (cVar7 != '\0') {
      return 1;
    }
    goto LAB_14013a784;
  case 0x2e:
    uVar41 = (ulonglong)*(byte *)((longlong)param_4 + 0x51c);
    break;
  case 0x2f:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
    if (iVar14 == 0) {
      if (param_5 == (longlong *)0x0) {
        uVar12 = FUN_14008fc30(param_2);
        log_InlineLogDBERROR
                  ("table:cq_action/cq_newaction, CGameAction::ProcessActionUser() Action[%d] at %s, %d",(ulonglong)uVar12,
                   "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1de0);
        return 0;
      }
      iVar14 = (**(code **)(*param_5 + 0x10))(param_5);
    }
    plVar26 = (longlong *)CurrentInstanceGet();
    plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x12);
    if (plVar26 == (longlong *)0x0) {
      uVar41 = 0;
    }
    else {
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      uVar41 = (**(code **)(lVar40 + 0x80))(plVar26,uVar25,iVar14,10);
    }
    break;
  case 0x30:
    local_a234 = 0;
    local_a154 = 0;
    local_a418 = (char *)&local_a234;
    iVar14 = sscanf(param_3,"%s %u %u",local_1348,&local_a154);
    if (0 < iVar14) {
      if (iVar14 < 3) {
        local_a154 = (**(code **)(*param_4 + 8))(param_4);
        local_a234 = 0;
      }
      plVar26 = (longlong *)FUN_140118220();
      iVar14 = _stricmp(local_1348,"isexit");
      if (iVar14 == 0) {
        plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
        uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
        lVar40 = *plVar26;
        uVar23 = (**(code **)(*param_4 + 8))(param_4);
        uVar41 = (**(code **)(lVar40 + 0x20))(plVar26,uVar23,uVar25);
        return uVar41;
      }
      iVar14 = _stricmp(local_1348,"new");
      if (iVar14 == 0) {
        plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
        uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
        lVar40 = *plVar26;
        uVar23 = (**(code **)(*param_4 + 8))(param_4);
        uVar41 = (**(code **)(lVar40 + 0x10))(plVar26,uVar23,uVar25,local_a234);
        return uVar41;
      }
      iVar14 = _stricmp(local_1348,"delete");
      if (iVar14 != 0) {
        return 0;
      }
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
      uVar23 = (**(code **)(*param_4 + 8))(param_4);
      cVar7 = FUN_1403a0250(uVar23,uVar25);
      if (cVar7 != '\0') {
        FUN_14016d6c0(param_4,0xc);
      }
      lVar40 = *plVar26;
      uVar23 = FUN_1400bb7e0(param_2);
      uVar19 = (**(code **)(*param_4 + 8))(param_4);
      uVar41 = (**(code **)(lVar40 + 0x18))(plVar26,uVar19,uVar25,uVar23);
      return uVar41;
    }
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
    uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
    uVar13 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR("table:cq_action/cq_newaction, ACTION (id=%u,type=%d): Wrong param number",(ulonglong)uVar13,(ulonglong)uVar12);
    goto LAB_14013a784;
  case 0x31:
    local_a360 = 0;
    local_a418 = (char *)&local_a360;
    iVar14 = sscanf(param_3,"%s %s %d",local_3d68,local_3b68);
    if (iVar14 < 3) {
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
      uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
      uVar13 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR("table:cq_action/cq_newaction, ACTION (id=%u,type=%d): Wrong param number",(ulonglong)uVar13,(ulonglong)uVar12);
    }
    else {
      plVar26 = (longlong *)FUN_140118220();
      local_a368 = plVar26;
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
      lVar40 = *plVar26;
      uVar23 = (**(code **)(*param_4 + 8))(param_4);
      uVar41 = (**(code **)(lVar40 + 0x20))(plVar26,uVar23,uVar25);
      if ((char)uVar41 == '\0') {
        return uVar41;
      }
      iVar14 = _strnicmp(local_3d68,"data",4);
      if (iVar14 == 0) {
        iVar14 = _stricmp(local_3d68,"data1");
        if (iVar14 == 0) {
          uVar25 = 1;
        }
        else {
          iVar14 = _stricmp(local_3d68,"data2");
          if (iVar14 == 0) {
            uVar25 = 2;
          }
          else {
            iVar14 = _stricmp(local_3d68,"data3");
            if (iVar14 == 0) {
              uVar25 = 3;
            }
            else {
              iVar14 = _stricmp(local_3d68,"data4");
              if (iVar14 == 0) {
                uVar25 = 4;
              }
              else {
                iVar14 = _stricmp(local_3d68,"data5");
                if (iVar14 == 0) {
                  uVar25 = 5;
                }
                else {
                  iVar14 = _stricmp(local_3d68,"data6");
                  if (iVar14 == 0) {
                    uVar25 = 6;
                  }
                  else {
                    iVar14 = _stricmp(local_3d68,"data7");
                    if (iVar14 != 0) {
                      return 0;
                    }
                    uVar25 = 7;
                  }
                }
              }
            }
          }
        }
        iVar14 = _stricmp(local_3b68,">=");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar23 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar19 = (**(code **)(*param_4 + 8))(param_4);
          iVar14 = (**(code **)(lVar40 + 0x38))(plVar26,uVar19,uVar23,uVar25);
          return (ulonglong)((int)local_a360 <= iVar14);
        }
        iVar14 = _stricmp(local_3b68,"<=");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar23 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar19 = (**(code **)(*param_4 + 8))(param_4);
          iVar14 = (**(code **)(lVar40 + 0x38))(plVar26,uVar19,uVar23,uVar25);
          return (ulonglong)(iVar14 <= (int)local_a360);
        }
        iVar14 = _stricmp(local_3b68,"==");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar23 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar19 = (**(code **)(*param_4 + 8))(param_4);
          uVar12 = (**(code **)(lVar40 + 0x38))(plVar26,uVar19,uVar23,uVar25);
          return (ulonglong)(uVar12 == local_a360);
        }
        iVar14 = _stricmp(local_3b68,"+=");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar23 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar19 = (**(code **)(*param_4 + 8))(param_4);
          uVar9 = (**(code **)(lVar40 + 0x38))(plVar26,uVar19,uVar23,uVar25);
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar23 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          iVar14 = uVar9 + local_a360;
          uVar19 = (**(code **)(*param_4 + 8))(param_4);
          local_a418 = (char *)CONCAT44(local_a418._4_4_,iVar14);
          uVar41 = (**(code **)(lVar40 + 0x40))(local_a368,uVar19,uVar23,uVar25);
          return uVar41;
        }
        iVar14 = _stricmp(local_3b68,"set");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar23 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar19 = (**(code **)(*param_4 + 8))(param_4);
          local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a360);
          uVar41 = (**(code **)(lVar40 + 0x40))(plVar26,uVar19,uVar23,uVar25);
          return uVar41;
        }
      }
      else {
        iVar14 = _stricmp(local_3d68,"notify");
        if (iVar14 == 0) {
          iVar14 = _stricmp(local_3b68,"==");
          if (iVar14 == 0) {
            plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
            uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
            lVar40 = *plVar26;
            uVar23 = (**(code **)(*param_4 + 8))(param_4);
            uVar12 = (**(code **)(lVar40 + 0x48))(plVar26,uVar23,uVar25);
            return (ulonglong)((uVar12 & 0xff) == local_a360);
          }
          iVar14 = _stricmp(local_3b68,"set");
          if (iVar14 == 0) {
            plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
            uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
            lVar40 = *plVar26;
            uVar23 = (**(code **)(*param_4 + 8))(param_4);
            uVar41 = (**(code **)(lVar40 + 0x50))(plVar26,uVar23,uVar25,(undefined1)local_a360);
            return uVar41;
          }
        }
        else {
          iVar14 = _stricmp(local_3d68,"complete");
          if (iVar14 == 0) {
            iVar14 = _stricmp(local_3b68,"==");
            if (iVar14 == 0) {
              plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
              uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
              lVar40 = *plVar26;
              uVar23 = (**(code **)(*param_4 + 8))(param_4);
              uVar12 = (**(code **)(lVar40 + 0x58))(plVar26,uVar23,uVar25);
              return (ulonglong)((uVar12 & 0xffff) == local_a360);
            }
            iVar14 = _stricmp(local_3b68,"set");
            if (iVar14 == 0) {
              plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
              uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
              lVar40 = *plVar26;
              uVar23 = (**(code **)(*param_4 + 8))(param_4);
              uVar41 = (**(code **)(lVar40 + 0x60))(plVar26,uVar23,uVar25,(undefined2)local_a360);
              return uVar41;
            }
          }
          else {
            iVar14 = _stricmp(local_3d68,"overtime");
            if (iVar14 == 0) {
              iVar14 = _stricmp(local_3b68,"set");
              if (iVar14 == 0) {
                plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
                uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
                lVar40 = *plVar26;
                uVar23 = (**(code **)(*param_4 + 8))(param_4);
                local_a418 = (char *)((ulonglong)local_a418 & 0xffffffff00000000);
                uVar41 = (**(code **)(lVar40 + 0x78))(plVar26,uVar23,uVar25,local_a360);
                return uVar41;
              }
              iVar14 = _stricmp(local_3b68,"==");
              if (iVar14 == 0) {
                plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
                uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
                lVar40 = *plVar26;
                uVar23 = (**(code **)(*param_4 + 8))(param_4);
                uVar12 = (**(code **)(lVar40 + 0x68))(plVar26,uVar23,uVar25);
                return (ulonglong)(uVar12 == local_a360);
              }
            }
            else {
              iVar14 = _stricmp(local_3d68,"isovertime");
              if (iVar14 == 0) {
                plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
                uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
                lVar40 = *plVar26;
                uVar23 = (**(code **)(*param_4 + 8))(param_4);
                uVar41 = (**(code **)(lVar40 + 0x90))(plVar26,uVar23,uVar25);
                return uVar41;
              }
            }
          }
        }
      }
    }
    goto LAB_14013a784;
  case 0x32:
    local_a36c = 0;
    local_a418 = (char *)&local_a36c;
    iVar14 = sscanf(param_3,"%s %s %d",local_1148,local_3f78);
    if (iVar14 < 3) {
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
      uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
      uVar13 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR("table:cq_action/cq_newaction, ACTION (id=%u,type=%d): Wrong param number",(ulonglong)uVar13,(ulonglong)uVar12);
    }
    else {
      plVar26 = (longlong *)FUN_140118220();
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
      lVar40 = *plVar26;
      uVar23 = (**(code **)(*param_4 + 8))(param_4);
      uVar41 = (**(code **)(lVar40 + 0x20))(plVar26,uVar23,uVar25);
      if ((char)uVar41 == '\0') {
        return uVar41;
      }
      iVar14 = _stricmp(local_1148,"time");
      if (iVar14 == 0) {
        _Var16 = _time32((__time32_t *)0x0);
        iVar14 = _stricmp(local_3f78,">=");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          iVar14 = (**(code **)(lVar40 + 0x38))(plVar26,uVar23,uVar25,7);
          return (ulonglong)((int)local_a36c <= iVar14);
        }
        iVar14 = _stricmp(local_3f78,"<=");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          iVar14 = (**(code **)(lVar40 + 0x38))(plVar26,uVar23,uVar25,7);
          return (ulonglong)(iVar14 <= (int)local_a36c);
        }
        iVar14 = _stricmp(local_3f78,"==");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          uVar12 = (**(code **)(lVar40 + 0x38))(plVar26,uVar23,uVar25,7);
          return (ulonglong)(uVar12 == local_a36c);
        }
        iVar14 = _stricmp(local_3f78,"+=");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          iVar14 = (**(code **)(lVar40 + 0x38))(plVar26,uVar23,uVar25,7);
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          iVar14 = iVar14 + local_a36c;
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          local_a418 = (char *)CONCAT44(local_a418._4_4_,iVar14);
          uVar41 = (**(code **)(lVar40 + 0x40))(plVar26,uVar23,uVar25,7);
          return uVar41;
        }
        iVar14 = _stricmp(local_3f78,">");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          iVar14 = (**(code **)(lVar40 + 0x38))(plVar26,uVar23,uVar25,7);
          return (ulonglong)((int)local_a36c < iVar14);
        }
        iVar14 = _stricmp(local_3f78,"<");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          iVar14 = (**(code **)(lVar40 + 0x38))(plVar26,uVar23,uVar25,7);
          return (ulonglong)(iVar14 < (int)local_a36c);
        }
        iVar14 = _stricmp(local_3f78,"set");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          local_a418 = (char *)CONCAT44(local_a418._4_4_,_Var16);
          uVar41 = (**(code **)(lVar40 + 0x40))(plVar26,uVar23,uVar25,7);
          return uVar41;
        }
      }
      else {
        iVar14 = _stricmp(local_1148,"interval(0)");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
          lVar40 = *plVar26;
          uVar23 = (**(code **)(*param_4 + 8))(param_4);
          iVar14 = (**(code **)(lVar40 + 0x38))(plVar26,uVar23,uVar25,7);
          _Var16 = _time32((__time32_t *)0x0);
          iVar24 = _stricmp(local_3f78,">=");
          if (iVar24 == 0) {
            return (ulonglong)(local_a36c <= (uint)(_Var16 - iVar14));
          }
          iVar24 = _stricmp(local_3f78,"==");
          if (iVar24 == 0) {
            return (ulonglong)(_Var16 - iVar14 == local_a36c);
          }
          iVar24 = _stricmp(local_3f78,">");
          if (iVar24 == 0) {
            return (ulonglong)(local_a36c < (uint)(_Var16 - iVar14));
          }
          iVar24 = _stricmp(local_3f78,"<");
          if (iVar24 == 0) {
            return (ulonglong)((uint)(_Var16 - iVar14) < local_a36c);
          }
        }
        else {
          iVar14 = _stricmp(local_1148,"interval(1)");
          if (iVar14 == 0) {
            plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
            uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
            lVar40 = *plVar26;
            uVar23 = (**(code **)(*param_4 + 8))(param_4);
            uVar12 = (**(code **)(lVar40 + 0x38))(plVar26,uVar23,uVar25,7);
            GetTimeZoneInformation(&local_9888);
            if ((longlong)(ulonglong)uVar12 < (longlong)(local_9888.Bias * 0x3c)) {
              return 0;
            }
            uVar13 = (uVar12 + local_9888.Bias * -0x3c) / 0x15180;
            _Var16 = _time32((__time32_t *)0x0);
            uVar12 = (_Var16 + local_9888.Bias * -0x3c) / 0x15180;
            if (uVar12 < uVar13) {
              return 0;
            }
            uVar12 = uVar12 - uVar13;
            iVar14 = _stricmp(local_3f78,">=");
            if (iVar14 == 0) {
              return (ulonglong)((int)local_a36c <= (int)uVar12);
            }
            iVar14 = _stricmp(local_3f78,"==");
            if (iVar14 != 0) {
              iVar14 = _stricmp(local_3f78,">");
              if (iVar14 == 0) {
                return (ulonglong)((int)local_a36c < (int)uVar12);
              }
              iVar14 = _stricmp(local_3f78,"<");
              if (iVar14 != 0) {
                return 0;
              }
              return (ulonglong)((int)uVar12 < (int)local_a36c);
            }
            return (ulonglong)(uVar12 == local_a36c);
          }
        }
      }
    }
    goto LAB_14013a784;
  case 0x33:
    local_a2a8 = 0;
    local_a058 = 0;
    local_2448[0] = '\0';
    memset(local_2448 + 1,0,0xff);
    local_a418 = (char *)&local_a058;
    iVar14 = sscanf(param_3,"var(%d) %s %I64d",&local_a2a8,local_2448);
    if (iVar14 == 3) {
      lVar40 = 2;
      bVar45 = true;
      pcVar33 = local_2448;
      pcVar42 = ">";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        lVar40 = FUN_1401644d0(param_4,local_a2a8);
        return (ulonglong)(local_a058 < lVar40);
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_2448;
      pcVar42 = ">=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (!bVar45) {
        lVar40 = FUN_1401644d0(param_4,local_a2a8);
        return (ulonglong)(lVar40 == local_a058);
      }
      lVar40 = FUN_1401644d0(param_4,local_a2a8);
      return (ulonglong)(local_a058 <= lVar40);
    }
    goto LAB_14013a784;
  case 0x34:
    local_a0a8 = 0;
    local_9f90 = 0;
    local_a48 = 0;
    memset(local_a47,0,0xff);
    local_a418 = (char *)&local_9f90;
    iVar14 = sscanf(param_3,"var(%d) %s %I64d",&local_a0a8,&local_a48);
    if (iVar14 == 3) {
      FUN_140164520(param_4,local_a0a8,local_9f90);
      return 1;
    }
    goto LAB_14013a784;
  case 0x35:
    local_a1c4 = 0;
    local_f48[0] = '\0';
    memset(local_f48 + 1,0,0xff);
    local_2748[0] = '\0';
    memset(local_2748 + 1,0,0xff);
    local_a418 = local_2748;
    iVar14 = sscanf(param_3,"var(%d) %s %s",&local_a1c4,local_f48);
    if (iVar14 == 3) {
      lVar40 = 3;
      bVar45 = true;
      pcVar33 = local_f48;
      pcVar42 = "==";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (!bVar45) {
        return 0;
      }
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
      iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
      if (iVar14 != 0x426) {
        pcVar33 = (char *)FUN_140164570(param_4,local_a1c4);
        iVar14 = _stricmp(pcVar33,local_2748);
        return (ulonglong)(iVar14 == 0);
      }
      pcVar33 = (char *)FUN_140164570(param_4,local_a1c4);
      lVar40 = -(longlong)pcVar33;
      do {
        cVar7 = *pcVar33;
        cVar1 = pcVar33[(longlong)(local_2748 + lVar40)];
        if (cVar7 != cVar1) break;
        pcVar33 = pcVar33 + 1;
      } while (cVar1 != '\0');
      return (ulonglong)(cVar7 == cVar1);
    }
    goto LAB_14013a784;
  case 0x36:
    local_a14c = 0;
    local_b48 = 0;
    memset(local_b47,0,0xff);
    local_d48 = 0;
    memset(local_d47,0,0xff);
    local_a418 = &local_d48;
    iVar14 = sscanf(param_3,"var(%d) %s %s",&local_a14c,&local_b48);
    if (iVar14 == 3) {
      FUN_1401645e0(param_4,local_a14c,&local_d48);
      return 1;
    }
    goto LAB_14013a784;
  case 0x37:
    local_a374 = 0;
    local_a2f8 = 0;
    local_3968[0] = '\0';
    memset(local_3968 + 1,0,0xff);
    local_a418 = (char *)&local_a2f8;
    iVar14 = sscanf(param_3,"var(%d) %s %I64d",&local_a374,local_3968);
    if (iVar14 == 3) {
      lVar40 = 3;
      bVar45 = true;
      pcVar33 = local_3968;
      pcVar42 = "+=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        lVar40 = FUN_1401644d0(param_4,local_a374);
        FUN_140164520(param_4,local_a374,lVar40 + local_a2f8);
        return 1;
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3968;
      pcVar42 = "-=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        lVar40 = FUN_1401644d0(param_4,local_a374);
        FUN_140164520(param_4,local_a374,lVar40 - local_a2f8);
        return 1;
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3968;
      pcVar42 = "*=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        lVar40 = FUN_1401644d0(param_4,local_a374);
        FUN_140164520(param_4,local_a374,lVar40 * local_a2f8);
        return 1;
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3968;
      pcVar42 = "/=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        if (local_a2f8 == 0) {
          return 0;
        }
        lVar40 = FUN_1401644d0(param_4,local_a374);
        FUN_140164520(param_4,local_a374,lVar40 / (longlong)local_a2f8);
        return 1;
      }
      lVar40 = 5;
      bVar45 = false;
      pcVar33 = local_3968;
      pcVar42 = "mod=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        if (local_a2f8 == 0) {
          return 0;
        }
        lVar40 = FUN_1401644d0(param_4,local_a374);
        FUN_140164520(param_4,local_a374,lVar40 % (longlong)local_a2f8);
        return 1;
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3968;
      pcVar42 = "&=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar41 = FUN_1401644d0(param_4,local_a374);
        FUN_140164520(param_4,local_a374,uVar41 & local_a2f8);
        return 1;
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3968;
      pcVar42 = "|=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar41 = FUN_1401644d0(param_4,local_a374);
        FUN_140164520(param_4,local_a374,uVar41 | local_a2f8);
        return 1;
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3968;
      pcVar42 = "^=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar41 = FUN_1401644d0(param_4,local_a374);
        FUN_140164520(param_4,local_a374,uVar41 ^ local_a2f8);
        return 1;
      }
    }
    goto LAB_14013a784;
  case 0x38:
    local_a174 = 0;
    local_a0b8 = 0;
    iVar14 = sscanf(param_3,"%d %d",&local_a174,&local_a0b8);
    if (iVar14 == 2) {
      plVar26 = (longlong *)FUN_140087d40();
      lVar40 = *plVar26;
      uVar25 = FUN_140337820(param_4,local_a174);
      lVar40 = (**(code **)(lVar40 + 0x60))(plVar26,uVar25);
      if ((lVar40 == 0) || (iVar14 = FUN_1400fed80(lVar40), iVar14 != local_a0b8)) {
        uVar41 = 0;
      }
      else {
        uVar41 = 1;
      }
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1c34);
      uVar41 = 0;
    }
    break;
  case 0x39:
    local_a274 = 0;
    local_a27c = 0;
    local_a26c = 0;
    local_2248[0] = '\0';
    memset(local_2248 + 1,0,0xff);
    local_a410 = (uint *)&local_a26c;
    local_a418 = local_2248;
    iVar14 = sscanf(param_3,"stc_daily(%u, %u) %s %d",&local_a274,&local_a27c);
    bVar45 = iVar14 == 4;
    if (bVar45) {
      lVar40 = 2;
      pcVar33 = local_2248;
      pcVar42 = ">";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        iVar14 = FUN_140384af0(param_4,local_a274,local_a27c);
        uVar41 = (ulonglong)(local_a26c < iVar14);
      }
      else {
        lVar40 = 3;
        pcVar33 = local_2248;
        pcVar42 = ">=";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          iVar14 = FUN_140384af0(param_4,local_a274,local_a27c);
          uVar41 = (ulonglong)(local_a26c <= iVar14);
        }
        else {
          iVar14 = FUN_140384af0(param_4,local_a274,local_a27c);
          uVar41 = (ulonglong)(iVar14 == local_a26c);
        }
      }
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1c82);
      uVar41 = 0;
    }
    break;
  case 0x3a:
    local_a25c = 0;
    local_a264 = 0;
    local_1a48[0] = '\0';
    memset(local_1a48 + 1,0,0xff);
    local_a1a8 = 0;
    local_a1b0 = 0;
    local_a408 = (char *)&local_a1b0;
    local_a410 = (uint *)&local_a1a8;
    local_a418 = local_1a48;
    iVar14 = sscanf(param_3,"stc_daily(%u, %u) %s %d %d",&local_a25c,&local_a264);
    if (iVar14 == 5) {
      lVar40 = 3;
      bVar45 = true;
      pcVar33 = local_1a48;
      pcVar42 = "+=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        iVar14 = FUN_140384af0(param_4,local_a25c,local_a264);
        local_a410 = (uint *)CONCAT71(local_a410._1_7_,1);
        local_a418 = (char *)CONCAT71(local_a418._1_7_,0 < local_a1b0);
        uVar41 = FUN_140384c50(param_4,local_a25c,local_a264,iVar14 + local_a1a8);
        return uVar41;
      }
      lVar40 = 2;
      bVar45 = false;
      pcVar33 = local_1a48;
      pcVar42 = "=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        local_a410 = (uint *)CONCAT71(local_a410._1_7_,1);
        local_a418 = (char *)CONCAT71(local_a418._1_7_,0 < local_a1b0);
        uVar41 = FUN_140384c50(param_4,local_a25c,local_a264,local_a1a8);
        return uVar41;
      }
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1c98);
    uVar41 = 0;
    break;
  case 0x3b:
    local_a24c = 0;
    local_a1cc = 0;
    local_2648 = '\0';
    memset(local_2647,0,0xff);
    local_a418 = &local_2648;
    iVar14 = sscanf(param_3,"stc_daily(%u, %u) %s",&local_a24c,&local_a1cc);
    if (iVar14 == 3) {
      iVar14 = _stricmp(&local_2648,"delete");
      if (iVar14 == 0) {
        uVar41 = FUN_140385060(param_4,local_a24c,local_a1cc);
        return uVar41;
      }
      iVar14 = _stricmp(&local_2648,"isexit");
      if (iVar14 == 0) {
        uVar41 = FUN_140384fa0(param_4,local_a24c,local_a1cc);
        return uVar41;
      }
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1cad);
    uVar41 = 0;
    break;
  case 0x3c:
    local_a0a0 = 0;
    local_a144 = 0;
    local_a080 = 0;
    local_a418 = (char *)&local_a080;
    iVar14 = sscanf(param_3,"%u %d %d",&local_a0a0,&local_a144);
    if (iVar14 == 3) {
      uVar41 = FUN_1401ba200(param_4,local_a0a0,local_a144,local_a080);
      return uVar41;
    }
    goto LAB_14013a784;
  case 0x3d:
    local_a1ec = 0;
    local_a070 = 0;
    local_a330[0] = 0;
    local_a418 = (char *)local_a330;
    iVar14 = sscanf(param_3,"%u %u %hu",&local_a1ec,&local_a070);
    if (iVar14 == 3) {
      FUN_1401a9b00(param_4,local_a1ec,local_a070,0);
      if (local_a330[0] != 0) {
        FUN_140362560(local_4e58);
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        local_a400 = (int *)((ulonglong)local_a400._4_4_ << 0x20);
        local_a408 = (char *)CONCAT44(local_a408._4_4_,local_a1ec);
        local_a410 = (uint *)CONCAT62(local_a410._2_6_,0x9f);
        local_a418 = (char *)CONCAT62(local_a418._2_6_,local_a330[0]);
        iVar14 = FUN_140362620(local_4e58,uVar25,0,0);
        if (iVar14 != 0) {
          (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_4e58);
        }
        FUN_1403625e0(local_4e58);
      }
      return 1;
    }
    goto LAB_14013a784;
  case 0x3e:
    FUN_1403a5840(local_74a8);
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    param_4 = param_4 + 2;
    uVar23 = (**(code **)(*param_4 + 0x48))(param_4);
    uVar19 = (**(code **)(*param_4 + 0x40))(param_4);
    local_a408 = (char *)((ulonglong)local_a408._4_4_ << 0x20);
    local_a410 = (uint *)((ulonglong)local_a410._4_4_ << 0x20);
    local_a418 = (char *)CONCAT44(local_a418._4_4_,0xd);
    iVar14 = FUN_1403a5ce0(local_74a8,uVar25,uVar19,uVar23);
    if (iVar14 != 0) {
      (**(code **)(*param_4 + 0x350))(param_4,local_74a8);
    }
    FUN_1403a5890(local_74a8);
    uVar41 = 1;
    break;
  case 0x3f:
    local_a290[0] = 0;
    local_a2c0 = 0;
    local_a2b8 = 0;
    local_2548[0] = '\0';
    memset(local_2548 + 1,0,0xff);
    local_a410 = (uint *)&local_a2b8;
    local_a418 = local_2548;
    iVar14 = sscanf(param_3,"stc(%u, %u) %s %d",local_a290,&local_a2c0);
    bVar45 = iVar14 == 4;
    if (bVar45) {
      lVar40 = 2;
      pcVar33 = local_2548;
      pcVar42 = ">";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        iVar14 = FUN_140385cf0(param_4,local_a290[0],local_a2c0);
        uVar41 = (ulonglong)(local_a2b8 < iVar14);
      }
      else {
        lVar40 = 3;
        pcVar33 = local_2548;
        pcVar42 = ">=";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          iVar14 = FUN_140385cf0(param_4,local_a290[0],local_a2c0);
          uVar41 = (ulonglong)(local_a2b8 <= iVar14);
        }
        else {
          iVar14 = FUN_140385cf0(param_4,local_a290[0],local_a2c0);
          uVar41 = (ulonglong)(iVar14 == local_a2b8);
        }
      }
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1cc9);
      uVar41 = 0;
    }
    break;
  case 0x40:
    local_a2b0 = 0;
    local_a270 = 0;
    local_2048[0] = '\0';
    memset(local_2048 + 1,0,0xff);
    local_a244 = 0;
    local_a1f4 = 0;
    local_a408 = (char *)&local_a1f4;
    local_a410 = (uint *)&local_a244;
    local_a418 = local_2048;
    iVar14 = sscanf(param_3,"stc(%u, %u) %s %d %d",&local_a2b0,&local_a270);
    if (iVar14 == 5) {
      lVar40 = 3;
      bVar45 = true;
      pcVar33 = local_2048;
      pcVar42 = "+=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        iVar14 = FUN_140385cf0(param_4,local_a2b0,local_a270);
        local_a408 = (char *)CONCAT71(local_a408._1_7_,1);
        local_a410 = (uint *)CONCAT71(local_a410._1_7_,0 < local_a1f4);
        local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
        uVar41 = FUN_140385de0(param_4,local_a2b0,local_a270,iVar14 + local_a244);
        return uVar41;
      }
      lVar40 = 2;
      bVar45 = false;
      pcVar33 = local_2048;
      pcVar42 = "=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        local_a408 = (char *)CONCAT71(local_a408._1_7_,1);
        local_a410 = (uint *)CONCAT71(local_a410._1_7_,0 < local_a1f4);
        local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
        uVar41 = FUN_140385de0(param_4,local_a2b0,local_a270,local_a244);
        return uVar41;
      }
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1ce2);
    uVar41 = 0;
    break;
  case 0x41:
    local_1748 = '\0';
    memset(local_1747,0,0xff);
    local_a164 = 0;
    local_a088 = 0;
    local_a418 = (char *)&local_a088;
    iVar14 = sscanf(param_3,"%s %d %d",&local_1748,&local_a164);
    if (iVar14 == 3) {
      iVar14 = _stricmp("send",&local_1748);
      FUN_140362560(local_8198);
      uVar11 = (**(code **)(param_4[2] + 0x50))(param_4 + 2);
      uVar25 = (**(code **)(param_4[2] + 0x48))(param_4 + 2);
      uVar23 = (**(code **)(param_4[2] + 0x40))(param_4 + 2);
      uVar19 = (**(code **)(*param_4 + 8))(param_4);
      local_a400 = (int *)((ulonglong)local_a400._4_4_ << 0x20);
      local_a408 = (char *)CONCAT44(local_a408._4_4_,local_a088);
      local_a410 = (uint *)CONCAT62(local_a410._2_6_,(undefined2)local_a164);
      local_a418 = (char *)CONCAT62(local_a418._2_6_,uVar11);
      iVar24 = FUN_140362620(local_8198,uVar19,uVar23,uVar25);
      if (iVar24 != 0) {
        if (iVar14 == 0) {
          (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_8198);
        }
        else {
          (**(code **)(param_4[2] + 0x348))(param_4 + 2,local_8198,1);
        }
      }
      FUN_1403625e0(local_8198);
      uVar41 = 1;
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1c66);
      uVar41 = 0;
    }
    break;
  case 0x42:
    local_848 = 0;
    memset(local_847,0,0xff);
    local_a16c = 0;
    iVar14 = sscanf(param_3,"%d %s",&local_a16c,&local_848);
    if ((iVar14 == 2) && (local_a16c - 1U < 5)) {
      FUN_14037dfb0(local_56f8);
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      iVar14 = FUN_14037e0a0(local_56f8,0x19,param_3,uVar25);
      if (iVar14 != 0) {
        (**(code **)(param_4[2] + 0x348))(param_4 + 2,local_56f8,1);
      }
      FUN_14037e030(local_56f8);
      uVar41 = 1;
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1c4a);
      uVar41 = 0;
    }
    break;
  case 0x43:
    local_1248 = '\0';
    memset(local_1247,0,0xff);
    FUN_140008520((int)param_1[9]);
    plVar26 = (longlong *)InstanceGet();
    plVar26 = (longlong *)(**(code **)(*plVar26 + 0x10))(plVar26,param_3,2);
    if (((plVar26 == (longlong *)0x0) || (lVar40 = (**(code **)(*plVar26 + 0x40))(plVar26), lVar40 != 1)) ||
       (iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26), iVar14 != 1)) {
      if (plVar26 != (longlong *)0x0) {
        (**(code **)*plVar26)(plVar26);
      }
      uVar41 = 0;
    }
    else {
      plVar37 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0);
      this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(**(code **)(*plVar37 + 0xf0))(plVar37,local_9b20);
      pcVar33 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(this);
      tq::StrCopy(&local_1248,pcVar33,0x100);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_9b20);
      (**(code **)*plVar26)(plVar26);
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
      FUN_1401645e0(param_4,uVar25,&local_1248);
      uVar41 = 1;
    }
    break;
  case 0x44:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    cVar7 = FUN_1401ac210(param_4,uVar25);
    if (cVar7 != '\0') {
      return 1;
    }
    goto LAB_14013a784;
  case 0x45:
    cVar7 = FUN_1401ac720(param_4);
    if (cVar7 != '\0') {
      return 1;
    }
    goto LAB_14013a784;
  case 0x46:
    local_a350 = 0;
    local_a348 = 0;
    local_3768 = '\0';
    memset(local_3767,0,0xff);
    local_a320 = 0;
    local_a410 = &local_a320;
    local_a418 = &local_3768;
    iVar14 = sscanf(param_3,"timestamp(%u, %u) %s %d",&local_a350,&local_a348);
    if (iVar14 == 4) {
      iVar14 = _stricmp(&local_3768,"+=");
      if (iVar14 == 0) {
        iVar14 = FUN_1403863f0(param_4,local_a350,local_a348);
        FUN_1403864e0(param_4,local_a350,local_a348,iVar14 + local_a320);
        return 1;
      }
      iVar14 = _stricmp(&local_3768,"set");
      if (iVar14 == 0) {
        uVar12 = local_a320;
        if (local_a320 == 0) {
          uVar12 = _time32((__time32_t *)0x0);
        }
        FUN_1403864e0(param_4,local_a350,local_a348,uVar12);
        return 1;
      }
      iVar14 = _stricmp(&local_3768,">=");
      if (iVar14 == 0) {
        uVar12 = local_a320;
        if (local_a320 == 0) {
          uVar12 = _time32((__time32_t *)0x0);
        }
        uVar13 = FUN_1403863f0(param_4,local_a350,local_a348);
        return (ulonglong)(uVar12 <= uVar13);
      }
      iVar14 = _stricmp(&local_3768,">");
      if (iVar14 == 0) {
        uVar12 = local_a320;
        if (local_a320 == 0) {
          uVar12 = _time32((__time32_t *)0x0);
        }
        uVar13 = FUN_1403863f0(param_4,local_a350,local_a348);
        return (ulonglong)(uVar12 < uVar13);
      }
      iVar14 = _stricmp(&local_3768,"==");
      if (iVar14 == 0) {
        uVar12 = local_a320;
        if (local_a320 == 0) {
          uVar12 = _time32((__time32_t *)0x0);
        }
        uVar13 = FUN_1403863f0(param_4,local_a350,local_a348);
        return (ulonglong)(uVar13 == uVar12);
      }
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1d73);
    uVar41 = 0;
    break;
  case 0x47:
    local_a15c = 0;
    local_a0b0 = 0;
    local_a280 = 0;
    local_2a48 = '\0';
    memset(local_2a47,0,0xff);
    local_a34c = 0;
    local_a408 = (char *)&local_a34c;
    local_a410 = (uint *)&local_2a48;
    local_a418 = (char *)&local_a280;
    iVar14 = sscanf(param_3,"interval(%u, %u, %u) %s %d",&local_a15c,&local_a0b0);
    if (iVar14 == 5) {
      uVar41 = FUN_1403863f0(param_4,local_a15c,local_a0b0);
      iVar14 = (int)uVar41;
      if (iVar14 == 0) {
        return uVar41;
      }
      GetTimeZoneInformation(&local_97d8);
      uVar12 = _time32((__time32_t *)0x0);
      uVar13 = (uint)(iVar14 + local_97d8.Bias * -0x3c) / 0x15180;
      uVar20 = (uVar12 + local_97d8.Bias * -0x3c) / 0x15180;
      iVar24 = _stricmp(&local_2a48,">=");
      if (iVar24 == 0) {
        if (local_a280 != 0) {
          return (ulonglong)((int)(uVar13 + local_a34c) <= (int)uVar20);
        }
        return (ulonglong)((uint)(iVar14 + local_a34c) <= uVar12);
      }
      iVar24 = _stricmp(&local_2a48,">");
      if (iVar24 == 0) {
        if (local_a280 != 0) {
          return (ulonglong)((int)(uVar13 + local_a34c) < (int)uVar20);
        }
        return (ulonglong)((uint)(iVar14 + local_a34c) < uVar12);
      }
      iVar24 = _stricmp(&local_2a48,"==");
      if (iVar24 == 0) {
        if (local_a280 != 0) {
          return (ulonglong)(uVar20 == uVar13 + local_a34c);
        }
        return (ulonglong)(uVar12 == iVar14 + local_a34c);
      }
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1daf);
    uVar41 = 0;
    break;
  case 0x48:
    local_3268 = '\0';
    memset(local_3267,0,0xff);
    local_3a68 = '\0';
    memset(local_3a67,0,0xff);
    local_a370 = 0;
    local_a31c = 0;
    local_a32c = 0;
    local_a328 = 0;
    local_a400 = &local_a328;
    local_a408 = (char *)&local_a32c;
    local_a410 = &local_a31c;
    local_a418 = (char *)&local_a370;
    iVar14 = sscanf(param_3,"%s %s %u %d %d %d",&local_3268,&local_3a68);
    if (iVar14 < 6) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x20d6);
      uVar41 = 0;
    }
    else {
      iVar14 = _stricmp(&local_3268,"self");
      if (iVar14 == 0) {
        iVar14 = _stricmp(&local_3a68,"add");
        if (iVar14 == 0) {
          plVar26 = (longlong *)FUN_1401181a0();
          lVar40 = *plVar26;
          uVar25 = (**(code **)(*param_4 + 8))(param_4);
          local_a3e8 = (undefined4 *)((ulonglong)local_a3e8._4_4_ << 0x20);
          local_a3f0 = (undefined4 *)((ulonglong)local_a3f0 & 0xffffffffffff0000);
          local_a3f8 = (undefined4 *)((ulonglong)local_a3f8 & 0xffffffffffffff00);
          local_a400 = (int *)((ulonglong)local_a400 & 0xffffffff00000000);
          local_a408 = (char *)((ulonglong)local_a408 & 0xffffffff00000000);
          local_a410 = (uint *)CONCAT44(local_a410._4_4_,local_a328);
          local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a32c);
          (**(code **)(lVar40 + 8))(plVar26,uVar25,local_a370,local_a31c);
        }
        else {
          iVar14 = _stricmp(&local_3a68,"chk");
          if (iVar14 == 0) {
            uVar41 = (**(code **)(param_4[2] + 0x2d8))(param_4 + 2,local_a370);
            return uVar41;
          }
          param_4 = param_4 + 2;
          if (param_4 != (longlong *)0x0) {
            plVar26 = (longlong *)FUN_1401181a0();
            lVar40 = *plVar26;
            uVar25 = (**(code **)(*param_4 + 0x10))(param_4);
            (**(code **)(lVar40 + 0x10))(plVar26,uVar25,local_a370);
          }
        }
      }
      else {
        iVar14 = _stricmp(&local_3268,"mate");
        if (iVar14 == 0) {
          uVar39 = FUN_140008520((int)param_1[9]);
          plVar26 = (longlong *)FUN_140087650(uVar39);
          lVar40 = *plVar26;
          uVar25 = (**(code **)(*param_4 + 0x48))(param_4);
          plVar26 = (longlong *)(**(code **)(lVar40 + 0x98))(plVar26,uVar25);
          if (plVar26 == (longlong *)0x0) {
            return 0;
          }
          iVar14 = _stricmp(&local_3a68,"add");
          if (iVar14 == 0) {
            plVar37 = (longlong *)FUN_1401181a0();
            lVar40 = *plVar37;
            uVar25 = (**(code **)(*plVar26 + 8))(plVar26);
            local_a3e8 = (undefined4 *)((ulonglong)local_a3e8._4_4_ << 0x20);
            local_a3f0 = (undefined4 *)((ulonglong)local_a3f0 & 0xffffffffffff0000);
            local_a3f8 = (undefined4 *)((ulonglong)local_a3f8 & 0xffffffffffffff00);
            local_a400 = (int *)((ulonglong)local_a400 & 0xffffffff00000000);
            local_a408 = (char *)((ulonglong)local_a408 & 0xffffffff00000000);
            local_a410 = (uint *)CONCAT44(local_a410._4_4_,local_a328);
            local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a32c);
            (**(code **)(lVar40 + 8))(plVar37,uVar25,local_a370,local_a31c);
          }
          else {
            iVar14 = _stricmp(&local_3a68,"chk");
            if (iVar14 == 0) {
              uVar41 = (**(code **)(plVar26[2] + 0x2d8))(plVar26 + 2,local_a370);
              return uVar41;
            }
            plVar26 = plVar26 + 2;
            if (plVar26 != (longlong *)0x0) {
              plVar37 = (longlong *)FUN_1401181a0();
              lVar40 = *plVar37;
              uVar25 = (**(code **)(*plVar26 + 0x10))(plVar26);
              (**(code **)(lVar40 + 0x10))(plVar37,uVar25,local_a370);
            }
          }
        }
        else {
          iVar14 = _stricmp(&local_3268,"couple");
          if (iVar14 == 0) {
            uVar39 = FUN_140008520((int)param_1[9]);
            plVar26 = (longlong *)FUN_140087650(uVar39);
            lVar40 = *plVar26;
            uVar25 = (**(code **)(*param_4 + 0x48))(param_4);
            plVar26 = (longlong *)(**(code **)(lVar40 + 0x98))(plVar26,uVar25);
            iVar14 = _stricmp(&local_3a68,"add");
            if (iVar14 == 0) {
              plVar37 = (longlong *)FUN_1401181a0();
              lVar40 = *plVar37;
              uVar25 = (**(code **)(*param_4 + 8))(param_4);
              local_a3e8._0_4_ = 0;
              local_a3f0 = (undefined4 *)((ulonglong)local_a3f0 & 0xffffffffffff0000);
              local_a3f8 = (undefined4 *)((ulonglong)local_a3f8 & 0xffffffffffffff00);
              local_a400 = (int *)((ulonglong)local_a400 & 0xffffffff00000000);
              local_a408 = (char *)((ulonglong)local_a408 & 0xffffffff00000000);
              local_a410._0_4_ = local_a328;
              local_a418._0_4_ = local_a32c;
              (**(code **)(lVar40 + 8))(plVar37,uVar25,local_a370,local_a31c);
              if (plVar26 != (longlong *)0x0) {
                plVar37 = (longlong *)FUN_1401181a0();
                lVar40 = *plVar37;
                uVar25 = (**(code **)(*plVar26 + 8))(plVar26);
                local_a3e8 = (undefined4 *)((ulonglong)local_a3e8._4_4_ << 0x20);
                local_a3f0 = (undefined4 *)((ulonglong)local_a3f0 & 0xffffffffffff0000);
                local_a3f8 = (undefined4 *)((ulonglong)local_a3f8 & 0xffffffffffffff00);
                local_a400 = (int *)((ulonglong)local_a400 & 0xffffffff00000000);
                local_a408 = (char *)((ulonglong)local_a408 & 0xffffffff00000000);
                local_a410 = (uint *)CONCAT44(local_a410._4_4_,local_a328);
                local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a32c);
                (**(code **)(lVar40 + 8))(plVar37,uVar25,local_a370,local_a31c);
              }
            }
            else {
              iVar14 = _stricmp(&local_3a68,"chk");
              if (iVar14 == 0) {
                cVar7 = (**(code **)(param_4[2] + 0x2d8))(param_4 + 2,local_a370);
                if (((cVar7 == '\0') || (plVar26 == (longlong *)0x0)) || (cVar7 = (**(code **)(plVar26[2] + 0x2d8))(plVar26 + 2,local_a370), cVar7 == '\0')) {
                  bVar43 = 0;
                }
                else {
                  bVar43 = 1;
                }
                return (ulonglong)bVar43;
              }
              plVar37 = (longlong *)FUN_1401181a0();
              lVar40 = *plVar37;
              uVar25 = (**(code **)(*plVar26 + 8))(plVar26);
              (**(code **)(lVar40 + 0x10))(plVar37,uVar25,local_a370);
              plVar26 = plVar26 + 2;
              if (plVar26 != (longlong *)0x0) {
                plVar37 = (longlong *)FUN_1401181a0();
                lVar40 = *plVar37;
                uVar25 = (**(code **)(*plVar26 + 0x10))(plVar26);
                (**(code **)(lVar40 + 0x10))(plVar37,uVar25,local_a370);
              }
            }
          }
          else {
            iVar14 = _stricmp(&local_3268,"team");
            if (iVar14 == 0) {
              plVar26 = (longlong *)FUN_140118320();
              if (plVar26 == (longlong *)0x0) {
                return 0;
              }
              FUN_140035210(local_9dd8);
              lVar40 = *plVar26;
              uVar25 = (**(code **)(*param_4 + 8))(param_4);
              cVar7 = (**(code **)(lVar40 + 0x38))(plVar26,uVar25,local_9dd8);
              uVar41 = local_9dc0;
              if (cVar7 == '\0') {
                FUN_1400344f0(local_9dd8);
                return 0;
              }
              bVar43 = 1;
              if (local_9db8 < local_9dc0) {
                _invalid_parameter_noinfo();
              }
              local_a388 = local_9dd8[0];
              uStack_a380 = uVar41;
              while( true ) {
                uVar28 = local_9db8;
                uVar41 = uStack_a380;
                lVar40 = local_a388;
                if (local_9db8 < local_9dc0) {
                  _invalid_parameter_noinfo();
                }
                if ((lVar40 == 0) || (lVar40 != local_9dd8[0])) {
                  _invalid_parameter_noinfo();
                }
                if (uVar28 <= uVar41) break;
                uVar39 = FUN_140008520((int)param_1[9]);
                plVar26 = (longlong *)FUN_140087650(uVar39);
                lVar40 = *plVar26;
                puVar31 = (undefined4 *)FUN_140033360(&local_a388);
                plVar26 = (longlong *)(**(code **)(lVar40 + 0x98))(plVar26,*puVar31);
                if ((plVar26 != (longlong *)0x0) && (plVar26 != param_4)) {
                  iVar14 = _stricmp(&local_3a68,"add");
                  if (iVar14 == 0) {
                    plVar37 = (longlong *)FUN_1401181a0();
                    lVar40 = *plVar37;
                    uVar25 = (**(code **)(*plVar26 + 8))(plVar26);
                    local_a3e8 = (undefined4 *)((ulonglong)local_a3e8 & 0xffffffff00000000);
                    local_a3f0 = (undefined4 *)((ulonglong)local_a3f0 & 0xffffffffffff0000);
                    local_a3f8 = (undefined4 *)((ulonglong)local_a3f8 & 0xffffffffffffff00);
                    local_a400 = (int *)((ulonglong)local_a400 & 0xffffffff00000000);
                    local_a408 = (char *)((ulonglong)local_a408 & 0xffffffff00000000);
                    local_a410 = (uint *)CONCAT44(local_a410._4_4_,local_a328);
                    local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a32c);
                    (**(code **)(lVar40 + 8))(plVar37,uVar25,local_a370,local_a31c);
                  }
                  else {
                    iVar14 = _stricmp(&local_3a68,"chk");
                    if (iVar14 == 0) {
                      bVar6 = (**(code **)(plVar26[2] + 0x2d8))(plVar26 + 2,local_a370);
                      bVar43 = bVar43 & bVar6;
                    }
                    else {
                      plVar37 = (longlong *)FUN_1401181a0();
                      lVar40 = *plVar37;
                      uVar25 = (**(code **)(*plVar26 + 8))(plVar26);
                      (**(code **)(lVar40 + 0x10))(plVar37,uVar25,local_a370);
                    }
                  }
                }
                FUN_1400333a0(&local_a388);
              }
              iVar14 = _stricmp(&local_3a68,"chk");
              if (iVar14 == 0) {
                FUN_1400344f0(local_9dd8);
                return (ulonglong)bVar43;
              }
              FUN_1400344f0(local_9dd8);
            }
          }
        }
      }
      uVar41 = 1;
    }
    break;
  case 0x49:
    local_3468[0] = '\0';
    memset(local_3468 + 1,0,0xff);
    local_a318 = 0;
    iVar14 = sscanf(param_3,"%s %d",local_3468,&local_a318);
    if (iVar14 == 2) {
      lVar40 = 2;
      bVar45 = true;
      pcVar33 = local_3468;
      pcVar42 = "<";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        iVar14 = FUN_140382960(param_4,2,0);
        return (ulonglong)(iVar14 < local_a318);
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3468;
      pcVar42 = "==";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        iVar14 = FUN_140382960(param_4,2);
        return (ulonglong)(iVar14 == local_a318);
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3468;
      pcVar42 = "+=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        FUN_140382b00(param_4,local_a318);
        return 1;
      }
      lVar40 = 4;
      bVar45 = false;
      pcVar33 = local_3468;
      pcVar42 = "chk";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        if (local_a318 != 0) {
          uVar41 = FUN_140382350(param_4);
          return uVar41;
        }
        uVar41 = FUN_140383750(param_4);
        return uVar41;
      }
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1bf0);
    uVar41 = 0;
    break;
  case 0x4a:
    local_9f80 = 0;
    local_a0c0 = 0;
    local_a068 = 0;
    local_a418 = (char *)&local_a068;
    iVar14 = sscanf(param_3,"%I64d %u %u",&local_9f80,&local_a0c0);
    if (iVar14 == 3) {
      local_a184 = 0;
      local_a17c = 0;
      FUN_140382d20(param_4,local_9f80,&local_a184,&local_a17c);
      FUN_140164520(param_4,local_a0c0,local_a184);
      FUN_140164520(param_4,local_a068,local_a17c);
      return 1;
    }
    goto LAB_14013a784;
  case 0x4b:
    local_1f48[0] = '\0';
    memset(local_1f48 + 1,0,0xff);
    local_2148[0] = '\0';
    memset(local_2148 + 1,0,0xff);
    iVar14 = sscanf(param_3,"%s %s",local_1f48,local_2148);
    if (iVar14 != 0) {
      uVar41 = 0xffffffffffffffff;
      pcVar33 = local_1f48;
      do {
        if (uVar41 == 0) break;
        uVar41 = uVar41 - 1;
        cVar7 = *pcVar33;
        pcVar33 = pcVar33 + 1;
      } while (cVar7 != '\0');
      param_3 = param_3 + ~uVar41;
      pcVar33 = local_2148;
      do {
        cVar7 = *param_3;
        *pcVar33 = cVar7;
        param_3 = param_3 + 1;
        pcVar33 = pcVar33 + 1;
      } while (cVar7 != '\0');
      tq::MyLogSave(local_1f48,local_2148);
      return 1;
    }
    goto LAB_14013a784;
  case 0x4c:
    local_a05c = 0;
    local_a090 = 0;
    iVar14 = sscanf(param_3,"%u %u",&local_a05c,&local_a090);
    if (iVar14 == 2) {
      uVar39 = FUN_140382f00(param_4,local_a05c);
      FUN_140164520(param_4,local_a090,uVar39);
      return 1;
    }
    goto LAB_14013a784;
  case 0x4d:
    local_a23c = 0;
    local_a1b4 = 0;
    local_1c48 = '\0';
    memset(local_1c47,0,0xff);
    local_a418 = &local_1c48;
    iVar14 = sscanf(param_3,"stc(%u, %u) %s",&local_a23c,&local_a1b4);
    if (iVar14 == 3) {
      iVar14 = _stricmp(&local_1c48,"delete");
      if (iVar14 == 0) {
        uVar41 = FUN_140386290(param_4,local_a23c,local_a1b4);
        return uVar41;
      }
      iVar14 = _stricmp(&local_1c48,"isexit");
      if (iVar14 == 0) {
        uVar41 = FUN_1403861c0(param_4,local_a23c,local_a1b4);
        return uVar41;
      }
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1cf9);
    uVar41 = 0;
    break;
  case 0x4e:
    uVar41 = FUN_140174f00(param_4,1);
    break;
  case 0x4f:
    uVar41 = FUN_140174f00(param_4,2);
    break;
  case 0x50:
    uVar41 = FUN_140175030(param_4,1);
    break;
  case 0x51:
    uVar41 = FUN_140175030(param_4,2);
    break;
  case 0x52:
    plVar26 = (longlong *)CurrentInstanceGet();
    if (plVar26 == (longlong *)0x0) {
      local_a418 = (char *)CONCAT44(local_a418._4_4_,0x1d0d);
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","pRoot","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
      uVar41 = 0;
    }
    else {
      plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0xe);
      if (plVar26 == (longlong *)0x0) {
        local_a418 = (char *)CONCAT44(local_a418._4_4_,0x1d11);
        log_InlineLogERROR(&DAT_1406d9c10,"IF_NOT","pProvider","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        uVar41 = 0;
      }
      else {
        iVar14 = _stricmp(param_3,"add");
        if (iVar14 == 0) {
          plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar11 = (**(code **)(*plVar37 + 0x48))(plVar37);
          puVar30 = (undefined8 *)*plVar26;
          uVar25 = (**(code **)(*param_4 + 8))(param_4);
          uVar41 = (*(code *)*puVar30)(plVar26,uVar25,uVar11);
        }
        else {
          iVar14 = _stricmp(param_3,"del");
          if (iVar14 == 0) {
            plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
            uVar11 = (**(code **)(*plVar37 + 0x48))(plVar37);
            lVar40 = *plVar26;
            uVar25 = (**(code **)(*param_4 + 8))(param_4);
            uVar41 = (**(code **)(lVar40 + 8))(plVar26,uVar25,uVar11);
          }
          else {
            iVar14 = _stricmp(param_3,"chk");
            if (iVar14 == 0) {
              plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
              uVar11 = (**(code **)(*plVar37 + 0x48))(plVar37);
              lVar40 = *plVar26;
              uVar25 = (**(code **)(*param_4 + 8))(param_4);
              uVar41 = (**(code **)(lVar40 + 0x10))(plVar26,uVar25,uVar11);
            }
            else {
              local_1548 = '\0';
              memset(local_1547,0,0xff);
              local_3568 = '\0';
              memset(local_3567,0,0xff);
              local_a324 = 0;
              local_a418 = (char *)&local_a324;
              iVar14 = sscanf(param_3,"%s %s %d",&local_1548,&local_3568);
              if (iVar14 < 3) {
                plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,3);
                uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
                uVar13 = FUN_1400bb7e0(param_2);
                log_InlineLogDBERROR("table:cq_action/cq_newaction, ACTION (id=%u,type=%d): Wrong param number",(ulonglong)uVar13,(ulonglong)uVar12);
                uVar41 = 0;
              }
              else {
                iVar14 = _stricmp(&local_1548,"amount");
                if (iVar14 == 0) {
                  iVar14 = _stricmp(&local_3568,"<");
                  if (iVar14 == 0) {
                    lVar40 = *plVar26;
                    uVar25 = (**(code **)(*param_4 + 8))(param_4);
                    iVar14 = (**(code **)(lVar40 + 0x18))(plVar26,uVar25);
                    return (ulonglong)(iVar14 < local_a324);
                  }
                  iVar14 = _stricmp(&local_3568,"<=");
                  if (iVar14 == 0) {
                    lVar40 = *plVar26;
                    uVar25 = (**(code **)(*param_4 + 8))(param_4);
                    iVar14 = (**(code **)(lVar40 + 0x18))(plVar26,uVar25);
                    return (ulonglong)(iVar14 <= local_a324);
                  }
                  iVar14 = _stricmp(&local_3568,"==");
                  if (iVar14 == 0) {
                    lVar40 = *plVar26;
                    uVar25 = (**(code **)(*param_4 + 8))(param_4);
                    iVar14 = (**(code **)(lVar40 + 0x18))(plVar26,uVar25);
                    return (ulonglong)(iVar14 == local_a324);
                  }
                  iVar14 = _stricmp(&local_3568,">");
                  if (iVar14 == 0) {
                    lVar40 = *plVar26;
                    uVar25 = (**(code **)(*param_4 + 8))(param_4);
                    iVar14 = (**(code **)(lVar40 + 0x18))(plVar26,uVar25);
                    return (ulonglong)(local_a324 < iVar14);
                  }
                  iVar14 = _stricmp(&local_3568,">=");
                  if (iVar14 == 0) {
                    lVar40 = *plVar26;
                    uVar25 = (**(code **)(*param_4 + 8))(param_4);
                    iVar14 = (**(code **)(lVar40 + 0x18))(plVar26,uVar25);
                    return (ulonglong)(local_a324 <= iVar14);
                  }
                }
                uVar41 = 0;
              }
            }
          }
        }
      }
    }
    break;
  case 0x53:
    uVar12 = (**(code **)(*param_4 + 0x108))(param_4);
    if (uVar12 < 2) {
      uVar41 = 0;
    }
    else {
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      iVar24 = (**(code **)(*plVar26 + 0x48))(plVar26);
      iVar14 = (*(byte *)((longlong)param_4 + 0xeee) / 10) * 10;
      if ((iVar24 == 0) || (iVar24 == iVar14)) {
        uVar12 = FUN_140165580(param_4);
        if (iVar14 == (uVar12 / 10) * 10) {
          uVar12 = FUN_140165570(param_4);
          uVar41 = (ulonglong)((uVar12 / 10) * 10 == iVar14);
        }
        else {
          uVar41 = 0;
        }
      }
      else {
        uVar41 = 0;
      }
    }
    break;
  case 0x54:
    uVar41 = FUN_1401763f0(param_4,0x140000001);
    break;
  case 0x55:
    puVar31 = (undefined4 *)0x0;
    local_a180 = 0;
    local_a218 = 0;
    local_a220 = 0;
    local_a2b4 = 0;
    local_a210 = 0;
    local_a228 = 0;
    local_a400 = &local_a228;
    local_a408 = (char *)&local_a210;
    local_a410 = (uint *)&local_a2b4;
    local_a418 = (char *)&local_a220;
    iVar14 = sscanf(param_3,"%d %d %d %d %d %d",&local_a180,&local_a218);
    if (5 < iVar14) {
      if ((((local_a218 < 0) || (local_a220 < 0)) || (local_a2b4 < 0)) || ((local_a228 < 0 || (local_a210 < 0)))) {
        return 0;
      }
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
      plVar26 = (longlong *)FUN_1401181a0();
      cVar7 = (**(code **)(*plVar26 + 0xd8))(plVar26,uVar25);
      if (cVar7 == '\0') {
        plVar26 = (longlong *)FUN_1401181a0();
        lVar40 = *plVar26;
        uVar23 = (**(code **)(*param_4 + 8))(param_4);
        local_a3e8 = (undefined4 *)((ulonglong)local_a3e8._4_4_ << 0x20);
        local_a3f0 = (undefined4 *)CONCAT62(local_a3f0._2_6_,1);
        local_a3f8 = (undefined4 *)CONCAT71(local_a3f8._1_7_,(undefined1)local_a228);
        local_a400 = (int *)CONCAT44(local_a400._4_4_,local_a220);
        local_a408 = (char *)CONCAT44(local_a408._4_4_,local_a218);
        local_a410 = (uint *)CONCAT44(local_a410._4_4_,local_a2b4);
        local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a210);
        uVar41 = (**(code **)(lVar40 + 8))(plVar26,uVar23,uVar25,local_a180);
        return uVar41;
      }
      uVar41 = FUN_140165da0(param_4);
      if ((char)uVar41 != '\0') {
        local_a368 = operator_new(0x10);
        if (local_a368 != (longlong *)0x0) {
          *(undefined4 *)local_a368 = 0;
          *(undefined4 *)((longlong)local_a368 + 4) = 0;
          *(undefined4 *)((longlong)local_a368 + 8) = 0;
          *(undefined4 *)((longlong)local_a368 + 0xc) = 0;
          puVar31 = (undefined4 *)local_a368;
        }
        if (puVar31 == (undefined4 *)0x0) {
          return 0;
        }
        *puVar31 = 0;
        puVar31[1] = uVar25;
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        puVar31[2] = uVar25;
        puVar31[3] = local_a2b4;
        cVar7 = FUN_140165e10(param_4,puVar31);
        if (cVar7 != '\0') {
          return 1;
        }
        operator_delete(puVar31);
        return 0;
      }
      return uVar41;
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2ce7);
    goto LAB_14013a784;
  case 0x56:
    local_2f68 = '\0';
    memset(local_2f67,0,0xff);
    local_a2ac = 0;
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    iVar14 = sscanf(param_3,"%s %d",&local_2f68,&local_a2ac);
    if (iVar14 == 0) {
      uVar41 = (**(code **)(param_4[2] + 0x2d8))(param_4 + 2,uVar25);
    }
    else if (iVar14 == 2) {
      cVar7 = (**(code **)(param_4[2] + 0x2d8))(param_4 + 2,uVar25);
      if (cVar7 != '\0') {
        plVar26 = (longlong *)FUN_1401181a0();
        lVar40 = *plVar26;
        uVar23 = (**(code **)(*param_4 + 8))(param_4);
        iVar14 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar23,uVar25);
        iVar24 = _stricmp(&local_2f68,"==");
        if (iVar24 == 0) {
          return (ulonglong)(iVar14 == local_a2ac);
        }
        iVar24 = _stricmp(&local_2f68,">=");
        if (iVar24 == 0) {
          return (ulonglong)(local_a2ac <= iVar14);
        }
        iVar24 = _stricmp(&local_2f68,"<=");
        if (iVar24 == 0) {
          return (ulonglong)(iVar14 <= local_a2ac);
        }
      }
      uVar41 = 0;
    }
    else {
      uVar41 = 0;
    }
    break;
  case 0x57:
    lVar40 = 0;
    local_9f78 = 0;
    memset(local_9f74,0,0x38);
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
    local_a3b8 = local_9f40;
    local_a3c0 = local_9f44;
    local_a3c8 = local_9f48;
    local_a3d0 = local_9f4c;
    local_a3d8 = local_9f50;
    local_a3e0 = (int *)local_9f54;
    local_a3e8 = (undefined4 *)local_9f58;
    local_a3f0 = (undefined4 *)local_9f5c;
    local_a3f8 = (undefined4 *)local_9f60;
    local_a400 = (int *)local_9f64;
    local_a408 = local_9f68;
    local_a410 = (uint *)local_9f6c;
    local_a418 = local_9f70;
    iVar24 = sscanf(param_3,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&local_9f78,local_9f74);
    if (iVar24 - 1U < 0xf) {
      if (iVar14 == 0) {
        if (0 < iVar24) {
          do {
            cVar7 = (**(code **)(param_4[2] + 0x2d8))(param_4 + 2,*(undefined4 *)(local_9f74 + lVar40 * 4 + -4));
            if (cVar7 != '\0') {
              return 1;
            }
            lVar40 = lVar40 + 1;
          } while (lVar40 < iVar24);
        }
        return 0;
      }
      if (iVar14 == 1) {
        if (0 < iVar24) {
          do {
            cVar7 = (**(code **)(param_4[2] + 0x2d8))(param_4 + 2,*(undefined4 *)(local_9f74 + lVar40 * 4 + -4));
            if (cVar7 != '\0') {
              plVar26 = (longlong *)FUN_1401181a0();
              lVar34 = *plVar26;
              uVar25 = (**(code **)(*param_4 + 8))(param_4);
              (**(code **)(lVar34 + 0x10))(plVar26,uVar25,*(undefined4 *)(local_9f74 + lVar40 * 4 + -4));
            }
            lVar40 = lVar40 + 1;
          } while (lVar40 < iVar24);
        }
        return 1;
      }
      return 0;
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2d4e);
    goto LAB_14013a784;
  case 0x58:
    uVar41 = FUN_140184a90(param_4);
    break;
  case 0x59:
    FUN_14018e960(param_4);
    uVar41 = 1;
    break;
  case 0x5a:
    FUN_140035210(local_9cb8);
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    cVar7 = FUN_140118860(param_1,uVar25,local_9cb8);
    uStack_a380 = local_9ca0;
    if (cVar7 == '\0') {
      FUN_1400344f0(local_9cb8);
      uVar41 = 0;
    }
    else {
      if (local_9c98 < local_9ca0) {
        _invalid_parameter_noinfo();
      }
      local_a388 = local_9cb8[0];
      while( true ) {
        uVar28 = local_9c98;
        uVar41 = uStack_a380;
        lVar40 = local_a388;
        if (local_9c98 < local_9ca0) {
          _invalid_parameter_noinfo();
        }
        if ((lVar40 == 0) || (lVar40 != local_9cb8[0])) {
          _invalid_parameter_noinfo();
        }
        if (uVar28 <= uVar41) break;
        lVar40 = *param_4;
        puVar31 = (undefined4 *)FUN_140033360(&local_a388);
        plVar26 = (longlong *)(**(code **)(lVar40 + 0x28))(param_4,*puVar31);
        if (plVar26 != (longlong *)0x0) {
          iVar14 = (**(code **)(*plVar26 + 8))(plVar26);
          iVar24 = (**(code **)(*param_4 + 8))(param_4);
          if (iVar14 != iVar24) {
            (**(code **)(*plVar26 + 0x150))(plVar26,0x7d3,param_3);
          }
        }
        FUN_1400333a0(&local_a388);
      }
      FUN_1400344f0(local_9cb8);
      uVar41 = 1;
    }
    break;
  case 0x5b:
    builtin_strncpy(local_3c68,"(none)",7);
    memset(local_3c68 + 7,0,0xf9);
    local_a2d0 = 0;
    local_a418 = (char *)&local_a2d0;
    iVar14 = sscanf(param_3,"%s %s %I64d",local_3168,local_3c68);
    if (iVar14 < 1) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x298b);
      uVar41 = 0;
    }
    else {
      plVar26 = (longlong *)FUN_140118320();
      uVar41 = 0;
      if (plVar26 != (longlong *)0x0) {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar41 = FUN_140118800(param_1,uVar25);
        uVar28 = uVar41 & 0xffffffff;
        bVar45 = (int)uVar41 == 0;
        if (!bVar45) {
          lVar40 = 6;
          pcVar33 = local_3168;
          pcVar42 = "count";
          do {
            if (lVar40 == 0) break;
            lVar40 = lVar40 + -1;
            bVar45 = *pcVar33 == *pcVar42;
            pcVar33 = pcVar33 + 1;
            pcVar42 = pcVar42 + 1;
          } while (bVar45);
          if (bVar45) {
            lVar40 = 2;
            pcVar33 = local_3c68;
            pcVar42 = "<";
            do {
              if (lVar40 == 0) break;
              lVar40 = lVar40 + -1;
              bVar45 = *pcVar33 == *pcVar42;
              pcVar33 = pcVar33 + 1;
              pcVar42 = pcVar42 + 1;
            } while (bVar45);
            if (bVar45) {
              uVar41 = (**(code **)(*plVar26 + 0x50))(plVar26,uVar28,0);
              if (local_a2d0 <= uVar41) {
                return 0;
              }
            }
            else {
              lVar40 = 3;
              pcVar33 = local_3c68;
              pcVar42 = "==";
              do {
                if (lVar40 == 0) break;
                lVar40 = lVar40 + -1;
                bVar45 = *pcVar33 == *pcVar42;
                pcVar33 = pcVar33 + 1;
                pcVar42 = pcVar42 + 1;
              } while (bVar45);
              if (!bVar45) {
                return 0;
              }
              uVar41 = (**(code **)(*plVar26 + 0x50))(plVar26,uVar28,0);
              if (uVar41 != local_a2d0) {
                return 0;
              }
            }
            uVar41 = 1;
          }
          else {
            FUN_140035210(local_a020);
            cVar7 = (**(code **)(*plVar26 + 0x60))(plVar26,uVar28,local_a020,0);
            uStack_a380 = local_a008;
            if (cVar7 != '\0') {
              if (local_a000 < local_a008) {
                _invalid_parameter_noinfo();
              }
              local_a388 = local_a020[0];
              do {
                uVar28 = local_a000;
                uVar41 = uStack_a380;
                lVar40 = local_a388;
                if (local_a000 < local_a008) {
                  _invalid_parameter_noinfo();
                }
                if ((lVar40 == 0) || (lVar40 != local_a020[0])) {
                  _invalid_parameter_noinfo();
                }
                if (uVar28 <= uVar41) {
                  FUN_1400344f0(local_a020);
                  return 1;
                }
                lVar40 = *param_4;
                puVar31 = (undefined4 *)FUN_140033360(&local_a388);
                plVar26 = (longlong *)(**(code **)(lVar40 + 0x28))(param_4,*puVar31);
                if (plVar26 != (longlong *)0x0) {
                  iVar14 = (**(code **)(*plVar26 + 8))(plVar26);
                  iVar24 = (**(code **)(*param_4 + 8))(param_4);
                  bVar45 = iVar14 == iVar24;
                  if (!bVar45) {
                    lVar40 = 6;
                    pcVar33 = local_3168;
                    pcVar42 = "money";
                    do {
                      if (lVar40 == 0) break;
                      lVar40 = lVar40 + -1;
                      bVar45 = *pcVar33 == *pcVar42;
                      pcVar33 = pcVar33 + 1;
                      pcVar42 = pcVar42 + 1;
                    } while (bVar45);
                    if (bVar45) {
                      lVar40 = 3;
                      pcVar33 = local_3c68;
                      pcVar42 = "+=";
                      do {
                        if (lVar40 == 0) break;
                        lVar40 = lVar40 + -1;
                        bVar45 = *pcVar33 == *pcVar42;
                        pcVar33 = pcVar33 + 1;
                        pcVar42 = pcVar42 + 1;
                      } while (bVar45);
                      if (bVar45) {
                        (**(code **)(*plVar26 + 0x180))(plVar26,local_a2d0,1);
                      }
                      else {
                        lVar40 = 2;
                        pcVar33 = local_3c68;
                        pcVar42 = "<";
                        do {
                          if (lVar40 == 0) break;
                          lVar40 = lVar40 + -1;
                          bVar45 = *pcVar33 == *pcVar42;
                          pcVar33 = pcVar33 + 1;
                          pcVar42 = pcVar42 + 1;
                        } while (bVar45);
                        if (bVar45) {
                          lVar40 = (**(code **)(*plVar26 + 0x60))(plVar26);
                          if ((longlong)local_a2d0 <= lVar40) {
                            FUN_1400344f0(local_a020);
                            return 0;
                          }
                        }
                        else {
                          lVar40 = 2;
                          pcVar33 = local_3c68;
                          pcVar42 = ">";
                          do {
                            if (lVar40 == 0) break;
                            lVar40 = lVar40 + -1;
                            bVar45 = *pcVar33 == *pcVar42;
                            pcVar33 = pcVar33 + 1;
                            pcVar42 = pcVar42 + 1;
                          } while (bVar45);
                          if (bVar45) {
                            lVar40 = (**(code **)(*plVar26 + 0x60))(plVar26);
                            if (lVar40 <= (longlong)local_a2d0) {
                              FUN_1400344f0(local_a020);
                              return 0;
                            }
                          }
                          else {
                            lVar40 = 3;
                            pcVar33 = local_3c68;
                            pcVar42 = "==";
                            do {
                              if (lVar40 == 0) break;
                              lVar40 = lVar40 + -1;
                              bVar45 = *pcVar33 == *pcVar42;
                              pcVar33 = pcVar33 + 1;
                              pcVar42 = pcVar42 + 1;
                            } while (bVar45);
                            if (!bVar45) {
                              FUN_1400344f0(local_a020);
                              return 0;
                            }
                            uVar41 = (**(code **)(*plVar26 + 0x60))(plVar26);
                            if (uVar41 != local_a2d0) {
                              FUN_1400344f0(local_a020);
                              return 0;
                            }
                          }
                        }
                      }
                    }
                    else {
                      lVar40 = 6;
                      pcVar33 = local_3168;
                      pcVar42 = "level";
                      do {
                        if (lVar40 == 0) break;
                        lVar40 = lVar40 + -1;
                        bVar45 = *pcVar33 == *pcVar42;
                        pcVar33 = pcVar33 + 1;
                        pcVar42 = pcVar42 + 1;
                      } while (bVar45);
                      if (bVar45) {
                        lVar40 = 2;
                        pcVar33 = local_3c68;
                        pcVar42 = "<";
                        do {
                          if (lVar40 == 0) break;
                          lVar40 = lVar40 + -1;
                          bVar45 = *pcVar33 == *pcVar42;
                          pcVar33 = pcVar33 + 1;
                          pcVar42 = pcVar42 + 1;
                        } while (bVar45);
                        if (bVar45) {
                          iVar14 = (**(code **)(plVar26[2] + 0x70))();
                          if ((int)local_a2d0 <= iVar14) {
                            FUN_1400344f0(local_a020);
                            return 0;
                          }
                        }
                        else {
                          lVar40 = 2;
                          pcVar33 = local_3c68;
                          pcVar42 = ">";
                          do {
                            if (lVar40 == 0) break;
                            lVar40 = lVar40 + -1;
                            bVar45 = *pcVar33 == *pcVar42;
                            pcVar33 = pcVar33 + 1;
                            pcVar42 = pcVar42 + 1;
                          } while (bVar45);
                          if (bVar45) {
                            iVar14 = (**(code **)(plVar26[2] + 0x70))();
                            if (iVar14 <= (int)local_a2d0) {
                              FUN_1400344f0(local_a020);
                              return 0;
                            }
                          }
                          else {
                            lVar40 = 3;
                            pcVar33 = local_3c68;
                            pcVar42 = "==";
                            do {
                              if (lVar40 == 0) break;
                              lVar40 = lVar40 + -1;
                              bVar45 = *pcVar33 == *pcVar42;
                              pcVar33 = pcVar33 + 1;
                              pcVar42 = pcVar42 + 1;
                            } while (bVar45);
                            if (!bVar45) {
                              FUN_1400344f0(local_a020);
                              return 0;
                            }
                            iVar14 = (**(code **)(plVar26[2] + 0x70))();
                            if (iVar14 != (int)local_a2d0) {
                              FUN_1400344f0(local_a020);
                              return 0;
                            }
                          }
                        }
                      }
                      else {
                        lVar40 = 5;
                        pcVar33 = local_3168;
                        pcVar42 = "mate";
                        do {
                          if (lVar40 == 0) break;
                          lVar40 = lVar40 + -1;
                          bVar45 = *pcVar33 == *pcVar42;
                          pcVar33 = pcVar33 + 1;
                          pcVar42 = pcVar42 + 1;
                        } while (bVar45);
                        if (bVar45) {
                          cVar7 = FUN_140164460(plVar26,param_4);
                          if ((cVar7 == '\0') || (cVar7 = (**(code **)(plVar26[2] + 0x220))(), cVar7 == '\0')) {
                            FUN_1400344f0(local_a020);
                            return 0;
                          }
                        }
                        else {
                          lVar40 = 7;
                          bVar45 = false;
                          pcVar33 = local_3168;
                          pcVar42 = "friend";
                          do {
                            if (lVar40 == 0) break;
                            lVar40 = lVar40 + -1;
                            bVar45 = *pcVar33 == *pcVar42;
                            pcVar33 = pcVar33 + 1;
                            pcVar42 = pcVar42 + 1;
                          } while (bVar45);
                          if (bVar45) {
                            plVar37 = (longlong *)FUN_1401183a0();
                            lVar40 = *plVar37;
                            uVar25 = (**(code **)(*param_4 + 8))(param_4);
                            uVar23 = (**(code **)(*plVar26 + 8))(plVar26);
                            cVar7 = (**(code **)(lVar40 + 0x170))(plVar37,uVar23,uVar25);
                            if ((cVar7 == '\0') || (cVar7 = (**(code **)(plVar26[2] + 0x220))(), cVar7 == '\0')) {
                              FUN_1400344f0(local_a020);
                              return 0;
                            }
                          }
                          else {
                            lVar40 = 0xb;
                            bVar45 = false;
                            pcVar33 = local_3168;
                            pcVar42 = "istogether";
                            do {
                              if (lVar40 == 0) break;
                              lVar40 = lVar40 + -1;
                              bVar45 = *pcVar33 == *pcVar42;
                              pcVar33 = pcVar33 + 1;
                              pcVar42 = pcVar42 + 1;
                            } while (bVar45);
                            if (!bVar45) {
                              FUN_1400344f0(local_a020);
                              return 0;
                            }
                            cVar7 = (**(code **)(plVar26[2] + 0x220))();
                            if (cVar7 == '\0') {
                              FUN_1400344f0(local_a020);
                              return 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                FUN_1400333a0(&local_a388);
              } while( true );
            }
            FUN_1400344f0(local_a020);
            uVar41 = 0;
          }
        }
      }
    }
    break;
  case 0x5c:
    FUN_140035210(local_9da8);
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    cVar7 = FUN_140118860(param_1,uVar25,local_9da8);
    uStack_a380 = local_9d90;
    if (cVar7 != '\0') {
      if (local_9d88 < local_9d90) {
        _invalid_parameter_noinfo();
      }
      local_a388 = local_9da8[0];
      while( true ) {
        uVar28 = local_9d88;
        uVar41 = uStack_a380;
        lVar40 = local_a388;
        if (local_9d88 < local_9d90) {
          _invalid_parameter_noinfo();
        }
        if ((lVar40 == 0) || (lVar40 != local_9da8[0])) {
          _invalid_parameter_noinfo();
        }
        if (uVar28 <= uVar41) break;
        lVar40 = *param_4;
        puVar31 = (undefined4 *)FUN_140033360(&local_a388);
        plVar26 = (longlong *)(**(code **)(lVar40 + 0x28))(param_4,*puVar31);
        if (plVar26 != (longlong *)0x0) {
          iVar14 = (**(code **)(*plVar26 + 8))(plVar26);
          iVar24 = (**(code **)(*param_4 + 8))(param_4);
          if (iVar14 != iVar24) {
            plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
            uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
            cVar7 = FUN_1400c9580(plVar26,uVar25,0);
            if (cVar7 == '\0') {
              FUN_1400344f0(local_9da8);
              return 0;
            }
          }
        }
        FUN_1400333a0(&local_a388);
      }
      FUN_1400344f0(local_9da8);
      return 1;
    }
    FUN_1400344f0(local_9da8);
    uVar41 = 0;
    break;
  case 0x5d:
    FUN_140035210(local_9c58);
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    cVar7 = FUN_140118860(param_1,uVar25,local_9c58);
    uStack_a380 = local_9c40;
    if (cVar7 == '\0') {
      FUN_1400344f0(local_9c58);
      uVar41 = 0;
    }
    else {
      if (local_9c38 < local_9c40) {
        _invalid_parameter_noinfo();
      }
      local_a388 = local_9c58[0];
      while( true ) {
        uVar28 = local_9c38;
        uVar41 = uStack_a380;
        lVar40 = local_a388;
        if (local_9c38 < local_9c40) {
          _invalid_parameter_noinfo();
        }
        if ((lVar40 == 0) || (lVar40 != local_9c58[0])) {
          _invalid_parameter_noinfo();
        }
        if (uVar28 <= uVar41) break;
        lVar40 = *param_4;
        puVar31 = (undefined4 *)FUN_140033360(&local_a388);
        plVar26 = (longlong *)(**(code **)(lVar40 + 0x28))(param_4,*puVar31);
        if (plVar26 != (longlong *)0x0) {
          iVar14 = (**(code **)(*plVar26 + 8))(plVar26);
          iVar24 = (**(code **)(*param_4 + 8))(param_4);
          if (iVar14 != iVar24) {
            plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
            uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
            local_a408 = (char *)CONCAT71(local_a408._1_7_,1);
            local_a410 = (uint *)((ulonglong)local_a410 & 0xffffffff00000000);
            local_a418 = (char *)CONCAT44(local_a418._4_4_,1);
            FUN_14034a8d0(plVar26,uVar25,0,1);
          }
        }
        FUN_1400333a0(&local_a388);
      }
      FUN_1400344f0(local_9c58);
      uVar41 = 1;
    }
    break;
  case 0x5e:
    FUN_140035210(local_9d18);
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    cVar7 = FUN_140118860(param_1,uVar25,local_9d18);
    uStack_a380 = local_9d00;
    if (cVar7 == '\0') {
      FUN_1400344f0(local_9d18);
      uVar41 = 0;
    }
    else {
      if (local_9cf8 < local_9d00) {
        _invalid_parameter_noinfo();
      }
      local_a388 = local_9d18[0];
      while( true ) {
        uVar28 = local_9cf8;
        uVar41 = uStack_a380;
        lVar40 = local_a388;
        if (local_9cf8 < local_9d00) {
          _invalid_parameter_noinfo();
        }
        if ((lVar40 == 0) || (lVar40 != local_9d18[0])) {
          _invalid_parameter_noinfo();
        }
        if (uVar28 <= uVar41) break;
        lVar40 = *param_4;
        puVar31 = (undefined4 *)FUN_140033360(&local_a388);
        plVar26 = (longlong *)(**(code **)(lVar40 + 0x28))(param_4,*puVar31);
        if (plVar26 != (longlong *)0x0) {
          iVar14 = (**(code **)(*plVar26 + 8))(plVar26);
          iVar24 = (**(code **)(*param_4 + 8))(param_4);
          if (iVar14 != iVar24) {
            plVar37 = (longlong *)FUN_140087d40();
            plVar32 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
            uVar25 = (**(code **)(*plVar32 + 0x48))(plVar32);
            lVar40 = *plVar37;
            uVar25 = FUN_14032f2e0(plVar26,uVar25,1,0);
            plVar37 = (longlong *)(**(code **)(lVar40 + 0x60))(plVar37,uVar25);
            if (plVar37 != (longlong *)0x0) {
              uVar25 = (**(code **)(*plVar37 + 8))(plVar37);
              cVar7 = FUN_140340190(plVar26,uVar25,1);
              if (cVar7 != '\0') goto LAB_14013625c;
            }
            plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
            uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
            uVar13 = FUN_1400bb7e0(param_2);
            log_InlineLogWARNING(&DAT_14070e2f8,(ulonglong)uVar13,(ulonglong)uVar12);
          }
        }
LAB_14013625c:
        FUN_1400333a0(&local_a388);
      }
      FUN_1400344f0(local_9d18);
      uVar41 = 1;
    }
    break;
  case 0x5f:
    FUN_140035210(local_9d48);
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    cVar7 = FUN_140118860(param_1,uVar25,local_9d48);
    uStack_a380 = local_9d30;
    if (cVar7 != '\0') {
      if (local_9d28 < local_9d30) {
        _invalid_parameter_noinfo();
      }
      local_a388 = local_9d48[0];
      while( true ) {
        uVar28 = local_9d28;
        uVar41 = uStack_a380;
        lVar40 = local_a388;
        if (local_9d28 < local_9d30) {
          _invalid_parameter_noinfo();
        }
        if ((lVar40 == 0) || (lVar40 != local_9d48[0])) {
          _invalid_parameter_noinfo();
        }
        if (uVar28 <= uVar41) break;
        lVar40 = *param_4;
        puVar31 = (undefined4 *)FUN_140033360(&local_a388);
        plVar26 = (longlong *)(**(code **)(lVar40 + 0x28))(param_4,*puVar31);
        if (plVar26 != (longlong *)0x0) {
          iVar14 = (**(code **)(*plVar26 + 8))(plVar26);
          iVar24 = (**(code **)(*param_4 + 8))(param_4);
          if (iVar14 != iVar24) {
            plVar37 = (longlong *)FUN_140087d40();
            plVar32 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
            uVar25 = (**(code **)(*plVar32 + 0x48))(plVar32);
            lVar40 = *plVar37;
            uVar25 = FUN_14032f080(plVar26,uVar25);
            lVar40 = (**(code **)(lVar40 + 0x60))(plVar37,uVar25);
            if (lVar40 == 0) {
              FUN_1400344f0(local_9d48);
              return 0;
            }
          }
        }
        FUN_1400333a0(&local_a388);
      }
      FUN_1400344f0(local_9d48);
      return 1;
    }
    FUN_1400344f0(local_9d48);
    uVar41 = 0;
    break;
  case 0x60:
    local_a310 = 0;
    local_a214 = 0;
    local_a1dc = 0;
    local_a418 = (char *)&local_a1dc;
    iVar14 = sscanf(param_3,"%u %d %d",&local_a310,&local_a214);
    if (iVar14 < 3) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2a6b);
      uVar41 = 0;
    }
    else {
      cVar7 = FUN_1401a4030(param_4,local_a310);
      if (cVar7 == '\0') {
        FUN_140179040(param_4,local_a310);
        uVar41 = 0;
      }
      else {
        FUN_140035210(local_9c28);
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        cVar7 = FUN_140118860(param_1,uVar25,local_9c28);
        uStack_a380 = local_9c10;
        if (cVar7 == '\0') {
          FUN_1400344f0(local_9c28);
          uVar41 = 0;
        }
        else {
          if (local_9c08 < local_9c10) {
            _invalid_parameter_noinfo();
          }
          local_a388 = local_9c28[0];
          while( true ) {
            uVar28 = local_9c08;
            uVar41 = uStack_a380;
            lVar40 = local_a388;
            if (local_9c08 < local_9c10) {
              _invalid_parameter_noinfo();
            }
            if ((lVar40 == 0) || (lVar40 != local_9c28[0])) {
              _invalid_parameter_noinfo();
            }
            if (uVar28 <= uVar41) break;
            lVar40 = *param_4;
            puVar31 = (undefined4 *)FUN_140033360(&local_a388);
            plVar26 = (longlong *)(**(code **)(lVar40 + 0x28))(param_4,*puVar31);
            if (plVar26 != (longlong *)0x0) {
              iVar14 = (**(code **)(*plVar26 + 8))(plVar26);
              iVar24 = (**(code **)(*param_4 + 8))(param_4);
              if ((iVar14 != iVar24) && (cVar7 = (**(code **)(plVar26[2] + 0x220))(), cVar7 != '\0')) {
                local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
                iVar14 = FUN_1401c55b0(plVar26,local_a310,local_a214,local_a1dc);
                if (iVar14 == 0) {
                  FUN_1401734d0(plVar26);
                }
              }
            }
            FUN_1400333a0(&local_a388);
          }
          local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
          iVar14 = FUN_1401c55b0(param_4,local_a310,local_a214,local_a1dc);
          if (iVar14 != 0) {
            local_a418 = (char *)CONCAT44(local_a418._4_4_,0x2a88);
            log_InlineLogERROR(&DAT_1406d9c10,"MYASSERT","pUser->FlyMap(idMap, nPosX, nPosY) == FLYMAP_NORMAL",
                               "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
          }
          FUN_1400344f0(local_9c28);
          uVar41 = 1;
        }
      }
    }
    break;
  case 0x61:
    local_a0dc = 0;
    local_a08c = 0;
    iVar14 = sscanf(param_3,"team_action %u %d",&local_a0dc,&local_a08c);
    if (iVar14 == 2) {
      FUN_140035210(local_9ce8);
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      cVar7 = FUN_140118860(param_1,uVar25,local_9ce8);
      uStack_a380 = local_9cd0;
      if (cVar7 == '\0') {
        FUN_1400344f0(local_9ce8);
        uVar41 = 0;
      }
      else {
        if (local_9cc8 < local_9cd0) {
          _invalid_parameter_noinfo();
        }
        local_a388 = local_9ce8[0];
        while( true ) {
          uVar28 = local_9cc8;
          uVar41 = uStack_a380;
          lVar40 = local_a388;
          if (local_9cc8 < local_9cd0) {
            _invalid_parameter_noinfo();
          }
          if ((lVar40 == 0) || (lVar40 != local_9ce8[0])) {
            _invalid_parameter_noinfo();
          }
          if (uVar28 <= uVar41) break;
          puVar31 = (undefined4 *)FUN_140033360(&local_a388);
          uVar25 = *puVar31;
          if (local_a08c == 1) {
            lVar40 = (**(code **)(*param_4 + 0x28))(param_4,uVar25);
LAB_140136849:
            if (lVar40 != 0) {
              uVar39 = FUN_140008520((int)param_1[9]);
              uVar39 = FUN_140087730(uVar39);
              local_a410 = (uint *)0x0;
              local_a418 = (char *)((ulonglong)local_a418 & 0xffffffff00000000);
              FUN_140145f60(uVar39,local_a0dc,lVar40,0);
            }
          }
          else if (local_a08c == 2) {
            uVar39 = FUN_140008520((int)param_1[9]);
            plVar26 = (longlong *)FUN_140087650(uVar39);
            lVar40 = (**(code **)(*plVar26 + 0x98))(plVar26,uVar25);
            if (lVar40 != 0) {
              iVar14 = (**(code **)(*(longlong *)(lVar40 + 0x10) + 0x168))();
              iVar24 = (**(code **)(param_4[2] + 0x168))(param_4 + 2);
              if (iVar14 == iVar24) goto LAB_140136849;
            }
          }
          else if (local_a08c == 3) {
            uVar39 = FUN_140008520((int)param_1[9]);
            plVar26 = (longlong *)FUN_140087650(uVar39);
            lVar40 = (**(code **)(*plVar26 + 0x98))(plVar26,uVar25);
            goto LAB_140136849;
          }
          FUN_1400333a0(&local_a388);
        }
        FUN_1400344f0(local_9ce8);
        uVar41 = 1;
      }
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2a93);
      uVar41 = 0;
    }
    break;
  case 0x62:
    plVar26 = (longlong *)FUN_140118320();
    if (plVar26 == (longlong *)0x0) {
      uVar41 = 0;
    }
    else {
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      iVar14 = (**(code **)(lVar40 + 0x30))(plVar26,uVar25);
      uVar41 = (ulonglong)(iVar14 != 0);
    }
    break;
  case 99:
    local_a294 = 0;
    local_a2c8 = 0;
    local_a2a4 = 0;
    local_a100 = 0;
    local_a0e8 = 0;
    local_a29c = 0;
    local_a07c = 0;
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    local_a3f8 = &local_a07c;
    local_a400 = &local_a29c;
    local_a408 = (char *)&local_a100;
    local_a410 = &local_a2a4;
    local_a418 = (char *)&local_a2c8;
    iVar14 = sscanf(param_3,"%d %u %u %u %d %u %u",&local_a0e8,&local_a294);
    if (iVar14 < 6) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1905);
      uVar41 = 0;
    }
    else {
      bVar45 = local_a0e8 != 0;
      if ((((local_a294 == 0) || (local_a2c8 == 0)) || (local_a2a4 == 0)) || (local_a29c == 0)) {
        uVar25 = FUN_1400bb7e0(param_2);
        local_a400 = (int *)CONCAT44(local_a400._4_4_,0x1916);
        local_a408 = "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp";
        local_a410 = (uint *)CONCAT44(local_a410._4_4_,uVar25);
        local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a29c);
        log_InlineLogDBERROR(&DAT_14070f660,(ulonglong)local_a294,(ulonglong)local_a2c8,(ulonglong)local_a2a4);
        uVar41 = 0;
      }
      else {
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087790(uVar39);
        local_a3e0 = (int *)0x0;
        local_a3e8 = (undefined4 *)0x0;
        local_a3f0 = (undefined4 *)((ulonglong)local_a3f0 & 0xffffffffffffff00);
        local_a3f8 = (undefined4 *)CONCAT44(local_a3f8._4_4_,local_a07c);
        local_a400 = (int *)CONCAT44(local_a400._4_4_,local_a29c);
        local_a408 = (char *)CONCAT44(local_a408._4_4_,local_a100);
        local_a410 = (uint *)CONCAT44(local_a410._4_4_,local_a2a4);
        local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a2c8);
        uVar41 = FUN_1402a74b0(uVar39,uVar25,bVar45,local_a294);
      }
    }
    break;
  case 100:
    local_a0f8 = 0;
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    iVar14 = sscanf(param_3,"%u",&local_a0f8);
    if (iVar14 == 1) {
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar23 = (**(code **)(*plVar26 + 0x48))(plVar26);
      uVar39 = FUN_140008520((int)param_1[9]);
      uVar39 = FUN_140087790(uVar39);
      local_a410 = (uint *)0x0;
      local_a418 = (char *)CONCAT44(local_a418._4_4_,uVar23);
      uVar41 = FUN_1402a6aa0(uVar39,uVar25,local_a0f8,0);
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1924);
      uVar41 = 0;
    }
    break;
  case 0x65:
    local_a0f0 = 0;
    (**(code **)(*param_4 + 8))(param_4);
    iVar14 = sscanf(param_3,"%u",&local_a0f0);
    if (iVar14 == 1) {
      if (local_a0f0 == 0) {
        uVar12 = FUN_1400bb7e0(param_2);
        log_InlineLogDBERROR(&DAT_14070f620,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x1939);
        uVar41 = 0;
      }
      else {
        uVar41 = 1;
      }
    }
    else {
      uVar41 = 0;
    }
    break;
  case 0x66:
    local_a258 = 0;
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    iVar14 = sscanf(param_3,"%u",&local_a258);
    if ((iVar14 == 1) && (local_a258 != 0)) {
      uVar39 = FUN_140008520((int)param_1[9]);
      uVar39 = FUN_140087790(uVar39);
      uVar41 = FUN_1402a6680(uVar39,uVar25,local_a258,0);
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070f620,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x194b);
      uVar41 = 0;
    }
    break;
  case 0x67:
    local_a1e8 = 0;
    local_a1f0 = 0;
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    iVar14 = sscanf(param_3,"%u %u",&local_a1e8,&local_a1f0);
    if (((iVar14 != 2) || (local_a1e8 == 0)) || (local_a1f0 == 0)) {
      uVar12 = FUN_1400bb7e0(param_2);
      local_a410 = (uint *)CONCAT44(local_a410._4_4_,0x195b);
      local_a418 = "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp";
      log_InlineLogDBERROR(&DAT_14070f5c0,(ulonglong)local_a1e8,(ulonglong)local_a1f0,(ulonglong)uVar12);
      return 0;
    }
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_140087790(uVar39);
    lVar40 = FUN_1402a6090(uVar39,uVar25);
    if (lVar40 == 0) {
      plVar26 = (longlong *)FUN_140118320();
      if ((plVar26 != (longlong *)0x0) && (iVar14 = (**(code **)(*plVar26 + 0x28))(plVar26,uVar25), iVar14 != 0)) {
        uVar23 = (**(code **)(*plVar26 + 0x48))(plVar26,iVar14,0);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087790(uVar39);
        lVar40 = FUN_1402a6090(uVar39,uVar23);
        if (lVar40 != 0) goto LAB_14012aca0;
      }
      uVar41 = 0;
    }
    else {
LAB_14012aca0:
      FUN_1403a5610(lVar40,uVar25);
      uVar41 = 1;
    }
    break;
  case 0x68:
    local_a1d0 = 0;
    local_a1d8 = 0;
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    iVar14 = sscanf(param_3,"%u %u",&local_a1d0,&local_a1d8);
    if (((iVar14 != 2) || (local_a1d0 == 0)) || (local_a1d8 == 0)) {
      uVar12 = FUN_1400bb7e0(param_2);
      local_a410 = (uint *)CONCAT44(local_a410._4_4_,0x1980);
      local_a418 = "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp";
      log_InlineLogDBERROR(&DAT_14070f5c0,(ulonglong)local_a1d0,(ulonglong)local_a1d8,(ulonglong)uVar12);
      return 0;
    }
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_140087790(uVar39);
    lVar40 = FUN_1402a6090(uVar39,uVar25);
    if (lVar40 == 0) {
      plVar26 = (longlong *)FUN_140118320();
      if ((plVar26 != (longlong *)0x0) && (iVar14 = (**(code **)(*plVar26 + 0x28))(plVar26,uVar25), iVar14 != 0)) {
        uVar23 = (**(code **)(*plVar26 + 0x48))(plVar26,iVar14,0);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087790(uVar39);
        lVar40 = FUN_1402a6090(uVar39,uVar23);
        if (lVar40 != 0) goto LAB_14012adcc;
      }
      uVar41 = 0;
    }
    else {
LAB_14012adcc:
      FUN_1403a3840(lVar40,uVar25);
      uVar41 = 1;
    }
    break;
  case 0x69:
    local_a0d4 = 0;
    local_a084 = 0;
    iVar14 = sscanf(param_3,"%u %d",&local_a0d4,&local_a084);
    if (iVar14 == 2) {
      FUN_140035210(local_9ef8);
      plVar26 = (longlong *)FUN_140118320();
      if (plVar26 == (longlong *)0x0) {
        FUN_1400344f0(local_9ef8);
        uVar41 = 0;
      }
      else {
        lVar40 = *plVar26;
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        iVar14 = (**(code **)(lVar40 + 0x28))(plVar26,uVar25);
        if (iVar14 == 0) {
          FUN_1400344f0(local_9ef8);
          uVar41 = 0;
        }
        else {
          uVar41 = (**(code **)(*plVar26 + 0x50))(plVar26,iVar14,0);
          if (uVar41 < 2) {
            FUN_1400344f0(local_9ef8);
            uVar41 = 0;
          }
          else {
            plVar26 = (longlong *)FUN_140118320();
            cVar7 = (**(code **)(*plVar26 + 0x60))(plVar26,iVar14,local_9ef8,0);
            uStack_a380 = local_9ee0;
            if (cVar7 == '\0') {
              FUN_1400344f0(local_9ef8);
              uVar41 = 0;
            }
            else {
              if (local_9ed8 < local_9ee0) {
                _invalid_parameter_noinfo();
              }
              local_a388 = local_9ef8[0];
              while( true ) {
                uVar28 = local_9ed8;
                uVar41 = uStack_a380;
                lVar40 = local_a388;
                if (local_9ed8 < local_9ee0) {
                  _invalid_parameter_noinfo();
                }
                if ((lVar40 == 0) || (lVar40 != local_9ef8[0])) {
                  _invalid_parameter_noinfo();
                }
                if (uVar28 <= uVar41) break;
                puVar31 = (undefined4 *)FUN_140033360(&local_a388);
                uVar25 = *puVar31;
                if (local_a084 == 1) {
                  lVar40 = (**(code **)(*param_4 + 0x28))(param_4,uVar25);
LAB_140136af8:
                  if (lVar40 != 0) {
                    uVar39 = FUN_140008520((int)param_1[9]);
                    uVar39 = FUN_140087730(uVar39);
                    local_a410 = (uint *)0x0;
                    local_a418 = (char *)((ulonglong)local_a418 & 0xffffffff00000000);
                    FUN_140145f60(uVar39,local_a0d4,lVar40,0);
                  }
                }
                else if (local_a084 == 2) {
                  uVar39 = FUN_140008520((int)param_1[9]);
                  plVar26 = (longlong *)FUN_140087650(uVar39);
                  lVar40 = (**(code **)(*plVar26 + 0x98))(plVar26,uVar25);
                  if (lVar40 != 0) {
                    iVar14 = (**(code **)(*(longlong *)(lVar40 + 0x10) + 0x168))();
                    iVar24 = (**(code **)(param_4[2] + 0x168))(param_4 + 2);
                    if (iVar14 == iVar24) goto LAB_140136af8;
                  }
                }
                else if (local_a084 == 3) {
                  uVar39 = FUN_140008520((int)param_1[9]);
                  plVar26 = (longlong *)FUN_140087650(uVar39);
                  lVar40 = (**(code **)(*plVar26 + 0x98))(plVar26,uVar25);
                  goto LAB_140136af8;
                }
                FUN_1400333a0(&local_a388);
              }
              FUN_1400344f0(local_9ef8);
              uVar41 = 1;
            }
          }
        }
      }
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2ac4);
      uVar41 = 0;
    }
    break;
  case 0x6a:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
    local_a340 = (undefined8 *)CONCAT44(local_a340._4_4_,uVar12);
    if (uVar12 == 0) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070e260,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2b03);
      uVar41 = 0;
    }
    else {
      plVar26 = (longlong *)FUN_140087de0();
      puVar30 = (undefined8 *)(**(code **)(*plVar26 + 0x40))(plVar26,uVar12);
      if (puVar30 == (undefined8 *)0x0) {
        log_InlineLogDBERROR
                  ("table:cq_action/cq_newaction, CGameAction::ProcessActionUser(): ACTION_TEAM_SHARE_ACTION Error: game action %u not found.",(ulonglong)uVar12
                  );
        uVar41 = 0;
      }
      else {
        plVar26 = (longlong *)(**(code **)(*(longlong *)*puVar30 + 0x10))((longlong *)*puVar30,3);
        iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
        if (iVar14 == 0x45d) {
          uVar12 = FUN_1400bb7e0(param_2);
          log_InlineLogDBERROR(&DAT_14070e180,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2b10);
          uVar41 = 0;
        }
        else {
          plVar26 = (longlong *)FUN_140118320();
          if (plVar26 == (longlong *)0x0) {
            log_InlineLogERROR("CGameAction::ProcessActionUser(): ACTION_TEAM_SHARE_ACTION, TeamProvider is NULL.");
            uVar41 = 0;
          }
          else {
            lVar40 = *plVar26;
            uVar25 = (**(code **)(*param_4 + 8))(param_4);
            uVar41 = (**(code **)(lVar40 + 0x28))(plVar26,uVar25);
            if ((int)uVar41 != 0) {
              FUN_140035210(local_9c88);
              cVar7 = (**(code **)(*plVar26 + 0x60))(plVar26,uVar41 & 0xffffffff,local_9c88,0);
              uStack_a380 = local_9c70;
              if (cVar7 == '\0') {
                FUN_1400344f0(local_9c88);
                uVar41 = 0;
              }
              else {
                if (local_9c68 < local_9c70) {
                  _invalid_parameter_noinfo();
                }
                local_a388 = local_9c88[0];
                while( true ) {
                  uVar28 = local_9c68;
                  uVar41 = uStack_a380;
                  lVar40 = local_a388;
                  if (local_9c68 < local_9c70) {
                    _invalid_parameter_noinfo();
                  }
                  if ((lVar40 == 0) || (lVar40 != local_9c88[0])) {
                    _invalid_parameter_noinfo();
                  }
                  if (uVar41 == uVar28) break;
                  puVar31 = (undefined4 *)FUN_140033360(&local_a388);
                  uVar25 = *puVar31;
                  uVar39 = FUN_140008520((int)param_1[9]);
                  plVar26 = (longlong *)FUN_140087650(uVar39);
                  local_a368 = (longlong *)(**(code **)(*plVar26 + 0x98))(plVar26,uVar25);
                  if (local_a368 != (longlong *)0x0) {
                    plVar26 = local_a368 + 2;
                    iVar14 = (**(code **)(*plVar26 + 0x168))(plVar26);
                    iVar24 = (**(code **)(param_4[2] + 0x168))(param_4 + 2);
                    if (iVar24 == iVar14) {
                      lVar40 = param_4[2];
                      uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
                      uVar23 = (**(code **)(*plVar26 + 0x40))(plVar26);
                      iVar14 = (**(code **)(lVar40 + 0x158))(param_4 + 2,uVar23,uVar25);
                      if (iVar14 < 0x21) {
                        uVar39 = FUN_140008520((int)param_1[9]);
                        uVar39 = FUN_140087730(uVar39);
                        local_a410 = (uint *)0x0;
                        local_a418 = (char *)((ulonglong)local_a418 & 0xffffffff00000000);
                        FUN_140145f60(uVar39,(ulonglong)local_a340 & 0xffffffff,local_a368,0);
                      }
                    }
                  }
                  FUN_1400333a0(&local_a388);
                }
                FUN_1400344f0(local_9c88);
                uVar41 = 1;
              }
            }
          }
        }
      }
    }
    break;
  case 0x6b:
    plVar26 = (longlong *)FUN_140118320();
    if (plVar26 == (longlong *)0x0) {
      return 0;
    }
    plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar12 = (**(code **)(*plVar37 + 0x48))(plVar37);
    uVar41 = (ulonglong)uVar12;
    local_a300 = uVar12;
    uVar21 = strtoul(param_3,(char **)0x0,10);
    if (uVar21 != 0) {
      log_InlineLogDBERROR("table:cq_action/cq_newaction, ACTION_TEAM_DICE, wrong roll type: %d",(ulonglong)uVar21);
      return 0;
    }
    plVar37 = (longlong *)FUN_140087d40();
    local_a368 = (longlong *)(**(code **)(*plVar37 + 0x70))(plVar37,uVar41);
    if (local_a368 == (longlong *)0x0) {
      log_InlineLogDBERROR("table:cq_action/cq_newaction, ACTION_TEAM_DICE, wrong item type: %u",(ulonglong)uVar12);
      return 0;
    }
    lVar40 = *plVar26;
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    iVar14 = (**(code **)(lVar40 + 0x28))(plVar26,uVar25);
    local_a338 = (longlong *)CONCAT44(local_a338._4_4_,iVar14);
    if (iVar14 == 0) {
LAB_14012b0e0:
      uVar25 = 1;
    }
    else {
      lVar40 = (**(code **)(*plVar26 + 0x50))(plVar26,iVar14,0);
      if (lVar40 == 1) goto LAB_14012b0e0;
      FUN_140035210(local_9d78);
      cVar7 = (**(code **)(*plVar26 + 0x60))(plVar26,iVar14,local_9d78,0);
      local_a340 = (undefined8 *)0x1;
      uVar12 = (uint)(cVar7 == '\0');
      if ((local_9d58 - local_9d60 & 0xfffffffffffffffc) == 0) {
        uVar12 = 1;
      }
      local_a288 = (char *)CONCAT44(local_a288._4_4_,uVar12);
      local_a1e0 = (**(code **)(param_4[2] + 0x168))();
      uStack_a380 = local_9d60;
      if (local_9d58 < local_9d60) {
        _invalid_parameter_noinfo();
      }
      iVar14 = local_a1e0;
      local_a388 = local_9d78[0];
      iVar24 = 0;
      while( true ) {
        uVar41 = local_9d58;
        if (local_9d58 < local_9d60) {
          _invalid_parameter_noinfo();
        }
        if ((local_a388 == 0) || (local_a388 != local_9d78[0])) {
          _invalid_parameter_noinfo();
        }
        if (uStack_a380 == uVar41) break;
        puVar31 = (undefined4 *)FUN_140032630(&local_a388);
        uVar25 = *puVar31;
        uVar39 = FUN_140008520((int)param_1[9]);
        plVar26 = (longlong *)FUN_140087650(uVar39);
        lVar40 = (**(code **)(*plVar26 + 0x98))(plVar26,uVar25);
        if ((lVar40 != 0) && (iVar15 = (**(code **)(*(longlong *)(lVar40 + 0x10) + 0x168))(), iVar15 == iVar14)) {
          iVar24 = iVar24 + 1;
        }
        FUN_140032670(&local_a388);
      }
      uVar25 = SUB84(local_a340,0);
      cVar7 = (char)local_a288;
      if (iVar24 < 2) {
        cVar7 = (char)local_a340;
      }
      FUN_1400344f0(local_9d78);
      if (cVar7 == '\0') {
        uVar25 = (**(code **)(*local_a040 + 8))(local_a040);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087920(uVar39);
        local_a418 = (char *)((ulonglong)local_a418._4_4_ << 0x20);
        uVar41 = FUN_1402eb7e0(uVar39,uVar25,(ulonglong)local_a338 & 0xffffffff,local_a300);
        return uVar41;
      }
      uVar41 = (ulonglong)local_a300;
      param_4 = local_a040;
    }
    plVar26 = (longlong *)(**(code **)(**(longlong **)((longlong)local_a368 + 8) + 0x10))(*(longlong **)((longlong)local_a368 + 8),10);
    uVar11 = (**(code **)(*plVar26 + 0x48))(plVar26);
    local_a408 = (char *)CONCAT71(local_a408._1_7_,1);
    local_a410 = (uint *)((ulonglong)local_a410._4_4_ << 0x20);
    local_a418 = (char *)CONCAT44(local_a418._4_4_,uVar25);
    uVar25 = FUN_140340e50(param_4,uVar41,uVar11,1);
    plVar26 = (longlong *)FUN_140087d40();
    lVar40 = (**(code **)(*plVar26 + 0x60))(plVar26,uVar25);
    if (lVar40 == 0) {
      uVar12 = (**(code **)(*param_4 + 8))(param_4);
      tq::MyLogSave("gmlog/teamdice"," ACTION_TEAM_DICE, user(%u) can not award item type(%u)",(ulonglong)uVar12,uVar41);
      uVar41 = 0;
    }
    else {
      uVar39 = FUN_140008520((int)param_1[9]);
      uVar39 = FUN_140087920(uVar39);
      FUN_1402e9b10(uVar39,param_4,lVar40);
      local_2348 = '\0';
      memset(local_2347,0,0xff);
      pIVar27 = theInstance();
      uVar39 = FUN_140100430(lVar40,0x65);
      pcVar33 = (char *)(*(code *)**(undefined8 **)pIVar27)(pIVar27,"STR_TEAM_DICE_AWARD_ITEM");
      _snprintf(&local_2348,0x100,pcVar33,uVar39);
      local_2249 = 0;
      (**(code **)(param_4[2] + 0x358))(param_4 + 2,&local_2348);
      uVar41 = 1;
    }
    break;
  case 0x6c:
    cVar7 = FUN_1401acc30(param_4);
    if (cVar7 != '\0') {
      return 1;
    }
    goto LAB_14013a784;
  case 0x6d:
    cVar7 = FUN_1401ad0f0(param_4);
    if (cVar7 != '\0') {
      return 1;
    }
    goto LAB_14013a784;
  case 0x6e:
    local_a134 = 0;
    iVar14 = sscanf(param_3,"%d",&local_a134);
    if (iVar14 < 1) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x257c);
      uVar41 = 0;
    }
    else {
      iVar14 = FUN_140167070(param_4);
      uVar21 = tq::TimeGet(3);
      if (((int)(uVar21 - iVar14) < local_a134) && (iVar14 != 0)) {
        uVar41 = 0;
      }
      else {
        FUN_1401787e0(param_4,uVar21);
        uVar41 = 1;
      }
    }
    break;
  case 0x6f:
    uVar12 = (**(code **)(param_4[2] + 0x78))(param_4 + 2);
    uVar13 = (**(code **)(param_4[2] + 0x80))(param_4 + 2);
    uVar41 = (ulonglong)(uVar13 <= uVar12);
    break;
  case 0x70:
    uVar12 = (**(code **)(*param_4 + 0x80))(param_4);
    uVar13 = (**(code **)(*param_4 + 0x88))(param_4);
    uVar41 = (ulonglong)(uVar13 <= uVar12);
    break;
  case 0x71:
    uVar39 = FUN_140008520((int)param_1[9]);
    cVar7 = FUN_14008ac10(uVar39);
    uVar41 = (ulonglong)(cVar7 != '\0');
    break;
  case 0x72:
    plVar26 = (longlong *)CurrentInstanceGet();
    if (plVar26 != (longlong *)0x0) {
      plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x10);
      if (plVar26 == (longlong *)0x0) {
        return 0;
      }
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      iVar14 = (**(code **)(lVar40 + 0x88))(plVar26,uVar25,0);
      if (0 < iVar14) {
        return 1;
      }
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      iVar14 = (**(code **)(lVar40 + 0x30))(plVar26,uVar25,0);
      if (iVar14 != 0) {
        return 1;
      }
    }
    uVar41 = 0;
    break;
  case 0x73:
    plVar26 = (longlong *)FUN_1401183a0();
    lVar40 = *plVar26;
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    lVar40 = (**(code **)(lVar40 + 0xf0))(plVar26,uVar25);
    uVar41 = (ulonglong)(lVar40 != 0);
    break;
  case 0x74:
    uVar12 = *(uint *)((longlong)param_4 + 0xf2c);
    if (uVar12 == 0) {
      uVar41 = 0;
    }
    else {
      uVar39 = FUN_140008520((int)param_1[9]);
      plVar26 = (longlong *)FUN_1400876b0(uVar39);
      puVar30 = (undefined8 *)0x1;
      local_a340 = (undefined8 *)0x1;
      lVar40 = (**(code **)(*plVar26 + 0x10))(plVar26,uVar12,1);
      if (lVar40 == 0) {
        uVar13 = FUN_1400bb7e0(param_2);
        uVar20 = (**(code **)(*param_4 + 8))(param_4);
        log_InlineLogDBERROR
                  ("table:cq_action/cq_newaction, ACTION_USER_CHECK_ITEM_IN_TRUNCK fail, UserId[%u], Action[%u], HomeMap[%u]",(ulonglong)uVar20,
                   (ulonglong)uVar13,(ulonglong)uVar12);
        uVar41 = 0;
      }
      else {
        plVar26 = (longlong *)CurrentInstanceGet();
        if (plVar26 == (longlong *)0x0) {
          uVar41 = 1;
        }
        else {
          plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x12);
          if (plVar26 == (longlong *)0x0) {
            uVar41 = 1;
          }
          else {
            uVar39 = FUN_140008520((int)param_1[9]);
            plVar37 = (longlong *)FUN_1400875f0(uVar39);
            lVar40 = (**(code **)(*plVar37 + 0x30))(plVar37);
            local_9b98 = lVar40 + 0x10;
            FUN_1400cb1f0(local_9b90,**(undefined8 **)(lVar40 + 0x40),local_9b98);
            uVar12 = 0;
            local_9b80 = (longlong *)0x0;
            cVar7 = FUN_1400ce310(&local_9b98);
            while (cVar7 != '\0') {
              uVar12 = uVar12 + 1;
              if (1000000 < uVar12) {
                local_a418._4_4_ = (uint)((ulonglong)local_a418 >> 0x20);
                local_a418 = (char *)CONCAT44(local_a418._4_4_,0x25e8);
                log_InlineLogERROR(&DAT_1406d9c10,"DEAD_LOOP_BREAK","uLoopCount","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp"
                                  );
                break;
              }
              if ((local_9b80 != (longlong *)0x0) && (cVar7 = (**(code **)(*local_9b80 + 0x298))(local_9b80,0x1040,&local_a050), cVar7 != '\0')) {
                iVar14 = FUN_1400872b0(local_a050,(ulonglong)puVar30 & 0xffffffff);
                iVar24 = (**(code **)(*param_4 + 8))(param_4);
                if ((iVar14 == iVar24) && (iVar14 = FUN_1400872b0(local_a050,2), iVar14 == 1)) {
                  plVar37 = (longlong *)(**(code **)(*(longlong *)(local_a050 + 0x10) + 0x160))();
                  iVar14 = *(int *)((longlong)param_4 + 0xf2c);
                  iVar24 = (**(code **)(*plVar37 + 8))(plVar37);
                  if ((iVar24 == iVar14) &&
                     (iVar14 = (**(code **)(**(longlong **)(local_a050 + 0x60) + 0x10))(*(longlong **)(local_a050 + 0x60),4), iVar14 == 4)) {
                    lVar40 = *plVar26;
                    uVar25 = (**(code **)(*local_9b80 + 0x10))();
                    uVar23 = (**(code **)(*param_4 + 8))(param_4);
                    cVar7 = (**(code **)(lVar40 + 0x58))(plVar26,uVar23,uVar25,0x14);
                    puVar30 = local_a340;
                    if (cVar7 == '\0') {
                      return 1;
                    }
                  }
                }
              }
              cVar7 = FUN_1400ce310(&local_9b98);
            }
            uVar41 = 0;
          }
        }
      }
    }
    break;
  case 0x75:
    iVar14 = FUN_140174650(param_4);
    if (iVar14 < 1) {
      iVar14 = FUN_1401749c0(param_4);
      if (iVar14 < 1) {
        iVar14 = FUN_140174b80(param_4);
        if (iVar14 < 1) {
          iVar14 = FUN_140174d40(param_4);
          uVar41 = (ulonglong)(0 < iVar14);
        }
        else {
          uVar41 = 1;
        }
      }
      else {
        uVar41 = 1;
      }
    }
    else {
      uVar41 = 1;
    }
    break;
  case 0x76:
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_140087a10(uVar39);
    cVar7 = FUN_14022ca20(uVar39,param_4);
    uVar41 = (ulonglong)(cVar7 != '\0');
    break;
  case 0x77:
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_14001b5b0(uVar39);
    cVar7 = FUN_1400dbf70(uVar39,uVar25);
    uVar41 = (ulonglong)(cVar7 != '\0');
    break;
  case 0x78:
    FUN_140008520((int)param_1[9]);
    uVar41 = FUN_14008ac10();
    if ((char)uVar41 != '\0') {
      lVar40 = -1;
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        cVar7 = *param_3;
        param_3 = param_3 + 1;
      } while (cVar7 != '\0');
      iVar14 = ~(uint)lVar40 - 1;
      if (iVar14 < 1) {
        tq::MyLogSave("gmlog/ChangeServer",&DAT_14070eac8);
        uVar41 = 0;
      }
      else if (iVar14 < 0x11) {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087650(uVar39);
        FUN_1402af240(uVar39,uVar25);
        uVar39 = FUN_140008520((int)param_1[9]);
        plVar26 = (longlong *)FUN_140087650(uVar39);
        (**(code **)(*plVar26 + 0x50))(plVar26,param_4,"Change Server!");
        local_a1a0 = 0;
        local_a19c = 0;
        local_a198 = 0;
        local_a1a0 = (**(code **)(*param_4 + 8))(param_4);
        local_a19c = (undefined4)param_4[0x1e2];
        local_a198 = 0;
        uVar39 = FUN_140008520((int)param_1[9]);
        plVar26 = (longlong *)FUN_14001b560(uVar39);
        local_a418 = (char *)&local_a1a0;
        (**(code **)(*plVar26 + 0x50))(plVar26,2,0x4e2e,0xc);
        memset((void *)((longlong)&local_2e68 + 1),0,0x417);
        local_2e68 = 1;
        local_2e64 = (**(code **)(*param_4 + 8))(param_4);
        local_2e60 = (undefined4)param_4[0x1e2];
        local_2e2c = *(undefined4 *)((longlong)param_4 + 0x1234);
        local_2e28 = 0;
        pcVar33 = (char *)(**(code **)(param_4[2] + 0x18))();
        strncpy(local_2e5c,pcVar33,0x10);
        strncpy(local_2e4c,local_a288,0x10);
        uVar39 = FUN_140008520((int)param_1[9]);
        pcVar33 = (char *)FUN_14008a730(uVar39,local_3e78);
        strncpy(local_2e3c,pcVar33,0x10);
        uVar25 = local_2e2c;
        pcVar33 = local_2e4c;
        lVar40 = -(longlong)pcVar33;
        do {
          cVar7 = *pcVar33;
          cVar1 = pcVar33[(longlong)(local_2e3c + lVar40)];
          if (cVar7 != cVar1) break;
          pcVar33 = pcVar33 + 1;
        } while (cVar1 != '\0');
        if (cVar7 == cVar1) {
          tq::MyLogSave("GmLog/ChangeServer",&DAT_14070ea70,local_2e4c,local_2e3c);
          local_a198 = 1;
          uVar39 = FUN_140008520((int)param_1[9]);
          plVar26 = (longlong *)FUN_14001b560(uVar39);
          local_a418 = (char *)&local_a1a0;
          (**(code **)(*plVar26 + 0x50))(plVar26,2,0x4e2e,0xc);
          uVar25 = (**(code **)(*param_4 + 8))(param_4);
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_140087650(uVar39);
          FUN_1402b0940(uVar39,uVar25);
          uVar41 = 0;
        }
        else {
          uVar39 = FUN_140008520((int)param_1[9]);
          plVar26 = (longlong *)FUN_14001b560(uVar39);
          local_a418 = (char *)&local_2e68;
          cVar7 = (**(code **)(*plVar26 + 0x50))(plVar26,0xb,0x16761,0x418);
          if (cVar7 == '\0') {
            local_a410 = (uint *)Ordinal_12(uVar25);
            local_a400 = (int *)local_2e4c;
            local_a408 = (char *)CONCAT44(local_a408._4_4_,local_2e28);
            local_a418 = (char *)CONCAT44(local_a418._4_4_,local_2e60);
            tq::MyLogSave("gmlog/ChangeServer","ACTION_USER_CHANGE_SERVER fail. action:%u, iduser:%u, idacount:%u, ip:%s Result[%d] InServer[%s]",
                          (ulonglong)local_2e68,(ulonglong)local_2e64);
            local_a198 = 1;
            uVar39 = FUN_140008520((int)param_1[9]);
            plVar26 = (longlong *)FUN_14001b560(uVar39);
            local_a418 = (char *)&local_a1a0;
            (**(code **)(*plVar26 + 0x50))(plVar26,2,0x4e2e,0xc);
            uVar25 = (**(code **)(*param_4 + 8))(param_4);
            uVar39 = FUN_140008520((int)param_1[9]);
            uVar39 = FUN_140087650(uVar39);
            FUN_1402b0940(uVar39,uVar25);
          }
          else {
            local_a410 = (uint *)Ordinal_12(uVar25);
            local_a400 = (int *)local_2e4c;
            local_a408 = (char *)CONCAT44(local_a408._4_4_,local_2e28);
            local_a418 = (char *)CONCAT44(local_a418._4_4_,local_2e60);
            tq::MyLogSave("gmlog/ChangeServer","ACTION_USER_CHANGE_SERVER success. action:%u, iduser:%u, idacount:%u, ip:%s Result[%d] InServer[%s]",
                          (ulonglong)local_2e68,(ulonglong)local_2e64);
          }
          uVar41 = 1;
        }
      }
      else {
        tq::MyLogSave("gmlog/ChangeServer",&DAT_14070eaa0);
        uVar41 = 0;
      }
    }
    break;
  case 0x79:
    uVar41 = 0;
    lVar40 = -1;
    pcVar33 = param_3;
    do {
      if (lVar40 == 0) break;
      lVar40 = lVar40 + -1;
      cVar7 = *pcVar33;
      pcVar33 = pcVar33 + 1;
    } while (cVar7 != '\0');
    iVar14 = ~(uint)lVar40 - 1;
    if ((0 < iVar14) && (iVar14 < 0x11)) {
      local_3f88 = 0;
      local_3f80 = 0;
      uVar39 = FUN_140008520((int)param_1[9]);
      lVar40 = FUN_14008a730(uVar39,&local_3f88);
      lVar40 = lVar40 - (longlong)param_3;
      do {
        cVar7 = *param_3;
        cVar1 = param_3[lVar40];
        if (cVar7 != cVar1) break;
        param_3 = param_3 + 1;
      } while (cVar1 != '\0');
      uVar41 = (ulonglong)(cVar7 == cVar1);
    }
    break;
  case 0x7a:
    uVar39 = FUN_140008520((int)param_1[9]);
    cVar7 = FUN_14008ac30(uVar39);
    uVar41 = (ulonglong)(cVar7 != '\0');
    break;
  case 0x7b:
    uVar41 = (ulonglong)DAT_1409757c4;
    break;
  case 0x7c:
    lVar40 = (**(code **)(param_4[2] + 0x160))();
    if (lVar40 == 0) {
      return 0;
    }
    cVar7 = FUN_140119570(lVar40);
    if (cVar7 != '\0') {
      return 0;
    }
    plVar26 = (longlong *)CurrentInstanceGet();
    if ((plVar26 != (longlong *)0x0) && (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x19), plVar26 != (longlong *)0x0)) {
      cVar7 = FUN_1401a4030(param_4,910000);
      if (cVar7 != '\0') {
        plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
        uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
        uVar41 = (**(code **)(*plVar26 + 0x38))(plVar26,uVar25);
        return uVar41;
      }
      FUN_140179040(param_4,910000);
      return 0;
    }
    goto LAB_14013a784;
  case 0x7d:
    plVar26 = (longlong *)CurrentInstanceGet();
    if ((plVar26 != (longlong *)0x0) && (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x19), plVar26 != (longlong *)0x0)) {
      uVar41 = (**(code **)(*plVar26 + 0x40))(plVar26);
      return uVar41;
    }
    goto LAB_14013a784;
  case 0x7e:
    local_a0e0 = 0;
    iVar14 = sscanf(param_3,"%d",&local_a0e0);
    if (((iVar14 == 1) && (plVar26 = (longlong *)CurrentInstanceGet(), plVar26 != (longlong *)0x0)) &&
       (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x19), plVar26 != (longlong *)0x0)) {
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar25 = (**(code **)(*plVar37 + 0x48))(plVar37);
      lVar40 = *plVar26;
      uVar23 = (**(code **)(*param_4 + 8))(param_4);
      uVar41 = (**(code **)(lVar40 + 0x48))(plVar26,uVar23,uVar25,local_a0e0);
      return uVar41;
    }
    goto LAB_14013a784;
  case 0x7f:
    lVar40 = (**(code **)(param_4[2] + 0x160))();
    if (lVar40 == 0) {
      return 0;
    }
    cVar7 = FUN_140119570(lVar40);
    if (cVar7 != '\0') {
      return 0;
    }
    plVar26 = (longlong *)CurrentInstanceGet();
    if ((plVar26 != (longlong *)0x0) && (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x21), plVar26 != (longlong *)0x0)) {
      cVar7 = FUN_1401a4030(param_4,920000);
      if (cVar7 != '\0') {
        plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
        uVar8 = (**(code **)(*plVar37 + 0x48))(plVar37);
        uVar41 = (**(code **)(*plVar26 + 0xd8))(plVar26,uVar8);
        return uVar41;
      }
      FUN_140179040(param_4,920000);
      return 0;
    }
    goto LAB_14013a784;
  case 0x80:
    plVar26 = (longlong *)CurrentInstanceGet();
    if ((plVar26 != (longlong *)0x0) && (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x21), plVar26 != (longlong *)0x0)) {
      uVar41 = (**(code **)(*plVar26 + 0xd0))(plVar26);
      return uVar41;
    }
    goto LAB_14013a784;
  case 0x81:
    local_a0d8 = 0;
    iVar14 = sscanf(param_3,"%d",&local_a0d8);
    if (((iVar14 == 1) && (plVar26 = (longlong *)CurrentInstanceGet(), plVar26 != (longlong *)0x0)) &&
       (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x21), plVar26 != (longlong *)0x0)) {
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar8 = (**(code **)(*plVar37 + 0x48))(plVar37);
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      uVar41 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,uVar8,local_a0d8);
      return uVar41;
    }
    goto LAB_14013a784;
  case 0x82:
    local_a1c8 = 0;
    iVar14 = sscanf(param_3,"%d",&local_a1c8);
    if (((iVar14 == 1) && (plVar26 = (longlong *)CurrentInstanceGet(), plVar26 != (longlong *)0x0)) &&
       (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x21), plVar26 != (longlong *)0x0)) {
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar8 = (**(code **)(*plVar37 + 0x48))(plVar37);
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      cVar7 = (**(code **)(lVar40 + 0xb8))(plVar26,uVar25,uVar8,local_a1c8);
      if (cVar7 == '\0') {
        return 0;
      }
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar8 = (**(code **)(*plVar37 + 0x48))(plVar37);
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      (**(code **)(lVar40 + 200))(plVar26,uVar25,uVar8,local_a1c8);
      return 1;
    }
    goto LAB_14013a784;
  case 0x83:
    local_a0d0 = 0;
    iVar14 = sscanf(param_3,"%d",&local_a0d0);
    if (((iVar14 == 1) && (plVar26 = (longlong *)CurrentInstanceGet(), plVar26 != (longlong *)0x0)) &&
       (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x21), plVar26 != (longlong *)0x0)) {
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar8 = (**(code **)(*plVar37 + 0x48))(plVar37);
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      uVar41 = (**(code **)(lVar40 + 0xc0))(plVar26,uVar25,uVar8,local_a0d0);
      return uVar41;
    }
    goto LAB_14013a784;
  case 0x84:
    lVar40 = (**(code **)(param_4[2] + 0x160))();
    if (lVar40 == 0) {
      return 0;
    }
    cVar7 = FUN_140119570(lVar40);
    if (cVar7 != '\0') {
      return 0;
    }
    plVar26 = (longlong *)CurrentInstanceGet();
    if ((plVar26 != (longlong *)0x0) && (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x24), plVar26 != (longlong *)0x0)) {
      cVar7 = FUN_1401a4030(param_4,950000);
      if (cVar7 != '\0') {
        plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
        uVar8 = (**(code **)(*plVar37 + 0x48))(plVar37);
        uVar41 = (**(code **)(*plVar26 + 0xd8))(plVar26,uVar8);
        return uVar41;
      }
      FUN_140179040(param_4,950000);
      return 0;
    }
    goto LAB_14013a784;
  case 0x85:
    plVar26 = (longlong *)CurrentInstanceGet();
    if ((plVar26 != (longlong *)0x0) && (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x24), plVar26 != (longlong *)0x0)) {
      uVar41 = (**(code **)(*plVar26 + 0xd0))(plVar26);
      return uVar41;
    }
    goto LAB_14013a784;
  case 0x86:
    local_a06c = 0;
    iVar14 = sscanf(param_3,"%d",&local_a06c);
    if (((iVar14 == 1) && (plVar26 = (longlong *)CurrentInstanceGet(), plVar26 != (longlong *)0x0)) &&
       (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x24), plVar26 != (longlong *)0x0)) {
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar8 = (**(code **)(*plVar37 + 0x48))(plVar37);
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      uVar41 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,uVar8,local_a06c);
      return uVar41;
    }
    goto LAB_14013a784;
  case 0x87:
    local_a1c0 = 0;
    iVar14 = sscanf(param_3,"%d",&local_a1c0);
    if (((iVar14 == 1) && (plVar26 = (longlong *)CurrentInstanceGet(), plVar26 != (longlong *)0x0)) &&
       (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x24), plVar26 != (longlong *)0x0)) {
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar8 = (**(code **)(*plVar37 + 0x48))(plVar37);
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      cVar7 = (**(code **)(lVar40 + 0xb8))(plVar26,uVar25,uVar8,local_a1c0);
      if (cVar7 == '\0') {
        return 0;
      }
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar8 = (**(code **)(*plVar37 + 0x48))(plVar37);
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      (**(code **)(lVar40 + 200))(plVar26,uVar25,uVar8,local_a1c0);
      return 1;
    }
    goto LAB_14013a784;
  case 0x88:
    local_a064 = 0;
    iVar14 = sscanf(param_3,"%d",&local_a064);
    if (((iVar14 == 1) && (plVar26 = (longlong *)CurrentInstanceGet(), plVar26 != (longlong *)0x0)) &&
       (plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x24), plVar26 != (longlong *)0x0)) {
      plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar8 = (**(code **)(*plVar37 + 0x48))(plVar37);
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      uVar41 = (**(code **)(lVar40 + 0xc0))(plVar26,uVar25,uVar8,local_a064);
      return uVar41;
    }
    goto LAB_14013a784;
  case 0x89:
    plVar26 = (longlong *)CurrentInstanceGet();
    uVar41 = 0;
    if (plVar26 != (longlong *)0x0) {
      local_a1b8 = 0xffffffff;
      local_a378 = 0xffffffff;
      local_a35c = 0;
      local_a418 = (char *)&local_a35c;
      iVar14 = sscanf(param_3,"%d, %d, %d",&local_a1b8,&local_a378);
      if (iVar14 == 3) {
        if (local_a378 < 4) {
          if (local_a35c < 5) {
            if (local_a1b8 == 0) {
              if (local_a35c == 4) {
                local_a35c = 8;
              }
              plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x21);
              if (plVar26 != (longlong *)0x0) {
                if (local_a35c != 0) {
                  lVar40 = *plVar26;
                  uVar25 = (**(code **)(*param_4 + 8))(param_4);
                  uVar41 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,(undefined1)local_a378,local_a35c);
                  return uVar41;
                }
                lVar40 = *plVar26;
                uVar25 = (**(code **)(*param_4 + 8))(param_4);
                cVar7 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,(undefined1)local_a378,1);
                if (cVar7 == '\0') {
                  lVar40 = *plVar26;
                  uVar25 = (**(code **)(*param_4 + 8))(param_4);
                  cVar7 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,(undefined1)local_a378,2);
                  if (cVar7 == '\0') {
                    lVar40 = *plVar26;
                    uVar25 = (**(code **)(*param_4 + 8))(param_4);
                    cVar7 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,(undefined1)local_a378,3);
                    if (cVar7 == '\0') {
                      lVar40 = *plVar26;
                      uVar25 = (**(code **)(*param_4 + 8))(param_4);
                      cVar7 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,(undefined1)local_a378,8);
                      if (cVar7 == '\0') {
                        return 1;
                      }
                    }
                  }
                }
                return 0;
              }
            }
            else if (local_a1b8 == 1) {
              if (local_a35c == 4) {
                local_a35c = 8;
              }
              plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x24);
              if (plVar26 != (longlong *)0x0) {
                if (local_a35c != 0) {
                  lVar40 = *plVar26;
                  uVar25 = (**(code **)(*param_4 + 8))(param_4);
                  uVar41 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,(undefined1)local_a378,local_a35c);
                  return uVar41;
                }
                lVar40 = *plVar26;
                uVar25 = (**(code **)(*param_4 + 8))(param_4);
                cVar7 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,(undefined1)local_a378,1);
                if (cVar7 == '\0') {
                  lVar40 = *plVar26;
                  uVar25 = (**(code **)(*param_4 + 8))(param_4);
                  cVar7 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,(undefined1)local_a378,2);
                  if (cVar7 == '\0') {
                    lVar40 = *plVar26;
                    uVar25 = (**(code **)(*param_4 + 8))(param_4);
                    cVar7 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,(undefined1)local_a378,3);
                    if (cVar7 == '\0') {
                      lVar40 = *plVar26;
                      uVar25 = (**(code **)(*param_4 + 8))(param_4);
                      cVar7 = (**(code **)(lVar40 + 0xb0))(plVar26,uVar25,(undefined1)local_a378,8);
                      if (cVar7 == '\0') {
                        return 1;
                      }
                    }
                  }
                }
                return 0;
              }
            }
            else {
              if (local_a1b8 != 2) {
                uVar12 = FUN_1400bb7e0(param_2);
                log_InlineLogERROR("GameAction:ACTION_PK_RANK_CHECK: action(%u) wrong type:%d",(ulonglong)uVar12,(ulonglong)local_a1b8);
                return 0;
              }
              plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,0x19);
              if (plVar26 != (longlong *)0x0) {
                if (local_a35c != 0) {
                  lVar40 = *plVar26;
                  uVar25 = (**(code **)(*param_4 + 8))(param_4);
                  uVar41 = (**(code **)(lVar40 + 0x48))(plVar26,uVar25,local_a378,local_a35c);
                  return uVar41;
                }
                lVar40 = *plVar26;
                uVar25 = (**(code **)(*param_4 + 8))(param_4);
                cVar7 = (**(code **)(lVar40 + 0x48))(plVar26,uVar25,local_a378,1);
                if (cVar7 == '\0') {
                  lVar40 = *plVar26;
                  uVar25 = (**(code **)(*param_4 + 8))(param_4);
                  cVar7 = (**(code **)(lVar40 + 0x48))(plVar26,uVar25,local_a378,2);
                  if (cVar7 == '\0') {
                    lVar40 = *plVar26;
                    uVar25 = (**(code **)(*param_4 + 8))(param_4);
                    cVar7 = (**(code **)(lVar40 + 0x48))(plVar26,uVar25,local_a378,3);
                    if (cVar7 == '\0') {
                      lVar40 = *plVar26;
                      uVar25 = (**(code **)(*param_4 + 8))(param_4);
                      cVar7 = (**(code **)(lVar40 + 0x48))(plVar26,uVar25,local_a378,4);
                      if (cVar7 == '\0') {
                        return 1;
                      }
                    }
                  }
                }
                return 0;
              }
            }
            uVar41 = 0;
          }
          else {
            uVar12 = FUN_1400bb7e0(param_2);
            log_InlineLogERROR("GameAction:ACTION_PK_RANK_CHECK: action(%u) wrong rank:%d",(ulonglong)uVar12,(ulonglong)local_a35c);
            uVar41 = 0;
          }
        }
        else {
          uVar12 = FUN_1400bb7e0(param_2);
          log_InlineLogERROR("GameAction:ACTION_PK_RANK_CHECK: action(%u) wrong group:%d",(ulonglong)uVar12,(ulonglong)local_a378);
          uVar41 = 0;
        }
      }
      else {
        uVar12 = FUN_1400bb7e0(param_2);
        log_InlineLogERROR("GameAction:ACTION_PK_RANK_CHECK: action(%u) wrong param count",(ulonglong)uVar12);
        uVar41 = 0;
      }
    }
    break;
  case 0x8a:
    uVar21 = strtoul(param_3,(char **)0x0,10);
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    plVar26 = (longlong *)CurrentInstanceGet();
    puVar30 = (undefined8 *)(**(code **)(*plVar26 + 0x20))(plVar26,10);
    if (puVar30 == (undefined8 *)0x0) {
      local_a418 = (char *)CONCAT44(local_a418._4_4_,0x2b55);
      log_InlineLogERROR(&DAT_1406d9c10,"IF_NOT","pLotteryProvider","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
      uVar41 = 0;
    }
    else {
      puVar4 = (undefined8 *)*puVar30;
      uVar23 = (**(code **)(*param_4 + 8))(param_4);
      local_a410 = (uint *)CONCAT71(local_a410._1_7_,1);
      local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
      uVar41 = (*(code *)*puVar4)(puVar30,uVar23,uVar21,uVar25);
    }
    break;
  case 0x8b:
    local_a1bc = 0;
    local_a188 = 0;
    local_a18c = 0;
    local_a074 = 0;
    local_a0cc = 0;
    local_a190 = 0;
    local_a400 = &local_a190;
    local_a408 = (char *)&local_a0cc;
    local_a410 = &local_a074;
    local_a418 = (char *)&local_a18c;
    iVar14 = sscanf(param_3,"%u %d %d %d %d %d",&local_a1bc,&local_a188);
    if (iVar14 < 1) {
      uVar41 = FUN_1401c7e10(param_4,0);
    }
    else {
      if (local_a190 != 0) {
        uVar39 = (**(code **)(param_4[2] + 0x160))();
        cVar7 = FUN_140119510(uVar39);
        if (cVar7 != '\0') {
          return 0;
        }
      }
      if (iVar14 == 1) {
        uVar41 = FUN_1401c7e10(param_4,local_a1bc);
      }
      else if ((iVar14 < 5) || (6 < iVar14)) {
        uVar12 = FUN_1400bb7e0(param_2);
        log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2b83);
        uVar41 = 0;
      }
      else {
        local_a410 = (uint *)CONCAT44(local_a410._4_4_,local_a0cc);
        local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a074);
        uVar41 = FUN_1401c7c60(param_4,local_a1bc,local_a188,local_a18c);
      }
    }
    break;
  case 0x8c:
    local_a2bc = 0;
    iVar14 = sscanf(param_3,"%d",&local_a2bc);
    if (0 < iVar14) {
      if (0 < local_a2bc) {
        plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
        iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
        if (iVar14 == 0) {
          iVar14 = (**(code **)(param_4[2] + 0x80))(param_4 + 2);
          uVar12 = (uint)(iVar14 * local_a2bc) / 100;
          iVar14 = (**(code **)(param_4[2] + 0x78))(param_4 + 2);
          if (iVar14 < (int)uVar12) {
            uVar12 = (**(code **)(param_4[2] + 0x78))(param_4 + 2);
          }
          FUN_140177000(param_4,uVar12);
        }
        else if (iVar14 == 1) {
          iVar14 = (**(code **)(param_4[2] + 0x78))(param_4 + 2);
          uVar12 = (uint)(iVar14 * local_a2bc) / 100;
          iVar14 = (**(code **)(param_4[2] + 0x78))(param_4 + 2);
          if (iVar14 < (int)uVar12) {
            uVar12 = (**(code **)(param_4[2] + 0x78))(param_4 + 2);
          }
          FUN_140177000(param_4,uVar12);
        }
        return 1;
      }
      return 0;
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2b93);
    goto LAB_14013a784;
  case 0x8d:
    local_9ff0 = (longlong *)0x0;
    if (param_5 == (longlong *)0x0) {
      local_a418 = (char *)CONCAT44(local_a418._4_4_,0x2bb4);
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","pRole","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
      uVar41 = 0;
    }
    else {
      cVar7 = (**(code **)(*param_5 + 0x298))(param_5,0x1040,&local_9ff0);
      if (cVar7 == '\0') {
        local_a418 = (char *)CONCAT44(local_a418._4_4_,0x2bb5);
        log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","pRole->QueryObj(OBJ_NPC, IPP_OF(pNpc))",
                           "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        uVar41 = 0;
      }
      else {
        uVar25 = (**(code **)(*local_9ff0 + 8))();
        uVar23 = (**(code **)(*(longlong *)local_9ff0[0xc] + 0x10))((longlong *)local_9ff0[0xc],4);
        FUN_140362560(local_52a8);
        plVar26 = local_a040;
        uVar11 = (**(code **)(local_a040[2] + 0x50))(local_a040 + 2);
        uVar19 = (**(code **)(plVar26[2] + 0x48))(plVar26 + 2);
        uVar17 = (**(code **)(plVar26[2] + 0x40))(plVar26 + 2);
        uVar18 = (**(code **)(*plVar26 + 8))(plVar26);
        local_a400 = (int *)CONCAT44(local_a400._4_4_,uVar25);
        local_a408 = (char *)CONCAT44(local_a408._4_4_,uVar23);
        local_a410 = (uint *)CONCAT62(local_a410._2_6_,0xa0);
        local_a418 = (char *)CONCAT62(local_a418._2_6_,uVar11);
        iVar14 = FUN_140362620(local_52a8,uVar18,uVar17,uVar19);
        if (iVar14 == 0) {
          local_a418 = (char *)CONCAT44(local_a418._4_4_,0x2bbb);
          log_InlineLogERROR(&DAT_1406d9c10,"IF_OK",
                             "msg.Create(pUser->GetID(), pUser->GetPosX(), pUser->GetPosY(), pUser->GetDir(), actionLinkDialog, (DWORD)nType, idNpc)",
                             "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
        }
        else {
          (**(code **)(plVar26[2] + 0x350))(plVar26 + 2,local_52a8);
        }
        FUN_1403625e0(local_52a8);
        uVar41 = 1;
      }
    }
    break;
  case 0x8e:
    plVar26 = (longlong *)FUN_14016e430(param_4);
    uVar41 = 0;
    if (plVar26 != (longlong *)0x0) {
      local_a368 = plVar26;
      iVar14 = (**(code **)(param_4[2] + 0x60))(param_4 + 2);
      if ((iVar14 == 0x186a4) || (iVar14 = (**(code **)(param_4[2] + 0x60))(param_4 + 2), iVar14 == 0x186a7)) {
        plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
        iVar14 = (**(code **)(*plVar37 + 0x48))(plVar37);
        if (iVar14 != 0) {
          if (iVar14 != 1) {
            return 0;
          }
          iVar14 = (**(code **)(*plVar26 + 8))(plVar26);
          iVar24 = (**(code **)(*param_4 + 0x48))(param_4);
          if (iVar24 != iVar14) {
            return 0;
          }
        }
        local_a344 = 0x761;
        local_a1d4 = 0x3f;
        local_a20c = 0x55;
        local_a418 = (char *)&local_a20c;
        iVar14 = sscanf(param_3,"%u %d %d",&local_a344,&local_a1d4);
        if (iVar14 == 3) {
          cVar7 = FUN_1401a4030(param_4,local_a344);
          if (cVar7 == '\0') {
            FUN_140179040(param_4,local_a344);
            uVar41 = 0;
          }
          else {
            cVar7 = FUN_1401a4030(plVar26,local_a344);
            if (cVar7 == '\0') {
              FUN_140179040(plVar26,local_a344);
              uVar41 = 0;
            }
            else {
              local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
              iVar14 = FUN_1401c55b0(param_4,local_a344,local_a1d4,local_a20c);
              local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
              iVar24 = FUN_1401c55b0(plVar26,local_a344,local_a1d4,local_a20c);
              if ((iVar14 == 0) && (iVar24 == 0)) {
                FUN_140362560(local_9728);
                uVar11 = (**(code **)(param_4[2] + 0x50))(param_4 + 2);
                uVar25 = (**(code **)(param_4[2] + 0x48))(param_4 + 2);
                uVar23 = (**(code **)(param_4[2] + 0x40))(param_4 + 2);
                uVar19 = (**(code **)(*param_4 + 8))(param_4);
                local_a400 = (int *)((ulonglong)local_a400._4_4_ << 0x20);
                local_a408 = (char *)CONCAT44(local_a408._4_4_,1);
                local_a410 = (uint *)CONCAT62(local_a410._2_6_,1000);
                local_a418 = (char *)CONCAT62(local_a418._2_6_,uVar11);
                iVar14 = FUN_140362620(local_9728,uVar19,uVar23,uVar25);
                if (iVar14 != 0) {
                  (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_9728);
                }
                plVar26 = local_a368;
                uVar11 = (**(code **)(local_a368[2] + 0x50))(local_a368 + 2);
                uVar25 = (**(code **)(plVar26[2] + 0x48))(plVar26 + 2);
                uVar23 = (**(code **)(plVar26[2] + 0x40))(plVar26 + 2);
                uVar19 = (**(code **)(*plVar26 + 8))(plVar26);
                local_a400 = (int *)((ulonglong)local_a400 & 0xffffffff00000000);
                local_a408 = (char *)CONCAT44(local_a408._4_4_,1);
                local_a410 = (uint *)CONCAT62(local_a410._2_6_,1000);
                local_a418 = (char *)CONCAT62(local_a418._2_6_,uVar11);
                iVar14 = FUN_140362620(local_9728,uVar19,uVar23,uVar25);
                if (iVar14 != 0) {
                  (**(code **)(plVar26[2] + 0x350))(plVar26 + 2,local_9728);
                }
                FUN_1403625e0(local_9728);
                uVar41 = 1;
              }
              else {
                uVar41 = 0;
              }
            }
          }
        }
        else {
          uVar12 = FUN_1400bb7e0(param_2);
          log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2be3);
          uVar41 = 0;
        }
      }
      else {
        uVar41 = 0;
      }
    }
    break;
  case 0x8f:
    uVar41 = FUN_14016e3f0(param_4);
    if ((char)uVar41 != '\0') {
      plVar26 = (longlong *)FUN_14016e430(param_4);
      uVar41 = 0;
      if (plVar26 != (longlong *)0x0) {
        local_a1fc = 0x3ea;
        local_a1ac = 0x1ad;
        local_a204 = 0x17a;
        local_a418 = (char *)&local_a204;
        local_a368 = plVar26;
        iVar14 = sscanf(param_3,"%u %d %d",&local_a1fc,&local_a1ac);
        if (iVar14 == 3) {
          local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
          iVar14 = FUN_1401c55b0(param_4,local_a1fc,local_a1ac,local_a204);
          local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
          iVar24 = FUN_1401c55b0(plVar26,local_a1fc,local_a1ac,local_a204);
          if ((iVar14 == 0) && (iVar24 == 0)) {
            FUN_140362560(local_92d8);
            uVar11 = (**(code **)(param_4[2] + 0x50))(param_4 + 2);
            uVar25 = (**(code **)(param_4[2] + 0x48))(param_4 + 2);
            uVar23 = (**(code **)(param_4[2] + 0x40))(param_4 + 2);
            uVar19 = (**(code **)(*param_4 + 8))(param_4);
            local_a400 = (int *)((ulonglong)local_a400._4_4_ << 0x20);
            local_a408 = (char *)((ulonglong)local_a408._4_4_ << 0x20);
            local_a410 = (uint *)CONCAT62(local_a410._2_6_,1000);
            local_a418 = (char *)CONCAT62(local_a418._2_6_,uVar11);
            iVar14 = FUN_140362620(local_92d8,uVar19,uVar23,uVar25);
            if (iVar14 != 0) {
              (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_92d8);
            }
            plVar26 = local_a368;
            uVar11 = (**(code **)(local_a368[2] + 0x50))(local_a368 + 2);
            uVar25 = (**(code **)(plVar26[2] + 0x48))(plVar26 + 2);
            uVar23 = (**(code **)(plVar26[2] + 0x40))(plVar26 + 2);
            uVar19 = (**(code **)(*plVar26 + 8))(plVar26);
            local_a400 = (int *)((ulonglong)local_a400 & 0xffffffff00000000);
            local_a408 = (char *)((ulonglong)local_a408 & 0xffffffff00000000);
            local_a410 = (uint *)CONCAT62(local_a410._2_6_,1000);
            local_a418 = (char *)CONCAT62(local_a418._2_6_,uVar11);
            iVar14 = FUN_140362620(local_92d8,uVar19,uVar23,uVar25);
            if (iVar14 != 0) {
              (**(code **)(plVar26[2] + 0x350))(plVar26 + 2,local_92d8);
            }
            FUN_1403625e0(local_92d8);
            uVar41 = 1;
          }
          else {
            uVar41 = 0;
          }
        }
        else {
          uVar12 = FUN_1400bb7e0(param_2);
          log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2c1c);
          uVar41 = 0;
        }
      }
    }
    break;
  case 0x90:
    local_a230 = 0;
    local_a248 = 0;
    local_a250 = 0;
    local_a240 = 0;
    local_a238 = 0;
    local_a254 = 0;
    local_a400 = &local_a254;
    local_a408 = (char *)&local_a238;
    local_a410 = (uint *)&local_a240;
    local_a418 = (char *)&local_a250;
    iVar14 = sscanf(param_3,"%d %d %d %d %d %d",&local_a230,&local_a248);
    if (5 < iVar14) {
      if (((((-1 < local_a230) && (-1 < local_a248)) && (-1 < local_a250)) && ((-1 < local_a240 && (-1 < local_a254)))) && (-1 < local_a238)) {
        FUN_140035210(local_9b78);
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        cVar7 = FUN_140118860(param_1,uVar25,local_9b78);
        uVar41 = local_9b60;
        if (cVar7 != '\0') {
          if (local_9b58 < local_9b60) {
            _invalid_parameter_noinfo();
          }
          lVar40 = local_9b78[0];
          local_a388 = local_9b78[0];
          uStack_a380 = uVar41;
          plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
          while( true ) {
            uVar28 = local_9b58;
            if (local_9b58 < local_9b60) {
              _invalid_parameter_noinfo();
            }
            if ((lVar40 == 0) || (lVar40 != local_9b78[0])) {
              _invalid_parameter_noinfo();
            }
            if (uVar28 <= uVar41) break;
            lVar40 = *param_4;
            puVar31 = (undefined4 *)FUN_140033360(&local_a388);
            plVar26 = (longlong *)(**(code **)(lVar40 + 0x28))(param_4,*puVar31);
            if ((plVar26 != (longlong *)0x0) && (cVar7 = (**(code **)(plVar26[2] + 0x220))(), cVar7 != '\0')) {
              plVar37 = (longlong *)FUN_1401181a0();
              lVar40 = *plVar37;
              uVar23 = (**(code **)(*plVar26 + 8))(plVar26);
              local_a3e8 = (undefined4 *)((ulonglong)local_a3e8 & 0xffffffff00000000);
              local_a3f0 = (undefined4 *)CONCAT62(local_a3f0._2_6_,1);
              local_a3f8 = (undefined4 *)CONCAT71(local_a3f8._1_7_,(undefined1)local_a254);
              local_a400 = (int *)CONCAT44(local_a400._4_4_,local_a250);
              local_a408 = (char *)CONCAT44(local_a408._4_4_,local_a248);
              local_a410 = (uint *)CONCAT44(local_a410._4_4_,local_a240);
              local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a238);
              (**(code **)(lVar40 + 8))(plVar37,uVar23,uVar25,local_a230);
            }
            FUN_1400333a0(&local_a388);
            lVar40 = local_a388;
            uVar41 = uStack_a380;
          }
          FUN_1400344f0(local_9b78);
          return 1;
        }
        FUN_1400344f0(local_9b78);
        return 0;
      }
      return 0;
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2c43);
    goto LAB_14013a784;
  case 0x91:
    local_9f38 = 0;
    memset(local_9f34,0,0x38);
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
    local_a3b8 = local_9f00;
    local_a3c0 = local_9f04;
    local_a3c8 = local_9f08;
    local_a3d0 = local_9f0c;
    local_a3d8 = local_9f10;
    local_a3e0 = (int *)local_9f14;
    local_a3e8 = (undefined4 *)local_9f18;
    local_a3f0 = (undefined4 *)local_9f1c;
    local_a3f8 = (undefined4 *)local_9f20;
    local_a400 = (int *)local_9f24;
    local_a408 = local_9f28;
    local_a410 = (uint *)local_9f2c;
    local_a418 = local_9f30;
    iVar24 = sscanf(param_3,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&local_9f38,local_9f34);
    lVar40 = (longlong)iVar24;
    if (iVar24 - 1U < 0xf) {
      FUN_140035210(local_9fe8);
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      cVar7 = FUN_140118860(param_1,uVar25,local_9fe8);
      uVar41 = local_9fd0;
      if (cVar7 == '\0') {
        FUN_1400344f0(local_9fe8);
        return 0;
      }
      if (iVar14 == 0) {
        if (local_9fc8 < local_9fd0) {
          _invalid_parameter_noinfo();
        }
        local_a388 = local_9fe8[0];
        uStack_a380 = uVar41;
        while( true ) {
          uVar28 = local_9fc8;
          uVar41 = uStack_a380;
          lVar34 = local_a388;
          if (local_9fc8 < local_9fd0) {
            _invalid_parameter_noinfo();
          }
          if ((lVar34 == 0) || (lVar34 != local_9fe8[0])) {
            _invalid_parameter_noinfo();
          }
          if (uVar28 <= uVar41) break;
          lVar34 = *param_4;
          puVar31 = (undefined4 *)FUN_140033360(&local_a388);
          lVar34 = (**(code **)(lVar34 + 0x28))(param_4,*puVar31);
          if (lVar34 != 0) {
            plVar26 = (longlong *)(lVar34 + 0x10);
            cVar7 = (**(code **)(*plVar26 + 0x220))(plVar26);
            if ((cVar7 != '\0') && (lVar34 = 0, 0 < lVar40)) {
              do {
                cVar7 = (**(code **)(*plVar26 + 0x2d8))(plVar26,*(undefined4 *)(local_9f34 + lVar34 * 4 + -4));
                if (cVar7 != '\0') {
                  FUN_1400344f0(local_9fe8);
                  return 1;
                }
                lVar34 = lVar34 + 1;
              } while (lVar34 < lVar40);
            }
          }
          FUN_1400333a0(&local_a388);
        }
        FUN_1400344f0(local_9fe8);
        return 0;
      }
      if (iVar14 == 1) {
        if (local_9fc8 < local_9fd0) {
          _invalid_parameter_noinfo();
        }
        local_a388 = local_9fe8[0];
        uStack_a380 = uVar41;
        while( true ) {
          uVar28 = local_9fc8;
          uVar41 = uStack_a380;
          lVar34 = local_a388;
          if (local_9fc8 < local_9fd0) {
            _invalid_parameter_noinfo();
          }
          if ((lVar34 == 0) || (lVar34 != local_9fe8[0])) {
            _invalid_parameter_noinfo();
          }
          if (uVar28 <= uVar41) break;
          lVar34 = *param_4;
          puVar31 = (undefined4 *)FUN_140033360(&local_a388);
          local_a368 = (longlong *)(**(code **)(lVar34 + 0x28))(param_4,*puVar31);
          if (local_a368 != (longlong *)0x0) {
            plVar26 = local_a368 + 2;
            cVar7 = (**(code **)(*plVar26 + 0x220))(plVar26);
            plVar37 = local_a368;
            if ((cVar7 != '\0') && (lVar34 = 0, 0 < lVar40)) {
              do {
                cVar7 = (**(code **)(*plVar26 + 0x2d8))(plVar26,*(undefined4 *)(local_9f34 + lVar34 * 4 + -4));
                if (cVar7 != '\0') {
                  plVar32 = (longlong *)FUN_1401181a0();
                  lVar5 = *plVar32;
                  uVar25 = (**(code **)(*plVar37 + 8))(plVar37);
                  (**(code **)(lVar5 + 0x10))(plVar32,uVar25,*(undefined4 *)(local_9f34 + lVar34 * 4 + -4));
                }
                lVar34 = lVar34 + 1;
                param_4 = local_a040;
              } while (lVar34 < lVar40);
            }
          }
          FUN_1400333a0(&local_a388);
        }
        FUN_1400344f0(local_9fe8);
        return 1;
      }
      FUN_1400344f0(local_9fe8);
      return 0;
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2c6c);
    goto LAB_14013a784;
  case 0x92:
    uVar41 = FUN_1401620f0(param_4,1);
    break;
  case 0x93:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    local_a178 = 0;
    sscanf(param_3,"%d",&local_a178);
    lVar40 = (longlong)local_a178;
    uVar23 = (**(code **)(*param_4 + 8))(param_4);
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_140087880(uVar39);
    uVar41 = FUN_14024aa10(uVar39,uVar23,uVar25,lVar40);
    break;
  case 0x94:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    local_a170 = 0;
    local_a168 = 0;
    iVar14 = sscanf(param_3,"%u %d",&local_a168,&local_a170);
    if (0 < iVar14) {
      lVar40 = (longlong)local_a170;
      uVar23 = (**(code **)(*param_4 + 8))(param_4);
      uVar39 = FUN_140008520((int)param_1[9]);
      uVar39 = FUN_140087880(uVar39);
      uVar41 = FUN_14024aa10(uVar39,uVar23,uVar25,lVar40);
      if ((char)uVar41 != '\0') {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087880(uVar39);
        FUN_140247ba0(uVar39,uVar25,local_a168);
        return 1;
      }
      return uVar41;
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2d9a);
    goto LAB_14013a784;
  case 0x95:
    local_a148 = 0;
    iVar14 = sscanf(param_3,"%d",&local_a148);
    if (iVar14 == 1) {
      uVar39 = FUN_140008520((int)param_1[9]);
      uVar39 = FUN_140117ed0(uVar39);
      uVar41 = FUN_140158380(uVar39,param_4,(undefined1)local_a148);
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070f620,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2ede);
      uVar41 = 0;
    }
    break;
  case 0x96:
    local_a2e4 = 0;
    local_a30c = 0;
    local_a418 = (char *)&local_a30c;
    iVar14 = sscanf(param_3,"%d %s %d",&local_a2e4,local_1948);
    if (iVar14 == 3) {
      lVar40 = 2;
      bVar45 = true;
      pcVar33 = local_1948;
      pcVar42 = "<";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar39 = (**(code **)(param_4[2] + 0x1d8))();
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar35 = FUN_140008520((int)param_1[9]);
        uVar35 = FUN_140117ed0(uVar35);
        local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
        uVar12 = FUN_140152480(uVar35,uVar25,uVar39,(undefined1)local_a2e4);
        return (ulonglong)((int)(uVar12 & 0xff) < (int)local_a30c);
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_1948;
      pcVar42 = "==";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar39 = (**(code **)(param_4[2] + 0x1d8))();
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar35 = FUN_140008520((int)param_1[9]);
        uVar35 = FUN_140117ed0(uVar35);
        local_a418 = (char *)((ulonglong)local_a418 & 0xffffffffffffff00);
        uVar12 = FUN_140152480(uVar35,uVar25,uVar39,(undefined1)local_a2e4);
        return (ulonglong)((uVar12 & 0xff) == local_a30c);
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_1948;
      pcVar42 = "+=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140117ed0(uVar39);
        local_a418 = (char *)CONCAT71(local_a418._1_7_,1);
        uVar41 = FUN_140152780(uVar39,uVar25,(undefined1)local_a2e4,(undefined1)local_a30c);
        return uVar41;
      }
      lVar40 = 4;
      bVar45 = false;
      pcVar33 = local_1948;
      pcVar42 = "set";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140117ed0(uVar39);
        local_a410 = (uint *)CONCAT71(local_a410._1_7_,1);
        local_a418 = (char *)CONCAT71(local_a418._1_7_,1);
        uVar41 = FUN_140152550(uVar39,uVar25,(undefined1)local_a2e4,(undefined1)local_a30c);
        return uVar41;
      }
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070f620,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2efd);
    uVar41 = 0;
    break;
  case 0x97:
    local_a2ec = 0;
    local_a304 = 0;
    local_a418 = (char *)&local_a304;
    iVar14 = sscanf(param_3,"%d %s %d",&local_a2ec,local_1e48);
    if (iVar14 == 3) {
      lVar40 = 2;
      bVar45 = true;
      pcVar33 = local_1e48;
      pcVar42 = "<";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140117ed0(uVar39);
        iVar14 = FUN_140157d90(uVar39,uVar25,(undefined1)local_a2ec);
        return (ulonglong)(iVar14 < local_a304);
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_1e48;
      pcVar42 = "==";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140117ed0(uVar39);
        iVar14 = FUN_140157d90(uVar39,uVar25,(undefined1)local_a2ec);
        return (ulonglong)(iVar14 == local_a304);
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_1e48;
      pcVar42 = "+=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140117ed0(uVar39);
        local_a418 = (char *)CONCAT71(local_a418._1_7_,1);
        uVar41 = FUN_140157ea0(uVar39,uVar25,(undefined1)local_a2ec,local_a304);
        return uVar41;
      }
      lVar40 = 4;
      bVar45 = false;
      pcVar33 = local_1e48;
      pcVar42 = "set";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140117ed0(uVar39);
        local_a418 = (char *)CONCAT71(local_a418._1_7_,1);
        uVar41 = FUN_140157c60(uVar39,uVar25,(undefined1)local_a2ec,local_a304);
        return uVar41;
      }
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070f620,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2f1c);
    uVar41 = 0;
    break;
  case 0x98:
    local_a1f8 = 0;
    iVar14 = sscanf(param_3,"NowStatus %s %u",local_548,&local_a1f8);
    if (iVar14 == 2) {
      lVar40 = 3;
      bVar45 = true;
      pcVar33 = local_548;
      pcVar42 = "==";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar12 = (**(code **)(param_4[2] + 0x1d0))();
        return (ulonglong)((uVar12 & 0xff) == local_a1f8);
      }
      lVar40 = 4;
      bVar45 = false;
      pcVar33 = local_548;
      pcVar42 = "set";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140117ed0(uVar39);
        uVar41 = FUN_140153930(uVar39,param_4,(undefined1)local_a1f8);
        return uVar41;
      }
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070f620,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2f32);
    uVar41 = 0;
    break;
  case 0x99:
    iVar14 = sscanf(param_3,"%s",local_1048);
    bVar45 = iVar14 == 1;
    if (iVar14 < 1) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2f3b);
    }
    else {
      lVar40 = 4;
      pcVar33 = local_1048;
      pcVar42 = "chk";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
        uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
        uVar41 = FUN_140171090(param_4,uVar25);
        return uVar41;
      }
      lVar40 = 4;
      bVar45 = false;
      pcVar33 = local_1048;
      pcVar42 = "add";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
        uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
        FUN_140170e90(param_4,uVar25);
        return 1;
      }
      lVar40 = 4;
      bVar45 = false;
      pcVar33 = local_1048;
      pcVar42 = "clr";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
        uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
        uVar39 = FUN_140087d90();
        FUN_140113380(uVar39,param_4,uVar25);
        return 1;
      }
    }
    goto LAB_14013a784;
  case 0x9a:
    local_a128 = 0;
    local_a130 = 0;
    local_a138 = 0;
    local_a140 = 0;
    local_a410 = &local_a140;
    local_a418 = (char *)&local_a138;
    iVar14 = sscanf(param_3,"%d %d %d %d",&local_a128,&local_a130);
    if (iVar14 == 4) {
      plVar26 = (longlong *)FUN_1401181a0();
      lVar40 = *plVar26;
      uVar25 = (**(code **)(*param_4 + 8))(param_4);
      local_a3e8 = (undefined4 *)((ulonglong)local_a3e8._4_4_ << 0x20);
      local_a3f0 = (undefined4 *)((ulonglong)local_a3f0 & 0xffffffffffff0000);
      local_a3f8 = (undefined4 *)CONCAT71(local_a3f8._1_7_,(undefined1)local_a140);
      local_a400 = (int *)((ulonglong)local_a400._4_4_ << 0x20);
      local_a408 = (char *)((ulonglong)local_a408._4_4_ << 0x20);
      local_a410 = (uint *)((ulonglong)local_a410 & 0xffffffff00000000);
      local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a138);
      uVar41 = (**(code **)(lVar40 + 8))(plVar26,uVar25,local_a128,local_a130);
    }
    else {
      uVar41 = 0;
    }
    break;
  case 0x9b:
    plVar26 = (longlong *)FUN_1401181a0();
    lVar40 = *plVar26;
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    (**(code **)(lVar40 + 0x38))(plVar26,uVar25);
    uVar41 = 1;
    break;
  case 0x9c:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
    local_a314 = 0;
    iVar24 = sscanf(param_3,"%u",&local_a314);
    if (iVar24 == 1) {
      iVar24 = FUN_140165970(param_4);
      if (iVar24 == 0) {
        uVar12 = FUN_140165960();
      }
      else {
        uVar12 = tq::DateStamp((longlong)iVar24);
      }
      if (iVar14 == 0) {
        if (local_a314 < 100000000) {
          if ((local_a314 < uVar12) || (uVar12 == 0)) {
            uVar41 = 0;
          }
          else {
            uVar41 = 1;
          }
        }
        else {
          uVar12 = FUN_1400bb7e0(param_2);
          log_InlineLogDBERROR(&DAT_14070de28,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x3049);
          uVar41 = 0;
        }
      }
      else if (local_a314 < 8) {
        uVar13 = tq::DateStamp(0);
        if ((uVar12 < uVar13) && (uVar12 != 0)) {
          iVar14 = tq::DateStampDiff(uVar12,uVar13);
          FUN_140164520(param_4,local_a314,(longlong)iVar14);
          uVar41 = 1;
        }
        else {
          FUN_140164520(param_4,local_a314,0);
          uVar41 = 0;
        }
      }
      else {
        uVar12 = FUN_1400bb7e0(param_2);
        log_InlineLogDBERROR
                  ("table:cq_action/cq_newaction, ACTION %u:param not in range at %s, %d",(ulonglong)uVar12,
                   "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x3059);
        uVar41 = 0;
      }
    }
    else {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070de70,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x3036);
      uVar41 = 0;
    }
    break;
  case 0x9d:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    uVar39 = FUN_140118100();
    uVar41 = FUN_140116360(uVar39,param_4,uVar25);
    break;
  case 0x9e:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    uVar39 = FUN_140118100();
    uVar41 = FUN_1401165c0(uVar39,param_4,uVar25);
    break;
  case 0x9f:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    local_a120 = 0;
    iVar14 = sscanf(param_3,"%d",&local_a120);
    if (iVar14 == 1) {
      uVar39 = FUN_140118100();
      uVar41 = FUN_140116430(uVar39,param_4,uVar25,local_a120);
    }
    else {
      uVar41 = 0;
    }
    break;
  case 0xa0:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    uVar39 = FUN_140118100();
    uVar41 = FUN_1401164f0(uVar39,param_4,uVar25);
    break;
  case 0xa1:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    uVar39 = FUN_140118100();
    uVar41 = FUN_140116690(uVar39,param_4,uVar25);
    break;
  case 0xa2:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
    uVar39 = FUN_140118100();
    uVar41 = FUN_140116760(uVar39,param_4,uVar25);
    break;
  case 0xa3:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
    if (iVar14 < 1) {
      uVar41 = 0;
    }
    else {
      uVar41 = FUN_140168d00(param_4,iVar14);
    }
    break;
  case 0xa4:
    lVar40 = (**(code **)(param_4[2] + 0x160))();
    if (lVar40 == 0) {
      local_a418 = (char *)CONCAT44(local_a418._4_4_,0x2dad);
      log_InlineLogERROR(&DAT_1406d9c10,"IF_OK",&DAT_140705b14,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
    }
    else {
      lVar40 = FUN_1402c3c80(lVar40);
      if (lVar40 != 0) {
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        iVar14 = FUN_1403978f0(lVar40,uVar25);
        if (iVar14 - 1U < 8) {
          local_a418 = (char *)CONCAT44(local_a418._4_4_,param_6);
          FUN_140396140(lVar40,iVar14,param_4,param_5);
          return 1;
        }
      }
    }
    goto LAB_14013a784;
  case 0xa5:
    if ((char)param_4[0x12d] == '\0') {
      local_a160 = 0;
      iVar14 = sscanf(param_3,"%u",&local_a160);
      if (iVar14 < 1) {
        uVar12 = FUN_1400bb7e0(param_2);
        log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2dcc);
        uVar41 = 0;
      }
      else {
        FUN_140362560(local_8e88);
        uVar11 = (**(code **)(param_4[2] + 0x50))(param_4 + 2);
        uVar25 = (**(code **)(param_4[2] + 0x48))(param_4 + 2);
        uVar23 = (**(code **)(param_4[2] + 0x40))(param_4 + 2);
        uVar19 = (**(code **)(*param_4 + 8))(param_4);
        local_a400 = (int *)((ulonglong)local_a400._4_4_ << 0x20);
        local_a408 = (char *)CONCAT44(local_a408._4_4_,local_a160);
        local_a410 = (uint *)CONCAT62(local_a410._2_6_,0xab);
        local_a418 = (char *)CONCAT62(local_a418._2_6_,uVar11);
        iVar14 = FUN_140362620(local_8e88,uVar19,uVar23,uVar25);
        if (iVar14 == 0) {
          FUN_1403625e0(local_8e88);
          uVar41 = 0;
        }
        else {
          cVar7 = (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_8e88);
          if (cVar7 == '\0') {
            FUN_1403625e0(local_8e88);
            uVar41 = 0;
          }
          else {
            *(undefined1 *)(param_4 + 0x12d) = 1;
            plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
            uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
            *(undefined4 *)((longlong)param_4 + 0x96c) = uVar25;
            *(undefined4 *)(param_4 + 0x12e) = 0;
            *(undefined4 *)((longlong)param_4 + 0x974) = 0;
            FUN_1403625e0(local_8e88);
            uVar41 = 1;
          }
        }
      }
    }
    else {
      uVar41 = 0;
    }
    break;
  case 0xa6:
    if ((char)param_4[0x12d] != '\x02') {
      return 0;
    }
    local_a208 = 0;
    iVar14 = sscanf(param_7,"%u",&local_a208);
    if (iVar14 != 1) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2df4);
      return 0;
    }
    uVar39 = FUN_140008520((int)param_1[9]);
    plVar26 = (longlong *)FUN_1400875f0(uVar39);
    plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,local_a208);
    if (plVar26 == (longlong *)0x0) {
      return 0;
    }
    plVar37 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar14 = (**(code **)(*plVar37 + 0x48))(plVar37);
    if (iVar14 == 1) {
      local_9fa8 = 0;
      iVar14 = sscanf(param_3,"%s",local_348);
      if (iVar14 < 1) {
        uVar12 = FUN_1400bb7e0(param_2);
        log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2e08);
        return 0;
      }
      cVar7 = (**(code **)(*plVar26 + 0x298))(plVar26,0x1040,&local_9fa8);
      if (cVar7 != '\0') {
        pcVar33 = (char *)(**(code **)(*(longlong *)(local_9fa8 + 0x10) + 0x18))();
        iVar14 = strncmp(local_348,pcVar33,0x40);
        if (iVar14 == 0) goto LAB_140138b6b;
      }
      *(undefined1 *)(param_4 + 0x12d) = 1;
      FUN_140165a30(param_4);
      uVar41 = 0;
    }
    else {
      if (iVar14 == 2) {
        local_9f88 = (longlong *)0x0;
        local_a150 = 0;
        iVar14 = sscanf(param_3,"%u",&local_a150);
        if (iVar14 < 1) {
          uVar12 = FUN_1400bb7e0(param_2);
          log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2e1c);
          return 0;
        }
        cVar7 = (**(code **)(*plVar26 + 0x298))(plVar26,0x1002,&local_9f88);
        if ((cVar7 == '\0') || (iVar14 = (**(code **)(*local_9f88 + 0x50))(), local_a150 != iVar14)) {
          *(undefined1 *)(param_4 + 0x12d) = 1;
          FUN_140165a30(param_4);
          return 0;
        }
      }
      else {
        if (iVar14 != 3) {
          plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
          uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
          log_InlineLogDBERROR(&DAT_14070f620,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2e3d);
          return 0;
        }
        local_9fb0 = (longlong *)0x0;
        local_a158 = 0;
        iVar14 = sscanf(param_3,"%d",&local_a158);
        if (iVar14 < 1) {
          uVar12 = FUN_1400bb7e0(param_2);
          log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2e30);
          return 0;
        }
        cVar7 = (**(code **)(*plVar26 + 0x298))(plVar26,0x1001,&local_9fb0);
        if ((cVar7 == '\0') || (iVar14 = (**(code **)(*local_9fb0 + 0x50))(), local_a158 != iVar14)) {
          *(undefined1 *)(param_4 + 0x12d) = 1;
          FUN_140165a30(param_4);
          return 0;
        }
      }
LAB_140138b6b:
      *(undefined1 *)(param_4 + 0x12d) = 3;
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
      *(undefined4 *)((longlong)param_4 + 0x974) = uVar25;
      *(undefined4 *)((longlong)param_4 + 0x96c) = 0;
      *(undefined4 *)(param_4 + 0x12e) = local_a208;
      uVar41 = 1;
    }
    break;
  case 0xa7:
    uVar41 = FUN_140165b50(param_4);
    if ((char)uVar41 != '\0') {
      FUN_140165a10(param_4);
      uVar41 = 1;
    }
    break;
  case 0xa8:
    if (((char)param_4[0x12d] == '\x03') || ((int)param_4[0x12e] != 0)) {
      local_a200 = 0;
      local_a418 = (char *)&local_a200;
      iVar14 = sscanf(param_3,"%s %s %d",local_148,local_748);
      if (iVar14 < 3) {
        uVar12 = FUN_1400bb7e0(param_2);
        log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2e5c);
        uVar41 = 0;
      }
      else {
        uVar39 = FUN_140008520((int)param_1[9]);
        plVar26 = (longlong *)FUN_1400875f0(uVar39);
        plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,(int)param_4[0x12e]);
        uVar41 = 0;
        if (plVar26 != (longlong *)0x0) {
          iVar14 = _stricmp(local_748,"==");
          if (iVar14 == 0) {
            cVar7 = (**(code **)(*plVar26 + 0x2d8))(plVar26,local_a200);
            uVar41 = (ulonglong)(cVar7 != '\0');
          }
          else {
            iVar14 = _stricmp(local_748,"set");
            if (iVar14 == 0) {
              (**(code **)(*plVar26 + 0x2c8))(plVar26,local_a200,1);
              uVar41 = 1;
            }
            else {
              uVar41 = 0;
            }
          }
        }
      }
    }
    else {
      uVar41 = 0;
    }
    break;
  case 0xa9:
    if (((char)param_4[0x12d] != '\x03') || ((int)param_4[0x12e] == 0)) {
      return 0;
    }
    if ((*(int *)((longlong)param_4 + 0x974) != 1) && (*(int *)((longlong)param_4 + 0x974) != 2)) {
      return 0;
    }
    uVar39 = FUN_140008520((int)param_1[9]);
    plVar26 = (longlong *)FUN_1400875f0(uVar39);
    plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26,(int)param_4[0x12e]);
    if (plVar26 == (longlong *)0x0) {
      return 0;
    }
    if (*(int *)((longlong)param_4 + 0x974) == 1) {
      local_9fb8 = 0;
      uVar41 = (**(code **)(*plVar26 + 0x298))(plVar26,0x1040,&local_9fb8);
      if ((char)uVar41 == '\0') {
        return uVar41;
      }
      if (*(char *)(local_9fb8 + 0x68) == '\0') {
        return 0;
      }
      if (*(int *)(local_9fb8 + 0xb4) != 0) {
        return 1;
      }
      cVar7 = FUN_1402bf900();
      if (cVar7 == '\0') {
        return 0;
      }
      FUN_140165b50(param_4);
      FUN_140165a10(param_4);
      return 1;
    }
    if (*(int *)((longlong)param_4 + 0x974) == 2) {
      local_a028 = 0;
      uVar41 = (**(code **)(*plVar26 + 0x298))(plVar26,0x1002,&local_a028);
      if ((char)uVar41 != '\0') {
        if ((*(int *)(local_a028 + 0x154) == 0) && (iVar14 = (**(code **)(*(longlong *)(local_a028 + 0x10) + 0x78))(), iVar14 != 0)) {
          FUN_14038e270(local_a028,1);
          FUN_140165b50(param_4);
          FUN_140165a10(param_4);
        }
        return 1;
      }
      return uVar41;
    }
    goto LAB_14013a784;
  case 0xaa:
    local_a418 = (char *)&local_a2d8;
    iVar14 = sscanf(param_3,"%s %s %I64d",local_648,local_3868);
    if (iVar14 < 3) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2f56);
    }
    else {
      uVar41 = (**(code **)(param_4[2] + 0x170))(param_4 + 2);
      uVar28 = uVar41 & 0xffffffff;
      if ((int)uVar41 == 0) {
        return uVar41;
      }
      iVar14 = _stricmp(local_648,"money");
      bVar45 = iVar14 == 0;
      if (bVar45) {
        lVar40 = 3;
        pcVar33 = local_3868;
        pcVar42 = "+=";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          plVar26 = (longlong *)FUN_140087ed0();
          lVar34 = (**(code **)(*plVar26 + 0x268))(plVar26,uVar28);
          lVar40 = CONCAT44(uStack_a2d4,local_a2d8);
          if (200000000000 - lVar34 < CONCAT44(uStack_a2d4,local_a2d8)) {
            lVar40 = 200000000000 - lVar34;
          }
          if (-lVar40 != lVar34 && lVar40 <= -lVar34) {
            lVar40 = -lVar34;
          }
          plVar26 = (longlong *)FUN_140087ed0();
          cVar7 = (**(code **)(*plVar26 + 0x1f0))(plVar26,uVar28,lVar40);
          if (cVar7 != '\0') {
            plVar26 = (longlong *)FUN_140087ed0();
            uVar39 = (**(code **)(*plVar26 + 0x268))(plVar26,uVar28);
            uVar12 = (**(code **)(param_4[2] + 0x170))(param_4 + 2);
            uVar13 = (**(code **)(*param_4 + 8))(param_4);
            local_a418 = (char *)lVar34;
            local_a410 = (uint *)uVar39;
            local_a400 = (int *)lVar40;
            tq::MyLogSave("gmlog/money_syn",
                          "money change, user[%u], synid[%u], before money change[%I64d], after money change[%I64d] expect money change[%I64d], real money change[%I64d]"
                          ,(ulonglong)uVar13,(ulonglong)uVar12);
            return 1;
          }
        }
        else {
          lVar40 = 2;
          pcVar33 = local_3868;
          pcVar42 = ">";
          do {
            if (lVar40 == 0) break;
            lVar40 = lVar40 + -1;
            bVar45 = *pcVar33 == *pcVar42;
            pcVar33 = pcVar33 + 1;
            pcVar42 = pcVar42 + 1;
          } while (bVar45);
          if (bVar45) {
            plVar26 = (longlong *)FUN_140087ed0();
            lVar40 = (**(code **)(*plVar26 + 0x268))(plVar26,uVar28);
            return (ulonglong)(CONCAT44(uStack_a2d4,local_a2d8) < lVar40);
          }
          lVar40 = 3;
          bVar45 = false;
          pcVar33 = local_3868;
          pcVar42 = ">=";
          do {
            if (lVar40 == 0) break;
            lVar40 = lVar40 + -1;
            bVar45 = *pcVar33 == *pcVar42;
            pcVar33 = pcVar33 + 1;
            pcVar42 = pcVar42 + 1;
          } while (bVar45);
          if (bVar45) {
            plVar26 = (longlong *)FUN_140087ed0();
            lVar40 = (**(code **)(*plVar26 + 0x268))(plVar26,uVar28);
            return (ulonglong)(CONCAT44(uStack_a2d4,local_a2d8) <= lVar40);
          }
          lVar40 = 3;
          bVar45 = false;
          pcVar33 = local_3868;
          pcVar42 = "==";
          do {
            if (lVar40 == 0) break;
            lVar40 = lVar40 + -1;
            bVar45 = *pcVar33 == *pcVar42;
            pcVar33 = pcVar33 + 1;
            pcVar42 = pcVar42 + 1;
          } while (bVar45);
          if (bVar45) {
            plVar26 = (longlong *)FUN_140087ed0();
            lVar40 = (**(code **)(*plVar26 + 0x268))(plVar26,uVar28);
            return (ulonglong)(lVar40 == CONCAT44(uStack_a2d4,local_a2d8));
          }
        }
      }
      else {
        iVar14 = _stricmp(local_648,"emoney");
        if (iVar14 == 0) {
          lVar40 = 3;
          bVar45 = true;
          pcVar33 = local_3868;
          pcVar42 = "+=";
          do {
            if (lVar40 == 0) break;
            lVar40 = lVar40 + -1;
            bVar45 = *pcVar33 == *pcVar42;
            pcVar33 = pcVar33 + 1;
            pcVar42 = pcVar42 + 1;
          } while (bVar45);
          if (bVar45) {
            plVar26 = (longlong *)FUN_140087ed0();
            iVar14 = (**(code **)(*plVar26 + 0x278))(plVar26,uVar28);
            uVar12 = local_a2d8;
            if ((int)(1000000000U - iVar14) < (int)local_a2d8) {
              uVar12 = 1000000000U - iVar14;
            }
            if ((int)uVar12 < -iVar14) {
              uVar12 = -iVar14;
            }
            plVar26 = (longlong *)FUN_140087ed0();
            cVar7 = (**(code **)(*plVar26 + 0x1f8))(plVar26,uVar28,uVar12);
            if (cVar7 != '\0') {
              uVar13 = (int)uVar12 >> 0x1f;
              if ((int)uVar12 < 0) {
                local_a418 = (char *)CONCAT44(local_a418._4_4_,(uVar12 ^ uVar13) - uVar13);
                FUN_1401742b0(param_4,0x14,uVar28);
              }
              else {
                local_a418 = (char *)CONCAT44(local_a418._4_4_,(uVar12 ^ uVar13) - uVar13);
                FUN_1401742b0(param_4,0x14,0,uVar28);
              }
              plVar26 = (longlong *)FUN_140087ed0();
              uVar25 = (**(code **)(*plVar26 + 0x278))(plVar26,uVar28);
              uVar13 = (**(code **)(param_4[2] + 0x170))(param_4 + 2);
              uVar20 = (**(code **)(*param_4 + 8))(param_4);
              local_a400 = (int *)CONCAT44(local_a400._4_4_,uVar12);
              local_a408 = (char *)CONCAT44(local_a408._4_4_,local_a2d8);
              local_a410 = (uint *)CONCAT44(local_a410._4_4_,uVar25);
              local_a418 = (char *)CONCAT44(local_a418._4_4_,iVar14);
              tq::MyLogSave("gmlog/money_syn",
                            "emoney change, user[%u], synid[%u], before emoney change[%d], after emoney change[%d] expect emoney change[%d], real emoney chage[%d]"
                            ,(ulonglong)uVar20,(ulonglong)uVar13);
              return 1;
            }
          }
          else {
            lVar40 = 2;
            pcVar33 = local_3868;
            pcVar42 = ">";
            do {
              if (lVar40 == 0) break;
              lVar40 = lVar40 + -1;
              bVar45 = *pcVar33 == *pcVar42;
              pcVar33 = pcVar33 + 1;
              pcVar42 = pcVar42 + 1;
            } while (bVar45);
            if (bVar45) {
              plVar26 = (longlong *)FUN_140087ed0();
              iVar14 = (**(code **)(*plVar26 + 0x278))(plVar26,uVar28);
              return (ulonglong)((int)local_a2d8 < iVar14);
            }
            lVar40 = 3;
            bVar45 = false;
            pcVar33 = local_3868;
            pcVar42 = ">=";
            do {
              if (lVar40 == 0) break;
              lVar40 = lVar40 + -1;
              bVar45 = *pcVar33 == *pcVar42;
              pcVar33 = pcVar33 + 1;
              pcVar42 = pcVar42 + 1;
            } while (bVar45);
            if (bVar45) {
              plVar26 = (longlong *)FUN_140087ed0();
              iVar14 = (**(code **)(*plVar26 + 0x278))(plVar26,uVar28);
              return (ulonglong)((int)local_a2d8 <= iVar14);
            }
            lVar40 = 3;
            bVar45 = false;
            pcVar33 = local_3868;
            pcVar42 = "==";
            do {
              if (lVar40 == 0) break;
              lVar40 = lVar40 + -1;
              bVar45 = *pcVar33 == *pcVar42;
              pcVar33 = pcVar33 + 1;
              pcVar42 = pcVar42 + 1;
            } while (bVar45);
            if (bVar45) {
              plVar26 = (longlong *)FUN_140087ed0();
              uVar12 = (**(code **)(*plVar26 + 0x278))(plVar26,uVar28);
              return (ulonglong)(uVar12 == local_a2d8);
            }
          }
        }
      }
    }
    goto LAB_14013a784;
  case 0xab:
    local_a418 = local_248;
    iVar14 = sscanf(param_3,"%s %s %s",local_c48,local_3e68);
    if (iVar14 != 3) {
      uVar12 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x2fd1);
      return 0;
    }
    uVar21 = strtoul(local_248,(char **)0x0,10);
    iVar14 = _stricmp(local_c48,"genuineqi");
    bVar45 = iVar14 == 0;
    if (bVar45) {
      lVar40 = 2;
      pcVar33 = local_3e68;
      pcVar42 = ">";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087ba0(uVar39);
        uVar12 = FUN_1401e8140(uVar39,param_4);
        return (ulonglong)(uVar21 < (uVar12 & 0xff));
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3e68;
      pcVar42 = ">=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087ba0(uVar39);
        uVar12 = FUN_1401e8140(uVar39,param_4);
        return (ulonglong)(uVar21 <= (uVar12 & 0xff));
      }
      lVar40 = 2;
      bVar45 = false;
      pcVar33 = local_3e68;
      pcVar42 = "<";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087ba0(uVar39);
        uVar12 = FUN_1401e8140(uVar39,param_4);
        return (ulonglong)((uVar12 & 0xff) < uVar21);
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3e68;
      pcVar42 = "<=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087ba0(uVar39);
        uVar12 = FUN_1401e8140(uVar39,param_4);
        return (ulonglong)((uVar12 & 0xff) <= uVar21);
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3e68;
      pcVar42 = "==";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087ba0(uVar39);
        uVar12 = FUN_1401e8140(uVar39,param_4);
        return (ulonglong)((uVar12 & 0xff) == uVar21);
      }
      lVar40 = 3;
      bVar45 = false;
      pcVar33 = local_3e68;
      pcVar42 = "+=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087ba0(uVar39);
        uVar41 = FUN_1401e7f30(uVar39,param_4,uVar21 & 0xff);
        return uVar41;
      }
      lVar40 = 4;
      bVar45 = false;
      pcVar33 = local_3e68;
      pcVar42 = "set";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140087ba0(uVar39);
        uVar41 = FUN_1401e8050(uVar39,param_4,uVar21 & 0xff);
        return uVar41;
      }
    }
    else {
      iVar14 = _stricmp(local_c48,"freecultivateparam");
      if (iVar14 == 0) {
        lVar40 = 2;
        bVar45 = true;
        pcVar33 = local_3e68;
        pcVar42 = ">";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_140087ba0(uVar39);
          uVar12 = FUN_1401e82e0(uVar39,param_4);
          return (ulonglong)(uVar21 < uVar12);
        }
        lVar40 = 3;
        bVar45 = false;
        pcVar33 = local_3e68;
        pcVar42 = ">=";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_140087ba0(uVar39);
          uVar12 = FUN_1401e82e0(uVar39,param_4);
          return (ulonglong)(uVar21 <= uVar12);
        }
        lVar40 = 2;
        bVar45 = false;
        pcVar33 = local_3e68;
        pcVar42 = "<";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_140087ba0(uVar39);
          uVar12 = FUN_1401e82e0(uVar39,param_4);
          return (ulonglong)(uVar12 < uVar21);
        }
        lVar40 = 3;
        bVar45 = false;
        pcVar33 = local_3e68;
        pcVar42 = "<=";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_140087ba0(uVar39);
          uVar12 = FUN_1401e82e0(uVar39,param_4);
          return (ulonglong)(uVar12 <= uVar21);
        }
        lVar40 = 3;
        bVar45 = false;
        pcVar33 = local_3e68;
        pcVar42 = "==";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_140087ba0(uVar39);
          uVar22 = FUN_1401e82e0(uVar39,param_4);
          return (ulonglong)(uVar22 == uVar21);
        }
        lVar40 = 3;
        bVar45 = false;
        pcVar33 = local_3e68;
        pcVar42 = "+=";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_140087ba0(uVar39);
          uVar41 = FUN_1401e8180(uVar39,param_4,uVar21);
          return uVar41;
        }
        lVar40 = 4;
        bVar45 = false;
        pcVar33 = local_3e68;
        pcVar42 = "set";
        do {
          if (lVar40 == 0) break;
          lVar40 = lVar40 + -1;
          bVar45 = *pcVar33 == *pcVar42;
          pcVar33 = pcVar33 + 1;
          pcVar42 = pcVar42 + 1;
        } while (bVar45);
        if (bVar45) {
          uVar39 = FUN_140008520((int)param_1[9]);
          uVar39 = FUN_140087ba0(uVar39);
          uVar41 = FUN_1401e8240(uVar39,param_4,uVar21);
          return uVar41;
        }
      }
    }
    goto LAB_14013a784;
  case 0xac:
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_140087ba0(uVar39);
    uVar41 = FUN_1401e8350(uVar39,uVar25);
    break;
  case 0xad:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_140087ba0(uVar39);
    iVar24 = FUN_1401e8440(uVar39,uVar25);
    uVar41 = (ulonglong)(iVar14 <= iVar24);
    break;
  case 0xae:
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_140087ba0(uVar39);
    uVar41 = FUN_1401e6150(uVar39,uVar25);
    break;
  case 0xaf:
    local_e48[0] = '\0';
    memset(local_e48 + 1,0,0xff);
    local_a118 = 0;
    iVar14 = sscanf(param_3,"%s %d",local_e48,&local_a118);
    if (iVar14 == 2) {
      lVar40 = 3;
      bVar45 = true;
      pcVar33 = local_e48;
      pcVar42 = "+=";
      do {
        if (lVar40 == 0) break;
        lVar40 = lVar40 + -1;
        bVar45 = *pcVar33 == *pcVar42;
        pcVar33 = pcVar33 + 1;
        pcVar42 = pcVar42 + 1;
      } while (bVar45);
      if (bVar45) {
        plVar26 = (longlong *)FUN_1401181a0();
        lVar40 = *plVar26;
        uVar25 = (**(code **)(*param_4 + 8))(param_4);
        local_a3e8 = (undefined4 *)((ulonglong)local_a3e8._4_4_ << 0x20);
        local_a3f0 = (undefined4 *)CONCAT62(local_a3f0._2_6_,1);
        local_a3f8 = (undefined4 *)CONCAT71(local_a3f8._1_7_,1);
        local_a400 = (int *)CONCAT44(local_a400._4_4_,local_a118);
        local_a408 = (char *)((ulonglong)local_a408._4_4_ << 0x20);
        local_a410 = (uint *)((ulonglong)local_a410._4_4_ << 0x20);
        local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a118);
        (**(code **)(lVar40 + 8))(plVar26,uVar25,0x95,0xffffffff);
        return 1;
      }
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x30af);
    uVar41 = 0;
    break;
  case 0xb0:
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    local_a338 = (longlong *)CONCAT44(local_a338._4_4_,uVar25);
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_140087ba0(uVar39);
    uVar25 = FUN_1401e8470(uVar39,uVar25);
    local_a340 = (undefined8 *)CONCAT44(local_a340._4_4_,uVar25);
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_140087ab0(uVar39);
    local_a368 = (longlong *)FUN_1402e69e0(uVar39,param_4,1);
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_140087ab0(uVar39);
    uVar39 = FUN_1402e69e0(uVar39,param_4,2);
    uVar35 = FUN_140008520((int)param_1[9]);
    uVar35 = FUN_140087ab0(uVar35);
    uVar35 = FUN_1402e69e0(uVar35,param_4,3);
    uVar36 = FUN_140008520((int)param_1[9]);
    uVar36 = FUN_140087ab0(uVar36);
    uVar36 = FUN_1402e69e0(uVar36,param_4,4);
    plVar26 = param_4 + 2;
    uVar25 = (**(code **)(*plVar26 + 0x170))(plVar26);
    plVar37 = (longlong *)FUN_140087ed0();
    uVar12 = *(uint *)(param_4 + 0x1e2);
    uVar38 = (**(code **)(*plVar37 + 0x290))(plVar37,uVar25);
    local_a418 = (char *)(**(code **)(*plVar26 + 0x18))(plVar26);
    local_a3e0 = (int *)CONCAT44(local_a3e0._4_4_,local_a340._0_4_);
    local_a400 = (int *)local_a368;
    local_a410 = (uint *)CONCAT44(local_a410._4_4_,uVar25);
    local_a408 = (char *)uVar38;
    local_a3f8 = (undefined4 *)uVar39;
    local_a3f0 = (undefined4 *)uVar35;
    local_a3e8 = (undefined4 *)uVar36;
    tq::MyLogSave("gmlog/syn_templog","%u,%u,%s,%u,%s,%I64d,%I64d,%I64d,%I64d,%d",(ulonglong)uVar12,(ulonglong)local_a338 & 0xffffffff);
    uVar41 = 1;
    break;
  case 0xb1:
    uVar39 = FUN_140008520((int)param_1[9]);
    lVar40 = FUN_140118010(uVar39);
    if (lVar40 == 0) {
      local_a418 = (char *)CONCAT44(local_a418._4_4_,0x30c6);
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","TaskRewardMgr()","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp");
      uVar41 = 0;
    }
    else {
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
      if (iVar14 == 0) {
        uVar12 = FUN_1400bb7e0(param_2);
        log_InlineLogACTION_ERROR(&DAT_14070dd60,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x30cb);
        uVar41 = 0;
      }
      else {
        uVar39 = FUN_140008520((int)param_1[9]);
        uVar39 = FUN_140118010(uVar39);
        uVar41 = FUN_14025ec40(uVar39,param_4,iVar14);
      }
    }
    break;
  case 0xb2:
    uVar41 = FUN_140168a10(param_4);
    break;
  case 0xb3:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
    if ((int)uVar12 < 0x81) {
      uVar41 = FUN_14017ab70(param_4,uVar12 & 0xff);
    }
    else {
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
      uVar13 = FUN_1400bb7e0(param_2);
      log_InlineLogDBERROR("ACTION %u: data(%d) > 128",(ulonglong)uVar13,(ulonglong)uVar12);
      uVar41 = 0;
    }
    break;
  case 0xb4:
    uVar39 = FUN_140008520((int)param_1[9]);
    iVar14 = FUN_14008afb0(uVar39);
    uVar9 = *(ushort *)(param_4 + 0x1dc);
    uVar10 = *(ushort *)((longlong)param_4 + 0xede);
    uVar2 = *(ushort *)((longlong)param_4 + 0xedc);
    uVar3 = *(ushort *)(param_4 + 0x1db);
    iVar24 = FUN_140160eb0(param_4);
    uVar41 = (ulonglong)((int)(iVar24 + (uint)uVar9 + (uint)uVar10 + (uint)uVar2 + (uint)uVar3) < iVar14);
    break;
  case 0xb5:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    uVar8 = (**(code **)(*plVar26 + 0x48))(plVar26);
    uVar39 = FUN_140008520((int)param_1[9]);
    uVar39 = FUN_140087c40(uVar39);
    uVar41 = FUN_140261810(uVar39,param_4,uVar8);
    break;
  case 0xb6:
    local_a108 = 0;
    local_a110 = 0;
    iVar14 = sscanf(param_3,"%d %d",&local_a108,&local_a110);
    if (iVar14 == 2) {
      plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
      uVar25 = (**(code **)(*plVar26 + 0x48))(plVar26);
      uVar23 = (**(code **)(*param_4 + 8))(param_4);
      uVar39 = FUN_140008520((int)param_1[9]);
      uVar39 = FUN_140118060(uVar39);
      local_a418 = (char *)CONCAT44(local_a418._4_4_,local_a110);
      uVar41 = FUN_140269300(uVar39,uVar23,uVar25,local_a108);
      return uVar41;
    }
    uVar12 = FUN_1400bb7e0(param_2);
    log_InlineLogDBERROR(&DAT_14070c010,(ulonglong)uVar12,"f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\gameaction.cpp",0x3102);
    goto LAB_14013a784;
  case 0xb7:
    plVar26 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
    iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
    iVar24 = 0;
    if (iVar14 == 0x4c) {
      uVar39 = FUN_140008520((int)param_1[9]);
      plVar26 = (longlong *)FUN_1400876b0(uVar39);
      lVar40 = (**(code **)(*plVar26 + 0x10))(plVar26,*(undefined4 *)((longlong)param_4 + 0xf2c),1);
      if (lVar40 != 0) {
        iVar24 = (**(code **)(**(longlong **)(lVar40 + 0x58) + 0x10))(*(longlong **)(lVar40 + 0x58),0xf);
      }
    }
    FUN_14039e680(local_4a08);
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    FUN_14039e700(local_4a08,uVar25,iVar14,(longlong)iVar24);
    (**(code **)(param_4[2] + 0x350))(param_4 + 2,local_4a08);
    FUN_14039e6d0(local_4a08);
LAB_14013a784:
    uVar41 = 0;
    break;
  case 0xb8:
    uVar41 = FUN_140167d60(param_4);
    break;
  case 0xb9:
    iVar14 = FUN_1401657e0(param_4);
    uVar41 = (ulonglong)(iVar14 != 0);
    break;
  case 0xba:
    plVar26 = (longlong *)FUN_140087ed0();
    lVar40 = *plVar26;
    uVar25 = (**(code **)(*param_4 + 8))(param_4);
    uVar41 = (**(code **)(lVar40 + 0x6b8))(plVar26,uVar25);
    break;
  case 0xbb:
    goto switchD_14012a831_caseD_bb;
  }
  return uVar41;
}



