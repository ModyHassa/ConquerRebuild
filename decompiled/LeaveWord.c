/* Decompiled by Ghidra 12.1.4 | program: LeaveWord.dll
   image base: 140e40000 | functions: 1879 */


exception * FUN_140e41090(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_140e410d0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140e410f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140e41100(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140e41160(void)

{
  return;
}




exception * FUN_140e41170(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_140e411c0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140e411f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_140e41200(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_140e41220(exception *param_1,uint param_2)

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




exception * FUN_140e41280(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140e412e0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140e4131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140e41330(exception *param_1,uint param_2)

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




exception * FUN_140e413a0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_140e41400(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140e4143d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140e41450(exception *param_1,uint param_2)

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




void FUN_140e414e0(void)

{
  log_InlineLogERROR(&DAT_140e69668);
  return;
}




undefined4 * FUN_140e41510(undefined4 *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2));
  *param_1 = 0;
  return param_1;
}




void FUN_140e41540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_140e79460 != (longlong *)0x0) {
    if (DAT_140e79460 != (longlong *)0x0) {
      (**(code **)(*DAT_140e79460 + 0x50))(DAT_140e79460,1,param_3,param_4,0xfffffffffffffffe);
    }
    DAT_140e79460 = (longlong *)0x0;
  }
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_140e415a0(char *param_1,longlong param_2)

{
  tm *ptVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  if (param_1 == (char *)0x0) {
    log_InlineLogERROR(&DAT_140e69668,"MYASSERT","pBuf15","f:\\version\\cqserver-78.0.11-1204\\modules\\leaveword\\src\\leavewordmgr.cpp");
  }
  if (local_res10[0] == 0) {
    local_res10[0] = _time64((__time64_t *)0x0);
  }
  ptVar1 = _localtime64(local_res10);
  if (ptVar1 != (tm *)0x0) {
    sprintf(param_1,"%04d%02d%02d%02d%02d%02d",(ulonglong)(ptVar1->tm_year + 0x76c),(ulonglong)(ptVar1->tm_mon + 1));
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_140e41650(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  __time64_t _Var3;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  char local_428 [1040];
  ulonglong local_18;
  
  local_18 = DAT_140e79440 ^ (ulonglong)auStack_458;
  if (param_2 != (longlong *)0x0) {
    *(longlong **)(param_1 + 0x308) = param_2;
    uVar1 = (**(code **)(*param_2 + 0xa8))(param_2);
    *(undefined4 *)(param_1 + 0x314) = uVar1;
    plVar2 = (longlong *)InstanceGet();
    local_428[0x10] = 0;
    memset(local_428 + 0x11,0,0x3ff);
    _Var3 = _time64((__time64_t *)0x0);
    local_428[0] = '\0';
    local_428[1] = '\0';
    local_428[2] = '\0';
    local_428[3] = '\0';
    local_428[4] = '\0';
    local_428[5] = '\0';
    local_428[6] = '\0';
    local_428[7] = '\0';
    local_428[8] = '\0';
    local_428[9] = '\0';
    local_428[10] = '\0';
    local_428[0xb] = '\0';
    local_428[0xc] = '\0';
    local_428[0xd] = '\0';
    local_428[0xe] = '\0';
    local_428[0xf] = 0;
    FUN_140e415a0(local_428,_Var3 + -0x28de80);
    _snprintf(local_428 + 0x10,0x3ff,"DELETE FROM cq_leaveword WHERE time < %s");
    (**(code **)(*plVar2 + 0x30))(plVar2,local_428 + 0x10,0,0);
  }
  else {
    local_438 = 0xe8;
    log_InlineLogERROR(&DAT_140e69668);
  }
  return param_2 != (longlong *)0x0;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140e41760(longlong param_1,char *param_2,int param_3,char *param_4,undefined4 param_5,ushort param_6)

{
  char cVar1;
  ulonglong uVar2;
  tm *ptVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_4a8 [32];
  char *local_488;
  char *local_480;
  char *local_478;
  int local_470;
  uint local_468;
  __time64_t local_458;
  char local_450 [24];
  char local_438;
  undefined1 local_437 [1023];
  ulonglong local_38;
  
  local_38 = DAT_140e79440 ^ (ulonglong)auStack_4a8;
  uVar2 = local_38;
  if (param_2 != (char *)0x0) {
    lVar5 = -1;
    uVar2 = 0;
    pcVar6 = param_2;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (lVar5 != -2) {
      if (param_3 == 0) {
        return 0;
      }
      if (param_4 != (char *)0x0) {
        lVar5 = -1;
        pcVar6 = param_4;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if ((lVar5 != -2) && (uVar2 = (**(code **)(**(longlong **)(param_1 + 0x308) + 8))(), (char)uVar2 == '\0')) {
          builtin_strncpy(local_450,"00000000000000",0xf);
          local_450[0xf] = 0;
          local_458 = 0;
          local_458 = _time64((__time64_t *)0x0);
          ptVar3 = _localtime64(&local_458);
          if (ptVar3 != (tm *)0x0) {
            local_470 = ptVar3->tm_sec;
            local_478 = (char *)CONCAT44(local_478._4_4_,ptVar3->tm_min);
            local_480 = (char *)CONCAT44(local_480._4_4_,ptVar3->tm_hour);
            local_488 = (char *)CONCAT44(local_488._4_4_,ptVar3->tm_mday);
            sprintf(local_450,"%04d%02d%02d%02d%02d%02d");
          }
          plVar4 = (longlong *)InstanceGet();
          local_438 = '\0';
          memset(local_437,0,0x3ff);
          local_480 = local_450;
          local_468 = (uint)param_6;
          local_470 = param_5;
          local_488 = param_2;
          local_478 = param_4;
          _snprintf(&local_438,0x3ff,"INSERT cq_leaveword SET recv_id=%lu, send_name=\'%s\', time=\'%s\', words=\'%s\', lookface=%lu, type=%d");
          uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_438,0,1);
          return uVar2;
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140e41920(undefined8 param_1,char *param_2,int param_3,char *param_4,undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 auStack_478 [32];
  int local_458;
  char *local_450;
  ulong local_448;
  char *local_440;
  undefined4 local_438;
  char local_428 [1023];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_140e79440 ^ (ulonglong)auStack_478;
  uVar3 = local_28;
  if (param_2 != (char *)0x0) {
    lVar4 = -1;
    uVar3 = 0;
    pcVar5 = param_2;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if ((lVar4 != -2) && (param_4 != (char *)0x0)) {
      lVar4 = -1;
      pcVar5 = param_4;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (lVar4 != -2) {
        if (param_3 == 0) {
          return 0;
        }
        plVar2 = (longlong *)InstanceGet();
        local_448 = tq::TimeStampGet();
        local_438 = param_6;
        local_458 = param_3;
        local_450 = param_2;
        local_440 = param_4;
        _snprintf(local_428,0x400,"INSERT cq_sys_leaveword SET type=%d, user_id=%lu, send_name=\'%s\', time=\'%lu\', words=\'%s\', item_id=%lu");
        local_29 = 0;
        uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,local_428,0,1);
        return uVar3;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




undefined4 * FUN_140e41a20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 2));
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  return param_1;
}




void FUN_140e41a70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140e41a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  return;
}




longlong FUN_140e41aa0(longlong param_1,int param_2,char *param_3,undefined8 param_4)

{
  uint7 uVar4;
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  CMsg local_438 [1072];
  
  uVar4 = (uint7)((ulonglong)&stack0x00000000 >> 8);
  if (param_2 == 0) {
    lVar1 = (ulonglong)uVar4 << 8;
  }
  else if (*(longlong *)(param_1 + 0x308) == 0) {
    lVar1 = (ulonglong)uVar4 << 8;
  }
  else {
    FUN_140e5ceb0(local_438);
    uVar2 = FUN_140e5cfb0((longlong)local_438,3,param_3);
    if ((char)uVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))(*(longlong **)(param_1 + 0x308),param_2,local_438);
    }
    uVar3 = FUN_140e5cf30((undefined8 *)local_438);
    lVar1 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return lVar1;
}




bool FUN_140e41b40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140e41b80(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140e41bf0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140e41c30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140e41c70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140e41cb0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140e41cf0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140e41d30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140e41d70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e41d92;
  }
  lVar2 = *plVar1;
LAB_140e41d92:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong FUN_140e41db0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e41dd2;
  }
  lVar2 = *plVar1;
LAB_140e41dd2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140e41df0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e41e12;
  }
  lVar2 = *plVar1;
LAB_140e41e12:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x38;
  return param_1;
}




bool FUN_140e41e30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140e41e70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140e41ed0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140e41f10(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000140e41f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  return;
}




void FUN_140e42010(longlong param_1,longlong *param_2)

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




void FUN_140e421a0(longlong param_1,longlong *param_2)

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




longlong FUN_140e42440(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e42462;
  }
  lVar2 = *plVar1;
LAB_140e42462:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140e42480(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e424a2;
  }
  lVar2 = *plVar1;
LAB_140e424a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140e424c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140e42650(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140e426b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_140e42740(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e42762;
  }
  lVar2 = *plVar1;
LAB_140e42762:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140e42780(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e427a2;
  }
  lVar2 = *plVar1;
LAB_140e427a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x124;
  return param_1;
}




bool FUN_140e427d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




int FUN_140e42820(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 4) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




undefined4 FUN_140e42850(longlong param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),(uint)(param_2 + *(int *)(param_1 + 4)) <= uVar1 / 1000);
}




basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_140e428e0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x28,param_3);
  return param_1;
}




void FUN_140e42ae0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e42b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140e42b70(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e77ef8);
}




exception * FUN_140e42be0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_140e42c30(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong FUN_140e42cb0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_140e42cf0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e42d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140e42d80(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e77ef8);
}




void FUN_140e42e10(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e77ef8);
}




longlong FUN_140e42f20(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x38;
}




longlong FUN_140e42f80(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x124;
}




bool FUN_140e42fe0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140e431b0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e431e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140e43260(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e43292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140e43380(longlong *param_1)

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
  if (*(char *)((longlong)plVar2 + 0x1d) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x1d) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x1d);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x1d);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x1d);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x1d);
    }
    if (*(char *)(param_1[1] + 0x1d) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x1d) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140e433b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140e43420(longlong *param_1)

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
  if (*(char *)((longlong)plVar2 + 0x69) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x69) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x69);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x69);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x69);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x69);
    }
    if (*(char *)(param_1[1] + 0x69) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x69) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140e43452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140e434c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x69) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x69) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x69);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x69);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x69);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x69);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140e434e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140e43720(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140e43750;
  }
  else {
LAB_140e43750:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140e43778;
  }
  _invalid_parameter_noinfo();
LAB_140e43778:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




longlong * FUN_140e437a0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140e437d0;
  }
  else {
LAB_140e437d0:
    lVar2 = *plVar1;
  }
  uVar4 = param_1[1] + param_2 * 0x38;
  if (uVar4 <= *(ulonglong *)(lVar2 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar4) goto LAB_140e437f8;
  }
  _invalid_parameter_noinfo();
LAB_140e437f8:
  param_1[1] = param_1[1] + param_2 * 0x38;
  return param_1;
}




longlong * FUN_140e43810(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140e43840;
  }
  else {
LAB_140e43840:
    lVar2 = *plVar1;
  }
  uVar4 = param_1[1] + param_2 * 0x124;
  if (uVar4 <= *(ulonglong *)(lVar2 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar4) goto LAB_140e4386b;
  }
  _invalid_parameter_noinfo();
LAB_140e4386b:
  param_1[1] = param_1[1] + param_2 * 0x124;
  return param_1;
}




basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_140e43890(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_1 + 0x28,param_2 + 0x28);
  return param_1;
}




void FUN_140e438e0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e43904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140e43a20(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140e43aa0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x124)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_1 * 0x124);
  return;
}




void FUN_140e43b20(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x38)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_1 * 0x38);
  return;
}




void FUN_140e43bb0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140e43c20(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_1 * 0x58);
  return;
}




void FUN_140e43ca0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_1 * 0x58);
  return;
}




void FUN_140e43d20(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_1 * 0x28);
  return;
}




void FUN_140e43da0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_1 << 5);
  return;
}




void FUN_140e43e20(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_1 * 0x58);
  return;
}




void FUN_140e43ea0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x68)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_1 * 0x68);
  return;
}




void FUN_140e43ff0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x70)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_1 * 0x70);
  return;
}




exception * FUN_140e440e0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_140e44110(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000140e4413f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  return;
}




void * FUN_140e44190(void *param_1,longlong param_2,void *param_3)

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




void FUN_140e44270(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((longlong)param_1 + 0x124)) {
    memcpy(param_1,param_3,0x124);
  }
  return;
}




undefined4 * FUN_140e442e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 2));
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  return param_1;
}




void * FUN_140e44340(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((longlong)param_1 + 0x124)) {
    memcpy(param_3,param_1,0x124);
    param_3 = (void *)((longlong)param_3 + 0x124);
  }
  return param_3;
}




undefined4 * FUN_140e443b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xe) {
    *param_3 = *param_1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2));
    *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    param_3 = param_3 + 0xe;
  }
  return param_3;
}




void * FUN_140e44420(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140e44480(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140e444c0(void *param_1,void *param_2)

{
  if (param_1 != (void *)0x0) {
    memcpy(param_1,param_2,0x124);
  }
  return;
}




void FUN_140e444f0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 2));
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  }
  return;
}




void * FUN_140e44550(void *param_1,uint param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((longlong)param_1 + 8));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void * FUN_140e445b0(void *param_1,void *param_2,void *param_3)

{
  while (param_1 != param_2) {
    param_2 = (void *)((longlong)param_2 + -0x124);
    param_3 = (void *)((longlong)param_3 + -0x124);
    memcpy(param_3,param_2,0x124);
  }
  return param_3;
}




undefined4 * FUN_140e44610(longlong param_1,longlong param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x38) {
    param_3[-0xe] = *(undefined4 *)(param_2 + -0x38);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + -0xc),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + -0x30));
    *(undefined8 *)(param_3 + -2) = *(undefined8 *)(param_2 + -8);
    param_3 = param_3 + -0xe;
  }
  return param_3;
}




void * FUN_140e446d0(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_140e44740(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44762;
  }
  lVar2 = *plVar1;
LAB_140e44762:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140e44780(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e447a2;
  }
  lVar2 = *plVar1;
LAB_140e447a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140e447c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140e44870(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44892;
  }
  lVar2 = *plVar1;
LAB_140e44892:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong FUN_140e448b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e448d2;
  }
  lVar2 = *plVar1;
LAB_140e448d2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140e448f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44912;
  }
  lVar2 = *plVar1;
LAB_140e44912:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x38;
  return param_1;
}




bool FUN_140e44930(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140e44970(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140e449b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e449d2;
  }
  lVar2 = *plVar1;
LAB_140e449d2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140e449f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44a12;
  }
  lVar2 = *plVar1;
LAB_140e44a12:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x124;
  return param_1;
}




bool FUN_140e44a40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




ulonglong FUN_140e44a80(longlong param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  if ((uint)(param_2 + *(int *)(param_1 + 4)) <= uVar1 / 1000) {
    uVar1 = tq::TimeGet(0);
    *(uint *)(param_1 + 4) = uVar1 / 1000;
    return CONCAT71((uint7)((ulonglong)uVar1 * 0x10624dd3 >> 8) & 0xffffff,1);
  }
  return (ulonglong)uVar1 * 0x10624dd3 & 0xffffff00;
}




longlong FUN_140e44af0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44b12;
  }
  lVar2 = *plVar1;
LAB_140e44b12:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140e44b40(longlong param_1,longlong param_2)

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




void FUN_140e44ba0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e44bc0(longlong param_1,longlong param_2)

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




void FUN_140e44c20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e44c50(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e44c80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e44cb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e44ce0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140e44cf0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44d12;
  }
  lVar2 = *plVar1;
LAB_140e44d12:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140e44d30(longlong *param_1)

{
  FUN_140e42ae0(param_1);
  return param_1;
}




void FUN_140e44d50(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140e44d60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44d82;
  }
  lVar2 = *plVar1;
LAB_140e44d82:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140e44da0(longlong *param_1)

{
  FUN_140e42cf0(param_1);
  return param_1;
}




void FUN_140e44dc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140e44dd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44df2;
  }
  lVar2 = *plVar1;
LAB_140e44df2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140e44e10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140e44e20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44e42;
  }
  lVar2 = *plVar1;
LAB_140e44e42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140e44ea0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140e44eb0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44ed2;
  }
  lVar2 = *plVar1;
LAB_140e44ed2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140e44ef0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44f12;
  }
  lVar2 = *plVar1;
LAB_140e44f12:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140e44f30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e44f52;
  }
  lVar2 = *plVar1;
LAB_140e44f52:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140e45050(longlong param_1,longlong param_2)

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




void FUN_140e450b0(longlong param_1,longlong *param_2)

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




void FUN_140e45140(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x1d) == '\0') {
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




void FUN_140e451a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x1d) == '\0') {
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




void FUN_140e45260(longlong param_1,longlong param_2)

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




void FUN_140e452c0(longlong param_1,longlong *param_2)

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




void FUN_140e45370(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x61) == '\0') {
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




void FUN_140e453d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x61) == '\0') {
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




longlong * FUN_140e45440(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140e42ae0(param_1);
  return param_2;
}




longlong * FUN_140e45470(longlong *param_1)

{
  FUN_140e431b0(param_1);
  return param_1;
}




void FUN_140e454a0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_140e45510(longlong *param_1)

{
  FUN_140e43260(param_1);
  return param_1;
}




void FUN_140e45540(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x124)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_2 * 0x124);
  return;
}




void FUN_140e455c0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e455e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140e45660(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x38)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_2 * 0x38);
  return;
}




void FUN_140e456d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x61) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x61) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x61);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x61);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x61);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x61);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140e456f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




undefined8 * FUN_140e45770(longlong param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(*(undefined8 **)(param_1 + 0x30))[1];
  cVar1 = *(char *)((longlong)puVar5 + 0x69);
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  while (cVar1 == '\0') {
    bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar5 + 3),param_2);
    if (bVar3) {
      puVar4 = (undefined8 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((longlong)puVar4 + 0x69);
  }
  return puVar2;
}




longlong * FUN_140e457e0(longlong *param_1)

{
  FUN_140e43380(param_1);
  return param_1;
}




void FUN_140e45800(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x1d) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x1d) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x1d);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x1d);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x1d);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x1d);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140e45824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140e45890(longlong *param_1)

{
  FUN_140e434c0(param_1);
  return param_1;
}




longlong * FUN_140e458b0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140e434c0(param_1);
  return param_2;
}




longlong * FUN_140e458e0(longlong *param_1)

{
  FUN_140e43420(param_1);
  return param_1;
}




void FUN_140e459a0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140e45a10(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_2 * 0x58);
  return;
}




void FUN_140e45a80(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_2 * 0x58);
  return;
}




void FUN_140e45af0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_140e45b60(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_2 << 5);
  return;
}




void FUN_140e45bd0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_2 * 0x58);
  return;
}




void FUN_140e45c40(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x68)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_2 * 0x68);
  return;
}




longlong * FUN_140e45cb0(longlong *param_1,longlong param_2)

{
  FUN_140e43720(param_1,param_2);
  return param_1;
}




longlong * FUN_140e45cd0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140e42cf0(param_1);
  return param_2;
}




void FUN_140e45d00(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e45d32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140e45da0(longlong *param_1)

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
  if (*(char *)((longlong)plVar2 + 0x61) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x61) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x61);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x61);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x61);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x61);
    }
    if (*(char *)(param_1[1] + 0x61) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x61) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140e45dd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140e45e50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x69) == '\0') {
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




void FUN_140e45eb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x69) == '\0') {
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




longlong * FUN_140e45f10(longlong *param_1,longlong param_2)

{
  FUN_140e437a0(param_1,param_2);
  return param_1;
}




longlong * FUN_140e45f30(longlong *param_1,longlong param_2)

{
  FUN_140e43810(param_1,param_2);
  return param_1;
}




void FUN_140e45f50(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e45f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140e45ff0(longlong *param_1)

{
  FUN_140e43420(param_1);
  return param_1;
}




void FUN_140e46070(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x70)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e77fb0);
  }
  operator_new(param_2 * 0x70);
  return;
}




longlong * FUN_140e460f0(longlong *param_1)

{
  FUN_140e438e0(param_1);
  return param_1;
}




undefined8 *
FUN_140e46110(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 3),param_5);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8),param_5 + 0x28);
  *(undefined1 *)(param_1 + 0xd) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x69) = 0;
  return param_1;
}




undefined8 * FUN_140e46190(undefined8 *param_1)

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




undefined8 * FUN_140e461d0(undefined8 *param_1)

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




undefined8 * FUN_140e46210(undefined8 *param_1)

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




undefined8 * FUN_140e46250(undefined8 *param_1)

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




undefined8 * FUN_140e46290(undefined8 *param_1)

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




undefined8 * FUN_140e462d0(undefined8 *param_1)

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




undefined8 * FUN_140e46310(undefined8 *param_1)

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




void * FUN_140e46360(void *param_1,uint param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((longlong)param_1 + 0x40));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((longlong)param_1 + 0x18));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




longlong FUN_140e463f0(void *param_1,void *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  if (param_1 != param_2) {
    lVar1 = param_3 - (longlong)param_1;
    do {
      memcpy((void *)(lVar1 + (longlong)param_1),param_1,0x124);
      param_1 = (void *)((longlong)param_1 + 0x124);
    } while (param_1 != param_2);
  }
  return (lVar2 / 0x124) * 0x124 + param_3;
}




longlong FUN_140e46490(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2 - (longlong)param_1;
  if (param_1 != param_2) {
    lVar2 = (longlong)param_1 - param_3;
    puVar1 = (undefined8 *)(param_3 + 0x30);
    do {
      *(undefined4 *)(puVar1 + -6) = *param_1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + -5),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2));
      param_1 = param_1 + 0xe;
      *puVar1 = *(undefined8 *)(lVar2 + (longlong)puVar1);
      puVar1 = puVar1 + 7;
    } while (param_1 != param_2);
  }
  return (lVar3 / 0x38) * 0x38 + param_3;
}




void * FUN_140e46540(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140e46580(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xe) {
    *param_1 = *param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  }
  return;
}




void FUN_140e465e0(undefined8 param_1,void *param_2,void *param_3)

{
  if (param_2 != (void *)0x0) {
    memcpy(param_2,param_3,0x124);
  }
  return;
}




void FUN_140e46610(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
    *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  }
  return;
}




longlong * FUN_140e46670(longlong *param_1)

{
  FUN_140e434c0(param_1);
  return param_1;
}




void * FUN_140e46690(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((longlong)param_1 + 0x124)) {
    if (param_3 != (void *)0x0) {
      memcpy(param_3,param_1,0x124);
    }
    param_3 = (void *)((longlong)param_3 + 0x124);
  }
  return param_3;
}




longlong FUN_140e46700(void *param_1,void *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  if (param_1 != param_2) {
    lVar2 = param_3 - (longlong)param_2;
    do {
      param_2 = (void *)((longlong)param_2 + -0x124);
      memcpy((void *)(lVar2 + (longlong)param_2),param_2,0x124);
    } while (param_2 != param_1);
  }
  return param_3 + (lVar1 / 0x124) * -0x124;
}




longlong FUN_140e46790(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    puVar1 = (undefined8 *)(param_3 + 0x30);
    lVar3 = param_2;
    do {
      lVar4 = lVar3 + -0x38;
      puVar2 = puVar1 + -7;
      *(undefined4 *)(puVar1 + -0xd) = *(undefined4 *)(lVar3 + -0x38);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + -0xc),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(lVar3 + -0x30));
      *puVar2 = *(undefined8 *)((param_2 - param_3) + (longlong)puVar2);
      puVar1 = puVar2;
      lVar3 = lVar4;
    } while (lVar4 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 0x38) * -0x38;
}




void FUN_140e46840(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140e4685a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  return;
}




void * FUN_140e468d0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140e46910(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((longlong)param_1 + 0x124)) {
    if (param_3 != (void *)0x0) {
      memcpy(param_3,param_1,0x124);
    }
    param_3 = (void *)((longlong)param_3 + 0x124);
  }
  return param_3;
}




longlong FUN_140e46980(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e469a2;
  }
  lVar2 = *plVar1;
LAB_140e469a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140e469c0(longlong *param_1)

{
  FUN_140e42ae0(param_1);
  return param_1;
}




longlong FUN_140e469e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e46a02;
  }
  lVar2 = *plVar1;
LAB_140e46a02:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140e46a20(longlong *param_1)

{
  FUN_140e42cf0(param_1);
  return param_1;
}




longlong FUN_140e46a40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e46a62;
  }
  lVar2 = *plVar1;
LAB_140e46a62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140e46a80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e46aa2;
  }
  lVar2 = *plVar1;
LAB_140e46aa2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140e46ac0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e46ae2;
  }
  lVar2 = *plVar1;
LAB_140e46ae2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140e46b00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e46b22;
  }
  lVar2 = *plVar1;
LAB_140e46b22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140e46b40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e46b60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e46b80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e46ba0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e46bc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e46be0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e46c00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e46c20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e46c40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e46c60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e46c80(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x25);
  while (cVar1 == '\0') {
    FUN_140e46c80(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x25);
  }
  return;
}




void FUN_140e46cd0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_140e46cd0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  }
  return;
}




longlong * FUN_140e46d20(longlong *param_1)

{
  FUN_140e431b0(param_1);
  return param_1;
}




undefined8 FUN_140e46d40(longlong param_1,ulonglong param_2)

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
      FUN_140e42b70();
    }
    lVar1 = FUN_140e454a0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_140e46db0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




longlong * FUN_140e46de0(longlong *param_1)

{
  FUN_140e43260(param_1);
  return param_1;
}




undefined8 FUN_140e46e00(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0xe070381c0e0703 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140e42d80();
    }
    lVar1 = FUN_140e45540(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    *(ulonglong *)(param_1 + 0x28) = param_2 * 0x124 + lVar1;
  }
  return uVar2;
}




longlong * FUN_140e46e70(longlong *param_1)

{
  FUN_140e455c0(param_1);
  return param_1;
}




undefined8 FUN_140e46e90(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0x492492492492492 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140e42e10();
    }
    lVar1 = FUN_140e45660(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    *(ulonglong *)(param_1 + 0x28) = param_2 * 0x38 + lVar1;
  }
  return uVar2;
}




longlong * FUN_140e46f00(longlong *param_1)

{
  FUN_140e456d0(param_1);
  return param_1;
}




longlong * FUN_140e46f20(longlong *param_1)

{
  FUN_140e43380(param_1);
  return param_1;
}




longlong * FUN_140e46f40(longlong *param_1)

{
  FUN_140e45800(param_1);
  return param_1;
}




undefined8 * FUN_140e46f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

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




undefined8 * FUN_140e46ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    *(undefined1 *)((longlong)puVar1 + 0x1c) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x1d) = 0;
  }
  return puVar1;
}




undefined8 * FUN_140e47070(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140e470b0(undefined8 *param_1)

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




longlong * FUN_140e470f0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140e4715a;
  }
  _invalid_parameter_noinfo();
LAB_140e4715a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140e47190(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140e471f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140e47230(undefined8 *param_1)

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




undefined8 * FUN_140e47270(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140e472b0(longlong *param_1)

{
  FUN_140e45d00(param_1);
  return param_1;
}




undefined8 * FUN_140e472d0(undefined8 *param_1)

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




undefined8 * FUN_140e47310(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140e47350(longlong *param_1)

{
  FUN_140e45da0(param_1);
  return param_1;
}




longlong * FUN_140e47370(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar3 = param_3 * 0x38 + lVar2;
  if (uVar3 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar4 = *plVar1;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar3) goto LAB_140e473dd;
  }
  _invalid_parameter_noinfo();
LAB_140e473dd:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar3;
  return param_2;
}




undefined8 * FUN_140e47410(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140e47470(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140e474b0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140e45800(param_1);
  return param_2;
}




longlong * FUN_140e474e0(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar3 = param_3 * 0x124 + lVar2;
  if (uVar3 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar4 = *plVar1;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar3) goto LAB_140e47550;
  }
  _invalid_parameter_noinfo();
LAB_140e47550:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar3;
  return param_2;
}




undefined8 * FUN_140e47590(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140e475f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140e47630(longlong *param_1)

{
  FUN_140e45f50(param_1);
  return param_1;
}




undefined8 * FUN_140e47660(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_140e476a0(void)

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




void FUN_140e47700(void)

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




void FUN_140e47760(void)

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




void FUN_140e477c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)((longlong)puVar1 + 0x1c) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x1d) = 0;
  return;
}




void FUN_140e47820(void)

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




void FUN_140e47880(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x61) = 0;
  return;
}




longlong * FUN_140e478e0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140e455c0(param_1);
  return param_2;
}




longlong * FUN_140e47910(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140e456d0(param_1);
  return param_2;
}




void FUN_140e47940(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x69) = 0;
  return;
}




undefined8 *
FUN_140e479a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e46110(puVar1,param_2,param_3,param_4,param_5,param_6);
  }
  return puVar1;
}




longlong * FUN_140e47a30(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140e438e0(param_1);
  return param_2;
}




undefined8 * FUN_140e47a60(undefined8 *param_1)

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




undefined8 * FUN_140e47ab0(undefined8 *param_1)

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




undefined8 * FUN_140e47b00(undefined8 *param_1)

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




undefined8 * FUN_140e47b50(undefined8 *param_1)

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




undefined8 * FUN_140e47ba0(undefined8 *param_1)

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




undefined8 * FUN_140e47bf0(undefined8 *param_1)

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




undefined8 * FUN_140e47c40(undefined8 *param_1)

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




void * FUN_140e47c90(void *param_1,longlong param_2,void *param_3)

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




void FUN_140e47cd0(void *param_1,void *param_2,longlong param_3)

{
  FUN_140e463f0(param_1,param_2,param_3);
  return;
}




void FUN_140e47d00(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  FUN_140e46490(param_1,param_2,param_3);
  return;
}




void * FUN_140e47d60(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140e47da0(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((longlong)param_1 + 0x124)) {
    memcpy(param_1,param_3,0x124);
  }
  return;
}




void FUN_140e47df0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xe) {
    *param_1 = *param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  }
  return;
}




void FUN_140e47e50(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000140e47e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  return;
}




void FUN_140e47e90(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)(lVar2 + 0x51) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x51) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x51);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x51);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x51);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x51);
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




void FUN_140e47f60(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)(lVar2 + 0x69) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x69) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x69);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x69);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x69);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x69);
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




void FUN_140e48040(void *param_1,longlong param_2,void *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (void *)0x0) {
      memcpy(param_1,param_3,0x124);
    }
    param_1 = (void *)((longlong)param_1 + 0x124);
  }
  return;
}




void FUN_140e480b0(void *param_1,void *param_2,longlong param_3)

{
  FUN_140e46700(param_1,param_2,param_3);
  return;
}




void FUN_140e480d0(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_140e46790(param_1,param_2,param_3);
  return;
}




void FUN_140e480f0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140e4810a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 8));
  return;
}




undefined4 * FUN_140e48180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xe) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 2),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2));
      *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    }
    param_3 = param_3 + 0xe;
  }
  return param_3;
}




void * FUN_140e48210(void *param_1,longlong param_2,void *param_3)

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




void FUN_140e48250(void *param_1,void *param_2,void *param_3)

{
  FUN_140e46910(param_1,param_2,param_3);
  return;
}




undefined4 * FUN_140e48270(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xe) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 2),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2));
      *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    }
    param_3 = param_3 + 0xe;
  }
  return param_3;
}




void FUN_140e48300(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x25);
  while (cVar1 == '\0') {
    FUN_140e46c80(param_1,(longlong *)plVar2[2]);
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




void FUN_140e48380(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_140e46cd0(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x1d);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




void FUN_140e48400(undefined8 *param_1)

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




longlong * FUN_140e48440(longlong *param_1)

{
  FUN_140e455c0(param_1);
  return param_1;
}




longlong * FUN_140e48460(longlong *param_1)

{
  FUN_140e456d0(param_1);
  return param_1;
}




longlong * FUN_140e48480(longlong *param_1)

{
  FUN_140e45800(param_1);
  return param_1;
}




void FUN_140e484a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e484c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e484e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e48500(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e48520(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e48540(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e48560(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140e48580(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140e485c0(undefined8 *param_1)

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




undefined8 * FUN_140e48610(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140e48670(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140e486b0(undefined8 *param_1)

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




undefined8 * FUN_140e48700(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140e48740(longlong *param_1)

{
  FUN_140e45d00(param_1);
  return param_1;
}




undefined8 * FUN_140e48760(undefined8 *param_1)

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




undefined8 * FUN_140e487b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140e487f0(longlong *param_1)

{
  FUN_140e45da0(param_1);
  return param_1;
}




undefined8 * FUN_140e48810(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140e48870(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140e488b0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140e48910(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140e48950(longlong *param_1)

{
  FUN_140e45f50(param_1);
  return param_1;
}




undefined8 * FUN_140e48970(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140e489b0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x51) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x51) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x51) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0x51) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0x51) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x51) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




void FUN_140e48a90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e476a0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x51) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140e48ad0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e47700();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x51) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140e48b10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e47760();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x25) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140e48b50(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140e48ba0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar5 + 0x1d) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140e78010);
  }
  FUN_140e45800(param_3);
  plVar11 = (longlong *)*plVar5;
  if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
    plVar12 = plVar11;
    if (*(char *)(plVar5[2] + 0x1d) == '\0') {
      plVar10 = (longlong *)param_3[1];
      plVar12 = (longlong *)plVar10[2];
      if (plVar10 != plVar5) {
        plVar11[1] = (longlong)plVar10;
        *plVar10 = *plVar5;
        plVar11 = plVar10;
        if (plVar10 != (longlong *)plVar5[2]) {
          plVar11 = (longlong *)plVar10[1];
          if (*(char *)((longlong)plVar12 + 0x1d) == '\0') {
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
        puVar1 = (undefined1 *)((longlong)plVar5 + 0x1c);
        puVar2 = (undefined1 *)((longlong)plVar10 + 0x1c);
        if (puVar2 != puVar1) {
          uVar4 = *puVar2;
          *puVar2 = *puVar1;
          *puVar1 = uVar4;
        }
        goto LAB_140e48d8c;
      }
    }
  }
  else {
    plVar12 = (longlong *)plVar5[2];
  }
  plVar11 = (longlong *)plVar5[1];
  if (*(char *)((longlong)plVar12 + 0x1d) == '\0') {
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
    if (*(char *)((longlong)plVar12 + 0x1d) == '\0') {
      cVar3 = *(char *)(*plVar12 + 0x1d);
      plVar6 = (longlong *)*plVar12;
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)*plVar9;
        cVar3 = *(char *)((longlong)plVar6 + 0x1d);
        plVar10 = plVar9;
      }
    }
    *(longlong **)param_1[6] = plVar10;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar5) {
    plVar10 = plVar11;
    if (*(char *)((longlong)plVar12 + 0x1d) == '\0') {
      cVar3 = *(char *)(plVar12[2] + 0x1d);
      plVar6 = (longlong *)plVar12[2];
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)plVar9[2];
        cVar3 = *(char *)((longlong)plVar6 + 0x1d);
        plVar10 = plVar9;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar10;
  }
LAB_140e48d8c:
  if (*(char *)((longlong)plVar5 + 0x1c) == '\x01') {
    if (plVar12 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar10 = plVar11;
        if (*(char *)((longlong)plVar12 + 0x1c) != '\x01') break;
        plVar11 = (longlong *)*plVar10;
        if (plVar12 == plVar11) {
          plVar11 = (longlong *)plVar10[2];
          if (*(char *)((longlong)plVar11 + 0x1c) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x1c) = 0;
            FUN_140e45140((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(*plVar11 + 0x1c) != '\x01') || (*(char *)(plVar11[2] + 0x1c) != '\x01')) {
              if (*(char *)(plVar11[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_140e451a0((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(plVar11[2] + 0x1c) = 1;
              FUN_140e45140((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x1c) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x1c) = 0;
            FUN_140e451a0((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(plVar11[2] + 0x1c) != '\x01') || (*(char *)(*plVar11 + 0x1c) != '\x01')) {
              if (*(char *)(*plVar11 + 0x1c) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_140e45140((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(*plVar11 + 0x1c) = 1;
              FUN_140e451a0((longlong)param_1,plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
          }
        }
        plVar11 = (longlong *)plVar10[1];
        plVar12 = plVar10;
      } while (plVar10 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)((longlong)plVar12 + 0x1c) = 1;
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




exception * FUN_140e48f60(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_140e48fc0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x1d) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x1d) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x1d) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0x1d) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0x1d) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x1d) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




void FUN_140e490a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e477c0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x1d) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140e490e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e47820();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x51) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140e49120(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e47880();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x61) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140e49160(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140e491b0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140e49200(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140e49250(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140e492a0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140e492f0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140e49360(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140e493b0(undefined8 *param_1,undefined8 *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[6];
  cVar1 = *(char *)((longlong)puVar7[1] + 0x69);
  puVar3 = puVar7;
  puVar5 = (undefined8 *)puVar7[1];
  while (cVar1 == '\0') {
    bVar4 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar5 + 3),param_3);
    if (bVar4) {
      puVar6 = (undefined8 *)puVar5[2];
      puVar5 = puVar3;
    }
    else {
      if ((*(char *)((longlong)puVar7 + 0x69) != '\0') &&
         (bVar4 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                            (param_3,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar5 + 3)), bVar4)) {
        puVar7 = puVar5;
      }
      puVar6 = (undefined8 *)*puVar5;
    }
    puVar3 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x69);
  }
  if (*(char *)((longlong)puVar7 + 0x69) == '\0') {
    puVar5 = (undefined8 *)*puVar7;
  }
  else {
    puVar5 = *(undefined8 **)(param_1[6] + 8);
  }
  cVar1 = *(char *)((longlong)puVar5 + 0x69);
  while (cVar1 == '\0') {
    bVar4 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                      (param_3,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar5 + 3));
    if (bVar4) {
      puVar6 = (undefined8 *)*puVar5;
      puVar7 = puVar5;
    }
    else {
      puVar6 = (undefined8 *)puVar5[2];
    }
    puVar5 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x69);
  }
  uVar2 = *param_1;
  *param_2 = uVar2;
  param_2[1] = puVar3;
  param_2[2] = uVar2;
  param_2[3] = puVar7;
  return param_2;
}




void FUN_140e494d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e47940();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x69) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 *
FUN_140e49510(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_5)

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
  
  if (0x333333333333331 < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e77ef8);
  }
  plVar5 = FUN_140e479a0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x68);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x68) == '\0') {
        *(undefined1 *)(plVar2 + 0xd) = 1;
        *(undefined1 *)(lVar4 + 0x68) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x68) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x69) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x68) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x68) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x69) == '\0') {
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
      if (*(char *)(lVar4 + 0x68) == '\0') {
        *(undefined1 *)(plVar2 + 0xd) = 1;
        *(undefined1 *)(lVar4 + 0x68) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x68) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x69) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x68) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x68) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x69) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x68);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x68) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




void FUN_140e49850(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000140e4987f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x18));
  return;
}




undefined8 * FUN_140e49890(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140e498e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140e78010);
  }
  FUN_140e438e0(param_3);
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
        goto LAB_140e49acc;
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
LAB_140e49acc:
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
            FUN_140e45050((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x25) == '\0') {
            if ((*(char *)(*plVar11 + 0x24) != '\x01') || (*(char *)(plVar11[2] + 0x24) != '\x01')) {
              if (*(char *)(plVar11[2] + 0x24) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x24) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
                FUN_140e450b0((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x24) = *(undefined1 *)((longlong)plVar10 + 0x24);
              *(undefined1 *)((longlong)plVar10 + 0x24) = 1;
              *(undefined1 *)(plVar11[2] + 0x24) = 1;
              FUN_140e45050((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x24) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x24) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x24) = 0;
            FUN_140e450b0((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x25) == '\0') {
            if ((*(char *)(plVar11[2] + 0x24) != '\x01') || (*(char *)(*plVar11 + 0x24) != '\x01')) {
              if (*(char *)(*plVar11 + 0x24) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x24) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
                FUN_140e45050((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x24) = *(undefined1 *)((longlong)plVar10 + 0x24);
              *(undefined1 *)((longlong)plVar10 + 0x24) = 1;
              *(undefined1 *)(*plVar11 + 0x24) = 1;
              FUN_140e450b0((longlong)param_1,plVar10);
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




undefined8 * FUN_140e49ca0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140e49cf0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140e49d40(undefined8 *param_1)

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




undefined8 * FUN_140e49d90(undefined8 *param_1)

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




undefined8 * FUN_140e49de0(undefined8 *param_1)

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




undefined8 * FUN_140e49e30(undefined8 *param_1)

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




undefined8 * FUN_140e49e80(undefined8 *param_1)

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




undefined8 * FUN_140e49ed0(undefined8 *param_1)

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




undefined8 * FUN_140e49f20(undefined8 *param_1)

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




void FUN_140e49f70(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)((longlong)plVar7 + 0x51) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x51) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x51);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x51);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x51);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x51);
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




void FUN_140e4a060(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)((longlong)plVar7 + 0x69) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x69) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x69);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x69);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x69);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x69);
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




void FUN_140e4a160(void *param_1,longlong param_2,void *param_3)

{
  FUN_140e48040(param_1,param_2,param_3);
  return;
}




void FUN_140e4a180(void *param_1,void *param_2,longlong param_3)

{
  FUN_140e46700(param_1,param_2,param_3);
  return;
}




void FUN_140e4a1b0(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_140e46790(param_1,param_2,param_3);
  return;
}




void FUN_140e4a1e0(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)(lVar2 + 0x1d) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x1d) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x1d);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x1d);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x1d);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x1d);
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




void * FUN_140e4a2b0(longlong param_1,longlong param_2,void *param_3)

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




void FUN_140e4a320(longlong param_1,longlong param_2,void *param_3)

{
  FUN_140e46690(*(void **)(param_1 + 8),*(void **)(param_2 + 8),param_3);
  return;
}




void FUN_140e4a350(longlong param_1,longlong param_2,undefined4 *param_3)

{
  FUN_140e48180(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 8),param_3);
  return;
}




void FUN_140e4a380(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  }
  return;
}




void FUN_140e4a3d0(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
    }
    param_1 = param_1 + 0xe;
  }
  return;
}




void * FUN_140e4a460(void *param_1,longlong param_2,void *param_3)

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




void FUN_140e4a4a0(void *param_1,void *param_2,void *param_3)

{
  FUN_140e46910(param_1,param_2,param_3);
  return;
}




void FUN_140e4a4c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_140e48270(param_1,param_2,param_3);
  return;
}




void FUN_140e4a4e0(longlong param_1)

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




undefined8 * FUN_140e4a690(undefined8 *param_1)

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




undefined8 * FUN_140e4a6f0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140e4a740(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140e4a790(undefined8 *param_1)

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




undefined8 * FUN_140e4a7f0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140e4a840(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140e4a890(undefined8 *param_1)

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




undefined8 * FUN_140e4a8f0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140e4a940(undefined8 *param_1,undefined8 *param_2)

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




void FUN_140e4a9b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4a9d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4a9f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4aa10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4aa30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4aa50(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4aa70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140e4aa90(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140e4ab20(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140e489b0(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_140e4ab40(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140e4ac30(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e77ef8);
  }
  plVar5 = FUN_140e46f60(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_140e4af70(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140e48380((longlong)param_1);
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
    if (*(char *)(lVar4 + 0x1d) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x1d) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x1d);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x1d);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x1d);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x1d);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_140e48ba0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140e4b120(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140e48fc0(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_140e4b140(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
  
  if (0x3ffffffffffffffd < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e77ef8);
  }
  plVar5 = FUN_140e46ff0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x1c);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x1c) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x1c) = 1;
        *(undefined1 *)(lVar4 + 0x1c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x1c) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x1d) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x1c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x1c) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x1d) == '\0') {
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
      if (*(char *)(lVar4 + 0x1c) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x1c) = 1;
        *(undefined1 *)(lVar4 + 0x1c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x1c) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x1d) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x1c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x1c) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x1d) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x1c);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x1c) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




void FUN_140e4b480(longlong *param_1)

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
  FUN_140e4af70(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140e4b570(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140e4b5d0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_140e4b6c0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140e4b730(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void * FUN_140e4b760(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

{
  FUN_140e48040(param_2,param_3,param_4);
  return (void *)((longlong)param_2 + param_3 * 0x124);
}




undefined8 * FUN_140e4b7b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140e4b810(undefined8 *param_1,undefined8 *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)((undefined8 *)param_1[6])[1];
  cVar1 = *(char *)((longlong)puVar5 + 0x69);
  puVar2 = (undefined8 *)param_1[6];
  while (cVar1 == '\0') {
    bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar5 + 3),param_3);
    if (bVar3) {
      puVar4 = (undefined8 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((longlong)puVar4 + 0x69);
  }
  *param_2 = *param_1;
  param_2[1] = puVar2;
  return param_2;
}




undefined8 * FUN_140e4b890(undefined8 *param_1,undefined8 *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  FUN_140e493b0(param_1,param_2,param_3);
  return param_2;
}




void FUN_140e4b8b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x69);
  while (cVar1 == '\0') {
    FUN_140e4b8b0(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 8));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 3));
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x69);
  }
  return;
}




longlong * FUN_140e4b940(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140e48300((longlong)param_1);
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
    FUN_140e498e0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




longlong * FUN_140e4baf0(longlong *param_1,longlong *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_38;
  longlong *local_30;
  
  plVar7 = (longlong *)((longlong *)param_1[6])[1];
  bVar5 = true;
  cVar1 = *(char *)((longlong)plVar7 + 0x69);
  plVar3 = (longlong *)param_1[6];
  while (cVar1 == '\0') {
    bVar5 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                      (param_3,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar7 + 3));
    if (bVar5) {
      plVar8 = (longlong *)*plVar7;
    }
    else {
      plVar8 = (longlong *)plVar7[2];
    }
    plVar3 = plVar7;
    plVar7 = plVar8;
    cVar1 = *(char *)((longlong)plVar8 + 0x69);
  }
  lVar2 = *param_1;
  plVar7 = plVar3;
  local_38 = lVar2;
  plVar8 = plVar3;
  if (bVar5 == false) {
LAB_140e4bc3d:
    local_30 = plVar8;
    bVar6 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar7 + 3),param_3);
    if (!bVar6) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140e4bc75;
    }
  }
  else {
    plVar7 = *(longlong **)param_1[6];
    local_30 = plVar3;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 != plVar7) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar3 + 0x69) == '\0') {
        plVar7 = (longlong *)*plVar3;
        if (*(char *)((longlong)plVar7 + 0x69) == '\0') {
          cVar1 = *(char *)(plVar7[2] + 0x69);
          plVar4 = (longlong *)plVar7[2];
          while (plVar8 = plVar7, cVar1 == '\0') {
            cVar1 = *(char *)(plVar4[2] + 0x69);
            plVar7 = plVar4;
            plVar4 = (longlong *)plVar4[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar3[1] + 0x69);
          plVar8 = (longlong *)plVar3[1];
          plVar4 = plVar3;
          while ((plVar7 = plVar8, cVar1 == '\0' && (plVar4 == (longlong *)*plVar7))) {
            cVar1 = *(char *)(plVar7[1] + 0x69);
            plVar8 = (longlong *)plVar7[1];
            plVar4 = plVar7;
            local_30 = plVar7;
          }
          plVar8 = plVar7;
          if (*(char *)((longlong)plVar4 + 0x69) != '\0') {
            _invalid_parameter_noinfo();
            plVar7 = plVar4;
            plVar8 = local_30;
          }
        }
      }
      else {
        plVar7 = (longlong *)plVar3[2];
        plVar8 = plVar7;
        if (*(char *)((longlong)plVar7 + 0x69) != '\0') {
          local_30 = plVar7;
          _invalid_parameter_noinfo();
          plVar8 = local_30;
        }
      }
      goto LAB_140e4bc3d;
    }
    bVar5 = true;
  }
  plVar7 = FUN_140e49510(param_1,&local_38,bVar5,plVar3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar7[1];
  *param_2 = *plVar7;
LAB_140e4bc75:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140e4bca0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar2 + 0x69) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140e78010);
  }
  FUN_140e434c0(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x69) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x69) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x69) == '\0') {
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
        plVar3 = plVar2 + 0xd;
        plVar7 = plVar7 + 0xd;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_140e4be8c;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x69) == '\0') {
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
    if (*(char *)((longlong)plVar9 + 0x69) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x69);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x69);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x69) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x69);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x69);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_140e4be8c:
  if ((char)plVar2[0xd] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[0xd] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[0xd] == '\0') {
            *(undefined1 *)(plVar8 + 0xd) = 1;
            *(undefined1 *)(plVar7 + 0xd) = 0;
            FUN_140e45e50((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x69) == '\0') {
            if ((*(char *)(*plVar8 + 0x68) != '\x01') || (*(char *)(plVar8[2] + 0x68) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x68) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x68) = 1;
                *(undefined1 *)(plVar8 + 0xd) = 0;
                FUN_140e45eb0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 0xd) = (char)plVar7[0xd];
              *(undefined1 *)(plVar7 + 0xd) = 1;
              *(undefined1 *)(plVar8[2] + 0x68) = 1;
              FUN_140e45e50((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0xd) = 0;
          }
        }
        else {
          if ((char)plVar8[0xd] == '\0') {
            *(undefined1 *)(plVar8 + 0xd) = 1;
            *(undefined1 *)(plVar7 + 0xd) = 0;
            FUN_140e45eb0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x69) == '\0') {
            if ((*(char *)(plVar8[2] + 0x68) != '\x01') || (*(char *)(*plVar8 + 0x68) != '\x01')) {
              if (*(char *)(*plVar8 + 0x68) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x68) = 1;
                *(undefined1 *)(plVar8 + 0xd) = 0;
                FUN_140e45e50((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 0xd) = (char)plVar7[0xd];
              *(undefined1 *)(plVar7 + 0xd) = 1;
              *(undefined1 *)(*plVar8 + 0x68) = 1;
              FUN_140e45eb0((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0xd) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 0xd) = 1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar2 + 8));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar2 + 3));
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




undefined8 * FUN_140e4c080(undefined8 *param_1)

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




undefined8 * FUN_140e4c0d0(undefined8 *param_1)

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




undefined8 * FUN_140e4c120(undefined8 *param_1)

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




undefined8 * FUN_140e4c170(undefined8 *param_1)

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




undefined8 * FUN_140e4c1c0(undefined8 *param_1)

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




undefined8 * FUN_140e4c210(undefined8 *param_1)

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




undefined8 * FUN_140e4c260(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (*(char *)((longlong)param_2 + 0x69) == '\0') {
    puVar1 = FUN_140e479a0(param_1,puVar3,param_3,puVar3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 3),
                           *(undefined1 *)(param_2 + 0xd));
    if (*(char *)((longlong)puVar3 + 0x69) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_140e4c260(param_1,(undefined8 *)*param_2,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_140e4c260(param_1,(undefined8 *)param_2[2],puVar1);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 * FUN_140e4c2f0(undefined8 *param_1)

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




void FUN_140e4c340(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)((longlong)plVar7 + 0x1d) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x1d) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x1d);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x1d);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x1d);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x1d);
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




void * FUN_140e4c430(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

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




void FUN_140e4c4d0(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

{
  FUN_140e46690(*(void **)(param_2 + 8),*(void **)(param_3 + 8),param_4);
  return;
}




void FUN_140e4c530(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  FUN_140e48180(*(undefined4 **)(param_2 + 8),*(undefined4 **)(param_3 + 8),param_4);
  return;
}




void FUN_140e4c590(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  }
  return;
}




void FUN_140e4c5e0(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  FUN_140e4a3d0(param_1,param_2,param_3);
  return;
}




void * FUN_140e4c600(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_140e4c640(longlong param_1)

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




void FUN_140e4c690(void *param_1,void *param_2,void *param_3)

{
  FUN_140e46910(param_1,param_2,param_3);
  return;
}




void FUN_140e4c6b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_140e48270(param_1,param_2,param_3);
  return;
}




longlong * FUN_140e4c6d0(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140e4c7a0(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140e4c870(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140e4c9cd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140e4c9fc;
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
      goto LAB_140e4c9cd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140e4ac30(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140e4c9fc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_140e4ca20(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140e4caf0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x1d) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x1d) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_140e4cc4d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140e4cc7c;
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
      if (*(char *)((longlong)plVar6 + 0x1d) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x1d) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x1d);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x1d);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x1d);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x1d);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x1d) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x1d) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_140e4cc4d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140e4b140(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140e4cc7c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong FUN_140e4cca0(longlong *param_1,uint *param_2)

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
  
  FUN_140e48fc0(param_1,&local_38,param_2);
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
    if (*(char *)((longlong)plVar7 + 0x1d) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x1d) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x1d);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x1d);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x1d);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x1d);
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
  FUN_140e4af70(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




longlong * FUN_140e4cde0(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140e4ceb0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x61) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x61) == '\0');
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




undefined8 * FUN_140e4cf80(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140e4d010(longlong *param_1)

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




void FUN_140e4d0d0(undefined8 *param_1)

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




undefined8 * FUN_140e4d110(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  FUN_140e463f0((void *)(*(longlong *)(param_3 + 8) + 0x124),(void *)param_1[4],*(longlong *)(param_3 + 8));
  param_1[4] = param_1[4] + -0x124;
  *param_2 = 0;
  uVar1 = *(ulonglong *)(param_3 + 8);
  if ((uVar1 < (ulonglong)param_1[3]) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




void FUN_140e4d1b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e4b8b0(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




longlong * FUN_140e4d1f0(longlong *param_1,longlong *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar6 = (undefined8 *)((undefined8 *)param_1[6])[1];
  cVar1 = *(char *)((longlong)puVar6 + 0x69);
  puVar2 = (undefined8 *)param_1[6];
  while (cVar1 == '\0') {
    bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar6 + 3),param_3);
    if (bVar3) {
      puVar5 = (undefined8 *)puVar6[2];
      puVar6 = puVar2;
    }
    else {
      puVar5 = (undefined8 *)*puVar6;
    }
    puVar2 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x69);
  }
  puVar6 = (undefined8 *)param_1[6];
  local_20 = puVar2;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar2 == puVar6) ||
     (bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        (param_3,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar2 + 3)), bVar3)) {
    plVar4 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar4 = &local_28;
  }
  *param_2 = *plVar4;
  param_2[1] = plVar4[1];
  return param_2;
}




void FUN_140e4d2d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4d2f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4d310(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4d330(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4d350(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4d370(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4d390(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4d3b0(longlong *param_1)

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
  FUN_140e4b940(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140e4d420(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140e42b70();
    }
    lVar2 = FUN_140e454a0(param_1 + 2,uVar4);
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
    pvVar3 = FUN_140e4c430(param_1,(longlong)&local_28,(longlong)&local_38,(void *)param_1[3]);
    param_1[4] = pvVar3;
  }
  return param_1;
}




undefined8 * FUN_140e4d580(undefined8 *param_1,longlong param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  
  puVar3 = operator_new(8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = param_1;
  }
  *param_1 = puVar3;
  uVar2 = (*(longlong *)(param_2 + 0x20) - *(longlong *)(param_2 + 0x18)) / 0x124;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (uVar2 != 0) {
    if (0xe070381c0e0703 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_140e42d80();
    }
    lVar4 = FUN_140e45540(param_1 + 2,uVar2);
    param_1[3] = lVar4;
    param_1[4] = lVar4;
    param_1[5] = uVar2 * 0x124 + lVar4;
    pvVar5 = *(void **)(param_2 + 0x20);
    if (pvVar5 < *(void **)(param_2 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    pvVar1 = *(void **)(param_2 + 0x18);
    if (*(void **)(param_2 + 0x20) < pvVar1) {
      _invalid_parameter_noinfo();
    }
    pvVar5 = FUN_140e46690(pvVar1,pvVar5,(void *)param_1[3]);
    param_1[4] = pvVar5;
  }
  return param_1;
}




longlong * FUN_140e4d6f0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *param_1;
  param_2[1] = uVar1;
  *param_2 = lVar3;
  pvVar2 = *(void **)(param_4 + 8);
  if ((pvVar2 < (void *)param_1[3]) || ((void *)param_1[4] < pvVar2)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if ((void *)param_2[1] != pvVar2) {
    lVar3 = FUN_140e463f0(pvVar2,(void *)param_1[4],param_2[1]);
    param_1[4] = lVar3;
  }
  return param_2;
}




void FUN_140e4d7e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 8));
  }
  return;
}




void FUN_140e4d830(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8));
    }
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined4 * FUN_140e4d8b0(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  FUN_140e4a3d0(param_2,param_3,param_4);
  return param_2 + param_3 * 0xe;
}




longlong * FUN_140e4d900(longlong *param_1,longlong *param_2,longlong *param_3,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_38;
  longlong *local_30;
  
  if (param_1[7] == 0) {
    FUN_140e49510(param_1,param_2,'\x01',(undefined8 *)param_1[6],(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_4);
  }
  else {
    lVar2 = *(longlong *)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_3[1] == lVar2) {
      bVar5 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        (param_4,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3[1] + 0x18));
      if (bVar5) {
        FUN_140e49510(param_1,param_2,'\x01',(undefined8 *)param_3[1],(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_4);
        return param_2;
      }
    }
    else {
      lVar2 = param_1[6];
      if ((*param_3 == 0) || (*param_3 != *param_1)) {
        _invalid_parameter_noinfo();
      }
      if (param_3[1] == lVar2) {
        bVar5 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_1[6] + 0x10) + 0x18),param_4);
        if (bVar5) {
          FUN_140e49510(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),
                        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_4);
          return param_2;
        }
      }
      else {
        bVar5 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                          (param_4,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3[1] + 0x18));
        if (bVar5) {
          local_38 = *param_3;
          local_30 = (longlong *)param_3[1];
          if (local_38 == 0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)local_30 + 0x69) == '\0') {
            plVar6 = (longlong *)*local_30;
            if (*(char *)((longlong)plVar6 + 0x69) == '\0') {
              cVar1 = *(char *)(plVar6[2] + 0x69);
              plVar7 = (longlong *)plVar6[2];
              while (local_30 = plVar6, cVar1 == '\0') {
                cVar1 = *(char *)(plVar7[2] + 0x69);
                plVar6 = plVar7;
                plVar7 = (longlong *)plVar7[2];
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x69);
              plVar3 = (longlong *)local_30[1];
              plVar7 = local_30;
              while ((plVar6 = plVar3, cVar1 == '\0' && (plVar7 == (longlong *)*plVar6))) {
                cVar1 = *(char *)(plVar6[1] + 0x69);
                plVar3 = (longlong *)plVar6[1];
                plVar7 = plVar6;
              }
              local_30 = plVar6;
              if (*(char *)((longlong)plVar7 + 0x69) != '\0') {
                local_30 = plVar7;
                _invalid_parameter_noinfo();
                plVar6 = plVar7;
              }
            }
          }
          else {
            plVar6 = (longlong *)local_30[2];
            local_30 = plVar6;
            if (*(char *)((longlong)plVar6 + 0x69) != '\0') {
              _invalid_parameter_noinfo();
            }
          }
          bVar5 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar6 + 3),param_4);
          if (bVar5) {
            if (*(char *)(plVar6[2] + 0x69) != '\0') {
              FUN_140e49510(param_1,param_2,'\0',plVar6,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_4);
              return param_2;
            }
            FUN_140e49510(param_1,param_2,'\x01',(undefined8 *)param_3[1],
                          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_4);
            return param_2;
          }
        }
        bVar5 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3[1] + 0x18),param_4);
        if (bVar5) {
          local_38 = *param_3;
          plVar6 = (longlong *)param_1[6];
          local_30 = (longlong *)param_3[1];
          lVar2 = *param_1;
          if (local_38 == 0) {
            _invalid_parameter_noinfo();
          }
          plVar7 = local_30;
          if (*(char *)((longlong)local_30 + 0x69) == '\0') {
            plVar7 = (longlong *)local_30[2];
            if (*(char *)((longlong)plVar7 + 0x69) == '\0') {
              cVar1 = *(char *)(*plVar7 + 0x69);
              plVar3 = (longlong *)*plVar7;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar3 + 0x69);
                plVar7 = plVar3;
                plVar3 = (longlong *)*plVar3;
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x69);
              plVar4 = (longlong *)local_30[1];
              plVar3 = local_30;
              while ((plVar7 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
                cVar1 = *(char *)(plVar7[1] + 0x69);
                plVar4 = (longlong *)plVar7[1];
                plVar3 = plVar7;
              }
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          if ((local_38 == 0) || (local_38 != lVar2)) {
            _invalid_parameter_noinfo();
          }
          if ((plVar7 == plVar6) ||
             (bVar5 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                                (param_4,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar7 + 3)), bVar5)) {
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x69) != '\0') {
              FUN_140e49510(param_1,param_2,'\0',(undefined8 *)param_3[1],
                            (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_4);
              return param_2;
            }
            FUN_140e49510(param_1,param_2,'\x01',plVar7,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar6 = FUN_140e4baf0(param_1,&local_38,param_4);
    *param_2 = *plVar6;
    param_2[1] = plVar6[1];
  }
  return param_2;
}




longlong * FUN_140e4dc60(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140e4b8b0(param_1,*(longlong **)(param_1[6] + 8),plVar5,plVar6);
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
    if (*(char *)(lVar4 + 0x69) == '\0') {
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar5 + 0x69) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x69);
        plVar6 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x69);
          plVar5 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        plVar5 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar5 + 0x69);
        while ((cVar1 == '\0' && (param_3[1] == plVar5[2]))) {
          param_3[1] = (longlong)plVar5;
          plVar5 = (longlong *)plVar5[1];
          cVar1 = *(char *)((longlong)plVar5 + 0x69);
        }
      }
      param_3[1] = (longlong)plVar5;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_140e4bca0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_140e4de40(longlong *param_1)

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
  FUN_140e4dc60(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140e4deb0(undefined8 *param_1)

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




undefined8 * FUN_140e4df00(undefined8 *param_1)

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




undefined8 * FUN_140e4df50(undefined8 *param_1)

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




undefined8 * FUN_140e4dfa0(undefined8 *param_1)

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




undefined8 * FUN_140e4dff0(undefined8 *param_1)

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




undefined8 * FUN_140e4e040(undefined8 *param_1)

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




void FUN_140e4e090(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140e42b70();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140e454a0(param_1 + 0x10,uVar8);
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
      FUN_140e4c600(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140e4c600(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140e47d60(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140e4e340(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar7 = FUN_140e4c260(param_1,*(undefined8 **)(*(longlong *)(param_2 + 0x30) + 8),lVar2);
  *(undefined8 **)(lVar2 + 8) = puVar7;
  plVar3 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x69) != '\0') {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
    return;
  }
  cVar1 = *(char *)(*plVar4 + 0x69);
  plVar6 = (longlong *)*plVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x69);
    plVar4 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar3 = (longlong)plVar4;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
  lVar5 = *(longlong *)(lVar2 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x69);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x69);
    lVar2 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = lVar2;
  return;
}




undefined8 * FUN_140e4e3f0(undefined8 *param_1)

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




undefined4 * FUN_140e4e440(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140e4d420((undefined8 *)(param_1 + 2),(undefined8 *)(param_2 + 2));
  return param_1;
}




undefined4 * FUN_140e4e480(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140e4d580((undefined8 *)(param_1 + 2),(longlong)(param_2 + 2));
  return param_1;
}




void FUN_140e4e4c0(undefined8 param_1,void *param_2,void *param_3,void *param_4)

{
  FUN_140e46910(param_2,param_3,param_4);
  return;
}




void * FUN_140e4e500(void *param_1,uint param_2)

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




void FUN_140e4e580(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_140e48270(param_1,param_2,param_3);
  return;
}




void FUN_140e4e5a0(longlong param_1)

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




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e4e5f0(longlong param_1,uint param_2,int param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint local_res10 [2];
  undefined1 auStack_498 [32];
  undefined8 local_478;
  undefined1 local_470;
  undefined1 local_468;
  undefined8 local_460;
  longlong *local_458;
  longlong local_450;
  char local_448;
  undefined1 local_447 [1022];
  undefined1 local_49;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = DAT_140e79440 ^ (ulonglong)auStack_498;
    local_460 = param_6;
    local_res10[0] = param_2;
    FUN_140e4c7a0((longlong *)(param_1 + 0x88),(longlong *)&local_458,local_res10);
    lVar5 = *(longlong *)(param_1 + 0xb8);
    if ((local_458 == (longlong *)0x0) || (local_458 != *(longlong **)(param_1 + 0x88))) {
      _invalid_parameter_noinfo();
    }
    if (local_450 != lVar5) {
      if (local_458 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *local_458;
      }
      if (local_450 == *(longlong *)(lVar5 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar4 = *(ulonglong *)(local_450 + 0x38);
      if (*(ulonglong *)(local_450 + 0x40) < uVar4) {
        _invalid_parameter_noinfo();
      }
      uVar1 = *(ulonglong *)(local_450 + 0x40);
      plVar3 = *(longlong **)(local_450 + 0x20);
      if (uVar1 < *(ulonglong *)(local_450 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      plVar2 = *(longlong **)(local_450 + 0x20);
      while( true ) {
        if ((plVar3 == (longlong *)0x0) || (plVar3 != plVar2)) {
          _invalid_parameter_noinfo();
        }
        if (uVar4 == uVar1) {
          return;
        }
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar3;
        }
        if (*(ulonglong *)(lVar5 + 0x20) <= uVar4) {
          _invalid_parameter_noinfo();
        }
        if (*(int *)(uVar4 + 0x120) == param_3) break;
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar3;
        }
        if (*(ulonglong *)(lVar5 + 0x20) <= uVar4) {
          _invalid_parameter_noinfo();
        }
        uVar4 = uVar4 + 0x124;
      }
      local_478 = param_4;
      sscanf((char *)(uVar4 + 0x20),"%d %d %lu");
      plVar3 = (longlong *)InstanceGet();
      local_448 = '\0';
      memset(local_447,0,0x3ff);
      _snprintf(&local_448,0x400,"DELETE FROM cq_sys_leaveword WHERE id=%lu LIMIT 1");
      local_49 = 0;
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_448,0,1);
      local_470 = 0;
      local_478 = CONCAT71(local_478._1_7_,local_468);
      FUN_140e463f0((void *)(uVar4 + 0x124),*(void **)(local_450 + 0x40),uVar4);
      *(longlong *)(local_450 + 0x40) = *(longlong *)(local_450 + 0x40) + -0x124;
      if ((uVar4 < *(ulonglong *)(local_450 + 0x38)) || (*(ulonglong *)(local_450 + 0x40) < uVar4)) {
        _invalid_parameter_noinfo();
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e4e850(longlong param_1,uint param_2,char *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  IStringManager *pIVar11;
  undefined8 uVar12;
  char *pcVar13;
  tm *ptVar14;
  longlong lVar15;
  char *pcVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_d88 [32];
  longlong local_d68;
  undefined8 local_d60;
  char *local_d58;
  int local_d50;
  undefined4 local_d48;
  undefined4 local_d40;
  uint local_d38;
  uint local_d34;
  longlong *local_d28;
  undefined4 *puStack_d20;
  char *local_d18;
  __time64_t local_d10;
  longlong *local_d08;
  longlong local_d00;
  undefined8 local_cf8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_cf0 [40];
  longlong local_cc8 [2];
  CMsg local_cb8 [1072];
  CMsg local_888 [1072];
  char local_458 [15];
  undefined1 local_449;
  char local_448 [1023];
  undefined1 local_49;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_cf8 = 0xfffffffffffffffe;
    local_48 = DAT_140e79440 ^ (ulonglong)auStack_d88;
    if ((*(longlong *)(param_1 + 0x308) != 0) && (param_3 != (char *)0x0)) {
      local_d38 = param_2;
      local_d34 = param_2;
      local_d18 = param_3;
      FUN_140e4ceb0((longlong *)(param_1 + 0x2c8),(longlong *)&local_d08,&local_d38);
      lVar19 = *(longlong *)(param_1 + 0x2f8);
      if ((local_d08 == (longlong *)0x0) || (local_d08 != *(longlong **)(param_1 + 0x2c8))) {
        _invalid_parameter_noinfo();
      }
      lVar18 = local_d00;
      if (local_d00 != lVar19) {
        lVar19 = 0;
        if (local_d08 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar15 = lVar19;
        }
        else {
          lVar15 = *local_d08;
        }
        if (local_d00 == *(longlong *)(lVar15 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar1 = (longlong *)(local_d00 + 0x20);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_cf0,param_3)
        ;
        plVar9 = FUN_140e4d1f0(plVar1,local_cc8,local_cf0);
        local_d08 = (longlong *)*plVar9;
        local_d00 = plVar9[1];
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_cf0);
        plVar9 = local_d08;
        lVar18 = *(longlong *)(lVar18 + 0x50);
        if ((local_d08 == (longlong *)0x0) || (local_d08 != (longlong *)*plVar1)) {
          _invalid_parameter_noinfo();
        }
        lVar15 = local_d00;
        if (local_d00 != lVar18) {
          cVar6 = (**(code **)**(undefined8 **)(param_1 + 0x308))(*(undefined8 **)(param_1 + 0x308),param_3);
          if (cVar6 == '\0') {
            local_d10 = 0;
            FUN_140e4cde0((longlong *)(param_1 + 0x288),(longlong *)&local_d28,&local_d38);
            lVar18 = *(longlong *)(param_1 + 0x2b8);
            if ((local_d28 == (longlong *)0x0) || (local_d28 != *(longlong **)(param_1 + 0x288))) {
              _invalid_parameter_noinfo();
            }
            puVar5 = puStack_d20;
            if (puStack_d20 != (undefined4 *)lVar18) {
              if (local_d28 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar18 = lVar19;
              }
              else {
                lVar18 = *local_d28;
              }
              if (puStack_d20 == (undefined4 *)*(longlong *)(lVar18 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              puVar17 = *(undefined4 **)((longlong)puStack_d20 + 0x38);
              if (*(undefined4 **)((longlong)puStack_d20 + 0x40) < puVar17) {
                _invalid_parameter_noinfo();
              }
              plVar1 = *(longlong **)((longlong)puStack_d20 + 0x20);
              pcVar16 = (char *)(puVar17 + 4);
              local_d28 = plVar1;
              puStack_d20 = puVar17;
              do {
                puVar3 = *(undefined4 **)((longlong)puVar5 + 0x40);
                if (puVar3 < *(undefined4 **)((longlong)puVar5 + 0x38)) {
                  _invalid_parameter_noinfo();
                }
                if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)((longlong)puVar5 + 0x20))) {
                  _invalid_parameter_noinfo();
                }
                if (puVar17 == puVar3) goto LAB_140e4ec68;
                if (plVar1 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar18 = lVar19;
                }
                else {
                  lVar18 = *plVar1;
                }
                if (*(undefined4 **)(lVar18 + 0x20) <= puVar17) {
                  _invalid_parameter_noinfo();
                }
                pcVar13 = pcVar16;
                if (0xf < *(ulonglong *)(pcVar16 + 0x18)) {
                  pcVar13 = *(char **)pcVar16;
                }
                lVar18 = (longlong)local_d18 - (longlong)pcVar13;
                do {
                  cVar6 = *pcVar13;
                  cVar2 = pcVar13[lVar18];
                  if (cVar6 != cVar2) break;
                  pcVar13 = pcVar13 + 1;
                } while (cVar2 != '\0');
                if (cVar6 == cVar2) {
                  local_d10 = *(__time64_t *)(puVar17 + 0xc);
LAB_140e4ec68:
                  pcVar16 = local_d18;
                  if (local_d10 == 0) {
                    return;
                  }
                  ptVar14 = _localtime64(&local_d10);
                  if (ptVar14 == (tm *)0x0) {
                    local_d68 = CONCAT44(local_d68._4_4_,0x660);
                    log_InlineLogERROR(&DAT_140e69668,"CHECK",&DAT_140e6b318,"f:\\version\\cqserver-78.0.11-1204\\modules\\leaveword\\src\\leavewordmgr.cpp");
                    return;
                  }
                  local_d48 = ptVar14->tm_sec;
                  local_d50 = ptVar14->tm_min;
                  local_d58 = (char *)CONCAT44(local_d58._4_4_,ptVar14->tm_hour);
                  local_d60 = CONCAT44(local_d60._4_4_,ptVar14->tm_mday);
                  local_d68 = CONCAT44(local_d68._4_4_,ptVar14->tm_mon + 1);
                  _snprintf(local_458,0x10,"%04d%02d%02d%02d%02d%02d",(ulonglong)(ptVar14->tm_year + 0x76c));
                  local_449 = 0;
                  plVar9 = (longlong *)InstanceGet();
                  if (plVar1 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar18 = lVar19;
                  }
                  else {
                    lVar18 = *plVar1;
                  }
                  if (*(undefined4 **)(lVar18 + 0x20) <= puVar17) {
                    _invalid_parameter_noinfo();
                  }
                  if (local_d08 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                  }
                  else {
                    lVar19 = *local_d08;
                  }
                  if (lVar15 == *(longlong *)(lVar19 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  uVar4 = local_d34;
                  if (*(ulonglong *)(lVar15 + 0x60) < 0x10) {
                    lVar15 = lVar15 + 0x48;
                  }
                  else {
                    lVar15 = *(longlong *)(lVar15 + 0x48);
                  }
                  local_d68 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x10))(*(longlong **)(param_1 + 0x308),local_d34);
                  local_d58 = local_458;
                  local_d60 = CONCAT44(local_d60._4_4_,*puVar17);
                  _snprintf(local_448,0x400,"update cq_leaveword set words=\'%s\' where send_name=\'%s\' and recv_id=%lu and time=\'%s\' limit 1",lVar15);
                  local_49 = 0;
                  (**(code **)(*plVar9 + 0x30))(plVar9,local_448,0,1);
                  FUN_140e5ceb0(local_cb8);
                  uVar10 = FUN_140e5cfb0((longlong)local_cb8,5,pcVar16);
                  if ((char)uVar10 != '\0') {
                    (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))(*(longlong **)(param_1 + 0x308),uVar4,local_cb8);
                  }
                  pIVar11 = theInstance();
                  lVar19 = **(longlong **)(param_1 + 0x308);
                  uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_MSG_SENT");
                  (**(code **)(lVar19 + 0x30))(*(undefined8 *)(param_1 + 0x308),uVar4,uVar12);
                  FUN_140e5cf30((undefined8 *)local_cb8);
                  return;
                }
                if (plVar1 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar18 = lVar19;
                }
                else {
                  lVar18 = *plVar1;
                }
                if (*(undefined4 **)(lVar18 + 0x20) <= puVar17) {
                  _invalid_parameter_noinfo();
                }
                puVar17 = puVar17 + 0xe;
                pcVar16 = pcVar16 + 0x38;
              } while( true );
            }
          }
          else {
            FUN_140e5ceb0(local_888);
            uVar10 = FUN_140e5cfb0((longlong)local_888,2,param_3);
            if ((char)uVar10 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))(*(longlong **)(param_1 + 0x308),param_2,local_888);
              pIVar11 = theInstance();
              lVar18 = **(longlong **)(param_1 + 0x308);
              uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_NOFRIEND_LEAVEWORD_ONLINE");
              (**(code **)(lVar18 + 0x30))(*(undefined8 *)(param_1 + 0x308),param_2,uVar12,param_3);
            }
            if (plVar9 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
            }
            else {
              lVar19 = *plVar9;
            }
            if (lVar15 == *(longlong *)(lVar19 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            uVar4 = local_d34;
            if (*(ulonglong *)(lVar15 + 0x60) < 0x10) {
              lVar15 = lVar15 + 0x48;
            }
            else {
              lVar15 = *(longlong *)(lVar15 + 0x48);
            }
            plVar1 = *(longlong **)(param_1 + 0x308);
            lVar19 = *plVar1;
            uVar7 = (**(code **)(lVar19 + 0x50))(plVar1,local_d34);
            uVar12 = (**(code **)(*plVar1 + 0x10))(plVar1,uVar4);
            pcVar16 = local_d18;
            uVar8 = (**(code **)(*plVar1 + 0x58))(plVar1,local_d18);
            local_d48 = (uint)local_d48._2_2_ << 0x10;
            local_d50 = CONCAT22(local_d50._2_2_,0x7d1);
            local_d58 = (char *)CONCAT44(local_d58._4_4_,0xffffff);
            local_d60 = 0;
            local_d68 = lVar15;
            local_d40 = uVar7;
            (**(code **)(lVar19 + 0x20))(*(undefined8 *)(param_1 + 0x308),uVar8,uVar12,pcVar16);
            FUN_140e5cf30((undefined8 *)local_888);
          }
        }
      }
    }
  }
  return;
}




ulonglong FUN_140e4ee80(longlong param_1,uint param_2)

{
  ulonglong in_RAX;
  longlong *plVar1;
  longlong *extraout_RAX;
  ulonglong uVar2;
  longlong lVar3;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_res10[0] = param_2;
  plVar1 = FUN_140e4ca20((longlong *)(param_1 + 0x208),(longlong *)&local_18,local_res10);
  lVar3 = *(longlong *)(param_1 + 0x238);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x208))) {
    _invalid_parameter_noinfo();
    plVar1 = extraout_RAX;
  }
  if (local_10 != lVar3) {
    if (local_18 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = 0;
    }
    else {
      lVar3 = *local_18;
    }
    if (local_10 == *(longlong *)(lVar3 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar2 = FUN_140e44a80(local_10 + 0x1c,0x3c);
    return uVar2;
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}




void FUN_140e4ef30(longlong *param_1)

{
  FUN_140e4d3b0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e4ef60(longlong *param_1)

{
  FUN_140e4b480(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined4 * FUN_140e4ef90(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  FUN_140e4d420((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}




undefined4 * FUN_140e4efc0(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  *param_1 = *param_2;
  FUN_140e4d580((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}




void FUN_140e4eff0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  
  pvVar1 = (void *)param_1[4];
  if (pvVar1 < (void *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  pvVar2 = (void *)param_1[3];
  if ((void *)param_1[4] < pvVar2) {
    _invalid_parameter_noinfo();
  }
  if ((pvVar2 < (void *)param_1[3]) || ((void *)param_1[4] < pvVar2)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *param_1;
  if ((pvVar1 < (void *)param_1[3]) || ((void *)param_1[4] < pvVar1)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar3 == 0) || (lVar3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (pvVar2 != pvVar1) {
    lVar3 = FUN_140e463f0(pvVar1,(void *)param_1[4],(longlong)pvVar2);
    param_1[4] = lVar3;
  }
  return;
}




void FUN_140e4f0a0(undefined8 *param_1)

{
  FUN_140e4d830((longlong)param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140e4f0d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_140e46490((undefined4 *)(*(longlong *)(param_3 + 8) + 0x38),(undefined4 *)param_1[4],*(longlong *)(param_3 + 8));
  lVar1 = param_1[4];
  for (lVar3 = lVar1 + -0x38; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 8));
  }
  param_1[4] = param_1[4] + -0x38;
  uVar2 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if ((uVar2 < (ulonglong)param_1[3]) || ((ulonglong)param_1[4] < uVar2)) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar2;
  return param_2;
}




undefined8 * FUN_140e4f1b0(longlong *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  char cVar1;
  bool bVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  longlong local_90 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [40];
  
  local_98 = 0xfffffffffffffffe;
  puVar7 = (undefined8 *)((undefined8 *)param_1[6])[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x69);
  puVar8 = (undefined8 *)param_1[6];
  while (cVar1 == '\0') {
    bVar2 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar7 + 3),param_2);
    if (bVar2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar8;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar8 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x69);
  }
  plVar6 = (longlong *)*param_1;
  puVar7 = (undefined8 *)param_1[6];
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar8 == puVar7) ||
     (bVar2 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        (param_2,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar8 + 3)), bVar2)) {
    local_a8 = plVar6;
    puStack_a0 = puVar8;
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_80,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_2);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58,pbVar3);
    plVar4 = FUN_140e4d900(param_1,local_90,(longlong *)&local_a8,local_80);
    plVar6 = (longlong *)*plVar4;
    puVar8 = (undefined8 *)plVar4[1];
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_80);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30);
  }
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  if (puVar8 == *(undefined8 **)(lVar9 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return puVar8 + 8;
}




void FUN_140e4f330(longlong *param_1)

{
  FUN_140e4de40(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140e4f360(longlong *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

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
  
  FUN_140e493b0(param_1,&local_38,param_2);
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
    if (*(char *)((longlong)plVar7 + 0x69) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x69) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x69);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x69);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x69);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x69);
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
  FUN_140e4dc60(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




undefined8 * FUN_140e4f4a0(undefined8 *param_1)

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
  lVar2 = FUN_140e476a0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140e4f520(undefined8 *param_1)

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
  lVar2 = FUN_140e47700();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140e4f5a0(undefined8 *param_1)

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
  lVar2 = FUN_140e47760();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x25) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140e4f620(undefined8 *param_1)

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
  lVar2 = FUN_140e477c0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140e4f6a0(undefined8 *param_1)

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
  lVar2 = FUN_140e47820();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140e4f720(undefined8 *param_1)

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
  lVar2 = FUN_140e47880();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x61) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_140e4f7a0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140e4e090((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140e4f894;
  }
  _invalid_parameter_noinfo();
LAB_140e4f894:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140e4f8d0(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  puVar3 = operator_new(8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = param_1;
  }
  *param_1 = puVar3;
  uVar2 = (*(longlong *)(param_2 + 0x20) - *(longlong *)(param_2 + 0x18)) / 0x38;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (uVar2 != 0) {
    if (0x492492492492492 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_140e42e10();
    }
    lVar4 = FUN_140e45660(param_1 + 2,uVar2);
    param_1[3] = lVar4;
    param_1[4] = lVar4;
    param_1[5] = uVar2 * 0x38 + lVar4;
    puVar5 = *(undefined4 **)(param_2 + 0x20);
    if (puVar5 < *(undefined4 **)(param_2 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    puVar1 = *(undefined4 **)(param_2 + 0x18);
    if (*(undefined4 **)(param_2 + 0x20) < puVar1) {
      _invalid_parameter_noinfo();
    }
    puVar5 = FUN_140e48180(puVar1,puVar5,(undefined4 *)param_1[3]);
    param_1[4] = puVar5;
  }
  return param_1;
}




longlong * FUN_140e4fa40(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  puVar2 = *(undefined4 **)(param_4 + 8);
  if ((puVar2 < (undefined4 *)param_1[3]) || ((undefined4 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if ((undefined4 *)param_2[1] != puVar2) {
    lVar4 = FUN_140e46490(puVar2,(undefined4 *)param_1[4],param_2[1]);
    lVar3 = param_1[4];
    for (lVar5 = lVar4; lVar5 != lVar3; lVar5 = lVar5 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar5 + 8));
    }
    param_1[4] = lVar4;
  }
  return param_2;
}




undefined8 * FUN_140e4fb60(undefined8 *param_1)

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
  lVar2 = FUN_140e47940();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x69) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140e4fbe0(undefined8 *param_1,longlong param_2)

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
  lVar2 = FUN_140e47940();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x69) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  FUN_140e4e340((longlong)param_1,param_2);
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e4fc70(longlong param_1,longlong param_2,ulonglong param_3,void *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined1 local_198;
  undefined4 local_194;
  void *local_190;
  void *local_188;
  undefined8 local_180;
  undefined1 local_178 [304];
  ulonglong local_48;
  
  local_180 = 0xfffffffffffffffe;
  local_48 = DAT_140e79440 ^ (ulonglong)auStack_1c8;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(longlong *)(param_1 + 0x28) - lVar2) / 0x124;
  }
  if (param_3 != 0) {
    pvVar5 = *(void **)(param_1 + 0x20);
    lVar2 = ((longlong)pvVar5 - lVar2) / 0x124;
    local_190 = param_4;
    if (0xe070381c0e0703U - lVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140e42d80();
    }
    uVar1 = lVar2 + param_3;
    if (uVar4 < uVar1) {
      if (0xe070381c0e0703 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
      }
      pvVar3 = (void *)FUN_140e45540(param_1 + 0x10,uVar4);
      lVar2 = (*(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18)) / 0x124;
      local_1a0 = 0;
      local_1a8 = local_198;
      local_188 = pvVar3;
      FUN_140e48040((void *)(lVar2 * 0x124 + (longlong)pvVar3),param_3,local_190);
      local_194 = 1;
      local_1a0 = 0;
      local_1a8 = local_198;
      FUN_140e46910(*(void **)(param_1 + 0x18),*(void **)(param_2 + 8),pvVar3);
      local_194 = 2;
      local_1a0 = 0;
      local_1a8 = local_198;
      FUN_140e46910(*(void **)(param_2 + 8),*(void **)(param_1 + 0x20),(void *)((param_3 + lVar2) * 0x124 + (longlong)pvVar3));
      pvVar5 = *(void **)(param_1 + 0x18);
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      *(void **)(param_1 + 0x28) = (void *)(uVar4 * 0x124 + (longlong)pvVar3);
      *(void **)(param_1 + 0x20) = (void *)((param_3 + (lVar2 - (longlong)pvVar5) / 0x124) * 0x124 + (longlong)pvVar3);
      *(void **)(param_1 + 0x18) = pvVar3;
    }
    else if ((ulonglong)(((longlong)pvVar5 - *(longlong *)(param_2 + 8)) / 0x124) < param_3) {
      memcpy(local_178,param_4,0x124);
      local_1a0 = 0;
      local_1a8 = local_198;
      FUN_140e46910(*(void **)(param_2 + 8),pvVar5,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 0x124));
      local_1a0 = 0;
      local_1a8 = local_198;
      FUN_140e48040(*(void **)(param_1 + 0x20),param_3 - ((longlong)*(void **)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x124,local_178);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x124;
      lVar2 = *(longlong *)(param_1 + 0x20);
      for (pvVar5 = *(void **)(param_2 + 8); pvVar5 != (void *)(lVar2 + param_3 * -0x124); pvVar5 = (void *)((longlong)pvVar5 + 0x124)) {
        memcpy(pvVar5,local_178,0x124);
      }
    }
    else {
      memcpy(local_178,param_4,0x124);
      pvVar6 = (void *)((longlong)pvVar5 + param_3 * -0x124);
      local_1a0 = 0;
      local_1a8 = local_198;
      pvVar3 = FUN_140e46910(pvVar6,pvVar5,pvVar5);
      *(void **)(param_1 + 0x20) = pvVar3;
      local_1a0 = 0;
      local_1a8 = local_198;
      FUN_140e46700(*(void **)(param_2 + 8),pvVar6,(longlong)pvVar5);
      pvVar5 = *(void **)(param_2 + 8);
      pvVar3 = (void *)(param_3 * 0x124 + (longlong)pvVar5);
      for (; pvVar5 != pvVar3; pvVar5 = (void *)((longlong)pvVar5 + 0x124)) {
        memcpy(pvVar5,local_178,0x124);
      }
    }
  }
  return;
}




undefined8 * FUN_140e50020(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  FUN_140e4d420(param_1 + 4,(undefined8 *)(param_5 + 2));
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  return param_1;
}




undefined8 * FUN_140e50080(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  FUN_140e4d580(param_1 + 4,(longlong)(param_5 + 2));
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  return param_1;
}




undefined4 * FUN_140e500e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140e4f8d0((undefined8 *)(param_1 + 2),(longlong)(param_2 + 2));
  return param_1;
}




void FUN_140e50120(longlong param_1)

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




void FUN_140e50170(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  FUN_140e48270(param_2,param_3,param_4);
  return;
}




void FUN_140e501b0(longlong param_1)

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




void FUN_140e50200(longlong *param_1)

{
  FUN_140e4d3b0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e50230(longlong *param_1)

{
  FUN_140e4b480(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e50260(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  __time64_t _Var6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  uint local_res10 [2];
  __time64_t local_res18;
  longlong *local_78;
  ulonglong uStack_70;
  longlong *local_68;
  longlong *local_58;
  longlong *local_48;
  ulonglong uStack_40;
  longlong *local_38 [2];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_140e4cca0(param_1 + 0x49,local_res10);
    FUN_140e4cde0(param_1 + 0x51,(longlong *)&local_78,local_res10);
    plVar10 = local_78;
    uVar11 = param_1[0x57];
    local_68 = (longlong *)param_1[0x51];
    if ((local_78 == (longlong *)0x0) || (local_78 != local_68)) {
      _invalid_parameter_noinfo();
    }
    uVar4 = uStack_70;
    if (uStack_70 != uVar11) {
      if (plVar10 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar13 = 0;
      }
      else {
        lVar13 = *plVar10;
      }
      if (uStack_70 == *(ulonglong *)(lVar13 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      _Var6 = _time64((__time64_t *)0x0);
      uVar11 = *(ulonglong *)(uStack_70 + 0x38);
      local_78 = (longlong *)0x0;
      local_res18 = _Var6;
      if (*(ulonglong *)(uStack_70 + 0x40) < uVar11) {
        _invalid_parameter_noinfo();
      }
      plVar10 = *(longlong **)(uStack_70 + 0x20);
      local_78 = plVar10;
      uStack_70 = uVar11;
      _tzset();
      while( true ) {
        uVar3 = *(ulonglong *)(uVar4 + 0x40);
        local_58 = (longlong *)0x0;
        if (uVar3 < *(ulonglong *)(uVar4 + 0x38)) {
          _invalid_parameter_noinfo();
        }
        local_58 = *(longlong **)(uVar4 + 0x20);
        if ((plVar10 == (longlong *)0x0) || (plVar10 != local_58)) {
          _invalid_parameter_noinfo();
        }
        if (uVar11 == uVar3) break;
        if (plVar10 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = 0;
        }
        else {
          lVar13 = *plVar10;
        }
        if (*(ulonglong *)(lVar13 + 0x20) <= uVar11) {
          _invalid_parameter_noinfo();
        }
        plVar7 = __timezone();
        iVar1 = *(int *)(uVar11 + 0x30);
        iVar2 = *plVar7;
        plVar7 = __timezone();
        uVar5 = ((int)_Var6 - *plVar7) / 0x15180 - (iVar1 - iVar2) / 0x15180;
        uVar9 = (int)uVar5 >> 0x1f;
        if ((int)((uVar5 ^ uVar9) - uVar9) < 1) {
          if (plVar10 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar13 = 0;
          }
          else {
            lVar13 = *plVar10;
          }
          if (*(ulonglong *)(lVar13 + 0x20) <= uVar11) {
            _invalid_parameter_noinfo();
          }
          uVar11 = uVar11 + 0x38;
          uStack_70 = uVar11;
        }
        else {
          local_48 = local_78;
          uStack_40 = uStack_70;
          puVar8 = FUN_140e4f0d0((undefined8 *)(uVar4 + 0x20),local_38,(longlong)&local_48);
          plVar10 = (longlong *)*puVar8;
          uVar11 = puVar8[1];
          local_78 = plVar10;
          uStack_70 = uVar11;
        }
      }
    }
    puVar12 = local_res10;
    FUN_140e4ceb0(param_1 + 0x59,(longlong *)&local_78,puVar12);
    plVar10 = local_78;
    uVar11 = param_1[0x5f];
    local_38[0] = (longlong *)param_1[0x59];
    if ((local_78 == (longlong *)0x0) || (local_78 != local_38[0])) {
      _invalid_parameter_noinfo();
    }
    uVar4 = uStack_70;
    if (uStack_70 != uVar11) {
      if (plVar10 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar13 = 0;
      }
      else {
        lVar13 = *plVar10;
      }
      if (uVar4 == *(ulonglong *)(lVar13 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4b8b0(uVar4 + 0x20,*(longlong **)(*(longlong *)(uVar4 + 0x50) + 8),puVar12,param_4);
      *(longlong *)(*(longlong *)(uVar4 + 0x50) + 8) = *(longlong *)(uVar4 + 0x50);
      *(undefined8 *)(uVar4 + 0x58) = 0;
      *(undefined8 *)*(undefined8 *)(uVar4 + 0x50) = *(undefined8 *)(uVar4 + 0x50);
      *(longlong *)(*(longlong *)(uVar4 + 0x50) + 0x10) = *(longlong *)(uVar4 + 0x50);
    }
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
  }
  return;
}




void FUN_140e50560(longlong *param_1)

{
  FUN_140e4de40(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e50590(longlong param_1)

{
  FUN_140e4de40((longlong *)(param_1 + 8));
  operator_delete(*(void **)(param_1 + 8));
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e505d0(longlong param_1,uint param_2,char *param_3)

{
  longlong lVar1;
  uint local_res10 [4];
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [40];
  ulonglong local_28;
  
  if (param_2 != 0) {
    local_58 = 0xfffffffffffffffe;
    local_28 = DAT_140e79440 ^ (ulonglong)auStack_88;
    if (param_3 != (char *)0x0) {
      local_res10[0] = param_2;
      FUN_140e4ceb0((longlong *)(param_1 + 0x2c8),(longlong *)&local_68,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x2f8);
      if ((local_68 == (longlong *)0x0) || (local_68 != *(longlong **)(param_1 + 0x2c8))) {
        _invalid_parameter_noinfo();
      }
      if (local_60 != lVar1) {
        if (local_68 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar1 = 0;
        }
        else {
          lVar1 = *local_68;
        }
        if (local_60 == *(longlong *)(lVar1 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,param_3);
        FUN_140e4f360((longlong *)(local_60 + 0x20),local_50);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50);
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e506b0(longlong param_1,uint param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  uint local_res10 [6];
  undefined1 auStackY_f8 [32];
  longlong *local_c0;
  longlong local_b8;
  longlong *local_a8;
  undefined4 *puStack_a0;
  longlong *local_98;
  undefined4 *puStack_90;
  undefined8 local_88;
  undefined4 local_80;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_78 [24];
  __uint64 local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_88 = 0xfffffffffffffffe;
    local_48 = DAT_140e79440 ^ (ulonglong)auStackY_f8;
    if (param_3 != (char *)0x0) {
      local_res10[0] = param_2;
      FUN_140e4cde0((longlong *)(param_1 + 0x288),(longlong *)&local_c0,local_res10);
      plVar9 = local_c0;
      lVar6 = *(longlong *)(param_1 + 0x2b8);
      if ((local_c0 == (longlong *)0x0) || (local_c0 != *(longlong **)(param_1 + 0x288))) {
        _invalid_parameter_noinfo();
      }
      if (local_b8 != lVar6) {
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar9;
        }
        if (local_b8 == *(longlong *)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        puVar8 = *(undefined4 **)(local_b8 + 0x38);
        if (*(undefined4 **)(local_b8 + 0x40) < puVar8) {
          _invalid_parameter_noinfo();
        }
        plVar9 = *(longlong **)(local_b8 + 0x20);
        while( true ) {
          puVar2 = *(undefined4 **)(local_b8 + 0x40);
          if (puVar2 < *(undefined4 **)(local_b8 + 0x38)) {
            _invalid_parameter_noinfo();
          }
          if ((plVar9 == (longlong *)0x0) || (plVar9 != *(longlong **)(local_b8 + 0x20))) {
            _invalid_parameter_noinfo();
          }
          if (puVar8 == puVar2) break;
          if (plVar9 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = 0;
          }
          else {
            lVar6 = *plVar9;
          }
          if (*(undefined4 **)(lVar6 + 0x20) <= puVar8) {
            _invalid_parameter_noinfo();
          }
          local_80 = *puVar8;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                    (local_78,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(puVar8 + 2));
          local_50 = *(undefined8 *)(puVar8 + 0xc);
          uVar5 = 0xffffffffffffffff;
          pcVar7 = param_3;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          iVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare(local_78,0,local_60,param_3,~uVar5 - 1);
          if (iVar4 == 0) {
            FUN_140e46490(puVar8 + 0xe,*(undefined4 **)(local_b8 + 0x40),(longlong)puVar8);
            plVar3 = *(longlong **)(local_b8 + 0x40);
            for (plVar9 = plVar3 + -7; local_c0 = plVar9, plVar9 != plVar3; plVar9 = plVar9 + 7) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar9 + 1));
            }
            *(longlong *)(local_b8 + 0x40) = *(longlong *)(local_b8 + 0x40) + -0x38;
            if ((puVar8 < *(undefined4 **)(local_b8 + 0x38)) || (*(undefined4 **)(local_b8 + 0x40) < puVar8)) {
              _invalid_parameter_noinfo();
            }
            local_a8 = *(longlong **)(local_b8 + 0x20);
            puStack_a0 = puVar8;
            local_98 = local_a8;
            puStack_90 = puVar8;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_78);
            puVar8 = puStack_a0;
            plVar9 = local_a8;
          }
          else {
            if (plVar9 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar6 = 0;
            }
            else {
              lVar6 = *plVar9;
            }
            if (*(undefined4 **)(lVar6 + 0x20) <= puVar8) {
              _invalid_parameter_noinfo();
            }
            puVar8 = puVar8 + 0xe;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_78);
          }
        }
      }
    }
  }
  return;
}




bool FUN_140e50920(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  bool bVar4;
  long *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint local_res10 [2];
  int local_res18;
  __time64_t local_res20;
  ulonglong *local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong *local_58;
  ulonglong uStack_50;
  ulonglong *local_48;
  ulonglong uStack_40;
  ulonglong uVar11;
  
  local_68 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    bVar4 = false;
  }
  else {
    local_res10[0] = param_2;
    local_res20 = _time64((__time64_t *)0x0);
    uVar9 = 0;
    local_res18 = 0;
    FUN_140e4cde0((longlong *)(param_1 + 0x288),(longlong *)&local_78,local_res10);
    puVar8 = local_78;
    lVar2 = *(longlong *)(param_1 + 0x2b8);
    if ((local_78 == (ulonglong *)0x0) || (local_78 != *(ulonglong **)(param_1 + 0x288))) {
      _invalid_parameter_noinfo();
    }
    if (local_70 == lVar2) {
      bVar4 = true;
    }
    else {
      if (puVar8 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar6 = uVar9;
      }
      else {
        uVar6 = *puVar8;
      }
      if (local_70 == *(longlong *)(uVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar6 = *(ulonglong *)(local_70 + 0x38);
      if (*(ulonglong *)(local_70 + 0x40) < uVar6) {
        _invalid_parameter_noinfo();
      }
      puVar8 = *(ulonglong **)(local_70 + 0x20);
      _tzset();
      uVar11 = uVar9;
      while( true ) {
        uVar7 = *(ulonglong *)(local_70 + 0x40);
        if (uVar7 < *(ulonglong *)(local_70 + 0x38)) {
          _invalid_parameter_noinfo();
        }
        if ((puVar8 == (ulonglong *)0x0) || (puVar8 != *(ulonglong **)(local_70 + 0x20))) {
          _invalid_parameter_noinfo();
        }
        if (uVar6 == uVar7) goto LAB_140e50bb7;
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        if (10000 < uVar10) break;
        if (puVar8 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar7 = uVar9;
        }
        else {
          uVar7 = *puVar8;
        }
        if (*(ulonglong *)(uVar7 + 0x20) <= uVar6) {
          _invalid_parameter_noinfo();
        }
        plVar5 = __timezone();
        iVar1 = *plVar5;
        lVar2 = *(longlong *)(uVar6 + 0x30);
        plVar5 = __timezone();
        if ((local_res20 - *plVar5) / 0x15180 == (lVar2 - iVar1) / 0x15180) {
          local_res18 = local_res18 + 1;
          if (puVar8 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar7 = uVar9;
          }
          else {
            uVar7 = *puVar8;
          }
          if (*(ulonglong *)(uVar7 + 0x20) <= uVar6) {
            _invalid_parameter_noinfo();
          }
          uVar6 = uVar6 + 0x38;
        }
        else {
          FUN_140e46490((undefined4 *)(uVar6 + 0x38),*(undefined4 **)(local_70 + 0x40),uVar6);
          puVar3 = *(ulonglong **)(local_70 + 0x40);
          for (puVar8 = puVar3 + -7; local_78 = puVar8, puVar8 != puVar3; puVar8 = puVar8 + 7) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar8 + 1));
          }
          *(longlong *)(local_70 + 0x40) = *(longlong *)(local_70 + 0x40) + -0x38;
          if ((uVar6 < *(ulonglong *)(local_70 + 0x38)) || (*(ulonglong *)(local_70 + 0x40) < uVar6)) {
            _invalid_parameter_noinfo();
          }
          puVar8 = *(ulonglong **)(local_70 + 0x20);
          local_58 = puVar8;
          uStack_50 = uVar6;
          local_48 = puVar8;
          uStack_40 = uVar6;
        }
      }
      log_InlineLogERROR(&DAT_140e69668,"DEAD_LOOP_BREAK","uLoopCount","f:\\version\\cqserver-78.0.11-1204\\modules\\leaveword\\src\\leavewordmgr.cpp",0x6cd);
LAB_140e50bb7:
      bVar4 = local_res18 < 5;
    }
  }
  return bVar4;
}




ulonglong FUN_140e50be0(longlong param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  longlong *plVar5;
  longlong *extraout_RAX_00;
  longlong *extraout_RAX_01;
  longlong *extraout_RAX_02;
  longlong *extraout_RAX_03;
  long *plVar6;
  longlong *extraout_RAX_04;
  longlong *extraout_RAX_05;
  longlong *extraout_RAX_06;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  uint local_res10 [4];
  __time64_t local_res20;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_58;
  ulonglong uStack_50;
  longlong *local_48;
  ulonglong uStack_40;
  
  local_68 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    uVar7 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_res10[0] = param_2;
    if (param_3 == (char *)0x0) {
      log_InlineLogERROR("pszRecv == NULL, %s, %d.","f:\\version\\cqserver-78.0.11-1204\\modules\\leaveword\\src\\leavewordmgr.cpp",0x6e9);
      uVar7 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      local_res20 = _time64((__time64_t *)0x0);
      plVar5 = FUN_140e4cde0((longlong *)(param_1 + 0x288),(longlong *)&local_78,local_res10);
      plVar9 = local_78;
      lVar8 = *(longlong *)(param_1 + 0x2b8);
      if ((local_78 == (longlong *)0x0) || (local_78 != *(longlong **)(param_1 + 0x288))) {
        _invalid_parameter_noinfo();
        plVar5 = extraout_RAX_00;
      }
      if (local_70 == lVar8) {
        uVar7 = (ulonglong)plVar5 & 0xffffffffffffff00;
      }
      else {
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar9;
        }
        if (local_70 == *(longlong *)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar7 = *(ulonglong *)(local_70 + 0x38);
        if (*(ulonglong *)(local_70 + 0x40) < uVar7) {
          _invalid_parameter_noinfo();
        }
        plVar9 = *(longlong **)(local_70 + 0x20);
        _tzset();
        uVar10 = 0;
        plVar5 = extraout_RAX_01;
LAB_140e50cf0:
        uVar3 = *(ulonglong *)(local_70 + 0x40);
        if (uVar3 < *(ulonglong *)(local_70 + 0x38)) {
          _invalid_parameter_noinfo();
          plVar5 = extraout_RAX_02;
        }
        if ((plVar9 == (longlong *)0x0) || (plVar9 != *(longlong **)(local_70 + 0x20))) {
          _invalid_parameter_noinfo();
          plVar5 = extraout_RAX_03;
        }
        if (uVar7 == uVar3) {
LAB_140e50ef9:
          return (ulonglong)plVar5 & 0xffffffffffffff00;
        }
        uVar10 = uVar10 + 1;
        if (10000 < uVar10) {
          log_InlineLogERROR(&DAT_140e69668,"DEAD_LOOP_BREAK","uLoopCount","f:\\version\\cqserver-78.0.11-1204\\modules\\leaveword\\src\\leavewordmgr.cpp",0x700
                            );
          plVar5 = extraout_RAX_06;
          goto LAB_140e50ef9;
        }
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar9;
        }
        if (*(ulonglong *)(lVar8 + 0x20) <= uVar7) {
          _invalid_parameter_noinfo();
        }
        plVar6 = __timezone();
        iVar2 = *plVar6;
        lVar8 = *(longlong *)(uVar7 + 0x30);
        plVar6 = __timezone();
        if ((local_res20 - *plVar6) / 0x15180 != (lVar8 - iVar2) / 0x15180) {
          FUN_140e46490((undefined4 *)(uVar7 + 0x38),*(undefined4 **)(local_70 + 0x40),uVar7);
          plVar5 = *(longlong **)(local_70 + 0x40);
          for (plVar9 = plVar5 + -7; local_78 = plVar9, plVar9 != plVar5; plVar9 = plVar9 + 7) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar9 + 1));
          }
          *(longlong *)(local_70 + 0x40) = *(longlong *)(local_70 + 0x40) + -0x38;
          if ((uVar7 < *(ulonglong *)(local_70 + 0x38)) || (*(ulonglong *)(local_70 + 0x40) < uVar7)) {
            _invalid_parameter_noinfo();
          }
          plVar5 = *(longlong **)(local_70 + 0x20);
          plVar9 = plVar5;
          local_58 = plVar5;
          uStack_50 = uVar7;
          local_48 = plVar5;
          uStack_40 = uVar7;
          goto LAB_140e50cf0;
        }
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar9;
        }
        if (*(ulonglong *)(lVar8 + 0x20) <= uVar7) {
          _invalid_parameter_noinfo();
        }
        if (*(ulonglong *)(uVar7 + 0x28) < 0x10) {
          lVar8 = uVar7 + 0x10;
        }
        else {
          lVar8 = *(longlong *)(uVar7 + 0x10);
        }
        plVar5 = (longlong *)param_3;
        do {
          lVar4 = *plVar5;
          cVar1 = *(char *)((longlong)plVar5 + (lVar8 - (longlong)param_3));
          if ((char)lVar4 != cVar1) break;
          plVar5 = (longlong *)((longlong)plVar5 + 1);
        } while (cVar1 != '\0');
        if ((char)lVar4 != cVar1) {
          if (plVar9 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
            plVar5 = extraout_RAX_04;
          }
          else {
            lVar8 = *plVar9;
          }
          if (*(ulonglong *)(lVar8 + 0x20) <= uVar7) {
            _invalid_parameter_noinfo();
            plVar5 = extraout_RAX_05;
          }
          uVar7 = uVar7 + 0x38;
          goto LAB_140e50cf0;
        }
        uVar7 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
      }
    }
  }
  return uVar7;
}




void FUN_140e50f20(longlong param_1)

{
  FUN_140e4d830(param_1 + 8);
  operator_delete(*(void **)(param_1 + 8));
  return;
}




undefined8 * FUN_140e50f60(undefined8 *param_1)

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
  lVar2 = FUN_140e47760();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x25) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140e50fe0(undefined8 *param_1)

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
  lVar2 = FUN_140e477c0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140e51060(longlong *param_1,undefined8 *param_2)

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
  FUN_140e4f7a0(param_1,local_18,&local_28,param_2);
  return;
}




undefined4 * FUN_140e51110(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  *param_1 = *param_2;
  FUN_140e4f8d0((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}




void FUN_140e51140(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar1 = (undefined4 *)param_1[4];
  if (puVar1 < (undefined4 *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  puVar2 = (undefined4 *)param_1[3];
  if ((undefined4 *)param_1[4] < puVar2) {
    _invalid_parameter_noinfo();
  }
  if ((puVar2 < (undefined4 *)param_1[3]) || ((undefined4 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *param_1;
  if ((puVar1 < (undefined4 *)param_1[3]) || ((undefined4 *)param_1[4] < puVar1)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar3 == 0) || (lVar3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (puVar2 != puVar1) {
    lVar4 = FUN_140e46490(puVar1,(undefined4 *)param_1[4],(longlong)puVar2);
    lVar3 = param_1[4];
    for (lVar5 = lVar4; lVar5 != lVar3; lVar5 = lVar5 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar5 + 8));
    }
    param_1[4] = lVar4;
  }
  return;
}




undefined8 * FUN_140e51230(undefined8 *param_1)

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
  lVar2 = FUN_140e47940();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x69) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140e512b0(undefined8 *param_1,longlong param_2)

{
  FUN_140e4fbe0(param_1,param_2);
  return param_1;
}




void FUN_140e512e0(undefined8 param_1,longlong param_2)

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




longlong * FUN_140e51330(longlong *param_1,longlong *param_2,longlong *param_3,void *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_28;
  ulonglong uStack_20;
  
  uVar4 = param_1[3];
  lVar5 = param_1[4] - uVar4;
  lVar2 = 0;
  lVar6 = lVar5 >> 0x3f;
  lVar3 = lVar2;
  if (lVar5 / 0x124 + lVar6 != lVar6) {
    if ((ulonglong)param_1[4] < uVar4) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar3 = (longlong)(param_3[1] - uVar4) / 0x124;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_140e4fc70((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar4 = param_1[3];
  if ((ulonglong)param_1[4] < uVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  local_28 = plVar1;
  uStack_20 = uVar4;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = lVar2;
  }
  else {
    lVar6 = *plVar1;
  }
  uVar4 = lVar3 * 0x124 + uVar4;
  if (uVar4 <= *(ulonglong *)(lVar6 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x18) <= uVar4) goto LAB_140e51455;
  }
  _invalid_parameter_noinfo();
LAB_140e51455:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar4;
  return param_2;
}




undefined8 * FUN_140e514a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    FUN_140e4d420(puVar1 + 4,(undefined8 *)(param_5 + 2));
    *(undefined1 *)(puVar1 + 10) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x51) = 0;
  }
  return puVar1;
}




undefined8 * FUN_140e51540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    FUN_140e4d580(puVar1 + 4,(longlong)(param_5 + 2));
    *(undefined1 *)(puVar1 + 10) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x51) = 0;
  }
  return puVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e515e0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_88 = 0xfffffffffffffffe;
  local_48 = DAT_140e79440 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(longlong *)(param_1 + 0x28) - lVar2) / 0x38;
  }
  if (param_3 != 0) {
    lVar2 = (*(longlong *)(param_1 + 0x20) - lVar2) / 0x38;
    local_b0 = param_2;
    local_a8 = param_1;
    local_a0 = param_3;
    local_90 = param_4;
    if (0x492492492492492U - lVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140e42e10();
    }
    uVar1 = lVar2 + param_3;
    if (uVar6 < uVar1) {
      if (0x492492492492492 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (uVar6 < uVar1) {
        uVar6 = uVar1;
      }
      puVar4 = (undefined4 *)FUN_140e45660(param_1 + 0x10,uVar6);
      lVar2 = (*(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18)) / 0x38;
      local_b4 = 0;
      local_c0 = 0;
      local_c8 = local_b8;
      local_b0 = lVar2;
      local_98 = puVar4;
      FUN_140e4a3d0(puVar4 + lVar2 * 0xe,param_3,local_90);
      local_b4 = 1;
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_140e48270(*(undefined4 **)(param_1 + 0x18),*(undefined4 **)(param_2 + 8),puVar4);
      local_b4 = 2;
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_140e48270(*(undefined4 **)(param_2 + 8),*(undefined4 **)(param_1 + 0x20),puVar4 + (param_3 + lVar2) * 0xe);
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (lVar2 != 0) {
        FUN_140e4d7e0(param_1,lVar2,*(longlong *)(param_1 + 0x20));
        operator_delete(*(void **)(param_1 + 0x18));
      }
      *(undefined4 **)(param_1 + 0x28) = puVar4 + uVar6 * 0xe;
      *(undefined4 **)(param_1 + 0x20) = puVar4 + (param_3 + (lVar3 - lVar2) / 0x38) * 0xe;
      *(undefined4 **)(param_1 + 0x18) = puVar4;
    }
    else if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x38) < param_3) {
      local_80[0] = *param_4;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_78,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_4 + 2));
      local_50 = *(undefined8 *)(param_4 + 0xc);
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_140e48270(*(undefined4 **)(param_2 + 8),*(undefined4 **)(param_1 + 0x20),*(undefined4 **)(param_2 + 8) + param_3 * 0xe);
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_140e4a3d0(*(undefined4 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined4 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x38,local_80);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x38;
      lVar2 = *(longlong *)(param_1 + 0x20);
      for (puVar4 = *(undefined4 **)(param_2 + 8); puVar4 != (undefined4 *)(lVar2 + param_3 * -0x38); puVar4 = puVar4 + 0xe) {
        *puVar4 = local_80[0];
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar4 + 2),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_78);
        *(undefined8 *)(puVar4 + 0xc) = local_50;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_78);
    }
    else {
      local_80[0] = *param_4;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_78,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_4 + 2));
      local_50 = *(undefined8 *)(param_4 + 0xc);
      puVar4 = *(undefined4 **)(param_1 + 0x20);
      local_c0 = 0;
      local_c8 = local_b8;
      puVar5 = FUN_140e48270(puVar4 + param_3 * -0xe,puVar4,puVar4);
      *(undefined4 **)(param_1 + 0x20) = puVar5;
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_140e46790(*(longlong *)(param_2 + 8),(longlong)(puVar4 + param_3 * -0xe),(longlong)puVar4);
      puVar5 = *(undefined4 **)(param_2 + 8);
      puVar4 = puVar5 + param_3 * 0xe;
      for (; puVar5 != puVar4; puVar5 = puVar5 + 0xe) {
        *puVar5 = local_80[0];
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar5 + 2),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_78);
        *(undefined8 *)(puVar5 + 0xc) = local_50;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_78);
    }
  }
  return;
}




undefined8 * FUN_140e519f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  FUN_140e4f8d0(param_1 + 4,(longlong)(param_5 + 2));
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  return param_1;
}




undefined4 * FUN_140e51a50(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140e4fbe0((undefined8 *)(param_1 + 2),(longlong)(param_2 + 2));
  return param_1;
}




void * FUN_140e51a90(void *param_1,uint param_2)

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




void FUN_140e51b10(longlong param_1)

{
  FUN_140e4d830(param_1 + 0x20);
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}




void FUN_140e51b50(longlong param_1)

{
  FUN_140e4de40((longlong *)(param_1 + 0x20));
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}




void FUN_140e51b90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  bool bVar11;
  uint local_res10 [2];
  undefined8 *local_res18;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_38;
  
  iVar5 = tq::DateStamp(0);
  if (*(int *)(param_1 + 0x310) != iVar5) {
    iVar5 = tq::DateStamp(0);
    *(int *)(param_1 + 0x310) = iVar5;
    puVar6 = *(undefined8 **)(param_1 + 0x278);
    puVar8 = (undefined8 *)*puVar6;
    plVar1 = *(longlong **)(param_1 + 0x248);
    local_res18 = puVar6;
    local_68 = plVar1;
    local_58 = plVar1;
LAB_140e51c10:
    lVar7 = 0;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar8 != puVar6) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar7 = *plVar1;
      }
      if (puVar8 == *(undefined8 **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      local_res10[0] = *(uint *)(puVar8 + 3);
      if (local_res10[0] != 0) {
        FUN_140e4cde0((longlong *)(param_1 + 0x288),(longlong *)&local_68,local_res10);
        plVar2 = local_68;
        lVar7 = *(longlong *)(param_1 + 0x2b8);
        local_48 = *(longlong **)(param_1 + 0x288);
        if ((local_68 == (longlong *)0x0) || (local_68 != local_48)) {
          _invalid_parameter_noinfo();
        }
        lVar3 = local_60;
        if (local_60 != lVar7) {
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
          FUN_140e51140((longlong *)(lVar3 + 0x20));
        }
        puVar10 = local_res10;
        FUN_140e4ceb0((longlong *)(param_1 + 0x2c8),(longlong *)&local_58,puVar10);
        plVar2 = local_58;
        lVar7 = *(longlong *)(param_1 + 0x2f8);
        local_38 = *(longlong **)(param_1 + 0x2c8);
        if ((local_58 == (longlong *)0x0) || (local_58 != local_38)) {
          _invalid_parameter_noinfo();
        }
        lVar3 = local_50;
        puVar6 = local_res18;
        if (local_50 != lVar7) {
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
          FUN_140e4b8b0(lVar3 + 0x20,*(longlong **)(*(longlong *)(lVar3 + 0x50) + 8),puVar10,param_4);
          *(longlong *)(*(longlong *)(lVar3 + 0x50) + 8) = *(longlong *)(lVar3 + 0x50);
          *(undefined8 *)(lVar3 + 0x58) = 0;
          *(undefined8 *)*(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar3 + 0x50);
          *(longlong *)(*(longlong *)(lVar3 + 0x50) + 0x10) = *(longlong *)(lVar3 + 0x50);
          puVar6 = local_res18;
        }
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar8 + 0x1d) == '\0') {
        puVar9 = puVar8;
        puVar4 = (undefined8 *)puVar8[2];
        if (*(char *)((longlong)puVar8[2] + 0x1d) == '\0') {
          do {
            puVar8 = puVar4;
            puVar4 = (undefined8 *)*puVar8;
          } while (*(char *)((longlong)*puVar8 + 0x1d) == '\0');
        }
        else {
          do {
            puVar8 = (undefined8 *)puVar9[1];
            if (*(char *)((longlong)puVar8 + 0x1d) != '\0') break;
            bVar11 = puVar9 == (undefined8 *)puVar8[2];
            puVar9 = puVar8;
          } while (bVar11);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140e51c10;
    }
  }
  return;
}




undefined8 * FUN_140e51e20(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140e78010);
  }
  FUN_140e42ae0(param_3);
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
        goto LAB_140e5200c;
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
LAB_140e5200c:
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
            FUN_140e44b40((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(*plVar8 + 0x50) != '\x01') || (*(char *)(plVar8[2] + 0x50) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x50) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_140e42010((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(plVar8[2] + 0x50) = 1;
              FUN_140e44b40((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 10) = 0;
          }
        }
        else {
          if ((char)plVar8[10] == '\0') {
            *(undefined1 *)(plVar8 + 10) = 1;
            *(undefined1 *)(plVar7 + 10) = 0;
            FUN_140e42010((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(plVar8[2] + 0x50) != '\x01') || (*(char *)(*plVar8 + 0x50) != '\x01')) {
              if (*(char *)(*plVar8 + 0x50) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_140e44b40((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(*plVar8 + 0x50) = 1;
              FUN_140e42010((longlong)param_1,plVar7);
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




void FUN_140e52210(longlong *param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong local_28;
  void *pvStack_20;
  longlong local_18 [2];
  
  pvVar1 = (void *)param_1[3];
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (param_1[5] - (longlong)pvVar1) / 0x124;
  }
  pvVar2 = (void *)param_1[4];
  if ((ulonglong)(((longlong)pvVar2 - (longlong)pvVar1) / 0x124) < uVar3) {
    FUN_140e48040(pvVar2,1,param_2);
    param_1[4] = (longlong)pvVar2 + 0x124;
    return;
  }
  if (pvVar2 < pvVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  pvStack_20 = pvVar2;
  FUN_140e51330(param_1,local_18,&local_28,param_2);
  return;
}




undefined4 * FUN_140e52310(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  *param_1 = *param_2;
  FUN_140e4fbe0((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}




void FUN_140e52350(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x51);
  while (cVar1 == '\0') {
    FUN_140e52350(param_1,(longlong *)param_2[2],param_3,param_4);
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




undefined8 * FUN_140e52400(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e77ef8);
  }
  plVar5 = FUN_140e514a0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140e52740(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e77ef8);
  }
  plVar5 = FUN_140e51540(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_140e52a80(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_28;
  ulonglong uStack_20;
  
  uVar4 = param_1[3];
  lVar5 = param_1[4] - uVar4;
  lVar2 = 0;
  lVar6 = lVar5 >> 0x3f;
  lVar3 = lVar2;
  if (lVar5 / 0x38 + lVar6 != lVar6) {
    if ((ulonglong)param_1[4] < uVar4) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar3 = (longlong)(param_3[1] - uVar4) / 0x38;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_140e515e0((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar4 = param_1[3];
  if ((ulonglong)param_1[4] < uVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  local_28 = plVar1;
  uStack_20 = uVar4;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = lVar2;
  }
  else {
    lVar6 = *plVar1;
  }
  uVar4 = lVar3 * 0x38 + uVar4;
  if (uVar4 <= *(ulonglong *)(lVar6 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x18) <= uVar4) goto LAB_140e52ba2;
  }
  _invalid_parameter_noinfo();
LAB_140e52ba2:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar4;
  return param_2;
}




undefined8 * FUN_140e52be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    FUN_140e4f8d0(puVar1 + 4,(longlong)(param_5 + 2));
    *(undefined1 *)(puVar1 + 10) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x51) = 0;
  }
  return puVar1;
}




undefined8 * FUN_140e52c80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  FUN_140e4fbe0(param_1 + 4,(longlong)(param_5 + 2));
  *(undefined1 *)(param_1 + 0xc) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  return param_1;
}




void FUN_140e52ce0(longlong param_1)

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




void * FUN_140e52d30(void *param_1,uint param_2)

{
  FUN_140e4d830((longlong)param_1 + 0x20);
  operator_delete(*(void **)((longlong)param_1 + 0x20));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void * FUN_140e52da0(void *param_1,uint param_2)

{
  FUN_140e4de40((longlong *)((longlong)param_1 + 0x20));
  operator_delete(*(void **)((longlong)param_1 + 0x20));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




longlong * FUN_140e52e10(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140e52f6d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140e52f9c;
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
      goto LAB_140e52f6d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140e52400(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140e52f9c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_140e52fc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e52350(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




longlong * FUN_140e53000(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140e5315d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140e5318c;
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
      goto LAB_140e5315d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140e52740(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140e5318c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_140e531b0(longlong *param_1,undefined4 *param_2)

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
    uVar3 = (param_1[5] - (longlong)puVar1) / 0x38;
  }
  puVar2 = (undefined4 *)param_1[4];
  if ((ulonglong)(((longlong)puVar2 - (longlong)puVar1) / 0x38) < uVar3) {
    FUN_140e4a3d0(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 0xe);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_140e52a80(param_1,local_18,&local_28,param_2);
  return;
}




longlong * FUN_140e532b0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140e52350(param_1,*(longlong **)(param_1[6] + 8),plVar5,plVar6);
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
    FUN_140e51e20(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_140e53490(longlong *param_1)

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
  FUN_140e532b0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_140e53500(undefined8 param_1,longlong param_2)

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




undefined8 * FUN_140e53550(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e77ef8);
  }
  plVar5 = FUN_140e52be0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140e53890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    FUN_140e4fbe0(puVar1 + 4,(longlong)(param_5 + 2));
    *(undefined1 *)(puVar1 + 0xc) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x61) = 0;
  }
  return puVar1;
}




void FUN_140e53930(longlong param_1)

{
  FUN_140e4d830(param_1 + 0x20);
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}




void FUN_140e53970(longlong param_1)

{
  FUN_140e4de40((longlong *)(param_1 + 0x20));
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}




void FUN_140e539b0(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  void **ppvVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_res10 [2];
  void **local_res20;
  longlong *local_128;
  undefined8 *puStack_120;
  void **local_118 [3];
  void *local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong lStack_e0;
  longlong *local_d8 [2];
  longlong *local_c8;
  undefined8 *puStack_c0;
  uint local_a8 [2];
  void *local_a0 [3];
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_48;
  undefined8 *puStack_40;
  longlong *local_38;
  
  local_60 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    return;
  }
  local_res10[0] = param_2;
  FUN_140e4c6d0((longlong *)(param_1 + 8),(longlong *)&local_128,local_res10);
  plVar7 = local_128;
  lVar9 = *(longlong *)(param_1 + 0x38);
  lVar8 = 0;
  local_58 = *(longlong **)(param_1 + 8);
  if ((local_128 == (longlong *)0x0) || (local_128 != local_58)) {
    _invalid_parameter_noinfo();
  }
  puVar5 = puStack_120;
  if (puStack_120 != (undefined8 *)lVar9) {
    if (plVar7 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar8 = *plVar7;
    }
    if (puVar5 == (undefined8 *)*(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar7 = *(longlong **)((longlong)puVar5 + 0x38);
    local_38 = (longlong *)0x0;
    if (*(longlong **)((longlong)puVar5 + 0x40) < plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar6 = *(longlong **)((longlong)puVar5 + 0x20);
    local_38 = plVar6;
    while( true ) {
      plVar1 = *(longlong **)((longlong)puVar5 + 0x40);
      local_d8[0] = (longlong *)0x0;
      if (plVar1 < *(longlong **)((longlong)puVar5 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      local_d8[0] = *(longlong **)((longlong)puVar5 + 0x20);
      if ((plVar6 == (longlong *)0x0) || (plVar6 != local_d8[0])) {
        _invalid_parameter_noinfo();
      }
      if (plVar7 == plVar1) break;
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar6;
      }
      if (*(longlong **)(lVar9 + 0x20) <= plVar7) {
        _invalid_parameter_noinfo();
      }
      if (*plVar7 != 0) {
        if (plVar6 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar6;
        }
        if (*(longlong **)(lVar9 + 0x20) <= plVar7) {
          _invalid_parameter_noinfo();
        }
        (*(code *)**(undefined8 **)*plVar7)((undefined8 *)*plVar7,1);
      }
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar6;
      }
      if (*(longlong **)(lVar9 + 0x20) <= plVar7) {
        _invalid_parameter_noinfo();
      }
      plVar7 = plVar7 + 1;
    }
    FUN_140e4d010((longlong *)((longlong)puVar5 + 0x20));
    local_e8 = local_128;
    lStack_e0 = (longlong)puStack_120;
    FUN_140e51e20((undefined8 *)(param_1 + 8),&local_c8,(longlong *)&local_e8);
  }
  local_res20 = operator_new(8);
  if (local_res20 == (void **)0x0) {
    local_118[0] = (void **)0x0;
  }
  else {
    *local_res20 = local_118;
    local_118[0] = local_res20;
  }
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  puVar5 = (undefined8 *)param_3[3];
  local_128 = (longlong *)0x0;
  if ((undefined8 *)param_3[4] < puVar5) {
    _invalid_parameter_noinfo();
  }
  local_128 = (longlong *)*param_3;
  plVar7 = local_128;
  puStack_120 = puVar5;
  do {
    while( true ) {
      while( true ) {
        puVar3 = puStack_120;
        puVar5 = (undefined8 *)param_3[4];
        local_70 = (longlong *)0x0;
        if (puVar5 < (undefined8 *)param_3[3]) {
          _invalid_parameter_noinfo();
        }
        local_70 = (longlong *)*param_3;
        if ((plVar7 == (longlong *)0x0) || (plVar7 != local_70)) {
          _invalid_parameter_noinfo();
        }
        if (puVar3 == puVar5) {
          if ((local_f8 - (longlong)local_100 & 0xfffffffffffffff8U) != 0) {
            local_a8[0] = param_2;
            FUN_140e4d420(local_a0,local_118);
            FUN_140e52e10((longlong *)(param_1 + 8),(longlong *)&local_c8,local_a8);
            local_res20 = local_a0;
            if (local_88 != (void *)0x0) {
              operator_delete(local_88);
            }
            local_88 = (void *)0x0;
            local_80 = 0;
            local_78 = 0;
            operator_delete(local_a0[0]);
          }
          if (local_100 != (void *)0x0) {
            operator_delete(local_100);
          }
          local_100 = (void *)0x0;
          local_f8 = 0;
          local_f0 = 0;
          operator_delete(local_118[0]);
          return;
        }
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar7;
        }
        if (*(undefined8 **)(lVar9 + 0x20) <= puVar3) {
          _invalid_parameter_noinfo();
        }
        ppvVar2 = (void **)*puVar3;
        local_res20 = ppvVar2;
        if (ppvVar2 != (void **)0x0) break;
        local_48 = local_128;
        puStack_40 = puStack_120;
        puVar5 = FUN_140e4cf80(param_3,&local_e8,(longlong)&local_48);
        local_128 = (longlong *)*puVar5;
        puStack_120 = (undefined8 *)puVar5[1];
        plVar7 = local_128;
      }
      plVar6 = (longlong *)(**(code **)((longlong)*ppvVar2 + 0x10))(ppvVar2,6);
      iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
      if (iVar4 != 0) break;
LAB_140e53d0e:
      local_c8 = local_128;
      puStack_c0 = puStack_120;
      puVar5 = FUN_140e4cf80(param_3,local_d8,(longlong)&local_c8);
      local_128 = (longlong *)*puVar5;
      puStack_120 = (undefined8 *)puVar5[1];
      FUN_140e51060((longlong *)local_118,&local_res20);
      plVar7 = local_128;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*ppvVar2 + 0x10))(ppvVar2,6);
    iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
    if (iVar4 == 1) goto LAB_140e53d0e;
    plVar6 = (longlong *)(**(code **)((longlong)*ppvVar2 + 0x10))(ppvVar2,6);
    iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
    if (iVar4 == 3) goto LAB_140e53d0e;
    if (plVar7 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar7;
    }
    if (*(undefined8 **)(lVar9 + 0x20) <= puVar3) {
      _invalid_parameter_noinfo();
    }
    puStack_120 = puVar3 + 1;
  } while( true );
}




void FUN_140e53e40(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint local_res10 [2];
  void **local_res20;
  longlong *local_128;
  undefined8 *puStack_120;
  void **local_118 [3];
  void *local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong lStack_e0;
  longlong *local_d8 [2];
  longlong *local_c8;
  undefined8 *puStack_c0;
  uint local_a8 [2];
  void *local_a0 [3];
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_48;
  undefined8 *puStack_40;
  longlong *local_38;
  
  local_60 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_140e4c6d0((longlong *)(param_1 + 0x48),(longlong *)&local_128,local_res10);
    plVar6 = local_128;
    lVar8 = *(longlong *)(param_1 + 0x78);
    lVar7 = 0;
    local_58 = *(longlong **)(param_1 + 0x48);
    if ((local_128 == (longlong *)0x0) || (local_128 != local_58)) {
      _invalid_parameter_noinfo();
    }
    puVar4 = puStack_120;
    if (puStack_120 != (undefined8 *)lVar8) {
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar7 = *plVar6;
      }
      if (puVar4 == (undefined8 *)*(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar6 = *(longlong **)((longlong)puVar4 + 0x38);
      local_38 = (longlong *)0x0;
      if (*(longlong **)((longlong)puVar4 + 0x40) < plVar6) {
        _invalid_parameter_noinfo();
      }
      plVar5 = *(longlong **)((longlong)puVar4 + 0x20);
      local_38 = plVar5;
      while( true ) {
        plVar1 = *(longlong **)((longlong)puVar4 + 0x40);
        local_d8[0] = (longlong *)0x0;
        if (plVar1 < *(longlong **)((longlong)puVar4 + 0x38)) {
          _invalid_parameter_noinfo();
        }
        local_d8[0] = *(longlong **)((longlong)puVar4 + 0x20);
        if ((plVar5 == (longlong *)0x0) || (plVar5 != local_d8[0])) {
          _invalid_parameter_noinfo();
        }
        if (plVar6 == plVar1) break;
        if (plVar5 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar5;
        }
        if (*(longlong **)(lVar8 + 0x20) <= plVar6) {
          _invalid_parameter_noinfo();
        }
        if (*plVar6 != 0) {
          if (plVar5 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar5;
          }
          if (*(longlong **)(lVar8 + 0x20) <= plVar6) {
            _invalid_parameter_noinfo();
          }
          (*(code *)**(undefined8 **)*plVar6)((undefined8 *)*plVar6,1);
        }
        if (plVar5 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar5;
        }
        if (*(longlong **)(lVar8 + 0x20) <= plVar6) {
          _invalid_parameter_noinfo();
        }
        plVar6 = plVar6 + 1;
      }
      FUN_140e4d010((longlong *)((longlong)puVar4 + 0x20));
      local_e8 = local_128;
      lStack_e0 = (longlong)puStack_120;
      FUN_140e51e20((undefined8 *)(param_1 + 0x48),&local_c8,(longlong *)&local_e8);
    }
    local_res20 = operator_new(8);
    if (local_res20 == (void **)0x0) {
      local_118[0] = (void **)0x0;
    }
    else {
      *local_res20 = local_118;
      local_118[0] = local_res20;
    }
    local_100 = (void *)0x0;
    local_f8 = 0;
    local_f0 = 0;
    puVar4 = (undefined8 *)param_3[3];
    local_128 = (longlong *)0x0;
    if ((undefined8 *)param_3[4] < puVar4) {
      _invalid_parameter_noinfo();
    }
    local_128 = (longlong *)*param_3;
    plVar6 = local_128;
    puStack_120 = puVar4;
    while( true ) {
      puVar2 = puStack_120;
      puVar4 = (undefined8 *)param_3[4];
      local_70 = (longlong *)0x0;
      if (puVar4 < (undefined8 *)param_3[3]) {
        _invalid_parameter_noinfo();
      }
      local_70 = (longlong *)*param_3;
      if ((plVar6 == (longlong *)0x0) || (plVar6 != local_70)) {
        _invalid_parameter_noinfo();
      }
      if (puVar2 == puVar4) break;
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar6;
      }
      if (*(undefined8 **)(lVar8 + 0x20) <= puVar2) {
        _invalid_parameter_noinfo();
      }
      local_res20 = (void **)*puVar2;
      if (local_res20 == (void **)0x0) {
        local_48 = local_128;
        puStack_40 = puStack_120;
        puVar4 = FUN_140e4cf80(param_3,&local_e8,(longlong)&local_48);
        local_128 = (longlong *)*puVar4;
        puStack_120 = (undefined8 *)puVar4[1];
        plVar6 = local_128;
      }
      else {
        plVar5 = (longlong *)(**(code **)((longlong)*local_res20 + 0x10))(local_res20,6);
        iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
        if (iVar3 == 2) {
          local_c8 = local_128;
          puStack_c0 = puStack_120;
          puVar4 = FUN_140e4cf80(param_3,local_d8,(longlong)&local_c8);
          local_128 = (longlong *)*puVar4;
          puStack_120 = (undefined8 *)puVar4[1];
          FUN_140e51060((longlong *)local_118,&local_res20);
          plVar6 = local_128;
        }
        else {
          if (plVar6 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar6;
          }
          if (*(undefined8 **)(lVar8 + 0x20) <= puVar2) {
            _invalid_parameter_noinfo();
          }
          puStack_120 = puVar2 + 1;
        }
      }
    }
    if ((local_f8 - (longlong)local_100 & 0xfffffffffffffff8U) != 0) {
      local_a8[0] = param_2;
      FUN_140e4d420(local_a0,local_118);
      FUN_140e52e10((longlong *)(param_1 + 0x48),(longlong *)&local_c8,local_a8);
      local_res20 = local_a0;
      if (local_88 != (void *)0x0) {
        operator_delete(local_88);
      }
      local_88 = (void *)0x0;
      local_80 = 0;
      local_78 = 0;
      operator_delete(local_a0[0]);
    }
    if (local_100 != (void *)0x0) {
      operator_delete(local_100);
    }
    local_100 = (void *)0x0;
    local_f8 = 0;
    local_f0 = 0;
    operator_delete(local_118[0]);
  }
  return;
}




void FUN_140e542a0(longlong *param_1)

{
  FUN_140e53490(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140e542d0(longlong *param_1,uint *param_2)

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
  
  FUN_140e489b0(param_1,&local_38,param_2);
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
    if (*(char *)((longlong)plVar7 + 0x51) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x51) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x51);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x51);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x51);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x51);
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
  FUN_140e532b0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




undefined8 * FUN_140e54410(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140e78010);
  }
  FUN_140e42cf0(param_3);
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
        goto LAB_140e545fc;
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
LAB_140e545fc:
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
            FUN_140e44bc0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(*plVar8 + 0x50) != '\x01') || (*(char *)(plVar8[2] + 0x50) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x50) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_140e421a0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(plVar8[2] + 0x50) = 1;
              FUN_140e44bc0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 10) = 0;
          }
        }
        else {
          if ((char)plVar8[10] == '\0') {
            *(undefined1 *)(plVar8 + 10) = 1;
            *(undefined1 *)(plVar7 + 10) = 0;
            FUN_140e421a0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(plVar8[2] + 0x50) != '\x01') || (*(char *)(*plVar8 + 0x50) != '\x01')) {
              if (*(char *)(*plVar8 + 0x50) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_140e44bc0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(*plVar8 + 0x50) = 1;
              FUN_140e421a0((longlong)param_1,plVar7);
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




longlong * FUN_140e54800(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140e5495d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140e5498c;
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
      goto LAB_140e5495d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140e53550(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140e5498c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_140e549b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x51);
  while (cVar1 == '\0') {
    FUN_140e549b0(param_1,(longlong *)param_2[2],param_3,param_4);
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




undefined8 * FUN_140e54a60(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
  
  if (0x38e38e38e38e38c < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e77ef8);
  }
  plVar5 = FUN_140e53890(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x60);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x60) == '\0') {
        *(undefined1 *)(plVar2 + 0xc) = 1;
        *(undefined1 *)(lVar4 + 0x60) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x60) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x61) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x60) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x60) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x61) == '\0') {
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
      if (*(char *)(lVar4 + 0x60) == '\0') {
        *(undefined1 *)(plVar2 + 0xc) = 1;
        *(undefined1 *)(lVar4 + 0x60) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x60) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x61) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x60) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x60) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x61) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x60);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x60) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




void FUN_140e54da0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d830(param_2 + 0x20);
  operator_delete(*(void **)(param_2 + 0x20));
  return;
}




void FUN_140e54de0(undefined8 param_1,longlong param_2)

{
  FUN_140e4de40((longlong *)(param_2 + 0x20));
  operator_delete(*(void **)(param_2 + 0x20));
  return;
}




undefined8 * FUN_140e54e20(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined **local_90 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_78 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [40];
  
  plVar2 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar2 + 0x51) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_50,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_90);
    local_90[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_78,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_50);
    local_90[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_90,(ThrowInfo *)&DAT_140e78010);
  }
  FUN_140e455c0(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
    plVar10 = plVar8;
    if (*(char *)(plVar2[2] + 0x51) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar10 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar10 + 0x51) == '\0') {
            plVar10[1] = (longlong)plVar8;
          }
          *plVar8 = (longlong)plVar10;
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
          lVar9 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar9;
        }
        goto LAB_140e5500e;
      }
    }
  }
  else {
    plVar10 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar10 + 0x51) == '\0') {
    plVar10[1] = (longlong)plVar8;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar2) {
    *(longlong **)(param_1[6] + 8) = plVar10;
  }
  else if ((longlong *)*plVar8 == plVar2) {
    *plVar8 = (longlong)plVar10;
  }
  else {
    plVar8[2] = (longlong)plVar10;
  }
  if (*(longlong **)param_1[6] == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar10 + 0x51) == '\0') {
      cVar1 = *(char *)(*plVar10 + 0x51);
      plVar3 = (longlong *)*plVar10;
      plVar7 = plVar10;
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
    if (*(char *)((longlong)plVar10 + 0x51) == '\0') {
      cVar1 = *(char *)(plVar10[2] + 0x51);
      plVar3 = (longlong *)plVar10[2];
      plVar7 = plVar10;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x51);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_140e5500e:
  if ((char)plVar2[10] == '\x01') {
    if (plVar10 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar10[10] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar10 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[10] == '\0') {
            *(undefined1 *)(plVar8 + 10) = 1;
            *(undefined1 *)(plVar7 + 10) = 0;
            FUN_140e45260((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(*plVar8 + 0x50) != '\x01') || (*(char *)(plVar8[2] + 0x50) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x50) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_140e452c0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(plVar8[2] + 0x50) = 1;
              FUN_140e45260((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 10) = 0;
          }
        }
        else {
          if ((char)plVar8[10] == '\0') {
            *(undefined1 *)(plVar8 + 10) = 1;
            *(undefined1 *)(plVar7 + 10) = 0;
            FUN_140e452c0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(plVar8[2] + 0x50) != '\x01') || (*(char *)(*plVar8 + 0x50) != '\x01')) {
              if (*(char *)(*plVar8 + 0x50) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_140e45260((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(*plVar8 + 0x50) = 1;
              FUN_140e452c0((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 10) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar10 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar10 + 10) = 1;
  }
  lVar9 = plVar2[7];
  if (lVar9 != 0) {
    lVar5 = plVar2[8];
    for (; lVar9 != lVar5; lVar9 = lVar9 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar9 + 8));
    }
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
  lVar9 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar9;
  return param_2;
}




undefined8 * FUN_140e55250(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined **local_90 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_78 [40];
  longlong local_50 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  local_98 = 0xfffffffffffffffe;
  plVar2 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar2 + 0x61) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_90);
    local_90[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_78,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_90[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_90,(ThrowInfo *)&DAT_140e78010);
  }
  FUN_140e456d0(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x61) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x61) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x61) == '\0') {
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
        plVar3 = plVar2 + 0xc;
        plVar7 = plVar7 + 0xc;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_140e5543d;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x61) == '\0') {
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
    if (*(char *)((longlong)plVar9 + 0x61) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x61);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x61);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x61) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x61);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x61);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_140e5543d:
  if ((char)plVar2[0xc] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[0xc] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[0xc] == '\0') {
            *(undefined1 *)(plVar8 + 0xc) = 1;
            *(undefined1 *)(plVar7 + 0xc) = 0;
            FUN_140e45370((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x61) == '\0') {
            if ((*(char *)(*plVar8 + 0x60) != '\x01') || (*(char *)(plVar8[2] + 0x60) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x60) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x60) = 1;
                *(undefined1 *)(plVar8 + 0xc) = 0;
                FUN_140e453d0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 0xc) = (char)plVar7[0xc];
              *(undefined1 *)(plVar7 + 0xc) = 1;
              *(undefined1 *)(plVar8[2] + 0x60) = 1;
              FUN_140e45370((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0xc) = 0;
          }
        }
        else {
          if ((char)plVar8[0xc] == '\0') {
            *(undefined1 *)(plVar8 + 0xc) = 1;
            *(undefined1 *)(plVar7 + 0xc) = 0;
            FUN_140e453d0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x61) == '\0') {
            if ((*(char *)(plVar8[2] + 0x60) != '\x01') || (*(char *)(*plVar8 + 0x60) != '\x01')) {
              if (*(char *)(*plVar8 + 0x60) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x60) = 1;
                *(undefined1 *)(plVar8 + 0xc) = 0;
                FUN_140e45370((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 0xc) = (char)plVar7[0xc];
              *(undefined1 *)(plVar7 + 0xc) = 1;
              *(undefined1 *)(*plVar8 + 0x60) = 1;
              FUN_140e453d0((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0xc) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 0xc) = 1;
  }
  plVar8 = plVar2 + 4;
  puStack_a0 = (undefined8 *)plVar2[10];
  local_b8 = *plVar8;
  uStack_b0 = *puStack_a0;
  local_a8 = local_b8;
  FUN_140e4dc60(plVar8,local_50,&local_b8,&local_a8);
  operator_delete((void *)plVar2[10]);
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  operator_delete((void *)*plVar8);
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




void FUN_140e55690(longlong *param_1)

{
  FUN_140e53490(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e556c0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *local_58 [3];
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x308) != 0)) {
    local_58[0] = operator_new(8);
    if (local_58[0] == (longlong *)0x0) {
      local_58[0] = (longlong *)0x0;
    }
    else {
      *local_58[0] = (longlong)local_58;
    }
    local_40 = (longlong *)0x0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x308) + 0xa0))(*(longlong **)(param_1 + 0x308),local_58,param_2,4);
    if ((longlong)local_38 - (longlong)local_40 >> 3 == 0) {
      if (local_40 != (longlong *)0x0) {
        operator_delete(local_40);
      }
      local_40 = (longlong *)0x0;
      local_38 = (longlong *)0x0;
      local_30 = 0;
      operator_delete(local_58[0]);
    }
    else {
      FUN_140e539b0(param_1,param_2,(longlong *)local_58);
      FUN_140e53e40(param_1,param_2,(longlong *)local_58);
      plVar11 = local_40;
      plVar2 = local_58[0];
      if (local_38 < local_40) {
        _invalid_parameter_noinfo();
        plVar2 = local_58[0];
      }
      while( true ) {
        plVar1 = local_38;
        lVar10 = 0;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        if ((plVar2 == (longlong *)0x0) || (plVar2 != local_58[0])) {
          _invalid_parameter_noinfo();
        }
        if (plVar11 == plVar1) break;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar10 = *plVar2;
        }
        if (*(longlong **)(lVar10 + 0x20) <= plVar11) {
          _invalid_parameter_noinfo();
        }
        plVar1 = (longlong *)*plVar11;
        if (plVar1 != (longlong *)0x0) {
          plVar3 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,5);
          plVar4 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
          plVar5 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,3);
          plVar6 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,2);
          plVar7 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,1);
          plVar8 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,7);
          plVar9 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,6);
          (**(code **)(*plVar3 + 0x50))(plVar3);
          (**(code **)(*plVar4 + 0x78))(plVar4);
          (**(code **)(*plVar5 + 0x48))(plVar5);
          (**(code **)(*plVar6 + 0x78))(plVar6);
          (**(code **)(*plVar7 + 0x78))(plVar7);
          (**(code **)(*plVar8 + 0x40))(plVar8);
          (**(code **)(*plVar9 + 0x48))(plVar9);
          log_InlineLogERROR("CLeaveWordMgr::LoadLeaveWords. Type[%d] ReceiveName[%u][%s] SendName[%s] Time[%d] Word[%s] LookFace[%u]");
          (**(code **)*plVar1)(plVar1,1);
        }
        lVar10 = 0;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar10 = *plVar2;
        }
        if (*(longlong **)(lVar10 + 0x20) <= plVar11) {
          _invalid_parameter_noinfo();
        }
        plVar11 = plVar11 + 1;
      }
      FUN_140e4d010((longlong *)local_58);
      if (local_40 != (longlong *)0x0) {
        operator_delete(local_40);
      }
      local_40 = (longlong *)0x0;
      local_38 = (longlong *)0x0;
      local_30 = 0;
      operator_delete(local_58[0]);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_140e55a50(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *extraout_RAX;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_648 [32];
  char *local_628;
  char *local_620;
  undefined4 local_618;
  undefined2 local_610;
  undefined2 local_608;
  undefined4 local_600;
  uint local_5f8;
  uint local_5f4;
  undefined4 local_5f0;
  longlong *local_5e8;
  longlong *local_5e0;
  longlong *local_5d8;
  longlong local_5d0;
  longlong *local_5c8;
  undefined8 local_5b8;
  longlong *local_5b0;
  CMsg local_598 [1072];
  longlong *local_168;
  longlong local_160;
  char local_158 [16];
  char local_148 [16];
  char local_138 [256];
  ulonglong local_38;
  
  local_5b8 = 0xfffffffffffffffe;
  local_38 = DAT_140e79440 ^ (ulonglong)auStack_648;
  uVar3 = 0;
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x308) == 0) {
      uVar3 = param_2 & 0xffffff00;
    }
    else {
      local_5f8 = param_2;
      local_5f4 = param_2;
      local_5d0 = param_1;
      FUN_140e4c6d0((longlong *)(param_1 + 8),(longlong *)&local_168,&local_5f4);
      lVar9 = *(longlong *)(param_1 + 0x38);
      lVar10 = 0;
      plVar5 = *(longlong **)(param_1 + 8);
      local_5c8 = plVar5;
      if ((local_168 == (longlong *)0x0) || (local_168 != plVar5)) {
        _invalid_parameter_noinfo();
        plVar5 = extraout_RAX;
      }
      if (local_160 == lVar9) {
        uVar3 = (uint)plVar5 & 0xffffff00;
      }
      else {
        if (local_168 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = lVar10;
        }
        else {
          lVar9 = *local_168;
        }
        if (local_160 == *(longlong *)(lVar9 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar11 = (longlong *)(local_160 + 0x20);
        plVar5 = *(longlong **)(local_160 + 0x38);
        local_5e0 = (longlong *)0x0;
        local_5c8 = plVar11;
        if (*(longlong **)(local_160 + 0x40) < plVar5) {
          _invalid_parameter_noinfo();
        }
        plVar1 = (longlong *)*plVar11;
        local_5e0 = plVar1;
        while( true ) {
          plVar2 = *(longlong **)(local_160 + 0x40);
          local_5b0 = (longlong *)0x0;
          local_5d8 = plVar5;
          if (plVar2 < *(longlong **)(local_160 + 0x38)) {
            _invalid_parameter_noinfo();
          }
          local_5b0 = (longlong *)*plVar11;
          if ((plVar1 == (longlong *)0x0) || (plVar1 != local_5b0)) {
            _invalid_parameter_noinfo();
          }
          if (plVar5 == plVar2) break;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = lVar10;
          }
          else {
            lVar9 = *plVar1;
          }
          if (*(longlong **)(lVar9 + 0x20) <= plVar5) {
            _invalid_parameter_noinfo();
          }
          plVar2 = (longlong *)*plVar5;
          if (plVar2 != (longlong *)0x0) {
            local_5e8 = plVar2;
            plVar6 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
            pcVar7 = (char *)(**(code **)(*plVar6 + 0x78))(plVar6);
            tq::SafeCopy(local_148,pcVar7,0x10);
            plVar6 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,7);
            pcVar7 = (char *)(**(code **)(*plVar6 + 0x78))(plVar6);
            tq::SafeCopy((char *)&local_168,pcVar7,0x10);
            plVar6 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
            pcVar7 = (char *)(**(code **)(*plVar6 + 0x78))(plVar6);
            tq::SafeCopy(local_158,pcVar7,0x10);
            plVar6 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
            pcVar7 = (char *)(**(code **)(*plVar6 + 0x78))(plVar6);
            tq::SafeCopy(local_138,pcVar7,0x100);
            plVar6 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
            local_5f0 = (**(code **)(*plVar6 + 0x40))(plVar6);
            plVar6 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
            iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
            FUN_140e505d0(param_1,local_5f8,(char *)&local_168);
            FUN_140e506b0(param_1,local_5f8,(char *)&local_168);
            if (iVar4 == 3) {
              FUN_140e5ceb0(local_598);
              uVar8 = FUN_140e5cfb0((longlong)local_598,7,local_138);
              if ((char)uVar8 != '\0') {
                (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))(*(longlong **)(param_1 + 0x308),local_5f8,local_598);
              }
              FUN_140e5cf30((undefined8 *)local_598);
            }
            else {
              local_600 = local_5f0;
              local_608 = 0;
              local_610 = 0x83e;
              local_618 = 0;
              local_620 = local_158;
              local_628 = local_138;
              (**(code **)(**(longlong **)(param_1 + 0x308) + 0x20))(*(longlong **)(param_1 + 0x308),local_5f8,local_148,&local_168);
            }
            (**(code **)(*plVar2 + 0x40))(plVar2,0);
            (**(code **)*plVar2)(plVar2,1);
          }
          local_5e8 = (longlong *)0x0;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = lVar10;
          }
          else {
            lVar9 = *plVar1;
          }
          if (*(longlong **)(lVar9 + 0x20) <= plVar5) {
            _invalid_parameter_noinfo();
          }
          plVar5 = plVar5 + 1;
        }
        FUN_140e4d010(plVar11);
        lVar9 = FUN_140e542d0((longlong *)(param_1 + 8),&local_5f4);
        uVar3 = (uint)CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
      }
    }
  }
  return uVar3;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140e55e70(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint7 uVar9;
  ulonglong uVar4;
  longlong *extraout_RAX;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_208 [32];
  char *local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined2 local_1d0;
  undefined2 local_1c8;
  undefined4 local_1c0;
  uint local_1b8 [2];
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong *local_180;
  undefined8 local_170;
  char local_168 [16];
  char local_158 [16];
  char local_148 [16];
  char local_138 [256];
  ulonglong local_38;
  
  local_170 = 0xfffffffffffffffe;
  local_38 = DAT_140e79440 ^ (ulonglong)auStack_208;
  uVar9 = (uint7)(local_38 >> 8);
  if (param_2 == 0) {
    uVar4 = (ulonglong)uVar9 << 8;
  }
  else if (*(longlong *)(param_1 + 0x308) == 0) {
    uVar4 = (ulonglong)uVar9 << 8;
  }
  else {
    local_1b8[0] = param_2;
    local_198 = param_1;
    FUN_140e4c6d0((longlong *)(param_1 + 0x48),(longlong *)&local_1b0,local_1b8);
    lVar8 = *(longlong *)(param_1 + 0x78);
    lVar10 = 0;
    plVar5 = *(longlong **)(param_1 + 0x48);
    local_190 = plVar5;
    if ((local_1b0 == (longlong *)0x0) || (local_1b0 != plVar5)) {
      _invalid_parameter_noinfo();
      plVar5 = extraout_RAX;
    }
    plVar3 = local_1a8;
    if (local_1a8 == (longlong *)lVar8) {
      uVar4 = (ulonglong)plVar5 & 0xffffffffffffff00;
    }
    else {
      if (local_1b0 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = lVar10;
      }
      else {
        lVar8 = *local_1b0;
      }
      if (local_1a8 == (longlong *)*(longlong *)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar11 = (longlong *)((longlong)local_1a8 + 0x20);
      plVar5 = *(longlong **)((longlong)local_1a8 + 0x38);
      local_1b0 = (longlong *)0x0;
      local_190 = plVar11;
      if (*(longlong **)((longlong)local_1a8 + 0x40) < plVar5) {
        _invalid_parameter_noinfo();
      }
      plVar1 = (longlong *)*plVar11;
      local_1b0 = plVar1;
      while( true ) {
        plVar2 = *(longlong **)((longlong)plVar3 + 0x40);
        local_180 = (longlong *)0x0;
        local_1a8 = plVar5;
        if (plVar2 < *(longlong **)((longlong)plVar3 + 0x38)) {
          _invalid_parameter_noinfo();
        }
        local_180 = (longlong *)*plVar11;
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_180)) {
          _invalid_parameter_noinfo();
        }
        if (plVar5 == plVar2) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = lVar10;
        }
        else {
          lVar8 = *plVar1;
        }
        if (*(longlong **)(lVar8 + 0x20) <= plVar5) {
          _invalid_parameter_noinfo();
        }
        plVar2 = (longlong *)*plVar5;
        if (plVar2 != (longlong *)0x0) {
          local_1a0 = plVar2;
          plVar6 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
          pcVar7 = (char *)(**(code **)(*plVar6 + 0x78))(plVar6);
          tq::SafeCopy(local_158,pcVar7,0x10);
          plVar6 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,7);
          pcVar7 = (char *)(**(code **)(*plVar6 + 0x78))(plVar6);
          tq::SafeCopy(local_168,pcVar7,0x10);
          plVar6 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
          pcVar7 = (char *)(**(code **)(*plVar6 + 0x78))(plVar6);
          tq::SafeCopy(local_148,pcVar7,0x10);
          plVar6 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
          pcVar7 = (char *)(**(code **)(*plVar6 + 0x78))(plVar6);
          tq::SafeCopy(local_138,pcVar7,0x100);
          plVar6 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
          local_1c0 = (**(code **)(*plVar6 + 0x40))(plVar6);
          local_1c8 = 0;
          local_1d0 = 0x7de;
          local_1d8 = 0;
          local_1e0 = local_148;
          local_1e8 = local_138;
          (**(code **)(**(longlong **)(param_1 + 0x308) + 0x20))(*(longlong **)(param_1 + 0x308),param_2,local_158,local_168);
          (**(code **)(*plVar2 + 0x40))(plVar2,0);
          (**(code **)*plVar2)(plVar2,1);
        }
        local_1a0 = (longlong *)0x0;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = lVar10;
        }
        else {
          lVar8 = *plVar1;
        }
        if (*(longlong **)(lVar8 + 0x20) <= plVar5) {
          _invalid_parameter_noinfo();
        }
        plVar5 = plVar5 + 1;
      }
      FUN_140e4d010(plVar11);
      lVar8 = FUN_140e542d0((longlong *)(param_1 + 0x48),local_1b8);
      uVar4 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
    }
  }
  return uVar4;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e561d0(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  rsize_t rVar8;
  void **ppvVar9;
  void **ppvVar10;
  void **ppvVar11;
  undefined1 auStack_248 [32];
  void **local_228;
  longlong *plStack_220;
  void **local_218;
  longlong *plStack_210;
  void **local_208 [3];
  void *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  void **local_1d8;
  longlong *plStack_1d0;
  uint local_1b8 [2];
  void *local_1b0 [3];
  void *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  char local_16c [16];
  undefined4 local_15c;
  char local_158 [256];
  undefined4 local_58;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_180 = 0xfffffffffffffffe;
    local_48 = DAT_140e79440 ^ (ulonglong)auStack_248;
    local_218 = (void **)CONCAT44(local_218._4_4_,param_2);
    plVar1 = (longlong *)(param_1 + 0x88);
    FUN_140e4c7a0(plVar1,(longlong *)&local_228,(uint *)&local_218);
    ppvVar9 = local_228;
    plVar5 = *(longlong **)(param_1 + 0xb8);
    if ((local_228 == (void **)0x0) || (local_228 != (void **)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = plStack_220;
    ppvVar11 = (void **)0x0;
    if (plStack_220 != plVar5) {
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar9 = ppvVar11;
      }
      else {
        ppvVar9 = *ppvVar9;
      }
      if (plVar2 == ppvVar9[6]) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0(plVar2 + 4);
      local_1d8 = local_228;
      plStack_1d0 = plStack_220;
      FUN_140e54410(plVar1,&local_228,(longlong *)&local_1d8);
    }
    local_228 = operator_new(8);
    local_208[0] = ppvVar11;
    if (local_228 != (void **)0x0) {
      *local_228 = local_208;
      local_208[0] = local_228;
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    plVar5 = (longlong *)param_3[3];
    local_218 = local_228;
    if ((longlong *)param_3[4] < plVar5) {
      _invalid_parameter_noinfo();
    }
    ppvVar9 = (void **)*param_3;
    while( true ) {
      plVar2 = (longlong *)param_3[4];
      if (plVar2 < (longlong *)param_3[3]) {
        _invalid_parameter_noinfo();
      }
      if ((ppvVar9 == (void **)0x0) || (ppvVar9 != (void **)*param_3)) {
        _invalid_parameter_noinfo();
      }
      if (plVar5 == plVar2) break;
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar10 = ppvVar11;
      }
      else {
        ppvVar10 = *ppvVar9;
      }
      if (ppvVar10[4] <= plVar5) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*plVar5;
      if (plVar2 == (longlong *)0x0) {
        lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
        if (0 < lVar7) {
          rVar8 = lVar7 << 3;
          memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
        }
        param_3[4] = param_3[4] + -8;
        if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
          _invalid_parameter_noinfo();
        }
        local_228 = (void **)*param_3;
        ppvVar9 = local_228;
        plStack_220 = plVar5;
        local_218 = local_228;
        plStack_210 = plVar5;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
        iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
        if (iVar3 == 2) {
          lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
          if (0 < lVar7) {
            rVar8 = lVar7 << 3;
            memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
          }
          param_3[4] = param_3[4] + -8;
          if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
            _invalid_parameter_noinfo();
          }
          local_228 = (void **)*param_3;
          plStack_220 = plVar5;
          local_1d8 = local_228;
          plStack_1d0 = plVar5;
          memset(&local_178,0,0x124);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,0);
          local_178 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
          local_174 = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
          local_170 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_16c,pcVar6,0x10);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_158,pcVar6,0x100);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
          local_15c = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
          local_58 = (**(code **)(*plVar5 + 0x40))(plVar5);
          FUN_140e52210((longlong *)local_208,&local_178);
          (**(code **)*plVar2)(plVar2,1);
          plVar5 = plStack_220;
          ppvVar9 = local_228;
        }
        else {
          if (ppvVar9 == (void **)0x0) {
            _invalid_parameter_noinfo();
            ppvVar10 = ppvVar11;
          }
          else {
            ppvVar10 = *ppvVar9;
          }
          if (ppvVar10[4] <= plVar5) {
            _invalid_parameter_noinfo();
          }
          plVar5 = plVar5 + 1;
        }
      }
    }
    lVar7 = local_1e8 - (longlong)local_1f0 >> 0x3f;
    if ((local_1e8 - (longlong)local_1f0) / 0x124 + lVar7 != lVar7) {
      local_1b8[0] = param_2;
      FUN_140e4d580(local_1b0,(longlong)local_208);
      FUN_140e53000(plVar1,(longlong *)&local_1d8,local_1b8);
      local_228 = local_1b0;
      if (local_198 != (void *)0x0) {
        operator_delete(local_198);
      }
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = 0;
      operator_delete(local_1b0[0]);
    }
    if (local_1f0 != (void *)0x0) {
      operator_delete(local_1f0);
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    operator_delete(local_208[0]);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e56660(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  rsize_t rVar8;
  void **ppvVar9;
  void **ppvVar10;
  void **ppvVar11;
  undefined1 auStack_248 [32];
  void **local_228;
  longlong *plStack_220;
  void **local_218;
  longlong *plStack_210;
  void **local_208 [3];
  void *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  void **local_1d8;
  longlong *plStack_1d0;
  uint local_1b8 [2];
  void *local_1b0 [3];
  void *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  char local_16c [16];
  undefined4 local_15c;
  char local_158 [256];
  undefined4 local_58;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_180 = 0xfffffffffffffffe;
    local_48 = DAT_140e79440 ^ (ulonglong)auStack_248;
    local_218 = (void **)CONCAT44(local_218._4_4_,param_2);
    plVar1 = (longlong *)(param_1 + 200);
    FUN_140e4c7a0(plVar1,(longlong *)&local_228,(uint *)&local_218);
    ppvVar9 = local_228;
    plVar5 = *(longlong **)(param_1 + 0xf8);
    if ((local_228 == (void **)0x0) || (local_228 != (void **)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = plStack_220;
    ppvVar11 = (void **)0x0;
    if (plStack_220 != plVar5) {
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar9 = ppvVar11;
      }
      else {
        ppvVar9 = *ppvVar9;
      }
      if (plVar2 == ppvVar9[6]) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0(plVar2 + 4);
      local_1d8 = local_228;
      plStack_1d0 = plStack_220;
      FUN_140e54410(plVar1,&local_228,(longlong *)&local_1d8);
    }
    local_228 = operator_new(8);
    local_208[0] = ppvVar11;
    if (local_228 != (void **)0x0) {
      *local_228 = local_208;
      local_208[0] = local_228;
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    plVar5 = (longlong *)param_3[3];
    local_218 = local_228;
    if ((longlong *)param_3[4] < plVar5) {
      _invalid_parameter_noinfo();
    }
    ppvVar9 = (void **)*param_3;
    while( true ) {
      plVar2 = (longlong *)param_3[4];
      if (plVar2 < (longlong *)param_3[3]) {
        _invalid_parameter_noinfo();
      }
      if ((ppvVar9 == (void **)0x0) || (ppvVar9 != (void **)*param_3)) {
        _invalid_parameter_noinfo();
      }
      if (plVar5 == plVar2) break;
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar10 = ppvVar11;
      }
      else {
        ppvVar10 = *ppvVar9;
      }
      if (ppvVar10[4] <= plVar5) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*plVar5;
      if (plVar2 == (longlong *)0x0) {
        lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
        if (0 < lVar7) {
          rVar8 = lVar7 << 3;
          memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
        }
        param_3[4] = param_3[4] + -8;
        if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
          _invalid_parameter_noinfo();
        }
        local_228 = (void **)*param_3;
        ppvVar9 = local_228;
        plStack_220 = plVar5;
        local_218 = local_228;
        plStack_210 = plVar5;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
        iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
        if (iVar3 == 1) {
          lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
          if (0 < lVar7) {
            rVar8 = lVar7 << 3;
            memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
          }
          param_3[4] = param_3[4] + -8;
          if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
            _invalid_parameter_noinfo();
          }
          local_228 = (void **)*param_3;
          plStack_220 = plVar5;
          local_1d8 = local_228;
          plStack_1d0 = plVar5;
          memset(&local_178,0,0x124);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,0);
          local_178 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
          local_174 = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
          local_170 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_16c,pcVar6,0x10);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_158,pcVar6,0x100);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
          local_15c = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
          local_58 = (**(code **)(*plVar5 + 0x40))(plVar5);
          FUN_140e52210((longlong *)local_208,&local_178);
          (**(code **)(*plVar2 + 0x40))(plVar2,0);
          (**(code **)*plVar2)(plVar2,1);
          plVar5 = plStack_220;
          ppvVar9 = local_228;
        }
        else {
          if (ppvVar9 == (void **)0x0) {
            _invalid_parameter_noinfo();
            ppvVar10 = ppvVar11;
          }
          else {
            ppvVar10 = *ppvVar9;
          }
          if (ppvVar10[4] <= plVar5) {
            _invalid_parameter_noinfo();
          }
          plVar5 = plVar5 + 1;
        }
      }
    }
    lVar7 = local_1e8 - (longlong)local_1f0 >> 0x3f;
    if ((local_1e8 - (longlong)local_1f0) / 0x124 + lVar7 != lVar7) {
      local_1b8[0] = param_2;
      FUN_140e4d580(local_1b0,(longlong)local_208);
      FUN_140e53000(plVar1,(longlong *)&local_1d8,local_1b8);
      local_228 = local_1b0;
      if (local_198 != (void *)0x0) {
        operator_delete(local_198);
      }
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = 0;
      operator_delete(local_1b0[0]);
    }
    if (local_1f0 != (void *)0x0) {
      operator_delete(local_1f0);
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    operator_delete(local_208[0]);
  }
  return;
}




void FUN_140e56b00(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint local_res10 [2];
  longlong *local_488;
  longlong lStack_480;
  undefined8 local_478;
  undefined8 local_470 [3];
  CMsg local_458 [1072];
  
  if (param_2 != 0) {
    local_478 = 0xfffffffffffffffe;
    local_res10[0] = param_2;
    FUN_140e4c7a0((longlong *)(param_1 + 200),(longlong *)&local_488,local_res10);
    lVar8 = *(longlong *)(param_1 + 0xf8);
    if ((local_488 == (longlong *)0x0) || (local_488 != *(longlong **)(param_1 + 200))) {
      _invalid_parameter_noinfo();
    }
    if (lStack_480 != lVar8) {
      if (local_488 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *local_488;
      }
      if (lStack_480 == *(longlong *)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar1 = (longlong *)(lStack_480 + 0x20);
      uVar7 = *(ulonglong *)(lStack_480 + 0x38);
      if (*(ulonglong *)(lStack_480 + 0x40) < uVar7) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*plVar1;
      uVar3 = *(ulonglong *)(lStack_480 + 0x40);
      if (uVar3 < *(ulonglong *)(lStack_480 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      plVar4 = (longlong *)*plVar1;
      while( true ) {
        if ((plVar2 == (longlong *)0x0) || (plVar2 != plVar4)) {
          _invalid_parameter_noinfo();
        }
        if (uVar7 == uVar3) {
          FUN_140e4eff0(plVar1);
          FUN_140e54410((undefined8 *)(param_1 + 200),local_470,(longlong *)&local_488);
          return;
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar2;
        }
        if (*(ulonglong *)(lVar8 + 0x20) <= uVar7) {
          _invalid_parameter_noinfo();
        }
        FUN_140e5d200(local_458);
        uVar6 = FUN_140e5d3a0(local_458,0x1c,0);
        if ((int)uVar6 == 0) {
          log_InlineLogERROR(&DAT_140e69668);
          FUN_140e5d280((undefined8 *)local_458);
          return;
        }
        uVar5 = FUN_140e5d440((longlong)local_458,(char *)(uVar7 + 0x20));
        if ((char)uVar5 == '\0') break;
        (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))(*(longlong **)(param_1 + 0x308),param_2);
        FUN_140e5d280((undefined8 *)local_458);
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar2;
        }
        if (*(ulonglong *)(lVar8 + 0x20) <= uVar7) {
          _invalid_parameter_noinfo();
        }
        uVar7 = uVar7 + 0x124;
      }
      log_InlineLogERROR(&DAT_140e69668);
      FUN_140e5d280((undefined8 *)local_458);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e56d40(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  rsize_t rVar8;
  void **ppvVar9;
  void **ppvVar10;
  void **ppvVar11;
  undefined1 auStack_248 [32];
  void **local_228;
  longlong *plStack_220;
  void **local_218;
  longlong *plStack_210;
  void **local_208 [3];
  void *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  void **local_1d8;
  longlong *plStack_1d0;
  uint local_1b8 [2];
  void *local_1b0 [3];
  void *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  char local_16c [16];
  undefined4 local_15c;
  char local_158 [256];
  undefined4 local_58;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_180 = 0xfffffffffffffffe;
    local_48 = DAT_140e79440 ^ (ulonglong)auStack_248;
    local_218 = (void **)CONCAT44(local_218._4_4_,param_2);
    plVar1 = (longlong *)(param_1 + 0x108);
    FUN_140e4c7a0(plVar1,(longlong *)&local_228,(uint *)&local_218);
    ppvVar9 = local_228;
    plVar5 = *(longlong **)(param_1 + 0x138);
    if ((local_228 == (void **)0x0) || (local_228 != (void **)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = plStack_220;
    ppvVar11 = (void **)0x0;
    if (plStack_220 != plVar5) {
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar9 = ppvVar11;
      }
      else {
        ppvVar9 = *ppvVar9;
      }
      if (plVar2 == ppvVar9[6]) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0(plVar2 + 4);
      local_1d8 = local_228;
      plStack_1d0 = plStack_220;
      FUN_140e54410(plVar1,&local_228,(longlong *)&local_1d8);
    }
    local_228 = operator_new(8);
    local_208[0] = ppvVar11;
    if (local_228 != (void **)0x0) {
      *local_228 = local_208;
      local_208[0] = local_228;
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    plVar5 = (longlong *)param_3[3];
    local_218 = local_228;
    if ((longlong *)param_3[4] < plVar5) {
      _invalid_parameter_noinfo();
    }
    ppvVar9 = (void **)*param_3;
    while( true ) {
      plVar2 = (longlong *)param_3[4];
      if (plVar2 < (longlong *)param_3[3]) {
        _invalid_parameter_noinfo();
      }
      if ((ppvVar9 == (void **)0x0) || (ppvVar9 != (void **)*param_3)) {
        _invalid_parameter_noinfo();
      }
      if (plVar5 == plVar2) break;
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar10 = ppvVar11;
      }
      else {
        ppvVar10 = *ppvVar9;
      }
      if (ppvVar10[4] <= plVar5) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*plVar5;
      if (plVar2 == (longlong *)0x0) {
        lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
        if (0 < lVar7) {
          rVar8 = lVar7 << 3;
          memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
        }
        param_3[4] = param_3[4] + -8;
        if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
          _invalid_parameter_noinfo();
        }
        local_228 = (void **)*param_3;
        ppvVar9 = local_228;
        plStack_220 = plVar5;
        local_218 = local_228;
        plStack_210 = plVar5;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
        iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
        if (iVar3 == 3) {
          lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
          if (0 < lVar7) {
            rVar8 = lVar7 << 3;
            memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
          }
          param_3[4] = param_3[4] + -8;
          if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
            _invalid_parameter_noinfo();
          }
          local_228 = (void **)*param_3;
          plStack_220 = plVar5;
          local_1d8 = local_228;
          plStack_1d0 = plVar5;
          memset(&local_178,0,0x124);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,0);
          local_178 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
          local_174 = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
          local_170 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_16c,pcVar6,0x10);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_158,pcVar6,0x100);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
          local_15c = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
          local_58 = (**(code **)(*plVar5 + 0x40))(plVar5);
          FUN_140e52210((longlong *)local_208,&local_178);
          (**(code **)(*plVar2 + 0x40))(plVar2,0);
          (**(code **)*plVar2)(plVar2,1);
          plVar5 = plStack_220;
          ppvVar9 = local_228;
        }
        else {
          if (ppvVar9 == (void **)0x0) {
            _invalid_parameter_noinfo();
            ppvVar10 = ppvVar11;
          }
          else {
            ppvVar10 = *ppvVar9;
          }
          if (ppvVar10[4] <= plVar5) {
            _invalid_parameter_noinfo();
          }
          plVar5 = plVar5 + 1;
        }
      }
    }
    lVar7 = local_1e8 - (longlong)local_1f0 >> 0x3f;
    if ((local_1e8 - (longlong)local_1f0) / 0x124 + lVar7 != lVar7) {
      local_1b8[0] = param_2;
      FUN_140e4d580(local_1b0,(longlong)local_208);
      FUN_140e53000(plVar1,(longlong *)&local_1d8,local_1b8);
      local_228 = local_1b0;
      if (local_198 != (void *)0x0) {
        operator_delete(local_198);
      }
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = 0;
      operator_delete(local_1b0[0]);
    }
    if (local_1f0 != (void *)0x0) {
      operator_delete(local_1f0);
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    operator_delete(local_208[0]);
  }
  return;
}




void FUN_140e571e0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint local_res10 [2];
  longlong *local_488;
  longlong lStack_480;
  undefined8 local_478;
  undefined8 local_470 [3];
  CMsg local_458 [1072];
  
  if (param_2 != 0) {
    local_478 = 0xfffffffffffffffe;
    local_res10[0] = param_2;
    FUN_140e4c7a0((longlong *)(param_1 + 0x108),(longlong *)&local_488,local_res10);
    lVar6 = *(longlong *)(param_1 + 0x138);
    if ((local_488 == (longlong *)0x0) || (local_488 != *(longlong **)(param_1 + 0x108))) {
      _invalid_parameter_noinfo();
    }
    if (lStack_480 != lVar6) {
      if (local_488 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *local_488;
      }
      if (lStack_480 == *(longlong *)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar1 = (longlong *)(lStack_480 + 0x20);
      uVar5 = *(ulonglong *)(lStack_480 + 0x38);
      if (*(ulonglong *)(lStack_480 + 0x40) < uVar5) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*plVar1;
      uVar3 = *(ulonglong *)(lStack_480 + 0x40);
      if (uVar3 < *(ulonglong *)(lStack_480 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      plVar4 = (longlong *)*plVar1;
      while( true ) {
        if ((plVar2 == (longlong *)0x0) || (plVar2 != plVar4)) {
          _invalid_parameter_noinfo();
        }
        if (uVar5 == uVar3) break;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar2;
        }
        if (*(ulonglong *)(lVar6 + 0x20) <= uVar5) {
          _invalid_parameter_noinfo();
        }
        FUN_140e5cca0(local_458);
        FUN_140e5cd60((longlong)local_458,param_2,(char *)(uVar5 + 0x20));
        (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))(*(longlong **)(param_1 + 0x308),param_2,local_458);
        FUN_140e5cd20((undefined8 *)local_458);
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar2;
        }
        if (*(ulonglong *)(lVar6 + 0x20) <= uVar5) {
          _invalid_parameter_noinfo();
        }
        uVar5 = uVar5 + 0x124;
      }
      FUN_140e4eff0(plVar1);
      FUN_140e54410((undefined8 *)(param_1 + 0x108),local_470,(longlong *)&local_488);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e57390(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  rsize_t rVar8;
  void **ppvVar9;
  void **ppvVar10;
  void **ppvVar11;
  undefined1 auStack_248 [32];
  void **local_228;
  longlong *plStack_220;
  void **local_218;
  longlong *plStack_210;
  void **local_208 [3];
  void *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  void **local_1d8;
  longlong *plStack_1d0;
  uint local_1b8 [2];
  void *local_1b0 [3];
  void *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  char local_16c [16];
  undefined4 local_15c;
  char local_158 [256];
  undefined4 local_58;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_180 = 0xfffffffffffffffe;
    local_48 = DAT_140e79440 ^ (ulonglong)auStack_248;
    local_218 = (void **)CONCAT44(local_218._4_4_,param_2);
    plVar1 = (longlong *)(param_1 + 0x148);
    FUN_140e4c7a0(plVar1,(longlong *)&local_228,(uint *)&local_218);
    ppvVar9 = local_228;
    plVar5 = *(longlong **)(param_1 + 0x178);
    if ((local_228 == (void **)0x0) || (local_228 != (void **)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = plStack_220;
    ppvVar11 = (void **)0x0;
    if (plStack_220 != plVar5) {
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar9 = ppvVar11;
      }
      else {
        ppvVar9 = *ppvVar9;
      }
      if (plVar2 == ppvVar9[6]) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0(plVar2 + 4);
      local_1d8 = local_228;
      plStack_1d0 = plStack_220;
      FUN_140e54410(plVar1,&local_228,(longlong *)&local_1d8);
    }
    local_228 = operator_new(8);
    local_208[0] = ppvVar11;
    if (local_228 != (void **)0x0) {
      *local_228 = local_208;
      local_208[0] = local_228;
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    plVar5 = (longlong *)param_3[3];
    local_218 = local_228;
    if ((longlong *)param_3[4] < plVar5) {
      _invalid_parameter_noinfo();
    }
    ppvVar9 = (void **)*param_3;
    while( true ) {
      plVar2 = (longlong *)param_3[4];
      if (plVar2 < (longlong *)param_3[3]) {
        _invalid_parameter_noinfo();
      }
      if ((ppvVar9 == (void **)0x0) || (ppvVar9 != (void **)*param_3)) {
        _invalid_parameter_noinfo();
      }
      if (plVar5 == plVar2) break;
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar10 = ppvVar11;
      }
      else {
        ppvVar10 = *ppvVar9;
      }
      if (ppvVar10[4] <= plVar5) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*plVar5;
      if (plVar2 == (longlong *)0x0) {
        lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
        if (0 < lVar7) {
          rVar8 = lVar7 << 3;
          memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
        }
        param_3[4] = param_3[4] + -8;
        if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
          _invalid_parameter_noinfo();
        }
        local_228 = (void **)*param_3;
        ppvVar9 = local_228;
        plStack_220 = plVar5;
        local_218 = local_228;
        plStack_210 = plVar5;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
        iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
        if (iVar3 == 5) {
          lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
          if (0 < lVar7) {
            rVar8 = lVar7 << 3;
            memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
          }
          param_3[4] = param_3[4] + -8;
          if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
            _invalid_parameter_noinfo();
          }
          local_228 = (void **)*param_3;
          plStack_220 = plVar5;
          local_1d8 = local_228;
          plStack_1d0 = plVar5;
          memset(&local_178,0,0x124);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,0);
          local_178 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
          local_174 = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
          local_170 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_16c,pcVar6,0x10);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_158,pcVar6,0x100);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
          local_15c = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
          local_58 = (**(code **)(*plVar5 + 0x40))(plVar5);
          FUN_140e52210((longlong *)local_208,&local_178);
          (**(code **)(*plVar2 + 0x40))(plVar2,0);
          (**(code **)*plVar2)(plVar2,1);
          plVar5 = plStack_220;
          ppvVar9 = local_228;
        }
        else {
          if (ppvVar9 == (void **)0x0) {
            _invalid_parameter_noinfo();
            ppvVar10 = ppvVar11;
          }
          else {
            ppvVar10 = *ppvVar9;
          }
          if (ppvVar10[4] <= plVar5) {
            _invalid_parameter_noinfo();
          }
          plVar5 = plVar5 + 1;
        }
      }
    }
    lVar7 = local_1e8 - (longlong)local_1f0 >> 0x3f;
    if ((local_1e8 - (longlong)local_1f0) / 0x124 + lVar7 != lVar7) {
      local_1b8[0] = param_2;
      FUN_140e4d580(local_1b0,(longlong)local_208);
      FUN_140e53000(plVar1,(longlong *)&local_1d8,local_1b8);
      local_228 = local_1b0;
      if (local_198 != (void *)0x0) {
        operator_delete(local_198);
      }
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = 0;
      operator_delete(local_1b0[0]);
    }
    if (local_1f0 != (void *)0x0) {
      operator_delete(local_1f0);
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    operator_delete(local_208[0]);
  }
  return;
}




void FUN_140e57830(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint local_res10 [2];
  longlong *local_48;
  longlong lStack_40;
  undefined8 local_38 [2];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_140e4c7a0((longlong *)(param_1 + 0x148),(longlong *)&local_48,local_res10);
    lVar6 = *(longlong *)(param_1 + 0x178);
    if ((local_48 == (longlong *)0x0) || (local_48 != *(longlong **)(param_1 + 0x148))) {
      _invalid_parameter_noinfo();
    }
    if (lStack_40 != lVar6) {
      if (local_48 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *local_48;
      }
      if (lStack_40 == *(longlong *)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar5 = *(ulonglong *)(lStack_40 + 0x38);
      plVar1 = (longlong *)(lStack_40 + 0x20);
      if (*(ulonglong *)(lStack_40 + 0x40) < uVar5) {
        _invalid_parameter_noinfo();
      }
      uVar2 = *(ulonglong *)(lStack_40 + 0x40);
      plVar3 = (longlong *)*plVar1;
      if (uVar2 < *(ulonglong *)(lStack_40 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      plVar4 = (longlong *)*plVar1;
      while( true ) {
        if ((plVar3 == (longlong *)0x0) || (plVar3 != plVar4)) {
          _invalid_parameter_noinfo();
        }
        if (uVar5 == uVar2) break;
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar3;
        }
        if (*(ulonglong *)(lVar6 + 0x20) <= uVar5) {
          _invalid_parameter_noinfo();
        }
        (**(code **)(**(longlong **)(param_1 + 0x308) + 0x30))(*(longlong **)(param_1 + 0x308),param_2,uVar5 + 0x20);
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar3;
        }
        if (*(ulonglong *)(lVar6 + 0x20) <= uVar5) {
          _invalid_parameter_noinfo();
        }
        uVar5 = uVar5 + 0x124;
      }
      FUN_140e4eff0(plVar1);
      FUN_140e54410((undefined8 *)(param_1 + 0x148),local_38,(longlong *)&local_48);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e579c0(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  rsize_t rVar8;
  void **ppvVar9;
  void **ppvVar10;
  void **ppvVar11;
  undefined1 auStack_248 [32];
  void **local_228;
  longlong *plStack_220;
  void **local_218;
  longlong *plStack_210;
  void **local_208 [3];
  void *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  void **local_1d8;
  longlong *plStack_1d0;
  uint local_1b8 [2];
  void *local_1b0 [3];
  void *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  char local_16c [16];
  undefined4 local_15c;
  char local_158 [256];
  undefined4 local_58;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_180 = 0xfffffffffffffffe;
    local_48 = DAT_140e79440 ^ (ulonglong)auStack_248;
    local_218 = (void **)CONCAT44(local_218._4_4_,param_2);
    plVar1 = (longlong *)(param_1 + 0x188);
    FUN_140e4c7a0(plVar1,(longlong *)&local_228,(uint *)&local_218);
    ppvVar9 = local_228;
    plVar5 = *(longlong **)(param_1 + 0x1b8);
    if ((local_228 == (void **)0x0) || (local_228 != (void **)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = plStack_220;
    ppvVar11 = (void **)0x0;
    if (plStack_220 != plVar5) {
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar9 = ppvVar11;
      }
      else {
        ppvVar9 = *ppvVar9;
      }
      if (plVar2 == ppvVar9[6]) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0(plVar2 + 4);
      local_1d8 = local_228;
      plStack_1d0 = plStack_220;
      FUN_140e54410(plVar1,&local_228,(longlong *)&local_1d8);
    }
    local_228 = operator_new(8);
    local_208[0] = ppvVar11;
    if (local_228 != (void **)0x0) {
      *local_228 = local_208;
      local_208[0] = local_228;
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    plVar5 = (longlong *)param_3[3];
    local_218 = local_228;
    if ((longlong *)param_3[4] < plVar5) {
      _invalid_parameter_noinfo();
    }
    ppvVar9 = (void **)*param_3;
    while( true ) {
      plVar2 = (longlong *)param_3[4];
      if (plVar2 < (longlong *)param_3[3]) {
        _invalid_parameter_noinfo();
      }
      if ((ppvVar9 == (void **)0x0) || (ppvVar9 != (void **)*param_3)) {
        _invalid_parameter_noinfo();
      }
      if (plVar5 == plVar2) break;
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar10 = ppvVar11;
      }
      else {
        ppvVar10 = *ppvVar9;
      }
      if (ppvVar10[4] <= plVar5) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*plVar5;
      if (plVar2 == (longlong *)0x0) {
        lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
        if (0 < lVar7) {
          rVar8 = lVar7 << 3;
          memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
        }
        param_3[4] = param_3[4] + -8;
        if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
          _invalid_parameter_noinfo();
        }
        local_228 = (void **)*param_3;
        ppvVar9 = local_228;
        plStack_220 = plVar5;
        local_218 = local_228;
        plStack_210 = plVar5;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
        iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
        if (iVar3 == 4) {
          lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
          if (0 < lVar7) {
            rVar8 = lVar7 << 3;
            memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
          }
          param_3[4] = param_3[4] + -8;
          if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
            _invalid_parameter_noinfo();
          }
          local_228 = (void **)*param_3;
          plStack_220 = plVar5;
          local_1d8 = local_228;
          plStack_1d0 = plVar5;
          memset(&local_178,0,0x124);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,0);
          local_178 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
          local_174 = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
          local_170 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_16c,pcVar6,0x10);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_158,pcVar6,0x100);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
          local_15c = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
          local_58 = (**(code **)(*plVar5 + 0x40))(plVar5);
          FUN_140e52210((longlong *)local_208,&local_178);
          (**(code **)(*plVar2 + 0x40))(plVar2,0);
          (**(code **)*plVar2)(plVar2,1);
          plVar5 = plStack_220;
          ppvVar9 = local_228;
        }
        else {
          if (ppvVar9 == (void **)0x0) {
            _invalid_parameter_noinfo();
            ppvVar10 = ppvVar11;
          }
          else {
            ppvVar10 = *ppvVar9;
          }
          if (ppvVar10[4] <= plVar5) {
            _invalid_parameter_noinfo();
          }
          plVar5 = plVar5 + 1;
        }
      }
    }
    lVar7 = local_1e8 - (longlong)local_1f0 >> 0x3f;
    if ((local_1e8 - (longlong)local_1f0) / 0x124 + lVar7 != lVar7) {
      local_1b8[0] = param_2;
      FUN_140e4d580(local_1b0,(longlong)local_208);
      FUN_140e53000(plVar1,(longlong *)&local_1d8,local_1b8);
      local_228 = local_1b0;
      if (local_198 != (void *)0x0) {
        operator_delete(local_198);
      }
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = 0;
      operator_delete(local_1b0[0]);
    }
    if (local_1f0 != (void *)0x0) {
      operator_delete(local_1f0);
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    operator_delete(local_208[0]);
  }
  return;
}




void FUN_140e57e60(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint local_res10 [2];
  longlong *local_48;
  longlong lStack_40;
  undefined8 local_38 [2];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_140e4c7a0((longlong *)(param_1 + 0x188),(longlong *)&local_48,local_res10);
    lVar6 = *(longlong *)(param_1 + 0x1b8);
    if ((local_48 == (longlong *)0x0) || (local_48 != *(longlong **)(param_1 + 0x188))) {
      _invalid_parameter_noinfo();
    }
    if (lStack_40 != lVar6) {
      if (local_48 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *local_48;
      }
      if (lStack_40 == *(longlong *)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar5 = *(ulonglong *)(lStack_40 + 0x38);
      plVar1 = (longlong *)(lStack_40 + 0x20);
      if (*(ulonglong *)(lStack_40 + 0x40) < uVar5) {
        _invalid_parameter_noinfo();
      }
      uVar2 = *(ulonglong *)(lStack_40 + 0x40);
      plVar3 = (longlong *)*plVar1;
      if (uVar2 < *(ulonglong *)(lStack_40 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      plVar4 = (longlong *)*plVar1;
      while( true ) {
        if ((plVar3 == (longlong *)0x0) || (plVar3 != plVar4)) {
          _invalid_parameter_noinfo();
        }
        if (uVar5 == uVar2) break;
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar3;
        }
        if (*(ulonglong *)(lVar6 + 0x20) <= uVar5) {
          _invalid_parameter_noinfo();
        }
        (**(code **)(**(longlong **)(param_1 + 0x308) + 0x28))(*(longlong **)(param_1 + 0x308),param_2,2000,uVar5 + 0x20);
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar3;
        }
        if (*(ulonglong *)(lVar6 + 0x20) <= uVar5) {
          _invalid_parameter_noinfo();
        }
        uVar5 = uVar5 + 0x124;
      }
      FUN_140e4eff0(plVar1);
      FUN_140e54410((undefined8 *)(param_1 + 0x188),local_38,(longlong *)&local_48);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e58000(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  rsize_t rVar8;
  void **ppvVar9;
  void **ppvVar10;
  void **ppvVar11;
  undefined1 auStack_248 [32];
  void **local_228;
  longlong *plStack_220;
  void **local_218;
  longlong *plStack_210;
  void **local_208 [3];
  void *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  void **local_1d8;
  longlong *plStack_1d0;
  uint local_1b8 [2];
  void *local_1b0 [3];
  void *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  char local_16c [16];
  undefined4 local_15c;
  char local_158 [256];
  undefined4 local_58;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_180 = 0xfffffffffffffffe;
    local_48 = DAT_140e79440 ^ (ulonglong)auStack_248;
    local_218 = (void **)CONCAT44(local_218._4_4_,param_2);
    plVar1 = (longlong *)(param_1 + 0x1c8);
    FUN_140e4c7a0(plVar1,(longlong *)&local_228,(uint *)&local_218);
    ppvVar9 = local_228;
    plVar5 = *(longlong **)(param_1 + 0x1f8);
    if ((local_228 == (void **)0x0) || (local_228 != (void **)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = plStack_220;
    ppvVar11 = (void **)0x0;
    if (plStack_220 != plVar5) {
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar9 = ppvVar11;
      }
      else {
        ppvVar9 = *ppvVar9;
      }
      if (plVar2 == ppvVar9[6]) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0(plVar2 + 4);
      local_1d8 = local_228;
      plStack_1d0 = plStack_220;
      FUN_140e54410(plVar1,&local_228,(longlong *)&local_1d8);
    }
    local_228 = operator_new(8);
    local_208[0] = ppvVar11;
    if (local_228 != (void **)0x0) {
      *local_228 = local_208;
      local_208[0] = local_228;
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    plVar5 = (longlong *)param_3[3];
    local_218 = local_228;
    if ((longlong *)param_3[4] < plVar5) {
      _invalid_parameter_noinfo();
    }
    ppvVar9 = (void **)*param_3;
    while( true ) {
      plVar2 = (longlong *)param_3[4];
      if (plVar2 < (longlong *)param_3[3]) {
        _invalid_parameter_noinfo();
      }
      if ((ppvVar9 == (void **)0x0) || (ppvVar9 != (void **)*param_3)) {
        _invalid_parameter_noinfo();
      }
      if (plVar5 == plVar2) break;
      if (ppvVar9 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar10 = ppvVar11;
      }
      else {
        ppvVar10 = *ppvVar9;
      }
      if (ppvVar10[4] <= plVar5) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*plVar5;
      if (plVar2 == (longlong *)0x0) {
        lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
        if (0 < lVar7) {
          rVar8 = lVar7 << 3;
          memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
        }
        param_3[4] = param_3[4] + -8;
        if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
          _invalid_parameter_noinfo();
        }
        local_228 = (void **)*param_3;
        ppvVar9 = local_228;
        plStack_220 = plVar5;
        local_218 = local_228;
        plStack_210 = plVar5;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
        iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
        if (iVar3 == 6) {
          lVar7 = param_3[4] - (longlong)(plVar5 + 1) >> 3;
          if (0 < lVar7) {
            rVar8 = lVar7 << 3;
            memmove_s(plVar5,rVar8,plVar5 + 1,rVar8);
          }
          param_3[4] = param_3[4] + -8;
          if ((plVar5 < (longlong *)param_3[3]) || ((longlong *)param_3[4] < plVar5)) {
            _invalid_parameter_noinfo();
          }
          local_228 = (void **)*param_3;
          plStack_220 = plVar5;
          local_1d8 = local_228;
          plStack_1d0 = plVar5;
          memset(&local_178,0,0x124);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,0);
          local_178 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
          local_174 = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
          local_170 = (**(code **)(*plVar5 + 0x40))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_16c,pcVar6,0x10);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
          tq::SafeCopy(local_158,pcVar6,0x100);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
          local_15c = (**(code **)(*plVar5 + 0x48))(plVar5);
          plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
          local_58 = (**(code **)(*plVar5 + 0x40))(plVar5);
          FUN_140e52210((longlong *)local_208,&local_178);
          (**(code **)(*plVar2 + 0x40))(plVar2,0);
          (**(code **)*plVar2)(plVar2,1);
          plVar5 = plStack_220;
          ppvVar9 = local_228;
        }
        else {
          if (ppvVar9 == (void **)0x0) {
            _invalid_parameter_noinfo();
            ppvVar10 = ppvVar11;
          }
          else {
            ppvVar10 = *ppvVar9;
          }
          if (ppvVar10[4] <= plVar5) {
            _invalid_parameter_noinfo();
          }
          plVar5 = plVar5 + 1;
        }
      }
    }
    lVar7 = local_1e8 - (longlong)local_1f0 >> 0x3f;
    if ((local_1e8 - (longlong)local_1f0) / 0x124 + lVar7 != lVar7) {
      local_1b8[0] = param_2;
      FUN_140e4d580(local_1b0,(longlong)local_208);
      FUN_140e53000(plVar1,(longlong *)&local_1d8,local_1b8);
      local_228 = local_1b0;
      if (local_198 != (void *)0x0) {
        operator_delete(local_198);
      }
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = 0;
      operator_delete(local_1b0[0]);
    }
    if (local_1f0 != (void *)0x0) {
      operator_delete(local_1f0);
    }
    local_1f0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    operator_delete(local_208[0]);
  }
  return;
}




void FUN_140e584a0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint local_res10 [2];
  ulonglong local_res18;
  longlong *local_res20;
  longlong *local_68 [2];
  longlong *local_58;
  longlong lStack_50;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_140e4c7a0((longlong *)(param_1 + 0x1c8),(longlong *)&local_58,local_res10);
    lVar6 = *(longlong *)(param_1 + 0x1f8);
    if ((local_58 == (longlong *)0x0) || (local_58 != *(longlong **)(param_1 + 0x1c8))) {
      _invalid_parameter_noinfo();
    }
    if (lStack_50 != lVar6) {
      lVar6 = 0;
      if (local_58 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar6 = *local_58;
      }
      if (lStack_50 == *(longlong *)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar8 = *(ulonglong *)(lStack_50 + 0x38);
      plVar1 = (longlong *)(lStack_50 + 0x20);
      local_68[0] = plVar1;
      if (*(ulonglong *)(lStack_50 + 0x40) < uVar8) {
        _invalid_parameter_noinfo();
      }
      local_res18 = *(ulonglong *)(lStack_50 + 0x40);
      plVar2 = (longlong *)*plVar1;
      if (local_res18 < *(ulonglong *)(lStack_50 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      uVar3 = local_res18;
      local_res20 = (longlong *)*plVar1;
      while( true ) {
        lVar6 = 0;
        if ((plVar2 == (longlong *)0x0) || (plVar2 != local_res20)) {
          _invalid_parameter_noinfo();
        }
        if (uVar8 == uVar3) break;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar6 = *plVar2;
        }
        if (*(ulonglong *)(lVar6 + 0x20) <= uVar8) {
          _invalid_parameter_noinfo();
        }
        plVar1 = *(longlong **)(param_1 + 0x308);
        lVar6 = *plVar1;
        uVar4 = (**(code **)(lVar6 + 0x50))(plVar1,local_res10[0]);
        uVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,local_res10[0]);
        lVar7 = 0;
        (**(code **)(lVar6 + 0x20))(plVar1,local_res10[0],"SYSTEM",uVar5,uVar8 + 0x20,0,0xffff00,0x7d1,0,uVar4);
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar7 = *plVar2;
        }
        if (*(ulonglong *)(lVar7 + 0x20) <= uVar8) {
          _invalid_parameter_noinfo();
        }
        uVar8 = uVar8 + 0x124;
      }
      FUN_140e4eff0(local_68[0]);
      FUN_140e54410((undefined8 *)(param_1 + 0x1c8),local_68,(longlong *)&local_58);
    }
  }
  return;
}




void FUN_140e586f0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint local_res10 [2];
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28 [2];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_140e4c7a0((longlong *)(param_1 + 0x88),(longlong *)&local_38,local_res10);
    plVar1 = local_38;
    lVar4 = *(longlong *)(param_1 + 0xb8);
    if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)(param_1 + 0x88))) {
      _invalid_parameter_noinfo();
    }
    lVar2 = lStack_30;
    lVar3 = 0;
    if (lStack_30 != lVar4) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar4 = lVar3;
      }
      else {
        lVar4 = *plVar1;
      }
      if (lVar2 == *(longlong *)(lVar4 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0((longlong *)(lVar2 + 0x20));
      FUN_140e54410((undefined8 *)(param_1 + 0x88),local_28,(longlong *)&local_38);
    }
    FUN_140e4c7a0((longlong *)(param_1 + 200),(longlong *)&local_38,local_res10);
    plVar1 = local_38;
    lVar4 = *(longlong *)(param_1 + 0xf8);
    if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)(param_1 + 200))) {
      _invalid_parameter_noinfo();
    }
    lVar2 = lStack_30;
    if (lStack_30 != lVar4) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar4 = lVar3;
      }
      else {
        lVar4 = *plVar1;
      }
      if (lVar2 == *(longlong *)(lVar4 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0((longlong *)(lVar2 + 0x20));
      FUN_140e54410((undefined8 *)(param_1 + 200),local_28,(longlong *)&local_38);
    }
    FUN_140e4c7a0((longlong *)(param_1 + 0x108),(longlong *)&local_38,local_res10);
    plVar1 = local_38;
    lVar4 = *(longlong *)(param_1 + 0x138);
    if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)(param_1 + 0x108))) {
      _invalid_parameter_noinfo();
    }
    lVar2 = lStack_30;
    if (lStack_30 != lVar4) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar4 = lVar3;
      }
      else {
        lVar4 = *plVar1;
      }
      if (lVar2 == *(longlong *)(lVar4 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0((longlong *)(lVar2 + 0x20));
      FUN_140e54410((undefined8 *)(param_1 + 0x108),local_28,(longlong *)&local_38);
    }
    FUN_140e4c7a0((longlong *)(param_1 + 0x148),(longlong *)&local_38,local_res10);
    plVar1 = local_38;
    lVar4 = *(longlong *)(param_1 + 0x178);
    if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)(param_1 + 0x148))) {
      _invalid_parameter_noinfo();
    }
    lVar2 = lStack_30;
    if (lStack_30 != lVar4) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar4 = lVar3;
      }
      else {
        lVar4 = *plVar1;
      }
      if (lVar2 == *(longlong *)(lVar4 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0((longlong *)(lVar2 + 0x20));
      FUN_140e54410((undefined8 *)(param_1 + 0x148),local_28,(longlong *)&local_38);
    }
    FUN_140e4c7a0((longlong *)(param_1 + 0x188),(longlong *)&local_38,local_res10);
    plVar1 = local_38;
    lVar4 = *(longlong *)(param_1 + 0x1b8);
    if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)(param_1 + 0x188))) {
      _invalid_parameter_noinfo();
    }
    lVar2 = lStack_30;
    if (lStack_30 != lVar4) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar4 = lVar3;
      }
      else {
        lVar4 = *plVar1;
      }
      if (lVar2 == *(longlong *)(lVar4 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0((longlong *)(lVar2 + 0x20));
      FUN_140e54410((undefined8 *)(param_1 + 0x188),local_28,(longlong *)&local_38);
    }
    FUN_140e4c7a0((longlong *)(param_1 + 0x1c8),(longlong *)&local_38,local_res10);
    lVar4 = *(longlong *)(param_1 + 0x1f8);
    if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)(param_1 + 0x1c8))) {
      _invalid_parameter_noinfo();
    }
    if (lStack_30 != lVar4) {
      if (local_38 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar3 = *local_38;
      }
      if (lStack_30 == *(longlong *)(lVar3 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      FUN_140e4eff0((longlong *)(lStack_30 + 0x20));
      FUN_140e54410((undefined8 *)(param_1 + 0x1c8),local_28,(longlong *)&local_38);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e58a70(longlong param_1,uint param_2,int param_3,char *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  void **ppvVar3;
  void **ppvVar4;
  void *pvVar5;
  undefined1 auStack_138 [32];
  void **local_118;
  void **local_110;
  longlong local_108;
  undefined8 local_f8;
  uint local_f0 [2];
  void *local_e8 [6];
  void **local_b8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_b0 [16];
  void **local_a0;
  void **local_98;
  undefined8 local_90;
  __time64_t local_88;
  int local_80 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_78 [40];
  __time64_t local_50;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_f8 = 0xfffffffffffffffe;
    local_48 = DAT_140e79440 ^ (ulonglong)auStack_138;
    local_118 = (void **)CONCAT44(local_118._4_4_,param_2);
    if ((param_4 != (char *)0x0) && (param_3 != 0)) {
      plVar1 = (longlong *)(param_1 + 0x288);
      FUN_140e4cde0(plVar1,(longlong *)&local_110,(uint *)&local_118);
      lVar2 = *(longlong *)(param_1 + 0x2b8);
      if ((local_110 == (void **)0x0) || (local_110 != (void **)*plVar1)) {
        _invalid_parameter_noinfo();
      }
      if (local_108 == lVar2) {
        local_118 = operator_new(8);
        local_b8 = (void **)0x0;
        if (local_118 != (void **)0x0) {
          *local_118 = &local_b8;
          local_b8 = local_118;
        }
        local_a0 = (void **)0x0;
        local_98 = (void **)0x0;
        local_90 = 0;
        local_110 = local_118;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_78);
        local_80[0] = param_3;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_78,param_4);
        local_50 = _time64((__time64_t *)0x0);
        FUN_140e531b0((longlong *)&local_b8,local_80);
        local_f0[0] = param_2;
        FUN_140e4f8d0(local_e8,(longlong)&local_b8);
        FUN_140e54800(plVar1,(longlong *)&local_110,local_f0);
        local_110 = local_e8;
        FUN_140e4d830((longlong)local_e8);
        operator_delete(local_e8[0]);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_78);
        ppvVar4 = local_98;
        ppvVar3 = local_a0;
        if (local_a0 != (void **)0x0) {
          for (; local_118 = ppvVar3, ppvVar3 != ppvVar4; ppvVar3 = ppvVar3 + 7) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(ppvVar3 + 1));
          }
          operator_delete(local_a0);
        }
        local_a0 = (void **)0x0;
        local_98 = (void **)0x0;
        local_90 = 0;
        operator_delete(local_b8);
      }
      else {
        pvVar5 = (void *)0x0;
        if (local_110 == (void **)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          pvVar5 = *local_110;
        }
        if (local_108 == *(longlong *)((longlong)pvVar5 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_b0);
        local_b8 = (void **)CONCAT44(local_b8._4_4_,param_3);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_b0,param_4);
        local_88 = _time64((__time64_t *)0x0);
        FUN_140e531b0((longlong *)(local_108 + 0x20),(undefined4 *)&local_b8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_b0);
      }
    }
  }
  return;
}




undefined8 * FUN_140e58d20(undefined8 *param_1)

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
  lVar2 = FUN_140e476a0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140e58da0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e549b0(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




longlong * FUN_140e58de0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x61) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x61) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_140e58f3d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140e58f6c;
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
      if (*(char *)((longlong)plVar6 + 0x61) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x61) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x61);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x61);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x61);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x61);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x61) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x61) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_140e58f3d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140e54a60(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140e58f6c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_140e58f90(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = *(char *)((longlong)param_2 + 0x51);
  while (cVar1 == '\0') {
    FUN_140e58f90(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    lVar4 = param_2[7];
    if (lVar4 != 0) {
      lVar3 = param_2[8];
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x38) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar4 + 8));
      }
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




void FUN_140e59070(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  cVar2 = *(char *)((longlong)param_2 + 0x61);
  while (cVar2 == '\0') {
    FUN_140e59070(param_1,(longlong *)param_2[2]);
    plVar3 = (longlong *)*param_2;
    plVar1 = param_2 + 4;
    puStack_30 = (undefined8 *)param_2[10];
    local_38 = *plVar1;
    uStack_20 = *puStack_30;
    local_28 = local_38;
    FUN_140e4dc60(plVar1,local_18,&local_28,&local_38);
    operator_delete((void *)param_2[10]);
    param_2[10] = 0;
    param_2[0xb] = 0;
    operator_delete((void *)*plVar1);
    operator_delete(param_2);
    param_2 = plVar3;
    cVar2 = *(char *)((longlong)plVar3 + 0x61);
  }
  return;
}




longlong * FUN_140e59180(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140e549b0(param_1,*(longlong **)(param_1[6] + 8),plVar5,plVar6);
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
    FUN_140e54410(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_140e59360(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *local_58 [3];
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_58[0] = operator_new(8);
  if (local_58[0] == (longlong *)0x0) {
    local_58[0] = (longlong *)0x0;
  }
  else {
    *local_58[0] = (longlong)local_58;
  }
  local_40 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x308) + 0xa0))(*(longlong **)(param_1 + 0x308),local_58,param_2,3);
  if ((longlong)local_38 - (longlong)local_40 >> 3 == 0) {
    if (local_40 != (longlong *)0x0) {
      operator_delete(local_40);
    }
    local_40 = (longlong *)0x0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    operator_delete(local_58[0]);
  }
  else {
    FUN_140e561d0(param_1,param_2,local_58);
    FUN_140e56660(param_1,param_2,local_58);
    FUN_140e56d40(param_1,param_2,local_58);
    FUN_140e57390(param_1,param_2,local_58);
    FUN_140e579c0(param_1,param_2,local_58);
    FUN_140e58000(param_1,param_2,local_58);
    plVar9 = local_40;
    plVar2 = local_58[0];
    if (local_38 < local_40) {
      _invalid_parameter_noinfo();
      plVar2 = local_58[0];
    }
    while( true ) {
      plVar1 = local_38;
      if (local_38 < local_40) {
        _invalid_parameter_noinfo();
      }
      if ((plVar2 == (longlong *)0x0) || (plVar2 != local_58[0])) {
        _invalid_parameter_noinfo();
      }
      if (plVar9 == plVar1) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar2;
      }
      if (*(longlong **)(lVar10 + 0x20) <= plVar9) {
        _invalid_parameter_noinfo();
      }
      plVar1 = (longlong *)*plVar9;
      if (plVar1 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,6);
        plVar4 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,5);
        plVar5 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,4);
        plVar6 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,3);
        plVar7 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,2);
        plVar8 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,1);
        (**(code **)(*plVar3 + 0x40))(plVar3);
        (**(code **)(*plVar4 + 0x78))(plVar4);
        (**(code **)(*plVar5 + 0x48))(plVar5);
        (**(code **)(*plVar6 + 0x78))(plVar6);
        (**(code **)(*plVar7 + 0x40))(plVar7);
        (**(code **)(*plVar8 + 0x48))(plVar8);
        log_InlineLogERROR("CLeaveWordMgr::LoadUserSysLeaveWords. Type[%d] UserID[%u] SendName[%s] Time[%d] Word[%s] Item_id[%u]");
        (**(code **)*plVar1)(plVar1,1);
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar2;
      }
      if (*(longlong **)(lVar10 + 0x20) <= plVar9) {
        _invalid_parameter_noinfo();
      }
      plVar9 = plVar9 + 1;
    }
    FUN_140e4d010((longlong *)local_58);
    if (local_40 != (longlong *)0x0) {
      operator_delete(local_40);
    }
    local_40 = (longlong *)0x0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_140e596f0(longlong param_1,uint param_2)

{
  FUN_140e55e70(param_1,param_2);
  FUN_140e56b00(param_1,param_2);
  FUN_140e571e0(param_1,param_2);
  FUN_140e57830(param_1,param_2);
  FUN_140e57e60(param_1,param_2);
  FUN_140e584a0(param_1,param_2);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140e59750(undefined8 *param_1,uint param_2,char *param_3,void **param_4)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint7 uVar18;
  ulonglong uVar10;
  IStringManager *pIVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulonglong uVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_1038 [32];
  void **local_1018;
  ulonglong local_1010;
  undefined4 local_1008;
  undefined2 local_1000;
  undefined2 local_ff8;
  undefined4 local_ff0;
  uint local_fe8 [2];
  void **local_fe0;
  uint local_fd8;
  undefined4 uStack_fd4;
  undefined4 uStack_fd0;
  undefined4 uStack_fcc;
  int local_fc8;
  undefined4 uStack_fc4;
  void **local_fb8;
  undefined8 uStack_fb0;
  char *local_fa8;
  undefined8 *local_fa0;
  char *local_f98 [2];
  void **local_f88 [6];
  undefined8 *local_f58;
  undefined8 local_f50;
  undefined8 local_f48;
  uint local_f40 [2];
  void *local_f38 [8];
  CMsg local_ef8 [1072];
  CMsg local_ac8 [1072];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_698 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_670 [40];
  char local_648;
  undefined1 local_647 [510];
  undefined1 local_449;
  char local_448 [1023];
  undefined1 local_49;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140e59766;
  local_f48 = 0xfffffffffffffffe;
  local_48 = DAT_140e79440 ^ (ulonglong)auStack_1038;
  if (param_2 == 0) {
    uVar10 = (ulonglong)param_4 & 0xffffffffffffff00;
  }
  else {
    uVar18 = (uint7)((ulonglong)param_4 >> 8);
    if (param_1[0x61] == 0) {
      uVar10 = (ulonglong)uVar18 << 8;
    }
    else if (param_3 == (char *)0x0) {
      uVar10 = (ulonglong)uVar18 << 8;
    }
    else {
      uVar10 = 0;
      if (param_4 != (void **)0x0) {
        local_fe8[0] = param_2;
        local_fe0 = param_4;
        local_fb8 = param_4;
        local_fa8 = param_3;
        local_fa0 = param_1;
        local_f98[0] = param_3;
        FUN_140e4ca20(param_1 + 0x41,(longlong *)&local_fd8,local_fe8);
        lVar20 = param_1[0x47];
        if ((CONCAT44(uStack_fd4,local_fd8) == 0) || (CONCAT44(uStack_fd4,local_fd8) != param_1[0x41])) {
          _invalid_parameter_noinfo();
        }
        if (CONCAT44(uStack_fcc,uStack_fd0) == lVar20) {
          local_fc8 = 0;
          uStack_fc4 = 0;
          uStack_fd4 = 0;
          uStack_fd0 = 0;
          local_fd8 = param_2;
          FUN_140e4c870(param_1 + 0x41,(longlong *)local_698,&local_fd8);
        }
        iVar19 = 0;
        uVar10 = FUN_140e4ee80((longlong)param_1,param_2);
        if ((char)uVar10 == '\0') {
          FUN_140e5ceb0(local_ac8);
          uVar10 = FUN_140e5cfb0((longlong)local_ac8,6,param_3);
          if ((char)uVar10 != '\0') {
            (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ac8);
          }
          pIVar11 = theInstance();
          lVar20 = *(longlong *)param_1[0x61];
          uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_MSG_FAILED");
          (**(code **)(lVar20 + 0x30))(param_1[0x61],param_2,uVar12);
          uVar10 = FUN_140e5cf30((undefined8 *)local_ac8);
          uVar10 = uVar10 & 0xffffffffffffff00;
        }
        else {
          iVar6 = (**(code **)(*(longlong *)param_1[0x61] + 0x60))((longlong *)param_1[0x61],param_2);
          if (0 < iVar6) {
            do {
              pcVar13 = (char *)(**(code **)(*(longlong *)param_1[0x61] + 0x68))((longlong *)param_1[0x61],param_2,iVar19);
              lVar20 = (longlong)param_3 - (longlong)pcVar13;
              do {
                cVar4 = *pcVar13;
                cVar1 = pcVar13[lVar20];
                if (cVar4 != cVar1) break;
                pcVar13 = pcVar13 + 1;
              } while (cVar1 != '\0');
              if (cVar4 == cVar1) {
                plVar16 = (longlong *)param_1[0x61];
                lVar20 = *plVar16;
                uVar7 = (**(code **)(*plVar16 + 0x70))(plVar16,param_2,(longlong)iVar19);
                cVar4 = (**(code **)(lVar20 + 0x78))(param_1[0x61],uVar7);
                if (cVar4 != '\0') {
                  FUN_140e5ceb0(local_ac8);
                  uVar7 = (**(code **)(*(longlong *)param_1[0x61] + 0x70))((longlong *)param_1[0x61],param_2,(longlong)iVar19);
                  uVar12 = FUN_140e5cf70((longlong)local_ac8,0,uVar7);
                  if ((char)uVar12 != '\0') {
                    (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ac8);
                  }
                  pIVar11 = theInstance();
                  lVar20 = *(longlong *)param_1[0x61];
                  uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_LEAVEWORD_ONLINE");
                  (**(code **)(lVar20 + 0x30))(param_1[0x61],param_2,uVar12);
                  uVar10 = FUN_140e5cf30((undefined8 *)local_ac8);
                  return uVar10 & 0xffffffffffffff00;
                }
                plVar16 = (longlong *)param_1[0x61];
                lVar20 = *plVar16;
                uVar7 = (**(code **)(*plVar16 + 0x70))(plVar16,param_2,(longlong)iVar19);
                cVar4 = (**(code **)(lVar20 + 0x78))(param_1[0x61],uVar7);
                if (cVar4 == '\0') {
                  puVar2 = (undefined8 *)*param_1;
                  plVar16 = (longlong *)param_1[0x61];
                  uVar7 = (**(code **)(*plVar16 + 0x50))(plVar16,param_2);
                  uVar8 = (**(code **)(*plVar16 + 0x70))(plVar16,param_2,(longlong)iVar19);
                  uVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,param_2);
                  local_1010 = local_1010 & 0xffffffffffff0000;
                  local_1018 = (void **)CONCAT44(local_1018._4_4_,uVar7);
                  (*(code *)*puVar2)(param_1,uVar12,uVar8,local_fe0);
                  FUN_140e5ceb0(local_ac8);
                  uVar7 = (**(code **)(*(longlong *)param_1[0x61] + 0x70))((longlong *)param_1[0x61],param_2,(longlong)iVar19);
                  uVar12 = FUN_140e5cf70((longlong)local_ac8,1,uVar7);
                  if ((char)uVar12 != '\0') {
                    (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ac8);
                  }
                  pIVar11 = theInstance();
                  lVar20 = *(longlong *)param_1[0x61];
                  uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_MSG_SENT");
                  (**(code **)(lVar20 + 0x30))(param_1[0x61],param_2,uVar12);
                  uVar12 = FUN_140e5cf30((undefined8 *)local_ac8);
                  return CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                }
              }
              iVar19 = iVar19 + 1;
              iVar6 = (**(code **)(*(longlong *)param_1[0x61] + 0x60))((longlong *)param_1[0x61],param_2);
            } while (iVar19 < iVar6);
          }
          uVar10 = 0;
          lVar20 = (**(code **)(*(longlong *)param_1[0x61] + 0x80))((longlong *)param_1[0x61],param_2);
          uVar21 = uVar10;
          if (lVar20 != 0) {
            do {
              pcVar13 = (char *)(**(code **)(*(longlong *)param_1[0x61] + 0x88))((longlong *)param_1[0x61],param_2,uVar21);
              lVar20 = (longlong)param_3 - (longlong)pcVar13;
              do {
                cVar4 = *pcVar13;
                cVar1 = pcVar13[lVar20];
                if (cVar4 != cVar1) break;
                pcVar13 = pcVar13 + 1;
              } while (cVar1 != '\0');
              if (cVar4 == cVar1) {
                plVar16 = (longlong *)param_1[0x61];
                lVar20 = *plVar16;
                uVar7 = (**(code **)(*plVar16 + 0x90))(plVar16,param_2,uVar21);
                cVar4 = (**(code **)(lVar20 + 0x98))(param_1[0x61],uVar7);
                if (cVar4 != '\0') {
                  FUN_140e5ceb0(local_ac8);
                  uVar7 = (**(code **)(*(longlong *)param_1[0x61] + 0x90))((longlong *)param_1[0x61],param_2,uVar21);
                  uVar12 = FUN_140e5cf70((longlong)local_ac8,0,uVar7);
                  if ((char)uVar12 != '\0') {
                    (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ac8);
                  }
                  pIVar11 = theInstance();
                  lVar20 = *(longlong *)param_1[0x61];
                  uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_LEAVEWORD_ONLINE");
                  (**(code **)(lVar20 + 0x30))(param_1[0x61],param_2,uVar12);
                  uVar10 = FUN_140e5cf30((undefined8 *)local_ac8);
                  return uVar10 & 0xffffffffffffff00;
                }
                plVar16 = (longlong *)param_1[0x61];
                lVar20 = *plVar16;
                uVar7 = (**(code **)(*plVar16 + 0x90))(plVar16,param_2,uVar21);
                cVar4 = (**(code **)(lVar20 + 0x98))(param_1[0x61],uVar7);
                if (cVar4 == '\0') {
                  puVar2 = (undefined8 *)*param_1;
                  plVar16 = (longlong *)param_1[0x61];
                  uVar7 = (**(code **)(*plVar16 + 0x50))(plVar16,param_2);
                  uVar8 = (**(code **)(*plVar16 + 0x90))(plVar16,param_2,uVar21);
                  uVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,param_2);
                  local_1010 = local_1010 & 0xffffffffffff0000;
                  local_1018 = (void **)CONCAT44(local_1018._4_4_,uVar7);
                  (*(code *)*puVar2)(param_1,uVar12,uVar8,local_fe0);
                  FUN_140e5ceb0(local_ac8);
                  uVar7 = (**(code **)(*(longlong *)param_1[0x61] + 0x90))((longlong *)param_1[0x61],param_2,uVar21);
                  uVar12 = FUN_140e5cf70((longlong)local_ac8,1,uVar7);
                  if ((char)uVar12 != '\0') {
                    (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ac8);
                  }
                  pIVar11 = theInstance();
                  lVar20 = *(longlong *)param_1[0x61];
                  uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_MSG_SENT");
                  (**(code **)(lVar20 + 0x30))(param_1[0x61],param_2,uVar12);
                  uVar12 = FUN_140e5cf30((undefined8 *)local_ac8);
                  return CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                }
              }
              uVar21 = uVar21 + 1;
              uVar14 = (**(code **)(*(longlong *)param_1[0x61] + 0x80))((longlong *)param_1[0x61],param_2);
            } while (uVar21 < uVar14);
          }
          cVar4 = (*(code *)**(undefined8 **)param_1[0x61])();
          if (cVar4 == '\0') {
            iVar19 = tq::NameStrCheck(param_3,false);
            if ((iVar19 == 0) || (cVar4 = (**(code **)(*(longlong *)param_1[0x61] + 0x38))((longlong *)param_1[0x61],param_3), cVar4 != '\0')) {
              pIVar11 = theInstance();
              lVar20 = *(longlong *)param_1[0x61];
              uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_NO_LEAVEWORD_TARGET");
              (**(code **)(lVar20 + 0x30))(param_1[0x61],param_2,uVar12);
              FUN_140e5ceb0(local_ef8);
              uVar10 = FUN_140e5cfb0((longlong)local_ef8,6,param_3);
              if ((char)uVar10 != '\0') {
                (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ef8);
              }
              uVar10 = FUN_140e5cf30((undefined8 *)local_ef8);
              uVar10 = uVar10 & 0xffffffffffffff00;
            }
            else {
              iVar19 = (**(code **)(*(longlong *)param_1[0x61] + 0x40))();
              if (iVar19 < *(int *)((longlong)param_1 + 0x314)) {
                local_648 = '\0';
                memset(local_647,0,0x1ff);
                pIVar11 = theInstance();
                pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_LEV_LESS_THAN_ALLOW");
                _snprintf(&local_648,0x200,pcVar13,(ulonglong)*(uint *)((longlong)param_1 + 0x314));
                local_449 = 0;
                (**(code **)(*(longlong *)param_1[0x61] + 0x30))((longlong *)param_1[0x61],param_2,&local_648);
                FUN_140e5ceb0(local_ef8);
                uVar10 = FUN_140e5cfb0((longlong)local_ef8,6,param_3);
                if ((char)uVar10 != '\0') {
                  (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ef8);
                }
                uVar10 = FUN_140e5cf30((undefined8 *)local_ef8);
                uVar10 = uVar10 & 0xffffffffffffff00;
              }
              else {
                uVar9 = (**(code **)(*(longlong *)param_1[0x61] + 0x48))((longlong *)param_1[0x61],param_2);
                if ((3 < uVar9) || (bVar5 = FUN_140e50920((longlong)param_1,param_2), bVar5)) {
                  uVar12 = FUN_140e50be0((longlong)param_1,param_2,param_3);
                  if ((char)uVar12 == '\0') {
                    plVar16 = (longlong *)InstanceGet();
                    _snprintf(local_448,0x400,"SELECT * FROM cq_user WHERE name = \'%s\' LIMIT 1",param_3);
                    local_49 = 0;
                    plVar16 = (longlong *)(**(code **)(*plVar16 + 0x10))(plVar16,local_448,2);
                    if (plVar16 != (longlong *)0x0) {
                      lVar20 = (**(code **)(*plVar16 + 0x40))(plVar16);
                      if (lVar20 != 0) {
                        plVar17 = (longlong *)(**(code **)(*plVar16 + 0x10))(plVar16,&DAT_140e6c520);
                        iVar19 = (**(code **)(*plVar17 + 0x40))(plVar17);
                        local_fc8 = iVar19;
                        (**(code **)*plVar16)(plVar16);
                        puVar2 = (undefined8 *)*param_1;
                        plVar16 = (longlong *)param_1[0x61];
                        uVar7 = (**(code **)(*plVar16 + 0x50))(plVar16,param_2);
                        uVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,param_2);
                        local_1010 = CONCAT62(local_1010._2_6_,1);
                        local_1018 = (void **)CONCAT44(local_1018._4_4_,uVar7);
                        uVar10 = (*(code *)*puVar2)(param_1,uVar12,iVar19,local_fe0);
                        if ((char)uVar10 != '\0') {
                          FUN_140e58a70((longlong)param_1,param_2,iVar19,param_3);
                          FUN_140e5ceb0(local_ef8);
                          uVar10 = FUN_140e5cfb0((longlong)local_ef8,5,param_3);
                          if ((char)uVar10 != '\0') {
                            (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ef8);
                          }
                          pIVar11 = theInstance();
                          lVar20 = *(longlong *)param_1[0x61];
                          uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_MSG_SENT");
                          (**(code **)(lVar20 + 0x30))(param_1[0x61],param_2,uVar12);
                          uVar12 = FUN_140e5cf30((undefined8 *)local_ef8);
                          return CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                        }
                        return uVar10 & 0xffffffffffffff00;
                      }
                      (**(code **)*plVar16)(plVar16);
                    }
                    pIVar11 = theInstance();
                    lVar20 = *(longlong *)param_1[0x61];
                    uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_NO_LEAVEWORD_TARGET");
                    uVar10 = (**(code **)(lVar20 + 0x30))(param_1[0x61],param_2,uVar12);
                    uVar10 = uVar10 & 0xffffffffffffff00;
                  }
                  else {
                    FUN_140e4ceb0(param_1 + 0x59,(longlong *)&local_fd8,local_fe8);
                    local_fa8 = (char *)param_1[0x5f];
                    puVar3 = (ulonglong *)CONCAT44(uStack_fd4,local_fd8);
                    if ((puVar3 == (ulonglong *)0x0) || (puVar3 != (ulonglong *)param_1[0x59])) {
                      _invalid_parameter_noinfo();
                    }
                    lVar20 = CONCAT44(uStack_fcc,uStack_fd0);
                    if ((char *)lVar20 == local_fa8) {
                      FUN_140e51230(local_f88);
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                (local_670,param_3);
                      pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_140e4f1b0((longlong *)local_f88,local_670);
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(pbVar15,(char *)local_fe0);
                      local_fb8 = local_f38;
                      local_f40[0] = param_2;
                      FUN_140e4fbe0(local_f38,(longlong)local_f88);
                      FUN_140e58de0(param_1 + 0x59,(longlong *)local_698,local_f40);
                      local_fb8 = local_f38;
                      FUN_140e4de40((longlong *)local_f38);
                      operator_delete(local_f38[0]);
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                (local_670);
                      uStack_fb0 = *local_f58;
                      local_fd8 = (uint)local_f88[0];
                      uStack_fd4 = (undefined4)((ulonglong)local_f88[0] >> 0x20);
                      uStack_fd0 = SUB84(local_f58,0);
                      uStack_fcc = (undefined4)((ulonglong)local_f58 >> 0x20);
                      local_fb8 = local_f88[0];
                      FUN_140e4dc60((longlong *)local_f88,(longlong *)local_f98,(longlong *)&local_fb8,(longlong *)&local_fd8);
                      operator_delete(local_f58);
                      local_f58 = (undefined8 *)0x0;
                      local_f50 = 0;
                      operator_delete(local_f88[0]);
                    }
                    else {
                      if (puVar3 == (ulonglong *)0x0) {
                        _invalid_parameter_noinfo();
                      }
                      else {
                        uVar10 = *puVar3;
                      }
                      if (lVar20 == *(longlong *)(uVar10 + 0x30)) {
                        _invalid_parameter_noinfo();
                      }
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                (local_698,param_3);
                      pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_140e4f1b0((longlong *)(lVar20 + 0x20),local_698);
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(pbVar15,(char *)local_fe0);
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                (local_698);
                    }
                    FUN_140e5ceb0(local_ef8);
                    uVar10 = FUN_140e5cfb0((longlong)local_ef8,4,param_3);
                    if ((char)uVar10 != '\0') {
                      (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ef8);
                    }
                    uVar12 = FUN_140e5cf30((undefined8 *)local_ef8);
                    uVar10 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                  }
                }
                else {
                  FUN_140e5ceb0(local_ef8);
                  uVar10 = FUN_140e5cfb0((longlong)local_ef8,6,param_3);
                  if ((char)uVar10 != '\0') {
                    (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ef8);
                  }
                  pIVar11 = theInstance();
                  lVar20 = *(longlong *)param_1[0x61];
                  uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_LEAVEWORD_MORE");
                  (**(code **)(lVar20 + 0x30))(param_1[0x61],param_2,uVar12);
                  uVar10 = FUN_140e5cf30((undefined8 *)local_ef8);
                  uVar10 = uVar10 & 0xffffffffffffff00;
                }
              }
            }
          }
          else {
            FUN_140e5ceb0(local_ef8);
            uVar10 = FUN_140e5cfb0((longlong)local_ef8,2,param_3);
            if ((char)uVar10 != '\0') {
              (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ef8);
            }
            pIVar11 = theInstance();
            lVar20 = *(longlong *)param_1[0x61];
            uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_NOFRIEND_LEAVEWORD_ONLINE");
            (**(code **)(lVar20 + 0x30))(param_1[0x61],param_2,uVar12,param_3);
            plVar16 = (longlong *)param_1[0x61];
            lVar20 = *plVar16;
            uVar7 = (**(code **)(*plVar16 + 0x50))(plVar16,param_2);
            uVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,param_2);
            pcVar13 = local_fa8;
            uVar8 = (**(code **)(*plVar16 + 0x58))(plVar16,local_fa8);
            local_ff8 = 0;
            local_1000 = 0x7d1;
            local_1008 = 0xffffff;
            local_1010 = 0;
            local_1018 = local_fe0;
            local_ff0 = uVar7;
            (**(code **)(lVar20 + 0x20))(param_1[0x61],uVar8,uVar12,pcVar13);
            FUN_140e5ceb0(local_ac8);
            uVar10 = FUN_140e5cfb0((longlong)local_ac8,6,pcVar13);
            if ((char)uVar10 != '\0') {
              (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_2,local_ac8);
            }
            FUN_140e5cf30((undefined8 *)local_ac8);
            uVar10 = FUN_140e5cf30((undefined8 *)local_ef8);
            uVar10 = uVar10 & 0xffffffffffffff00;
          }
        }
      }
    }
  }
  return uVar10;
}




void FUN_140e5a600(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e58f90(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




void FUN_140e5a640(longlong param_1)

{
  FUN_140e59070(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8));
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




void FUN_140e5a680(longlong *param_1)

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
  FUN_140e59180(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_140e5a6f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140e58f90(param_1,*(longlong **)(param_1[6] + 8),plVar5,plVar6);
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
    FUN_140e54e20(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




longlong * FUN_140e5a8d0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140e59070(param_1,*(longlong **)(param_1[6] + 8));
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
    if (*(char *)(lVar4 + 0x61) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x61) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x61);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x61);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x61);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x61);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_140e55250(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_140e5aab0(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint local_res10 [2];
  __time64_t local_res18;
  longlong local_res20;
  longlong *local_78;
  ulonglong uStack_70;
  longlong *local_68;
  ulonglong uStack_60;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_140e556c0(param_1,param_2);
    FUN_140e4cde0((longlong *)(param_1 + 0x288),(longlong *)&local_78,local_res10);
    plVar11 = local_78;
    uVar9 = *(ulonglong *)(param_1 + 0x2b8);
    if ((local_78 == (longlong *)0x0) || (local_78 != *(longlong **)(param_1 + 0x288))) {
      _invalid_parameter_noinfo();
    }
    uVar5 = uStack_70;
    if (uStack_70 != uVar9) {
      if (plVar11 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar11;
      }
      if (uVar5 == *(ulonglong *)(lVar10 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      local_res18 = _time64((__time64_t *)0x0);
      uVar9 = *(ulonglong *)(uVar5 + 0x38);
      if (*(ulonglong *)(uVar5 + 0x40) < uVar9) {
        _invalid_parameter_noinfo();
      }
      plVar11 = *(longlong **)(uVar5 + 0x20);
      _tzset();
      uVar12 = 0;
      while( true ) {
        uVar3 = *(ulonglong *)(uVar5 + 0x40);
        if (uVar3 < *(ulonglong *)(uVar5 + 0x38)) {
          _invalid_parameter_noinfo();
        }
        if ((plVar11 == (longlong *)0x0) || (plVar11 != *(longlong **)(uVar5 + 0x20))) {
          _invalid_parameter_noinfo();
        }
        if (uVar9 == uVar3) goto LAB_140e5ad24;
        uVar12 = uVar12 + 1;
        if (10000 < uVar12) break;
        if (plVar11 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar11;
        }
        if (*(ulonglong *)(lVar10 + 0x20) <= uVar9) {
          _invalid_parameter_noinfo();
        }
        plVar7 = __timezone();
        iVar1 = *(int *)(uVar9 + 0x30);
        iVar2 = *plVar7;
        plVar7 = __timezone();
        uVar6 = ((int)local_res18 - *plVar7) / 0x15180 - (iVar1 - iVar2) / 0x15180;
        uVar8 = (int)uVar6 >> 0x1f;
        if ((int)((uVar6 ^ uVar8) - uVar8) < 1) {
          if (plVar11 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar10 = 0;
          }
          else {
            lVar10 = *plVar11;
          }
          if (*(ulonglong *)(lVar10 + 0x20) <= uVar9) {
            _invalid_parameter_noinfo();
          }
          uVar9 = uVar9 + 0x38;
        }
        else {
          FUN_140e46490((undefined4 *)(uVar9 + 0x38),*(undefined4 **)(uVar5 + 0x40),uVar9);
          lVar4 = *(longlong *)(uVar5 + 0x40);
          for (lVar10 = lVar4 + -0x38; local_res20 = lVar10, lVar10 != lVar4; lVar10 = lVar10 + 0x38) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar10 + 8));
          }
          *(longlong *)(uVar5 + 0x40) = *(longlong *)(uVar5 + 0x40) + -0x38;
          if ((uVar9 < *(ulonglong *)(uVar5 + 0x38)) || (*(ulonglong *)(uVar5 + 0x40) < uVar9)) {
            _invalid_parameter_noinfo();
          }
          plVar11 = *(longlong **)(uVar5 + 0x20);
          local_78 = plVar11;
          uStack_70 = uVar9;
          local_68 = plVar11;
          uStack_60 = uVar9;
        }
      }
      log_InlineLogERROR(&DAT_140e69668,"DEAD_LOOP_BREAK","uLoopCount","f:\\version\\cqserver-78.0.11-1204\\modules\\leaveword\\src\\leavewordmgr.cpp",0x118);
    }
LAB_140e5ad24:
    FUN_140e4caf0((longlong *)(param_1 + 0x248),(longlong *)&local_68,local_res10);
    FUN_140e59360(param_1,param_2);
  }
  return;
}




void FUN_140e5ad70(longlong *param_1)

{
  FUN_140e5a680(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e5ada0(longlong *param_1)

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
  FUN_140e5a6f0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_140e5ae10(longlong *param_1)

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
  FUN_140e5a8d0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_140e5ae80(longlong *param_1)

{
  FUN_140e5a680(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140e5aeb0(undefined8 *param_1)

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
  lVar2 = FUN_140e47700();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140e5af30(longlong *param_1)

{
  FUN_140e5ada0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e5af60(longlong *param_1)

{
  FUN_140e5ae10(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e5af90(longlong *param_1)

{
  FUN_140e5ada0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e5afc0(longlong *param_1)

{
  FUN_140e5ae10(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140e5aff0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  *param_1 = leaveword::CLeaveWordMgr::vftable;
  plVar4 = param_1 + 1;
  plVar8 = *(longlong **)param_1[7];
  plVar11 = (longlong *)*plVar4;
  lVar13 = 0;
  while( true ) {
    plVar9 = (longlong *)param_1[7];
    if ((plVar11 == (longlong *)0x0) || (plVar11 != (longlong *)*plVar4)) {
      _invalid_parameter_noinfo();
    }
    if (plVar8 == plVar9) break;
    if (plVar11 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar12 = lVar13;
    }
    else {
      lVar12 = *plVar11;
    }
    if (plVar8 == *(longlong **)(lVar12 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar9 = (longlong *)plVar8[7];
    if ((longlong *)plVar8[8] < plVar9) {
      _invalid_parameter_noinfo();
    }
    plVar7 = (longlong *)plVar8[4];
    while( true ) {
      plVar2 = (longlong *)plVar8[8];
      if (plVar2 < (longlong *)plVar8[7]) {
        _invalid_parameter_noinfo();
      }
      if ((plVar7 == (longlong *)0x0) || (plVar7 != (longlong *)plVar8[4])) {
        _invalid_parameter_noinfo();
      }
      if (plVar9 == plVar2) break;
      if (plVar7 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar12 = lVar13;
      }
      else {
        lVar12 = *plVar7;
      }
      if (*(longlong **)(lVar12 + 0x20) <= plVar9) {
        _invalid_parameter_noinfo();
      }
      if (*plVar9 != 0) {
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar12 = lVar13;
        }
        else {
          lVar12 = *plVar7;
        }
        if (*(longlong **)(lVar12 + 0x20) <= plVar9) {
          _invalid_parameter_noinfo();
        }
        (*(code *)**(undefined8 **)*plVar9)((undefined8 *)*plVar9,1);
      }
      if (plVar7 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar12 = lVar13;
      }
      else {
        lVar12 = *plVar7;
      }
      if (*(longlong **)(lVar12 + 0x20) <= plVar9) {
        _invalid_parameter_noinfo();
      }
      plVar9 = plVar9 + 1;
    }
    if (plVar11 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
      plVar9 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar9 + 0x51) == '\0') {
        cVar1 = *(char *)(*plVar9 + 0x51);
        plVar8 = plVar9;
        plVar9 = (longlong *)*plVar9;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar9 + 0x51);
          plVar8 = plVar9;
          plVar9 = (longlong *)*plVar9;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x51);
        plVar7 = (longlong *)plVar8[1];
        plVar9 = plVar8;
        while ((plVar8 = plVar7, cVar1 == '\0' && (plVar9 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x51);
          plVar7 = (longlong *)plVar8[1];
          plVar9 = plVar8;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  FUN_140e52350(plVar4,*(longlong **)(param_1[7] + 8),param_3,param_4);
  *(undefined8 *)(param_1[7] + 8) = param_1[7];
  param_1[8] = 0;
  *(undefined8 *)param_1[7] = param_1[7];
  *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
  plVar4 = param_1 + 9;
  plVar8 = (longlong *)*plVar4;
  plVar11 = *(longlong **)param_1[0xf];
  do {
    do {
      while( true ) {
        while( true ) {
          plVar9 = plVar11;
          plVar11 = (longlong *)param_1[0xf];
          if ((plVar8 == (longlong *)0x0) || (plVar8 != (longlong *)*plVar4)) {
            _invalid_parameter_noinfo();
          }
          if (plVar9 == plVar11) {
            FUN_140e52350(plVar4,*(longlong **)(param_1[0xf] + 8),param_3,param_4);
            *(undefined8 *)(param_1[0xf] + 8) = param_1[0xf];
            param_1[0x10] = 0;
            *(undefined8 *)param_1[0xf] = param_1[0xf];
            *(undefined8 *)(param_1[0xf] + 0x10) = param_1[0xf];
            if (param_1[0x18] != 0) {
              puVar3 = (undefined8 *)param_1[0x17];
              puVar10 = (undefined8 *)*puVar3;
              plVar4 = (longlong *)param_1[0x11];
              while( true ) {
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (puVar10 == puVar3) break;
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar13 = 0;
                }
                else {
                  lVar13 = *plVar4;
                }
                if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                lVar13 = (longlong)(puVar10[8] - puVar10[7]) >> 0x3f;
                if ((longlong)(puVar10[8] - puVar10[7]) / 0x124 + lVar13 != lVar13) {
                  if (plVar4 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = *plVar4;
                  }
                  if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  FUN_140e4eff0(puVar10 + 4);
                }
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (*(char *)((longlong)puVar10 + 0x51) == '\0') {
                  puVar5 = (undefined8 *)puVar10[2];
                  if (*(char *)((longlong)puVar5 + 0x51) == '\0') {
                    cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                    puVar10 = puVar5;
                    puVar5 = (undefined8 *)*puVar5;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                      puVar10 = puVar5;
                      puVar5 = (undefined8 *)*puVar5;
                    }
                  }
                  else {
                    cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                    puVar6 = (undefined8 *)puVar10[1];
                    puVar5 = puVar10;
                    while ((puVar10 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar10[2]))) {
                      cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                      puVar6 = (undefined8 *)puVar10[1];
                      puVar5 = puVar10;
                    }
                  }
                }
                else {
                  _invalid_parameter_noinfo();
                }
              }
              FUN_140e549b0(param_1 + 0x11,*(longlong **)(param_1[0x17] + 8),param_3,param_4);
              *(undefined8 *)(param_1[0x17] + 8) = param_1[0x17];
              param_1[0x18] = 0;
              *(undefined8 *)param_1[0x17] = param_1[0x17];
              *(undefined8 *)(param_1[0x17] + 0x10) = param_1[0x17];
            }
            if (param_1[0x20] != 0) {
              puVar3 = (undefined8 *)param_1[0x1f];
              puVar10 = (undefined8 *)*puVar3;
              plVar4 = (longlong *)param_1[0x19];
              while( true ) {
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (puVar10 == puVar3) break;
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar13 = 0;
                }
                else {
                  lVar13 = *plVar4;
                }
                if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                lVar13 = (longlong)(puVar10[8] - puVar10[7]) >> 0x3f;
                if ((longlong)(puVar10[8] - puVar10[7]) / 0x124 + lVar13 != lVar13) {
                  if (plVar4 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = *plVar4;
                  }
                  if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  FUN_140e4eff0(puVar10 + 4);
                }
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (*(char *)((longlong)puVar10 + 0x51) == '\0') {
                  puVar5 = (undefined8 *)puVar10[2];
                  if (*(char *)((longlong)puVar5 + 0x51) == '\0') {
                    cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                    puVar10 = puVar5;
                    puVar5 = (undefined8 *)*puVar5;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                      puVar10 = puVar5;
                      puVar5 = (undefined8 *)*puVar5;
                    }
                  }
                  else {
                    cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                    puVar6 = (undefined8 *)puVar10[1];
                    puVar5 = puVar10;
                    while ((puVar10 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar10[2]))) {
                      cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                      puVar6 = (undefined8 *)puVar10[1];
                      puVar5 = puVar10;
                    }
                  }
                }
                else {
                  _invalid_parameter_noinfo();
                }
              }
              FUN_140e549b0(param_1 + 0x19,*(longlong **)(param_1[0x1f] + 8),param_3,param_4);
              *(undefined8 *)(param_1[0x1f] + 8) = param_1[0x1f];
              param_1[0x20] = 0;
              *(undefined8 *)param_1[0x1f] = param_1[0x1f];
              *(undefined8 *)(param_1[0x1f] + 0x10) = param_1[0x1f];
            }
            if (param_1[0x28] != 0) {
              puVar3 = (undefined8 *)param_1[0x27];
              puVar10 = (undefined8 *)*puVar3;
              plVar4 = (longlong *)param_1[0x21];
              while( true ) {
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (puVar10 == puVar3) break;
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar13 = 0;
                }
                else {
                  lVar13 = *plVar4;
                }
                if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                lVar13 = (longlong)(puVar10[8] - puVar10[7]) >> 0x3f;
                if ((longlong)(puVar10[8] - puVar10[7]) / 0x124 + lVar13 != lVar13) {
                  if (plVar4 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = *plVar4;
                  }
                  if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  FUN_140e4eff0(puVar10 + 4);
                }
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (*(char *)((longlong)puVar10 + 0x51) == '\0') {
                  puVar5 = (undefined8 *)puVar10[2];
                  if (*(char *)((longlong)puVar5 + 0x51) == '\0') {
                    cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                    puVar10 = puVar5;
                    puVar5 = (undefined8 *)*puVar5;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                      puVar10 = puVar5;
                      puVar5 = (undefined8 *)*puVar5;
                    }
                  }
                  else {
                    cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                    puVar6 = (undefined8 *)puVar10[1];
                    puVar5 = puVar10;
                    while ((puVar10 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar10[2]))) {
                      cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                      puVar6 = (undefined8 *)puVar10[1];
                      puVar5 = puVar10;
                    }
                  }
                }
                else {
                  _invalid_parameter_noinfo();
                }
              }
              FUN_140e549b0(param_1 + 0x21,*(longlong **)(param_1[0x27] + 8),param_3,param_4);
              *(undefined8 *)(param_1[0x27] + 8) = param_1[0x27];
              param_1[0x28] = 0;
              *(undefined8 *)param_1[0x27] = param_1[0x27];
              *(undefined8 *)(param_1[0x27] + 0x10) = param_1[0x27];
            }
            if (param_1[0x30] != 0) {
              puVar3 = (undefined8 *)param_1[0x2f];
              puVar10 = (undefined8 *)*puVar3;
              plVar4 = (longlong *)param_1[0x29];
              while( true ) {
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (puVar10 == puVar3) break;
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar13 = 0;
                }
                else {
                  lVar13 = *plVar4;
                }
                if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                lVar13 = (longlong)(puVar10[8] - puVar10[7]) >> 0x3f;
                if ((longlong)(puVar10[8] - puVar10[7]) / 0x124 + lVar13 != lVar13) {
                  if (plVar4 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = *plVar4;
                  }
                  if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  FUN_140e4eff0(puVar10 + 4);
                }
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (*(char *)((longlong)puVar10 + 0x51) == '\0') {
                  puVar5 = (undefined8 *)puVar10[2];
                  if (*(char *)((longlong)puVar5 + 0x51) == '\0') {
                    cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                    puVar10 = puVar5;
                    puVar5 = (undefined8 *)*puVar5;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                      puVar10 = puVar5;
                      puVar5 = (undefined8 *)*puVar5;
                    }
                  }
                  else {
                    cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                    puVar6 = (undefined8 *)puVar10[1];
                    puVar5 = puVar10;
                    while ((puVar10 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar10[2]))) {
                      cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                      puVar6 = (undefined8 *)puVar10[1];
                      puVar5 = puVar10;
                    }
                  }
                }
                else {
                  _invalid_parameter_noinfo();
                }
              }
              FUN_140e549b0(param_1 + 0x29,*(longlong **)(param_1[0x2f] + 8),param_3,param_4);
              *(undefined8 *)(param_1[0x2f] + 8) = param_1[0x2f];
              param_1[0x30] = 0;
              *(undefined8 *)param_1[0x2f] = param_1[0x2f];
              *(undefined8 *)(param_1[0x2f] + 0x10) = param_1[0x2f];
            }
            if (param_1[0x38] != 0) {
              puVar3 = (undefined8 *)param_1[0x37];
              puVar10 = (undefined8 *)*puVar3;
              plVar4 = (longlong *)param_1[0x31];
              while( true ) {
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (puVar10 == puVar3) break;
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar13 = 0;
                }
                else {
                  lVar13 = *plVar4;
                }
                if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                lVar13 = (longlong)(puVar10[8] - puVar10[7]) >> 0x3f;
                if ((longlong)(puVar10[8] - puVar10[7]) / 0x124 + lVar13 != lVar13) {
                  if (plVar4 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = *plVar4;
                  }
                  if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  FUN_140e4eff0(puVar10 + 4);
                }
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (*(char *)((longlong)puVar10 + 0x51) == '\0') {
                  puVar5 = (undefined8 *)puVar10[2];
                  if (*(char *)((longlong)puVar5 + 0x51) == '\0') {
                    cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                    puVar10 = puVar5;
                    puVar5 = (undefined8 *)*puVar5;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                      puVar10 = puVar5;
                      puVar5 = (undefined8 *)*puVar5;
                    }
                  }
                  else {
                    cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                    puVar6 = (undefined8 *)puVar10[1];
                    puVar5 = puVar10;
                    while ((puVar10 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar10[2]))) {
                      cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                      puVar6 = (undefined8 *)puVar10[1];
                      puVar5 = puVar10;
                    }
                  }
                }
                else {
                  _invalid_parameter_noinfo();
                }
              }
              FUN_140e549b0(param_1 + 0x31,*(longlong **)(param_1[0x37] + 8),param_3,param_4);
              *(undefined8 *)(param_1[0x37] + 8) = param_1[0x37];
              param_1[0x38] = 0;
              *(undefined8 *)param_1[0x37] = param_1[0x37];
              *(undefined8 *)(param_1[0x37] + 0x10) = param_1[0x37];
            }
            if (param_1[0x40] != 0) {
              puVar3 = (undefined8 *)param_1[0x3f];
              puVar10 = (undefined8 *)*puVar3;
              plVar4 = (longlong *)param_1[0x39];
              while( true ) {
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (puVar10 == puVar3) break;
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar13 = 0;
                }
                else {
                  lVar13 = *plVar4;
                }
                if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                lVar13 = (longlong)(puVar10[8] - puVar10[7]) >> 0x3f;
                if ((longlong)(puVar10[8] - puVar10[7]) / 0x124 + lVar13 != lVar13) {
                  if (plVar4 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = *plVar4;
                  }
                  if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  FUN_140e4eff0(puVar10 + 4);
                }
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (*(char *)((longlong)puVar10 + 0x51) == '\0') {
                  puVar5 = (undefined8 *)puVar10[2];
                  if (*(char *)((longlong)puVar5 + 0x51) == '\0') {
                    cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                    puVar10 = puVar5;
                    puVar5 = (undefined8 *)*puVar5;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                      puVar10 = puVar5;
                      puVar5 = (undefined8 *)*puVar5;
                    }
                  }
                  else {
                    cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                    puVar6 = (undefined8 *)puVar10[1];
                    puVar5 = puVar10;
                    while ((puVar10 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar10[2]))) {
                      cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                      puVar6 = (undefined8 *)puVar10[1];
                      puVar5 = puVar10;
                    }
                  }
                }
                else {
                  _invalid_parameter_noinfo();
                }
              }
              FUN_140e549b0(param_1 + 0x39,*(longlong **)(param_1[0x3f] + 8),param_3,param_4);
              *(undefined8 *)(param_1[0x3f] + 8) = param_1[0x3f];
              param_1[0x40] = 0;
              *(undefined8 *)param_1[0x3f] = param_1[0x3f];
              *(undefined8 *)(param_1[0x3f] + 0x10) = param_1[0x3f];
            }
            if (param_1[0x58] != 0) {
              puVar3 = (undefined8 *)param_1[0x57];
              puVar10 = (undefined8 *)*puVar3;
              plVar4 = (longlong *)param_1[0x51];
              while( true ) {
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (puVar10 == puVar3) break;
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar13 = 0;
                }
                else {
                  lVar13 = *plVar4;
                }
                if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                lVar13 = (longlong)(puVar10[8] - puVar10[7]) >> 0x3f;
                if ((longlong)(puVar10[8] - puVar10[7]) / 0x38 + lVar13 != lVar13) {
                  if (plVar4 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = *plVar4;
                  }
                  if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  FUN_140e51140(puVar10 + 4);
                }
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (*(char *)((longlong)puVar10 + 0x51) == '\0') {
                  puVar5 = (undefined8 *)puVar10[2];
                  if (*(char *)((longlong)puVar5 + 0x51) == '\0') {
                    cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                    puVar10 = puVar5;
                    puVar5 = (undefined8 *)*puVar5;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)((longlong)*puVar5 + 0x51);
                      puVar10 = puVar5;
                      puVar5 = (undefined8 *)*puVar5;
                    }
                  }
                  else {
                    cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                    puVar6 = (undefined8 *)puVar10[1];
                    puVar5 = puVar10;
                    while ((puVar10 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar10[2]))) {
                      cVar1 = *(char *)((longlong)puVar10[1] + 0x51);
                      puVar6 = (undefined8 *)puVar10[1];
                      puVar5 = puVar10;
                    }
                  }
                }
                else {
                  _invalid_parameter_noinfo();
                }
              }
              FUN_140e58f90(param_1 + 0x51,*(longlong **)(param_1[0x57] + 8),param_3,param_4);
              *(undefined8 *)(param_1[0x57] + 8) = param_1[0x57];
              param_1[0x58] = 0;
              *(undefined8 *)param_1[0x57] = param_1[0x57];
              *(undefined8 *)(param_1[0x57] + 0x10) = param_1[0x57];
            }
            if (param_1[0x60] != 0) {
              puVar3 = (undefined8 *)param_1[0x5f];
              puVar10 = (undefined8 *)*puVar3;
              plVar4 = (longlong *)param_1[0x59];
              while( true ) {
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (puVar10 == puVar3) break;
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar13 = 0;
                }
                else {
                  lVar13 = *plVar4;
                }
                if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                if (puVar10[0xb] != 0) {
                  if (plVar4 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = *plVar4;
                  }
                  if (puVar10 == *(undefined8 **)(lVar13 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  cVar1 = *(char *)((longlong)*(longlong **)(puVar10[10] + 8) + 0x69);
                  plVar8 = *(longlong **)(puVar10[10] + 8);
                  while (cVar1 == '\0') {
                    FUN_140e4b8b0(puVar10 + 4,(longlong *)plVar8[2],param_3,param_4);
                    plVar11 = (longlong *)*plVar8;
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar8 + 8));
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar8 + 3));
                    operator_delete(plVar8);
                    plVar8 = plVar11;
                    cVar1 = *(char *)((longlong)plVar11 + 0x69);
                  }
                  *(undefined8 *)(puVar10[10] + 8) = puVar10[10];
                  puVar10[0xb] = 0;
                  *(undefined8 *)puVar10[10] = puVar10[10];
                  *(undefined8 *)(puVar10[10] + 0x10) = puVar10[10];
                }
                if (plVar4 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (*(char *)((longlong)puVar10 + 0x61) == '\0') {
                  puVar5 = (undefined8 *)puVar10[2];
                  if (*(char *)((longlong)puVar5 + 0x61) == '\0') {
                    cVar1 = *(char *)((longlong)*puVar5 + 0x61);
                    puVar10 = puVar5;
                    puVar5 = (undefined8 *)*puVar5;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)((longlong)*puVar5 + 0x61);
                      puVar10 = puVar5;
                      puVar5 = (undefined8 *)*puVar5;
                    }
                  }
                  else {
                    cVar1 = *(char *)((longlong)puVar10[1] + 0x61);
                    puVar6 = (undefined8 *)puVar10[1];
                    puVar5 = puVar10;
                    while ((puVar10 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar10[2]))) {
                      cVar1 = *(char *)((longlong)puVar10[1] + 0x61);
                      puVar6 = (undefined8 *)puVar10[1];
                      puVar5 = puVar10;
                    }
                  }
                }
                else {
                  _invalid_parameter_noinfo();
                }
              }
              FUN_140e59070(param_1 + 0x59,*(longlong **)(param_1[0x5f] + 8));
              *(undefined8 *)(param_1[0x5f] + 8) = param_1[0x5f];
              param_1[0x60] = 0;
              *(undefined8 *)param_1[0x5f] = param_1[0x5f];
              *(undefined8 *)(param_1[0x5f] + 0x10) = param_1[0x5f];
            }
            plVar4 = param_1 + 0x41;
            cVar1 = *(char *)((longlong)*(longlong **)(param_1[0x47] + 8) + 0x25);
            plVar8 = *(longlong **)(param_1[0x47] + 8);
            while (cVar1 == '\0') {
              FUN_140e46c80(plVar4,(longlong *)plVar8[2]);
              plVar11 = (longlong *)*plVar8;
              operator_delete(plVar8);
              plVar8 = plVar11;
              cVar1 = *(char *)((longlong)plVar11 + 0x25);
            }
            *(undefined8 *)(param_1[0x47] + 8) = param_1[0x47];
            param_1[0x48] = 0;
            *(undefined8 *)param_1[0x47] = param_1[0x47];
            *(undefined8 *)(param_1[0x47] + 0x10) = param_1[0x47];
            plVar8 = param_1 + 0x49;
            FUN_140e48380((longlong)plVar8);
            FUN_140e5ae10(param_1 + 0x59);
            operator_delete((void *)param_1[0x59]);
            FUN_140e5ada0(param_1 + 0x51);
            operator_delete((void *)param_1[0x51]);
            FUN_140e4b480(plVar8);
            operator_delete((void *)*plVar8);
            FUN_140e4d3b0(plVar4);
            operator_delete((void *)*plVar4);
            FUN_140e5a680(param_1 + 0x39);
            operator_delete((void *)param_1[0x39]);
            FUN_140e5a680(param_1 + 0x31);
            operator_delete((void *)param_1[0x31]);
            FUN_140e5a680(param_1 + 0x29);
            operator_delete((void *)param_1[0x29]);
            FUN_140e5a680(param_1 + 0x21);
            operator_delete((void *)param_1[0x21]);
            FUN_140e5a680(param_1 + 0x19);
            operator_delete((void *)param_1[0x19]);
            FUN_140e5a680(param_1 + 0x11);
            operator_delete((void *)param_1[0x11]);
            FUN_140e53490(param_1 + 9);
            operator_delete((void *)param_1[9]);
            FUN_140e53490(param_1 + 1);
            operator_delete((void *)param_1[1]);
            return;
          }
          if (plVar8 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = lVar13;
          }
          else {
            lVar12 = *plVar8;
          }
          if (plVar9 == *(longlong **)(lVar12 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          plVar11 = (longlong *)plVar9[7];
          if ((longlong *)plVar9[8] < plVar11) {
            _invalid_parameter_noinfo();
          }
          plVar7 = (longlong *)plVar9[4];
          while( true ) {
            plVar2 = (longlong *)plVar9[8];
            if (plVar2 < (longlong *)plVar9[7]) {
              _invalid_parameter_noinfo();
            }
            if ((plVar7 == (longlong *)0x0) || (plVar7 != (longlong *)plVar9[4])) {
              _invalid_parameter_noinfo();
            }
            if (plVar11 == plVar2) break;
            if (plVar7 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar12 = lVar13;
            }
            else {
              lVar12 = *plVar7;
            }
            if (*(longlong **)(lVar12 + 0x20) <= plVar11) {
              _invalid_parameter_noinfo();
            }
            if (*plVar11 != 0) {
              if (plVar7 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar12 = lVar13;
              }
              else {
                lVar12 = *plVar7;
              }
              if (*(longlong **)(lVar12 + 0x20) <= plVar11) {
                _invalid_parameter_noinfo();
              }
              (*(code *)**(undefined8 **)*plVar11)((undefined8 *)*plVar11,1);
            }
            if (plVar7 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar12 = lVar13;
            }
            else {
              lVar12 = *plVar7;
            }
            if (*(longlong **)(lVar12 + 0x20) <= plVar11) {
              _invalid_parameter_noinfo();
            }
            plVar11 = plVar11 + 1;
          }
          if (plVar8 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar9 + 0x51) == '\0') break;
          _invalid_parameter_noinfo();
          plVar11 = plVar9;
        }
        plVar11 = (longlong *)plVar9[2];
        if (*(char *)((longlong)plVar11 + 0x51) != '\0') break;
        cVar1 = *(char *)(*plVar11 + 0x51);
        plVar9 = (longlong *)*plVar11;
        while (plVar7 = plVar9, cVar1 == '\0') {
          plVar9 = (longlong *)*plVar7;
          cVar1 = *(char *)((longlong)plVar9 + 0x51);
          plVar11 = plVar7;
        }
      }
      plVar11 = (longlong *)plVar9[1];
    } while (*(char *)((longlong)plVar11 + 0x51) != '\0');
    do {
      plVar7 = plVar11;
      plVar11 = plVar7;
      if (plVar9 != (longlong *)plVar7[2]) break;
      plVar11 = (longlong *)plVar7[1];
      plVar9 = plVar7;
    } while (*(char *)((longlong)plVar11 + 0x51) == '\0');
  } while( true );
}




undefined8 * FUN_140e5c0d0(undefined8 *param_1)

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
  lVar2 = FUN_140e47820();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140e5c150(undefined8 *param_1)

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
  lVar2 = FUN_140e47880();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x61) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140e5c1d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  *param_1 = leaveword::CLeaveWordMgr::vftable;
  FUN_140e58d20(param_1 + 1);
  FUN_140e58d20(param_1 + 9);
  FUN_140e5aeb0(param_1 + 0x11);
  FUN_140e5aeb0(param_1 + 0x19);
  FUN_140e5aeb0(param_1 + 0x21);
  FUN_140e5aeb0(param_1 + 0x29);
  FUN_140e5aeb0(param_1 + 0x31);
  FUN_140e5aeb0(param_1 + 0x39);
  FUN_140e50f60(param_1 + 0x41);
  FUN_140e50fe0(param_1 + 0x49);
  FUN_140e5c0d0(param_1 + 0x51);
  FUN_140e5c150(param_1 + 0x59);
  param_1[0x61] = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  iVar1 = tq::DateStamp(0);
  *(int *)(param_1 + 0x62) = iVar1;
  FUN_140e52350(param_1 + 1,*(longlong **)(param_1[7] + 8),param_3,param_4);
  *(undefined8 *)(param_1[7] + 8) = param_1[7];
  param_1[8] = 0;
  *(undefined8 *)param_1[7] = param_1[7];
  *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
  FUN_140e52350(param_1 + 9,*(longlong **)(param_1[0xf] + 8),param_3,param_4);
  *(undefined8 *)(param_1[0xf] + 8) = param_1[0xf];
  param_1[0x10] = 0;
  *(undefined8 *)param_1[0xf] = param_1[0xf];
  *(undefined8 *)(param_1[0xf] + 0x10) = param_1[0xf];
  FUN_140e549b0(param_1 + 0x11,*(longlong **)(param_1[0x17] + 8),param_3,param_4);
  *(undefined8 *)(param_1[0x17] + 8) = param_1[0x17];
  param_1[0x18] = 0;
  *(undefined8 *)param_1[0x17] = param_1[0x17];
  *(undefined8 *)(param_1[0x17] + 0x10) = param_1[0x17];
  FUN_140e549b0(param_1 + 0x19,*(longlong **)(param_1[0x1f] + 8),param_3,param_4);
  *(undefined8 *)(param_1[0x1f] + 8) = param_1[0x1f];
  param_1[0x20] = 0;
  *(undefined8 *)param_1[0x1f] = param_1[0x1f];
  *(undefined8 *)(param_1[0x1f] + 0x10) = param_1[0x1f];
  FUN_140e549b0(param_1 + 0x21,*(longlong **)(param_1[0x27] + 8),param_3,param_4);
  *(undefined8 *)(param_1[0x27] + 8) = param_1[0x27];
  param_1[0x28] = 0;
  *(undefined8 *)param_1[0x27] = param_1[0x27];
  *(undefined8 *)(param_1[0x27] + 0x10) = param_1[0x27];
  FUN_140e549b0(param_1 + 0x29,*(longlong **)(param_1[0x2f] + 8),param_3,param_4);
  *(undefined8 *)(param_1[0x2f] + 8) = param_1[0x2f];
  param_1[0x30] = 0;
  *(undefined8 *)param_1[0x2f] = param_1[0x2f];
  *(undefined8 *)(param_1[0x2f] + 0x10) = param_1[0x2f];
  FUN_140e549b0(param_1 + 0x31,*(longlong **)(param_1[0x37] + 8),param_3,param_4);
  *(undefined8 *)(param_1[0x37] + 8) = param_1[0x37];
  param_1[0x38] = 0;
  *(undefined8 *)param_1[0x37] = param_1[0x37];
  *(undefined8 *)(param_1[0x37] + 0x10) = param_1[0x37];
  FUN_140e549b0(param_1 + 0x39,*(longlong **)(param_1[0x3f] + 8),param_3,param_4);
  *(undefined8 *)(param_1[0x3f] + 8) = param_1[0x3f];
  param_1[0x40] = 0;
  *(undefined8 *)param_1[0x3f] = param_1[0x3f];
  *(undefined8 *)(param_1[0x3f] + 0x10) = param_1[0x3f];
  FUN_140e48300((longlong)(param_1 + 0x41));
  FUN_140e48380((longlong)(param_1 + 0x49));
  FUN_140e58f90(param_1 + 0x51,*(longlong **)(param_1[0x57] + 8),param_3,param_4);
  *(undefined8 *)(param_1[0x57] + 8) = param_1[0x57];
  param_1[0x58] = 0;
  *(undefined8 *)param_1[0x57] = param_1[0x57];
  *(undefined8 *)(param_1[0x57] + 0x10) = param_1[0x57];
  FUN_140e59070(param_1 + 0x59,*(longlong **)(param_1[0x5f] + 8));
  *(undefined8 *)(param_1[0x5f] + 8) = param_1[0x5f];
  param_1[0x60] = 0;
  *(undefined8 *)param_1[0x5f] = param_1[0x5f];
  *(undefined8 *)(param_1[0x5f] + 0x10) = param_1[0x5f];
  return param_1;
}




undefined8 * FUN_140e5c560(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e5aff0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_140e5c590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_140e79460;
  if (DAT_140e79460 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x318);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_140e5c1d0(puVar1,param_2,param_3,param_4);
    }
    DAT_140e79460 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140e69668);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}




void FUN_140e5c610(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_140e5c640(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e5c647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_140e5c650(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e5c657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_140e5c660(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e5c667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_140e5c670(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140e5c6a0(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_140e5c6b0(void)

{
  return 0;
}




undefined8 FUN_140e5c6c0(void)

{
  return 0;
}




undefined8 FUN_140e5c6d0(void)

{
  return 0;
}




undefined8 FUN_140e5c6e0(void)

{
  return 0;
}




undefined8 * FUN_140e5c6f0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140e5c720(undefined8 *param_1)

{
  *param_1 = leaveword::CMsgLog::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 * FUN_140e5c750(undefined8 *param_1,byte param_2)

{
  *param_1 = leaveword::CMsgLog::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140e5c7b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = leaveword::CModule::vftable;
  FUN_140e41540(param_1,param_2,param_3,param_4);
  FUN_140e5cf30(param_1 + 0x85);
  param_1[2] = leaveword::CMsgLog::vftable;
  param_1[2] = tq::CMsg::vftable;
  *param_1 = gs::IModule::vftable;
  return;
}




ulonglong FUN_140e5c810(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




bool FUN_140e5c830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = FUN_140e5c590(param_1,param_2,param_3,param_4);
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140e69668);
    return false;
  }
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x420) + 0x30))(*(longlong **)(param_1 + 0x420),0x1d);
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140e69668);
    return false;
  }
  bVar1 = FUN_140e41650((longlong)puVar2,plVar3);
  return bVar1;
}




longlong * FUN_140e5c8f0(longlong param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    uVar1 = param_2[1];
    if (uVar1 < 0x3ea) {
      return (longlong *)0x0;
    }
    if (uVar1 < 0x3ec) {
      plVar3 = (longlong *)(param_1 + 0x10);
    }
    else {
      if (uVar1 != 0x87a) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)(param_1 + 0x428);
    }
    cVar2 = (**(code **)(*plVar3 + 8))();
    if (cVar2 == '\0') {
      plVar3 = (longlong *)0x0;
    }
    return plVar3;
  }
  return (longlong *)0x0;
}




void FUN_140e5c970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_140e5c590(param_1,param_2,param_3,param_4);
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140e69668);
    return;
  }
  thunk_FUN_140e51b90((longlong)puVar1,param_2,param_3,param_4);
  return;
}




bool FUN_140e5c9c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_140e5c590(param_1,param_2,param_3,param_4);
  if (puVar2 == (undefined8 *)0x0) {
    return false;
  }
  (**(code **)(**(longlong **)(param_1 + 0x420) + 8))(*(longlong **)(param_1 + 0x420),0x87a,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x420) + 8))(*(longlong **)(param_1 + 0x420),0x3ea,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x420) + 8))(*(longlong **)(param_1 + 0x420),0x3eb,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x18))(*(longlong **)(param_1 + 0x420),0x1d,puVar2);
  return cVar1 != '\0';
}




undefined8 FUN_140e5ca50(void)

{
  return 1;
}




undefined8 * FUN_140e5ca60(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = leaveword::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_140e5d100((CMsg *)(param_1 + 2));
  param_1[0x84] = param_2;
  FUN_140e5ceb0((CMsg *)(param_1 + 0x85));
  return param_1;
}




undefined8 * FUN_140e5cad0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = leaveword::CModule::vftable;
  FUN_140e41540(param_1,param_2,param_3,param_4);
  FUN_140e5cf30(param_1 + 0x85);
  param_1[2] = leaveword::CMsgLog::vftable;
  param_1[2] = tq::CMsg::vftable;
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined2 FUN_140e5cb60(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_140e5c8f0(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
    uVar1 = (undefined2)plVar2[1];
  }
  return uVar1;
}




longlong * ModuleCreate(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
                    /* 0x1cbc0  1  ModuleCreate */
  uVar3 = (undefined4)param_2;
  plVar2 = operator_new(0x850);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)leaveword::CModule::vftable;
    *(undefined4 *)(plVar2 + 1) = uVar3;
    FUN_140e5d100((CMsg *)(plVar2 + 2));
    plVar2[0x84] = param_1;
    FUN_140e5ceb0((CMsg *)(plVar2 + 0x85));
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_140e5c9c0((longlong)plVar2,param_2,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




CMsg * FUN_140e5cc70(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




CMsg * FUN_140e5cca0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = leaveword::CMsgCheatingProgram::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x10),0x3f5,true);
  return param_1;
}




void FUN_140e5cd20(undefined8 *param_1)

{
  *param_1 = leaveword::CMsgCheatingProgram::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140e5cd60(longlong param_1,int param_2,char *param_3)

{
  bool bVar1;
  uint uVar2;
  
  if (param_3 == (char *)0x0) {
    log_InlineLogERROR(&DAT_140e69668,"CHECKF","szText","f:\\version\\cqserver-78.0.11-1204\\modules\\leaveword\\src\\msg\\msgcheatingprogram.cpp",0x18);
  }
  else if (param_2 != 0) {
    *(int *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
    bVar1 = tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_3);
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x439;
    uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
    **(short **)(param_1 + 0x408) = (short)uVar2 + 0xb;
    if (0x400 < **(ushort **)(param_1 + 0x408)) {
      bVar1 = false;
    }
    return bVar1;
  }
  return false;
}




undefined8 FUN_140e5ce20(longlong param_1,void *param_2,uint param_3)

{
  if (param_2 == (void *)0x0) {
    return 0;
  }
  memcpy((void *)(param_1 + 8),param_2,(ulonglong)param_3);
  return 1;
}




undefined8 * FUN_140e5ce50(undefined8 *param_1,uint param_2)

{
  *param_1 = leaveword::CMsgCheatingProgram::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140e5ceb0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = leaveword::CMsgLeaveword::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x10),0x3f5,true);
  return param_1;
}




void FUN_140e5cf30(undefined8 *param_1)

{
  *param_1 = leaveword::CMsgLeaveword::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_140e5cf70(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x87a;
  **(undefined2 **)(param_1 + 0x408) = 0xc;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 8) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_140e5cfb0(longlong param_1,undefined2 param_2,char *param_3)

{
  short sVar1;
  uint uVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  
  if (param_3 == (char *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_3);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x87a;
  uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  sVar1 = (short)uVar2 + 8;
  **(short **)(param_1 + 0x408) = sVar1;
  return CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar2) >> 0x10),sVar1) >> 8),1);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e5d020(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  CStringPacker *this;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_138 [32];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_140e79440 ^ (ulonglong)auStack_138;
  if (*(short *)(*(longlong *)(param_1 + 0x408) + 4) == 4) {
    pcVar3 = local_118;
    this = (CStringPacker *)(param_1 + 0x410);
    uVar4 = 0x100;
    uVar2 = 0;
    tq::CStringPacker::GetString(this,0,pcVar3,0x100);
    puVar1 = FUN_140e5c590(this,uVar2,pcVar3,uVar4);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_140e4e850((longlong)puVar1,param_2,local_118);
    }
  }
  return;
}




undefined8 * FUN_140e5d0a0(undefined8 *param_1,uint param_2)

{
  *param_1 = leaveword::CMsgLeaveword::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140e5d100(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = leaveword::CMsgLog::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




ulonglong FUN_140e5d150(CMsg *param_1,char *param_2,ushort param_3)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  bVar3 = tq::CMsg::Create(param_1,param_2,param_3);
  uVar4 = CONCAT71(extraout_var,bVar3);
  if (bVar3) {
    uVar1 = *(ushort *)(param_1 + 10);
    uVar4 = (ulonglong)uVar1;
    if (uVar1 == 0x3ea) {
      lVar2 = *(longlong *)(param_1 + 0x408);
      *(undefined4 *)(lVar2 + 8) = 0;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    if (uVar1 == 0x3eb) {
      lVar2 = *(longlong *)(param_1 + 0x408);
      *(undefined4 *)(lVar2 + 8) = 1;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}




void FUN_140e5d1b0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = FUN_140e5c590(param_1,param_2,param_3,param_4);
  if ((plVar1 != (longlong *)0x0) && (*(int *)(*(longlong *)(param_1 + 0x408) + 8) == 0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2 & 0xffffffff);
  }
  return;
}




CMsg * FUN_140e5d200(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = leaveword::CMsgName::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x15),0x3f1,true);
  return param_1;
}




void FUN_140e5d280(undefined8 *param_1)

{
  *param_1 = leaveword::CMsgName::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140e5d2c0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3f7;
}




ulonglong FUN_140e5d2f0(CMsg *param_1,undefined1 param_2,char *param_3,undefined4 param_4)

{
  short sVar1;
  ulong uVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  undefined4 extraout_var;
  
  if (param_3 == (char *)0x0) {
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4;
    tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_3);
    uVar2 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x3f7;
    uVar3 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
    sVar1 = (short)uVar3 + 0xf;
    **(short **)(param_1 + 0x408) = sVar1;
    uVar4 = CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar3) >> 0x10),sVar1) >> 8),1);
  }
  return uVar4;
}




undefined8 FUN_140e5d3a0(CMsg *param_1,int param_2,undefined4 param_3)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  tq::CMsg::Init(param_1);
  *(char *)(*(longlong *)(param_1 + 0x408) + 0xc) = (char)param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  uVar1 = tq::TimeGet(0);
  *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x3f7;
  uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  **(short **)(param_1 + 0x408) = (short)uVar2 + 0xf;
  return 1;
}




uint FUN_140e5d440(longlong param_1,char *param_2)

{
  short sVar1;
  uint extraout_EAX;
  uint uVar2;
  
  if (param_2 == (char *)0x0) {
    log_InlineLogERROR(&DAT_140e69668,"IF_NOT","pszName","f:\\version\\cqserver-78.0.11-1204\\modules\\leaveword\\src\\msg\\msgname.cpp",0x58);
    return extraout_EAX & 0xffffff00;
  }
  tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_2);
  uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  sVar1 = (short)uVar2 + 0xf;
  **(short **)(param_1 + 0x408) = sVar1;
  return CONCAT31((int3)(CONCAT22((short)(uVar2 >> 0x10),sVar1) >> 8),1);
}




undefined8 * FUN_140e5d4c0(undefined8 *param_1,uint param_2)

{
  *param_1 = leaveword::CMsgName::vftable;
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
  if ((_StackCookie == DAT_140e79440) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 FUN_140e5d760(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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




bool FUN_140e5d80c(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140e79a00 = _encode_pointer(puVar1);
  DAT_140e79a08 = DAT_140e79a00;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140e5df28();
    atexit(FUN_140e5df60);
    atexit((_func_5014 *)&LAB_140e5de54);
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
    if (DAT_140e79468 < 1) {
      return 0;
    }
    DAT_140e79468 = DAT_140e79468 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_140e799f8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140e799f8;
        pvVar3 = DAT_140e799f8;
      }
      DAT_140e799f8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140e5d8e6;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140e5d8e6:
    if (DAT_140e799f0 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140e79a08);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_140e79a00);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_140e79a08);
            plVar12 = (longlong *)_decode_pointer(DAT_140e79a00);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_140e79a00 = _encoded_null();
        DAT_140e79a08 = DAT_140e79a00;
      }
      DAT_140e799f0 = 0;
      if (!bVar2) {
        LOCK();
        DAT_140e799f8 = (void *)0x0;
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
      bVar13 = DAT_140e799f8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140e799f8;
        pvVar3 = DAT_140e799f8;
      }
      DAT_140e799f8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140e5da0f;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140e5da0f:
    if (DAT_140e799f0 == 0) {
      DAT_140e799f0 = 1;
      iVar4 = _initterm_e(&DAT_140e682a8,&DAT_140e682b8);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_140e68298,&DAT_140e682a0);
      DAT_140e799f0 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_140e799f8 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_140e79a10 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140e79a10), BVar5 != 0)) {
      (*DAT_140e79a10)(param_1,2,param_3);
    }
    DAT_140e79468 = DAT_140e79468 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000140e5db88) */
/* WARNING: Removing unreachable block (ram,0x000140e5db1f) */
/* WARNING: Removing unreachable block (ram,0x000140e5dbc3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_140e79468 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_140e79450 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_140e79450 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_140e5ca50();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_140e5ca50();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_140e79450 = 0xffffffff;
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




undefined8 FUN_140e5dc40(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_140e79510);
  local_30 = DAT_140e79608;
  local_38 = RtlLookupFunctionEntry(DAT_140e79608,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140e795a8 = local_res8;
    DAT_140e79608 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140e79510,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140e79480 = DAT_140e79608;
  _DAT_140e79590 = local_res8[0];
  _DAT_140e79470 = 0xc0000409;
  _DAT_140e79474 = 1;
  local_20 = DAT_140e79440;
  local_18 = DAT_140e79448;
  DAT_140e79508 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140e6cf48);
  if (DAT_140e79508 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
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
  
  local_res10 = _decode_pointer(DAT_140e79a08);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140e79a08);
    local_res18[0] = _decode_pointer(DAT_140e79a00);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140e79a08 = _encode_pointer(local_res10);
    DAT_140e79a00 = _encode_pointer(local_res18[0]);
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




void FUN_140e5df28(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140e6d708; puVar1 < &DAT_140e6d708; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_140e5df60(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140e6d718; puVar1 < &DAT_140e6d718; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_140e40000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140e40000);
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
  if (DAT_140e79440 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140e79440 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_140e79440 == 0x2b992ddfa232) {
      DAT_140e79440 = 0x2b992ddfa233;
    }
  }
  DAT_140e79448 = ~DAT_140e79440;
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




void Unwind_140e5e240(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e260(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e280(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e2a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e2c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5e2e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e300(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5e320(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e340(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5e360(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e380(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5e3a0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e3c0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e3e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e400(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5e420(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e440(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e460(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5e480(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e4a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5e4c0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e4e0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e500(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e520(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5e540(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e560(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e580(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5e5a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




undefined8 Catch_140e5e5c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return 0x140e41579;
}




void Unwind_140e5e600(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e5e620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e5e640(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140e5e660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e680(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_140e5e6a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e6c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_140e5e6e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140e5e700(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140e5e720(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140e5e740(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140e5e760(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e780(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5e7a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e7c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5e7e0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e800(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140e5e820(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140e5e840(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140e5e860(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140e5e880(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140e5e8a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140e5e8c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140e5e8e0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140e5e900(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_140e5e920(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_140e5e940(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5e960(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5e980(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5e9a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5e9c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5e9e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ea00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ea20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ea40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ea60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ea80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5eaa0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5eac0(undefined8 param_1,longlong param_2)

{
  FUN_140e41f10((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5eae0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_140e5eb00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_140e5eb20(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5eb40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_140e5eb60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e5eb80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5eba0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ebc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ebe0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ec00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ec20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ec40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ec60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ec80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5eca0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ecc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140e5ece0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_140e5ed00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x28));
  return;
}




void Unwind_140e5ed20(undefined8 param_1,longlong param_2)

{
  FUN_140e41f10((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5ed40(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5ed60(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5ed80(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5eda0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5edc0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5ede0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5ee00(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5ee20(undefined8 param_1,longlong param_2)

{
  FUN_140e41f10((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5ee40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_140e5ee60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_140e5ee80(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5eea0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x58) + 8));
  return;
}




void Catch_140e5eec0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e5eee0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Catch_140e5ef00(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e5ef20(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5ef40(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5ef60(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5ef80(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5efa0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5efc0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5efe0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f000(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f020(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f040(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f060(void)

{
  FUN_140e41160();
  return;
}




void Catch_140e5f080(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e5f0b0(void)

{
  FUN_140e41160();
  return;
}




void Catch_140e5f0d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e5f100(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f120(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f140(void)

{
  FUN_140e41160();
  return;
}




void Catch_140e5f160(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140e5f190(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140e5f1c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140e5f1f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140e5f220(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140e5f250(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140e5f280(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e5f2b0(void)

{
  FUN_140e41160();
  return;
}




void Catch_140e5f2d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e5f300(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f320(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f340(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f360(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f380(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f3a0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f3c0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f3e0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f400(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f420(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f440(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f460(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f480(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f4a0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f4c0(undefined8 param_1,longlong param_2)

{
  FUN_140e41f10((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5f4e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f500(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Catch_140e5f520(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e5f540(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e5f560(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f580(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Catch_140e5f5a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x60);
  while (lVar2 != lVar1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8));
    lVar2 = lVar2 + 0x38;
    *(longlong *)(param_2 + 0x20) = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e5f5f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x20) + 8));
  return;
}




void Unwind_140e5f610(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f630(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Catch_140e5f650(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x60);
  while (lVar2 != lVar1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8));
    lVar2 = lVar2 + 0x38;
    *(longlong *)(param_2 + 0x20) = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e5f6a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x20) + 8));
  return;
}




void Unwind_140e5f6c0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f6e0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f700(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f720(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f740(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f760(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f780(undefined8 param_1,longlong param_2)

{
  FUN_140e46be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f7a0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f7c0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f7e0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f800(undefined8 param_1,longlong param_2)

{
  FUN_140e46c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f820(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f840(undefined8 param_1,longlong param_2)

{
  FUN_140e46c40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f860(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f880(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f8a0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f8c0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f8e0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f900(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f920(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f940(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5f960(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5f980(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e5f9a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e5f9c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140e5f9e0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e5fa00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fa20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140e5fa40(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fa60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140e5fa80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e5faa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e5fac0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e5fae0(undefined8 param_1,longlong param_2)

{
  FUN_140e41f10((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x18));
  return;
}




void Unwind_140e5fb00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_140e5fb20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x28));
  return;
}




void Unwind_140e5fb40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e5fb60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e5fb80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140e5fba0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e5fbc0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5fbe0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fc00(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fc20(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5fc40(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fc60(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fc80(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5fca0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fcc0(undefined8 param_1,longlong param_2)

{
  FUN_140e46be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fce0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5fd00(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fd20(undefined8 param_1,longlong param_2)

{
  FUN_140e46c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fd40(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5fd60(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fd80(undefined8 param_1,longlong param_2)

{
  FUN_140e46c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fda0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5fdc0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fde0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fe00(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5fe20(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fe40(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fe60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e5fe80(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5fea0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Catch_140e5fec0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x50);
  while (lVar2 != lVar1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8));
    lVar2 = lVar2 + 0x38;
    *(longlong *)(param_2 + 0x20) = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e5ff10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x20) + 8));
  return;
}




void Unwind_140e5ff30(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e5ff50(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5ff70(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5ff90(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e5ffb0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5ffd0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e5fff0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e60010(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60030(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60050(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e60070(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60090(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e600b0(undefined8 param_1,longlong param_2)

{
  FUN_140e484a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e600d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e600f0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60110(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60130(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60150(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60170(undefined8 param_1,longlong param_2)

{
  FUN_140e484e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60190(undefined8 param_1,longlong param_2)

{
  FUN_140e46be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e601b0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e601d0(undefined8 param_1,longlong param_2)

{
  FUN_140e48500(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e601f0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60210(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60230(undefined8 param_1,longlong param_2)

{
  FUN_140e48520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60250(undefined8 param_1,longlong param_2)

{
  FUN_140e46c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60270(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60290(undefined8 param_1,longlong param_2)

{
  FUN_140e48540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e602b0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e602d0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e602f0(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60310(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60330(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60350(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140e60370(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e60390(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e603b0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e603d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140e603f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e60410(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e60430(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e60450(undefined8 param_1,longlong param_2)

{
  FUN_140e41f10((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x18));
  return;
}




void Unwind_140e60470(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_140e60490(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x28));
  return;
}




void Unwind_140e604b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e604d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e604f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140e60510(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e60530(undefined8 param_1,longlong param_2)

{
  FUN_140e41f10((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0xd0) + 0x18));
  return;
}




void Unwind_140e60550(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0xd0));
  return;
}




void Unwind_140e60570(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0xd0) + 0x28));
  return;
}




void Unwind_140e60590(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e605b0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e605d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e605f0(undefined8 param_1,longlong param_2)

{
  FUN_140e484a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60610(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e60630(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60650(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60670(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60690(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e606b0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e606d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e606f0(undefined8 param_1,longlong param_2)

{
  FUN_140e484e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60710(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e60730(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60750(undefined8 param_1,longlong param_2)

{
  FUN_140e46c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60770(undefined8 param_1,longlong param_2)

{
  FUN_140e48500(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60790(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e607b0(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e607d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e607f0(undefined8 param_1,longlong param_2)

{
  FUN_140e48520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60810(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e60830(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60850(undefined8 param_1,longlong param_2)

{
  FUN_140e46c40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60870(undefined8 param_1,longlong param_2)

{
  FUN_140e48540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140e60890(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e4b8b0(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x78),param_3,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e608c0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e608e0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60900(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60920(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60940(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e60960(undefined8 param_1,longlong param_2)

{
  FUN_140e4a4e0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e60980(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e609a0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e609c0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e609e0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60a00(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60a20(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60a40(undefined8 param_1,longlong param_2)

{
  FUN_140e484a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60a60(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60a80(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60aa0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60ac0(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60ae0(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60b00(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60b20(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60b40(undefined8 param_1,longlong param_2)

{
  FUN_140e484e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60b60(undefined8 param_1,longlong param_2)

{
  FUN_140e46be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60b80(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60ba0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60bc0(undefined8 param_1,longlong param_2)

{
  FUN_140e48500(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60be0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60c00(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60c20(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60c40(undefined8 param_1,longlong param_2)

{
  FUN_140e48520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60c60(undefined8 param_1,longlong param_2)

{
  FUN_140e46c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60c80(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60ca0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60cc0(undefined8 param_1,longlong param_2)

{
  FUN_140e48540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60ce0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60d00(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60d20(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60d40(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60d60(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60d80(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60da0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e60dd0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140e60df0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Catch_140e60e10(undefined8 param_1,longlong param_2)

{
  FUN_140e46db0(*(longlong *)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e60e40(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e60e70(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_140e60e90(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Catch_140e60eb0(undefined8 param_1,longlong param_2)

{
  FUN_140e4b730(*(longlong *)(param_2 + 0xb0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e60ee0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e60f00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e60f20(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e60f40(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60f60(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60f80(undefined8 param_1,longlong param_2)

{
  FUN_140e484a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60fa0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e60fc0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e60fe0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61000(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61020(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61040(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61060(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61080(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e610a0(undefined8 param_1,longlong param_2)

{
  FUN_140e46be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e610c0(undefined8 param_1,longlong param_2)

{
  FUN_140e484e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e610e0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61100(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61120(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61140(undefined8 param_1,longlong param_2)

{
  FUN_140e46c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61160(undefined8 param_1,longlong param_2)

{
  FUN_140e48500(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61180(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e611a0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e611c0(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e611e0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61200(undefined8 param_1,longlong param_2)

{
  FUN_140e48520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61220(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61240(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61260(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61280(undefined8 param_1,longlong param_2)

{
  FUN_140e46c40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e612a0(undefined8 param_1,longlong param_2)

{
  FUN_140e48540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e612c0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140e612e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140e61310(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e61330(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61350(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61370(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61390(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e613b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e613d0(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e613f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e61410(undefined8 param_1,longlong param_2)

{
  FUN_140e4a4e0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e61430(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e61450(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61470(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61490(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e614b0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e614d0(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e614f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x98));
  return;
}




void Unwind_140e61510(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x500));
  return;
}




void Unwind_140e61530(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_140e61550(undefined8 param_1,longlong param_2)

{
  FUN_140e4d310(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61570(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61590(undefined8 param_1,longlong param_2)

{
  FUN_140e484e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e615b0(undefined8 param_1,longlong param_2)

{
  FUN_140e46be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e615d0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e615f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61610(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61630(undefined8 param_1,longlong param_2)

{
  FUN_140e48500(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61650(undefined8 param_1,longlong param_2)

{
  FUN_140e46c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61670(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61690(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e616b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e616d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e616f0(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61710(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x70) + 8));
  return;
}




void Unwind_140e61730(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xa8));
  return;
}




void Unwind_140e61750(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x58));
  return;
}




void Unwind_140e61770(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x80));
  return;
}




void Unwind_140e61790(undefined8 param_1,longlong param_2)

{
  FUN_140e41f10((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x58));
  return;
}




void Unwind_140e617b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x58));
  return;
}




void Unwind_140e617d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x80));
  return;
}




void Unwind_140e617f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61810(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61830(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61850(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61870(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61890(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e618b0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e618d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e618f0(undefined8 param_1,longlong param_2)

{
  FUN_140e484a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61910(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61930(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61950(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61970(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61990(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e619b0(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e619d0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e619f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61a10(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61a30(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61a50(undefined8 param_1,longlong param_2)

{
  FUN_140e46be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61a70(undefined8 param_1,longlong param_2)

{
  FUN_140e484e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61a90(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61ab0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d310(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61ad0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61af0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61b10(undefined8 param_1,longlong param_2)

{
  FUN_140e46c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61b30(undefined8 param_1,longlong param_2)

{
  FUN_140e48500(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61b50(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61b70(undefined8 param_1,longlong param_2)

{
  FUN_140e4d330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61b90(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61bb0(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61bd0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61bf0(undefined8 param_1,longlong param_2)

{
  FUN_140e48520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61c10(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61c30(undefined8 param_1,longlong param_2)

{
  FUN_140e4d350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61c50(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61c70(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61c90(undefined8 param_1,longlong param_2)

{
  FUN_140e46c40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61cb0(undefined8 param_1,longlong param_2)

{
  FUN_140e48540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61cd0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61cf0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61d10(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61d40(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_140e61d60(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Catch_140e61d80(undefined8 param_1,longlong param_2)

{
  FUN_140e4d830(*(longlong *)(param_2 + 0xb0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e61db0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x70) + 8));
  return;
}




void Unwind_140e61dd0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61df0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61e10(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61e30(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61e50(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61e70(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61e90(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e61eb0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61ed0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61ef0(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61f10(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e61f30(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140e61f50(undefined8 param_1,longlong param_2)

{
  FUN_140e4de40(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140e61f80(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140e61fb0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e61fd0(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e61ff0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a4e0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e62010(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e62030(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e62050(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e62070(undefined8 param_1,longlong param_2)

{
  FUN_140e4a4e0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e62090(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e620b0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e620d0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e620f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e62110(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e62130(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62150(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62170(undefined8 param_1,longlong param_2)

{
  FUN_140e4ef30(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e62190(undefined8 param_1,longlong param_2)

{
  FUN_140e4d310(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e621b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e621d0(undefined8 param_1,longlong param_2)

{
  FUN_140e484e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e621f0(undefined8 param_1,longlong param_2)

{
  FUN_140e46be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62210(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62230(undefined8 param_1,longlong param_2)

{
  FUN_140e4ef60(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e62250(undefined8 param_1,longlong param_2)

{
  FUN_140e4d330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62270(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62290(undefined8 param_1,longlong param_2)

{
  FUN_140e48500(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e622b0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e622d0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140e622f0(void)

{
  log_InlineLogCATCH_ERROR("CLeaveWordMgr::OnUserLogout. @%s,%d");
  return 0x140e50536;
}




void Unwind_140e62330(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e62350(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62370(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62390(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e623b0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e623d0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e623f0(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e62410(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e62430(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62450(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62470(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62490(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e624b0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e624d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140e624f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x80));
  return;
}




void Unwind_140e62510(undefined8 param_1,longlong param_2)

{
  FUN_140e41a70(param_2 + 0x78);
  return;
}




void Unwind_140e62530(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_140e62550(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x80));
  return;
}




void Unwind_140e62570(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x80));
  return;
}




void Unwind_140e62590(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x30) + 8));
  return;
}




void Unwind_140e625b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x30) + 8));
  return;
}




void Unwind_140e625d0(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e625f0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62610(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62630(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e62650(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62670(undefined8 param_1,longlong param_2)

{
  FUN_140e46be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62690(undefined8 param_1,longlong param_2)

{
  FUN_140e484e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e626b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e626d0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d310(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e626f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4ef30(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e62710(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e62730(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62750(undefined8 param_1,longlong param_2)

{
  FUN_140e46c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62770(undefined8 param_1,longlong param_2)

{
  FUN_140e48500(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62790(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e627b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e627d0(undefined8 param_1,longlong param_2)

{
  FUN_140e4ef60(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e627f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e62810(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_140e62830(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e62850(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62870(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62890(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e628b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e628d0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e628f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e62910(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e62930(undefined8 param_1,longlong param_2)

{
  FUN_140e4a4e0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140e62950(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e62970(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e62990(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e629b0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e629d0(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_140e629f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a4e0(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_140e62a10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e62a40(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e62a60(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_140e62a80(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_140e62aa0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140e62ad0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 < 2) {
    pvVar4 = *(void **)(param_2 + 0x50);
    lVar2 = *(longlong *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    pvVar4 = *(void **)(param_2 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    FUN_140e4d7e0(uVar3,(longlong)pvVar4,(longlong)(lVar2 * 0x38 + (longlong)pvVar4));
  }
  if (0 < iVar1) {
    FUN_140e4d7e0(uVar3,(longlong)((longlong)pvVar4 + lVar2 * 0x38),(longlong)((*(longlong *)(param_2 + 0x48) + lVar2) * 0x38 + (longlong)pvVar4));
  }
  operator_delete(pvVar4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e62b60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x70));
  return;
}




void Unwind_140e62b80(undefined8 param_1,longlong param_2)

{
  FUN_140e41a70(param_2 + 0x68);
  return;
}




void Catch_140e62ba0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x48) * 0x38;
  FUN_140e4d7e0(*(longlong *)(param_2 + 0x40),*(longlong *)(*(longlong *)(param_2 + 0x38) + 8) + lVar1,
                lVar1 + *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e62bf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x70));
  return;
}




void Unwind_140e62c10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x70));
  return;
}




void Unwind_140e62c30(undefined8 param_1,longlong param_2)

{
  FUN_140e41a70(param_2 + 0x68);
  return;
}




void Unwind_140e62c50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x70));
  return;
}




void Unwind_140e62c70(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e62c90(undefined8 param_1,longlong param_2)

{
  FUN_140e50f20(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e62cb0(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140e62cd0(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e62cf0(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e62d10(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e62d30(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62d50(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62d70(undefined8 param_1,longlong param_2)

{
  FUN_140e50f20(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e62d90(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e62db0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62dd0(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62df0(undefined8 param_1,longlong param_2)

{
  FUN_140e50590(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e62e10(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e62e30(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e62e50(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62e70(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62e90(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62eb0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e62ed0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140e62ef0(void)

{
  log_InlineLogCATCH_ERROR("CLeaveWordMgr:ProcessUserLeaveWord() @%s,%d");
  return 0x140e51ded;
}




void Unwind_140e62f30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e62f50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e62f70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140e62f90(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e62fb0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a4e0(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_140e62fd0(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_140e62ff0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140e63010(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140e63030(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140e63050(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e63070(undefined8 param_1,longlong param_2)

{
  FUN_140e4a4e0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140e63090(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e630b0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e630d0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e630f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140e63110(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e63130(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e63150(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e63170(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140e63190(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e631b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e631d0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e631f0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e63210(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_140e63230(undefined8 param_1,longlong param_2)

{
  FUN_140e50f20(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_140e63250(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e63280(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_140e632a0(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e632c0(undefined8 param_1,longlong param_2)

{
  FUN_140e50590(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e632e0(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e63300(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e63320(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63340(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63360(undefined8 param_1,longlong param_2)

{
  FUN_140e50f20(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e63380(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e633a0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e633c0(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e633e0(undefined8 param_1,longlong param_2)

{
  FUN_140e50590(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e63400(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e63420(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e63440(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63460(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63480(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e634a0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e634c0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e634e0(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140e63500(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e63520(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e63540(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e63560(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140e63580(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e635a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e635c0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e635e0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e63600(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e63620(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_140e63640(undefined8 param_1,longlong param_2)

{
  FUN_140e50590(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_140e63660(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140e63690(undefined8 param_1,longlong param_2)

{
  FUN_140e50f20(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e636b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e636d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e636f0(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63710(undefined8 param_1,longlong param_2)

{
  FUN_140e50590(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140e63730(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140e63750(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e63770(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63790(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e637b0(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e637d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e637f0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63810(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e63830(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140e63850(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140e63870(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140e63890(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_140e638b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a4e0(param_2 + 0xa0);
  return;
}




void Unwind_140e638d0(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_140e638f0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0x168));
  return;
}




void Unwind_140e63910(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x168));
  return;
}




void Unwind_140e63930(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140e63950(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_140e63970(void)

{
  log_InlineLogCATCH_ERROR("CLeaveWordMgr::LoadUserLeaveWords. @%s,%d");
  return 0x140e53e1d;
}




void Unwind_140e639b0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e639d0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140e639f0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140e63a10(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140e63a30(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_140e63a50(undefined8 param_1,longlong param_2)

{
  FUN_140e4a4e0(param_2 + 0xa0);
  return;
}




void Unwind_140e63a70(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_140e63a90(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40(*(undefined8 **)(param_2 + 0x168));
  return;
}




void Unwind_140e63ab0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50(*(undefined8 **)(param_2 + 0x168));
  return;
}




void Unwind_140e63ad0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140e63af0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_140e63b10(void)

{
  log_InlineLogCATCH_ERROR("CLeaveWordMgr::LoadGMLeaveWords. @%s,%d");
  return 0x140e54273;
}




void Unwind_140e63b50(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63b70(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63b90(undefined8 param_1,longlong param_2)

{
  FUN_140e484a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63bb0(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63bd0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e63bf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e63c10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e63c30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140e63c50(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e63c70(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_140e63c90(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_140e63cb0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140e63cd0(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140e63cf0(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140e63d10(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e63d30(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e63d50(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e63d70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140e63d90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e63db0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e63dd0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140e63df0(undefined8 param_1,longlong param_2)

{
  FUN_140e50f20(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140e63e10(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e63e30(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e63e50(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e63e70(undefined8 param_1,longlong param_2)

{
  FUN_140e50590(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140e63e90(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140e63eb0(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140e63ed0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e63ef0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e63f10(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e63f30(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e63f50(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e63f70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140e63f90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e63fb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140e63fd0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140e63ff0(undefined8 param_1,longlong param_2)

{
  FUN_140e50f20(*(longlong *)(param_2 + 0xe0) + 0x18);
  return;
}




void Unwind_140e64010(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(*(longlong *)(param_2 + 0xe0) + 8));
  return;
}




void Unwind_140e64030(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80(*(undefined8 **)(param_2 + 0xe8));
  return;
}




void Unwind_140e64050(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0xe0) + 8));
  return;
}




void Unwind_140e64070(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0xe8));
  return;
}




void Unwind_140e64090(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x98));
  return;
}




void Unwind_140e640b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x48));
  return;
}




void Unwind_140e640d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x60));
  return;
}




void Unwind_140e640f0(undefined8 param_1,longlong param_2)

{
  FUN_140e411c0((exception *)(param_2 + 0x48));
  return;
}




void Unwind_140e64110(undefined8 param_1,longlong param_2)

{
  FUN_140e50590(*(longlong *)(param_2 + 0xf0) + 0x18);
  return;
}




void Unwind_140e64130(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(*(longlong *)(param_2 + 0xf0) + 8));
  return;
}




void Unwind_140e64150(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0xf0));
  return;
}




void Unwind_140e64170(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0xf0));
  return;
}




void Unwind_140e64190(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0xf0));
  return;
}




void Unwind_140e641b0(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0xf0));
  return;
}




void Unwind_140e641d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0xf0));
  return;
}




void Unwind_140e641f0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0xf0));
  return;
}




void Unwind_140e64210(undefined8 param_1,longlong param_2)

{
  FUN_140e542a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e64230(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e64250(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e64270(undefined8 param_1,longlong param_2)

{
  FUN_140e484a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e64290(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e642b0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e642d0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e64300(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140e64320(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140e64340(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140e64360(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140e64380(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50((undefined8 *)(param_2 + 0x70));
  return;
}




undefined * Catch_140e643a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e5599c;
}




void Unwind_140e643e0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140e64400(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50((undefined8 *)(param_2 + 0x70));
  return;
}




undefined8 Catch_140e64420(void)

{
  log_InlineLogCATCH_ERROR("CLeaveWordMgr::LoadLeaveWords. @%s,%d");
  return 0x140e55a22;
}




void Unwind_140e64460(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0xb0));
  return;
}




undefined * Catch_140e64480(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e55dd1;
}




undefined * Catch_140e644c0(void)

{
  log_InlineLogCATCH_ERROR("CLeaveWordMgr::ShowUserLeaveWords. @%s,%d");
  return &DAT_140e55e3f;
}




undefined * Catch_140e64500(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e56132;
}




undefined * Catch_140e64540(void)

{
  log_InlineLogCATCH_ERROR("CLeaveWordMgr::ShowGMLeaveWords. @%s,%d");
  return &DAT_140e56199;
}




void Unwind_140e64580(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e645a0(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e645c0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e645e0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64600(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e64620(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(param_2 + 0x90);
  return;
}




void Unwind_140e64640(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e64660(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e64680(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e646a0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e646c0(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e646e0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e64700(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64720(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64740(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64760(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e64780(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(param_2 + 0x90);
  return;
}




void Unwind_140e647a0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e647c0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e647e0(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e64800(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64820(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64840(undefined8 param_1,longlong param_2)

{
  FUN_140e5d280((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_140e64860(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e64880(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e648a0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e648c0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e648e0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e64900(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(param_2 + 0x90);
  return;
}




void Unwind_140e64920(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e64940(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e64960(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e64980(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e649a0(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e649c0(undefined8 param_1,longlong param_2)

{
  FUN_140e5cd20((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140e649e0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e64a00(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64a20(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64a40(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64a60(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e64a80(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(param_2 + 0x90);
  return;
}




void Unwind_140e64aa0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e64ac0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e64ae0(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e64b00(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64b20(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64b40(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e64b60(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64b80(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64ba0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64bc0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e64be0(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(param_2 + 0x90);
  return;
}




void Unwind_140e64c00(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e64c20(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e64c40(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e64c60(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64c80(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64ca0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e64cc0(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64ce0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64d00(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64d20(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e64d40(undefined8 param_1,longlong param_2)

{
  FUN_140e4e5a0(param_2 + 0x90);
  return;
}




void Unwind_140e64d60(undefined8 param_1,longlong param_2)

{
  FUN_140e4d0d0((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140e64d80(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e64da0(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e64dc0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b60((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64de0(undefined8 param_1,longlong param_2)

{
  FUN_140e44dc0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140e64e00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x88));
  return;
}




void Unwind_140e64e20(undefined8 param_1,longlong param_2)

{
  FUN_140e41a70(param_2 + 0x80);
  return;
}




void Unwind_140e64e40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x88));
  return;
}




void Unwind_140e64e60(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e64e80(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_140e64ea0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_140e64ec0(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_140e64ee0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xc0));
  return;
}




void Unwind_140e64f00(undefined8 param_1,longlong param_2)

{
  FUN_140e41a70(param_2 + 0xb8);
  return;
}




void Unwind_140e64f20(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140e64f40(undefined8 param_1,longlong param_2)

{
  FUN_140e50f20(param_2 + 0x48);
  return;
}




void Unwind_140e64f60(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140e64f80(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_140e64fa0(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_140e64fc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xc0));
  return;
}




void Unwind_140e64fe0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_140e65000(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x20) + 8));
  return;
}




void Unwind_140e65020(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_140e65040(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e65060(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65080(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e650a0(undefined8 param_1,longlong param_2)

{
  FUN_140e484a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e650c0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e650e0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65100(undefined8 param_1,longlong param_2)

{
  FUN_140e542a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e65120(undefined8 param_1,longlong param_2)

{
  FUN_140e50f20(*(longlong *)(param_2 + 0x68) + 0x18);
  return;
}




void Unwind_140e65140(undefined8 param_1,longlong param_2)

{
  FUN_140e4f0a0((undefined8 *)(*(longlong *)(param_2 + 0x68) + 8));
  return;
}




void Unwind_140e65160(undefined8 param_1,longlong param_2)

{
  FUN_140e46b80(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_140e65180(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x68) + 8));
  return;
}




void Unwind_140e651a0(undefined8 param_1,longlong param_2)

{
  FUN_140e44e10(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_140e651c0(undefined8 param_1,longlong param_2)

{
  FUN_140e50590(*(longlong *)(param_2 + 0x98) + 0x18);
  return;
}




void Unwind_140e651e0(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(*(longlong *)(param_2 + 0x98) + 8));
  return;
}




void Unwind_140e65200(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_140e65220(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140e65240(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140e65260(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140e65280(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140e652a0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140e652c0(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e652f0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140e65310(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140e65330(undefined8 param_1,longlong param_2)

{
  FUN_140e48400((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140e65350(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140e65370(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50((undefined8 *)(param_2 + 0x70));
  return;
}




undefined * Catch_140e65390(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e59645;
}




void Unwind_140e653d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46b40((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140e653f0(undefined8 param_1,longlong param_2)

{
  FUN_140e44d50((undefined8 *)(param_2 + 0x70));
  return;
}




undefined8 Catch_140e65410(void)

{
  log_InlineLogCATCH_ERROR("CLeaveWordMgr::LoadUserSysLeaveWords. @%s,%d");
  return 0x140e596cc;
}




undefined8 Catch_140e65450(void)

{
  log_InlineLogCATCH_ERROR("CLeaveWordMgr::ShowUserSysLeaveWords. @%s,%d");
  return 0x140e59741;
}




void Unwind_140e65490(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x570));
  return;
}




void Unwind_140e654b0(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x570));
  return;
}




void Unwind_140e654d0(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x570));
  return;
}




void Unwind_140e654f0(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x570));
  return;
}




void Unwind_140e65510(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x570));
  return;
}




void Unwind_140e65530(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x140));
  return;
}




void Unwind_140e65550(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x570));
  return;
}




void Unwind_140e65570(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x140));
  return;
}




void Unwind_140e65590(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x140));
  return;
}




void Unwind_140e655b0(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x140));
  return;
}




void Unwind_140e655d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x9a0));
  return;
}




void Unwind_140e655f0(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(param_2 + 0xb0));
  return;
}




void Unwind_140e65610(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x9c8));
  return;
}




void Unwind_140e65630(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_140e65650(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(param_2 + 0x100));
  return;
}




void Unwind_140e65670(undefined8 param_1,longlong param_2)

{
  FUN_140e50590(param_2 + 0xf8);
  return;
}




void Unwind_140e65690(undefined8 param_1,longlong param_2)

{
  FUN_140e50560((longlong *)(param_2 + 0x100));
  return;
}




void Unwind_140e656b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_140e656d0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140e656f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140e65710(undefined8 param_1,longlong param_2)

{
  FUN_140e48560(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140e65730(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140e65750(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140e65770(undefined8 param_1,longlong param_2)

{
  FUN_140e4f330((longlong *)(param_2 + 0xb0));
  return;
}




void Unwind_140e65790(undefined8 param_1,longlong param_2)

{
  FUN_140e4d390((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140e657b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa70((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140e657d0(undefined8 param_1,longlong param_2)

{
  FUN_140e48560((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140e657f0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c60((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140e65810(undefined8 param_1,longlong param_2)

{
  FUN_140e44ea0((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140e65830(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x140));
  return;
}




undefined * Catch_140e65850(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e5a514;
}




undefined * Catch_140e65890(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e5a3fb;
}




void Unwind_140e658d0(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(param_2 + 0x140));
  return;
}




void Unwind_140e658f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0xd8) + 8));
  return;
}




void Unwind_140e65910(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65930(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65950(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65970(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65990(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e659b0(undefined8 param_1,longlong param_2)

{
  FUN_140e5ad70(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e659d0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e659f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65a10(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65a30(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65a50(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65a70(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e65a90(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65ab0(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65ad0(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65af0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65b10(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65b30(undefined8 param_1,longlong param_2)

{
  FUN_140e5ad70(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e65b50(undefined8 param_1,longlong param_2)

{
  FUN_140e4d350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65b70(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65b90(undefined8 param_1,longlong param_2)

{
  FUN_140e48520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65bb0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65bd0(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65bf0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65c10(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65c30(undefined8 param_1,longlong param_2)

{
  FUN_140e48540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65c50(undefined8 param_1,longlong param_2)

{
  FUN_140e46c40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65c70(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65c90(undefined8 param_1,longlong param_2)

{
  FUN_140e5af30(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e65cb0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65cd0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65cf0(undefined8 param_1,longlong param_2)

{
  FUN_140e48520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65d10(undefined8 param_1,longlong param_2)

{
  FUN_140e46c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65d30(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65d50(undefined8 param_1,longlong param_2)

{
  FUN_140e5af60(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e65d70(undefined8 param_1,longlong param_2)

{
  FUN_140e4d370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65d90(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65db0(undefined8 param_1,longlong param_2)

{
  FUN_140e48540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65dd0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65df0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e65e10(undefined8 param_1,longlong param_2)

{
  FUN_140e55690((longlong *)(*(longlong *)(param_2 + 0x80) + 8));
  return;
}




void Unwind_140e65e30(undefined8 param_1,longlong param_2)

{
  FUN_140e55690((longlong *)(*(longlong *)(param_2 + 0x80) + 0x48));
  return;
}




void Unwind_140e65e50(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x80) + 0x88));
  return;
}




void Unwind_140e65e80(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x80) + 200));
  return;
}




void Unwind_140e65eb0(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x80) + 0x108));
  return;
}




void Unwind_140e65ee0(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x80) + 0x148));
  return;
}




void Unwind_140e65f10(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x80) + 0x188));
  return;
}




void Unwind_140e65f40(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x80) + 0x1c8));
  return;
}




void Unwind_140e65f70(undefined8 param_1,longlong param_2)

{
  FUN_140e50200((longlong *)(*(longlong *)(param_2 + 0x80) + 0x208));
  return;
}




void Unwind_140e65fa0(undefined8 param_1,longlong param_2)

{
  FUN_140e50230((longlong *)(*(longlong *)(param_2 + 0x80) + 0x248));
  return;
}




void Unwind_140e65fd0(undefined8 param_1,longlong param_2)

{
  FUN_140e5af90((longlong *)(*(longlong *)(param_2 + 0x80) + 0x288));
  return;
}




void Unwind_140e66000(undefined8 param_1,longlong param_2)

{
  FUN_140e5afc0((longlong *)(*(longlong *)(param_2 + 0x80) + 0x2c8));
  return;
}




void Unwind_140e66030(undefined8 param_1,longlong param_2)

{
  FUN_140e41f10((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x88) + 0x18));
  return;
}




void Unwind_140e66050(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x88));
  return;
}




void Unwind_140e66070(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x88) + 0x28));
  return;
}




void Unwind_140e66090(undefined8 param_1,longlong param_2)

{
  FUN_140e5af60(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140e660b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d370(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e660d0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa50(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e660f0(undefined8 param_1,longlong param_2)

{
  FUN_140e48540(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66110(undefined8 param_1,longlong param_2)

{
  FUN_140e46c40(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66130(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66150(undefined8 param_1,longlong param_2)

{
  FUN_140e5af30(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140e66170(undefined8 param_1,longlong param_2)

{
  FUN_140e4d350(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66190(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa30(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e661b0(undefined8 param_1,longlong param_2)

{
  FUN_140e48520(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e661d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c20(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e661f0(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66210(undefined8 param_1,longlong param_2)

{
  FUN_140e4ef60(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140e66230(undefined8 param_1,longlong param_2)

{
  FUN_140e4d330(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66250(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa10(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66270(undefined8 param_1,longlong param_2)

{
  FUN_140e48500(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66290(undefined8 param_1,longlong param_2)

{
  FUN_140e46c00(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e662b0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c80(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e662d0(undefined8 param_1,longlong param_2)

{
  FUN_140e4ef30(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140e662f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d310(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66310(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9f0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66330(undefined8 param_1,longlong param_2)

{
  FUN_140e484e0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66350(undefined8 param_1,longlong param_2)

{
  FUN_140e46be0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66370(undefined8 param_1,longlong param_2)

{
  FUN_140e44c50(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66390(undefined8 param_1,longlong param_2)

{
  FUN_140e5ad70(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140e663b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2f0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e663d0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e663f0(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66410(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66430(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66450(undefined8 param_1,longlong param_2)

{
  FUN_140e5ad70(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140e66470(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2f0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66490(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e664b0(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e664d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e664f0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66510(undefined8 param_1,longlong param_2)

{
  FUN_140e5ad70(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140e66530(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2f0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66550(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66570(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66590(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e665b0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e665d0(undefined8 param_1,longlong param_2)

{
  FUN_140e5ad70(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140e665f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2f0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66610(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66630(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66650(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66670(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66690(undefined8 param_1,longlong param_2)

{
  FUN_140e5ad70(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140e666b0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2f0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e666d0(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e666f0(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66710(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66730(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66750(undefined8 param_1,longlong param_2)

{
  FUN_140e5ad70(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140e66770(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2f0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66790(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9d0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e667b0(undefined8 param_1,longlong param_2)

{
  FUN_140e484c0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e667d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46bc0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e667f0(undefined8 param_1,longlong param_2)

{
  FUN_140e44c20(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66810(undefined8 param_1,longlong param_2)

{
  FUN_140e542a0(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140e66830(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2d0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66850(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9b0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66870(undefined8 param_1,longlong param_2)

{
  FUN_140e484a0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e66890(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e668b0(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140e668d0(undefined8 param_1,longlong param_2)

{
  FUN_140e542a0(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_140e668f0(undefined8 param_1,longlong param_2)

{
  FUN_140e4d2d0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140e66910(undefined8 param_1,longlong param_2)

{
  FUN_140e4a9b0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140e66930(undefined8 param_1,longlong param_2)

{
  FUN_140e484a0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140e66950(undefined8 param_1,longlong param_2)

{
  FUN_140e46ba0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140e66970(undefined8 param_1,longlong param_2)

{
  FUN_140e44ba0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140e66990(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e669b0(undefined8 param_1,longlong param_2)

{
  FUN_140e44cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e669d0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e669f0(undefined8 param_1,longlong param_2)

{
  FUN_140e48520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66a10(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66a30(undefined8 param_1,longlong param_2)

{
  FUN_140e4d350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66a50(undefined8 param_1,longlong param_2)

{
  FUN_140e5af30(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e66a70(void)

{
  FUN_140e41160();
  return;
}




void Unwind_140e66a90(undefined8 param_1,longlong param_2)

{
  FUN_140e44ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66ab0(undefined8 param_1,longlong param_2)

{
  FUN_140e46c40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66ad0(undefined8 param_1,longlong param_2)

{
  FUN_140e48540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66af0(undefined8 param_1,longlong param_2)

{
  FUN_140e4aa50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66b10(undefined8 param_1,longlong param_2)

{
  FUN_140e4d370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66b30(undefined8 param_1,longlong param_2)

{
  FUN_140e5af60(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140e66b50(undefined8 param_1,longlong param_2)

{
  FUN_140e55690((longlong *)(*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_140e66b70(undefined8 param_1,longlong param_2)

{
  FUN_140e55690((longlong *)(*(longlong *)(param_2 + 0x60) + 0x48));
  return;
}




void Unwind_140e66b90(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x60) + 0x88));
  return;
}




void Unwind_140e66bb0(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x60) + 200));
  return;
}




void Unwind_140e66bd0(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x60) + 0x108));
  return;
}




void Unwind_140e66bf0(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x60) + 0x148));
  return;
}




void Unwind_140e66c10(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x60) + 0x188));
  return;
}




void Unwind_140e66c30(undefined8 param_1,longlong param_2)

{
  FUN_140e5ae80((longlong *)(*(longlong *)(param_2 + 0x60) + 0x1c8));
  return;
}




void Unwind_140e66c50(undefined8 param_1,longlong param_2)

{
  FUN_140e50200((longlong *)(*(longlong *)(param_2 + 0x60) + 0x208));
  return;
}




void Unwind_140e66c70(undefined8 param_1,longlong param_2)

{
  FUN_140e50230((longlong *)(*(longlong *)(param_2 + 0x60) + 0x248));
  return;
}




void Unwind_140e66c90(undefined8 param_1,longlong param_2)

{
  FUN_140e5af90((longlong *)(*(longlong *)(param_2 + 0x60) + 0x288));
  return;
}




void Unwind_140e66cb0(undefined8 param_1,longlong param_2)

{
  FUN_140e5afc0((longlong *)(*(longlong *)(param_2 + 0x60) + 0x2c8));
  return;
}




void Unwind_140e66cd0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140e66cf0(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140e66d10(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66d30(undefined8 param_1,longlong param_2)

{
  FUN_140e5c6a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66d50(undefined8 param_1,longlong param_2)

{
  FUN_140e5c720((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140e66d70(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x428));
  return;
}




void Unwind_140e66d90(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140e66db0(undefined8 param_1,longlong param_2)

{
  FUN_140e5c6a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66dd0(undefined8 param_1,longlong param_2)

{
  FUN_140e5c720((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140e66df0(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x428));
  return;
}




void Unwind_140e66e10(undefined8 param_1,longlong param_2)

{
  FUN_140e5c6a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66e30(undefined8 param_1,longlong param_2)

{
  FUN_140e5c720((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140e66e50(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x428));
  return;
}




void Unwind_140e66e70(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x50));
  return;
}




undefined * Catch_140e66e90(void)

{
  log_InlineLogCATCH_ERROR("family::pMsg->Process(idActor), idActor:%d, MsgType:%d, SubType:%d @%s,%d");
  return &DAT_140e5cba3;
}




void Unwind_140e66ee0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140e66f00(undefined8 param_1,longlong param_2)

{
  FUN_140e5c6a0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_140e66f20(undefined8 param_1,longlong param_2)

{
  FUN_140e5c720((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Unwind_140e66f40(undefined8 param_1,longlong param_2)

{
  FUN_140e5cf30((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x428));
  return;
}




undefined8 Catch_140e66f60(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x140e5cc4d;
}




void Unwind_140e66fa0(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e66fc0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140e66fe0(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e67000(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140e67020(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e67040(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140e67060(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e67080(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140e670a0(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e670c0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140e670e0(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e67100(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140e67120(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140e67140(void)

{
  log_InlineLogCATCH_ERROR("leavword::CMsgLog::Process(idActor), idActor:%d, Type:%d, MsgType:%d @%s,%d");
  return 0x140e5d1f4;
}




void Unwind_140e671a0(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e671c0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140e671e0(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e67200(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140e67220(undefined8 param_1,longlong param_2)

{
  FUN_140e5c610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140e67240(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void FUN_140e67260(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e67290(void)

{
  _DAT_140e79450 = 0xffffffff;
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




void FUN_140e67312(void)

{
  _unlock(8);
  return;
}




bool FUN_140e67330(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=1780 failed=0 total=1879 */
