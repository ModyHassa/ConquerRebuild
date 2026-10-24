/* Decompiled by Ghidra 12.1.4 | program: Team.dll
   image base: 1418e0000 | functions: 1051 */


void FUN_1418e1000(void)

{
  log_InlineLogERROR(&DAT_1418f9318);
  return;
}




void FUN_1418e1050(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_1418e1060(void)

{
  return 0;
}




undefined8 FUN_1418e1070(void)

{
  return 0;
}




undefined8 FUN_1418e1080(void)

{
  return 0;
}




undefined8 FUN_1418e1090(void)

{
  return 0;
}




undefined8 * FUN_1418e10a0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1418e10e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = team::CModule::vftable;
  if (param_1[0x107] != 0) {
    plVar1 = (longlong *)param_1[0x107];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x128))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
    }
    param_1[0x107] = 0;
    param_1[0x107] = 0;
  }
  FUN_1418f3490(param_1 + 0x108);
  FUN_1418f38d0(param_1 + 0x84);
  FUN_1418f3740(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  return;
}




undefined2 FUN_1418e1180(undefined8 *param_1)

{
  FUN_1418e9d10(param_1[0x107]);
  (**(code **)*param_1)(param_1,1);
  return 0;
}




ulonglong FUN_1418e11b0(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x30))(*(longlong **)(param_1 + 0x830),0x1e);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x838) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1418ed420(*(longlong *)(param_1 + 0x838),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}




longlong * FUN_1418e1290(longlong param_1,ushort *param_2,ushort param_3)

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
    else if (uVar1 == 0x3ff) {
      plVar3 = (longlong *)(param_1 + 0x420);
    }
    else {
      if (uVar1 != 0x7fd) {
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




bool FUN_1418e1320(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_1418f2340();
  *(undefined8 **)(param_1 + 0x838) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return false;
  }
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x3ea,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x3eb,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x3ff,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x7fd,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 0x10))(*(longlong **)(param_1 + 0x830),0x3ff,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 0x10))(*(longlong **)(param_1 + 0x830),0x7fd,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x18))(*(longlong **)(param_1 + 0x830),0x1e,*(undefined8 *)(param_1 + 0x838));
  return cVar1 != '\0';
}




void FUN_1418e1410(longlong param_1)

{
  FUN_1418f23b0(*(longlong *)(param_1 + 0x838));
  return;
}




undefined8 FUN_1418e1420(void)

{
  return 1;
}




undefined8 * FUN_1418e1430(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = team::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_1418f36f0((CMsg *)(param_1 + 2));
  FUN_1418f3880((CMsg *)(param_1 + 0x84));
  param_1[0x106] = param_2;
  FUN_1418f3440((CMsg *)(param_1 + 0x108));
  param_1[0x107] = 0;
  return param_1;
}




undefined8 * FUN_1418e14b0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1418e10e0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined2 FUN_1418e14e0(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_1418e1290(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x838));
    uVar1 = (undefined2)plVar2[1];
  }
  return uVar1;
}




longlong * ModuleCreate(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
                    /* 0x1550  1  ModuleCreate */
  puVar2 = operator_new(0xc50);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = FUN_1418e1430(puVar2,param_1,param_2);
  }
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1418f9318);
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_1418e1320((longlong)plVar3);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




exception * FUN_1418e1680(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1418e16c0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001418e16e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1418e16f0(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1418e1750(void)

{
  return;
}




exception * FUN_1418e1760(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1418e17b0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001418e17e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_1418e17f0(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_1418e1810(exception *param_1,uint param_2)

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




exception * FUN_1418e1870(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_1418e18d0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001418e190d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1418e1920(exception *param_1,uint param_2)

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




undefined8 FUN_1418e1990(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return 0;
}




undefined4 FUN_1418e19b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}




undefined4 FUN_1418e19c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}




undefined1 FUN_1418e19d0(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return 0;
  }
  *(int *)(param_1 + 0x40) = param_2;
  return 1;
}




void FUN_1418e1a20(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x47) = param_2;
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  return;
}




undefined1 FUN_1418e1a30(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x47);
}




void FUN_1418e1a40(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}




void FUN_1418e1a50(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined1 *)(param_1 + 0x47) = 0;
  return;
}




undefined1 FUN_1418e1a60(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x44);
}




void FUN_1418e1a70(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x45) = 0;
  return;
}




void FUN_1418e1a80(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x45) = 1;
  return;
}




undefined1 FUN_1418e1a90(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x45);
}




void FUN_1418e1aa0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x46) = 0;
  return;
}




void FUN_1418e1ab0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x46) = 1;
  return;
}




undefined1 FUN_1418e1ac0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x46);
}




void FUN_1418e1ad0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_1418e1ae0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}




undefined4 FUN_1418e1b00(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




longlong FUN_1418e1b20(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 2) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 4;
}




bool FUN_1418e1b90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1418e1bd0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141902570);
}




exception * FUN_1418e1c40(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




longlong FUN_1418e1cc0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




exception * FUN_1418e1d00(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong * FUN_1418e1d80(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1418e1db0;
  }
  else {
LAB_1418e1db0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1418e1dd8;
  }
  _invalid_parameter_noinfo();
LAB_1418e1dd8:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




void FUN_1418e1e00(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_1418e1e70(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_1418e1ee0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void * FUN_1418e1f50(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1418e2000(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1418e2090(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_1418e20d0(void)

{
  if ((DAT_141903328 & 1) == 0) {
    DAT_141903328 = DAT_141903328 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141903320,"CTeam");
    atexit((_func_5014 *)&LAB_1418f8f40);
  }
  return &DAT_141903320;
}




void FUN_1418e2130(__uint64 param_1)

{
  if ((DAT_141903328 & 1) == 0) {
    DAT_141903328 = DAT_141903328 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141903320,"CTeam");
    atexit((_func_5014 *)&LAB_1418f8f40);
  }
                    /* WARNING: Could not recover jumptable at 0x0001418e2185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_141903320,param_1);
  return;
}




void FUN_1418e2190(void *param_1)

{
  if ((DAT_141903328 & 1) == 0) {
    DAT_141903328 = DAT_141903328 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141903320,"CTeam");
    atexit((_func_5014 *)&LAB_1418f8f40);
  }
                    /* WARNING: Could not recover jumptable at 0x0001418e21e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_141903320,param_1);
  return;
}




void FUN_1418e21f0(void *param_1)

{
  if ((DAT_141903328 & 1) == 0) {
    DAT_141903328 = DAT_141903328 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141903320,"CTeam");
    atexit((_func_5014 *)&LAB_1418f8f40);
  }
                    /* WARNING: Could not recover jumptable at 0x0001418e2245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_141903320,param_1);
  return;
}




undefined4 FUN_1418e2250(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2) <= param_2) {
    return 0;
  }
  if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x20) + param_2 * 4);
}




longlong FUN_1418e22b0(longlong param_1)

{
  if (5 < (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2)) {
    return 5;
  }
  return *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2;
}




ulonglong FUN_1418e22e0(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  lVar1 = FUN_1418e22b0(param_1);
  uVar2 = 0;
  if (lVar1 != 0) {
    do {
      if (uVar3 < (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2)) {
        if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2) <= uVar3) {
          _invalid_parameter_noinfo();
        }
        uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + uVar3 * 4);
      }
      else {
        uVar2 = 0;
      }
      if ((int)uVar2 == param_2) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
      uVar3 = uVar3 + 1;
      uVar2 = FUN_1418e22b0(param_1);
    } while (uVar3 < uVar2);
  }
  return uVar2 & 0xffffffffffffff00;
}




void FUN_1418e2370(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = *(undefined4 *)(param_1 + 0x3c);
  param_2[1] = *(undefined4 *)(param_1 + 0x40);
  if (0 < (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2)) {
    puVar1 = param_2 + 2;
    uVar4 = uVar2;
    do {
      if (4 < (longlong)uVar2) break;
      if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2) <= uVar2) {
        _invalid_parameter_noinfo();
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar2 = uVar2 + 1;
      *puVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + -4 + uVar2 * 4);
      puVar1 = puVar1 + 1;
    } while ((int)uVar3 < (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2));
  }
  *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_1 + 0x45);
  *(undefined1 *)((longlong)param_2 + 0x1d) = *(undefined1 *)(param_1 + 0x46);
  *(undefined1 *)((longlong)param_2 + 0x1e) = *(undefined1 *)(param_1 + 0x47);
  return;
}




ulonglong FUN_1418e2450(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar2 = FUN_1418e22b0(param_1);
  if (lVar2 != 0) {
    do {
      if (4 < uVar4) {
        return uVar4;
      }
      if (uVar4 < (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2)) {
        if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2) <= uVar4) {
          _invalid_parameter_noinfo();
        }
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != param_3) {
        *(int *)(param_2 + uVar4 * 4) = iVar1;
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_1418e22b0(param_1);
    } while (uVar4 < uVar3);
  }
  return uVar4;
}




bool FUN_1418e24f0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1418e2530(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418e2550(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_1418e25d0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_1418e2640(longlong *param_1,longlong param_2)

{
  FUN_1418e1d80(param_1,param_2);
  return param_1;
}




void * FUN_1418e2690(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1418e2710(void *param_1,longlong param_2,void *param_3)

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




void FUN_1418e2750(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_1418e2770(longlong param_1,ulonglong param_2)

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
      FUN_1418e1bd0();
    }
    lVar1 = FUN_1418e2550(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_1418e27e0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_1418e2810(undefined8 *param_1)

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




longlong * FUN_1418e2850(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1418e28ba;
  }
  _invalid_parameter_noinfo();
LAB_1418e28ba:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1418e28f0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_1418e2950(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1418e29c0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1418e2a40(void *param_1,longlong param_2,void *param_3)

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




void FUN_1418e2a80(undefined8 *param_1)

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




undefined8 * FUN_1418e2ac0(undefined8 *param_1)

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




undefined8 * FUN_1418e2b10(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_1418e2be0(void *param_1,longlong param_2,void *param_3)

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




void FUN_1418e2c20(undefined8 *param_1)

{
  *param_1 = team::CTeam::vftable;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  operator_delete((void *)param_1[1]);
  return;
}




undefined8 * FUN_1418e2c70(undefined8 *param_1)

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




undefined8 * FUN_1418e2cd0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1418e2d20(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1418e2d70(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_1418e2dd0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




void * FUN_1418e2ef0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




undefined8 * FUN_1418e2f30(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = team::CTeam::vftable;
  plVar1 = operator_new(8);
  plVar2 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 1);
    plVar2 = plVar1;
  }
  param_1[1] = plVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x46) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47) = 0;
  return param_1;
}




undefined8 * FUN_1418e2fb0(undefined8 *param_1,uint param_2)

{
  *param_1 = team::CTeam::vftable;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  operator_delete((void *)param_1[1]);
  if ((param_2 & 1) != 0) {
    FUN_1418e2190(param_1);
  }
  return param_1;
}




undefined8 * FUN_1418e3030(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_1418e30c0(longlong *param_1)

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




void FUN_1418e31b0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_1418e1bd0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_1418e2550(param_1 + 0x10,uVar8);
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
      FUN_1418e2ef0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_1418e2ef0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1418e29c0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




ulonglong FUN_1418e3450(longlong param_1,int param_2)

{
  int *piVar1;
  errno_t eVar2;
  ulonglong extraout_RAX;
  undefined4 extraout_var;
  ulonglong extraout_RAX_00;
  ulonglong uVar3;
  longlong lVar4;
  rsize_t _DstSize;
  int *_Dst;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 < *(int **)(param_1 + 0x20)) {
    _invalid_parameter_noinfo();
  }
  _Dst = *(int **)(param_1 + 0x20);
  if (*(int **)(param_1 + 0x28) < _Dst) {
    _invalid_parameter_noinfo();
  }
  uVar3 = *(ulonglong *)(param_1 + 8);
  for (; (_Dst != piVar1 && (*_Dst != param_2)); _Dst = _Dst + 1) {
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 < *(int **)(param_1 + 0x20)) {
    _invalid_parameter_noinfo();
  }
  if ((uVar3 == 0) || (uVar3 != *(ulonglong *)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    uVar3 = extraout_RAX;
  }
  if (_Dst == piVar1) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x28) - (longlong)(_Dst + 1) >> 2;
    if (0 < lVar4) {
      _DstSize = lVar4 << 2;
      eVar2 = memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
      uVar3 = CONCAT44(extraout_var,eVar2);
    }
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -4;
    if ((_Dst < *(int **)(param_1 + 0x20)) || (*(int **)(param_1 + 0x28) < _Dst)) {
      _invalid_parameter_noinfo();
      uVar3 = extraout_RAX_00;
    }
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}




void FUN_1418e3540(longlong param_1)

{
  FUN_1418e30c0((longlong *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}




longlong * FUN_1418e3570(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_1418e31b0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1418e3664;
  }
  _invalid_parameter_noinfo();
LAB_1418e3664:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1418e36a0(longlong *param_1,undefined4 *param_2)

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
  FUN_1418e3570(param_1,local_18,&local_28,param_2);
  return;
}




undefined1 FUN_1418e3750(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_1418e36a0((longlong *)(param_1 + 8),local_res10);
  return 1;
}




ulonglong FUN_1418e3770(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int local_res20 [2];
  longlong local_38;
  int *piStack_30;
  
  FUN_1418e30c0(param_2);
  uVar6 = 0;
  lVar4 = FUN_1418e22b0(param_1);
  if (lVar4 == 0) {
    return 0;
  }
  do {
    if (4 < uVar6) {
      return uVar6;
    }
    if (uVar6 < (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2)) {
      if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2) <= uVar6) {
        _invalid_parameter_noinfo();
      }
      local_res20[0] = *(int *)(*(longlong *)(param_1 + 0x20) + uVar6 * 4);
    }
    else {
      local_res20[0] = 0;
    }
    if (local_res20[0] != param_3) {
      piVar1 = (int *)param_2[3];
      if (piVar1 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = param_2[5] - (longlong)piVar1 >> 2;
      }
      piVar2 = (int *)param_2[4];
      if ((ulonglong)((longlong)piVar2 - (longlong)piVar1 >> 2) < uVar5) {
        *piVar2 = local_res20[0];
        param_2[4] = (longlong)(piVar2 + 1);
      }
      else {
        if (piVar2 < piVar1) {
          _invalid_parameter_noinfo();
        }
        uVar5 = param_2[3];
        lVar4 = *param_2;
        if ((param_2[4] - uVar5 & 0xfffffffffffffffc) == 0) {
          lVar7 = 0;
        }
        else {
          if ((ulonglong)param_2[4] < uVar5) {
            _invalid_parameter_noinfo();
          }
          if ((lVar4 == 0) || (lVar4 != *param_2)) {
            _invalid_parameter_noinfo();
          }
          lVar7 = (longlong)((longlong)piVar2 - uVar5) >> 2;
        }
        local_38 = lVar4;
        piStack_30 = piVar2;
        FUN_1418e31b0((longlong)param_2,(longlong)&local_38,1,local_res20);
        uVar5 = param_2[3];
        if ((ulonglong)param_2[4] < uVar5) {
          _invalid_parameter_noinfo();
        }
        plVar3 = (longlong *)*param_2;
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar4 = 0;
        }
        else {
          lVar4 = *plVar3;
        }
        uVar5 = uVar5 + lVar7 * 4;
        if (uVar5 <= *(ulonglong *)(lVar4 + 0x20)) {
          if (plVar3 == (longlong *)0x0) {
            lVar4 = 0;
          }
          else {
            lVar4 = *plVar3;
          }
          if (*(ulonglong *)(lVar4 + 0x18) <= uVar5) goto LAB_1418e38fc;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_1418e38fc:
    uVar6 = uVar6 + 1;
    uVar5 = FUN_1418e22b0(param_1);
    if (uVar5 <= uVar6) {
      return uVar6;
    }
  } while( true );
}




undefined1 FUN_1418e3940(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [2];
  
  FUN_1418e30c0((longlong *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  local_res10[0] = param_2;
  FUN_1418e36a0((longlong *)(param_1 + 8),local_res10);
  return 1;
}




undefined8 * FUN_1418e3990(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_res18;
  
  if ((DAT_141903328 & 1) == 0) {
    DAT_141903328 = DAT_141903328 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141903320,"CTeam");
    atexit((_func_5014 *)&LAB_1418f8f40);
  }
  local_res18 = CMyHeap::Alloc((CMyHeap *)&DAT_141903320,0x48);
  if (local_res18 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_1418e2f30(local_res18);
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1418f9318,"IF_NOT","pTeam","f:\\version\\cqserver-78.0.11-1204\\modules\\team\\src\\team.cpp",0x23);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1418e30c0(puVar1 + 1);
    *(undefined1 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x45) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x46) = 1;
    *(undefined4 *)(puVar1 + 8) = param_2;
    local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,param_2);
    FUN_1418e36a0(puVar1 + 1,(undefined4 *)&local_res18);
    *(undefined4 *)((longlong)puVar1 + 0x3c) = param_1;
  }
  return puVar1;
}




undefined8 * FUN_1418e3a90(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *local_res8;
  
  if (param_1 == (undefined4 *)0x0) {
    log_InlineLogERROR(&DAT_1418f9318,"IF_NOT","pInfo","f:\\version\\cqserver-78.0.11-1204\\modules\\team\\src\\team.cpp",0x35);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if ((DAT_141903328 & 1) == 0) {
      DAT_141903328 = DAT_141903328 | 1;
      CMyHeap::CMyHeap((CMyHeap *)&DAT_141903320,"CTeam");
      atexit((_func_5014 *)&LAB_1418f8f40);
    }
    local_res8 = CMyHeap::Alloc((CMyHeap *)&DAT_141903320,0x48);
    if (local_res8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = FUN_1418e2f30(local_res8);
    }
    if (puVar3 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_1418f9318,"IF_NOT","pTeam","f:\\version\\cqserver-78.0.11-1204\\modules\\team\\src\\team.cpp",0x3a);
      puVar3 = (undefined8 *)0x0;
    }
    else {
      uVar1 = param_1[1];
      FUN_1418e30c0(puVar3 + 1);
      *(undefined1 *)((longlong)puVar3 + 0x44) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x45) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x46) = 1;
      *(undefined4 *)(puVar3 + 8) = uVar1;
      local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,uVar1);
      FUN_1418e36a0(puVar3 + 1,(undefined4 *)&local_res8);
      piVar4 = param_1 + 2;
      lVar5 = 5;
      do {
        iVar2 = *piVar4;
        if ((iVar2 != 0) && (iVar2 != param_1[1])) {
          local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,iVar2);
          FUN_1418e36a0(puVar3 + 1,(undefined4 *)&local_res8);
        }
        piVar4 = piVar4 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *(undefined1 *)((longlong)puVar3 + 0x45) = *(undefined1 *)(param_1 + 7);
      *(undefined1 *)((longlong)puVar3 + 0x46) = *(undefined1 *)((longlong)param_1 + 0x1d);
      *(undefined1 *)((longlong)puVar3 + 0x47) = *(undefined1 *)((longlong)param_1 + 0x1e);
      *(undefined4 *)((longlong)puVar3 + 0x3c) = *param_1;
    }
  }
  return puVar3;
}




exception * FUN_1418e3c10(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_1418e3c70(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001418e3cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1418e3cc0(exception *param_1,uint param_2)

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




undefined1 FUN_1418e3d30(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return 0;
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  return 1;
}




ulonglong FUN_1418e3d80(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  ulonglong extraout_RAX_00;
  undefined8 uVar5;
  longlong lVar6;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar4 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    iVar3 = FUN_1418e19c0(param_2);
    if (param_3 != iVar3) {
      FUN_1418f3440(local_828);
      uVar1 = FUN_1418e1a30(param_2);
      uVar5 = FUN_1418f34f0((longlong)local_828,2,uVar1);
      if ((char)uVar5 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))(*(longlong **)(param_1 + 0x10),param_3,local_828);
      }
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),param_3);
      if (cVar2 == '\0') {
        FUN_1418f3440(local_418);
        lVar6 = FUN_1418e22b0(param_2);
        uVar5 = FUN_1418f3530((longlong)local_418,param_3,iVar3,(int)lVar6);
        if ((char)uVar5 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))(*(longlong **)(param_1 + 0x10),param_3,local_418,1);
        }
        FUN_1418f3490((undefined8 *)local_418);
      }
      FUN_1418f3490((undefined8 *)local_828);
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),iVar3);
    if ((char)uVar5 == '\0') {
      FUN_1418f3440(local_828);
      lVar6 = FUN_1418e22b0(param_2);
      uVar5 = FUN_1418f3530((longlong)local_828,iVar3,iVar3,(int)lVar6);
      if ((char)uVar5 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))(*(longlong **)(param_1 + 0x10),iVar3,local_828,1);
      }
      uVar5 = FUN_1418f3490((undefined8 *)local_828);
    }
    uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  return uVar4;
}




ulonglong FUN_1418e3f50(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  ulonglong extraout_RAX_00;
  undefined8 uVar4;
  longlong lVar5;
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    FUN_1418f3440(local_418);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),param_3);
    if (cVar1 == '\0') {
      uVar4 = FUN_1418f3530((longlong)local_418,param_3,0,0);
      if ((char)uVar4 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))(*(longlong **)(param_1 + 0x10),param_3,local_418,1);
      }
    }
    uVar2 = FUN_1418e19c0(param_2);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),uVar2);
    if (cVar1 == '\0') {
      lVar5 = FUN_1418e22b0(param_2);
      uVar4 = FUN_1418f3530((longlong)local_418,uVar2,uVar2,(int)lVar5);
      if ((char)uVar4 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))(*(longlong **)(param_1 + 0x10),uVar2,local_418,1);
      }
    }
    uVar4 = FUN_1418f3490((undefined8 *)local_418);
    uVar3 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  return uVar3;
}




ulonglong FUN_1418e40a0(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar1 = FUN_1418e2450(param_2,(longlong)local_28,0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x118))(*(longlong **)(param_1 + 0x10),local_28,uVar1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ulonglong FUN_1418e4150(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar4 = 0;
  lVar2 = FUN_1418e22b0(param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    do {
      uVar1 = FUN_1418e2250(param_2,uVar4);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x128))(*(longlong **)(param_1 + 0x10),uVar1,0);
      uVar4 = uVar4 + 1;
      uVar3 = FUN_1418e22b0(param_2);
    } while (uVar4 < uVar3);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}




ulonglong FUN_1418e4230(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  CMsg local_428 [1040];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar7 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar7 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    FUN_1418e19d0(param_2,param_4);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10),param_3,3);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe8))(*(longlong **)(param_1 + 0x10),param_4,3);
    FUN_1418f3880(local_428);
    FUN_1418f3900(local_428,param_4,0xf);
    uVar7 = 0;
    lVar4 = FUN_1418e22b0(param_2);
    if (lVar4 != 0) {
      do {
        iVar1 = FUN_1418e2250(param_2,uVar7);
        if (iVar1 != param_3) {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))(*(longlong **)(param_1 + 0x10),iVar1,local_428);
        }
        uVar7 = uVar7 + 1;
        uVar5 = FUN_1418e22b0(param_2);
      } while (uVar7 < uVar5);
    }
    lVar4 = **(longlong **)(param_1 + 0x10);
    uVar2 = FUN_1418e1b00(param_2);
    uVar3 = FUN_1418e19b0(param_2);
    (**(code **)(lVar4 + 0x140))(*(undefined8 *)(param_1 + 0x10),uVar3,param_3,param_4,uVar2);
    uVar6 = FUN_1418f38d0((undefined8 *)local_428);
    uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  return uVar7;
}




int FUN_1418e43c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return 0;
  }
  lVar5 = **(longlong **)(param_1 + 0x10);
  uVar1 = FUN_1418e19c0(param_2);
  iVar2 = (**(code **)(lVar5 + 0x168))(*(undefined8 *)(param_1 + 0x10),uVar1);
  if (iVar2 != 0) {
    iVar3 = FUN_1418e19c0(param_2);
    if (iVar2 != iVar3) {
      uVar4 = FUN_1418e22e0(param_2,iVar2);
      if ((char)uVar4 != '\0') {
        return iVar2;
      }
    }
  }
  uVar4 = 0;
  lVar5 = FUN_1418e22b0(param_2);
  if (lVar5 != 0) {
    do {
      iVar2 = FUN_1418e2250(param_2,uVar4);
      iVar3 = FUN_1418e19c0(param_2);
      if (iVar2 != iVar3) {
        return iVar2;
      }
      uVar4 = uVar4 + 1;
      uVar6 = FUN_1418e22b0(param_2);
    } while (uVar4 < uVar6);
  }
  return 0;
}




void FUN_1418e44c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar2 = FUN_1418e22b0(param_2);
    if (0 < (int)uVar2) {
      uVar4 = 0;
      uVar3 = uVar2 & 0xffffffff;
      do {
        uVar1 = FUN_1418e2250(param_2,uVar4);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1d8))(*(longlong **)(param_1 + 0x10),uVar1,0xc,0,(int)uVar2);
        uVar4 = uVar4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  log_InlineLogERROR(&DAT_1418f9318);
  return;
}




bool FUN_1418e45a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1418e4670(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_1418e46c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418e46e2;
  }
  lVar2 = *plVar1;
LAB_1418e46e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1418e4700(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418e4722;
  }
  lVar2 = *plVar1;
LAB_1418e4722:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




longlong FUN_1418e47d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418e47f2;
  }
  lVar2 = *plVar1;
LAB_1418e47f2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1418e48e0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418e4912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1418e4b00(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_1 << 5);
  return;
}




void FUN_1418e4b80(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_1 * 0x30);
  return;
}




bool FUN_1418e4c50(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_1418e4c90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_1418e4cd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418e4cf2;
  }
  lVar2 = *plVar1;
LAB_1418e4cf2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1418e4d10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418e4d32;
  }
  lVar2 = *plVar1;
LAB_1418e4d32:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




void FUN_1418e4d90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1418e4da0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418e4dc2;
  }
  lVar2 = *plVar1;
LAB_1418e4dc2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1418e4e00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418e4e22;
  }
  lVar2 = *plVar1;
LAB_1418e4e22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1418e4e90(longlong *param_1)

{
  FUN_1418e48e0(param_1);
  return param_1;
}




void FUN_1418e4eb0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418e4ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1418e4f50(longlong param_1,longlong param_2)

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




void FUN_1418e4fb0(longlong param_1,longlong *param_2)

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




void FUN_1418e5020(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418e5044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1418e50e0(longlong param_1,longlong param_2)

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




void FUN_1418e5140(longlong param_1,longlong *param_2)

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




longlong * FUN_1418e51a0(longlong *param_1)

{
  FUN_1418e48e0(param_1);
  return param_1;
}




void FUN_1418e51c0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_2 << 5);
  return;
}




void FUN_1418e5230(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418e5262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1418e52d0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 * FUN_1418e5370(undefined8 *param_1)

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




longlong FUN_1418e53b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418e53d2;
  }
  lVar2 = *plVar1;
LAB_1418e53d2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1418e53f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418e5412;
  }
  lVar2 = *plVar1;
LAB_1418e5412:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1418e5430(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418e5450(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418e5470(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1418e5470(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong * FUN_1418e54c0(longlong *param_1)

{
  FUN_1418e4eb0(param_1);
  return param_1;
}




longlong * FUN_1418e54e0(longlong *param_1)

{
  FUN_1418e5020(param_1);
  return param_1;
}




undefined8 * FUN_1418e5510(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1418e5550(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1418e4eb0(param_1);
  return param_2;
}




undefined8 * FUN_1418e5580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

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




undefined8 * FUN_1418e5600(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1418e5640(longlong *param_1)

{
  FUN_1418e5230(param_1);
  return param_1;
}




void FUN_1418e5660(void)

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




undefined8 * FUN_1418e56c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




void FUN_1418e5740(void)

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




longlong * FUN_1418e57a0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1418e5020(param_1);
  return param_2;
}




void FUN_1418e57d0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_1418e57d0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  }
  return;
}




undefined8 * FUN_1418e5820(undefined8 *param_1)

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




undefined8 * FUN_1418e5870(undefined8 *param_1)

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




void FUN_1418e58c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1418e5470(param_1,(longlong *)plVar2[2]);
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




longlong * FUN_1418e5940(longlong *param_1)

{
  FUN_1418e4eb0(param_1);
  return param_1;
}




longlong * FUN_1418e5960(longlong *param_1)

{
  FUN_1418e5020(param_1);
  return param_1;
}




void FUN_1418e5980(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418e59a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418e59c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1418e5a00(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1418e5a40(longlong *param_1)

{
  FUN_1418e5230(param_1);
  return param_1;
}




undefined8 * FUN_1418e5a60(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1418e5ab0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141902688);
  }
  FUN_1418e4eb0(param_3);
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
        goto LAB_1418e5c9c;
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
LAB_1418e5c9c:
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
            FUN_1418e50e0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1418e5140((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1418e50e0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1418e5140((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1418e50e0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1418e5140((longlong)param_1,plVar7);
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




exception * FUN_1418e5e70(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_1418e5ed0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




void FUN_1418e5fb0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1418e5660();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1418e5ff0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141902570);
  }
  plVar5 = FUN_1418e56c0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_1418e6330(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1418e5740();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x1d) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1418e6370(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1418e63c0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141902688);
  }
  FUN_1418e5020(param_3);
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
        goto LAB_1418e65ac;
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
LAB_1418e65ac:
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
            FUN_1418e4f50((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(*plVar11 + 0x1c) != '\x01') || (*(char *)(plVar11[2] + 0x1c) != '\x01')) {
              if (*(char *)(plVar11[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_1418e4fb0((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(plVar11[2] + 0x1c) = 1;
              FUN_1418e4f50((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x1c) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x1c) = 0;
            FUN_1418e4fb0((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(plVar11[2] + 0x1c) != '\x01') || (*(char *)(*plVar11 + 0x1c) != '\x01')) {
              if (*(char *)(*plVar11 + 0x1c) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_1418e4f50((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(*plVar11 + 0x1c) = 1;
              FUN_1418e4fb0((longlong)param_1,plVar10);
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




void FUN_1418e6780(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_1418e57d0(param_1,(longlong *)plVar2[2]);
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




undefined8 * FUN_1418e6800(undefined8 *param_1)

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




undefined8 * FUN_1418e6850(undefined8 *param_1)

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




void FUN_1418e68a0(longlong *param_1,longlong *param_2,longlong *param_3)

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




void FUN_1418e69f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418e6a10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1418e6a30(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1418e58c0((longlong)param_1);
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
    FUN_1418e5ab0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1418e6c20(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_1418e5ed0(param_1,param_2,param_3);
  return param_2;
}




void FUN_1418e6c40(longlong *param_1)

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
  FUN_1418e6a30(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1418e6cb0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141902570);
  }
  plVar5 = FUN_1418e5580(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_1418e6ff0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1418e714d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1418e717c;
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
      goto LAB_1418e714d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1418e5ff0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1418e717c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_1418e71a0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1418e6780((longlong)param_1);
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
    FUN_1418e63c0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1418e7350(undefined8 *param_1)

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




undefined8 * FUN_1418e73a0(undefined8 *param_1)

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




void FUN_1418e73f0(longlong *param_1,longlong *param_2,longlong *param_3)

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




void FUN_1418e74e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x48);
  do {
    do {
      while( true ) {
        while( true ) {
          plVar5 = plVar3;
          plVar3 = *(longlong **)(param_1 + 0x48);
          if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x18))) {
            _invalid_parameter_noinfo();
          }
          if (plVar5 == plVar3) {
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 8);
            cVar1 = *(char *)((longlong)plVar2 + 0x29);
            while (cVar1 == '\0') {
              FUN_1418e5470(param_1 + 0x18,(longlong *)plVar2[2]);
              plVar3 = (longlong *)*plVar2;
              operator_delete(plVar2);
              plVar2 = plVar3;
              cVar1 = *(char *)((longlong)plVar3 + 0x29);
            }
            *(longlong *)(*(longlong *)(param_1 + 0x48) + 8) = *(longlong *)(param_1 + 0x48);
            *(undefined8 *)(param_1 + 0x50) = 0;
            *(undefined8 *)*(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
            *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 8);
            cVar1 = *(char *)((longlong)plVar2 + 0x29);
            while (cVar1 == '\0') {
              FUN_1418e5470(param_1 + 0x58,(longlong *)plVar2[2]);
              plVar3 = (longlong *)*plVar2;
              operator_delete(plVar2);
              plVar2 = plVar3;
              cVar1 = *(char *)((longlong)plVar3 + 0x29);
            }
            *(longlong *)(*(longlong *)(param_1 + 0x88) + 8) = *(longlong *)(param_1 + 0x88);
            *(undefined8 *)(param_1 + 0x90) = 0;
            *(undefined8 *)*(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
            *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) = *(longlong *)(param_1 + 0x88);
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
          if ((undefined8 *)plVar5[4] != (undefined8 *)0x0) {
            FUN_1418e1990((undefined8 *)plVar5[4]);
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




void FUN_1418e76b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_60 [3];
  void *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
  }
  else {
    plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x48);
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    while( true ) {
      plVar8 = *(longlong **)(param_1 + 0x48);
      if ((puVar1 == (undefined8 *)0x0) || (puVar1 != *(undefined8 **)(param_1 + 0x18))) {
        _invalid_parameter_noinfo();
      }
      if (plVar9 == plVar8) break;
      if (puVar1 == (undefined8 *)0x0) {
        _invalid_parameter_noinfo();
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)*puVar1;
      }
      if (plVar9 == (longlong *)plVar8[6]) {
        _invalid_parameter_noinfo();
      }
      lVar2 = plVar9[4];
      if (lVar2 != 0) {
        lVar3 = **(longlong **)(param_1 + 0x10);
        uVar6 = FUN_1418e19c0(lVar2);
        cVar5 = (**(code **)(lVar3 + 0xe0))(*(undefined8 *)(param_1 + 0x10),uVar6);
        if (cVar5 == '\0') {
          plVar8 = operator_new(8);
          local_60[0] = (longlong *)0x0;
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = (longlong)local_60;
            local_60[0] = plVar8;
          }
          local_48 = (void *)0x0;
          local_40 = 0;
          local_38 = 0;
          iVar7 = FUN_1418e19c0(lVar2);
          FUN_1418e3770(lVar2,(longlong *)local_60,iVar7);
          lVar3 = **(longlong **)(param_1 + 0x10);
          uVar6 = FUN_1418e19c0(lVar2);
          (**(code **)(lVar3 + 0x80))(*(undefined8 *)(param_1 + 0x10),uVar6,local_60);
          if (local_48 != (void *)0x0) {
            operator_delete(local_48);
          }
          local_48 = (void *)0x0;
          local_40 = 0;
          local_38 = 0;
          operator_delete(local_60[0]);
        }
      }
      if (puVar1 == (undefined8 *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
        plVar8 = (longlong *)plVar9[2];
        if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
          cVar5 = *(char *)(*plVar8 + 0x29);
          plVar9 = plVar8;
          plVar8 = (longlong *)*plVar8;
          while (cVar5 == '\0') {
            cVar5 = *(char *)(*plVar8 + 0x29);
            plVar9 = plVar8;
            plVar8 = (longlong *)*plVar8;
          }
        }
        else {
          cVar5 = *(char *)(plVar9[1] + 0x29);
          plVar4 = (longlong *)plVar9[1];
          plVar8 = plVar9;
          while ((plVar9 = plVar4, cVar5 == '\0' && (plVar8 == (longlong *)plVar9[2]))) {
            cVar5 = *(char *)(plVar9[1] + 0x29);
            plVar4 = (longlong *)plVar9[1];
            plVar8 = plVar9;
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




ulonglong FUN_1418e78b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  ulonglong extraout_RAX_00;
  longlong *plVar2;
  undefined8 extraout_RAX_01;
  longlong *local_50 [3];
  void *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar1 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    plVar2 = operator_new(8);
    local_50[0] = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)local_50;
      local_50[0] = plVar2;
    }
    local_38 = (void *)0x0;
    local_30 = 0;
    local_28 = 0;
    FUN_1418e3770(param_2,(longlong *)local_50,0);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(*(longlong **)(param_1 + 0x10),local_50,param_3);
    if (local_38 != (void *)0x0) {
      operator_delete(local_38);
    }
    local_38 = (void *)0x0;
    local_30 = 0;
    local_28 = 0;
    operator_delete(local_50[0]);
    uVar1 = CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
  }
  return uVar1;
}




longlong FUN_1418e79e0(longlong *param_1,uint *param_2)

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
  
  FUN_1418e5ed0(param_1,&local_38,param_2);
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
  FUN_1418e6a30(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




longlong * FUN_1418e7b20(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_1418e7bf0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1418e7d4d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1418e7d7c;
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
      goto LAB_1418e7d4d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1418e6cb0(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1418e7d7c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_1418e7da0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418e7dc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1418e7de0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_1418e5ff0(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_1418e5ff0(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_1418e5ff0(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_1418e5ff0(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_1418e5ff0(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_1418e5ff0(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_1418e5ff0(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_1418e6ff0(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_1418e8100(longlong *param_1)

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
  FUN_1418e71a0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1418e8170(undefined8 *param_1)

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




undefined8 * FUN_1418e81c0(undefined8 *param_1)

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




undefined8 FUN_1418e8210(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x88))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x88);
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
  puVar8 = *(undefined8 **)(param_1 + 0x88);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x88);
    local_28 = *(longlong *)(param_1 + 0x58);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x88);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x58))) {
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




undefined8 FUN_1418e8320(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x48))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x48);
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
  puVar8 = *(undefined8 **)(param_1 + 0x48);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x48);
    local_28 = *(longlong *)(param_1 + 0x18);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x48);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x18))) {
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




undefined8 * FUN_1418e8420(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_1418e7de0(param_1,local_28,(longlong *)&local_38,local_48);
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




void FUN_1418e8520(longlong *param_1)

{
  FUN_1418e6c40(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418e8550(longlong *param_1)

{
  FUN_1418e8100(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418e8580(undefined8 *param_1)

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
  lVar2 = FUN_1418e5660();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1418e8600(undefined8 *param_1)

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
  lVar2 = FUN_1418e5740();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1418e8680(longlong *param_1)

{
  FUN_1418e6c40(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418e86b0(undefined8 *param_1)

{
  *param_1 = team::CTeamMgr::vftable;
  FUN_1418e6c40(param_1 + 0xb);
  operator_delete((void *)param_1[0xb]);
  FUN_1418e6c40(param_1 + 3);
  operator_delete((void *)param_1[3]);
  return;
}




undefined4 FUN_1418e8720(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1418e8210(param_1,param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_1418e19b0(lVar2);
    return uVar1;
  }
  return 0;
}




void FUN_1418e8750(longlong *param_1)

{
  FUN_1418e8100(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418e8780(undefined8 *param_1)

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
  lVar2 = FUN_1418e5660();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1418e8800(undefined8 *param_1)

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
  lVar2 = FUN_1418e5740();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1418e8880(undefined8 *param_1)

{
  *param_1 = team::CTeamMgr::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  FUN_1418e8780(param_1 + 3);
  FUN_1418e8780(param_1 + 0xb);
  return param_1;
}




undefined8 * FUN_1418e88d0(undefined8 *param_1,uint param_2)

{
  *param_1 = team::CTeamMgr::vftable;
  FUN_1418e6c40(param_1 + 0xb);
  operator_delete((void *)param_1[0xb]);
  FUN_1418e6c40(param_1 + 3);
  operator_delete((void *)param_1[3]);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_1418e8960(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x98);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = team::CTeamMgr::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    FUN_1418e8780(puVar1 + 3);
    FUN_1418e8780(puVar1 + 0xb);
  }
  return puVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1418e89c0(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 extraout_RAX_01;
  ulonglong uVar10;
  undefined1 auStack_518 [32];
  undefined4 local_4f8;
  longlong *local_4e8 [3];
  int *local_4d0;
  int *local_4c8;
  longlong local_4c0;
  longlong *local_4b8 [2];
  longlong *local_4a8;
  int *piStack_4a0;
  longlong *local_498;
  int *piStack_490;
  undefined8 local_488;
  CMsg local_478 [1040];
  undefined4 local_68 [8];
  ulonglong local_48;
  
  local_488 = 0xfffffffffffffffe;
  local_48 = DAT_141903300 ^ (ulonglong)auStack_518;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_4f8 = 0x1a0;
    log_InlineLogERROR(&DAT_1418f9318);
    uVar10 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_2 == 0) {
    local_4f8 = 0x1a1;
    log_InlineLogERROR(&DAT_1418f9318);
    uVar10 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    local_4b8[0] = operator_new(8);
    if (local_4b8[0] == (longlong *)0x0) {
      local_4e8[0] = (longlong *)0x0;
    }
    else {
      *local_4b8[0] = (longlong)local_4e8;
      local_4e8[0] = local_4b8[0];
    }
    local_4d0 = (int *)0x0;
    local_4c8 = (int *)0x0;
    local_4c0 = 0;
    uVar10 = 0;
    local_4a8 = local_4b8[0];
    lVar6 = FUN_1418e22b0(param_2);
    if (lVar6 != 0) {
      do {
        iVar5 = FUN_1418e2250(param_2,uVar10);
        piVar3 = local_4c8;
        local_4b8[0] = (longlong *)CONCAT44(local_4b8[0]._4_4_,iVar5);
        if (local_4d0 == (int *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = local_4c0 - (longlong)local_4d0 >> 2;
        }
        if ((ulonglong)((longlong)local_4c8 - (longlong)local_4d0 >> 2) < uVar9) {
          *local_4c8 = iVar5;
          local_4c8 = local_4c8 + 1;
        }
        else {
          if (local_4c8 < local_4d0) {
            _invalid_parameter_noinfo();
          }
          piVar2 = local_4d0;
          plVar1 = local_4e8[0];
          local_4a8 = local_4e8[0];
          piStack_4a0 = piVar3;
          if (((longlong)local_4c8 - (longlong)local_4d0 & 0xfffffffffffffffcU) == 0) {
            lVar6 = 0;
          }
          else {
            if (local_4c8 < local_4d0) {
              _invalid_parameter_noinfo();
            }
            if ((plVar1 == (longlong *)0x0) || (plVar1 != local_4e8[0])) {
              _invalid_parameter_noinfo();
            }
            lVar6 = (longlong)piVar3 - (longlong)piVar2 >> 2;
          }
          local_498 = local_4a8;
          piStack_490 = piStack_4a0;
          FUN_1418e31b0((longlong)local_4e8,(longlong)&local_498,1,(undefined4 *)local_4b8);
          piVar3 = local_4d0;
          if (local_4c8 < local_4d0) {
            _invalid_parameter_noinfo();
          }
          plVar1 = local_4e8[0];
          if (local_4e8[0] == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = 0;
          }
          else {
            lVar7 = *local_4e8[0];
          }
          if (piVar3 + lVar6 <= *(int **)(lVar7 + 0x20)) {
            if (plVar1 == (longlong *)0x0) {
              lVar7 = 0;
            }
            else {
              lVar7 = *plVar1;
            }
            if (*(int **)(lVar7 + 0x18) <= piVar3 + lVar6) goto LAB_1418e8bf9;
          }
          _invalid_parameter_noinfo();
        }
LAB_1418e8bf9:
        if (iVar5 != param_3) {
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd0))(*(longlong **)(param_1 + 0x10),iVar5,local_68);
          if (cVar4 != '\0') {
            FUN_1418f3a60(local_478);
            uVar8 = FUN_1418f3ae0(local_478,0,local_68);
            if ((char)uVar8 == '\0') {
              local_4f8 = 0x1b2;
              log_InlineLogERROR(&DAT_1418f9318);
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))(*(longlong **)(param_1 + 0x10),param_3,local_478);
            }
            FUN_1418f3ab0((undefined8 *)local_478);
          }
        }
        uVar10 = uVar10 + 1;
        uVar9 = FUN_1418e22b0(param_2);
      } while (uVar10 < uVar9);
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd0))(*(longlong **)(param_1 + 0x10),param_3,local_68);
    if (cVar4 != '\0') {
      FUN_1418f3a60(local_478);
      uVar8 = FUN_1418f3ae0(local_478,0,local_68);
      if ((char)uVar8 == '\0') {
        local_4f8 = 0x1bc;
        log_InlineLogERROR(&DAT_1418f9318);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(*(longlong **)(param_1 + 0x10),local_4e8,local_478);
      }
      FUN_1418f3ab0((undefined8 *)local_478);
    }
    if (local_4d0 != (int *)0x0) {
      operator_delete(local_4d0);
    }
    local_4d0 = (int *)0x0;
    local_4c8 = (int *)0x0;
    local_4c0 = 0;
    operator_delete(local_4e8[0]);
    uVar10 = CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
  }
  return uVar10;
}




void FUN_1418e8db0(longlong param_1,ushort param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 uVar14;
  bool bVar15;
  longlong *local_1b0;
  longlong *local_1a8 [3];
  undefined4 *local_190;
  undefined4 *local_188;
  undefined8 local_180;
  longlong *local_178 [2];
  longlong *local_168 [6];
  undefined8 *local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  longlong *local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 *puStack_f0;
  longlong *local_e8;
  undefined8 *puStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong *local_b8 [2];
  longlong *local_a8;
  longlong *local_98;
  undefined8 *puStack_90;
  longlong *local_88;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_48;
  undefined8 *puStack_40;
  
  local_68 = 0xfffffffffffffffe;
  lVar7 = FUN_1418e8320(param_1,param_4);
  FUN_1418e8800(local_168);
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd8))(*(longlong **)(param_1 + 0x10),param_3);
  local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,iVar4);
  if (iVar4 != 0) {
    FUN_1418e7bf0((longlong *)local_168,(longlong *)&local_d8,(uint *)&local_1b0);
  }
  plVar13 = (longlong *)0x0;
  uVar5 = 0;
  uVar14 = 0;
  if (param_2 == 1) {
    uVar14 = 1;
    uVar5 = param_3;
    goto LAB_1418e9116;
  }
  if (1 < param_2) {
    if (param_2 < 4) {
      if (lVar7 == 0) {
        puStack_e0 = local_138;
        local_e8 = local_168[0];
        uStack_100 = *local_138;
        local_108 = local_168[0];
        local_48 = local_168[0];
        puStack_40 = local_138;
        local_78 = local_168[0];
        uStack_70 = uStack_100;
        FUN_1418e71a0((longlong *)local_168,(longlong *)&local_d8,(longlong *)&local_78,(longlong *)&local_48);
        operator_delete(local_138);
        local_138 = (undefined8 *)0x0;
        local_130 = 0;
        operator_delete(local_168[0]);
        return;
      }
      uVar5 = FUN_1418e19c0(lVar7);
      lVar8 = FUN_1418e22b0(lVar7);
      uVar14 = (undefined4)lVar8;
      local_1b0 = operator_new(8);
      local_1a8[0] = plVar13;
      if (local_1b0 != (longlong *)0x0) {
        *local_1b0 = (longlong)local_1a8;
        local_1a8[0] = local_1b0;
      }
      local_190 = (undefined4 *)0x0;
      local_188 = (undefined4 *)0x0;
      local_180 = 0;
      local_178[0] = local_1b0;
      FUN_1418e3770(lVar7,(longlong *)local_1a8,0);
      puVar11 = local_190;
      local_88 = (longlong *)0x0;
      if (local_188 < local_190) {
        _invalid_parameter_noinfo();
      }
      plVar1 = local_1a8[0];
      local_88 = local_1a8[0];
      while( true ) {
        puVar2 = local_188;
        local_a8 = (longlong *)0x0;
        if (local_188 < local_190) {
          _invalid_parameter_noinfo();
        }
        local_a8 = local_1a8[0];
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_1a8[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar11 == puVar2) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar12 = plVar13;
        }
        else {
          plVar12 = (longlong *)*plVar1;
        }
        if ((undefined4 *)plVar12[4] <= puVar11) {
          _invalid_parameter_noinfo();
        }
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd8))(*(longlong **)(param_1 + 0x10),*puVar11);
        local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,iVar4);
        if (iVar4 != 0) {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar12 = plVar13;
          }
          else {
            plVar12 = (longlong *)*plVar1;
          }
          if ((undefined4 *)plVar12[4] <= puVar11) {
            _invalid_parameter_noinfo();
          }
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd8))(*(longlong **)(param_1 + 0x10),*puVar11);
          local_178[0] = (longlong *)CONCAT44(local_178[0]._4_4_,uVar6);
          FUN_1418e7bf0((longlong *)local_168,(longlong *)&local_d8,(uint *)local_178);
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar12 = plVar13;
        }
        else {
          plVar12 = (longlong *)*plVar1;
        }
        if ((undefined4 *)plVar12[4] <= puVar11) {
          _invalid_parameter_noinfo();
        }
        puVar11 = puVar11 + 1;
      }
      if (local_190 != (undefined4 *)0x0) {
        operator_delete(local_190);
      }
      local_190 = (undefined4 *)0x0;
      local_188 = (undefined4 *)0x0;
      local_180 = 0;
      operator_delete(local_1a8[0]);
      goto LAB_1418e9116;
    }
    if (param_2 == 4) goto LAB_1418e9116;
  }
  log_InlineLogERROR("CTeamMgr::SendOtherServer. SubAction[%u] not found");
  uVar5 = uVar14;
LAB_1418e9116:
  plVar13 = local_168[0];
  puVar9 = (undefined8 *)*local_138;
  local_60 = local_168[0];
  do {
    while( true ) {
      while( true ) {
        puVar10 = local_138;
        local_b8[0] = local_168[0];
        if ((plVar13 == (longlong *)0x0) || (plVar13 != local_168[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar9 == puVar10) {
          puStack_f0 = local_138;
          local_f8 = local_168[0];
          uStack_120 = *local_138;
          local_128 = local_168[0];
          local_98 = local_168[0];
          puStack_90 = local_138;
          local_d8 = local_168[0];
          uStack_d0 = uStack_120;
          FUN_1418e71a0((longlong *)local_168,(longlong *)local_b8,(longlong *)&local_d8,(longlong *)&local_98);
          operator_delete(local_138);
          local_138 = (undefined8 *)0x0;
          local_130 = 0;
          operator_delete(local_168[0]);
          return;
        }
        if (plVar13 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar13;
        }
        if (puVar9 == *(undefined8 **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (*(int *)(puVar9 + 3) != 0) {
          if (plVar13 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = 0;
          }
          else {
            lVar7 = *plVar13;
          }
          if (puVar9 == *(undefined8 **)(lVar7 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1e0))
                    (*(longlong **)(param_1 + 0x10),*(undefined4 *)(puVar9 + 3),param_2,param_3,param_4,uVar14,uVar5,param_5);
        }
        if (plVar13 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)puVar9 + 0x1d) == '\0') break;
        _invalid_parameter_noinfo();
      }
      puVar10 = puVar9;
      puVar3 = (undefined8 *)puVar9[2];
      if (*(char *)((longlong)puVar9[2] + 0x1d) != '\0') break;
      do {
        puVar9 = puVar3;
        puVar3 = (undefined8 *)*puVar9;
        local_118 = puVar9;
      } while (*(char *)((longlong)*puVar9 + 0x1d) == '\0');
    }
    do {
      puVar9 = (undefined8 *)puVar10[1];
      if (*(char *)((longlong)puVar9 + 0x1d) != '\0') break;
      bVar15 = puVar10 == (undefined8 *)puVar9[2];
      puVar10 = puVar9;
    } while (bVar15);
  } while( true );
}




ulonglong FUN_1418e9340(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong extraout_RAX_00;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint local_res10 [2];
  CMsg local_838 [1040];
  CMsg local_428 [1040];
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    if (*(int *)(param_1 + 8) == -1) {
      log_InlineLogERROR(&DAT_1418f9318);
    }
    puVar5 = FUN_1418e3990(*(undefined4 *)(param_1 + 8),param_2);
    if (puVar5 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_1418f9318);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      uVar4 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      puVar6 = FUN_1418e8420((longlong *)(param_1 + 0x18),(uint *)(param_1 + 8));
      *puVar6 = puVar5;
      puVar6 = FUN_1418e8420((longlong *)(param_1 + 0x58),local_res10);
      *puVar6 = puVar5;
      FUN_1418e3d80(param_1,(longlong)puVar5,param_2);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe8))(*(longlong **)(param_1 + 0x10),param_2,3);
      FUN_1418f3880(local_838);
      uVar7 = FUN_1418f3900(local_838,param_2,0xf);
      if ((char)uVar7 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))(*(longlong **)(param_1 + 0x10),param_2,local_838);
      }
      lVar1 = **(longlong **)(param_1 + 0x10);
      uVar2 = FUN_1418e19b0((longlong)puVar5);
      (**(code **)(lVar1 + 0x70))(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))(*(longlong **)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 8),6);
      FUN_1418f3880(local_428);
      uVar7 = FUN_1418f3900(local_838,param_2,0);
      if ((char)uVar7 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))(*(longlong **)(param_1 + 0x10),param_2,local_838);
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))(*(longlong **)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),param_2);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1d8))(*(longlong **)(param_1 + 0x10),param_2,0xc,0,1);
      uVar3 = FUN_1418e19b0((longlong)puVar5);
      FUN_1418e8db0(param_1,1,param_2,uVar3,0);
      FUN_1418f38d0((undefined8 *)local_428);
      uVar7 = FUN_1418f38d0((undefined8 *)local_838);
      uVar4 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
  }
  return uVar4;
}




ulonglong FUN_1418e9580(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar7;
  undefined8 uVar8;
  uint local_res8 [2];
  CMsg local_838 [1040];
  CMsg local_428 [1040];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar7 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar7 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    uVar3 = FUN_1418e19c0((longlong)param_2);
    local_res8[0] = uVar3;
    uVar7 = FUN_1418e22b0((longlong)param_2);
    if (uVar7 < 2) {
      FUN_1418f3880(local_428);
      uVar8 = FUN_1418f3900(local_428,uVar3,6);
      if ((char)uVar8 != '\0') {
        FUN_1418e78b0(param_1,(longlong)param_2,local_428);
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1d0))(*(longlong **)(param_1 + 0x10),uVar3);
      FUN_1418e3450((longlong)param_2,uVar3);
      lVar1 = **(longlong **)(param_1 + 0x10);
      uVar4 = FUN_1418e1b00((longlong)param_2);
      uVar5 = FUN_1418e19b0((longlong)param_2);
      (**(code **)(lVar1 + 0x150))(*(undefined8 *)(param_1 + 0x10),uVar5,uVar3,uVar4);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10),uVar3,3);
      FUN_1418e79e0((longlong *)(param_1 + 0x58),local_res8);
      lVar1 = **(longlong **)(param_1 + 0x10);
      FUN_1418e19b0((longlong)param_2);
      (**(code **)(lVar1 + 0x90))(*(undefined8 *)(param_1 + 0x10),uVar3);
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),uVar3);
      if (cVar2 == '\0') {
        FUN_1418f3440(local_838);
        uVar8 = FUN_1418f3530((longlong)local_838,uVar3,0,0);
        if ((char)uVar8 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))(*(longlong **)(param_1 + 0x10),uVar3,local_838,1);
        }
        FUN_1418f3490((undefined8 *)local_838);
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x120))(*(longlong **)(param_1 + 0x10),uVar3,0,0);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))(*(longlong **)(param_1 + 0x10),uVar3,0);
      uVar6 = FUN_1418e19b0((longlong)param_2);
      FUN_1418e8db0(param_1,4,uVar3,uVar6,0);
      FUN_1418e4150(param_1,(longlong)param_2);
      local_res8[0] = FUN_1418e19b0((longlong)param_2);
      FUN_1418e79e0((longlong *)(param_1 + 0x18),local_res8);
      FUN_1418e1990(param_2);
      uVar8 = FUN_1418f38d0((undefined8 *)local_428);
      uVar7 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    }
    else {
      uVar7 = FUN_1418e9a90(param_1,param_2,uVar3,2);
    }
  }
  return uVar7;
}




longlong FUN_1418e9820(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint7 extraout_var;
  uint7 uVar9;
  ulonglong extraout_RAX;
  uint7 extraout_var_00;
  longlong *plVar5;
  IStringManager *pIVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint local_res18 [4];
  
  local_res18[0] = param_3;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar9 = extraout_var;
  }
  else {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_1418f9318);
      return extraout_RAX & 0xffffffffffffff00;
    }
    cVar2 = FUN_1418e3750(param_2,param_3);
    uVar9 = extraout_var_00;
    if (cVar2 != '\0') {
      plVar5 = FUN_1418e8420((longlong *)(param_1 + 0x58),local_res18);
      *plVar5 = param_2;
      lVar1 = **(longlong **)(param_1 + 0x10);
      uVar3 = FUN_1418e19b0(param_2);
      (**(code **)(lVar1 + 0x90))(*(undefined8 *)(param_1 + 0x10),param_3,uVar3,6);
      FUN_1418e3d80(param_1,param_2,param_3);
      FUN_1418e89c0(param_1,param_2,param_3);
      FUN_1418e40a0(param_1,param_2);
      FUN_1418e44c0(param_1,param_2);
      cVar2 = FUN_1418e1a90(param_2);
      if (cVar2 == '\0') {
        pIVar6 = theInstance();
        uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_OPEN");
      }
      else {
        pIVar6 = theInstance();
        uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_CLOSE");
      }
      pIVar6 = theInstance();
      lVar1 = **(longlong **)(param_1 + 0x10);
      uVar8 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_TEAM_MONEY_s");
      (**(code **)(lVar1 + 0x48))(*(undefined8 *)(param_1 + 0x10),param_3,0x7d3,uVar8,uVar7);
      cVar2 = FUN_1418e1ac0(param_2);
      if (cVar2 == '\0') {
        pIVar6 = theInstance();
        uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_OPEN");
      }
      else {
        pIVar6 = theInstance();
        uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_CLOSE");
      }
      pIVar6 = theInstance();
      lVar1 = **(longlong **)(param_1 + 0x10);
      uVar8 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_TEAM_ITEM_s");
      (**(code **)(lVar1 + 0x48))(*(undefined8 *)(param_1 + 0x10),param_3,0x7d3,uVar8,uVar7);
      lVar1 = **(longlong **)(param_1 + 0x10);
      uVar3 = FUN_1418e19b0(param_2);
      (**(code **)(lVar1 + 0x70))(*(undefined8 *)(param_1 + 0x10),param_3,uVar3);
      lVar1 = **(longlong **)(param_1 + 0x10);
      uVar3 = FUN_1418e19b0(param_2);
      (**(code **)(lVar1 + 0x1c8))(*(undefined8 *)(param_1 + 0x10),uVar3,param_3);
      uVar4 = FUN_1418e19b0(param_2);
      uVar7 = FUN_1418e8db0(param_1,2,param_3,uVar4,0);
      return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
  }
  return (ulonglong)uVar9 << 8;
}




ulonglong FUN_1418e9a90(longlong param_1,undefined8 *param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint local_res18 [4];
  CMsg local_438 [1040];
  
  local_res18[0] = param_3;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar6 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar6 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    uVar6 = FUN_1418e22e0((longlong)param_2,param_3);
    if ((char)uVar6 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1d0))(*(longlong **)(param_1 + 0x10),param_3);
      uVar6 = FUN_1418e22b0((longlong)param_2);
      if (uVar6 < 2) {
        uVar6 = FUN_1418e9580(param_1,param_2);
      }
      else {
        FUN_1418f3880(local_438);
        uVar7 = FUN_1418f3900(local_438,param_3,(short)param_4);
        if ((char)uVar7 != '\0') {
          FUN_1418e78b0(param_1,(longlong)param_2,local_438);
        }
        uVar2 = FUN_1418e19c0((longlong)param_2);
        bVar8 = param_3 == uVar2;
        lVar1 = **(longlong **)(param_1 + 0x10);
        uVar3 = FUN_1418e19b0((longlong)param_2);
        (**(code **)(lVar1 + 0x160))(*(undefined8 *)(param_1 + 0x10),uVar3,param_3,bVar8);
        FUN_1418e4150(param_1,(longlong)param_2);
        FUN_1418e3450((longlong)param_2,param_3);
        if (bVar8) {
          iVar4 = FUN_1418e43c0(param_1,(longlong)param_2);
          FUN_1418e4230(param_1,(longlong)param_2,param_3,iVar4);
        }
        lVar1 = **(longlong **)(param_1 + 0x10);
        uVar3 = FUN_1418e19b0((longlong)param_2);
        (**(code **)(lVar1 + 0x90))(*(undefined8 *)(param_1 + 0x10),param_3,uVar3,7);
        FUN_1418e79e0((longlong *)(param_1 + 0x58),local_res18);
        FUN_1418e3f50(param_1,(longlong)param_2,param_3);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))(*(longlong **)(param_1 + 0x10),param_3,0);
        lVar1 = **(longlong **)(param_1 + 0x10);
        uVar3 = FUN_1418e1b00((longlong)param_2);
        uVar5 = FUN_1418e19b0((longlong)param_2);
        (**(code **)(lVar1 + 0x158))(*(undefined8 *)(param_1 + 0x10),uVar5,param_3,bVar8,uVar3);
        FUN_1418e40a0(param_1,(longlong)param_2);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x120))(*(longlong **)(param_1 + 0x10),param_3,0,0);
        uVar2 = FUN_1418e19b0((longlong)param_2);
        FUN_1418e8db0(param_1,3,param_3,uVar2,param_4);
        uVar7 = FUN_1418f38d0((undefined8 *)local_438);
        uVar6 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
    }
  }
  return uVar6;
}




void FUN_1418e9d10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return;
  }
  FUN_1418e74e0(*(longlong *)(param_1 + 0x10));
  return;
}




void FUN_1418e9d60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001418e9d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))();
  return;
}




void FUN_1418e9d70(longlong *param_1,uint param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_1[1] == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return;
  }
  if (param_1[2] != 0) {
    if (param_2 != 0) {
      cVar1 = (**(code **)(*(longlong *)param_1[1] + 8))();
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],param_2);
        if (cVar1 == '\0') {
          lVar6 = FUN_1418e8210(param_1[2],param_2);
          if (((lVar6 != 0) && (*(short *)(*(longlong *)(param_3 + 0x408) + 4) == 0)) && (uVar5 = FUN_1418e19c0(lVar6), param_2 == uVar5)) {
            FUN_1418e1a20(lVar6,*(char *)(*(longlong *)(param_3 + 0x408) + 8));
            FUN_1418e78b0(param_1[2],lVar6,param_3);
          }
        }
        else if (*(short *)(*(longlong *)(param_3 + 0x408) + 4) == 0) {
          iVar2 = (**(code **)(*(longlong *)param_1[1] + 0x100))((longlong *)param_1[1],param_2);
          lVar6 = *param_1;
          uVar3 = (**(code **)(*(longlong *)param_1[1] + 0xf8))((longlong *)param_1[1],param_2);
          iVar4 = (**(code **)(lVar6 + 0xf0))(param_1,uVar3,iVar2);
          if (iVar2 == iVar4) {
            (**(code **)(*(longlong *)param_1[1] + 0x1f0))
                      ((longlong *)param_1[1],param_2,*(undefined2 *)(*(longlong *)(param_3 + 0x408) + 4),*(undefined1 *)(*(longlong *)(param_3 + 0x408) + 8));
          }
        }
      }
      return;
    }
    log_InlineLogERROR(&DAT_1418f9318);
    return;
  }
  log_InlineLogERROR(&DAT_1418f9318);
  return;
}




void FUN_1418e9f60(longlong param_1,uint param_2,CMsg *param_3,char param_4,undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  IStringManager *pIVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 in_stack_fffffffffffffb88;
  undefined8 in_stack_fffffffffffffb90;
  CMsg local_448 [1040];
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffb88 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffb90 >> 0x20);
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
      if ((cVar4 == '\0') || (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2), cVar4 != '\0')) {
        if (param_4 == '\0') {
          iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),param_2);
          if (iVar5 == 0) {
            return;
          }
          cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),iVar5);
          if (cVar4 != '\0') {
            return;
          }
          cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),iVar5);
          if (cVar4 != '\0') {
            pIVar14 = theInstance();
            lVar18 = **(longlong **)(param_1 + 8);
            uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_TEAM_USER_IN_INSTANCE");
            (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
            return;
          }
        }
        cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
        if (cVar4 == '\0') {
          lVar18 = *(longlong *)(param_3 + 0x408);
          switch(*(undefined2 *)(lVar18 + 4)) {
          case 0:
            iVar5 = FUN_1418e8720(*(longlong *)(param_1 + 0x10),param_2);
            if (iVar5 == 0) {
              FUN_1418e9340(*(longlong *)(param_1 + 0x10),param_2);
            }
            break;
          case 1:
            uVar13 = *(uint *)(lVar18 + 8);
            if (uVar13 != 0) {
              iVar5 = FUN_1418e8720(*(longlong *)(param_1 + 0x10),param_2);
              if (iVar5 == 0) {
                if ((param_4 == '\0') && (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2,uVar13), cVar4 == '\0')
                   ) {
                  pIVar14 = theInstance();
                  lVar18 = **(longlong **)(param_1 + 8);
                  uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NO_APPLICANT");
                  (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                }
                else {
                  cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_2,uVar13);
                  if (cVar4 != '\0') {
                    lVar18 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),uVar13);
                    if (lVar18 == 0) {
                      pIVar14 = theInstance();
                      lVar18 = **(longlong **)(param_1 + 8);
                      uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NO_TEAM");
                      (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                    }
                    else {
                      cVar4 = FUN_1418e1a60(lVar18);
                      if (cVar4 == '\0') {
                        uVar16 = FUN_1418e22b0(lVar18);
                        if (uVar16 < 5) {
                          uVar10 = FUN_1418e19c0(lVar18);
                          if (uVar10 == uVar13) {
                            lVar3 = **(longlong **)(param_1 + 8);
                            uVar11 = FUN_1418e19b0(lVar18);
                            cVar4 = (**(code **)(lVar3 + 0x38))(*(undefined8 *)(param_1 + 8),uVar11);
                            if (cVar4 == '\0') {
                              pIVar14 = theInstance();
                              lVar18 = **(longlong **)(param_1 + 8);
                              uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_TEAM_IN_ARENIC");
                              (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                            }
                            else {
                              (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),uVar13,param_2,param_6,CONCAT44(uVar12,param_5));
                              (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                                        (*(longlong **)(param_1 + 8),param_2,uVar13,PTR_DAT_141903188,PTR_s_req_join_141903190,0);
                              if (param_4 == '\0') {
                                FUN_1418f3900(param_3,param_2,1);
                              }
                              else {
                                FUN_1418f3900(param_3,param_5,1);
                              }
                              (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),uVar13,param_3);
                              pIVar14 = theInstance();
                              lVar18 = **(longlong **)(param_1 + 8);
                              uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_JOIN_REQUEST_SENT");
                              (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                            }
                          }
                          else {
                            pIVar14 = theInstance();
                            lVar18 = **(longlong **)(param_1 + 8);
                            uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NO_CAPTAIN_CLOSE");
                            (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                          }
                        }
                        else {
                          pIVar14 = theInstance();
                          lVar18 = **(longlong **)(param_1 + 8);
                          uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_TEAM_FULL");
                          (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                        }
                      }
                      else {
                        pIVar14 = theInstance();
                        lVar18 = **(longlong **)(param_1 + 8);
                        uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_FORBIDDEN_JOIN");
                        (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                      }
                    }
                  }
                }
              }
              else {
                pIVar14 = theInstance();
                lVar18 = **(longlong **)(param_1 + 8);
                uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_INTEAM_NOJOIN");
                (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
              }
            }
            break;
          case 2:
            puVar17 = (undefined8 *)FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
            if (puVar17 != (undefined8 *)0x0) {
              FUN_1418e9a90(*(longlong *)(param_1 + 0x10),puVar17,param_2,2);
            }
            break;
          case 3:
            uVar13 = *(uint *)(lVar18 + 8);
            if (((uVar13 != 0) && (iVar5 = FUN_1418e8720(*(longlong *)(param_1 + 0x10),param_2), iVar5 == 0)) &&
               ((param_4 != '\0' || (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2,uVar13), cVar4 != '\0')))) {
              lVar18 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),uVar13);
              if (lVar18 == 0) {
                pIVar14 = theInstance();
                lVar18 = **(longlong **)(param_1 + 8);
                uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NOT_CREATE_TEAM");
                (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
              }
              else {
                cVar4 = FUN_1418e1a60(lVar18);
                if ((cVar4 == '\0') && (uVar16 = FUN_1418e22e0(lVar18,param_2), (char)uVar16 == '\0')) {
                  uVar16 = FUN_1418e22b0(lVar18);
                  if (uVar16 < 5) {
                    uVar10 = FUN_1418e19c0(lVar18);
                    if (uVar10 == uVar13) {
                      lVar3 = **(longlong **)(param_1 + 8);
                      uVar12 = FUN_1418e19b0(lVar18);
                      cVar4 = (**(code **)(lVar3 + 0x38))(*(undefined8 *)(param_1 + 8),uVar12);
                      if (cVar4 == '\0') {
                        pIVar14 = theInstance();
                        lVar18 = **(longlong **)(param_1 + 8);
                        uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_TEAM_IN_ARENIC");
                        (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                      }
                      else {
                        cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))
                                          (*(longlong **)(param_1 + 8),param_2,uVar13,PTR_DAT_141903188,PTR_s_req_invite_141903198,0);
                        if ((cVar4 == '\0') && (cVar4 = FUN_1418e1a30(lVar18), cVar4 == '\0')) {
                          pIVar14 = theInstance();
                          lVar18 = **(longlong **)(param_1 + 8);
                          uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NOT_BE_INVIITED");
                          (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                        }
                        else {
                          FUN_1418e9820(*(longlong *)(param_1 + 0x10),lVar18,param_2);
                        }
                      }
                    }
                    else {
                      pIVar14 = theInstance();
                      lVar18 = **(longlong **)(param_1 + 8);
                      uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NO_CAPTAIN_CLOSE");
                      (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                    }
                  }
                  else {
                    pIVar14 = theInstance();
                    lVar18 = **(longlong **)(param_1 + 8);
                    uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_HIS_TEAM_FULL");
                    (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                  }
                }
              }
            }
            break;
          case 4:
            uVar13 = *(uint *)(lVar18 + 8);
            if ((uVar13 != 0) && (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),uVar13), cVar4 == '\0')) {
              lVar18 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
              if (lVar18 == 0) {
                pIVar14 = theInstance();
                lVar18 = **(longlong **)(param_1 + 8);
                uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NOTEAM_TO_INVITE");
                (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
              }
              else {
                uVar10 = FUN_1418e19c0(lVar18);
                if (uVar10 == param_2) {
                  uVar16 = FUN_1418e22b0(lVar18);
                  if (uVar16 < 5) {
                    if ((param_4 == '\0') &&
                       (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2,uVar13), cVar4 == '\0')) {
                      pIVar14 = theInstance();
                      lVar18 = **(longlong **)(param_1 + 8);
                      uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_INVITED_NOT_FOUND");
                      (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                    }
                    else {
                      lVar3 = **(longlong **)(param_1 + 8);
                      uVar11 = FUN_1418e19b0(lVar18);
                      cVar4 = (**(code **)(lVar3 + 0x38))(*(undefined8 *)(param_1 + 8),uVar11);
                      if (cVar4 == '\0') {
                        pIVar14 = theInstance();
                        lVar18 = **(longlong **)(param_1 + 8);
                        uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_TEAM_IN_ARENIC");
                        (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                      }
                      else {
                        iVar5 = FUN_1418e8720(*(longlong *)(param_1 + 0x10),uVar13);
                        if (iVar5 == 0) {
                          cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_2,uVar13);
                          if (cVar4 != '\0') {
                            (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),uVar13,param_2,param_6,CONCAT44(uVar12,param_5));
                            (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                                      (*(longlong **)(param_1 + 8),param_2,uVar13,PTR_DAT_141903188,PTR_s_req_invite_141903198,0);
                            if (param_4 == '\0') {
                              FUN_1418f3900(param_3,param_2,4);
                            }
                            else {
                              FUN_1418f3900(param_3,param_5,4);
                            }
                            (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),uVar13,param_3);
                            pIVar14 = theInstance();
                            lVar18 = **(longlong **)(param_1 + 8);
                            uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_INVITE_SENT");
                            (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                          }
                        }
                        else {
                          pIVar14 = theInstance();
                          lVar18 = **(longlong **)(param_1 + 8);
                          uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_HAS_IN_TEAM");
                          (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                        }
                      }
                    }
                  }
                  else {
                    pIVar14 = theInstance();
                    lVar18 = **(longlong **)(param_1 + 8);
                    uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_YOUR_TEAM_FULL");
                    (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                  }
                }
                else {
                  pIVar14 = theInstance();
                  lVar18 = **(longlong **)(param_1 + 8);
                  uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NOT_CAPTAIN_ACCEPT");
                  (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                }
              }
            }
            break;
          case 5:
            uVar13 = *(uint *)(lVar18 + 8);
            if (uVar13 != 0) {
              lVar18 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
              if (lVar18 == 0) {
                pIVar14 = theInstance();
                lVar18 = **(longlong **)(param_1 + 8);
                uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NO_TEAM_TO_INVITE");
                (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
              }
              else {
                cVar4 = FUN_1418e1a60(lVar18);
                if (cVar4 == '\0') {
                  uVar10 = FUN_1418e19c0(lVar18);
                  if (uVar10 == param_2) {
                    uVar16 = FUN_1418e22e0(lVar18,uVar13);
                    if ((char)uVar16 == '\0') {
                      uVar16 = FUN_1418e22b0(lVar18);
                      if (uVar16 < 5) {
                        if ((param_4 == '\0') &&
                           (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2,uVar13), cVar4 == '\0')) {
                          pIVar14 = theInstance();
                          lVar18 = **(longlong **)(param_1 + 8);
                          uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_APPLICANT_NOT_FOUND");
                          (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                        }
                        else {
                          lVar3 = **(longlong **)(param_1 + 8);
                          uVar12 = FUN_1418e19b0(lVar18);
                          cVar4 = (**(code **)(lVar3 + 0x38))(*(undefined8 *)(param_1 + 8),uVar12);
                          if (cVar4 == '\0') {
                            pIVar14 = theInstance();
                            lVar18 = **(longlong **)(param_1 + 8);
                            uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_TEAM_IN_ARENIC");
                            (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                          }
                          else {
                            iVar5 = FUN_1418e8720(*(longlong *)(param_1 + 0x10),uVar13);
                            if (iVar5 == 0) {
                              cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))
                                                (*(longlong **)(param_1 + 8),param_2,uVar13,PTR_DAT_141903188,PTR_s_req_join_141903190,0);
                              if (cVar4 == '\0') {
                                pIVar14 = theInstance();
                                lVar18 = **(longlong **)(param_1 + 8);
                                uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NOT_TO_JOIN");
                                (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                              }
                              else {
                                FUN_1418e9820(*(longlong *)(param_1 + 0x10),lVar18,uVar13);
                              }
                            }
                            else {
                              pIVar14 = theInstance();
                              lVar18 = **(longlong **)(param_1 + 8);
                              uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_HAVE_JOIN_TEAM");
                              (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),uVar13,uVar15);
                            }
                          }
                        }
                      }
                      else {
                        pIVar14 = theInstance();
                        lVar18 = **(longlong **)(param_1 + 8);
                        uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_YOUR_TEAM_FULL");
                        (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                      }
                    }
                  }
                  else {
                    pIVar14 = theInstance();
                    lVar18 = **(longlong **)(param_1 + 8);
                    uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NOT_CAPTAIN_INVITE");
                    (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
                  }
                }
              }
            }
            break;
          case 6:
            puVar17 = (undefined8 *)FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
            if ((puVar17 != (undefined8 *)0x0) && (uVar13 = FUN_1418e19c0((longlong)puVar17), uVar13 == param_2)) {
              FUN_1418e9580(*(longlong *)(param_1 + 0x10),puVar17);
            }
            break;
          case 7:
            puVar17 = (undefined8 *)FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
            if ((puVar17 != (undefined8 *)0x0) &&
               (cVar4 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),*(undefined4 *)(*(longlong *)(param_3 + 0x408) + 8)),
               cVar4 != '\0')) {
              plVar2 = *(longlong **)(param_1 + 8);
              lVar18 = *plVar2;
              uVar12 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined4 *)(*(longlong *)(param_3 + 0x408) + 8));
              cVar4 = (**(code **)(lVar18 + 0xa0))(*(undefined8 *)(param_1 + 8),uVar12);
              if (cVar4 == '\0') {
                uVar13 = FUN_1418e19c0((longlong)puVar17);
                if ((uVar13 == param_2) && (param_2 != *(uint *)(*(longlong *)(param_3 + 0x408) + 8))) {
                  FUN_1418e9a90(*(longlong *)(param_1 + 0x10),puVar17,*(uint *)(*(longlong *)(param_3 + 0x408) + 8),7);
                }
              }
              else {
                pIVar14 = theInstance();
                lVar18 = **(longlong **)(param_1 + 8);
                uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_TEAM_TARGET_IN_INSTANCE");
                (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
              }
            }
            break;
          case 8:
            lVar18 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
            if ((lVar18 != 0) && (uVar13 = FUN_1418e19c0(lVar18), uVar13 == param_2)) {
              cVar4 = FUN_1418e1a30(lVar18);
              if (cVar4 != '\0') {
                FUN_1418f3440(local_448);
                uVar15 = FUN_1418f34f0((longlong)local_448,0,0);
                if ((char)uVar15 != '\0') {
                  FUN_1418e78b0(*(longlong *)(param_1 + 0x10),lVar18,local_448);
                }
                FUN_1418f3490((undefined8 *)local_448);
              }
              FUN_1418e1a50(lVar18);
            }
            break;
          case 9:
            lVar18 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
            if ((lVar18 != 0) && (uVar13 = FUN_1418e19c0(lVar18), uVar13 == param_2)) {
              FUN_1418e1a40(lVar18);
            }
            break;
          case 10:
            lVar18 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
            if ((lVar18 != 0) && (uVar13 = FUN_1418e19c0(lVar18), uVar13 == param_2)) {
              FUN_1418e1a80(lVar18);
            }
            break;
          case 0xb:
            lVar18 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
            if ((lVar18 != 0) && (uVar13 = FUN_1418e19c0(lVar18), uVar13 == param_2)) {
              FUN_1418e1a70(lVar18);
            }
            break;
          case 0xc:
            lVar18 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
            if ((lVar18 != 0) && (uVar13 = FUN_1418e19c0(lVar18), uVar13 == param_2)) {
              FUN_1418e1ab0(lVar18);
            }
            break;
          case 0xd:
            lVar18 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
            if ((lVar18 != 0) && (uVar13 = FUN_1418e19c0(lVar18), uVar13 == param_2)) {
              FUN_1418e1aa0(lVar18);
            }
            break;
          case 0xe:
            iVar5 = *(int *)(lVar18 + 8);
            if ((iVar5 != 0) && (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2,iVar5), cVar4 != '\0')) {
              *(uint *)(*(longlong *)(param_3 + 0x408) + 8) = param_2;
              (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),iVar5,param_3);
            }
          }
        }
        else {
          uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))(*(longlong **)(param_1 + 8),param_2);
          uVar9 = 0;
          lVar18 = *(longlong *)(param_3 + 0x408);
          sVar1 = *(short *)(lVar18 + 4);
          if (((((sVar1 == 1) || (sVar1 == 5)) || (sVar1 == 4)) || ((sVar1 == 3 || (sVar1 == 0xe)))) || (sVar1 == 7)) {
            if (sVar1 == 7) {
              uVar9 = *(undefined4 *)(lVar18 + 8);
              lVar18 = **(longlong **)(param_1 + 8);
              uVar7 = (**(code **)(lVar18 + 0xf8))(*(longlong **)(param_1 + 8),param_2);
              uVar7 = (**(code **)(lVar18 + 0x108))(*(undefined8 *)(param_1 + 8),uVar7,uVar9);
              *(undefined4 *)(*(longlong *)(param_3 + 0x408) + 8) = uVar7;
            }
            else {
              if (*(int *)(lVar18 + 8) == 0) {
                return;
              }
              plVar2 = *(longlong **)(param_1 + 8);
              iVar5 = (**(code **)(*plVar2 + 0xf8))();
              iVar8 = (**(code **)(*plVar2 + 0xf8))(plVar2,param_2);
              if (iVar8 != iVar5) {
                return;
              }
              uVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))(*(longlong **)(param_1 + 8),*(undefined4 *)(*(longlong *)(param_3 + 0x408) + 8));
            }
          }
          lVar18 = *(longlong *)(param_3 + 0x408);
          sVar1 = *(short *)(lVar18 + 4);
          if (sVar1 == 1) {
            cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2,*(undefined4 *)(lVar18 + 8));
            if (cVar4 == '\0') {
              pIVar14 = theInstance();
              lVar18 = **(longlong **)(param_1 + 8);
              uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_NO_APPLICANT");
              (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
              return;
            }
          }
          else if (sVar1 == 3) {
            cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2,*(undefined4 *)(lVar18 + 8));
            if (cVar4 == '\0') {
              return;
            }
          }
          else if (sVar1 == 4) {
            cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2,*(undefined4 *)(lVar18 + 8));
            if (cVar4 == '\0') {
              pIVar14 = theInstance();
              lVar18 = **(longlong **)(param_1 + 8);
              uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_INVITED_NOT_FOUND");
              (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
              return;
            }
          }
          else if ((sVar1 == 5) &&
                  (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2,*(undefined4 *)(lVar18 + 8)), cVar4 == '\0'))
          {
            pIVar14 = theInstance();
            lVar18 = **(longlong **)(param_1 + 8);
            uVar15 = (*(code *)**(undefined8 **)pIVar14)(pIVar14,"STR_APPLICANT_NOT_FOUND");
            (**(code **)(lVar18 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,uVar15);
            return;
          }
          (**(code **)(**(longlong **)(param_1 + 8) + 0x1e8))
                    (*(longlong **)(param_1 + 8),uVar6,param_2,*(undefined2 *)(*(longlong *)(param_3 + 0x408) + 4),CONCAT44(uVar12,uVar9),
                     CONCAT44(uVar11,*(undefined4 *)(*(longlong *)(param_3 + 0x408) + 8)));
        }
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2,&DAT_1418fab50);
      }
    }
  }
  return;
}




undefined1 FUN_1418eb120(longlong param_1,uint param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return 0;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return 0;
  }
  lVar4 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = FUN_1418e22b0(lVar4);
  if ((1 < uVar5) && (uVar6 = 0, uVar5 != 0)) {
    do {
      uVar2 = FUN_1418e2250(lVar4,uVar6);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),uVar2);
      if ((cVar1 != '\0') &&
         (((iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),uVar2), iVar3 == param_4 &&
           (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x198))(*(longlong **)(param_1 + 8),uVar2,param_5,param_6,0x20), cVar1 == '\0')) &&
          (iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),uVar2), iVar3 + 0x14 < param_3)))) {
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  return 0;
}




bool FUN_1418eb2c0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar6 == 0) {
    return false;
  }
  uVar3 = FUN_1418e19c0(lVar6);
  if (param_2 != uVar3) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),uVar3);
    if (cVar2 == '\0') {
      return false;
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),param_2);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),uVar3);
    if (iVar4 + 0x14 <= iVar5) {
      plVar1 = *(longlong **)(param_1 + 8);
      iVar4 = (**(code **)(*plVar1 + 0x178))(plVar1,param_2);
      iVar5 = (**(code **)(*plVar1 + 0x178))(plVar1,uVar3);
      if (iVar5 == iVar4) {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 400))(*(longlong **)(param_1 + 8),uVar3,param_2,0x20);
        return cVar2 == '\0';
      }
    }
    return false;
  }
  return false;
}




void FUN_1418eb3c0(longlong param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar4 = FUN_1418e8210(*(longlong *)(param_1 + 0x10),param_2);
    if (lVar4 != 0) {
      uVar7 = 0;
      lVar5 = FUN_1418e22b0(lVar4);
      if (lVar5 != 0) {
        do {
          uVar2 = FUN_1418e2250(lVar4,uVar7);
          if ((((uVar2 != param_2) && (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),uVar2), cVar1 != '\0')) &&
              (iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),uVar2), iVar3 == param_3)) &&
             (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x198))(*(longlong **)(param_1 + 8),uVar2,param_4,param_5,0x20), cVar1 == '\0')) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x1a0))(*(longlong **)(param_1 + 8),uVar2,param_6,param_7);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x1a8))(*(longlong **)(param_1 + 8),uVar2,param_2);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x1b0))(*(longlong **)(param_1 + 8),uVar2,param_7);
            iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),uVar2);
            if (0x31 < iVar3) {
              (**(code **)(**(longlong **)(param_1 + 8) + 0x128))(*(longlong **)(param_1 + 8),uVar2,1);
            }
          }
          uVar7 = uVar7 + 1;
          uVar6 = FUN_1418e22b0(lVar4);
        } while (uVar7 < uVar6);
      }
    }
    return;
  }
  log_InlineLogERROR(&DAT_1418f9318);
  return;
}




void FUN_1418eb5a0(undefined8 *param_1,uint param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  IStringManager *pIVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  
  if (param_1[1] == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return;
  }
  if (param_1[2] != 0) {
    lVar6 = FUN_1418e8210(param_1[2],param_2);
    if ((lVar6 != 0) && (cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x1c0))((longlong *)param_1[1],param_3), cVar1 == '\0')) {
      cVar1 = (**(code **)*param_1)(param_1,param_2,param_4,param_5,param_6,param_7);
      uVar12 = 0;
      lVar7 = FUN_1418e22b0(lVar6);
      if (lVar7 != 0) {
        do {
          uVar3 = FUN_1418e2250(lVar6,uVar12);
          if ((((uVar3 != param_2) && (cVar2 = (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],uVar3), cVar2 != '\0')) &&
              (iVar4 = (**(code **)(*(longlong *)param_1[1] + 0x178))((longlong *)param_1[1],uVar3), iVar4 == param_5)) &&
             ((cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x198))((longlong *)param_1[1],uVar3,param_6,param_7,0x20), cVar2 == '\0' &&
              (cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],uVar3), cVar2 == '\0')))) {
            iVar4 = (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],uVar3);
            if (param_4 < iVar4 + 0x14) {
              iVar4 = iVar4 - param_4;
              iVar11 = param_8;
              if (iVar4 < 0) {
                if (iVar4 < -10) {
                  iVar11 = (param_8 * 0xd) / 10;
                }
                else if (iVar4 < -5) {
                  iVar11 = (param_8 * 0xc) / 10;
                }
              }
              if (iVar11 < 1) {
                iVar11 = 1;
              }
              iVar4 = (**(code **)(*(longlong *)param_1[1] + 0x180))((longlong *)param_1[1],uVar3);
              if (iVar4 - 0x85U < 7) {
                iVar11 = (iVar11 * 0x19) / 10;
              }
              if (cVar1 != '\0') {
                iVar11 = iVar11 * 2;
              }
              cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],uVar3,param_2);
              if (cVar2 != '\0') {
                iVar11 = iVar11 * 2;
              }
              iVar4 = (**(code **)(*(longlong *)param_1[1] + 0x188))((longlong *)param_1[1],uVar3);
              uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x1b8))((longlong *)param_1[1],uVar3,(longlong)((iVar4 * iVar11) / 100 + iVar11));
              if (cVar1 == '\0') {
                pIVar8 = theInstance();
                lVar7 = *(longlong *)param_1[1];
                uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TEAM_EXPERIENCE");
                (**(code **)(lVar7 + 0x50))(param_1[1],uVar3,uVar9,uVar5);
              }
              else {
                pIVar8 = theInstance();
                lVar7 = *(longlong *)param_1[1];
                uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TEAM_EXPEX");
                (**(code **)(lVar7 + 0x50))(param_1[1],uVar3,uVar9,uVar5);
              }
            }
            else {
              iVar11 = iVar4 * 0x1e;
              cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],uVar3,param_2);
              if (cVar2 != '\0') {
                iVar11 = iVar4 * 0x24;
              }
              iVar4 = (**(code **)(*(longlong *)param_1[1] + 0x188))((longlong *)param_1[1],uVar3);
              uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x1b8))((longlong *)param_1[1],uVar3,(longlong)((iVar4 * iVar11) / 100 + iVar11));
              pIVar8 = theInstance();
              lVar7 = *(longlong *)param_1[1];
              uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TEAM_EXPERIENCE");
              (**(code **)(lVar7 + 0x50))(param_1[1],uVar3,uVar9,uVar5);
            }
          }
          uVar12 = uVar12 + 1;
          uVar10 = FUN_1418e22b0(lVar6);
        } while (uVar12 < uVar10);
      }
    }
    return;
  }
  log_InlineLogERROR(&DAT_1418f9318);
  return;
}




ulonglong FUN_1418eb990(longlong *param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong extraout_RAX;
  ulonglong uVar8;
  
  if (param_1[2] == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar1 = (longlong *)param_1[1];
  iVar4 = (**(code **)(*plVar1 + 0xf8))();
  uVar8 = (**(code **)(*plVar1 + 0xf8))(plVar1,param_3);
  if (iVar4 == (int)uVar8) {
    cVar3 = (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],param_2);
    if (cVar3 == '\0') {
      iVar4 = FUN_1418e8720(param_1[2],param_2);
      iVar7 = FUN_1418e8720(param_1[2],param_3);
    }
    else {
      uVar8 = (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],param_3);
      if ((char)uVar8 == '\0') goto LAB_1418eba3d;
      uVar5 = (**(code **)(*(longlong *)param_1[1] + 0xf8))((longlong *)param_1[1],param_2);
      lVar2 = *param_1;
      uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x100))((longlong *)param_1[1],param_2);
      iVar4 = (**(code **)(lVar2 + 0xe8))(param_1,uVar5,uVar6);
      lVar2 = *param_1;
      uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x100))((longlong *)param_1[1],param_3);
      iVar7 = (**(code **)(lVar2 + 0xe8))(param_1,uVar5,uVar6);
    }
    if ((iVar4 == 0) || (iVar4 != iVar7)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  else {
LAB_1418eba3d:
    uVar8 = uVar8 & 0xffffffffffffff00;
  }
  return uVar8;
}




undefined4 FUN_1418ebaf0(longlong *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1[2] == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return 0;
  }
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*(longlong *)param_1[1] + 0xf8))((longlong *)param_1[1],param_2);
    uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x100))((longlong *)param_1[1],param_2);
                    /* WARNING: Could not recover jumptable at 0x0001418ebb8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0xe8))(param_1,uVar2,uVar3);
    return uVar2;
  }
  uVar2 = FUN_1418e8720(param_1[2],param_2);
  return uVar2;
}




int FUN_1418ebbb0(longlong *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_1[2] == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return 0;
  }
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
  if (cVar1 == '\0') {
    lVar7 = FUN_1418e8210(param_1[2],param_2);
    if ((lVar7 != 0) && (uVar6 = FUN_1418e19c0(lVar7), param_2 == uVar6)) {
      iVar3 = FUN_1418e19b0(lVar7);
      return iVar3;
    }
  }
  else {
    uVar2 = (**(code **)(*(longlong *)param_1[1] + 0xf8))((longlong *)param_1[1],param_2);
    iVar3 = (**(code **)(*(longlong *)param_1[1] + 0x100))((longlong *)param_1[1],param_2);
    iVar4 = (**(code **)(*param_1 + 0xe8))(param_1,uVar2,iVar3);
    if ((iVar4 != 0) && (iVar5 = (**(code **)(*param_1 + 0xf0))(param_1,uVar2,iVar3), iVar5 == iVar3)) {
      return iVar4;
    }
  }
  return 0;
}




ulonglong FUN_1418ebcb0(longlong *param_1,uint param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong extraout_RAX;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1[2] == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar6 = extraout_RAX;
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*(longlong *)param_1[1] + 0xf8))((longlong *)param_1[1],param_2);
      uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x100))((longlong *)param_1[1],param_2);
      uVar3 = (**(code **)(*param_1 + 0xe8))(param_1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001418ebd72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0x60))(param_1,uVar3,param_3,uVar2);
      return uVar4;
    }
    lVar5 = FUN_1418e8210(param_1[2],param_2);
    uVar6 = 0;
    if (lVar5 != 0) {
      uVar6 = FUN_1418e3770(lVar5,param_3,0);
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  return uVar6 & 0xffffffffffffff00;
}




undefined1 FUN_1418ebdb0(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return 0;
  }
  lVar2 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_1418e1a90(lVar2);
    return uVar1;
  }
  return 1;
}




undefined1 FUN_1418ebe10(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return 0;
  }
  lVar2 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_1418e1ac0(lVar2);
    return uVar1;
  }
  return 1;
}




undefined4 FUN_1418ebe70(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  CMsg local_418 [1040];
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1418f3880(local_418);
  FUN_1418f3900(local_418,param_2,0);
  (**(code **)(*param_1 + 0xb8))(param_1,param_2,local_418,0,0,0,uVar2);
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  FUN_1418f38d0((undefined8 *)local_418);
  return uVar1;
}




ulonglong FUN_1418ebf00(longlong *param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong extraout_RAX;
  undefined8 *puVar4;
  undefined8 uVar5;
  CMsg local_418 [1040];
  
  uVar5 = 0xfffffffffffffffe;
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
  if (cVar1 == '\0') {
    if (param_1[2] == 0) {
      log_InlineLogERROR(&DAT_1418f9318);
      return extraout_RAX & 0xffffffffffffff00;
    }
    puVar4 = (undefined8 *)FUN_1418e8210(param_1[2],param_2);
    uVar3 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar3 = FUN_1418e9a90(param_1[2],puVar4,param_2,2);
      return uVar3;
    }
  }
  else {
    FUN_1418f3880(local_418);
    uVar2 = FUN_1418f3900(local_418,0,2);
    if ((char)uVar2 != '\0') {
      (**(code **)(*param_1 + 0xb8))(param_1,param_2,local_418,0,0,0,uVar5);
    }
    uVar3 = FUN_1418f38d0((undefined8 *)local_418);
  }
  return uVar3 & 0xffffffffffffff00;
}




ulonglong FUN_1418ebff0(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar2 = extraout_RAX;
  }
  else {
    lVar1 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_1418e4150(*(longlong *)(param_1 + 0x10),lVar1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




ulonglong FUN_1418ec050(longlong param_1,uint param_2,undefined4 param_3)

{
  ulonglong extraout_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX & 0xffffffffffffff00;
  }
  lVar1 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1418e1ad0(lVar1,param_3);
  }
  return uVar2 & 0xffffffffffffff00;
}




ulonglong FUN_1418ec0b0(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX & 0xffffffffffffff00;
  }
  lVar1 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1418e1ae0(lVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}




undefined4 FUN_1418ec110(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
  }
  else {
    lVar2 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
    if (lVar2 != 0) {
      uVar1 = FUN_1418e1b00(lVar2);
      return uVar1;
    }
  }
  return 0;
}




ulonglong FUN_1418ec170(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar2 = extraout_RAX;
  }
  else {
    lVar1 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_1418e40a0(*(longlong *)(param_1 + 0x10),lVar1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




void FUN_1418ec1d0(longlong *param_1,ulonglong param_2,int param_3,undefined8 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  if (-1 < param_3) {
    if (param_3 < 3) {
      (**(code **)(*param_1 + 0xd0))(param_1,param_3,param_2 & 0xffffffff,param_4,param_5,param_7,param_6);
      return;
    }
    if (param_3 == 3) {
      (**(code **)(*param_1 + 0xd8))(param_1,param_2,param_5,param_4,0,param_7,param_6,0,0xfffffffffffffffe);
      return;
    }
    if (param_3 == 4) {
      (**(code **)(*param_1 + 0xe0))(param_1,param_2,param_5);
      return;
    }
  }
  log_InlineLogERROR("CTeamService::ProcessOSSyncMsg. SubAction[%u] not found");
  return;
}




void FUN_1418ec2a0(longlong *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  CMsg local_418 [1040];
  
  uVar3 = 0xfffffffffffffffe;
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 8))();
  if (cVar1 != '\0') {
    FUN_1418f3880(local_418);
    uVar2 = FUN_1418f3900(local_418,param_4,param_3);
    if ((char)uVar2 == '\0') {
      FUN_1418f38d0((undefined8 *)local_418);
    }
    else {
      (**(code **)(*param_1 + 0xb8))(param_1,param_2,local_418,1,param_5,param_6,uVar3);
      FUN_1418f38d0((undefined8 *)local_418);
    }
  }
  return;
}




void FUN_1418ec360(longlong *param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 uVar2;
  CMsg local_418 [1040];
  
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 8))();
  if (cVar1 != '\0') {
    FUN_1418f3440(local_418);
    uVar2 = FUN_1418f34f0((longlong)local_418,param_3,param_4);
    if ((char)uVar2 == '\0') {
      FUN_1418f3490((undefined8 *)local_418);
    }
    else {
      (**(code **)(*param_1 + 200))(param_1,param_2,local_418);
      FUN_1418f3490((undefined8 *)local_418);
    }
  }
  return;
}




ulonglong FUN_1418ec430(int *param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT71((int7)((ulonglong)uVar1 * 0x10624dd3 >> 8),(uint)(param_1[1] + *param_1) <= uVar1 / 1000) & 0xffffffff;
}




bool FUN_1418ec470(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1418ec4b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_1418ec510(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1418ec550(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




int FUN_1418ec5a0(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 4) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




void FUN_1418ec6a0(longlong param_1,longlong *param_2)

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




void FUN_1418ec810(longlong param_1,longlong *param_2)

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




longlong FUN_1418ec940(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418ec962;
  }
  lVar2 = *plVar1;
LAB_1418ec962:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1418ec980(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418ec9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_1418eca10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418eca32;
  }
  lVar2 = *plVar1;
LAB_1418eca32:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1418eca50(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418eca74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1418ecb20(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418ecb52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1418ecbc0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001418ecbf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1418ecd70(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_1418ecdf0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_1 * 0x30);
  return;
}




int FUN_1418ecee0(undefined4 *param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = tq::TimeGet(0);
  param_1[1] = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




void FUN_1418ecf20(longlong param_1,longlong param_2)

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




void FUN_1418ecf80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418ecfb0(longlong param_1,longlong param_2)

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




void FUN_1418ed010(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1418ed030(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418ed052;
  }
  lVar2 = *plVar1;
LAB_1418ed052:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1418ed070(longlong *param_1)

{
  FUN_1418ec980(param_1);
  return param_1;
}




longlong FUN_1418ed090(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418ed0b2;
  }
  lVar2 = *plVar1;
LAB_1418ed0b2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1418ed0d0(longlong *param_1)

{
  FUN_1418eca50(param_1);
  return param_1;
}




longlong * FUN_1418ed1c0(longlong *param_1)

{
  FUN_1418ecb20(param_1);
  return param_1;
}




longlong * FUN_1418ed1e0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1418eca50(param_1);
  return param_2;
}




longlong * FUN_1418ed210(longlong *param_1)

{
  FUN_1418ecbc0(param_1);
  return param_1;
}




void FUN_1418ed250(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_1418ed2c0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141902628);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_1418ed330(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1418ec980(param_1);
  return param_2;
}




undefined8 * FUN_1418ed380(undefined8 *param_1)

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




undefined8 * FUN_1418ed3c0(undefined8 *param_1)

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




longlong * FUN_1418ed400(longlong *param_1)

{
  FUN_1418eca50(param_1);
  return param_1;
}




ulonglong FUN_1418ed420(longlong param_1,longlong param_2)

{
  ulong uVar1;
  ulonglong extraout_RAX;
  undefined8 *puVar2;
  ulonglong extraout_RAX_00;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 8) = param_2;
  puVar2 = FUN_1418e8960();
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  FUN_1418e3d30((longlong)puVar2,param_2);
  *(undefined4 *)(param_1 + 0x18) = 5;
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x1c) = uVar1 / 1000;
  return CONCAT71((uint7)((ulonglong)uVar1 * 0x10624dd3 >> 8) & 0xffffff,1);
}




longlong FUN_1418ed4f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418ed512;
  }
  lVar2 = *plVar1;
LAB_1418ed512:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1418ed530(longlong *param_1)

{
  FUN_1418ec980(param_1);
  return param_1;
}




longlong FUN_1418ed550(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1418ed572;
  }
  lVar2 = *plVar1;
LAB_1418ed572:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1418ed590(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418ed5b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418ed5d0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1418ed5d0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_1418ed620(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1418ed620(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong * FUN_1418ed670(longlong *param_1)

{
  FUN_1418ecb20(param_1);
  return param_1;
}




longlong * FUN_1418ed690(longlong *param_1)

{
  FUN_1418ecbc0(param_1);
  return param_1;
}




undefined8 * FUN_1418ed6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1418ed730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1418ed7b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1418ed7f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_1418ed830(void)

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




void FUN_1418ed890(void)

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




undefined8 * FUN_1418ed8f0(undefined8 *param_1)

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




undefined8 * FUN_1418ed940(undefined8 *param_1)

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




void FUN_1418ed990(longlong *param_1,longlong *param_2,longlong *param_3)

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




void FUN_1418eda60(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1418ed5d0(param_1,(longlong *)plVar2[2]);
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




void FUN_1418edae0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1418ed620(param_1,(longlong *)plVar2[2]);
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




void FUN_1418edb60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418edb80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418edba0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1418edbe0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1418edc20(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




void FUN_1418edd00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1418ed830();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1418edd40(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
      if ((longlong)puVar2[3] < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x29) != '\0') && (*param_3 < (longlong)puVar2[3])) {
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
      if (*param_3 < (longlong)puVar2[3]) {
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




void FUN_1418ede20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1418ed890();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1418ede60(undefined8 *param_1)

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




undefined8 * FUN_1418edeb0(undefined8 *param_1)

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




void FUN_1418edf00(longlong *param_1,longlong *param_2,longlong *param_3)

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




void FUN_1418edff0(longlong *param_1,longlong *param_2,longlong *param_3)

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




void FUN_1418ee120(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418ee140(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418ee1a0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_1418edc20(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_1418ee1c0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1418ee250(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141902570);
  }
  plVar5 = FUN_1418ed6b0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1418ee5b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1418ee640(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  FUN_1418edd40(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_1418ee660(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141902570);
  }
  plVar5 = FUN_1418ed730(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1418ee9a0(undefined8 *param_1)

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




undefined8 * FUN_1418ee9f0(undefined8 *param_1)

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




void FUN_1418eea40(longlong *param_1,longlong *param_2,longlong *param_3)

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




ulonglong FUN_1418eeb30(longlong param_1,uint param_2,undefined8 param_3,int param_4)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 extraout_RAX_00;
  longlong *local_48 [3];
  void *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    lVar2 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
    uVar1 = 0;
    if (lVar2 != 0) {
      plVar3 = operator_new(8);
      local_48[0] = (longlong *)0x0;
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)local_48;
        local_48[0] = plVar3;
      }
      local_30 = (void *)0x0;
      local_28 = 0;
      local_20 = 0;
      FUN_1418e3770(lVar2,(longlong *)local_48,param_4);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),local_48,param_3);
      if (local_30 != (void *)0x0) {
        operator_delete(local_30);
      }
      local_30 = (void *)0x0;
      local_28 = 0;
      local_20 = 0;
      operator_delete(local_48[0]);
      uVar1 = CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
    }
  }
  return uVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1418eec50(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined1 *local_270;
  undefined1 local_268 [32];
  char local_248 [256];
  char local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_141903300 ^ (ulonglong)auStack_298;
  plVar2 = *(longlong **)(param_1 + 0x20);
  plVar10 = (longlong *)**(undefined8 **)(param_1 + 0x50);
  do {
    plVar3 = *(longlong **)(param_1 + 0x50);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x20))) {
      _invalid_parameter_noinfo();
    }
    if (plVar10 == plVar3) {
      return;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (plVar10 == *(longlong **)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar8 = plVar10[4];
    if (lVar8 == 0) {
      pcVar12 = &DAT_1418fb168;
    }
    else {
      local_148[0] = '\0';
      memset(local_148 + 1,0,0xff);
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar2;
      }
      if (plVar10 == *(longlong **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),plVar10[3] >> 0x20,*(undefined4 *)(lVar8 + 8));
      if (iVar6 != 0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),iVar6,local_268);
      }
      local_270 = local_268;
      local_278 = *(undefined4 *)(lVar8 + 8);
      sprintf(local_148,"Team[%lu] MemberCount[%d] Leader[%lu][%s]");
      plVar3 = *(longlong **)(lVar8 + 0x10);
      plVar9 = (longlong *)**(undefined8 **)(lVar8 + 0x40);
      while( true ) {
        plVar4 = *(longlong **)(lVar8 + 0x40);
        if ((plVar3 == (longlong *)0x0) || (plVar3 != *(longlong **)(lVar8 + 0x10))) {
          _invalid_parameter_noinfo();
        }
        if (plVar9 == plVar4) break;
        local_248[0] = '\0';
        memset(local_248 + 1,0,0xff);
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
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar2;
        }
        if (plVar10 == *(longlong **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),plVar10[3] >> 0x20,(int)plVar9[3]);
        if (iVar6 == 0) {
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
          sprintf(local_248,"\nError Member[%lu] not found");
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),iVar6,local_268);
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
          sprintf(local_248,"\nMember[%lu][%s]");
        }
        lVar7 = -1;
        pcVar12 = local_148;
        do {
          pcVar11 = pcVar12;
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          pcVar11 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar11;
        } while (cVar1 != '\0');
        lVar7 = 0;
        do {
          cVar1 = local_248[lVar7];
          pcVar11[lVar7 + -1] = cVar1;
          lVar7 = lVar7 + 1;
        } while (cVar1 != '\0');
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar9 + 0x1d) == '\0') {
          plVar4 = (longlong *)plVar9[2];
          if (*(char *)((longlong)plVar4 + 0x1d) == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x1d);
            plVar9 = plVar4;
            plVar4 = (longlong *)*plVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar4 + 0x1d);
              plVar9 = plVar4;
              plVar4 = (longlong *)*plVar4;
            }
          }
          else {
            cVar1 = *(char *)(plVar9[1] + 0x1d);
            plVar5 = (longlong *)plVar9[1];
            plVar4 = plVar9;
            while ((plVar9 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar9[2]))) {
              cVar1 = *(char *)(plVar9[1] + 0x1d);
              plVar5 = (longlong *)plVar9[1];
              plVar4 = plVar9;
            }
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
      }
      pcVar12 = local_148;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2,pcVar12);
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar10 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar10[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar10 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar10 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar10[1] + 0x29);
        plVar9 = (longlong *)plVar10[1];
        plVar3 = plVar10;
        while ((plVar10 = plVar9, cVar1 == '\0' && (plVar3 == (longlong *)plVar10[2]))) {
          cVar1 = *(char *)(plVar10[1] + 0x29);
          plVar9 = (longlong *)plVar10[1];
          plVar3 = plVar10;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




longlong FUN_1418ef010(longlong *param_1,uint *param_2)

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
  
  FUN_1418edc20(param_1,&local_38,param_2);
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
  FUN_1418e71a0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




longlong * FUN_1418ef150(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x1d) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x1d) == '\0');
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




longlong * FUN_1418ef220(longlong *param_1,longlong *param_2,longlong *param_3)

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
      bVar7 = *param_3 < plVar6[3];
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
LAB_1418ef37d:
    local_30 = plVar4;
    if (*param_3 <= plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1418ef3ad;
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
      goto LAB_1418ef37d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1418ee250(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1418ef3ad:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1418ef3d0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141902688);
  }
  FUN_1418ec980(param_3);
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
        goto LAB_1418ef5bc;
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
LAB_1418ef5bc:
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
            FUN_1418ecf20((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1418ec6a0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1418ecf20((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1418ec6a0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1418ecf20((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1418ec6a0((longlong)param_1,plVar7);
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




longlong * FUN_1418ef790(longlong *param_1,longlong *param_2,longlong *param_3)

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
      if ((longlong)puVar1[3] < *param_3) {
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
  if ((puVar4 == puVar1) || (*param_3 < (longlong)puVar4[3])) {
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




longlong * FUN_1418ef860(longlong *param_1,longlong *param_2,longlong *param_3)

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
      bVar7 = *param_3 < plVar6[3];
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
LAB_1418ef9bd:
    local_30 = plVar4;
    if (*param_3 <= plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1418ef9ed;
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
      goto LAB_1418ef9bd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1418ee660(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1418ef9ed:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1418efa10(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141902688);
  }
  FUN_1418eca50(param_3);
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
        goto LAB_1418efbfc;
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
LAB_1418efbfc:
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
            FUN_1418ecfb0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1418ec810((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1418ecfb0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1418ec810((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1418ecfb0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1418ec810((longlong)param_1,plVar7);
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




longlong * FUN_1418efdd0(longlong *param_1,longlong *param_2,longlong *param_3)

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
      if ((longlong)puVar1[3] < *param_3) {
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
  if ((puVar4 == puVar1) || (*param_3 < (longlong)puVar4[3])) {
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




void FUN_1418efea0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418efec0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1418efee0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1418edae0((longlong)param_1);
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
    FUN_1418efa10(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_1418f0090(longlong *param_1)

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
  FUN_1418efee0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_1418f0100(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1418eda60((longlong)param_1);
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
    FUN_1418ef3d0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1418f02b0(undefined8 *param_1)

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




undefined8 * FUN_1418f0300(undefined8 *param_1)

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




undefined4 FUN_1418f0350(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
  }
  else {
    if (param_3 != 0) {
      puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x50))[1];
      cVar1 = *(char *)((longlong)puVar9 + 0x29);
      puVar3 = *(undefined8 **)(param_1 + 0x50);
      while (cVar1 == '\0') {
        if ((longlong)puVar9[3] < CONCAT44(param_3,param_2)) {
          puVar7 = (undefined8 *)puVar9[2];
          puVar9 = puVar3;
        }
        else {
          puVar7 = (undefined8 *)*puVar9;
        }
        puVar3 = puVar9;
        puVar9 = puVar7;
        cVar1 = *(char *)((longlong)puVar7 + 0x29);
      }
      puVar9 = *(undefined8 **)(param_1 + 0x50);
      local_30 = puVar3;
      local_38 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        _invalid_parameter_noinfo();
      }
      if ((puVar3 == puVar9) || (CONCAT44(param_3,param_2) < (longlong)puVar3[3])) {
        plVar8 = &local_28;
        local_20 = *(undefined8 *)(param_1 + 0x50);
        local_28 = *(longlong *)(param_1 + 0x20);
      }
      else {
        plVar8 = &local_38;
      }
      plVar2 = (longlong *)*plVar8;
      lVar6 = *(longlong *)(param_1 + 0x50);
      local_18 = plVar2;
      local_10 = plVar8[1];
      if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x20))) {
        _invalid_parameter_noinfo();
      }
      lVar4 = local_10;
      if (local_10 == lVar6) {
        uVar5 = 0;
      }
      else {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar2;
        }
        if (lVar4 == *(longlong *)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_3,*(undefined4 *)(*(longlong *)(lVar4 + 0x20) + 8));
      }
      return uVar5;
    }
    lVar6 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
    if (lVar6 != 0) {
      uVar5 = FUN_1418e19c0(lVar6);
      return uVar5;
    }
  }
  return 0;
}




longlong FUN_1418f04f0(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return 0;
  }
  if (param_3 == 0) {
    lVar5 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
    if (lVar5 != 0) {
      lVar5 = FUN_1418e22b0(lVar5);
      return lVar5;
    }
  }
  else {
    puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x50))[1];
    cVar1 = *(char *)((longlong)puVar8 + 0x29);
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    while (cVar1 == '\0') {
      if ((longlong)puVar8[3] < CONCAT44(param_3,param_2)) {
        puVar6 = (undefined8 *)puVar8[2];
        puVar8 = puVar3;
      }
      else {
        puVar6 = (undefined8 *)*puVar8;
      }
      puVar3 = puVar8;
      puVar8 = puVar6;
      cVar1 = *(char *)((longlong)puVar6 + 0x29);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x50);
    local_30 = puVar3;
    local_38 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar3 == puVar8) || (CONCAT44(param_3,param_2) < (longlong)puVar3[3])) {
      plVar7 = &local_28;
      local_20 = *(undefined8 *)(param_1 + 0x50);
      local_28 = *(longlong *)(param_1 + 0x20);
    }
    else {
      plVar7 = &local_38;
    }
    plVar2 = (longlong *)*plVar7;
    lVar5 = *(longlong *)(param_1 + 0x50);
    local_18 = plVar2;
    local_10 = plVar7[1];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x20))) {
      _invalid_parameter_noinfo();
    }
    lVar4 = local_10;
    if (local_10 != lVar5) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar2;
      }
      if (lVar4 == *(longlong *)(lVar5 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      return *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x48);
    }
  }
  return 0;
}




ulonglong FUN_1418f0680(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char cVar6;
  undefined4 uVar7;
  ulonglong extraout_RAX;
  undefined8 *puVar8;
  ulonglong extraout_RAX_00;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong extraout_RAX_01;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint local_res8 [2];
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX & 0xffffffffffffff00;
  }
  cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_3);
  if (cVar6 == '\0') {
    lVar11 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
    uVar9 = 0;
    if (lVar11 != 0) {
      uVar9 = FUN_1418e22e0(lVar11,param_3);
      return uVar9;
    }
  }
  else {
    uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),param_3);
    puVar13 = (undefined8 *)(*(undefined8 **)(param_1 + 0x50))[1];
    cVar6 = *(char *)((longlong)puVar13 + 0x29);
    puVar4 = *(undefined8 **)(param_1 + 0x50);
    while (cVar6 == '\0') {
      if ((longlong)puVar13[3] < CONCAT44(uVar7,param_2)) {
        puVar8 = (undefined8 *)puVar13[2];
        puVar13 = puVar4;
      }
      else {
        puVar8 = (undefined8 *)*puVar13;
      }
      puVar4 = puVar13;
      puVar13 = puVar8;
      cVar6 = *(char *)((longlong)puVar8 + 0x29);
    }
    puVar13 = *(undefined8 **)(param_1 + 0x50);
    local_40 = puVar4;
    local_48 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar4 == puVar13) || (CONCAT44(uVar7,param_2) < (longlong)puVar4[3])) {
      plVar12 = &local_38;
      local_30 = *(undefined8 *)(param_1 + 0x50);
      local_38 = *(longlong *)(param_1 + 0x20);
    }
    else {
      plVar12 = &local_48;
    }
    plVar1 = (longlong *)*plVar12;
    uVar2 = *(ulonglong *)(param_1 + 0x50);
    local_28 = plVar1;
    uVar9 = plVar12[1];
    local_20 = uVar9;
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x20))) {
      _invalid_parameter_noinfo();
      uVar9 = extraout_RAX_00;
    }
    uVar5 = local_20;
    if (local_20 != uVar2) {
      uVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))(*(longlong **)(param_1 + 8),param_3);
      local_res8[0] = (uint)uVar9;
      if (local_res8[0] != 0) {
        lVar11 = 0;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar14 = lVar11;
        }
        else {
          lVar14 = *plVar1;
        }
        if (uVar5 == *(ulonglong *)(lVar14 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar2 = *(ulonglong *)(*(longlong *)(uVar5 + 0x20) + 0x40);
        uVar3 = *(ulonglong *)(*(longlong *)(uVar5 + 0x20) + 0x10);
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar11 = *plVar1;
        }
        if (uVar5 == *(ulonglong *)(lVar11 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        puVar10 = (ulonglong *)FUN_1418ef150((longlong *)(*(longlong *)(uVar5 + 0x20) + 0x10),(longlong *)&local_28,local_res8);
        uVar9 = *puVar10;
        if ((uVar9 == 0) || (uVar9 != uVar3)) {
          _invalid_parameter_noinfo();
          uVar9 = extraout_RAX_01;
        }
        if (puVar10[1] != uVar2) {
          return CONCAT71((int7)(uVar9 >> 8),1);
        }
      }
    }
  }
  return uVar9 & 0xffffffffffffff00;
}




ulonglong FUN_1418f08a0(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong extraout_RAX;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong extraout_RAX_00;
  ulonglong *puVar6;
  undefined8 *puVar7;
  ulonglong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    local_18 = extraout_RAX;
  }
  else if (param_3 == 0) {
    lVar4 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
    local_18 = 0;
    if (lVar4 != 0) {
      return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    }
  }
  else {
    puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x50))[1];
    cVar1 = *(char *)((longlong)puVar7 + 0x29);
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    while (cVar1 == '\0') {
      if ((longlong)puVar7[3] < CONCAT44(param_3,param_2)) {
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
    puVar7 = *(undefined8 **)(param_1 + 0x50);
    local_30 = puVar3;
    local_38 = *(ulonglong *)(param_1 + 0x20);
    if (*(ulonglong *)(param_1 + 0x20) == 0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar3 == puVar7) || (CONCAT44(param_3,param_2) < (longlong)puVar3[3])) {
      puVar6 = &local_28;
      local_20 = *(undefined8 *)(param_1 + 0x50);
      local_28 = *(ulonglong *)(param_1 + 0x20);
    }
    else {
      puVar6 = &local_38;
    }
    local_18 = *puVar6;
    uVar2 = *(ulonglong *)(param_1 + 0x50);
    local_10 = puVar6[1];
    if ((local_18 == 0) || (local_18 != *(ulonglong *)(param_1 + 0x20))) {
      _invalid_parameter_noinfo();
      local_18 = extraout_RAX_00;
    }
    if (local_10 != uVar2) {
      return CONCAT71((int7)(local_18 >> 8),1);
    }
  }
  return local_18 & 0xffffffffffffff00;
}




undefined4 FUN_1418f09e0(longlong param_1,int param_2,int param_3)

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
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x90))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x90);
  while (cVar1 == '\0') {
    if ((longlong)puVar7[3] < CONCAT44(param_2,param_3)) {
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
  puVar7 = *(undefined8 **)(param_1 + 0x90);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (CONCAT44(param_2,param_3) < (longlong)puVar3[3])) {
    plVar6 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x90);
    local_28 = *(longlong *)(param_1 + 0x60);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x90);
  local_18 = plVar2;
  local_10 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x60))) {
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
    return *(undefined4 *)(lVar4 + 0x20);
  }
  return 0;
}




undefined4 FUN_1418f0b20(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res20;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x90))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x90);
  while (cVar1 == '\0') {
    if ((longlong)puVar7[3] < CONCAT44(param_2,param_3)) {
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
  puVar7 = *(undefined8 **)(param_1 + 0x90);
  local_40 = puVar4;
  local_48 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar7) || (CONCAT44(param_2,param_3) < (longlong)puVar4[3])) {
    plVar6 = &local_38;
    local_30 = *(undefined8 *)(param_1 + 0x90);
    local_38 = *(longlong *)(param_1 + 0x60);
  }
  else {
    plVar6 = &local_48;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x90);
  local_28 = plVar2;
  local_20 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x60))) {
    _invalid_parameter_noinfo();
  }
  lVar3 = local_20;
  if (local_20 != lVar8) {
    lVar8 = 0;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = lVar8;
    }
    else {
      lVar9 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    local_res20 = CONCAT44(param_2,*(undefined4 *)(lVar3 + 0x20));
    FUN_1418ef790((longlong *)(param_1 + 0x20),(longlong *)&local_28,&local_res20);
    plVar6 = local_28;
    lVar3 = *(longlong *)(param_1 + 0x50);
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x20))) {
      _invalid_parameter_noinfo();
    }
    lVar9 = local_20;
    if (local_20 != lVar3) {
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar8 = *plVar6;
      }
      if (lVar9 == *(longlong *)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      return *(undefined4 *)(*(longlong *)(lVar9 + 0x20) + 8);
    }
  }
  return 0;
}




undefined4 FUN_1418f0cd0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res20;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x90))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x90);
  while (cVar1 == '\0') {
    if ((longlong)puVar7[3] < CONCAT44(param_2,param_3)) {
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
  puVar7 = *(undefined8 **)(param_1 + 0x90);
  local_40 = puVar4;
  local_48 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar7) || (CONCAT44(param_2,param_3) < (longlong)puVar4[3])) {
    plVar6 = &local_38;
    local_30 = *(undefined8 *)(param_1 + 0x90);
    local_38 = *(longlong *)(param_1 + 0x60);
  }
  else {
    plVar6 = &local_48;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x90);
  local_28 = plVar2;
  local_20 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x60))) {
    _invalid_parameter_noinfo();
  }
  lVar3 = local_20;
  if (local_20 != lVar8) {
    lVar8 = 0;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = lVar8;
    }
    else {
      lVar9 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    local_res20 = CONCAT44(param_2,*(undefined4 *)(lVar3 + 0x20));
    FUN_1418ef790((longlong *)(param_1 + 0x20),(longlong *)&local_28,&local_res20);
    plVar6 = local_28;
    lVar3 = *(longlong *)(param_1 + 0x50);
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x20))) {
      _invalid_parameter_noinfo();
    }
    lVar9 = local_20;
    if (local_20 != lVar3) {
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar8 = *plVar6;
      }
      if (lVar9 == *(longlong *)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      return *(undefined4 *)(*(longlong *)(lVar9 + 0x20) + 4);
    }
  }
  return 0;
}




ulonglong FUN_1418f0e80(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong local_478;
  longlong *local_470;
  longlong local_468;
  longlong *local_460;
  undefined8 local_450;
  CMsg local_448 [1040];
  
  local_450 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    local_478 = CONCAT44(param_2,param_3);
    FUN_1418ef790((longlong *)(param_1 + 0x20),(longlong *)&local_470,&local_478);
    lVar7 = *(longlong *)(param_1 + 0x50);
    lVar6 = 0;
    plVar3 = *(longlong **)(param_1 + 0x20);
    local_460 = plVar3;
    if ((local_470 == (longlong *)0x0) || (local_470 != plVar3)) {
      _invalid_parameter_noinfo();
      plVar3 = extraout_RAX_00;
    }
    if (local_468 == lVar7) {
      uVar4 = CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
    }
    else {
      if (local_470 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar6;
      }
      else {
        lVar7 = *local_470;
      }
      if (local_468 == *(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar8 = *(undefined4 *)(*(longlong *)(local_468 + 0x20) + 8);
      local_478 = CONCAT44(local_478._4_4_,uVar8);
      iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_2,uVar8);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_2,param_4);
      iVar2 = (int)uVar4;
      uVar8 = (undefined4)local_478;
      if ((iVar2 != iVar1) && (iVar2 != 0)) {
        FUN_1418f3440(local_448);
        if (local_470 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = lVar6;
        }
        else {
          lVar7 = *local_470;
        }
        if (local_468 == *(longlong *)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar8 = (undefined4)local_478;
        uVar5 = FUN_1418f3530((longlong)local_448,iVar2,(undefined4)local_478,*(undefined4 *)(*(longlong *)(local_468 + 0x20) + 4));
        if ((char)uVar5 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),uVar4 & 0xffffffff,local_448,1);
        }
        uVar4 = FUN_1418f3490((undefined8 *)local_448);
      }
      if (iVar1 != 0) {
        FUN_1418f3440(local_448);
        if (local_470 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar6 = *local_470;
        }
        if (local_468 == *(longlong *)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar5 = FUN_1418f3530((longlong)local_448,iVar1,uVar8,*(undefined4 *)(*(longlong *)(local_468 + 0x20) + 4));
        if ((char)uVar5 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),iVar1,local_448,1);
        }
        uVar4 = FUN_1418f3490((undefined8 *)local_448);
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4;
}




void FUN_1418f10b0(longlong *param_1)

{
  FUN_1418f0090(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1418f10e0(longlong *param_1,longlong *param_2)

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
  
  FUN_1418edd40(param_1,&local_38,param_2);
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
  FUN_1418efee0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




undefined8 * FUN_1418f1220(undefined8 *param_1)

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
  lVar2 = FUN_1418ed830();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1418f12a0(longlong *param_1)

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
  FUN_1418f0100(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1418f1310(undefined8 *param_1)

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
  lVar2 = FUN_1418ed890();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1418f1390(longlong *param_1)

{
  FUN_1418f0090(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1418f13c0(longlong param_1)

{
  FUN_1418e8100((longlong *)(param_1 + 0x10));
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_1418f1400(longlong *param_1)

{
  FUN_1418f12a0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1418f1430(undefined8 *param_1)

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
  lVar2 = FUN_1418ed890();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined4 * FUN_1418f14b0(undefined4 *param_1)

{
  FUN_1418e8800((undefined8 *)(param_1 + 4));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1418e6780((longlong)(param_1 + 4));
  return param_1;
}




void FUN_1418f1500(longlong *param_1)

{
  FUN_1418f12a0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void * FUN_1418f1530(void *param_1,uint param_2)

{
  FUN_1418e8100((longlong *)((longlong)param_1 + 0x10));
  operator_delete(*(void **)((longlong)param_1 + 0x10));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_1418f15a0(longlong param_1,uint param_2,longlong *param_3,int param_4)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong extraout_RAX;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong extraout_RAX_00;
  ulonglong uVar10;
  longlong *extraout_RAX_01;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int local_res8 [2];
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_4 == 0) {
    lVar7 = FUN_1418e8320(*(longlong *)(param_1 + 0x10),param_2);
    uVar10 = 0;
    if (lVar7 == 0) {
LAB_1418f182b:
      return uVar10 & 0xffffffffffffff00;
    }
    plVar8 = (longlong *)FUN_1418e3770(lVar7,param_3,0);
  }
  else {
    puVar12 = (undefined8 *)(*(undefined8 **)(param_1 + 0x50))[1];
    cVar1 = *(char *)((longlong)puVar12 + 0x29);
    puVar5 = *(undefined8 **)(param_1 + 0x50);
    while (cVar1 == '\0') {
      if ((longlong)puVar12[3] < CONCAT44(param_4,param_2)) {
        puVar9 = (undefined8 *)puVar12[2];
        puVar12 = puVar5;
      }
      else {
        puVar9 = (undefined8 *)*puVar12;
      }
      puVar5 = puVar12;
      puVar12 = puVar9;
      cVar1 = *(char *)((longlong)puVar9 + 0x29);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x50);
    local_50 = puVar5;
    local_58 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar5 == puVar12) || (CONCAT44(param_4,param_2) < (longlong)puVar5[3])) {
      plVar11 = &local_48;
      local_40 = *(undefined8 *)(param_1 + 0x50);
      local_48 = *(longlong *)(param_1 + 0x20);
    }
    else {
      plVar11 = &local_58;
    }
    plVar2 = (longlong *)*plVar11;
    uVar3 = *(ulonglong *)(param_1 + 0x50);
    local_38 = plVar2;
    uVar10 = plVar11[1];
    local_30 = uVar10;
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x20))) {
      _invalid_parameter_noinfo();
      uVar10 = extraout_RAX_00;
    }
    uVar6 = local_30;
    if (local_30 == uVar3) goto LAB_1418f182b;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar2;
    }
    if (uVar6 == *(ulonglong *)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar11 = *(longlong **)(*(longlong *)(uVar6 + 0x20) + 0x10);
    plVar13 = (longlong *)**(undefined8 **)(*(longlong *)(uVar6 + 0x20) + 0x40);
    while( true ) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar2;
      }
      if (uVar6 == *(ulonglong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar4 = *(longlong **)(*(longlong *)(uVar6 + 0x20) + 0x40);
      plVar8 = (longlong *)(*(longlong *)(uVar6 + 0x20) + 0x10);
      if ((plVar11 == (longlong *)0x0) || (plVar11 != (longlong *)*plVar8)) {
        _invalid_parameter_noinfo();
        plVar8 = extraout_RAX_01;
      }
      if (plVar13 == plVar4) break;
      if (plVar11 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar11;
      }
      if (plVar13 == *(longlong **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      local_res8[0] = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_4,(int)plVar13[3]);
      if (local_res8[0] != 0) {
        FUN_1418e36a0(param_3,local_res8);
      }
      if (plVar11 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar13 + 0x1d) == '\0') {
        plVar4 = (longlong *)plVar13[2];
        if (*(char *)((longlong)plVar4 + 0x1d) == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x1d);
          plVar13 = plVar4;
          plVar4 = (longlong *)*plVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x1d);
            plVar13 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar13[1] + 0x1d);
          plVar8 = (longlong *)plVar13[1];
          plVar4 = plVar13;
          while ((plVar13 = plVar8, cVar1 == '\0' && (plVar4 == (longlong *)plVar13[2]))) {
            cVar1 = *(char *)(plVar13[1] + 0x1d);
            plVar8 = (longlong *)plVar13[1];
            plVar4 = plVar13;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
  }
  return CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
}




void FUN_1418f1860(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_res20;
  longlong *local_4a8;
  longlong lStack_4a0;
  longlong local_498;
  longlong *local_490;
  longlong *local_488 [2];
  longlong *local_478;
  longlong *local_468;
  undefined8 local_458;
  undefined8 local_450;
  CMsg local_448 [1040];
  
  local_450 = 0xfffffffffffffffe;
  local_res20 = CONCAT44(param_2,param_3);
  FUN_1418ef790((longlong *)(param_1 + 0x20),(longlong *)&local_4a8,&local_res20);
  lVar7 = *(longlong *)(param_1 + 0x50);
  lVar8 = 0;
  local_478 = *(longlong **)(param_1 + 0x20);
  if ((local_4a8 == (longlong *)0x0) || (local_4a8 != local_478)) {
    _invalid_parameter_noinfo();
  }
  if (lStack_4a0 != lVar7) {
    if (local_4a8 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = lVar8;
    }
    else {
      lVar7 = *local_4a8;
    }
    if (lStack_4a0 == *(longlong *)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (*(longlong *)(lStack_4a0 + 0x20) != 0) {
      if (local_4a8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar8;
      }
      else {
        lVar7 = *local_4a8;
      }
      if (lStack_4a0 == *(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(int *)(*(longlong *)(lStack_4a0 + 0x20) + 4) != 1) {
        if (local_4a8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = lVar8;
        }
        else {
          lVar7 = *local_4a8;
        }
        if (lStack_4a0 == *(longlong *)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        local_458 = *(undefined8 *)(*(longlong *)(lStack_4a0 + 0x20) + 0x48);
        log_InlineLogERROR(" CTeamService::OnOSDestroyTeam. Cur SetMember count[%d] != 1");
      }
      if (local_4a8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar8;
      }
      else {
        lVar7 = *local_4a8;
      }
      if (lStack_4a0 == *(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_2,*(undefined4 *)(*(longlong *)(lStack_4a0 + 0x20) + 8));
      if (iVar3 != 0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))(*(longlong **)(param_1 + 8),iVar3);
        FUN_1418f3440(local_448);
        uVar4 = FUN_1418f3530((longlong)local_448,iVar3,0,0);
        if ((char)uVar4 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),iVar3,local_448,1);
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),iVar3,0);
        FUN_1418f3490((undefined8 *)local_448);
      }
      if (local_4a8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar8;
      }
      else {
        lVar7 = *local_4a8;
      }
      if (lStack_4a0 == *(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar5 = (longlong *)**(undefined8 **)(*(longlong *)(lStack_4a0 + 0x20) + 0x40);
      plVar1 = *(longlong **)(*(longlong *)(lStack_4a0 + 0x20) + 0x10);
      local_468 = plVar1;
LAB_1418f1a61:
      if (local_4a8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar8;
      }
      else {
        lVar7 = *local_4a8;
      }
      if (lStack_4a0 == *(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar6 = *(longlong **)(*(longlong *)(lStack_4a0 + 0x20) + 0x40);
      local_488[0] = *(longlong **)(*(longlong *)(lStack_4a0 + 0x20) + 0x10);
      if ((plVar1 == (longlong *)0x0) || (plVar1 != local_488[0])) {
        _invalid_parameter_noinfo();
      }
      if (plVar5 != plVar6) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = lVar8;
        }
        else {
          lVar7 = *plVar1;
        }
        if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        local_498 = CONCAT44(param_2,(int)plVar5[3]);
        FUN_1418f10e0((longlong *)(param_1 + 0x60),&local_498);
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar5 + 0x1d) == '\0') {
          plVar6 = plVar5;
          plVar2 = (longlong *)plVar5[2];
          if (*(char *)(plVar5[2] + 0x1d) == '\0') {
            do {
              plVar5 = plVar2;
              plVar2 = (longlong *)*plVar5;
              local_490 = plVar5;
            } while (*(char *)(*plVar5 + 0x1d) == '\0');
          }
          else {
            do {
              plVar5 = (longlong *)plVar6[1];
              if (*(char *)((longlong)plVar5 + 0x1d) != '\0') break;
              bVar9 = plVar6 == (longlong *)plVar5[2];
              plVar6 = plVar5;
            } while (bVar9);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_1418f1a61;
      }
      if (local_4a8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar8 = *local_4a8;
      }
      if (lStack_4a0 == *(longlong *)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(void **)(lStack_4a0 + 0x20) != (void *)0x0) {
        FUN_1418f1530(*(void **)(lStack_4a0 + 0x20),1);
      }
      FUN_1418ef3d0((undefined8 *)(param_1 + 0x20),local_488,(longlong *)&local_4a8);
    }
  }
  return;
}




undefined8 FUN_1418f1bc0(longlong param_1,uint param_2,ulonglong param_3,longlong *param_4,int param_5)

{
  char cVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong **ppuVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  int local_res18 [2];
  ulonglong *local_68;
  undefined8 *local_60;
  ulonglong *local_58;
  ulonglong *puStack_50;
  ulonglong *local_48;
  ulonglong *puStack_40;
  
  lVar16 = ((ulonglong)param_2 << 0x20) + (param_3 & 0xffffffff);
  puVar14 = (undefined8 *)(*(undefined8 **)(param_1 + 0x50))[1];
  cVar1 = *(char *)((longlong)puVar14 + 0x29);
  puVar7 = *(undefined8 **)(param_1 + 0x50);
  while (cVar1 == '\0') {
    if ((longlong)puVar14[3] < lVar16) {
      puVar10 = (undefined8 *)puVar14[2];
      puVar14 = puVar7;
    }
    else {
      puVar10 = (undefined8 *)*puVar14;
    }
    puVar7 = puVar14;
    puVar14 = puVar10;
    cVar1 = *(char *)((longlong)puVar10 + 0x29);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x50);
  local_60 = puVar7;
  local_68 = *(ulonglong **)(param_1 + 0x20);
  if (*(ulonglong **)(param_1 + 0x20) == (ulonglong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar7 == puVar14) || (lVar16 < (longlong)puVar7[3])) {
    ppuVar12 = &local_58;
    puStack_50 = *(ulonglong **)(param_1 + 0x50);
    local_58 = *(ulonglong **)(param_1 + 0x20);
  }
  else {
    ppuVar12 = &local_68;
  }
  puVar2 = *ppuVar12;
  puVar3 = *(ulonglong **)(param_1 + 0x50);
  local_48 = puVar2;
  puStack_40 = ppuVar12[1];
  if ((puVar2 == (ulonglong *)0x0) || (puVar2 != *(ulonglong **)(param_1 + 0x20))) {
    _invalid_parameter_noinfo();
  }
  puVar8 = puStack_40;
  if (puStack_40 == puVar3) {
    return 0;
  }
  FUN_1418e30c0(param_4);
  uVar17 = 0;
  if (puVar2 == (ulonglong *)0x0) {
    _invalid_parameter_noinfo();
    uVar13 = uVar17;
  }
  else {
    uVar13 = *puVar2;
  }
  if (puVar8 == *(ulonglong **)(uVar13 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  puVar3 = *(ulonglong **)(puVar8[4] + 0x10);
  plVar4 = (longlong *)**(undefined8 **)(puVar8[4] + 0x40);
  do {
    do {
      while( true ) {
        while( true ) {
          plVar15 = plVar4;
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar13 = uVar17;
          }
          else {
            uVar13 = *puVar2;
          }
          if (puVar8 == *(ulonglong **)(uVar13 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          plVar4 = *(longlong **)(puVar8[4] + 0x40);
          if ((puVar3 == (ulonglong *)0x0) || (puVar3 != *(ulonglong **)(puVar8[4] + 0x10))) {
            _invalid_parameter_noinfo();
          }
          if (plVar15 == plVar4) {
            if (puVar2 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
            }
            else {
              uVar17 = *puVar2;
            }
            if (puVar8 == *(ulonglong **)(uVar17 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            return *(undefined8 *)(puVar8[4] + 0x48);
          }
          if (puVar3 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar13 = uVar17;
          }
          else {
            uVar13 = *puVar3;
          }
          if (plVar15 == *(longlong **)(uVar13 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          iVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_2,(int)plVar15[3]);
          local_res18[0] = iVar9;
          if (puVar3 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar13 = uVar17;
          }
          else {
            uVar13 = *puVar3;
          }
          if (plVar15 == *(longlong **)(uVar13 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (((int)plVar15[3] != param_5) && (iVar9 != 0)) {
            puVar5 = (ulonglong *)param_4[3];
            uVar13 = uVar17;
            if (puVar5 != (ulonglong *)0x0) {
              uVar13 = param_4[5] - (longlong)puVar5 >> 2;
            }
            puVar6 = (ulonglong *)param_4[4];
            if ((ulonglong)((longlong)puVar6 - (longlong)puVar5 >> 2) < uVar13) {
              *(int *)puVar6 = iVar9;
              param_4[4] = (longlong)((longlong)puVar6 + 4);
            }
            else {
              if (puVar6 < puVar5) {
                _invalid_parameter_noinfo();
              }
              local_58 = (ulonglong *)*param_4;
              puStack_50 = puVar6;
              local_48 = local_58;
              puStack_40 = puVar6;
              FUN_1418e3570(param_4,(longlong *)&local_68,(longlong *)&local_58,local_res18);
            }
          }
          if (puVar3 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar15 + 0x1d) == '\0') break;
          _invalid_parameter_noinfo();
          plVar4 = plVar15;
        }
        plVar4 = (longlong *)plVar15[2];
        if (*(char *)((longlong)plVar4 + 0x1d) != '\0') break;
        cVar1 = *(char *)(*plVar4 + 0x1d);
        plVar15 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar15 + 0x1d);
          plVar4 = plVar15;
          plVar15 = (longlong *)*plVar15;
        }
      }
      plVar4 = (longlong *)plVar15[1];
    } while (*(char *)((longlong)plVar4 + 0x1d) != '\0');
    do {
      plVar11 = plVar4;
      plVar4 = plVar11;
      if (plVar15 != (longlong *)plVar11[2]) break;
      plVar4 = (longlong *)plVar11[1];
      plVar15 = plVar11;
    } while (*(char *)((longlong)plVar4 + 0x1d) == '\0');
  } while( true );
}




undefined8 * FUN_1418f1ee0(undefined8 *param_1)

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
  lVar2 = FUN_1418ed830();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1418f1f60(undefined8 *param_1)

{
  *param_1 = team::CTeamService::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  FUN_1418f1ee0(param_1 + 4);
  FUN_1418f1430(param_1 + 0xc);
  return param_1;
}




void FUN_1418f1fb0(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_58;
  undefined8 *puStack_50;
  longlong local_48;
  undefined8 *puStack_40;
  longlong local_38 [2];
  
  *param_1 = team::CTeamService::vftable;
  plVar2 = (longlong *)param_1[4];
  plVar3 = *(longlong **)param_1[10];
  do {
    do {
      while( true ) {
        while( true ) {
          plVar7 = plVar3;
          plVar3 = (longlong *)param_1[10];
          if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[4])) {
            _invalid_parameter_noinfo();
          }
          if (plVar7 == plVar3) {
            cVar1 = *(char *)((longlong)*(longlong **)(param_1[10] + 8) + 0x29);
            plVar2 = *(longlong **)(param_1[10] + 8);
            while (cVar1 == '\0') {
              FUN_1418ed5d0(param_1 + 4,(longlong *)plVar2[2]);
              plVar3 = (longlong *)*plVar2;
              operator_delete(plVar2);
              plVar2 = plVar3;
              cVar1 = *(char *)((longlong)plVar3 + 0x29);
            }
            *(undefined8 *)(param_1[10] + 8) = param_1[10];
            param_1[0xb] = 0;
            *(undefined8 *)param_1[10] = param_1[10];
            *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
            cVar1 = *(char *)((longlong)*(longlong **)(param_1[0x12] + 8) + 0x29);
            plVar2 = *(longlong **)(param_1[0x12] + 8);
            while (cVar1 == '\0') {
              FUN_1418ed620(param_1 + 0xc,(longlong *)plVar2[2]);
              plVar3 = (longlong *)*plVar2;
              operator_delete(plVar2);
              plVar2 = plVar3;
              cVar1 = *(char *)((longlong)plVar3 + 0x29);
            }
            *(undefined8 *)(param_1[0x12] + 8) = param_1[0x12];
            param_1[0x13] = 0;
            *(undefined8 *)param_1[0x12] = param_1[0x12];
            *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
            if (param_1[2] != 0) {
              puVar5 = (undefined8 *)param_1[2];
              if (puVar5 != (undefined8 *)0x0) {
                (**(code **)*puVar5)(puVar5,1);
              }
              param_1[2] = 0;
              param_1[2] = 0;
            }
            plVar2 = param_1 + 0xc;
            puStack_40 = (undefined8 *)param_1[0x12];
            local_58 = *plVar2;
            puStack_50 = (undefined8 *)*puStack_40;
            local_48 = local_58;
            FUN_1418efee0(plVar2,local_38,&local_58,&local_48);
            operator_delete((void *)param_1[0x12]);
            param_1[0x12] = 0;
            param_1[0x13] = 0;
            operator_delete((void *)*plVar2);
            plVar2 = param_1 + 4;
            puStack_40 = (undefined8 *)param_1[10];
            local_58 = *plVar2;
            puStack_50 = (undefined8 *)*puStack_40;
            local_48 = local_58;
            FUN_1418f0100(plVar2,local_38,&local_58,&local_48);
            operator_delete((void *)param_1[10]);
            param_1[10] = 0;
            param_1[0xb] = 0;
            operator_delete((void *)*plVar2);
            return;
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
          if (plVar7[4] != 0) {
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
            pvVar4 = (void *)plVar7[4];
            if (pvVar4 != (void *)0x0) {
              plVar3 = (longlong *)((longlong)pvVar4 + 0x10);
              puStack_50 = *(undefined8 **)((longlong)pvVar4 + 0x40);
              local_58 = *plVar3;
              puStack_40 = (undefined8 *)*puStack_50;
              local_48 = local_58;
              FUN_1418e71a0(plVar3,local_38,&local_48,&local_58);
              operator_delete(*(void **)((longlong)pvVar4 + 0x40));
              *(undefined8 *)((longlong)pvVar4 + 0x40) = 0;
              *(undefined8 *)((longlong)pvVar4 + 0x48) = 0;
              operator_delete((void *)*plVar3);
              operator_delete(pvVar4);
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
      plVar6 = plVar3;
      plVar3 = plVar6;
      if (plVar7 != (longlong *)plVar6[2]) break;
      plVar3 = (longlong *)plVar6[1];
      plVar7 = plVar6;
    } while (*(char *)((longlong)plVar3 + 0x29) == '\0');
  } while( true );
}




undefined8 * FUN_1418f2340(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xa0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = team::CTeamService::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    FUN_1418f1ee0(puVar1 + 4);
    FUN_1418f1430(puVar1 + 0xc);
  }
  return puVar1;
}




void FUN_1418f23b0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_50 [3];
  void *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar4 = tq::TimeGet(0);
  if ((uint)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18)) <= uVar4 / 1000) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      log_InlineLogERROR(&DAT_1418f9318);
    }
    else {
      FUN_1418e76b0(*(longlong *)(param_1 + 0x10));
      plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x50);
      puVar2 = *(undefined8 **)(param_1 + 0x20);
      plVar8 = (longlong *)0x0;
      while( true ) {
        plVar6 = *(longlong **)(param_1 + 0x50);
        if ((puVar2 == (undefined8 *)0x0) || (puVar2 != *(undefined8 **)(param_1 + 0x20))) {
          _invalid_parameter_noinfo();
        }
        if (plVar7 == plVar6) break;
        if (puVar2 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar6 = plVar8;
        }
        else {
          plVar6 = (longlong *)*puVar2;
        }
        if (plVar7 == (longlong *)plVar6[6]) {
          _invalid_parameter_noinfo();
        }
        if (puVar2 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar6 = plVar8;
        }
        else {
          plVar6 = (longlong *)*puVar2;
        }
        if (plVar7 == (longlong *)plVar6[6]) {
          _invalid_parameter_noinfo();
        }
        iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),plVar7[3] >> 0x20,*(undefined4 *)(plVar7[4] + 8));
        if (iVar5 != 0) {
          plVar6 = operator_new(8);
          local_50[0] = plVar8;
          if (plVar6 != (longlong *)0x0) {
            *plVar6 = (longlong)local_50;
            local_50[0] = plVar6;
          }
          local_38 = (void *)0x0;
          local_30 = 0;
          local_28 = 0;
          if (puVar2 == (undefined8 *)0x0) {
            _invalid_parameter_noinfo();
            plVar6 = plVar8;
          }
          else {
            plVar6 = (longlong *)*puVar2;
          }
          if (plVar7 == (longlong *)plVar6[6]) {
            _invalid_parameter_noinfo();
          }
          if (puVar2 == (undefined8 *)0x0) {
            _invalid_parameter_noinfo();
            plVar6 = plVar8;
          }
          else {
            plVar6 = (longlong *)*puVar2;
          }
          if (plVar7 == (longlong *)plVar6[6]) {
            _invalid_parameter_noinfo();
          }
          if (puVar2 == (undefined8 *)0x0) {
            _invalid_parameter_noinfo();
            plVar6 = plVar8;
          }
          else {
            plVar6 = (longlong *)*puVar2;
          }
          if (plVar7 == (longlong *)plVar6[6]) {
            _invalid_parameter_noinfo();
          }
          FUN_1418f1bc0(param_1,(uint)((ulonglong)plVar7[3] >> 0x20),(ulonglong)*(uint *)(plVar7 + 3),(longlong *)local_50,*(int *)(plVar7[4] + 8));
          (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),iVar5,local_50);
          if (local_38 != (void *)0x0) {
            operator_delete(local_38);
          }
          local_38 = (void *)0x0;
          local_30 = 0;
          local_28 = 0;
          operator_delete(local_50[0]);
        }
        if (puVar2 == (undefined8 *)0x0) {
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
            plVar3 = (longlong *)plVar7[1];
            plVar6 = plVar7;
            while ((plVar7 = plVar3, cVar1 == '\0' && (plVar6 == (longlong *)plVar7[2]))) {
              cVar1 = *(char *)(plVar7[1] + 0x29);
              plVar3 = (longlong *)plVar7[1];
              plVar6 = plVar7;
            }
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
      }
    }
  }
  return;
}




ulonglong FUN_1418f2650(longlong param_1,uint param_2,uint param_3,longlong param_4,int param_5)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 extraout_RAX_00;
  longlong *local_48 [3];
  void *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_4 == 0) {
    log_InlineLogERROR(&DAT_1418f9318);
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    plVar2 = operator_new(8);
    local_48[0] = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)local_48;
      local_48[0] = plVar2;
    }
    local_30 = (void *)0x0;
    local_28 = 0;
    local_20 = 0;
    FUN_1418f1bc0(param_1,param_2,(ulonglong)param_3,(longlong *)local_48,param_5);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),local_48,param_4);
    if (local_30 != (void *)0x0) {
      operator_delete(local_30);
    }
    local_30 = (void *)0x0;
    local_28 = 0;
    local_20 = 0;
    operator_delete(local_48[0]);
    uVar1 = CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
  }
  return uVar1;
}




undefined8 FUN_1418f2760(longlong param_1,uint param_2,uint param_3,undefined8 param_4,int param_5)

{
  longlong *plVar1;
  undefined8 extraout_RAX;
  longlong *local_40 [3];
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  plVar1 = operator_new(8);
  local_40[0] = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)local_40;
    local_40[0] = plVar1;
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = 0;
  FUN_1418f1bc0(param_1,param_2,(ulonglong)param_3,(longlong *)local_40,param_5);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),local_40,param_4);
  if (local_28 != (void *)0x0) {
    operator_delete(local_28);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = 0;
  operator_delete(local_40[0]);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}




undefined8 * FUN_1418f2850(undefined8 *param_1,uint param_2)

{
  FUN_1418f1fb0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1418f2880(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  uint *puVar1;
  uint *puVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  bool bVar12;
  uint local_res20 [2];
  uint *local_980;
  uint local_978;
  uint *local_968;
  uint *puStack_960;
  longlong *local_958;
  uint *puStack_950;
  int local_948;
  uint *local_940 [3];
  int *local_928;
  int *local_920;
  undefined8 local_918;
  longlong *local_910;
  uint local_908;
  undefined4 uStack_904;
  uint *local_900 [3];
  uint *local_8e8;
  uint local_8e0;
  uint *local_8d8;
  uint *local_8d0;
  longlong *local_8c8;
  uint *puStack_8c0;
  uint *local_8b8;
  uint *local_8a8;
  longlong *local_898;
  undefined8 local_888;
  uint *local_878;
  uint *puStack_870;
  longlong *local_868;
  CMsg local_858 [1040];
  CMsg local_448 [1040];
  
  local_888 = 0xfffffffffffffffe;
  if (param_3 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (param_5 == 0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if (((param_2 != 0) && (param_2 != 1)) && (param_2 != 2)) {
    return;
  }
  bVar12 = false;
  local_978 = 0;
  local_res20[0] = param_4;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_3,param_4);
  local_958 = (longlong *)((ulonglong)param_3 << 0x20);
  local_968 = (uint *)CONCAT44(param_3,param_5);
  local_948 = iVar5;
  FUN_1418ef790((longlong *)(param_1 + 0x20),(longlong *)&local_910,(longlong *)&local_968);
  plVar3 = local_910;
  local_980 = *(uint **)(param_1 + 0x50);
  local_868 = *(longlong **)(param_1 + 0x20);
  if ((local_910 == (longlong *)0x0) || (local_910 != local_868)) {
    _invalid_parameter_noinfo();
  }
  puVar8 = (uint *)CONCAT44(uStack_904,local_908);
  if (puVar8 == local_980) {
    if (iVar5 == 0) {
      return;
    }
    puVar8 = operator_new(0x50);
    local_980 = puVar8;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)0x0;
    }
    else {
      FUN_1418e8800((undefined8 *)(puVar8 + 4));
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      FUN_1418e6780((longlong)(puVar8 + 4));
    }
    *puVar8 = param_5;
    puVar8[1] = param_7;
    puVar8[2] = param_6;
    FUN_1418e7bf0((longlong *)(puVar8 + 4),(longlong *)local_900,local_res20);
    local_8d8 = local_968;
    local_8d0 = puVar8;
    FUN_1418ef220((longlong *)(param_1 + 0x20),(longlong *)local_900,(longlong *)&local_8d8);
    local_980 = (uint *)((longlong)local_958 + (ulonglong)param_4);
    FUN_1418efdd0((longlong *)(param_1 + 0x60),(longlong *)&local_958,(longlong *)&local_980);
    plVar3 = local_958;
    local_968 = *(uint **)(param_1 + 0x90);
    local_898 = *(longlong **)(param_1 + 0x60);
    if ((local_958 == (longlong *)0x0) || (local_958 != local_898)) {
      _invalid_parameter_noinfo();
    }
    puVar1 = puStack_950;
    if (puStack_950 != local_968) {
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar3;
      }
      if (puVar1 == *(uint **)(lVar11 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CTeamService::OnOSUserLogin2. New Server[%u] Team[%u] User[%d] Old Team[%u]");
      local_8c8 = local_958;
      puStack_8c0 = puStack_950;
      FUN_1418efa10((undefined8 *)(param_1 + 0x60),local_900,(longlong *)&local_8c8);
    }
    local_8e8 = local_980;
    local_8e0 = param_5;
    FUN_1418ef860((longlong *)(param_1 + 0x60),(longlong *)local_900,(longlong *)&local_8e8);
  }
  else {
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar3;
    }
    if (puVar8 == *(uint **)(lVar11 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar8 = *(uint **)(puVar8 + 8);
    if (puVar8 == (uint *)0x0) {
      log_InlineLogERROR("CTeamService::OnOSUserLogin. OSTeam is NULL by Find m_mapOSTeam, Server[%u] Team[%u] User[%d]");
      return;
    }
    bVar12 = param_6 != puVar8[2];
    if (bVar12) {
      local_978 = puVar8[2];
      puVar8[2] = param_6;
    }
    puVar8[1] = param_7;
    if (iVar5 == 0) goto LAB_1418f2d00;
    FUN_1418e7bf0((longlong *)(puVar8 + 4),(longlong *)local_900,local_res20);
    local_958 = (longlong *)((longlong)local_958 + (ulonglong)param_4);
    FUN_1418efdd0((longlong *)(param_1 + 0x60),(longlong *)&local_968,(longlong *)&local_958);
    puVar1 = local_968;
    local_980 = *(uint **)(param_1 + 0x90);
    local_8a8 = *(uint **)(param_1 + 0x60);
    if ((local_968 == (uint *)0x0) || (local_968 != local_8a8)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = puStack_960;
    if (puStack_960 != local_980) {
      if (puVar1 == (uint *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)puVar1;
      }
      if (puVar2 == *(uint **)(lVar11 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CTeamService::OnOSUserLogin1. New Server[%u] Team[%u] User[%d] Old Team[%u]");
      local_878 = local_968;
      puStack_870 = puStack_960;
      FUN_1418efa10((undefined8 *)(param_1 + 0x60),local_900,(longlong *)&local_878);
    }
    local_910 = local_958;
    local_908 = param_5;
    FUN_1418ef860((longlong *)(param_1 + 0x60),(longlong *)local_900,(longlong *)&local_910);
  }
  iVar5 = local_948;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),local_948,param_5);
  if (param_6 == param_4) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),iVar5,3);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),iVar5);
LAB_1418f2d00:
  if (((bVar12) && (local_978 != 0)) && (iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_3), iVar6 != 0)) {
    FUN_1418f3440(local_858);
    uVar9 = FUN_1418f3530((longlong)local_858,iVar6,0,0);
    if ((char)uVar9 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),iVar6,local_858,1);
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))(*(longlong **)(param_1 + 8),iVar6,3);
    FUN_1418f3490((undefined8 *)local_858);
  }
  FUN_1418f0e80(param_1,param_3,param_5,param_4);
  if ((iVar5 != 0) && (1 < *(ulonglong *)(puVar8 + 0x12))) {
    FUN_1418f3440(local_448);
    uVar9 = FUN_1418f3590((longlong)local_448,iVar5,param_4,param_5);
    if ((char)uVar9 != '\0') {
      FUN_1418f2760(param_1,param_3,param_5,local_448,param_4);
    }
    local_980 = operator_new(8);
    if (local_980 == (uint *)0x0) {
      local_940[0] = (uint *)0x0;
    }
    else {
      *(uint ***)local_980 = local_940;
      local_940[0] = local_980;
    }
    local_928 = (int *)0x0;
    local_920 = (int *)0x0;
    local_918 = 0;
    local_968 = local_980;
    FUN_1418f1bc0(param_1,param_3,(ulonglong)param_5,(longlong *)local_940,param_4);
    piVar10 = local_928;
    local_8b8 = (uint *)0x0;
    if (local_920 < local_928) {
      _invalid_parameter_noinfo();
    }
    puVar8 = local_940[0];
    local_8b8 = local_940[0];
    while( true ) {
      piVar4 = local_920;
      local_900[0] = (uint *)0x0;
      if (local_920 < local_928) {
        _invalid_parameter_noinfo();
      }
      local_900[0] = local_940[0];
      if ((puVar8 == (uint *)0x0) || (puVar8 != local_940[0])) {
        _invalid_parameter_noinfo();
      }
      if (piVar10 == piVar4) break;
      if (puVar8 == (uint *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)puVar8;
      }
      if (*(int **)(lVar11 + 0x20) <= piVar10) {
        _invalid_parameter_noinfo();
      }
      iVar6 = *piVar10;
      iVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))(*(longlong **)(param_1 + 8),iVar6);
      if ((iVar7 != 0) && (iVar6 != 0)) {
        FUN_1418f3440(local_858);
        uVar9 = FUN_1418f3590((longlong)local_858,iVar6,iVar7,param_5);
        if ((char)uVar9 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),iVar5,local_858);
        }
        FUN_1418f3490((undefined8 *)local_858);
      }
      if (puVar8 == (uint *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)puVar8;
      }
      if (*(int **)(lVar11 + 0x20) <= piVar10) {
        _invalid_parameter_noinfo();
      }
      piVar10 = piVar10 + 1;
    }
    if (local_928 != (int *)0x0) {
      operator_delete(local_928);
    }
    local_928 = (int *)0x0;
    local_920 = (int *)0x0;
    local_918 = 0;
    operator_delete(local_940[0]);
    FUN_1418f3490((undefined8 *)local_448);
  }
  return;
}




void FUN_1418f3010(longlong *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,uint param_7,char param_8)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint local_res20 [2];
  longlong local_4a0;
  longlong *local_498;
  longlong lStack_490;
  longlong local_488;
  longlong local_480;
  longlong *local_478 [2];
  undefined8 local_468;
  longlong *local_458;
  longlong lStack_450;
  CMsg local_448 [1040];
  
  local_468 = 0xfffffffffffffffe;
  uVar9 = (ulonglong)param_4;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    local_4a0 = (ulonglong)param_2 << 0x20;
    local_488 = CONCAT44(param_2,param_3);
    local_res20[0] = param_4;
    FUN_1418ef790(param_1 + 4,(longlong *)&local_498,&local_488);
    plVar4 = local_498;
    lVar8 = param_1[10];
    local_478[0] = (longlong *)param_1[4];
    if ((local_498 == (longlong *)0x0) || (local_498 != local_478[0])) {
      _invalid_parameter_noinfo();
    }
    lVar5 = lStack_490;
    if (lStack_490 == lVar8) {
      local_4a0 = uVar9 + local_4a0;
      FUN_1418f10e0(param_1 + 0xc,&local_4a0);
    }
    else {
      if (plVar4 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar4;
      }
      if (lVar5 == *(longlong *)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar2 = *(uint **)(lVar5 + 0x20);
      if (puVar2 != (uint *)0x0) {
        if ((int)puVar2[1] < 2) {
          (**(code **)(*param_1 + 0xe0))(param_1,param_2,param_3);
        }
        else {
          bVar3 = false;
          uVar1 = puVar2[2];
          if ((param_6 != 0) && (param_6 != uVar1)) {
            puVar2[2] = param_6;
            bVar3 = true;
          }
          FUN_1418ef010((longlong *)(puVar2 + 4),local_res20);
          if (param_5 == 0) {
            param_5 = (**(code **)(*(longlong *)param_1[1] + 0x108))((longlong *)param_1[1],param_2);
          }
          if (param_8 == '\0') {
            FUN_1418f3440(local_448);
            if (param_5 != 0) {
              uVar7 = FUN_1418f3530((longlong)local_448,param_5,0,0);
              if ((char)uVar7 != '\0') {
                (**(code **)(*(longlong *)param_1[1] + 0x78))((longlong *)param_1[1],param_5,local_448,1);
              }
              if (param_4 == uVar1) {
                (**(code **)(*(longlong *)param_1[1] + 0xf0))((longlong *)param_1[1],param_5,3);
              }
              (**(code **)(*(longlong *)param_1[1] + 0x70))((longlong *)param_1[1],param_5,0);
            }
            FUN_1418f3490((undefined8 *)local_448);
          }
          else {
            FUN_1418f3440(local_448);
            if ((param_5 != 0) && (uVar7 = FUN_1418f35f0((longlong)local_448,param_5), (char)uVar7 != '\0')) {
              FUN_1418f2760((longlong)param_1,param_2,*puVar2,local_448,param_4);
            }
            FUN_1418f3490((undefined8 *)local_448);
          }
          iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x108))((longlong *)param_1[1],param_2,param_6);
          if (iVar6 != 0) {
            FUN_1418f3440(local_448);
            if (plVar4 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar8 = 0;
            }
            else {
              lVar8 = *plVar4;
            }
            lVar5 = lStack_490;
            if (lStack_490 == *(longlong *)(lVar8 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            uVar7 = FUN_1418f3530((longlong)local_448,iVar6,param_6,*(undefined4 *)(*(longlong *)(lVar5 + 0x20) + 4));
            if ((char)uVar7 != '\0') {
              (**(code **)(*(longlong *)param_1[1] + 0x78))((longlong *)param_1[1],iVar6,local_448,1);
            }
            if (bVar3) {
              (**(code **)(*(longlong *)param_1[1] + 0xe8))((longlong *)param_1[1],iVar6,3);
            }
            FUN_1418f3490((undefined8 *)local_448);
          }
          if (*(longlong *)(puVar2 + 0x12) == 0) {
            FUN_1418f1530(puVar2,1);
            local_480 = uVar9 + local_4a0;
            FUN_1418f10e0(param_1 + 0xc,&local_480);
            local_458 = local_498;
            lStack_450 = lStack_490;
            FUN_1418ef3d0(param_1 + 4,local_478,(longlong *)&local_458);
          }
          else {
            local_498 = (longlong *)(uVar9 + local_4a0);
            FUN_1418f10e0(param_1 + 0xc,(longlong *)&local_498);
            if (param_7 != 0) {
              puVar2[1] = param_7;
            }
          }
        }
      }
    }
  }
  return;
}




CMsg * FUN_1418f33a0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_1418f33d0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_1418f33e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f33e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_1418f33f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f33f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_1418f3400(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001418f3407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_1418f3410(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1418f3440(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team::CMsgAutoGroup::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1418f3490(undefined8 *param_1)

{
  *param_1 = team::CMsgAutoGroup::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_1418f34c0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x7fd;
}




undefined8 FUN_1418f34f0(longlong param_1,undefined2 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x7fd;
  **(undefined2 **)(param_1 + 0x408) = 0x14;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined1 *)(lVar1 + 8) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8 FUN_1418f3530(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x7fd;
  **(undefined2 **)(param_1 + 0x408) = 0x14;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_3;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 0x10) = param_4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8 FUN_1418f3590(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x7fd;
  **(undefined2 **)(param_1 + 0x408) = 0x14;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = 3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_3;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 0xc) = param_4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8 FUN_1418f35f0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x7fd;
  **(undefined2 **)(param_1 + 0x408) = 0x14;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = 4;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 8) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




void FUN_1418f3640(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1418f9318);
  }
  else {
    (**(code **)(*param_3 + 200))(param_3,param_2,param_1);
  }
  return;
}




undefined8 * FUN_1418f36a0(undefined8 *param_1,byte param_2)

{
  *param_1 = team::CMsgAutoGroup::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1418f36f0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team::CMsgLog::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1418f3740(undefined8 *param_1)

{
  *param_1 = team::CMsgLog::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_1418f3770(CMsg *param_1,char *param_2,ushort param_3)

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




void FUN_1418f37d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  if (*(int *)(*(longlong *)(param_1 + 0x408) + 8) == 1) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1418f9318);
    }
    else {
      (**(code **)(*param_3 + 0xc0))(param_3);
    }
  }
  return;
}




undefined8 * FUN_1418f3830(undefined8 *param_1,byte param_2)

{
  *param_1 = team::CMsgLog::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1418f3880(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team::CMsgTeam::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1418f38d0(undefined8 *param_1)

{
  *param_1 = team::CMsgTeam::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_1418f3900(CMsg *param_1,undefined4 param_2,undefined2 param_3)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  **(undefined2 **)(param_1 + 0x408) = 0xc;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x3ff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 4) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




bool FUN_1418f3970(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ff;
}




void FUN_1418f39a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1418f9318);
  }
  else {
    (**(code **)(*param_3 + 0xb8))(param_3,param_2,param_1,0,0,0,0xfffffffffffffffe);
  }
  return;
}




undefined8 * FUN_1418f3a10(undefined8 *param_1,byte param_2)

{
  *param_1 = team::CMsgTeam::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1418f3a60(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team::CMsgTeamMember::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1418f3ab0(undefined8 *param_1)

{
  *param_1 = team::CMsgTeamMember::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_1418f3ae0(CMsg *param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  tq::CMsg::Init(param_1);
  **(undefined2 **)(param_1 + 0x408) = 0x94;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x402;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 5) = 1;
  lVar2 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar2 + 8) = *param_3;
  *(undefined4 *)(lVar2 + 0xc) = param_3[1];
  *(undefined4 *)(lVar2 + 0x10) = param_3[2];
  *(undefined4 *)(lVar2 + 0x14) = param_3[3];
  *(undefined4 *)(lVar2 + 0x18) = param_3[4];
  *(undefined4 *)(lVar2 + 0x1c) = param_3[5];
  uVar1 = param_3[6];
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}




undefined8 * FUN_1418f3b80(undefined8 *param_1,byte param_2)

{
  *param_1 = team::CMsgTeamMember::vftable;
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
  
  local_res10 = _decode_pointer(DAT_1419038d0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_1419038d0);
    local_res18[0] = _decode_pointer(DAT_1419038c8);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_1419038d0 = _encode_pointer(local_res10);
    DAT_1419038c8 = _encode_pointer(local_res18[0]);
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




undefined8 FUN_1418f3da8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  if ((_StackCookie == DAT_141903300) && ((short)(_StackCookie >> 0x30) == 0)) {
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




bool FUN_1418f3f0c(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_1419038c8 = _encode_pointer(puVar1);
  DAT_1419038d0 = DAT_1419038c8;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_1418f4584();
    atexit(FUN_1418f45bc);
    atexit((_func_5014 *)&LAB_1418f4578);
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
    if (DAT_14190332c < 1) {
      return 0;
    }
    DAT_14190332c = DAT_14190332c + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_1419038b8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1419038b8;
        pvVar3 = DAT_1419038b8;
      }
      DAT_1419038b8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1418f3fe6;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1418f3fe6:
    if (DAT_1419038b0 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_1419038d0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_1419038c8);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_1419038d0);
            plVar12 = (longlong *)_decode_pointer(DAT_1419038c8);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_1419038c8 = _encoded_null();
        DAT_1419038d0 = DAT_1419038c8;
      }
      DAT_1419038b0 = 0;
      if (!bVar2) {
        LOCK();
        DAT_1419038b8 = (void *)0x0;
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
      bVar13 = DAT_1419038b8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1419038b8;
        pvVar3 = DAT_1419038b8;
      }
      DAT_1419038b8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1418f410f;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1418f410f:
    if (DAT_1419038b0 == 0) {
      DAT_1419038b0 = 1;
      iVar4 = _initterm_e(&DAT_1418f9210,&DAT_1418f9220);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_1418f9200,&DAT_1418f9208);
      DAT_1419038b0 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_1419038b8 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_1419038c0 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_1419038c0), BVar5 != 0)) {
      (*DAT_1419038c0)(param_1,2,param_3);
    }
    DAT_14190332c = DAT_14190332c + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x0001418f4288) */
/* WARNING: Removing unreachable block (ram,0x0001418f421f) */
/* WARNING: Removing unreachable block (ram,0x0001418f42c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_14190332c == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_141903310 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_141903310 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_1418e1420();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_1418e1420();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_141903310 = 0xffffffff;
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




undefined8 FUN_1418f4340(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_1419033d0);
  local_30 = DAT_1419034c8;
  local_38 = RtlLookupFunctionEntry(DAT_1419034c8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_141903468 = local_res8;
    DAT_1419034c8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_1419033d0,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_141903340 = DAT_1419034c8;
  _DAT_141903450 = local_res8[0];
  _DAT_141903330 = 0xc0000409;
  _DAT_141903334 = 1;
  local_20 = DAT_141903300;
  local_18 = DAT_141903308;
  DAT_1419033c8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1418fbe80);
  if (DAT_1419033c8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_1418f4584(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1418fc728; puVar1 < &DAT_1418fc728; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_1418f45bc(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1418fc738; puVar1 < &DAT_1418fc738; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_1418e0000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_1418e0000);
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
  if (DAT_141903300 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_141903300 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_141903300 == 0x2b992ddfa232) {
      DAT_141903300 = 0x2b992ddfa233;
    }
  }
  DAT_141903308 = ~DAT_141903300;
  return;
}




void Unwind_1418f4810(undefined8 param_1,longlong param_2)

{
  FUN_1418e1050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4830(undefined8 param_1,longlong param_2)

{
  FUN_1418f3740((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1418f4850(undefined8 param_1,longlong param_2)

{
  FUN_1418f38d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_1418f4870(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x840));
  return;
}




undefined * Catch_1418f4890(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1418e1131;
}




void Unwind_1418f48d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e1050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f48f0(undefined8 param_1,longlong param_2)

{
  FUN_1418f3740((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1418f4910(undefined8 param_1,longlong param_2)

{
  FUN_1418f38d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_1418f4930(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x840));
  return;
}




undefined * Catch_1418f4950(void)

{
  log_InlineLogCATCH_ERROR("team::pMsg->Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return &DAT_1418e1532;
}




void Unwind_1418f49a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60));
  return;
}




undefined8 Catch_1418f49c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1418e15db;
}




void Unwind_1418f4a00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4a20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4a40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4a60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4a80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f4aa0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4ac0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f4ae0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4b00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f4b20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4b40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f4b60(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4b80(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4ba0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4bc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f4be0(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4c00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4c20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f4c40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_1418f4c60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1418f4c80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1418f4ca0(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1418f4cc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4ce0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f4d00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4d20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f4d40(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4d60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f4d80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f4da0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4dc0(void)

{
  DAT_141903328 = DAT_141903328 & 0xfffffffe;
  return;
}




void Unwind_1418f4de0(void)

{
  DAT_141903328 = DAT_141903328 & 0xfffffffe;
  return;
}




void Unwind_1418f4e00(void)

{
  DAT_141903328 = DAT_141903328 & 0xfffffffe;
  return;
}




void Unwind_1418f4e20(void)

{
  DAT_141903328 = DAT_141903328 & 0xfffffffe;
  return;
}




void Unwind_1418f4e40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f4e60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f4e80(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4ea0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f4ec0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4ee0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4f00(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f4f20(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4f40(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_1418f4f60(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4f80(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4fa0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f4fc0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f4fe0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5000(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f5020(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1418f5040(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1418f5060(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_1418f5080(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_1418f50a0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f50c0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1418f50e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1418f5110(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1418f5130(void)

{
  DAT_141903328 = DAT_141903328 & 0xfffffffe;
  return;
}




void Unwind_1418f5150(undefined8 param_1,longlong param_2)

{
  FUN_1418e2190(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_1418f5170(void)

{
  DAT_141903328 = DAT_141903328 & 0xfffffffe;
  return;
}




void Unwind_1418f5190(undefined8 param_1,longlong param_2)

{
  FUN_1418e2190(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_1418f51b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f51d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f51f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5210(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5230(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5250(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f5270(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5290(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f52b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f52d0(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f52f0(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_1418f5310(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f5330(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f5350(undefined8 param_1,longlong param_2)

{
  FUN_1418f38d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f5370(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f5390(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f53b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f53d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f53f0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f5410(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5430(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5450(void)

{
  FUN_1418e1750();
  return;
}




void Catch_1418f5470(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1418f54a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1418f54d0(void)

{
  FUN_1418e1750();
  return;
}




void Catch_1418f54f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1418f5520(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1418f5550(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f5570(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5590(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f55b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f55d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f55f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5610(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5630(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5650(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418f5670(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5690(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1418f56b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418f56d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f56f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f5710(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5730(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5750(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418f5770(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418f5790(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418f57b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418f57d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418f57f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1418f5810(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5830(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f5850(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5870(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5890(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f58b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f58d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f58f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5910(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5930(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5950(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5970(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5990(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f59b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1418f59d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418f59f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418f5a10(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418f5a30(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f5a50(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5a70(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5a90(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5ab0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f5ad0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5af0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5b10(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5b30(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f5b60(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5b80(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5ba0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5bc0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5be0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5c00(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f5c30(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5c50(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5c70(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5c90(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5cb0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f5cd0(undefined8 param_1,longlong param_2)

{
  FUN_1418e69f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5cf0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5d10(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5d30(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5d50(undefined8 param_1,longlong param_2)

{
  FUN_1418e6a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5d70(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5d90(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5db0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5dd0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f5df0(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5e10(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5e30(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5e50(undefined8 param_1,longlong param_2)

{
  FUN_1418e69f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5e70(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f5e90(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5eb0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5ed0(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5ef0(undefined8 param_1,longlong param_2)

{
  FUN_1418e6a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5f10(undefined8 param_1,longlong param_2)

{
  FUN_1418e7da0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5f30(undefined8 param_1,longlong param_2)

{
  FUN_1418e69f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5f50(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5f70(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5f90(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5fb0(undefined8 param_1,longlong param_2)

{
  FUN_1418e7dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5fd0(undefined8 param_1,longlong param_2)

{
  FUN_1418e6a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f5ff0(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6010(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6030(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6050(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f6070(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6090(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f60b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f60d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e69f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f60f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e7da0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6110(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f6130(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6150(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6170(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6190(undefined8 param_1,longlong param_2)

{
  FUN_1418e6a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f61b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e7dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f61d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8520(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f61f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e7da0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6210(undefined8 param_1,longlong param_2)

{
  FUN_1418e69f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6230(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6250(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6270(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6290(undefined8 param_1,longlong param_2)

{
  FUN_1418e8680((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f62b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8680((longlong *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}




void Unwind_1418f62d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8520(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_1418f62f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e7da0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1418f6310(undefined8 param_1,longlong param_2)

{
  FUN_1418e69f0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1418f6330(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1418f6350(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1418f6370(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1418f6390(undefined8 param_1,longlong param_2)

{
  FUN_1418e8520(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f63b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e7da0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f63d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e69f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f63f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6410(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6430(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6450(undefined8 param_1,longlong param_2)

{
  FUN_1418e8550(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6470(undefined8 param_1,longlong param_2)

{
  FUN_1418e7dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6490(undefined8 param_1,longlong param_2)

{
  FUN_1418e6a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f64b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f64d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f64f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6510(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f6530(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6550(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6570(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6590(undefined8 param_1,longlong param_2)

{
  FUN_1418e69f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f65b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e7da0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f65d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8520(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f65f0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f6610(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6630(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6650(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6670(undefined8 param_1,longlong param_2)

{
  FUN_1418e6a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6690(undefined8 param_1,longlong param_2)

{
  FUN_1418e7dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f66b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8550(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f66d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8680((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f66f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8680((longlong *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}




void Unwind_1418f6710(undefined8 param_1,longlong param_2)

{
  FUN_1418e8680((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f6730(undefined8 param_1,longlong param_2)

{
  FUN_1418e8680((longlong *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}




void Unwind_1418f6750(undefined8 param_1,longlong param_2)

{
  FUN_1418e8520(*(longlong **)(param_2 + 0x50));
  return;
}




void Unwind_1418f6770(undefined8 param_1,longlong param_2)

{
  FUN_1418e7da0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_1418f6790(undefined8 param_1,longlong param_2)

{
  FUN_1418e69f0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_1418f67b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_1418f67d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_1418f67f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_1418f6810(undefined8 param_1,longlong param_2)

{
  FUN_1418e8520(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6830(undefined8 param_1,longlong param_2)

{
  FUN_1418e7da0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6850(undefined8 param_1,longlong param_2)

{
  FUN_1418e69f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6870(undefined8 param_1,longlong param_2)

{
  FUN_1418e5980(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f6890(undefined8 param_1,longlong param_2)

{
  FUN_1418e5430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f68b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e4d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f68d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_1418f68f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8680((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1418f6910(undefined8 param_1,longlong param_2)

{
  FUN_1418e8680((longlong *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}




void Unwind_1418f6930(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f6950(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1418f6970(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1418f6990(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1418f69b0(undefined8 param_1,longlong param_2)

{
  FUN_1418f3ab0((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1418f69d0(undefined8 param_1,longlong param_2)

{
  FUN_1418f3ab0((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1418f69f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1418f6a10(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1418f6a30(undefined8 param_1,longlong param_2)

{
  FUN_1418e8750((longlong *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6a50(undefined8 param_1,longlong param_2)

{
  FUN_1418e8550((longlong *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6a70(undefined8 param_1,longlong param_2)

{
  FUN_1418e7dc0((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6a90(undefined8 param_1,longlong param_2)

{
  FUN_1418e6a10((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6ab0(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6ad0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6af0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6b10(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f6b30(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1418f6b50(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1418f6b70(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1418f6b90(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1418f6bb0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1418f6bd0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8550((longlong *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6bf0(undefined8 param_1,longlong param_2)

{
  FUN_1418e7dc0((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6c10(undefined8 param_1,longlong param_2)

{
  FUN_1418e6a10((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6c30(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6c50(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1418f6c70(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x90));
  return;
}




undefined8 Catch_1418f6c90(void)

{
  log_InlineLogCATCH_ERROR("CTeamMgr::SendOtherServer. Action[%d] Team[%u] OrigUser[%u] @%s,%d");
  return 0x1418e9324;
}




void Unwind_1418f6cf0(undefined8 param_1,longlong param_2)

{
  FUN_1418f38d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f6d10(undefined8 param_1,longlong param_2)

{
  FUN_1418f38d0((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_1418f6d30(undefined8 param_1,longlong param_2)

{
  FUN_1418f38d0((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_1418f6d50(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f6d70(undefined8 param_1,longlong param_2)

{
  FUN_1418f38d0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_1418f6d90(void)

{
  log_InlineLogCATCH_ERROR("CTeamService::ProcessMsgTeam -> OS Team. Action[%d] Player[%u] @%s,%d");
  return &DAT_1418ea368;
}




undefined * Catch_1418f6de0(void)

{
  log_InlineLogCATCH_ERROR("MsgTeam apply join Queryobj by ID crash. @%s,%d");
  return &DAT_1418ea48b;
}




undefined * Catch_1418f6e20(void)

{
  log_InlineLogCATCH_ERROR("CMsgTeam apply join Queryobj by leader id crash. @%s,%d");
  return &DAT_1418ea5f1;
}




undefined * Catch_1418f6e60(void)

{
  log_InlineLogCATCH_ERROR("CMsgTeam proc accept join Queryobj by idtarget crash. @%s,%d");
  return &DAT_1418ea85b;
}




undefined * Catch_1418f6ea0(void)

{
  log_InlineLogCATCH_ERROR("CMsgTeam proc invite queryobj by id crash. @%s,%d");
  return &DAT_1418eaaa1;
}




undefined * Catch_1418f6ee0(void)

{
  log_InlineLogCATCH_ERROR("CMsgTeam proc accept invite queryobj by id crash. @%s,%d");
  return &DAT_1418eac1e;
}




void Unwind_1418f6f20(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1418f6f40(undefined8 param_1,longlong param_2)

{
  FUN_1418f38d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f6f60(undefined8 param_1,longlong param_2)

{
  FUN_1418f38d0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_1418f6f80(void)

{
  log_InlineLogCATCH_ERROR("CTeamService::ProcessOSSyncMsg. SubAction[%u] @%s,%d");
  return 0x1418ec28e;
}




void Unwind_1418f6fc0(undefined8 param_1,longlong param_2)

{
  FUN_1418f38d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f6fe0(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_1418f7000(void)

{
  log_InlineLogCATCH_ERROR("CTeamService::ProcessOSMsgAutoGroup -> ProcessMsgAutoGroup @%s,%d");
  return 0x1418ec3dd;
}




void Unwind_1418f7040(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f7060(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f7080(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f70a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1418f70c0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f70e0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f7100(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7120(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7140(void)

{
  FUN_1418e1750();
  return;
}




void Catch_1418f7160(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1418f7190(void)

{
  FUN_1418e1750();
  return;
}




void Catch_1418f71b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1418f71e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1418f7210(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1418f7240(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f7260(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7280(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f72a0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f72c0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f72e0(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7300(undefined8 param_1,longlong param_2)

{
  FUN_1418ed5b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7320(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7340(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f7360(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7380(undefined8 param_1,longlong param_2)

{
  FUN_1418ed590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f73a0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f73c0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f73e0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed5b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7400(undefined8 param_1,longlong param_2)

{
  FUN_1418edb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7420(undefined8 param_1,longlong param_2)

{
  FUN_1418ed590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7440(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7460(undefined8 param_1,longlong param_2)

{
  FUN_1418edb80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7480(undefined8 param_1,longlong param_2)

{
  FUN_1418ed5b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f74a0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f74c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1418f74e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418f7500(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418f7520(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418f7540(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1418f7560(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418f7580(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418f75a0(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1418f75c0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f75e0(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7600(undefined8 param_1,longlong param_2)

{
  FUN_1418ed590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7620(undefined8 param_1,longlong param_2)

{
  FUN_1418edb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7640(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f7660(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7680(undefined8 param_1,longlong param_2)

{
  FUN_1418ed5b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f76a0(undefined8 param_1,longlong param_2)

{
  FUN_1418edb80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f76c0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f76e0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f7700(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f7720(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f7740(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f7760(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f7780(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418f77a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418f77c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1418f77e0(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418f7800(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1418f7820(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418f7840(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1418f7860(undefined8 param_1,longlong param_2)

{
  FUN_1418e17b0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1418f7880(undefined8 param_1,longlong param_2)

{
  FUN_1418ee120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f78a0(undefined8 param_1,longlong param_2)

{
  FUN_1418edb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f78c0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f78e0(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7900(undefined8 param_1,longlong param_2)

{
  FUN_1418ee140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7920(undefined8 param_1,longlong param_2)

{
  FUN_1418edb80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7940(undefined8 param_1,longlong param_2)

{
  FUN_1418ed5b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7960(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7980(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f79a0(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f79c0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f79e0(undefined8 param_1,longlong param_2)

{
  FUN_1418edb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7a00(undefined8 param_1,longlong param_2)

{
  FUN_1418ee120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7a20(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f7a40(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7a60(undefined8 param_1,longlong param_2)

{
  FUN_1418ed5b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7a80(undefined8 param_1,longlong param_2)

{
  FUN_1418edb80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7aa0(undefined8 param_1,longlong param_2)

{
  FUN_1418ee140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7ac0(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1418f7ae0(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x60));
  return;
}




undefined * Catch_1418f7b00(void)

{
  log_InlineLogCATCH_ERROR("CTeamService::BroadcastWhenAddOSMember. Server[%u] Team[%u] OrigUser[%u] @%s,%d");
  return &DAT_1418f1098;
}




void Unwind_1418f7b60(undefined8 param_1,longlong param_2)

{
  FUN_1418efec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7b80(undefined8 param_1,longlong param_2)

{
  FUN_1418ee140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7ba0(undefined8 param_1,longlong param_2)

{
  FUN_1418edb80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7bc0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed5b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7be0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7c00(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f7c20(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7c40(undefined8 param_1,longlong param_2)

{
  FUN_1418ed590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7c60(undefined8 param_1,longlong param_2)

{
  FUN_1418edb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7c80(undefined8 param_1,longlong param_2)

{
  FUN_1418ee120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7ca0(undefined8 param_1,longlong param_2)

{
  FUN_1418efea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7cc0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f7ce0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7d00(undefined8 param_1,longlong param_2)

{
  FUN_1418ed5b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7d20(undefined8 param_1,longlong param_2)

{
  FUN_1418edb80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7d40(undefined8 param_1,longlong param_2)

{
  FUN_1418ee140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7d60(undefined8 param_1,longlong param_2)

{
  FUN_1418efec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7d80(undefined8 param_1,longlong param_2)

{
  FUN_1418f10b0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7da0(undefined8 param_1,longlong param_2)

{
  FUN_1418efec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7dc0(undefined8 param_1,longlong param_2)

{
  FUN_1418ee140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7de0(undefined8 param_1,longlong param_2)

{
  FUN_1418edb80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7e00(undefined8 param_1,longlong param_2)

{
  FUN_1418ed5b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7e20(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7e40(undefined8 param_1,longlong param_2)

{
  FUN_1418e8750((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1418f7e60(undefined8 param_1,longlong param_2)

{
  FUN_1418e8550(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7e80(undefined8 param_1,longlong param_2)

{
  FUN_1418e7dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7ea0(undefined8 param_1,longlong param_2)

{
  FUN_1418e6a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7ec0(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7ee0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7f00(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7f20(undefined8 param_1,longlong param_2)

{
  FUN_1418efea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7f40(undefined8 param_1,longlong param_2)

{
  FUN_1418ee120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7f60(undefined8 param_1,longlong param_2)

{
  FUN_1418edb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7f80(undefined8 param_1,longlong param_2)

{
  FUN_1418ed590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7fa0(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f7fc0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f7fe0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8000(undefined8 param_1,longlong param_2)

{
  FUN_1418ed5b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8020(undefined8 param_1,longlong param_2)

{
  FUN_1418edb80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8040(undefined8 param_1,longlong param_2)

{
  FUN_1418ee140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8060(undefined8 param_1,longlong param_2)

{
  FUN_1418efec0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8080(undefined8 param_1,longlong param_2)

{
  FUN_1418f10b0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f80a0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8750((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1418f80c0(undefined8 param_1,longlong param_2)

{
  FUN_1418f1400(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f80e0(undefined8 param_1,longlong param_2)

{
  FUN_1418efea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8100(undefined8 param_1,longlong param_2)

{
  FUN_1418ee120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8120(undefined8 param_1,longlong param_2)

{
  FUN_1418edb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8140(undefined8 param_1,longlong param_2)

{
  FUN_1418ed590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8160(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8180(undefined8 param_1,longlong param_2)

{
  FUN_1418e8750((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1418f81a0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8550(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f81c0(undefined8 param_1,longlong param_2)

{
  FUN_1418e7dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f81e0(undefined8 param_1,longlong param_2)

{
  FUN_1418e6a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8200(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8220(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8240(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8260(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x90));
  return;
}




undefined8 Catch_1418f8280(void)

{
  log_InlineLogCATCH_ERROR("CTeamService::OnOSDestroyTeam. Server[%u] Team[%u] @%s,%d");
  return 0x1418f1bab;
}




void Unwind_1418f82d0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f82f0(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8310(undefined8 param_1,longlong param_2)

{
  FUN_1418ed590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8330(undefined8 param_1,longlong param_2)

{
  FUN_1418edb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8350(undefined8 param_1,longlong param_2)

{
  FUN_1418ee120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8370(undefined8 param_1,longlong param_2)

{
  FUN_1418efea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8390(undefined8 param_1,longlong param_2)

{
  FUN_1418f1400(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1418f83b0(undefined8 param_1,longlong param_2)

{
  FUN_1418f1500((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1418f83d0(undefined8 param_1,longlong param_2)

{
  FUN_1418f1390((longlong *)(*(longlong *)(param_2 + 0x40) + 0x60));
  return;
}




void Unwind_1418f83f0(undefined8 param_1,longlong param_2)

{
  FUN_1418f1500((longlong *)(*(longlong *)(param_2 + 0xb0) + 0x20));
  return;
}




void Unwind_1418f8410(undefined8 param_1,longlong param_2)

{
  FUN_1418f1390((longlong *)(*(longlong *)(param_2 + 0xb0) + 0x60));
  return;
}




void Unwind_1418f8430(undefined8 param_1,longlong param_2)

{
  FUN_1418e8750((longlong *)(*(longlong *)(param_2 + 0xb8) + 0x10));
  return;
}




void Unwind_1418f8450(undefined8 param_1,longlong param_2)

{
  FUN_1418e8550(*(longlong **)(param_2 + 0xb8));
  return;
}




void Unwind_1418f8470(undefined8 param_1,longlong param_2)

{
  FUN_1418e7dc0(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_1418f8490(undefined8 param_1,longlong param_2)

{
  FUN_1418e6a10(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_1418f84b0(undefined8 param_1,longlong param_2)

{
  FUN_1418e59a0(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_1418f84d0(undefined8 param_1,longlong param_2)

{
  FUN_1418e5450(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_1418f84f0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530(*(undefined8 **)(param_2 + 0xb8));
  return;
}




undefined * Catch_1418f8510(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1418f2228;
}




void Unwind_1418f8550(undefined8 param_1,longlong param_2)

{
  FUN_1418f10b0(*(longlong **)(param_2 + 0xb8));
  return;
}




void Unwind_1418f8570(undefined8 param_1,longlong param_2)

{
  FUN_1418efec0(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_1418f8590(undefined8 param_1,longlong param_2)

{
  FUN_1418ee140(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_1418f85b0(undefined8 param_1,longlong param_2)

{
  FUN_1418edb80(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_1418f85d0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed5b0(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_1418f85f0(undefined8 param_1,longlong param_2)

{
  FUN_1418ed010(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_1418f8610(undefined8 param_1,longlong param_2)

{
  FUN_1418f1400(*(longlong **)(param_2 + 0xb0));
  return;
}




void Unwind_1418f8630(undefined8 param_1,longlong param_2)

{
  FUN_1418efea0(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_1418f8650(undefined8 param_1,longlong param_2)

{
  FUN_1418ee120(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_1418f8670(undefined8 param_1,longlong param_2)

{
  FUN_1418edb60(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_1418f8690(undefined8 param_1,longlong param_2)

{
  FUN_1418ed590(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_1418f86b0(undefined8 param_1,longlong param_2)

{
  FUN_1418ecf80(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_1418f86d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_1418f86f0(undefined8 param_1,longlong param_2)

{
  FUN_1418f1500((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1418f8710(undefined8 param_1,longlong param_2)

{
  FUN_1418f1390((longlong *)(*(longlong *)(param_2 + 0x40) + 0x60));
  return;
}




void Unwind_1418f8730(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f8760(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f8780(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f87a0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f87c0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f87e0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1418f8800(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f8820(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f8840(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f8860(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f8880(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f88a0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1418f88c0(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f88e0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_1418f8900(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_1418f8920(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_1418f8940(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_1418f8960(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_1418f8980(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_1418f89a0(undefined8 param_1,longlong param_2)

{
  FUN_1418e8750((longlong *)(*(longlong *)(param_2 + 0x38) + 0x10));
  return;
}




void Unwind_1418f89c0(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x160));
  return;
}




void Unwind_1418f89e0(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x570));
  return;
}




void Unwind_1418f8a00(void)

{
  FUN_1418e1750();
  return;
}




void Unwind_1418f8a20(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_1418f8a40(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_1418f8a60(undefined8 param_1,longlong param_2)

{
  FUN_1418e2a80((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_1418f8a80(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x160));
  return;
}




void Unwind_1418f8aa0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2750((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_1418f8ac0(undefined8 param_1,longlong param_2)

{
  FUN_1418e2530((undefined8 *)(param_2 + 0x78));
  return;
}




undefined8 Catch_1418f8ae0(void)

{
  log_InlineLogCATCH_ERROR("CTeamService::OnOSTeamSync. SubAction[%d] Server[%u] OrigUser[%u] @%s,%d");
  return 0x1418f2ff0;
}




void Unwind_1418f8b40(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1418f8b60(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1418f8b80(undefined8 param_1,longlong param_2)

{
  FUN_1418f3490((undefined8 *)(param_2 + 0x90));
  return;
}




undefined8 Catch_1418f8ba0(void)

{
  log_InlineLogCATCH_ERROR("CTeamService::OnOSUserLeave. Server[%u] Team[%u] OrigUser[%u] @%s,%d");
  return 0x1418f3382;
}




void Unwind_1418f8c00(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8c20(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1418f8c40(void)

{
  log_InlineLogCATCH_ERROR("CMsgLog::Process @%s,%d");
  return 0x1418f3691;
}




void Unwind_1418f8c80(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8ca0(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8cc0(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1418f8ce0(void)

{
  log_InlineLogCATCH_ERROR("CMsgLog::Process @%s,%d");
  return 0x1418f3828;
}




void Unwind_1418f8d20(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8d40(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8d60(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1418f8d80(void)

{
  log_InlineLogCATCH_ERROR("CMsgTeam::Process @%s,%d");
  return 0x1418f3a01;
}




void Unwind_1418f8dc0(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8de0(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1418f8e00(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1418f8e20(undefined8 param_1,longlong param_2)

{
  FUN_1418f33d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_1418f8e38(void)

{
  _unlock(8);
  return;
}




void FUN_1418f8e51(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418f8e81(void)

{
  _DAT_141903310 = 0xffffffff;
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




bool FUN_1418f8f10(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=972 failed=0 total=1051 */
