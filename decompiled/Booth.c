/* Decompiled by Ghidra 12.1.4 | program: Booth.dll
   image base: 140ac0000 | functions: 659 */


exception * FUN_140ac1090(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_140ac10d0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140ac10f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140ac1100(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140ac1160(void)

{
  return;
}




exception * FUN_140ac1170(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_140ac11c0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140ac11f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_140ac1200(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_140ac1220(exception *param_1,uint param_2)

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




exception * FUN_140ac1280(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140ac12e0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140ac131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140ac1330(exception *param_1,uint param_2)

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




void FUN_140ac13a0(void)

{
  log_InlineLogERROR(&DAT_140ad04c8);
  return;
}




void FUN_140ac13e0(undefined8 *param_1)

{
  *param_1 = IMapThing::vftable;
  return;
}




void FUN_140ac13f0(void)

{
  log_InlineLogERROR(&DAT_140ad04c8);
  return;
}




undefined8 FUN_140ac1430(void)

{
  log_InlineLogERROR(&DAT_140ad04c8);
  return 0;
}




undefined8 FUN_140ac1470(void)

{
  log_InlineLogERROR(&DAT_140ad04c8);
  return 0;
}




undefined8 FUN_140ac14b0(void)

{
  log_InlineLogERROR(&DAT_140ad04c8);
  return 0;
}




undefined8 FUN_140ac14f0(void)

{
  log_InlineLogERROR(&DAT_140ad04c8);
  return 0;
}




void FUN_140ac1530(void)

{
  log_InlineLogERROR(&DAT_140ad04c8);
  return;
}




undefined1 FUN_140ac1570(void)

{
  log_InlineLogERROR(&DAT_140ad04c8);
  return 0;
}




undefined1 FUN_140ac15b0(void)

{
  log_InlineLogERROR(&DAT_140ad04c8);
  return 0;
}




undefined8 * FUN_140ac15f0(undefined8 *param_1,byte param_2)

{
  *param_1 = IMapThing::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140ac1650(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar13;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  plVar10 = (longlong *)param_1[0xd];
  if (plVar10 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  if ((char)param_1[0x32] == '\0') {
    puVar11 = local_res8;
    cVar3 = (**(code **)(*plVar10 + 0xe8))(plVar10,(int)param_1[0x10],param_2,param_3,0x1200,puVar11);
    uVar12 = (undefined4)((ulonglong)puVar11 >> 0x20);
    if (cVar3 == '\0') {
      *(undefined4 *)((longlong)param_1 + 0x84) = param_2;
      *(undefined4 *)(param_1 + 0x11) = param_3;
      *(undefined4 *)((longlong)param_1 + 0x8c) = param_4;
      (**(code **)(*(longlong *)param_1[0xd] + 0xf0))((longlong *)param_1[0xd],(int)param_1[0x10],param_1,0);
      lVar9 = *(longlong *)param_1[0xd];
      uVar8 = (**(code **)(lVar9 + 0x48))((longlong *)param_1[0xd],(int)param_1[0xf]);
      uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
      iVar1 = *(int *)((longlong)param_1 + 0x8c);
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1);
      uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
      (**(code **)(lVar9 + 0x1d8))
                (param_1[0xd],(int)param_1[0xf],(int)param_1[0x10],*(undefined4 *)((longlong)param_1 + 0x84),(int)param_1[0x11],CONCAT44(uVar12,uVar7),
                 CONCAT44(uVar13,uVar6),0xe,0,iVar1 + 400,uVar5,uVar4,uVar8);
      lVar9 = -1;
      plVar10 = param_1 + 0x12;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        lVar2 = *plVar10;
        plVar10 = (longlong *)((longlong)plVar10 + 1);
      } while ((char)lVar2 != '\0');
      if (lVar9 != -2) {
        lVar9 = *(longlong *)param_1[0xd];
        uVar8 = (**(code **)(lVar9 + 0x48))((longlong *)param_1[0xd],(int)param_1[0xf]);
        (**(code **)(lVar9 + 0x10))
                  (param_1[0xd],(int)param_1[0xf],(int)param_1[0x10],*(undefined4 *)((longlong)param_1 + 0x84),(int)param_1[0x11],uVar8,param_1 + 0x12);
      }
      *(undefined1 *)(param_1 + 0x32) = 1;
    }
  }
  return;
}




void FUN_140ac1840(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((longlong *)param_1[0xd] == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  if ((char)param_1[0x32] != '\0') {
    lVar1 = *(longlong *)param_1[0xd];
    uVar2 = (**(code **)(*param_1 + 0x10))();
    (**(code **)(lVar1 + 0x1d0))(param_1[0xd],uVar2,(int)param_1[0x10],*(undefined4 *)((longlong)param_1 + 0x84),(int)param_1[0x11]);
    (**(code **)(*(longlong *)param_1[0xd] + 0xf8))((longlong *)param_1[0xd],(int)param_1[0x10],param_1,0);
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  return;
}




void FUN_140ac18f0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  lVar3 = -1;
  pcVar4 = (char *)(param_1 + 0x90);
  do {
    if (lVar3 == 0) break;
    lVar3 = lVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (lVar3 != -2) {
    lVar3 = **(longlong **)(param_1 + 0x68);
    uVar2 = (**(code **)(lVar3 + 0x48))(*(longlong **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x78));
    (**(code **)(lVar3 + 0x30))(*(undefined8 *)(param_1 + 0x68),param_2,uVar2,&DAT_140ad0620,(char *)(param_1 + 0x90),0,0xffffff,0x838,0);
  }
  return;
}




undefined4 FUN_140ac19d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}




longlong FUN_140ac1a10(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18)) / 0x18) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 0x18;
}




void FUN_140ac1ab0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ad6090);
}




exception * FUN_140ac1b20(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




longlong FUN_140ac1be0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140ac1c02;
  }
  lVar2 = *plVar1;
LAB_140ac1c02:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140ac1c20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140ac1c42;
  }
  lVar2 = *plVar1;
LAB_140ac1c42:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140ac1c60(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




exception * FUN_140ac1ca0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140ac1d30(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ad6090);
}




longlong * FUN_140ac1dc0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140ac1df0;
  }
  else {
LAB_140ac1df0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 0x18;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140ac1e20;
  }
  _invalid_parameter_noinfo();
LAB_140ac1e20:
  param_1[1] = param_1[1] + param_2 * 0x18;
  return param_1;
}




longlong FUN_140ac1e40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x18;
}




void FUN_140ac1ea0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ad6090);
}




longlong FUN_140ac1f30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




bool FUN_140ac1fb0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong * FUN_140ac2000(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140ac2030;
  }
  else {
LAB_140ac2030:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140ac2058;
  }
  _invalid_parameter_noinfo();
LAB_140ac2058:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




void FUN_140ac2070(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_140ac2100(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x18)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_1 * 0x18);
  return;
}




void FUN_140ac2180(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140ac21f0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_140ac2260(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void * FUN_140ac22d0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140ac2430(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140ac2500(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_140ac2570(void)

{
  if ((DAT_140ad7260 & 1) == 0) {
    DAT_140ad7260 = DAT_140ad7260 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ad7258,"CBooth");
    atexit((_func_5014 *)&LAB_140acf4f0);
  }
  return &DAT_140ad7258;
}




void FUN_140ac25d0(__uint64 param_1)

{
  if ((DAT_140ad7260 & 1) == 0) {
    DAT_140ad7260 = DAT_140ad7260 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ad7258,"CBooth");
    atexit((_func_5014 *)&LAB_140acf4f0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140ac2625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140ad7258,param_1);
  return;
}




void FUN_140ac2630(void *param_1)

{
  if ((DAT_140ad7260 & 1) == 0) {
    DAT_140ad7260 = DAT_140ad7260 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ad7258,"CBooth");
    atexit((_func_5014 *)&LAB_140acf4f0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140ac2685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140ad7258,param_1);
  return;
}




void FUN_140ac2690(void *param_1)

{
  if ((DAT_140ad7260 & 1) == 0) {
    DAT_140ad7260 = DAT_140ad7260 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ad7258,"CBooth");
    atexit((_func_5014 *)&LAB_140acf4f0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140ac26e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140ad7258,param_1);
  return;
}




void FUN_140ac26f0(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0xd] != 0) {
    cVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0xd8))((longlong *)param_1[0xd],(int)param_1[0x10]);
    if (cVar1 != '\0') {
      FUN_140ac1840(param_1);
    }
  }
  if ((param_1[0xd] != 0) && (*(int *)((longlong)param_1 + 0x7c) != 0)) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x1f8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000140ac274a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}




void FUN_140ac2750(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 local_res18;
  undefined4 local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar12;
  undefined2 uVar13;
  uint uVar14;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  local_res20 = 0;
  local_res18 = 0;
  lVar10 = param_1[0xb] - param_1[10] >> 0x3f;
  if ((param_1[0xb] - param_1[10]) / 0x18 + lVar10 != lVar10) {
    lVar10 = param_1[0xb] - param_1[10] >> 0x3f;
    if ((param_1[0xb] - param_1[10]) / 0x18 + lVar10 == lVar10) {
      _invalid_parameter_noinfo();
    }
    local_res20 = *(undefined4 *)(param_1[10] + 4);
  }
  if (1 < (ulonglong)((param_1[0xb] - param_1[10]) / 0x18)) {
    if ((ulonglong)((param_1[0xb] - param_1[10]) / 0x18) < 2) {
      _invalid_parameter_noinfo();
    }
    local_res18 = *(undefined4 *)(param_1[10] + 0x1c);
  }
  lVar10 = *(longlong *)param_1[0xd];
  uVar9 = (**(code **)(lVar10 + 0x48))((longlong *)param_1[0xd],(int)param_1[0xf]);
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
  iVar1 = *(int *)((longlong)param_1 + 0x8c);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar7 = (**(code **)(*param_2 + 0x10))();
  uVar14 = 0;
  uVar13 = 0;
  (**(code **)(lVar10 + 0x1e0))
            (param_1[0xd],(int)param_1[0xf],uVar7,uVar6,CONCAT44(uVar8,uVar5),CONCAT44(uVar12,local_res20),local_res18,0xe,0,iVar1 + 400,uVar4,uVar3,uVar9);
  lVar10 = -1;
  plVar11 = param_1 + 0x12;
  do {
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    lVar2 = *plVar11;
    plVar11 = (longlong *)((longlong)plVar11 + 1);
  } while ((char)lVar2 != '\0');
  if (lVar10 != -2) {
    lVar10 = *(longlong *)param_1[0xd];
    uVar9 = (**(code **)(lVar10 + 0x48))((longlong *)param_1[0xd],(int)param_1[0xf]);
    uVar8 = (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(lVar10 + 0x30))(param_1[0xd],uVar8,uVar9,&DAT_140ad0620,param_1 + 0x12,0,0xffffff,CONCAT22(uVar13,0x838),uVar14 & 0xffff0000);
  }
  return;
}




undefined8 FUN_140ac29f0(longlong param_1,int param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50);
  iVar5 = 0;
  uVar4 = 0;
  iVar2 = (int)(lVar6 >> 0x3f);
  iVar1 = (int)(lVar6 / 0x18) + iVar2;
  if (iVar1 != iVar2 && -1 < iVar1 - iVar2) {
    lVar6 = 0;
    do {
      if ((ulonglong)((*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50)) / 0x18) <= uVar4) {
        _invalid_parameter_noinfo();
      }
      lVar3 = *(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50);
      if (*(int *)(lVar6 + *(longlong *)(param_1 + 0x50)) == param_2) {
        uVar4 = (ulonglong)iVar5;
        if ((ulonglong)(lVar3 / 0x18) <= uVar4) {
          _invalid_parameter_noinfo();
        }
        *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8 + uVar4 * 0x18);
        if ((ulonglong)((*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50)) / 0x18) <= uVar4) {
          _invalid_parameter_noinfo();
        }
        lVar6 = *(longlong *)(param_1 + 0x50);
        *param_4 = *(undefined4 *)(lVar6 + 0x10 + uVar4 * 0x18);
        return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
      }
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar5 < (int)(lVar3 / 0x18));
  }
  *param_3 = 0;
  *param_4 = 0;
  return 0;
}




undefined8 FUN_140ac2b50(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar3 = 0;
  lVar7 = *(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50);
  iVar2 = (int)(lVar7 >> 0x3f);
  iVar1 = (int)(lVar7 / 0x18) + iVar2;
  uVar5 = uVar3;
  uVar6 = uVar3;
  if (iVar1 != iVar2 && -1 < iVar1 - iVar2) {
    do {
      if ((ulonglong)((*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50)) / 0x18) <= uVar3) {
        _invalid_parameter_noinfo();
      }
      lVar7 = *(longlong *)(param_1 + 0x50);
      if (*(int *)(uVar6 + lVar7) == param_2) {
        return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
      }
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 0x18;
    } while ((int)uVar4 < (int)((*(longlong *)(param_1 + 0x58) - lVar7) / 0x18));
  }
  return 0;
}




void FUN_140ac2c20(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0xd] != 0) {
    cVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0xd8))((longlong *)param_1[0xd],(int)param_1[0x10]);
    if (cVar1 != '\0') {
      FUN_140ac1840(param_1);
    }
  }
  if ((param_1[0xd] != 0) && (*(int *)((longlong)param_1 + 0x7c) != 0)) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x1f8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000140ac2c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}




longlong FUN_140ac2c80(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 2) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 4;
}




longlong FUN_140ac2cc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140ac2ce2;
  }
  lVar2 = *plVar1;
LAB_140ac2ce2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140ac2d00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140ac2d22;
  }
  lVar2 = *plVar1;
LAB_140ac2d22:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140ac2d40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140ac2d90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140ac2da0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_140ac2e10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140ac2e20(longlong *param_1,longlong param_2)

{
  FUN_140ac1dc0(param_1,param_2);
  return param_1;
}




void FUN_140ac2e40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140ac2e60(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x18)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_140ac2ee0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_2 * 8);
  return;
}




bool FUN_140ac2f50(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140ac2fb0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_140ac3020(longlong *param_1,longlong param_2)

{
  FUN_140ac2000(param_1,param_2);
  return param_1;
}




void * FUN_140ac3100(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140ac31f0(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_140ac3260(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return param_3;
}




longlong * FUN_140ac32b0(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar1 = lVar3 + param_3 * 0x18;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140ac331e;
  }
  _invalid_parameter_noinfo();
LAB_140ac331e:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140ac3350(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140ac3370(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140ac3390(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_140ac33b0(longlong param_1,ulonglong param_2)

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
      FUN_140ac1ab0();
    }
    lVar1 = FUN_140ac2da0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_140ac3420(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 FUN_140ac3450(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140ac1d30();
    }
    lVar1 = FUN_140ac2e60(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 0x18;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 FUN_140ac34c0(longlong param_1,ulonglong param_2)

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
      FUN_140ac1ea0();
    }
    lVar1 = FUN_140ac2ee0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_140ac3520(undefined8 *param_1)

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




undefined8 * FUN_140ac3560(undefined8 *param_1)

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




undefined8 * FUN_140ac35a0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140ac3610(undefined8 *param_1)

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




undefined8 * FUN_140ac3650(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_140ac36b0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140ac371a;
  }
  _invalid_parameter_noinfo();
LAB_140ac371a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140ac3750(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_140ac3820(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140ac3890(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140ac3920(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}




void * FUN_140ac39f0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140ac3a60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140ac3260(param_1,param_2,param_3);
  return;
}




void FUN_140ac3a80(undefined8 *param_1)

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




undefined8 * FUN_140ac3ac0(undefined8 *param_1)

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




undefined8 * FUN_140ac3b10(undefined8 *param_1)

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




undefined8 * FUN_140ac3b60(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140ac3bc0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140ac3bf0(undefined8 *param_1)

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




undefined8 * FUN_140ac3c40(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140ac3ca0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140ac3d10(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_140ac3920(param_1,param_2,param_3);
  return;
}




longlong FUN_140ac3d30(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar1 = param_3 - param_2;
    lVar2 = param_2;
    do {
      lVar3 = lVar2 + -0x18;
      *(undefined8 *)(lVar1 + lVar3) = *(undefined8 *)(lVar2 + -0x18);
      *(undefined8 *)(lVar1 + 8 + lVar3) = *(undefined8 *)(lVar2 + -0x10);
      *(undefined8 *)(lVar1 + 0x10 + lVar3) = *(undefined8 *)(lVar2 + -8);
      lVar2 = lVar3;
    } while (lVar3 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 0x18) * -0x18;
}




void * FUN_140ac3da0(longlong param_1,longlong param_2,void *param_3)

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




void * FUN_140ac3e10(void *param_1,longlong param_2,void *param_3)

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




void FUN_140ac3e50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140ac3260(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_140ac3e70(undefined8 *param_1)

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




undefined8 * FUN_140ac3ed0(undefined8 *param_1)

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




undefined8 * FUN_140ac3f30(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140ac3f80(undefined8 *param_1)

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




void FUN_140ac3fe0(undefined8 *param_1)

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




undefined8 * FUN_140ac4020(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140ac4070(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140ac40c0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140ac4110(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140ac4160(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140ac41b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140ac4220(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140ac4250(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_140ac3920(param_2,param_3,param_4);
  return param_2 + param_3 * 3;
}




undefined8 * FUN_140ac42a0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void * FUN_140ac4300(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

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




void * FUN_140ac43a0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_140ac43e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140ac3260(param_1,param_2,param_3);
  return;
}




void FUN_140ac4400(undefined8 *param_1,ulonglong param_2)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong uStack_10;
  
  if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140ac1ab0();
  }
  if (param_1[3] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (longlong)(param_1[5] - param_1[3]) >> 2;
  }
  if (uVar3 < param_2) {
    pvVar4 = (void *)FUN_140ac2da0(param_1 + 2,param_2);
    uVar3 = param_1[4];
    if (uVar3 < (ulonglong)param_1[3]) {
      _invalid_parameter_noinfo();
    }
    local_48 = (undefined4)*param_1;
    uStack_44 = (undefined4)((ulonglong)*param_1 >> 0x20);
    uStack_40 = (undefined4)uVar3;
    uStack_3c = (undefined4)(uVar3 >> 0x20);
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    uVar3 = param_1[3];
    if ((ulonglong)param_1[4] < uVar3) {
      _invalid_parameter_noinfo();
    }
    local_18 = *param_1;
    uStack_10 = uVar3;
    FUN_140ac4300(param_1,(longlong)&local_18,(longlong)&local_28,pvVar4);
    pvVar1 = (void *)param_1[3];
    lVar2 = param_1[4];
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    param_1[5] = (void *)((longlong)pvVar4 + param_2 * 4);
    param_1[4] = (void *)((longlong)pvVar4 + (lVar2 - (longlong)pvVar1 >> 2) * 4);
    param_1[3] = pvVar4;
  }
  return;
}




void FUN_140ac4530(undefined8 *param_1)

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




undefined8 * FUN_140ac4570(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar2 = (undefined8 *)param_1[4];
  puVar5 = puVar1;
  while (puVar1 = puVar1 + 3, puVar1 != puVar2) {
    *puVar5 = *puVar1;
    puVar5[1] = puVar1[1];
    puVar5[2] = puVar1[2];
    puVar5 = puVar5 + 3;
  }
  param_1[4] = param_1[4] + -0x18;
  uVar3 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if ((uVar3 < (ulonglong)param_1[3]) || ((ulonglong)param_1[4] < uVar3)) {
    _invalid_parameter_noinfo();
  }
  uVar4 = *param_1;
  param_2[1] = uVar3;
  *param_2 = uVar4;
  return param_2;
}




longlong * FUN_140ac4620(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




void FUN_140ac4740(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_140ac1ab0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140ac2da0(param_1 + 0x10,uVar8);
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
      FUN_140ac43a0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_140ac43a0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140ac3890(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140ac49e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_140ac3260(param_2,param_3,param_4);
  return;
}




undefined8 * FUN_140ac4a20(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = IMapThing::vftable;
  *param_1 = booth::CBooth::vftable;
  plVar1 = operator_new(8);
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 1);
    plVar2 = plVar1;
  }
  param_1[1] = plVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 7);
    plVar3 = plVar2;
  }
  param_1[7] = plVar3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return param_1;
}




undefined4 FUN_140ac4b00(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}




undefined8 FUN_140ac4b10(void)

{
  return 0x1200;
}




undefined4 FUN_140ac4b20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}




undefined4 FUN_140ac4b30(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}




undefined1 FUN_140ac4b40(undefined8 param_1,int param_2,undefined8 *param_3)

{
  *param_3 = 0;
  if (param_2 == 0x1200) {
    *param_3 = param_1;
    return 1;
  }
  return 0;
}




undefined1 FUN_140ac4b60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return 0;
}




void FUN_140ac4b70(undefined8 *param_1)

{
  *param_1 = booth::CBooth::vftable;
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete((void *)param_1[10]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  operator_delete((void *)param_1[7]);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  operator_delete((void *)param_1[1]);
  *param_1 = IMapThing::vftable;
  return;
}




undefined8 FUN_140ac4c10(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  
  iVar11 = 0;
  uVar12 = 0;
  iVar5 = (int)(param_1[0xb] - param_1[10] >> 0x3f);
  iVar4 = (int)((param_1[0xb] - param_1[10]) / 0x18) + iVar5;
  if (iVar4 != iVar5 && -1 < iVar4 - iVar5) {
    lVar10 = 0;
    do {
      if ((ulonglong)((param_1[0xb] - param_1[10]) / 0x18) <= uVar12) {
        _invalid_parameter_noinfo();
      }
      if (*(int *)(lVar10 + param_1[10]) == param_2) break;
      iVar11 = iVar11 + 1;
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 0x18;
    } while (iVar11 < (int)((param_1[0xb] - param_1[10]) / 0x18));
  }
  if ((int)((param_1[0xb] - param_1[10]) / 0x18) <= iVar11) {
    return 0;
  }
  uVar12 = param_1[10];
  if ((ulonglong)param_1[0xb] < uVar12) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[7];
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar10 = 0;
  }
  else {
    lVar10 = *plVar2;
  }
  puVar1 = (undefined8 *)(uVar12 + (longlong)iVar11 * 0x18);
  if (puVar1 <= *(undefined8 **)(lVar10 + 0x20)) {
    if (plVar2 == (longlong *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar2;
    }
    if (*(undefined8 **)(lVar10 + 0x18) <= puVar1) goto LAB_140ac4d36;
  }
  _invalid_parameter_noinfo();
LAB_140ac4d36:
  puVar3 = (undefined8 *)param_1[0xb];
  puVar6 = puVar1;
  puVar7 = puVar1;
  while (puVar7 = puVar7 + 3, puVar7 != puVar3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
    puVar6[2] = puVar7[2];
    puVar6 = puVar6 + 3;
  }
  param_1[0xb] = param_1[0xb] + -0x18;
  if ((puVar1 < (undefined8 *)param_1[10]) || ((undefined8 *)param_1[0xb] < puVar1)) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[0xd];
  lVar10 = *plVar2;
  uVar8 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar9 = (**(code **)(lVar10 + 0x1c0))(plVar2,(int)param_1[0xf],param_2,0x17,uVar8,0);
  return uVar9;
}




void FUN_140ac59d0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_1[0xd] != 0) {
    cVar5 = (**(code **)(*(longlong *)param_1[0xd] + 0x60))();
    if ((cVar5 != '\0') && (uVar7 = (param_1[0xb] - param_1[10]) / 0x18 - 1, uVar7 < (ulonglong)((param_1[0xb] - param_1[10]) / 0x18))) {
      lVar8 = uVar7 * 0x18;
      do {
        if ((ulonglong)((param_1[0xb] - param_1[10]) / 0x18) <= uVar7) {
          _invalid_parameter_noinfo();
        }
        iVar1 = *(int *)(lVar8 + param_1[10]);
        if ((ulonglong)((param_1[0xb] - param_1[10]) / 0x18) <= uVar7) {
          _invalid_parameter_noinfo();
        }
        uVar3 = *(undefined8 *)(lVar8 + 8 + param_1[10]);
        if ((ulonglong)((param_1[0xb] - param_1[10]) / 0x18) <= uVar7) {
          _invalid_parameter_noinfo();
        }
        iVar2 = *(int *)(param_1[10] + 0x10 + lVar8);
        cVar5 = (**(code **)(*(longlong *)param_1[0xd] + 0x108))((longlong *)param_1[0xd],iVar1);
        if (cVar5 == '\0') {
          FUN_140ac4c10(param_1,iVar1);
        }
        else {
          cVar5 = (**(code **)(*(longlong *)param_1[0xd] + 0x110))((longlong *)param_1[0xd],iVar1,(int)param_1[0xf]);
          if (cVar5 == '\0') {
            FUN_140ac4c10(param_1,iVar1);
          }
          else {
            if (iVar2 < 1) {
              lVar4 = *(longlong *)param_1[0xd];
              uVar6 = (**(code **)(*param_1 + 0x10))(param_1);
              (**(code **)(lVar4 + 0x1c8))(param_1[0xd],param_2,iVar1,1,uVar6,0,uVar3);
            }
            else {
              lVar4 = *(longlong *)param_1[0xd];
              uVar6 = (**(code **)(*param_1 + 0x10))(param_1);
              (**(code **)(lVar4 + 0x1c8))(param_1[0xd],param_2,iVar1,3,uVar6,0,(longlong)iVar2);
            }
            (**(code **)(*(longlong *)param_1[0xd] + 0x1f0))((longlong *)param_1[0xd],(int)param_1[0xf],param_2,iVar1,uVar6 & 0xffffff00);
          }
        }
        uVar7 = uVar7 - 1;
        lVar8 = lVar8 + -0x18;
      } while (uVar7 < (ulonglong)((param_1[0xb] - param_1[10]) / 0x18));
    }
    return;
  }
  log_InlineLogERROR(&DAT_140ad04c8);
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_140ac5c60(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  __time32_t _Var5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [3];
  
  local_58 = 0xfffffffffffffffe;
  if (param_1[0xe] == 0) {
    log_InlineLogERROR(&DAT_140ad04c8,"CHECK","m_pBoothMgr","f:\\version\\cqserver-78.0.11-1204\\modules\\booth\\src\\booth.cpp");
  }
  else if (param_1[0xd] == 0) {
    log_InlineLogERROR(&DAT_140ad04c8,"CHECK","m_pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\booth\\src\\booth.cpp");
  }
  else {
    cVar4 = (**(code **)(*(longlong *)param_1[0xd] + 0x60))((longlong *)param_1[0xd],(int)param_1[0xf]);
    if (cVar4 == '\0') {
      log_InlineLogERROR("CBooth::OnTimer, user:%u isn\'t online",(int)param_1[0xf]);
    }
    else {
      uVar8 = FUN_140ac7ac0(param_1[0xe]);
      for (local_a8 = 0; local_a8 < uVar8; local_a8 = local_a8 + 1) {
        piVar9 = (int *)FUN_140ac7af0(param_1[0xe],local_a8);
        _Var5 = _time32((__time32_t *)0x0);
        if ((ulonglong)(param_1[5] - param_1[4] >> 2) <= local_a8) {
          _invalid_parameter_noinfo();
        }
        if (*(int *)(param_1[4] + local_a8 * 4) + piVar9[1] <= _Var5) {
          if ((ulonglong)(param_1[5] - param_1[4] >> 2) <= local_a8) {
            _invalid_parameter_noinfo();
          }
          *(__time32_t *)(param_1[4] + local_a8 * 4) = _Var5;
          lVar13 = (param_1[0xb] - param_1[10]) / 6 + (param_1[0xb] - param_1[10] >> 0x3f);
          uVar11 = (lVar13 >> 2) - (lVar13 >> 0x3f);
          uVar15 = uVar11;
          while (uVar15 = uVar15 - 1, local_90 = uVar15, uVar15 < uVar11) {
            if ((ulonglong)((param_1[0xb] - param_1[10]) / 0x18) <= uVar15) {
              _invalid_parameter_noinfo();
            }
            lVar13 = param_1[10];
            uVar1 = *(ulonglong *)(lVar13 + uVar15 * 0x18);
            lVar2 = *(longlong *)(lVar13 + 8 + uVar15 * 0x18);
            local_78 = *(undefined8 *)(lVar13 + 0x10 + uVar15 * 0x18);
            local_88 = uVar1;
            local_80 = lVar2;
            if (((int)(uVar1 >> 0x20) == *piVar9) && ((int)local_78 == 0)) {
              if (lVar2 < *(longlong *)(piVar9 + 2)) {
                iVar14 = 100;
              }
              else {
                lVar13 = *(longlong *)(piVar9 + 4);
                if (lVar2 < lVar13) {
                  lVar12 = lVar13 - *(longlong *)(piVar9 + 2);
                  if (lVar12 < 1) {
                    lVar12 = 1;
                  }
                  iVar14 = (int)(((lVar13 - lVar2) * 100) / lVar12);
                }
                else {
                  iVar14 = 0;
                }
              }
              iVar6 = tq::RandGet(100);
              if (iVar6 < iVar14) {
                uVar3 = param_1[10];
                local_a0 = 0;
                if ((ulonglong)param_1[0xb] < uVar3) {
                  _invalid_parameter_noinfo();
                }
                local_a0 = param_1[7];
                local_98 = uVar3;
                plVar10 = FUN_140ac32b0(&local_a0,local_40,uVar15);
                local_68 = *plVar10;
                local_60 = plVar10[1];
                FUN_140ac4570(param_1 + 7,local_50,(longlong)&local_68);
                lVar13 = *(longlong *)param_1[0xd];
                (**(code **)(*param_1 + 0x10))(param_1);
                (**(code **)(lVar13 + 0x1c0))(param_1[0xd],(int)param_1[0xf],uVar1 & 0xffffffff,0x17);
                uVar7 = (**(code **)(*(longlong *)param_1[0xd] + 0x1a0))((longlong *)param_1[0xd],(int)param_1[0xf],uVar1 & 0xffffffff,1);
                cVar4 = (**(code **)(*(longlong *)param_1[0xd] + 0x108))((longlong *)param_1[0xd],uVar7);
                if (cVar4 == '\0') {
                  tq::MyLogSave("gmlog/sysbuy","system buy item dispear, info.idItem:%u, idItem:%u",uVar1 & 0xffffffff,(ulonglong)uVar7);
                }
                else {
                  (**(code **)(*(longlong *)param_1[0xd] + 0x98))((longlong *)param_1[0xd],(int)param_1[0xf],lVar2,1);
                  (**(code **)(*(longlong *)param_1[0xd] + 0xb8))((longlong *)param_1[0xd],(int)param_1[0xf]);
                  (**(code **)(*(longlong *)param_1[0xd] + 0x1b8))((longlong *)param_1[0xd],(ulonglong)uVar7,1);
                  tq::MyLogSave("gmlog/sysbuy","system buy item:%u, type:%u at price:%I64d",uVar1 & 0xffffffff,local_88 >> 0x20);
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




void FUN_140ac6060(longlong *param_1)

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




longlong * FUN_140ac6120(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_140ac4740((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140ac6214;
  }
  _invalid_parameter_noinfo();
LAB_140ac6214:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140ac6250(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x28) - lVar6;
    lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
    uVar7 = (lVar5 >> 2) - (lVar5 >> 0x3f);
  }
  if (param_3 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    lVar6 = ((longlong)puVar3 - lVar6) / 0x18;
    if (0xaaaaaaaaaaaaaaaU - lVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140ac1d30();
    }
    uVar1 = lVar6 + param_3;
    if (uVar7 < uVar1) {
      if (0xaaaaaaaaaaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (uVar7 < uVar1) {
        uVar7 = uVar1;
      }
      puVar3 = (undefined8 *)FUN_140ac2e60(param_1 + 0x10,uVar7);
      lVar6 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18);
      lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
      lVar6 = (lVar6 >> 2) - (lVar6 >> 0x3f);
      FUN_140ac3920(puVar3 + lVar6 * 3,param_3,param_4);
      FUN_140ac3260(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_2 + 8),puVar3);
      FUN_140ac3260(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),puVar3 + (lVar6 + param_3) * 3);
      pvVar2 = *(void **)(param_1 + 0x18);
      lVar6 = *(longlong *)(param_1 + 0x20);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      *(undefined8 **)(param_1 + 0x28) = puVar3 + uVar7 * 3;
      *(undefined8 **)(param_1 + 0x20) = puVar3 + (param_3 + (lVar6 - (longlong)pvVar2) / 0x18) * 3;
      *(undefined8 **)(param_1 + 0x18) = puVar3;
    }
    else if ((ulonglong)(((longlong)puVar3 - *(longlong *)(param_2 + 8)) / 0x18) < param_3) {
      local_48 = *param_4;
      local_40 = param_4[1];
      local_38 = param_4[2];
      FUN_140ac3260(*(undefined8 **)(param_2 + 8),puVar3,*(undefined8 **)(param_2 + 8) + param_3 * 3);
      FUN_140ac3920(*(undefined8 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined8 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x18,&local_48);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x18;
      lVar6 = *(longlong *)(param_1 + 0x20);
      for (puVar3 = *(undefined8 **)(param_2 + 8); puVar3 != (undefined8 *)(lVar6 + param_3 * -0x18); puVar3 = puVar3 + 3) {
        *puVar3 = local_48;
        puVar3[1] = local_40;
        puVar3[2] = local_38;
      }
    }
    else {
      local_48 = *param_4;
      local_40 = param_4[1];
      local_38 = param_4[2];
      puVar4 = FUN_140ac3260(puVar3 + param_3 * -3,puVar3,puVar3);
      *(undefined8 **)(param_1 + 0x20) = puVar4;
      FUN_140ac3d30(*(longlong *)(param_2 + 8),(longlong)(puVar3 + param_3 * -3),(longlong)puVar3);
      puVar4 = *(undefined8 **)(param_2 + 8);
      puVar3 = puVar4 + param_3 * 3;
      for (; puVar4 != puVar3; puVar4 = puVar4 + 3) {
        *puVar4 = local_48;
        puVar4[1] = local_40;
        puVar4[2] = local_38;
      }
    }
  }
  return;
}




undefined8 * FUN_140ac6600(undefined8 *param_1,uint param_2)

{
  FUN_140ac4b70(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140ac2630(param_1);
  }
  return param_1;
}




void FUN_140ac6630(longlong *param_1,undefined4 *param_2)

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
  FUN_140ac6120(param_1,local_18,&local_28,param_2);
  return;
}




longlong * FUN_140ac66e0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_28;
  ulonglong uStack_20;
  
  uVar1 = param_1[3];
  lVar6 = param_1[4] - uVar1;
  lVar4 = 0;
  lVar3 = lVar6 >> 0x3f;
  lVar5 = lVar4;
  if (lVar6 / 0x18 + lVar3 != lVar3) {
    if ((ulonglong)param_1[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar3 = (longlong)(param_3[1] - uVar1) / 6 + ((longlong)(param_3[1] - uVar1) >> 0x3f);
    lVar5 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_140ac6250((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar1 = param_1[3];
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  local_28 = plVar2;
  uStack_20 = uVar1;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar3 = lVar4;
  }
  else {
    lVar3 = *plVar2;
  }
  uVar1 = uVar1 + lVar5 * 0x18;
  if (uVar1 <= *(ulonglong *)(lVar3 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140ac6804;
  }
  _invalid_parameter_noinfo();
LAB_140ac6804:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140ac6840(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 local_res8 [2];
  longlong local_28;
  undefined4 *puStack_20;
  
  if (*(longlong *)(param_1 + 0x70) == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  plVar1 = (longlong *)(param_1 + 8);
  FUN_140ac6060(plVar1);
  uVar6 = FUN_140ac7ac0(*(longlong *)(param_1 + 0x70));
  if ((uVar6 != 0) && (FUN_140ac4400(plVar1,uVar6), uVar6 != 0)) {
    uVar10 = 0;
    local_res8[0] = 0;
    do {
      puVar2 = *(undefined4 **)(param_1 + 0x20);
      uVar8 = uVar10;
      if (puVar2 != (undefined4 *)0x0) {
        uVar8 = *(longlong *)(param_1 + 0x30) - (longlong)puVar2 >> 2;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x28);
      if ((ulonglong)((longlong)puVar3 - (longlong)puVar2 >> 2) < uVar8) {
        *puVar3 = 0;
        *(undefined4 **)(param_1 + 0x28) = puVar3 + 1;
      }
      else {
        if (puVar3 < puVar2) {
          _invalid_parameter_noinfo();
        }
        uVar8 = *(ulonglong *)(param_1 + 0x20);
        lVar4 = *plVar1;
        uVar7 = uVar10;
        if ((*(ulonglong *)(param_1 + 0x28) - uVar8 & 0xfffffffffffffffc) != 0) {
          if (*(ulonglong *)(param_1 + 0x28) < uVar8) {
            _invalid_parameter_noinfo();
          }
          if ((lVar4 == 0) || (lVar4 != *plVar1)) {
            _invalid_parameter_noinfo();
          }
          uVar7 = (longlong)((longlong)puVar3 - uVar8) >> 2;
        }
        local_28 = lVar4;
        puStack_20 = puVar3;
        FUN_140ac4740((longlong)plVar1,(longlong)&local_28,1,local_res8);
        uVar8 = *(ulonglong *)(param_1 + 0x20);
        if (*(ulonglong *)(param_1 + 0x28) < uVar8) {
          _invalid_parameter_noinfo();
        }
        puVar5 = (ulonglong *)*plVar1;
        if (puVar5 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar9 = uVar10;
        }
        else {
          uVar9 = *puVar5;
        }
        uVar8 = uVar8 + uVar7 * 4;
        if (uVar8 <= *(ulonglong *)(uVar9 + 0x20)) {
          uVar7 = uVar10;
          if (puVar5 != (ulonglong *)0x0) {
            uVar7 = *puVar5;
          }
          if (*(ulonglong *)(uVar7 + 0x18) <= uVar8) goto LAB_140ac69de;
        }
        _invalid_parameter_noinfo();
      }
LAB_140ac69de:
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}




void FUN_140ac6a10(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_28;
  undefined8 *puStack_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = (param_1[5] - (longlong)puVar1) / 6 + (param_1[5] - (longlong)puVar1 >> 0x3f);
    uVar4 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  }
  puVar2 = (undefined8 *)param_1[4];
  if ((ulonglong)(((longlong)puVar2 - (longlong)puVar1) / 0x18) < uVar4) {
    FUN_140ac3920(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 3);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_140ac66e0(param_1,local_18,&local_28,param_2);
  return;
}




ulonglong FUN_140ac6b10(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar3;
  ulonglong extraout_RAX_01;
  undefined8 uVar4;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    uVar3 = extraout_RAX;
  }
  else {
    if (param_3 == 0) {
      log_InlineLogERROR(&DAT_140ad04c8);
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    param_1[0xd] = (longlong)param_2;
    param_1[0xe] = param_3;
    uVar3 = (**(code **)(*param_2 + 0x60))(param_2,param_4);
    if ((char)uVar3 != '\0') {
      *(undefined4 *)(param_1 + 0xf) = param_4;
      iVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0x70))((longlong *)param_1[0xd],param_4);
      *(int *)(param_1 + 0x10) = iVar1;
      if (iVar1 == 0) {
        log_InlineLogERROR(&DAT_140ad04c8);
        return extraout_RAX_01 & 0xffffffffffffff00;
      }
      uVar2 = (**(code **)(*(longlong *)param_1[0xd] + 0x200))();
      *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
      FUN_140ac1650(param_1,param_5,param_6,param_7);
      uVar4 = FUN_140ac6840((longlong)param_1);
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




ulonglong FUN_140ac6c40(longlong param_1,int param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  IStringManager *pIVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  int local_38;
  undefined4 local_34;
  longlong local_30;
  int local_28;
  undefined4 local_24;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    in_RAX = extraout_RAX;
  }
  else if ((param_2 != 0) &&
          (((0 < param_3 || (0 < param_4)) && (in_RAX = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x218))(), param_3 <= (longlong)in_RAX)))) {
    lVar7 = *(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50);
    uVar3 = -(lVar7 >> 0x3f);
    if (((((ulonglong)(lVar7 / 0x18) < 0x14) &&
         (uVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x88))(*(longlong **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x78)), (char)uVar3 != '\0'))
        && (uVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x108))(*(longlong **)(param_1 + 0x68),param_2), (char)uVar3 != '\0')) &&
       ((uVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x110))(*(longlong **)(param_1 + 0x68),param_2,*(undefined4 *)(param_1 + 0x78)),
        (char)uVar3 != '\0' &&
        (uVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x118))(*(longlong **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x78),param_2),
        (char)uVar3 != '\0')))) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x160))(*(longlong **)(param_1 + 0x68),param_2);
      iVar1 = iVar1 / 5;
      if (param_4 < iVar1) {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x168))();
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        else {
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x168))();
        }
        if (param_3 / (longlong)iVar2 < (longlong)iVar1) {
          pIVar4 = theInstance();
          lVar7 = **(longlong **)(param_1 + 0x68);
          uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_BOOTH_LOW_PRICE");
          piVar6 = (int *)(**(code **)(lVar7 + 0x40))(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x78),uVar5,iVar1);
LAB_140ac6dea:
          return (ulonglong)piVar6 & 0xffffffffffffff00;
        }
      }
      local_38 = param_2;
      local_34 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x170))(*(longlong **)(param_1 + 0x68),param_2);
      local_30 = param_3;
      local_28 = param_4;
      local_24 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x1e8))(*(longlong **)(param_1 + 0x68),param_2);
      lVar7 = *(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50);
      iVar8 = 0;
      iVar2 = (int)(lVar7 >> 0x3f);
      iVar1 = (int)(lVar7 / 0x18) + iVar2;
      if (iVar1 != iVar2 && -1 < iVar1 - iVar2) {
        do {
          piVar6 = (int *)FUN_140ac1a10(param_1 + 0x38,(longlong)iVar8);
          if (*piVar6 == param_2) goto LAB_140ac6dea;
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)((*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50)) / 0x18));
      }
      FUN_140ac6a10((longlong *)(param_1 + 0x38),(undefined8 *)&local_38);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xb0))(*(longlong **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x78),param_2);
      uVar3 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    else {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    return uVar3;
  }
  return in_RAX & 0xffffffffffffff00;
}




longlong * FUN_140ac6ed0(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((DAT_140ad7260 & 1) == 0) {
    DAT_140ad7260 = DAT_140ad7260 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140ad7258,"CBooth");
    atexit((_func_5014 *)&LAB_140acf4f0);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140ad7258,0x198);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = FUN_140ac4a20(puVar1);
  }
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_140ac6b10(plVar2,param_1,param_2,param_3,param_4,param_5,param_6);
    if ((char)uVar3 != '\0') {
      return plVar2;
    }
    (**(code **)*plVar2)(plVar2,1);
  }
  return (longlong *)0x0;
}




exception * FUN_140ac6fd0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_140ac7030(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140ac706d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140ac7080(exception *param_1,uint param_2)

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




longlong FUN_140ac7120(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18)) / 0x18) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 0x18;
}




bool FUN_140ac7180(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140ac71c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140ac72f0(longlong param_1,longlong *param_2)

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




void FUN_140ac73b0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ad6090);
}




longlong FUN_140ac74b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140ac74d2;
  }
  lVar2 = *plVar1;
LAB_140ac74d2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140ac74f0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140ac7514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_140ac7580(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x18;
}




void FUN_140ac7600(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140ac7632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




bool FUN_140ac76d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong * FUN_140ac7750(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140ac7780;
  }
  else {
LAB_140ac7780:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 0x18;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140ac77b0;
  }
  _invalid_parameter_noinfo();
LAB_140ac77b0:
  param_1[1] = param_1[1] + param_2 * 0x18;
  return param_1;
}




void FUN_140ac77d0(undefined8 *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    FUN_140ac26f0((longlong *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_140ac7830(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x18)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_1 * 0x18);
  return;
}




void FUN_140ac78d0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_1 * 0x30);
  return;
}




longlong FUN_140ac7ac0(longlong param_1)

{
  return (*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0)) / 0x18;
}




longlong FUN_140ac7af0(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)((*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0)) / 0x18) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0xa0) + param_2 * 0x18;
}




void FUN_140ac7b60(longlong param_1,longlong param_2)

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




void FUN_140ac7bc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140ac7bf0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140ac7c00(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x18)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_2 * 0x18);
  return;
}




longlong FUN_140ac7c70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140ac7c92;
  }
  lVar2 = *plVar1;
LAB_140ac7c92:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140ac7cb0(longlong *param_1)

{
  FUN_140ac74f0(param_1);
  return param_1;
}




longlong * FUN_140ac7d20(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140ac74f0(param_1);
  return param_2;
}




longlong * FUN_140ac7d50(longlong *param_1)

{
  FUN_140ac7600(param_1);
  return param_1;
}




bool FUN_140ac7d70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140ac7dc0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140ac7dc0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_140ac7e10(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140ad6148);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_140ac7e80(longlong *param_1,longlong param_2)

{
  FUN_140ac7750(param_1,param_2);
  return param_1;
}




undefined8 * FUN_140ac7ec0(undefined8 *param_1)

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




undefined8 * FUN_140ac8030(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return param_3;
}




longlong FUN_140ac8080(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140ac80a2;
  }
  lVar2 = *plVar1;
LAB_140ac80a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140ac80c0(longlong *param_1)

{
  FUN_140ac74f0(param_1);
  return param_1;
}




void FUN_140ac80e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140ac8100(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_140ac8120(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140ac73b0();
    }
    lVar1 = FUN_140ac7c00(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 0x18;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




longlong * FUN_140ac8190(longlong *param_1)

{
  FUN_140ac7600(param_1);
  return param_1;
}




void FUN_140ac81b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140ac7dc0(param_1,(longlong *)plVar2[2]);
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




undefined8 * FUN_140ac8230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140ac82b0(undefined8 *param_1)

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




undefined8 * FUN_140ac82f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140ac8330(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar1 = lVar3 + param_3 * 0x18;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140ac839e;
  }
  _invalid_parameter_noinfo();
LAB_140ac839e:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140ac83d0(void)

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




undefined8 * FUN_140ac8430(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140ac8490(undefined8 *param_1)

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




longlong FUN_140ac84e0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 != param_2) {
    lVar1 = param_3 - (longlong)param_1;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 3;
      *(undefined8 *)(lVar1 + -0x18 + (longlong)puVar3) = *puVar2;
      *(undefined8 *)(lVar1 + -0x10 + (longlong)puVar3) = puVar2[1];
      *(undefined8 *)(lVar1 + -8 + (longlong)puVar3) = puVar2[2];
      puVar2 = puVar3;
    } while (puVar3 != param_2);
  }
  return param_3 + (((longlong)param_2 - (longlong)param_1) / 0x18) * 0x18;
}




void FUN_140ac8590(longlong *param_1,longlong *param_2,longlong *param_3)

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




void FUN_140ac8670(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}




void FUN_140ac8740(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140ac8030(param_1,param_2,param_3);
  return;
}




void FUN_140ac8760(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140ac8780(undefined8 *param_1)

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




undefined8 * FUN_140ac87d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140ac8810(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




void FUN_140ac88f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140ac83d0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140ac8930(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140ac8990(undefined8 *param_1)

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




void FUN_140ac89e0(longlong *param_1,longlong *param_2,longlong *param_3)

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




void FUN_140ac8ae0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_140ac8670(param_1,param_2,param_3);
  return;
}




longlong FUN_140ac8b00(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar1 = param_3 - param_2;
    lVar2 = param_2;
    do {
      lVar3 = lVar2 + -0x18;
      *(undefined8 *)(lVar1 + lVar3) = *(undefined8 *)(lVar2 + -0x18);
      *(undefined8 *)(lVar1 + 8 + lVar3) = *(undefined8 *)(lVar2 + -0x10);
      *(undefined8 *)(lVar1 + 0x10 + lVar3) = *(undefined8 *)(lVar2 + -8);
      lVar2 = lVar3;
    } while (lVar3 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 0x18) * -0x18;
}




void FUN_140ac8b70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140ac8030(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_140ac8bd0(undefined8 *param_1)

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




void FUN_140ac8c30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140ac8c50(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140ac8ce0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140ac8810(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_140ac8d00(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140ad6090);
  }
  plVar5 = FUN_140ac8230(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140ac9040(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140ac9090(undefined8 *param_1,undefined8 *param_2)

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




void FUN_140ac90f0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140ac9120(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_140ac8670(param_2,param_3,param_4);
  return param_2 + param_3 * 3;
}




undefined8 * FUN_140ac9170(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140ac91d0(undefined8 *param_1)

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




void FUN_140ac9220(longlong param_1,longlong param_2,undefined8 *param_3)

{
  FUN_140ac8030(*(undefined8 **)(param_1 + 8),*(undefined8 **)(param_2 + 8),param_3);
  return;
}




void FUN_140ac9250(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140ac8030(param_1,param_2,param_3);
  return;
}




void FUN_140ac9270(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)param_1[6];
  plVar1 = (longlong *)*param_1;
  do {
    while( true ) {
      while( true ) {
        plVar4 = (longlong *)param_1[6];
        if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)*param_1)) {
          _invalid_parameter_noinfo();
        }
        if (plVar3 == plVar4) {
          return;
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar1;
        }
        if (plVar3 == *(longlong **)(lVar5 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((longlong *)plVar3[4] != (longlong *)0x0) {
          FUN_140ac5c60((longlong *)plVar3[4]);
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar3 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      plVar4 = plVar3;
      plVar2 = (longlong *)plVar3[2];
      if (*(char *)(plVar3[2] + 0x29) != '\0') break;
      do {
        plVar3 = plVar2;
        plVar2 = (longlong *)*plVar3;
      } while (*(char *)(*plVar3 + 0x29) == '\0');
    }
    do {
      plVar3 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar3 + 0x29) != '\0') break;
      bVar6 = plVar4 == (longlong *)plVar3[2];
      plVar4 = plVar3;
    } while (bVar6);
  } while( true );
}




longlong * FUN_140ac93a0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140ac94fd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140ac952c;
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
      goto LAB_140ac94fd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140ac8d00(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140ac952c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140ac9550(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140ad61a8);
  }
  FUN_140ac74f0(param_3);
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
        goto LAB_140ac973c;
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
LAB_140ac973c:
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
            FUN_140ac7b60((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140ac72f0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140ac7b60((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140ac72f0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140ac7b60((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140ac72f0((longlong)param_1,plVar7);
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




exception * FUN_140ac9910(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




longlong * FUN_140ac9970(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_140ac9a40(undefined8 *param_1)

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




void FUN_140ac9a80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140ac9aa0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140ac81b0((longlong)param_1);
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
    FUN_140ac9550(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_140ac9c50(longlong *param_1)

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
  FUN_140ac9aa0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_140ac9cc0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *param_1;
  param_2[1] = uVar1;
  *param_2 = lVar3;
  puVar2 = *(undefined8 **)(param_4 + 8);
  if ((puVar2 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if ((undefined8 *)param_2[1] != puVar2) {
    lVar3 = FUN_140ac84e0(puVar2,(undefined8 *)param_1[4],param_2[1]);
    param_1[4] = lVar3;
  }
  return param_2;
}




undefined8 * FUN_140ac9d90(undefined8 *param_1)

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




void FUN_140ac9de0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  FUN_140ac8030(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_3 + 8),param_4);
  return;
}




void FUN_140ac9e40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_140ac8030(param_2,param_3,param_4);
  return;
}




undefined8 FUN_140ac9e80(longlong *param_1,uint param_2)

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




undefined8 FUN_140ac9f80(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x70))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x70);
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




void FUN_140aca080(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140ac9f80(param_1,param_2);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140aca09d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}




ulonglong FUN_140aca0b0(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  ulonglong extraout_RAX;
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong extraout_RAX_00;
  uint local_38 [2];
  longlong *local_30;
  longlong local_28 [4];
  
  if (param_1[0x10] == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    uVar2 = extraout_RAX;
  }
  else {
    plVar1 = (longlong *)FUN_140ac9f80((longlong)param_1,param_2);
    if (((plVar1 == (longlong *)0x0) || (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1), (int)uVar2 == 0)) &&
       (uVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x100))((longlong *)param_1[0x10],param_2,param_3,param_4), (char)uVar2 != '\0')) {
      if ((param_5 < 8) && (uVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0xc0))((longlong *)param_1[0x10],param_2), (char)uVar2 == '\0')) {
        plVar1 = FUN_140ac6ed0((longlong *)param_1[0x10],(longlong)param_1,param_2,param_3,param_4,param_5);
        if (plVar1 != (longlong *)0x0) {
          local_38[0] = param_2;
          local_30 = plVar1;
          FUN_140ac93a0(param_1 + 8,local_28,local_38);
          local_38[0] = (**(code **)(*plVar1 + 0x10))(plVar1);
          local_30 = plVar1;
          plVar1 = FUN_140ac93a0(param_1,local_28,local_38);
          return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
        }
        log_InlineLogERROR("CBoothMgr::CreateBooth, failed in createing booth, user:%u");
        uVar2 = extraout_RAX_00;
      }
      return uVar2 & 0xffffffffffffff00;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




void FUN_140aca200(longlong *param_1)

{
  FUN_140ac9c50(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140aca230(longlong *param_1,uint *param_2)

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
  
  FUN_140ac8810(param_1,&local_38,param_2);
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
  FUN_140ac9aa0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




void FUN_140aca370(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140ac73b0();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x18)) / 0x18;
  }
  if (uVar5 < param_2) {
    puVar4 = (undefined8 *)FUN_140ac7c00(param_1 + 0x10,param_2);
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if (puVar1 < *(undefined8 **)(param_1 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (*(undefined8 **)(param_1 + 0x20) < puVar2) {
      _invalid_parameter_noinfo();
    }
    FUN_140ac8030(puVar2,puVar1,puVar4);
    pvVar3 = *(void **)(param_1 + 0x18);
    lVar6 = *(longlong *)(param_1 + 0x20) - (longlong)pvVar3;
    lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    *(undefined8 **)(param_1 + 0x28) = puVar4 + param_2 * 3;
    *(undefined8 **)(param_1 + 0x20) = puVar4 + ((lVar6 >> 2) - (lVar6 >> 0x3f)) * 3;
    *(undefined8 **)(param_1 + 0x18) = puVar4;
  }
  return;
}




void FUN_140aca500(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 < (undefined8 *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  puVar2 = (undefined8 *)param_1[3];
  if ((undefined8 *)param_1[4] < puVar2) {
    _invalid_parameter_noinfo();
  }
  if ((puVar2 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *param_1;
  if ((puVar1 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar1)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar3 == 0) || (lVar3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (puVar2 != puVar1) {
    lVar3 = FUN_140ac84e0(puVar1,(undefined8 *)param_1[4],(longlong)puVar2);
    param_1[4] = lVar3;
  }
  return;
}




undefined8 * FUN_140aca5a0(undefined8 *param_1)

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
  lVar2 = FUN_140ac83d0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140aca620(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x28) - lVar6;
    lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
    uVar7 = (lVar5 >> 2) - (lVar5 >> 0x3f);
  }
  if (param_3 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    lVar6 = ((longlong)puVar3 - lVar6) / 0x18;
    if (0xaaaaaaaaaaaaaaaU - lVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140ac73b0();
    }
    uVar1 = lVar6 + param_3;
    if (uVar7 < uVar1) {
      if (0xaaaaaaaaaaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (uVar7 < uVar1) {
        uVar7 = uVar1;
      }
      puVar3 = (undefined8 *)FUN_140ac7c00(param_1 + 0x10,uVar7);
      lVar6 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18);
      lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
      lVar6 = (lVar6 >> 2) - (lVar6 >> 0x3f);
      FUN_140ac8670(puVar3 + lVar6 * 3,param_3,param_4);
      FUN_140ac8030(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_2 + 8),puVar3);
      FUN_140ac8030(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),puVar3 + (lVar6 + param_3) * 3);
      pvVar2 = *(void **)(param_1 + 0x18);
      lVar6 = *(longlong *)(param_1 + 0x20);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      *(undefined8 **)(param_1 + 0x28) = puVar3 + uVar7 * 3;
      *(undefined8 **)(param_1 + 0x20) = puVar3 + (param_3 + (lVar6 - (longlong)pvVar2) / 0x18) * 3;
      *(undefined8 **)(param_1 + 0x18) = puVar3;
    }
    else if ((ulonglong)(((longlong)puVar3 - *(longlong *)(param_2 + 8)) / 0x18) < param_3) {
      local_48 = *param_4;
      local_40 = param_4[1];
      local_38 = param_4[2];
      FUN_140ac8030(*(undefined8 **)(param_2 + 8),puVar3,*(undefined8 **)(param_2 + 8) + param_3 * 3);
      FUN_140ac8670(*(undefined8 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined8 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x18,&local_48);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x18;
      lVar6 = *(longlong *)(param_1 + 0x20);
      for (puVar3 = *(undefined8 **)(param_2 + 8); puVar3 != (undefined8 *)(lVar6 + param_3 * -0x18); puVar3 = puVar3 + 3) {
        *puVar3 = local_48;
        puVar3[1] = local_40;
        puVar3[2] = local_38;
      }
    }
    else {
      local_48 = *param_4;
      local_40 = param_4[1];
      local_38 = param_4[2];
      puVar4 = FUN_140ac8030(puVar3 + param_3 * -3,puVar3,puVar3);
      *(undefined8 **)(param_1 + 0x20) = puVar4;
      FUN_140ac8b00(*(longlong *)(param_2 + 8),(longlong)(puVar3 + param_3 * -3),(longlong)puVar3);
      puVar4 = *(undefined8 **)(param_2 + 8);
      puVar3 = puVar4 + param_3 * 3;
      for (; puVar4 != puVar3; puVar4 = puVar4 + 3) {
        *puVar4 = local_48;
        puVar4[1] = local_40;
        puVar4[2] = local_38;
      }
    }
  }
  return;
}




void FUN_140aca9d0(longlong *param_1)

{
  FUN_140ac9c50(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140acaa00(longlong *param_1)

{
  if ((void *)param_1[0x14] != (void *)0x0) {
    operator_delete((void *)param_1[0x14]);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  operator_delete((void *)param_1[0x11]);
  FUN_140ac9c50(param_1 + 8);
  operator_delete((void *)param_1[8]);
  FUN_140ac9c50(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140acaa90(longlong *param_1,uint param_2)

{
  FUN_140acaa00(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140acaac0(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong extraout_RAX;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint local_res8 [2];
  longlong local_50;
  undefined8 *local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_28;
  ulonglong local_20;
  
  puVar8 = (undefined8 *)((undefined8 *)param_1[6])[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar4 = (undefined8 *)param_1[6];
  while (cVar1 == '\0') {
    if (*(uint *)(puVar8 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar8[2];
      puVar8 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar8;
    }
    puVar4 = puVar8;
    puVar8 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  local_48 = puVar4;
  local_50 = *param_1;
  puVar8 = (undefined8 *)param_1[6];
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar8) || (param_2 < *(uint *)(puVar4 + 3))) {
    local_38 = param_1[6];
    local_40 = *param_1;
    plVar10 = &local_40;
  }
  else {
    plVar10 = &local_50;
  }
  plVar2 = (longlong *)*plVar10;
  uVar7 = plVar10[1];
  uVar3 = param_1[6];
  local_28 = plVar2;
  local_20 = uVar7;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  uVar5 = local_20;
  if (local_20 == uVar3) {
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar2;
    }
    if (uVar5 == *(ulonglong *)(lVar11 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = *(longlong **)(uVar5 + 0x20);
    if (plVar2 == (longlong *)0x0) {
      local_28 = (longlong *)*plVar10;
      local_20 = plVar10[1];
      puVar8 = FUN_140ac9550(param_1,&local_40,(longlong *)&local_28);
      uVar7 = (ulonglong)puVar8 & 0xffffffffffffff00;
    }
    else {
      local_res8[0] = FUN_140ac19d0((longlong)plVar2);
      FUN_140aca230(param_1 + 8,local_res8);
      local_28 = (longlong *)*plVar10;
      local_20 = plVar10[1];
      FUN_140ac9550(param_1,&local_40,(longlong *)&local_28);
      uVar9 = FUN_140ac26f0(plVar2);
      uVar7 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    }
  }
  return uVar7;
}




undefined8 * FUN_140acac50(undefined8 *param_1)

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
  lVar2 = FUN_140ac83d0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_140acacd0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_28;
  ulonglong uStack_20;
  
  uVar1 = param_1[3];
  lVar6 = param_1[4] - uVar1;
  lVar4 = 0;
  lVar3 = lVar6 >> 0x3f;
  lVar5 = lVar4;
  if (lVar6 / 0x18 + lVar3 != lVar3) {
    if ((ulonglong)param_1[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar3 = (longlong)(param_3[1] - uVar1) / 6 + ((longlong)(param_3[1] - uVar1) >> 0x3f);
    lVar5 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_140aca620((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar1 = param_1[3];
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  local_28 = plVar2;
  uStack_20 = uVar1;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar3 = lVar4;
  }
  else {
    lVar3 = *plVar2;
  }
  uVar1 = uVar1 + lVar5 * 0x18;
  if (uVar1 <= *(ulonglong *)(lVar3 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140acadf4;
  }
  _invalid_parameter_noinfo();
LAB_140acadf4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140acae30(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140acac50(param_1);
  FUN_140acac50(param_1 + 8);
  plVar2 = (longlong *)0x0;
  param_1[0x10] = 0;
  plVar1 = operator_new(8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x11);
    plVar2 = plVar1;
  }
  param_1[0x11] = plVar2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}




void FUN_140acaeb0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    FUN_140acaa00(param_1);
    operator_delete(param_1);
  }
  return;
}




void FUN_140acaee0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_28;
  undefined8 *puStack_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = (param_1[5] - (longlong)puVar1) / 6 + (param_1[5] - (longlong)puVar1 >> 0x3f);
    uVar4 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  }
  puVar2 = (undefined8 *)param_1[4];
  if ((ulonglong)(((longlong)puVar2 - (longlong)puVar1) / 0x18) < uVar4) {
    FUN_140ac8670(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 3);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_140acacd0(param_1,local_18,&local_28,param_2);
  return;
}




ulonglong FUN_140acafe0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong extraout_RAX;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  plVar2 = (longlong *)InstanceGet();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,"SELECT * FROM cq_sysbuyer",2);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    plVar6 = (longlong *)(param_1 + 0x88);
    FUN_140aca500(plVar6);
    FUN_140aca370((longlong)plVar6,(longlong)(int)uVar1);
    if (0 < (int)uVar1) {
      uVar7 = (ulonglong)uVar1;
      lVar5 = 0;
      do {
        (**(code **)(*plVar2 + 0x30))(plVar2,lVar5);
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,1);
        local_28 = (**(code **)(*plVar3 + 0x48))(plVar3);
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,2);
        local_24 = (**(code **)(*plVar3 + 0x40))(plVar3);
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,3);
        local_20 = (**(code **)(*plVar3 + 0x58))(plVar3);
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,4);
        local_18 = (**(code **)(*plVar3 + 0x58))(plVar3);
        FUN_140acaee0(plVar6,(undefined8 *)&local_28);
        lVar5 = lVar5 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar4 = (**(code **)*plVar2)(plVar2);
    return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  log_InlineLogERROR(&DAT_140ad04c8);
  return extraout_RAX & 0xffffffffffffff00;
}




ulonglong FUN_140acb150(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 0x80) = param_2;
    uVar1 = FUN_140acafe0(param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
    }
  }
  return uVar1;
}




longlong * FUN_140acb1b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    log_InlineLogERROR("CBoothMgr::CreateNew, NULL == pConsumer");
    plVar2 = (longlong *)0x0;
  }
  else {
    puVar1 = operator_new(0xb8);
    if (puVar1 == (undefined8 *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = FUN_140acae30(puVar1);
    }
    if (plVar2 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140ad04c8);
      plVar2 = (longlong *)0x0;
    }
    else {
      uVar3 = FUN_140acb150((longlong)plVar2,param_1);
      if ((char)uVar3 == '\0') {
        FUN_140acaeb0(plVar2);
        plVar2 = (longlong *)0x0;
      }
    }
  }
  return plVar2;
}




void FUN_140acb270(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_140acb280(void)

{
  return 0;
}




undefined8 FUN_140acb290(void)

{
  return 0;
}




undefined8 FUN_140acb2a0(void)

{
  return 0;
}




undefined8 FUN_140acb2b0(void)

{
  return 0;
}




undefined8 * FUN_140acb2c0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140acb300(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_140acb320(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))(*(longlong **)(param_1 + 0x28),0x1b);
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140acb7b0(*(longlong *)(param_1 + 0x10),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ushort FUN_140acb400(longlong param_1,uint param_2,ushort *param_3,ushort param_4)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  undefined7 extraout_var;
  CMsg local_438 [1072];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x210))();
  if (cVar1 == '\0') {
    if ((param_3 == (ushort *)0x0) || (param_4 == 0)) {
      uVar3 = 0;
    }
    else if (param_4 < *param_3) {
      uVar3 = 0;
    }
    else {
      if (param_3[1] == 0x271a) {
        FUN_140acc110(local_438);
        bVar2 = FUN_140acc570(local_438,(char *)param_3,param_4);
        if ((int)CONCAT71(extraout_var,bVar2) != 0) {
          FUN_140acc6c0((longlong)local_438,param_2,*(longlong **)(param_1 + 0x10),*(longlong **)(param_1 + 0x18));
        }
        FUN_140acc190((undefined8 *)local_438);
      }
      else {
        log_InlineLogWARNING("booth:: Recv fault MsgType:%d");
      }
      uVar3 = *param_3;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_140acb4f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140acb50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CModule::OnTimer Booth module doesn\'t have provider");
    return;
  }
  tq::TimeGet(0);
  FUN_140acb830(*(longlong *)(param_1 + 0x10));
  return;
}




bool FUN_140acb530(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_140acbf70(puVar2);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(*(longlong **)(param_1 + 0x28),0x1b);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x271a,param_1);
  }
  return cVar1 != '\0';
}




undefined8 FUN_140acb5a0(void)

{
  return 1;
}




void FUN_140acb5b0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_140acb5e0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_140acb610(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = booth::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = param_2;
  return param_1;
}




void FUN_140acb660(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = booth::CModule::vftable;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  *param_1 = gs::IModule::vftable;
  return;
}




longlong * ModuleCreate(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
                    /* 0xb6b0  1  ModuleCreate */
  uVar3 = (undefined4)param_2;
  plVar2 = operator_new(0x30);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)booth::CModule::vftable;
    *(undefined4 *)(plVar2 + 1) = uVar3;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    plVar2[5] = param_1;
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_140acb530((longlong)plVar2,param_2,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




undefined8 * FUN_140acb750(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140acb660(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140acb7b0(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  longlong *plVar1;
  ulonglong extraout_RAX_00;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  plVar1 = FUN_140acb1b0(param_2);
  *(longlong **)(param_1 + 8) = plVar1;
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR("CProvider::Init, can not create m_pBoothMgr");
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}




void FUN_140acb830(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  FUN_140ac9270(*(longlong **)(param_1 + 8));
  return;
}




undefined8 FUN_140acb880(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return 0;
  }
  uVar1 = FUN_140aca080(*(longlong *)(param_1 + 8),param_2);
  return uVar1;
}




ulonglong FUN_140acb8d0(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140aca0b0(*(longlong **)(param_1 + 8),param_2,param_3,param_4,param_5);
  return uVar1;
}




ulonglong FUN_140acb920(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140acaac0(*(longlong **)(param_1 + 8),param_2);
  return uVar1;
}




void FUN_140acb970(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  plVar1 = (longlong *)FUN_140ac9e80(*(longlong **)(param_1 + 8),param_2);
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  FUN_140ac1840(plVar1);
  return;
}




void FUN_140acba00(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  plVar1 = (longlong *)FUN_140ac9e80(*(longlong **)(param_1 + 8),param_2);
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  FUN_140ac1650(plVar1,param_3,param_4,param_5);
  return;
}




ulonglong FUN_140acbab0(longlong param_1,uint param_2,int param_3,longlong param_4,int param_5)

{
  ulonglong extraout_RAX;
  longlong lVar1;
  ulonglong extraout_RAX_00;
  ulonglong uVar2;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  lVar1 = FUN_140ac9e80(*(longlong **)(param_1 + 8),param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140ac6c40(lVar1,param_3,param_4,param_5);
  return uVar2;
}




ulonglong FUN_140acbb60(longlong param_1,uint param_2,int param_3)

{
  ulonglong extraout_RAX;
  longlong *plVar1;
  ulonglong extraout_RAX_00;
  ulonglong uVar2;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar1 = (longlong *)FUN_140ac9e80(*(longlong **)(param_1 + 8),param_2);
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140ac4c10(plVar1,param_3);
  return uVar2;
}




ulonglong FUN_140acbbf0(longlong param_1,uint param_2,int param_3,int param_4)

{
  ulonglong extraout_RAX;
  longlong *plVar1;
  ulonglong extraout_RAX_00;
  ulonglong uVar2;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar1 = (longlong *)FUN_140ac9e80(*(longlong **)(param_1 + 8),param_2);
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140ac4dd0(plVar1,param_3,param_4);
  return uVar2;
}




void FUN_140acbca0(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  plVar1 = (longlong *)FUN_140ac9e80(*(longlong **)(param_1 + 8),param_2);
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  FUN_140ac59d0(plVar1,param_3);
  return;
}




void FUN_140acbd30(longlong param_1,uint param_2,char *param_3)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  lVar1 = FUN_140ac9e80(*(longlong **)(param_1 + 8),param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140acbdc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  tq::SafeCopy((char *)(lVar1 + 0x90),param_3,0x100);
  return;
}




void FUN_140acbdd0(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  lVar1 = FUN_140ac9e80(*(longlong **)(param_1 + 8),param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return;
  }
  FUN_140ac18f0(lVar1,param_3);
  return;
}




ulonglong FUN_140acbe60(longlong param_1,uint param_2,int param_3)

{
  ulonglong extraout_RAX;
  longlong lVar1;
  ulonglong extraout_RAX_00;
  ulonglong uVar2;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  lVar1 = FUN_140ac9e80(*(longlong **)(param_1 + 8),param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140ac2b50(lVar1,param_3);
  return uVar2;
}




undefined8 FUN_140acbef0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *local_res8 [4];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ad04c8);
  }
  else {
    local_res8[0] = (longlong *)0x0;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 200))(*(longlong **)(param_1 + 0x10),param_2,0x1200,param_3,local_res8);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*local_res8[0] + 0x10))();
      return uVar2;
    }
  }
  return 0;
}




undefined8 * FUN_140acbf70(undefined8 *param_1)

{
  *param_1 = booth::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void FUN_140acbf90(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    FUN_140acaa00(plVar1);
    operator_delete(plVar1);
    *param_1 = 0;
  }
  return;
}




void FUN_140acbfd0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = booth::CProvider::vftable;
  if (param_1[1] != 0) {
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      FUN_140acaa00(plVar1);
      operator_delete(plVar1);
    }
    param_1[1] = 0;
  }
  return;
}




undefined8 * FUN_140acc030(undefined8 *param_1,uint param_2)

{
  FUN_140acbfd0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140acc060(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_140acc090(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_140acc0b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140acc0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_140acc0c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140acc0c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_140acc0d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140acc0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_140acc0e0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140acc110(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = booth::CMsgAction::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x31),0x3d7,true);
  return param_1;
}




void FUN_140acc190(undefined8 *param_1)

{
  *param_1 = booth::CMsgAction::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140acc1d0(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined4 param_7,undefined4 param_8)

{
  ulong uVar1;
  
  if (param_2 != 0) {
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
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_8;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
  }
  return param_2 != 0;
}




bool FUN_140acc2c0(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,char *param_7,undefined4 param_8,
                  undefined4 param_9)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    tq::CMsg::Init(param_1);
    uVar2 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 0x14) = uVar2;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = param_3;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1e) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1a) = param_5;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_8;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = param_9;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
    bVar1 = tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_7);
    uVar2 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x271a;
    uVar3 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
    **(short **)(param_1 + 0x408) = (short)uVar3 + 0x29;
  }
  return bVar1;
}




bool FUN_140acc3d0(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
                  undefined4 param_9)

{
  ulong uVar1;
  
  if (param_2 != 0) {
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
  }
  return param_2 != 0;
}




undefined8 FUN_140acc4d0(longlong param_1,undefined2 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulong uVar2;
  
  **(undefined2 **)(param_1 + 0x408) = 0x2a;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x271a;
  uVar2 = tq::TimeGet(0);
  *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar2;
  uVar2 = tq::TimeGet(0);
  *(ulong *)(*(longlong *)(param_1 + 0x408) + 0x14) = uVar2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined8 *)(lVar1 + 0xc) = param_4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




bool FUN_140acc570(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    if (bVar1) {
      return *(short *)(param_1 + 10) == 0x271a;
    }
  }
  return false;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

ulonglong FUN_140acc5b0(longlong param_1,uint param_2,longlong *param_3)

{
  ulonglong extraout_RAX;
  undefined8 uVar1;
  ulonglong extraout_RAX_00;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8,"CHECKF","pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\booth\\src\\msg\\msgaction.cpp");
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 != *(uint *)(*(longlong *)(param_1 + 0x408) + 8)) {
    uVar1 = (**(code **)(*param_3 + 0x48))(param_3);
    tq::MyLogSave("gmlog/cheater","CMsgAction::Process, found cheater send fake message, cheater:%s(%u),  fake userid:(%u), usAction:(%u) ",uVar1,param_2);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x408) >> 8),1);
}




undefined8 * FUN_140acc660(undefined8 *param_1,uint param_2)

{
  *param_1 = booth::CMsgAction::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140acc6c0(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  IStringManager *pIVar7;
  undefined8 uVar8;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
  }
  else if (param_4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ad04c8);
  }
  else {
    cVar3 = (**(code **)(*param_4 + 0x60))(param_4);
    if (cVar3 != '\0') {
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x408) + 0x18);
      if (sVar1 == 0x6f) {
        uVar6 = FUN_140acc5b0(param_1,param_2,param_4);
        if ((char)uVar6 != '\0') {
          lVar2 = *(longlong *)(param_1 + 0x408);
          cVar3 = (**(code **)(*param_3 + 8))(param_3,param_2,*(undefined2 *)(lVar2 + 0x1c),*(undefined2 *)(lVar2 + 0x1e),*(undefined2 *)(lVar2 + 0x1a));
          if (cVar3 != '\0') {
            uVar5 = (**(code **)*param_3)(param_3,param_2);
            *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = uVar5;
            (**(code **)(*param_4 + 0x28))(param_4,param_2,param_1);
          }
        }
      }
      else if (sVar1 == 0x70) {
        (**(code **)(*param_4 + 0x48))(param_4,param_2);
        tq::MyLogSave("gmlog/cheater"," found cheater:%s(%u), user fake suspend booth message");
        pIVar7 = theInstance();
        lVar2 = *param_4;
        uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_GOTO_CHEATJAIL");
        (**(code **)(lVar2 + 0xd0))(param_4,param_2,0x1772,uVar8);
      }
      else if (sVar1 == 0x71) {
        (**(code **)(*param_4 + 0x48))(param_4,param_2);
        tq::MyLogSave("gmlog/cheater"," found cheater:%s(%u), user fake resume booth message");
        pIVar7 = theInstance();
        lVar2 = *param_4;
        uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_GOTO_CHEATJAIL");
        (**(code **)(lVar2 + 0xd0))(param_4,param_2,0x1772,uVar8);
      }
      else if (sVar1 == 0x72) {
        uVar6 = FUN_140acc5b0(param_1,param_2,param_4);
        if ((char)uVar6 != '\0') {
          iVar4 = (**(code **)*param_3)(param_3,param_2);
          if (iVar4 != 0) {
            (**(code **)(*param_3 + 0x10))(param_3,iVar4);
          }
        }
      }
      else if (sVar1 == 0x73) {
        uVar6 = FUN_140acc5b0(param_1,param_2,param_4);
        if ((char)uVar6 != '\0') {
          cVar3 = (**(code **)(*param_4 + 0x60))(param_4,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc));
          if (cVar3 != '\0') {
            iVar4 = (**(code **)*param_3)(param_3,param_2);
            if (iVar4 != 0) {
              (**(code **)(*param_3 + 0x50))(param_3,iVar4,param_2);
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
  
  local_res10 = _decode_pointer(DAT_140ad7298);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140ad7298);
    local_res18[0] = _decode_pointer(DAT_140ad7290);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140ad7298 = _encode_pointer(local_res10);
    DAT_140ad7290 = _encode_pointer(local_res18[0]);
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




bool FUN_140accb80(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140ad7290 = _encode_pointer(puVar1);
  DAT_140ad7298 = DAT_140ad7290;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140acd0ac();
    atexit(FUN_140acd0e4);
    atexit((_func_5014 *)&LAB_140acd0a0);
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
    if (DAT_140ad7264 < 1) {
      return 0;
    }
    DAT_140ad7264 = DAT_140ad7264 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_140ad7280 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140ad7280;
        pvVar3 = DAT_140ad7280;
      }
      DAT_140ad7280 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140accc5a;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140accc5a:
    if (DAT_140ad7278 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140ad7298);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_140ad7290);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_140ad7298);
            plVar12 = (longlong *)_decode_pointer(DAT_140ad7290);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_140ad7290 = _encoded_null();
        DAT_140ad7298 = DAT_140ad7290;
      }
      DAT_140ad7278 = 0;
      if (!bVar2) {
        LOCK();
        DAT_140ad7280 = (void *)0x0;
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
      bVar13 = DAT_140ad7280 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140ad7280;
        pvVar3 = DAT_140ad7280;
      }
      DAT_140ad7280 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140accd83;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140accd83:
    if (DAT_140ad7278 == 0) {
      DAT_140ad7278 = 1;
      iVar4 = _initterm_e(&DAT_140ad0218,&DAT_140ad0228);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_140ad0208,&DAT_140ad0210);
      DAT_140ad7278 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_140ad7280 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_140ad7288 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140ad7288), BVar5 != 0)) {
      (*DAT_140ad7288)(param_1,2,param_3);
    }
    DAT_140ad7264 = DAT_140ad7264 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000140accefc) */
/* WARNING: Removing unreachable block (ram,0x000140acce93) */
/* WARNING: Removing unreachable block (ram,0x000140accf37) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_140ad7264 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_140ad7240 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_140ad7240 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_140acb5a0();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_140acb5a0();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_140ad7240 = 0xffffffff;
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




undefined8 FUN_140accfb4(undefined8 *param_1)

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




void FUN_140acd0ac(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140ad2908; puVar1 < &DAT_140ad2908; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_140acd0e4(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140ad2918; puVar1 < &DAT_140ad2918; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_140ac0000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140ac0000);
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
  if (DAT_140ad7248 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140ad7248 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_140ad7248 == 0x2b992ddfa232) {
      DAT_140ad7248 = 0x2b992ddfa233;
    }
  }
  _DAT_140ad7250 = ~DAT_140ad7248;
  return;
}




void Unwind_140acd310(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd330(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd350(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd370(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd390(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140acd3b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd3d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140acd3f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd410(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140acd430(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd450(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140acd470(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd490(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd4b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd4d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140acd4f0(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd510(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd530(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140acd550(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140acd570(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140acd590(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140acd5b0(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140acd5d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd5f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140acd610(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd630(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140acd650(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd670(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140acd690(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140acd6b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140acd6d0(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140acd6f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140acd710(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140acd730(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140acd750(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140acd770(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140acd790(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140acd7b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140acd7d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140acd7f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140acd810(void)

{
  DAT_140ad7260 = DAT_140ad7260 & 0xfffffffe;
  return;
}




void Unwind_140acd830(void)

{
  DAT_140ad7260 = DAT_140ad7260 & 0xfffffffe;
  return;
}




void Unwind_140acd850(void)

{
  DAT_140ad7260 = DAT_140ad7260 & 0xfffffffe;
  return;
}




void Unwind_140acd870(void)

{
  DAT_140ad7260 = DAT_140ad7260 & 0xfffffffe;
  return;
}




void Unwind_140acd890(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140acd8b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140acd8d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140acd8f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Catch_140acd910(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140acd930(undefined8 param_1,longlong param_2)

{
  FUN_140ac2d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acd950(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acd970(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acd990(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acd9b0(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acd9d0(void)

{
  FUN_140ac1160();
  return;
}




void Catch_140acd9f0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140acda10(undefined8 param_1,longlong param_2)

{
  FUN_140ac3350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acda30(undefined8 param_1,longlong param_2)

{
  FUN_140ac2d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acda50(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acda70(undefined8 param_1,longlong param_2)

{
  FUN_140ac2d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acda90(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acdab0(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acdad0(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acdaf0(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acdb10(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acdb30(undefined8 param_1,longlong param_2)

{
  FUN_140ac2d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acdb50(undefined8 param_1,longlong param_2)

{
  FUN_140ac3350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acdb70(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acdb90(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acdbb0(undefined8 param_1,longlong param_2)

{
  FUN_140ac3370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acdbd0(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acdbf0(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acdc10(undefined8 param_1,longlong param_2)

{
  FUN_140ac3390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acdc30(undefined8 param_1,longlong param_2)

{
  FUN_140ac3390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acdc50(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140acdc70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140acdca0(undefined8 param_1,longlong param_2)

{
  FUN_140ac3370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acdcc0(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140acdce0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140acdd10(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140acdd30(undefined8 param_1,longlong param_2)

{
  FUN_140ac13e0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_140acdd50(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acdd70(undefined8 param_1,longlong param_2)

{
  FUN_140ac2d90(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140acdd90(undefined8 param_1,longlong param_2)

{
  FUN_140ac3350(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140acddb0(undefined8 param_1,longlong param_2)

{
  FUN_140ac3a80((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_140acddd0(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acddf0(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e10(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140acde10(undefined8 param_1,longlong param_2)

{
  FUN_140ac3370(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140acde30(undefined8 param_1,longlong param_2)

{
  FUN_140ac4530((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x38));
  return;
}




void Unwind_140acde50(undefined8 param_1,longlong param_2)

{
  FUN_140ac13e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acde70(undefined8 param_1,longlong param_2)

{
  FUN_140ac3a80((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140acde90(undefined8 param_1,longlong param_2)

{
  FUN_140ac4530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x38));
  return;
}




void Unwind_140acdeb0(undefined8 param_1,longlong param_2)

{
  FUN_140ac3370(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140acded0(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e10(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140acdef0(undefined8 param_1,longlong param_2)

{
  FUN_140ac3350(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140acdf10(undefined8 param_1,longlong param_2)

{
  FUN_140ac2d90(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140acdf30(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acdf60(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e40((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140acdf80(undefined8 param_1,longlong param_2)

{
  FUN_140ac3390((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140acdfa0(undefined8 param_1,longlong param_2)

{
  FUN_140ac3fe0((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140acdfc0(undefined8 param_1,longlong param_2)

{
  FUN_140ac3390((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140acdfe0(undefined8 param_1,longlong param_2)

{
  FUN_140ac2e40((undefined8 *)(param_2 + 0xb0));
  return;
}




undefined8 Catch_140ace000(void)

{
  log_InlineLogCATCH_ERROR("CBooth::BuyItem() @%s,%d");
  return 0x140ac595b;
}




undefined8 Catch_140ace040(void)

{
  log_InlineLogCATCH_ERROR("CBooth::OnTimer @%s,%d");
  return 0x140ac6040;
}




void Catch_140ace080(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140ace0b0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140ace0d0(void)

{
  DAT_140ad7260 = DAT_140ad7260 & 0xfffffffe;
  return;
}




void Unwind_140ace0f0(undefined8 param_1,longlong param_2)

{
  FUN_140ac2630(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_140ace110(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140ace130(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140ace150(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140ace170(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140ace190(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140ace1b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140ace1d0(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140ace1f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140ace210(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140ace230(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140ace250(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140ace270(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140ace290(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140ace2b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140ace2d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140ace2f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140ace310(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140ace330(void)

{
  FUN_140ac1160();
  return;
}




void Catch_140ace350(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140ace370(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace390(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace3b0(void)

{
  FUN_140ac1160();
  return;
}




void Catch_140ace3d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140ace400(void)

{
  FUN_140ac1160();
  return;
}




void Catch_140ace420(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140ace450(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140ace470(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140ace490(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140ace4b0(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace4d0(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace4f0(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140ace510(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace530(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140ace550(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace570(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace590(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140ace5b0(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace5d0(undefined8 param_1,longlong param_2)

{
  FUN_140ac80e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace5f0(undefined8 param_1,longlong param_2)

{
  FUN_140ac8760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace610(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace630(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace650(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140ace670(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140ace690(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140ace6b0(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140ace6d0(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140ace6f0(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace710(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace730(undefined8 param_1,longlong param_2)

{
  FUN_140ac8760(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140ace750(void)

{
  log_InlineLogCATCH_ERROR("CBoothMgr::OnTimer @%s,%d");
  return 0x140ac937d;
}




void Unwind_140ace790(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140ace7b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140ace7d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140ace7f0(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140ace810(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140ace830(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140ace850(undefined8 param_1,longlong param_2)

{
  FUN_140ac11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140ace870(undefined8 param_1,longlong param_2)

{
  FUN_140ac80e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace890(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace8b0(undefined8 param_1,longlong param_2)

{
  FUN_140ac8c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace8d0(undefined8 param_1,longlong param_2)

{
  FUN_140ac8760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace8f0(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace910(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace930(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140ace950(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace970(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace990(undefined8 param_1,longlong param_2)

{
  FUN_140ac8760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace9b0(undefined8 param_1,longlong param_2)

{
  FUN_140ac8c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace9d0(undefined8 param_1,longlong param_2)

{
  FUN_140ac9a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ace9f0(undefined8 param_1,longlong param_2)

{
  FUN_140ac8c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acea10(undefined8 param_1,longlong param_2)

{
  FUN_140ac8760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acea30(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acea50(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140acea70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0xb8));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140aceaa0(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140aceac0(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aceae0(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aceb00(undefined8 param_1,longlong param_2)

{
  FUN_140ac8760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aceb20(undefined8 param_1,longlong param_2)

{
  FUN_140ac8c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140aceb40(undefined8 param_1,longlong param_2)

{
  FUN_140ac9a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140aceb60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140aceb90(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140acebb0(undefined8 param_1,longlong param_2)

{
  FUN_140aca200(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140acebd0(undefined8 param_1,longlong param_2)

{
  FUN_140ac9a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acebf0(undefined8 param_1,longlong param_2)

{
  FUN_140ac8c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acec10(undefined8 param_1,longlong param_2)

{
  FUN_140ac8760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acec30(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acec50(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acec70(undefined8 param_1,longlong param_2)

{
  FUN_140aca9d0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140acec90(undefined8 param_1,longlong param_2)

{
  FUN_140aca9d0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140acecb0(undefined8 param_1,longlong param_2)

{
  FUN_140ac9a40((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x88));
  return;
}




void Unwind_140acecd0(undefined8 param_1,longlong param_2)

{
  FUN_140ac80e0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140acecf0(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bf0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140aced10(undefined8 param_1,longlong param_2)

{
  FUN_140aca200(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140aced30(undefined8 param_1,longlong param_2)

{
  FUN_140ac9a80(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140aced50(undefined8 param_1,longlong param_2)

{
  FUN_140ac8c30(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140aced70(undefined8 param_1,longlong param_2)

{
  FUN_140ac8760(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140aced90(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140acedb0(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140acedd0(undefined8 param_1,longlong param_2)

{
  FUN_140aca200(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140acedf0(undefined8 param_1,longlong param_2)

{
  FUN_140ac9a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acee10(undefined8 param_1,longlong param_2)

{
  FUN_140ac8c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acee30(undefined8 param_1,longlong param_2)

{
  FUN_140ac8760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acee50(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acee70(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140acee90(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pBooth) @%s,%d");
  return 0x140acac2d;
}




void Unwind_140aceed0(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140aceef0(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acef10(undefined8 param_1,longlong param_2)

{
  FUN_140ac8100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acef30(undefined8 param_1,longlong param_2)

{
  FUN_140ac8760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acef50(undefined8 param_1,longlong param_2)

{
  FUN_140ac8c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acef70(undefined8 param_1,longlong param_2)

{
  FUN_140ac9a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acef90(undefined8 param_1,longlong param_2)

{
  FUN_140aca200(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140acefb0(undefined8 param_1,longlong param_2)

{
  FUN_140aca9d0(*(longlong **)(param_2 + 0x50));
  return;
}




void Unwind_140acefd0(undefined8 param_1,longlong param_2)

{
  FUN_140aca9d0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x40));
  return;
}




void Unwind_140aceff0(void)

{
  FUN_140ac1160();
  return;
}




void Unwind_140acf010(undefined8 param_1,longlong param_2)

{
  FUN_140ac7bf0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140acf030(undefined8 param_1,longlong param_2)

{
  FUN_140ac80e0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140acf050(undefined8 param_1,longlong param_2)

{
  FUN_140ac9a40((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x88));
  return;
}




undefined8 Catch_140acf070(void)

{
  log_InlineLogCATCH_ERROR("CBoothMgr::Create @%s,%d");
  return 0x140acb1a0;
}




void Unwind_140acf0b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58));
  return;
}




undefined * Catch_140acf0d0(void)

{
  log_InlineLogCATCH_ERROR("CBoothMgr::CreateNew @%s,%d");
  return &DAT_140acb253;
}




void Unwind_140acf110(undefined8 param_1,longlong param_2)

{
  FUN_140acc190((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_140acf130(void)

{
  log_InlineLogCATCH_ERROR("booth::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_140acb4bb;
}




void Unwind_140acf180(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_140acf1a0(undefined8 param_1,longlong param_2)

{
  FUN_140acb270(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140acf1c0(undefined8 param_1,longlong param_2)

{
  FUN_140acb270(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140acf1e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pProvider) @%s,%d");
  return &DAT_140acb697;
}




void Unwind_140acf220(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140acf240(undefined8 param_1,longlong param_2)

{
  FUN_140acb270(*(undefined8 **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140acf260(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x140acb733;
}




undefined8 Catch_140acf2a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(m_pBoothMgr) @%s,%d");
  return 0x140acc019;
}




void Unwind_140acf2e0(undefined8 param_1,longlong param_2)

{
  FUN_140acc090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acf300(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140acf320(undefined8 param_1,longlong param_2)

{
  FUN_140acc090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acf340(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140acf360(undefined8 param_1,longlong param_2)

{
  FUN_140acc090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140acf380(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




undefined8 Catch_140acf3a0(void)

{
  log_InlineLogCATCH_ERROR("booth::CMsgAction::Process [%d] @%s,%d");
  return 0x140acc936;
}




void FUN_140acf3e7(void)

{
  _unlock(8);
  return;
}




void FUN_140acf400(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140acf430(void)

{
  _DAT_140ad7240 = 0xffffffff;
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




bool FUN_140acf4c0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=584 failed=1 total=659 */
