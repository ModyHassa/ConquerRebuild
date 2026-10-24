/* Decompiled by Ghidra 12.1.4 | program: RevampedHook.dll
   image base: 180000000 | functions: 368 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180001000(void)

{
  undefined1 auStack_78 [48];
  undefined8 **local_48;
  ulonglong *local_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18 [3];
  
  local_18[0] = DAT_1800152c0 ^ (ulonglong)auStack_78;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_38 = (undefined8 *)FUN_18000bb18(0x30);
  local_28 = 0x24;
  local_20 = 0x2f;
  *local_38 = 0x3631336436356662;
  local_38[1] = 0x39342d646335312d;
  local_38[2] = 0x2d633164612d3338;
  local_38[3] = 0x3236623235663236;
  *(undefined4 *)(local_38 + 4) = 0x31336331;
  *(undefined1 *)((longlong)local_38 + 0x24) = 0;
  local_48 = &local_38;
  local_40 = local_18;
  FUN_1800015d0(&DAT_180015400,(longlong *)&local_48);
  _eh_vector_destructor_iterator_(&local_38,0x20,1,thunk_FUN_180002290);
  atexit(FUN_18000d410);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800010d0(void)

{
  undefined1 auStack_78 [48];
  undefined8 *local_48;
  ulonglong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18 [3];
  
  local_18[0] = DAT_1800152c0 ^ (ulonglong)auStack_78;
  local_28 = 0xd;
  local_20 = 0xf;
  local_38 = 0x392e30362e343931;
  uStack_30 = 0x3738312e33;
  local_48 = &local_38;
  local_40 = local_18;
  FUN_1800015d0(&DAT_1800153e8,(longlong *)&local_48);
  _eh_vector_destructor_iterator_(&local_38,0x20,1,thunk_FUN_180002290);
  atexit(FUN_18000d4b0);
  return;
}




void FUN_180001190(void)

{
  DAT_180015078 = (char *)FUN_18000bb18(0x20);
  DAT_180015088 = 0x10;
  DAT_180015090 = 0x1f;
  builtin_strncpy(DAT_180015078,"C238xs65pjy7HU9Q",0x11);
  atexit(FUN_18000d550);
  return;
}




ulonglong FUN_1800011e0(undefined8 param_1,ulonglong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_2 = *param_2 + 1;
  uVar3 = *param_2;
  if (*param_2 == 0) {
    *param_2 = *param_2 - 1;
    return 0;
  }
  if (0xfff < uVar3) {
    if (uVar3 < uVar3 + 0x27) {
      lVar2 = FUN_18000bb18(uVar3 + 0x27);
      lVar4 = lVar2;
      if (lVar2 == 0) {
        lVar4 = 5;
        pcVar1 = (code *)swi(0x29);
        lVar2 = (*pcVar1)();
      }
      uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar3 - 8) = lVar4;
      *param_2 = *param_2 - 1;
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1800021e0();
  }
  uVar3 = FUN_18000bb18(uVar3);
  *param_2 = *param_2 - 1;
  return uVar3;
}




longlong * FUN_180001250(longlong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *_Memory;
  undefined1 *puVar7;
  longlong *_Dst;
  ulonglong uVar8;
  void *unaff_R14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    _Dst = param_1;
    if (0xf < uVar2) {
      _Dst = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst,param_2,param_3);
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
    return param_1;
  }
  uVar8 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180002300();
  }
  uVar6 = param_3 | 0xf;
  if ((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar6;
    if (uVar6 < uVar1) {
      uVar8 = uVar1;
    }
    uVar1 = uVar8 + 1;
    if (uVar1 == 0) {
      unaff_R14 = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar6 = uVar8 + 0x28;
        if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_1800021e0();
        }
        goto LAB_180001309;
      }
      unaff_R14 = (void *)FUN_18000bb18(uVar1);
    }
LAB_18000132c:
    param_1[2] = param_3;
    param_1[3] = uVar8;
    memcpy(unaff_R14,param_2,param_3);
    *(undefined1 *)((longlong)unaff_R14 + param_3) = 0;
    if (uVar2 < 0x10) goto LAB_180001386;
    pvVar3 = (void *)*param_1;
    _Memory = pvVar3;
    puVar7 = auStack_38;
    if ((0xfff < uVar2 + 1) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8), puVar7 = auStack_38, 0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) goto LAB_180001374;
  }
  else {
    uVar6 = 0x8000000000000027;
LAB_180001309:
    lVar5 = FUN_18000bb18(uVar6);
    if (lVar5 != 0) {
      unaff_R14 = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_R14 - 8) = lVar5;
      goto LAB_18000132c;
    }
LAB_180001374:
    _Memory = (void *)0x5;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)();
    puVar7 = auStack_30;
  }
  *(undefined8 *)(puVar7 + -8) = 0x180001386;
  free(_Memory);
LAB_180001386:
  *param_1 = (longlong)unaff_R14;
  return param_1;
}




void FUN_1800013c0(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *_Dst;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar6 = auStack_48;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180002300();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    memcpy(param_1,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    return;
  }
  uVar3 = param_3 | 0xf;
  if (uVar3 < 0x8000000000000000) goto LAB_18000143b;
  uVar4 = 0x8000000000000027;
  puVar6 = auStack_48;
  uVar3 = 0x7fffffffffffffff;
  do {
    *(undefined8 *)(puVar6 + -8) = 0x18000142f;
    lVar5 = FUN_18000bb18(uVar4);
    if (lVar5 != 0) {
      _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar5;
LAB_180001481:
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar3;
      *(undefined8 *)(puVar6 + -8) = 0x18000149a;
      memcpy(_Dst,param_2,param_3);
      *(undefined1 *)((longlong)_Dst + param_3) = 0;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar6 = puVar6 + 8;
LAB_18000143b:
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
      goto LAB_180001481;
    }
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar6 + -8) = 0x18000147e;
      _Dst = (void *)FUN_18000bb18(uVar1);
      goto LAB_180001481;
    }
    uVar4 = uVar3 + 0x28;
    if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar6 + -8) = &UNK_1800014b8;
      FUN_1800021e0();
    }
  } while( true );
}




undefined8 * FUN_1800014c0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *_Dst;
  undefined1 *puVar8;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar8 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  _Dst = (void *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180002300();
  }
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    return param_1;
  }
  uVar5 = uVar2 | 0xf;
  if (uVar5 < 0x8000000000000000) goto LAB_180001554;
  uVar6 = 0x8000000000000027;
  puVar8 = auStack_48;
  uVar5 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined8 *)(puVar8 + -8) = 0x180001545;
    lVar7 = FUN_18000bb18(uVar6);
    if (lVar7 != 0) break;
    pcVar3 = (code *)swi(0x29);
    uVar5 = (*pcVar3)(5);
    puVar8 = puVar8 + 8;
LAB_180001554:
    if (uVar5 < 0x16) {
      uVar5 = 0x16;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 == 0) goto LAB_180001598;
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar8 + -8) = 0x180001598;
      _Dst = (void *)FUN_18000bb18(uVar1);
      goto LAB_180001598;
    }
    uVar6 = uVar5 + 0x28;
    if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar8 + -8) = &UNK_1800015ca;
      FUN_1800021e0();
    }
  }
  _Dst = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar7;
LAB_180001598:
  *param_1 = _Dst;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  *(undefined8 *)(puVar8 + -8) = 0x1800015b2;
  memcpy(_Dst,param_2,uVar2 + 1);
  return param_1;
}




ulonglong * FUN_1800015d0(ulonglong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [56];
  
  puVar10 = auStack_68;
  puVar9 = auStack_68;
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)param_2[1];
  puVar11 = (undefined8 *)*param_2;
  uVar7 = (longlong)puVar1 - (longlong)puVar11 >> 5;
  if (uVar7 != 0) {
    if (0x7ffffffffffffff < uVar7) {
      FUN_180002320();
      pcVar2 = (code *)swi(3);
      puVar5 = (ulonglong *)(*pcVar2)();
      return puVar5;
    }
    uVar7 = uVar7 * 0x20;
    if (uVar7 != 0) {
      if (uVar7 < 0x1000) {
        uVar4 = FUN_18000bb18(uVar7);
        puVar10 = auStack_68;
      }
      else {
        if (uVar7 + 0x27 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800021e0();
        }
        lVar3 = FUN_18000bb18(uVar7 + 0x27);
        lVar6 = lVar3;
        if (lVar3 == 0) {
          lVar6 = 5;
          pcVar2 = (code *)swi(0x29);
          lVar3 = (*pcVar2)();
          puVar9 = auStack_60;
        }
        uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar6;
        puVar10 = puVar9;
      }
    }
    *param_1 = uVar4;
    param_1[1] = uVar4;
    param_1[2] = uVar4 + uVar7;
    *(ulonglong **)(puVar10 + 0x20) = param_1;
    puVar8 = (undefined8 *)*param_1;
    *(undefined8 **)(puVar10 + 0x28) = puVar8;
    *(undefined8 **)(puVar10 + 0x30) = puVar8;
    *(ulonglong **)(puVar10 + 0x38) = param_1;
    for (; puVar11 != puVar1; puVar11 = puVar11 + 4) {
      *(undefined8 *)(puVar10 + -8) = 0x18000169c;
      FUN_1800014c0(puVar8,puVar11);
      puVar8 = puVar8 + 4;
      *(undefined8 **)(puVar10 + 0x30) = puVar8;
    }
    *(undefined8 **)(puVar10 + 0x28) = puVar8;
    param_1[1] = (ulonglong)puVar8;
    *(undefined8 *)(puVar10 + 0x20) = 0;
  }
  return param_1;
}




undefined8 * FUN_1800016e0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180001730(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180001780(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_alloc::vftable;
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __std_exception_copy(param_1 + 8);
  return this;
}




void FUN_180001810(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 4) {
    FUN_180002290(plVar2);
  }
  return;
}




void FUN_180001870(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




void FUN_180001890(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




undefined8 * FUN_1800018d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001920(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001970(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800019c0(longlong *param_1)

{
  LSTATUS LVar1;
  undefined1 auStackY_108 [32];
  DWORD local_d8;
  DWORD local_d4 [3];
  HKEY local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  BYTE local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1800152c0 ^ (ulonglong)auStackY_108;
  local_d4[1] = 0;
  local_c0 = param_1;
  LVar1 = RegOpenKeyExA((HKEY)0xffffffff80000002,"SOFTWARE\\Microsoft\\Cryptography",0,0x20119,&local_c8);
  if (LVar1 == 0) {
    local_98[0] = '\0';
    local_98[1] = '\0';
    local_98[2] = '\0';
    local_98[3] = '\0';
    local_98[4] = '\0';
    local_98[5] = '\0';
    local_98[6] = '\0';
    local_98[7] = '\0';
    local_98[8] = '\0';
    local_98[9] = '\0';
    local_98[10] = '\0';
    local_98[0xb] = '\0';
    local_98[0xc] = '\0';
    local_98[0xd] = '\0';
    local_98[0xe] = '\0';
    local_98[0xf] = '\0';
    local_98[0x10] = '\0';
    local_98[0x11] = '\0';
    local_98[0x12] = '\0';
    local_98[0x13] = '\0';
    local_98[0x14] = '\0';
    local_98[0x15] = '\0';
    local_98[0x16] = '\0';
    local_98[0x17] = '\0';
    local_98[0x18] = '\0';
    local_98[0x19] = '\0';
    local_98[0x1a] = '\0';
    local_98[0x1b] = '\0';
    local_98[0x1c] = '\0';
    local_98[0x1d] = '\0';
    local_98[0x1e] = '\0';
    local_98[0x1f] = '\0';
    local_98[0x20] = '\0';
    local_98[0x21] = '\0';
    local_98[0x22] = '\0';
    local_98[0x23] = '\0';
    local_98[0x24] = '\0';
    local_98[0x25] = '\0';
    local_98[0x26] = '\0';
    local_98[0x27] = '\0';
    local_98[0x28] = '\0';
    local_98[0x29] = '\0';
    local_98[0x2a] = '\0';
    local_98[0x2b] = '\0';
    local_98[0x2c] = '\0';
    local_98[0x2d] = '\0';
    local_98[0x2e] = '\0';
    local_98[0x2f] = '\0';
    local_98[0x30] = '\0';
    local_98[0x31] = '\0';
    local_98[0x32] = '\0';
    local_98[0x33] = '\0';
    local_98[0x34] = '\0';
    local_98[0x35] = '\0';
    local_98[0x36] = '\0';
    local_98[0x37] = '\0';
    local_98[0x38] = '\0';
    local_98[0x39] = '\0';
    local_98[0x3a] = '\0';
    local_98[0x3b] = '\0';
    local_98[0x3c] = '\0';
    local_98[0x3d] = '\0';
    local_98[0x3e] = '\0';
    local_98[0x3f] = '\0';
    local_98[0x40] = '\0';
    local_98[0x41] = '\0';
    local_98[0x42] = '\0';
    local_98[0x43] = '\0';
    local_98[0x44] = '\0';
    local_98[0x45] = '\0';
    local_98[0x46] = '\0';
    local_98[0x47] = '\0';
    local_98[0x48] = '\0';
    local_98[0x49] = '\0';
    local_98[0x4a] = '\0';
    local_98[0x4b] = '\0';
    local_98[0x4c] = '\0';
    local_98[0x4d] = '\0';
    local_98[0x4e] = '\0';
    local_98[0x4f] = '\0';
    local_98[0x50] = '\0';
    local_98[0x51] = '\0';
    local_98[0x52] = '\0';
    local_98[0x53] = '\0';
    local_98[0x54] = '\0';
    local_98[0x55] = '\0';
    local_98[0x56] = '\0';
    local_98[0x57] = '\0';
    local_98[0x58] = '\0';
    local_98[0x59] = '\0';
    local_98[0x5a] = '\0';
    local_98[0x5b] = '\0';
    local_98[0x5c] = '\0';
    local_98[0x5d] = '\0';
    local_98[0x5e] = '\0';
    local_98[0x5f] = '\0';
    local_98[0x60] = '\0';
    local_98[0x61] = '\0';
    local_98[0x62] = '\0';
    local_98[99] = '\0';
    local_98[100] = '\0';
    local_98[0x65] = '\0';
    local_98[0x66] = '\0';
    local_98[0x67] = '\0';
    local_98[0x68] = '\0';
    local_98[0x69] = '\0';
    local_98[0x6a] = '\0';
    local_98[0x6b] = '\0';
    local_98[0x6c] = '\0';
    local_98[0x6d] = '\0';
    local_98[0x6e] = '\0';
    local_98[0x6f] = '\0';
    local_98[0x70] = '\0';
    local_98[0x71] = '\0';
    local_98[0x72] = '\0';
    local_98[0x73] = '\0';
    local_98[0x74] = '\0';
    local_98[0x75] = '\0';
    local_98[0x76] = '\0';
    local_98[0x77] = '\0';
    local_98[0x78] = '\0';
    local_98[0x79] = '\0';
    local_98[0x7a] = '\0';
    local_98[0x7b] = '\0';
    local_98[0x7c] = '\0';
    local_98[0x7d] = '\0';
    local_98[0x7e] = '\0';
    local_98[0x7f] = '\0';
    local_d8 = 0x7f;
    local_d4[0] = 0;
    lStack_b0 = 0;
    local_a8 = 0;
    lStack_a0 = 0xf;
    local_b8 = 0;
    LVar1 = RegQueryValueExA(local_c8,"MachineGuid",(LPDWORD)0x0,local_d4,local_98,&local_d8);
    if ((LVar1 == 0) && (local_d4[0] == 1)) {
      if ((local_d8 != 0) && (local_98[local_d8 - 1] == '\0')) {
        local_d8 = local_d8 - 1;
      }
      FUN_180001250(&local_b8,local_98,(ulonglong)local_d8);
    }
    RegCloseKey(local_c8);
    *param_1 = local_b8;
    param_1[1] = lStack_b0;
    param_1[2] = local_a8;
    param_1[3] = lStack_a0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180001b40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4 [3];
  longlong *local_98;
  undefined8 ***local_90;
  longlong lStack_88;
  longlong local_80;
  ulonglong uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1800152c0 ^ (ulonglong)auStack_d8;
  local_a4[1] = 0;
  local_b8 = 0;
  local_98 = param_1;
  lVar2 = InternetOpenA("RevampedHook",1,0,0);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_a8 = 5000;
    InternetSetOptionA(lVar2,2,&local_a8,4);
    InternetSetOptionA(lVar2,6,&local_a8,4);
    InternetSetOptionA(lVar2,5,&local_a8,4);
    local_b0 = 0;
    local_b8 = 0x84000100;
    lVar3 = InternetOpenUrlA(lVar2,"http://checkip.amazonaws.com",0,0);
    lStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0xf;
    local_90 = (undefined8 ****)0x0;
    if (lVar3 != 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_a4[0] = 0;
      iVar1 = InternetReadFile(lVar3,&local_68,0x3f,local_a4);
      if ((iVar1 != 0) && (local_a4[0] != 0)) {
        if (0x3f < (ulonglong)local_a4[0]) {
                    /* WARNING: Subroutine does not return */
          FUN_18000bed4();
        }
        *(undefined1 *)((longlong)&local_68 + (ulonglong)local_a4[0]) = 0;
        sVar4 = strlen((char *)&local_68);
        FUN_180001250((longlong *)&local_90,&local_68,sVar4);
        while (local_80 != 0) {
          ppppuVar6 = &local_90;
          if (0xf < uStack_78) {
            ppppuVar6 = (undefined8 ****)local_90;
          }
          lVar5 = local_80 + -1;
          if (*(char *)(lVar5 + (longlong)ppppuVar6) != '\n') {
            ppppuVar6 = &local_90;
            if (0xf < uStack_78) {
              ppppuVar6 = (undefined8 ****)local_90;
            }
            if (*(char *)(lVar5 + (longlong)ppppuVar6) != '\r') {
              ppppuVar6 = &local_90;
              if (0xf < uStack_78) {
                ppppuVar6 = (undefined8 ****)local_90;
              }
              if (*(char *)(lVar5 + (longlong)ppppuVar6) != ' ') {
                ppppuVar6 = &local_90;
                if (0xf < uStack_78) {
                  ppppuVar6 = (undefined8 ****)local_90;
                }
                if (*(char *)(lVar5 + (longlong)ppppuVar6) != '\t') break;
              }
            }
          }
          local_80 = lVar5;
          ppppuVar6 = &local_90;
          if (0xf < uStack_78) {
            ppppuVar6 = (undefined8 ****)local_90;
          }
          *(undefined1 *)(lVar5 + (longlong)ppppuVar6) = 0;
        }
      }
      InternetCloseHandle(lVar3);
    }
    InternetCloseHandle(lVar2);
    *param_1 = (longlong)local_90;
    param_1[1] = lStack_88;
    param_1[2] = local_80;
    param_1[3] = uStack_78;
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_180001dc0(void)

{
  code *pcVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [32];
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  puVar10 = auStack_78;
  local_10 = DAT_1800152c0 ^ (ulonglong)auStack_78;
  FUN_1800019c0(local_50);
  pcVar4 = DAT_180015408;
  pcVar3 = DAT_180015400;
  if (local_40 != 0) {
    for (; pcVar3 != pcVar4; pcVar3 = pcVar3 + 0x20) {
      pcVar9 = pcVar3;
      if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
        pcVar9 = *(char **)pcVar3;
      }
      pcVar8 = (char *)local_50;
      if (0xf < local_38) {
        pcVar8 = (char *)CONCAT71(local_50[0]._1_7_,(char)local_50[0]);
      }
      iVar5 = _stricmp(pcVar8,pcVar9);
      if (iVar5 == 0) {
        FUN_180002020("[Auth] HWID = %s  [OK]");
        uVar7 = 1;
        goto LAB_180001fac;
      }
    }
  }
  FUN_180002020(&DAT_18000e5d0);
  FUN_180001b40(local_30);
  pcVar4 = DAT_1800153f0;
  pcVar3 = DAT_1800153e8;
  if (local_20 != 0) {
    for (; pcVar3 != pcVar4; pcVar3 = pcVar3 + 0x20) {
      pcVar9 = pcVar3;
      if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
        pcVar9 = *(char **)pcVar3;
      }
      pcVar8 = (char *)local_30;
      if (0xf < local_18) {
        pcVar8 = (char *)CONCAT71(local_30[0]._1_7_,(char)local_30[0]);
      }
      iVar5 = _stricmp(pcVar8,pcVar9);
      if (iVar5 == 0) {
        FUN_180002020("[Auth] IP   = %s  [OK]");
        uVar7 = 1;
        goto LAB_180001f58;
      }
    }
  }
  FUN_180002020("[Auth] IP   = %s  [DENY]");
  FUN_180002020(&DAT_18000e650);
  uVar7 = 0;
LAB_180001f58:
  puVar10 = auStack_78;
  if (0xf < local_18) {
    pvVar2 = (void *)CONCAT71(local_30[0]._1_7_,(char)local_30[0]);
    pvVar6 = pvVar2;
    puVar10 = auStack_78;
    if ((0xfff < local_18 + 1) &&
       (pvVar6 = *(void **)((longlong)pvVar2 + -8), puVar10 = auStack_78, 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
      pcVar1 = (code *)swi(0x29);
      pvVar6 = (void *)(*pcVar1)(5);
      puVar10 = auStack_70;
    }
    *(undefined8 *)(puVar10 + -8) = 0x180001f98;
    free(pvVar6);
  }
  local_20 = 0;
  local_18 = 0xf;
  local_30[0]._0_1_ = '\0';
LAB_180001fac:
  if (0xf < local_38) {
    pvVar2 = (void *)CONCAT71(local_50[0]._1_7_,(char)local_50[0]);
    pvVar6 = pvVar2;
    if ((0xfff < local_38 + 1) && (pvVar6 = *(void **)((longlong)pvVar2 + -8), 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
    *(undefined8 *)(puVar10 + -8) = 0x180001fe3;
    free(pvVar6);
  }
  *(undefined8 *)(puVar10 + -8) = 0x180002006;
  return uVar7;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180002020(undefined8 param_1)

{
  DWORD nNumberOfBytesToWrite;
  int iVar1;
  ulonglong *puVar2;
  size_t sVar3;
  undefined1 auStackY_2068 [32];
  DWORD local_2038 [2];
  undefined8 local_2030;
  char local_2028 [4096];
  undefined1 local_1028 [4096];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x180002040;
  local_28 = DAT_1800152c0 ^ (ulonglong)auStackY_2068;
  puVar2 = (ulonglong *)FUN_180002360();
  __stdio_common_vsprintf(*puVar2 | 2,local_2028,0x1000,param_1);
  sVar3 = strlen(local_2028);
  while ((sVar3 != 0 && ((local_2028[sVar3 - 1] == '\n' || (local_2028[sVar3 - 1] == '\r'))))) {
    if (0xfff < sVar3 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_18000bed4();
    }
    local_2028[sVar3 - 1] = '\0';
    sVar3 = sVar3 - 1;
  }
  if ((DAT_180015000 != (HANDLE)0xffffffffffffffff) &&
     (nNumberOfBytesToWrite = snprintf(local_1028,0x1000,&DAT_18000e540,local_2028), 0 < (int)nNumberOfBytesToWrite)) {
    if (0xfff < (int)nNumberOfBytesToWrite) {
      nNumberOfBytesToWrite = 0xfff;
    }
    local_2030 = &DAT_180015010;
    iVar1 = _Mtx_lock(&DAT_180015010);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (DAT_18001505c == 0x7fffffff) {
      DAT_18001505c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    WriteFile(DAT_180015000,local_1028,nNumberOfBytesToWrite,local_2038,(LPOVERLAPPED)0x0);
    _Mtx_unlock(&DAT_180015010);
  }
  return;
}




void FUN_1800021a0(undefined8 param_1,void *param_2,longlong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  if (0xfff < param_3 + 1U) {
    puVar1 = (undefined8 *)((longlong)param_2 + -8);
    param_2 = (void *)((longlong)param_2 + (-8 - (longlong)*puVar1));
    if (param_2 < (void *)0x20) {
      free((void *)*puVar1);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
  }
  free(param_2);
  return;
}




void FUN_1800021e0(void)

{
  undefined8 local_28 [5];
  
  FUN_180001780(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180013720);
}




void FUN_180002200(longlong *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar4 != plVar1; plVar4 = plVar4 + 4) {
      FUN_180002290(plVar4);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    puVar5 = auStack_28;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar5 = auStack_28, 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      pcVar3 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar3)(5);
      puVar5 = auStack_20;
    }
    *(undefined8 *)(puVar5 + -8) = 0x180002276;
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_180002290(longlong *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    puVar3 = auStack_28;
    if ((0xfff < param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_28, 0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
      pcVar2 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar2)(5);
      puVar3 = auStack_20;
    }
    *(undefined8 *)(puVar3 + -8) = 0x1800022d8;
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}




void FUN_180002300(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("string too long");
}




void FUN_180002320(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}




char * FUN_180002340(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




undefined * FUN_180002360(void)

{
  return &DAT_1800153e0;
}




/* Library Function - Single Match
    snprintf
   
   Library: Visual Studio 2019 Release */

int snprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180002360();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




undefined8 * FUN_1800023d0(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  size_t _Size;
  code *pcVar3;
  size_t _Size_00;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *_Dst;
  undefined1 *puVar7;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  
  puVar7 = auStack_78;
  _Dst = (undefined8 *)0x0;
  local_58 = 0;
  _Size = param_2[2];
  _Size_00 = strlen(param_3);
  if (0x7fffffffffffffff - _Size < _Size_00) {
                    /* WARNING: Subroutine does not return */
    FUN_180002300();
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = _Size + _Size_00;
  if (uVar2 < 0x10) {
    uVar4 = 0xf;
    _Dst = param_1;
  }
  else {
    uVar4 = uVar2 | 0xf;
    puVar7 = auStack_78;
    if (uVar4 < 0x8000000000000000) goto LAB_180002468;
    uVar5 = 0x8000000000000027;
    puVar7 = auStack_78;
    uVar4 = 0x7fffffffffffffff;
    while( true ) {
      *(undefined8 *)(puVar7 + -8) = 0x18000245c;
      lVar6 = FUN_18000bb18(uVar5);
      if (lVar6 != 0) {
        _Dst = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        _Dst[-1] = lVar6;
        *param_1 = _Dst;
        goto LAB_1800024ba;
      }
      pcVar3 = (code *)swi(0x29);
      uVar4 = (*pcVar3)(5);
      puVar7 = puVar7 + 8;
LAB_180002468:
      if (uVar4 < 0x16) {
        uVar4 = 0x16;
      }
      uVar1 = uVar4 + 1;
      if (uVar1 == 0) break;
      if (uVar1 < 0x1000) {
        *(undefined8 *)(puVar7 + -8) = 0x1800024aa;
        _Dst = (undefined8 *)FUN_18000bb18(uVar1);
        break;
      }
      uVar5 = uVar4 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar7 + -8) = &UNK_18000250b;
        FUN_1800021e0();
      }
    }
    *param_1 = _Dst;
  }
LAB_1800024ba:
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined8 *)(puVar7 + -8) = 0x1800024d0;
  memcpy(_Dst,param_2,_Size);
  *(undefined8 *)(puVar7 + -8) = 0x1800024df;
  memcpy((void *)(_Size + (longlong)_Dst),param_3,_Size_00);
  *(undefined1 *)(uVar2 + (longlong)_Dst) = 0;
  *(undefined4 *)(puVar7 + 0x20) = 1;
  return param_1;
}




void FUN_180002510(undefined4 *param_1,undefined4 param_2)

{
  BOOL BVar1;
  DWORD local_res18 [4];
  
  BVar1 = VirtualProtect(param_1,4,4,local_res18);
  if (BVar1 != 0) {
    *param_1 = param_2;
    VirtualProtect(param_1,4,local_res18[0],local_res18);
  }
  return;
}




longlong * FUN_180002560(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  size_t _Size;
  ulonglong uVar1;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  longlong *_Buf2;
  longlong *plVar4;
  
  plVar3 = (longlong *)((*(ulonglong *)(param_1 + 0x30) & param_4) * 0x10 + *(longlong *)(param_1 + 0x18));
  plVar4 = (longlong *)plVar3[1];
  if (plVar4 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  plVar3 = (longlong *)*plVar3;
  _Size = param_3[2];
  uVar1 = param_3[3];
  while( true ) {
    _Buf2 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      _Buf2 = (longlong *)*_Buf2;
    }
    _Buf1 = param_3;
    if (0xf < uVar1) {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == plVar4[4]) && ((_Size == 0 || (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0)))) break;
    if (plVar4 == plVar3) {
      *param_2 = (longlong)plVar4;
      param_2[1] = 0;
      return param_2;
    }
    plVar4 = (longlong *)plVar4[1];
  }
  *param_2 = *plVar4;
  param_2[1] = (longlong)plVar4;
  return param_2;
}




void FUN_180002630(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Memory;
  
  *(undefined8 *)param_2[1] = 0;
  _Memory = (undefined8 *)*param_2;
  while (_Memory != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*_Memory;
    FUN_180002290(_Memory + 6);
    FUN_180002290(_Memory + 2);
    free(_Memory);
    _Memory = puVar1;
  }
  return;
}




void FUN_1800026b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Memory;
  
  *(undefined8 *)param_2[1] = 0;
  _Memory = (undefined8 *)*param_2;
  while (_Memory != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*_Memory;
    FUN_180003150(_Memory + 9);
    FUN_180002630(_Memory + 7,(undefined8 *)_Memory[7]);
    free((void *)_Memory[7]);
    FUN_180002290(_Memory + 2);
    free(_Memory);
    _Memory = puVar1;
  }
  return;
}




void FUN_180002740(undefined8 param_1,void *param_2)

{
  FUN_180003150((longlong *)((longlong)param_2 + 0x48));
  FUN_180002630((longlong)param_2 + 0x38,*(undefined8 **)((longlong)param_2 + 0x38));
  free(*(void **)((longlong)param_2 + 0x38));
  FUN_180002290((longlong *)((longlong)param_2 + 0x10));
  free(param_2);
  return;
}




longlong * FUN_1800027b0(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *_Buf1;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined8 *local_58;
  longlong local_50;
  
  puVar10 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar10 = (undefined8 *)*param_3;
  }
  uVar9 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (param_3[2] != 0) {
    do {
      uVar9 = (uVar9 ^ *(byte *)((longlong)puVar10 + uVar4)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  FUN_180002560((longlong)param_1,(longlong *)&local_58,param_3,uVar9);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_18000bb18(0x50);
  puVar10 = puVar3 + 2;
  FUN_1800014c0(puVar10,param_3);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0xf;
  *(undefined1 *)(puVar3 + 6) = 0;
  uVar4 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar4) {
    fVar11 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar5 = 0;
    if ((9.223372e+18 <= fVar11) && (fVar11 = fVar11 - 9.223372e+18, fVar11 < 9.223372e+18)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar5)) {
      uVar6 = (longlong)fVar11 + lVar5;
    }
    uVar8 = uVar4;
    if ((uVar4 < uVar6) && ((0x1ff < uVar4 || (uVar8 = uVar4 * 8, uVar4 * 8 < uVar6)))) {
      uVar8 = uVar6;
    }
    FUN_180005970((longlong)param_1,uVar8);
    puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar7 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar3[4];
      local_58 = puVar7;
      while( true ) {
        puVar7 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar7 = (undefined8 *)*puVar7;
        }
        _Buf1 = puVar10;
        if (0xf < (ulonglong)puVar3[5]) {
          _Buf1 = (undefined8 *)*puVar10;
        }
        if ((_Size == local_58[4]) && ((_Size == 0 || (iVar2 = memcmp(_Buf1,puVar7,_Size), iVar2 == 0)))) break;
        if (local_58 == puVar1) goto LAB_180002a0f;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_180002a0f:
  puVar10 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar3 = local_58;
  puVar3[1] = puVar10;
  *puVar10 = puVar3;
  local_58[1] = puVar3;
  lVar5 = *(longlong *)(param_1 + 6);
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar9;
  puVar7 = *(undefined8 **)(lVar5 + uVar9 * 0x10);
  if (puVar7 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar5 + uVar9 * 0x10) = puVar3;
  }
  else {
    if (puVar7 == local_58) {
      *(undefined8 **)(lVar5 + uVar9 * 0x10) = puVar3;
      goto LAB_180002a5e;
    }
    if (*(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) != puVar10) goto LAB_180002a5e;
  }
  *(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) = puVar3;
LAB_180002a5e:
  *param_2 = (longlong)puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




longlong * FUN_180002a90(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 *local_58;
  longlong local_50;
  
  puVar9 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar9 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)((longlong)puVar9 + uVar5)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_180002560((longlong)param_1,(longlong *)&local_58,param_3,uVar8);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_18000bb18(0x70);
  puVar9 = puVar4 + 2;
  FUN_1800014c0(puVar9,param_3);
  FUN_180003010((undefined4 *)(puVar4 + 6));
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  puVar7 = local_58;
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
    FUN_180005e30(param_1);
    puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar7 = *(undefined8 **)(param_1 + 2);
    if (puVar6 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar4[4];
      puVar7 = puVar6;
      while( true ) {
        puVar6 = puVar7 + 2;
        if (0xf < (ulonglong)puVar7[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        _Buf1 = puVar9;
        if (0xf < (ulonglong)puVar4[5]) {
          _Buf1 = (undefined8 *)*puVar9;
        }
        if ((_Size == puVar7[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar6,_Size), iVar3 == 0)))) break;
        if (puVar7 == puVar1) goto LAB_180002c79;
        puVar7 = (undefined8 *)puVar7[1];
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
LAB_180002c79:
  puVar9 = (undefined8 *)puVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = puVar7;
  puVar4[1] = puVar9;
  *puVar9 = puVar4;
  puVar7[1] = puVar4;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  puVar6 = *(undefined8 **)(lVar2 + uVar8 * 0x10);
  if (puVar6 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar6 == puVar7) {
      *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar4;
      goto LAB_180002ccd;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) != puVar9) goto LAB_180002ccd;
  }
  *(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) = puVar4;
LAB_180002ccd:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




longlong * FUN_180002d00(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *_Buf1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined8 *local_58;
  longlong local_50;
  
  puVar10 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar10 = (undefined8 *)*param_3;
  }
  uVar9 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[2] != 0) {
    do {
      uVar9 = (uVar9 ^ *(byte *)((longlong)puVar10 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_3[2]);
  }
  FUN_180002560((longlong)param_1,(longlong *)&local_58,param_3,uVar9);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_18000bb18(0x70);
  puVar10 = puVar5 + 2;
  *puVar10 = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  uVar3 = param_3[1];
  *puVar10 = *param_3;
  puVar5[3] = uVar3;
  uVar3 = param_3[3];
  puVar5[4] = param_3[2];
  puVar5[5] = uVar3;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  FUN_180003010((undefined4 *)(puVar5 + 6));
  fVar11 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  puVar8 = local_58;
  if (*param_1 <= fVar11 && fVar11 != *param_1) {
    FUN_180005e30(param_1);
    puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar8 = *(undefined8 **)(param_1 + 2);
    if (puVar7 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar5[4];
      puVar8 = puVar7;
      while( true ) {
        puVar7 = puVar8 + 2;
        if (0xf < (ulonglong)puVar8[5]) {
          puVar7 = (undefined8 *)*puVar7;
        }
        _Buf1 = puVar10;
        if (0xf < (ulonglong)puVar5[5]) {
          _Buf1 = (undefined8 *)*puVar10;
        }
        if ((_Size == puVar8[4]) && ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar7,_Size), iVar4 == 0)))) break;
        if (puVar8 == puVar1) goto LAB_180002eff;
        puVar8 = (undefined8 *)puVar8[1];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180002eff:
  puVar10 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar8;
  puVar5[1] = puVar10;
  *puVar10 = puVar5;
  puVar8[1] = puVar5;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar9;
  puVar7 = *(undefined8 **)(lVar2 + uVar9 * 0x10);
  if (puVar7 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar9 * 0x10) = puVar5;
  }
  else {
    if (puVar7 == puVar8) {
      *(undefined8 **)(lVar2 + uVar9 * 0x10) = puVar5;
      goto LAB_180002f4e;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar9 * 0x10) != puVar10) goto LAB_180002f4e;
  }
  *(undefined8 **)(lVar2 + 8 + uVar9 * 0x10) = puVar5;
LAB_180002f4e:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




void FUN_180002f80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((1 < uVar3) && ((param_3 < param_1 || (param_1 + (uVar3 - 1) < param_3)))) {
    uVar1 = *param_3;
    puVar4 = param_1;
    for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    }
    param_1 = param_1 + (uVar3 & 0xfffffffffffffffe);
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}




undefined4 * FUN_180003010(undefined4 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_18000bb18(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 2) = lVar1;
  *(ulonglong *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_180005820((ulonglong *)(param_1 + 6),0x10,*(undefined8 *)(param_1 + 2));
  return param_1;
}




void FUN_1800030d0(longlong param_1)

{
  FUN_180003150((longlong *)(param_1 + 0x18));
  FUN_180002630(param_1 + 8,*(undefined8 **)(param_1 + 8));
  free(*(void **)(param_1 + 8));
  return;
}




void FUN_180003110(longlong param_1)

{
  FUN_180003150((longlong *)(param_1 + 0x18));
  FUN_1800026b0(param_1 + 8,*(undefined8 **)(param_1 + 8));
  free(*(void **)(param_1 + 8));
  return;
}




void FUN_180003150(longlong *param_1)

{
  code *pcVar1;
  void *_Memory;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    _Memory = pvVar2;
    puVar3 = auStack_28;
    if (0xfff < (ulonglong)((param_1[2] - (longlong)pvVar2 >> 3) * 8)) {
      _Memory = *(void **)((longlong)pvVar2 + -8);
      pvVar2 = (void *)((longlong)pvVar2 + (-8 - (longlong)_Memory));
      puVar3 = auStack_28;
      if ((void *)0x1f < pvVar2) {
        pcVar1 = (code *)swi(0x29);
        _Memory = pvVar2;
        (*pcVar1)(5);
        puVar3 = auStack_20;
      }
    }
    *(undefined8 *)(puVar3 + -8) = 0x1800031a5;
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_1800031c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_180002290((longlong *)(lVar1 + 0x30));
    FUN_180002290((longlong *)(lVar1 + 0x10));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
  }
  return;
}




void FUN_180003220(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_180003150((longlong *)(lVar1 + 0x48));
    FUN_180002630(lVar1 + 0x38,*(undefined8 **)(lVar1 + 0x38));
    free(*(void **)(lVar1 + 0x38));
    FUN_180002290((longlong *)(lVar1 + 0x10));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}




void FUN_1800032a0(undefined8 *param_1)

{
  FUN_180002630(param_1,(undefined8 *)*param_1);
  free((void *)*param_1);
  return;
}




void FUN_1800032d0(undefined8 *param_1)

{
  FUN_1800026b0(param_1,(undefined8 *)*param_1);
  free((void *)*param_1);
  return;
}




void FUN_180003300(longlong *param_1)

{
  FUN_180002290(param_1 + 4);
  FUN_180002290(param_1);
  return;
}




void FUN_180003330(longlong *param_1)

{
  FUN_180003150(param_1 + 7);
  FUN_180002630(param_1 + 5,(undefined8 *)param_1[5]);
  free((void *)param_1[5]);
  FUN_180002290(param_1);
  return;
}




void FUN_180003390(longlong param_1)

{
  FUN_180003150((longlong *)(param_1 + 0x18));
  FUN_180002630(param_1 + 8,*(undefined8 **)(param_1 + 8));
  free(*(void **)(param_1 + 8));
  return;
}




void FUN_1800033d0(longlong param_1)

{
  FUN_180003150((longlong *)(param_1 + 0x18));
  FUN_1800026b0(param_1 + 8,*(undefined8 **)(param_1 + 8));
  free(*(void **)(param_1 + 8));
  return;
}




void FUN_180003410(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 8);
    if (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x38) >> 3) {
      FUN_180005ee0(lVar1,(longlong *)*plVar2,plVar2);
      return;
    }
    FUN_180002630(lVar1 + 8,plVar2);
    *(undefined8 *)*(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 8);
    *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(lVar1 + 8);
    FUN_180002f80(*(undefined8 **)(lVar1 + 0x18),*(undefined8 **)(lVar1 + 0x20),&local_res8);
  }
  return;
}




void FUN_1800034a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    if (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x38) >> 3) {
      FUN_180006180(lVar1,(undefined8 *)*puVar2,puVar2);
      return;
    }
    FUN_1800026b0(lVar1 + 8,puVar2);
    *(undefined8 *)*(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 8);
    *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(lVar1 + 8);
    FUN_180002f80(*(undefined8 **)(lVar1 + 0x18),*(undefined8 **)(lVar1 + 0x20),&local_res8);
  }
  return;
}




longlong * FUN_180003550(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Memory;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_1 != param_2) {
    if (0xf < (ulonglong)param_1[3]) {
      pvVar1 = (void *)*param_1;
      _Memory = pvVar1;
      puVar4 = auStack_28;
      if ((0xfff < param_1[3] + 1U) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8), puVar4 = auStack_28, 0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
        pcVar2 = (code *)swi(0x29);
        _Memory = (void *)(*pcVar2)(5);
        puVar4 = auStack_20;
      }
      *(undefined8 *)(puVar4 + -8) = 0x1800035a4;
      free(_Memory);
    }
    param_1[3] = 0xf;
    param_1[2] = 0;
    *(undefined1 *)param_1 = 0;
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800035e0(longlong param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  uint7 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong local_res10;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  char local_68;
  undefined7 uStack_67;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1800152c0 ^ (ulonglong)auStack_98;
  puVar12 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar12 = (undefined8 *)*param_2;
  }
  uVar4 = 0;
  uVar11 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      uVar11 = (uVar11 ^ *(byte *)((longlong)puVar12 + uVar4)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_2[2]);
  }
  plVar3 = FUN_180002560(param_1,local_78,param_2,uVar11);
  lVar6 = plVar3[1];
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 8);
  }
  if (lVar6 == *(longlong *)(param_1 + 8)) {
    return local_res10;
  }
  FUN_1800014c0((undefined8 *)&local_68,(undefined8 *)(lVar6 + 0x30));
  pcVar10 = (char *)CONCAT71(uStack_67,local_68);
  pcVar5 = &local_68;
  if (0xf < local_50) {
    pcVar5 = pcVar10;
  }
  pcVar7 = pcVar5 + local_58;
  pcVar9 = &local_68;
  if (0xf < local_50) {
    pcVar9 = pcVar10;
  }
  uVar4 = local_50;
  lVar6 = local_58;
  if (pcVar9 != pcVar7) {
    do {
      iVar2 = tolower((int)*pcVar9);
      *pcVar5 = (char)iVar2;
      pcVar5 = pcVar5 + 1;
      pcVar9 = pcVar9 + 1;
    } while (pcVar9 != pcVar7);
    pcVar10 = (char *)CONCAT71(uStack_67,local_68);
    uVar4 = local_50;
    lVar6 = local_58;
  }
  pcVar5 = &local_68;
  if (0xf < uVar4) {
    pcVar5 = pcVar10;
  }
  uVar8 = (uint7)((ulonglong)pcVar7 >> 8);
  if ((lVar6 == 4) && (iVar2 = memcmp(pcVar5,&DAT_18000e6dc,4), iVar2 == 0)) {
LAB_180003766:
    pcVar7 = (char *)CONCAT71(uVar8,1);
  }
  else {
    pcVar5 = &local_68;
    if (0xf < uVar4) {
      pcVar5 = pcVar10;
    }
    if ((lVar6 == 1) && (iVar2 = memcmp(pcVar5,&DAT_18000e708,1), iVar2 == 0)) goto LAB_180003766;
    pcVar5 = &local_68;
    if (0xf < uVar4) {
      pcVar5 = pcVar10;
    }
    if ((lVar6 == 3) && (iVar2 = memcmp(pcVar5,&DAT_18000e70c,3), iVar2 == 0)) goto LAB_180003766;
    pcVar5 = &local_68;
    if (0xf < uVar4) {
      pcVar5 = pcVar10;
    }
    if ((lVar6 != 5) || (iVar2 = memcmp(pcVar5,"false",5), iVar2 != 0)) {
      pcVar5 = &local_68;
      if (0xf < uVar4) {
        pcVar5 = pcVar10;
      }
      if ((lVar6 != 1) || (iVar2 = memcmp(pcVar5,&DAT_18000e710,1), iVar2 != 0)) {
        pcVar5 = &local_68;
        if (0xf < uVar4) {
          pcVar5 = pcVar10;
        }
        if ((lVar6 != 2) || (iVar2 = memcmp(pcVar5,&DAT_18000e714,2), iVar2 != 0)) {
          if (uVar4 < 0x10) {
            return local_res10;
          }
          pcVar5 = pcVar10;
          if ((uVar4 + 1 < 0x1000) || (pcVar5 = *(char **)(pcVar10 + -8), pcVar10 + (-8 - (longlong)pcVar5) < (char *)0x20)) {
            free(pcVar5);
            return local_res10;
          }
          goto LAB_1800038a4;
        }
      }
    }
    pcVar7 = (char *)((ulonglong)uVar8 << 8);
  }
  if (0xf < uVar4) {
    pcVar5 = pcVar10;
    if ((0xfff < uVar4 + 1) && (pcVar5 = *(char **)(pcVar10 + -8), (char *)0x1f < pcVar10 + (-8 - (longlong)pcVar5))) {
LAB_1800038a4:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return (ulonglong)pcVar7;
    }
    free(pcVar5);
  }
  return local_res10;
}




ulonglong FUN_1800038b0(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong local_18 [2];
  
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  uVar3 = 0;
  uVar5 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      uVar5 = (uVar5 ^ *(byte *)((longlong)puVar4 + uVar3)) * 0x100000001b3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_2[2]);
  }
  plVar2 = FUN_180002560(param_1,local_18,param_2,uVar5);
  lVar1 = plVar2[1];
  if ((lVar1 == 0) || (lVar1 == *(longlong *)(param_1 + 8))) {
    uVar3 = (ulonglong)param_3;
  }
  else {
    uVar3 = FUN_1800063f0((char *)(lVar1 + 0x30),(longlong *)0x0,10);
  }
  return uVar3;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001800049f4) */
/* WARNING: Removing unreachable block (ram,0x00018000493f) */
/* WARNING: Removing unreachable block (ram,0x0001800049ba) */
/* WARNING: Removing unreachable block (ram,0x000180004a01) */
/* WARNING: Removing unreachable block (ram,0x000180004a16) */
/* WARNING: Removing unreachable block (ram,0x000180004a1d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003960(void)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  void *pvVar6;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  int iVar7;
  BOOL BVar8;
  size_t sVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  undefined8 *puVar13;
  void *pvVar14;
  undefined1 (*pauVar15) [16];
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 (**ppauVar19) [16];
  undefined1 *puVar20;
  undefined8 *unaff_RSI;
  byte *pbVar21;
  undefined1 *puVar22;
  uint uVar23;
  ulonglong unaff_R14;
  void *unaff_R15;
  undefined8 uStack_470;
  undefined1 auStack_468 [8];
  undefined1 auStack_460 [24];
  uint local_448 [2];
  undefined1 local_440 [16];
  undefined8 local_430 [2];
  byte local_420 [32];
  undefined8 local_400;
  undefined8 auStack_3f8 [3];
  ulonglong local_3e0 [5];
  float local_3b8 [2];
  undefined8 *local_3b0 [2];
  longlong local_3a0 [3];
  ulonglong local_388;
  ulonglong local_378 [4];
  char local_358 [256];
  uint local_258;
  undefined1 uStack_254;
  undefined1 uStack_253;
  undefined1 uStack_252;
  undefined4 uStack_251;
  undefined1 uStack_24d;
  undefined4 uStack_24c;
  undefined8 local_248;
  void *local_240;
  undefined1 (*local_238) [16];
  undefined8 uStack_230;
  undefined1 *local_228;
  void *pvStack_220;
  void *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  void *local_200;
  undefined1 (*local_1f8) [16];
  undefined8 uStack_1f0;
  undefined1 *local_1e8;
  void *pvStack_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  ulonglong local_1c0;
  char local_1b8;
  undefined7 uStack_1b7;
  undefined8 local_1a8;
  ulonglong local_1a0;
  longlong local_198 [4];
  undefined8 local_178;
  undefined8 uStack_170;
  CHAR local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_1800152c0 ^ (ulonglong)auStack_468;
  puVar13 = (undefined8 *)0x0;
  local_448[0] = 0;
  GetModuleFileNameA((HMODULE)0x0,local_168,0x104);
  local_1f8 = (undefined1 (*) [16])0x0;
  uStack_1f0 = 0;
  local_1e8 = (undefined1 *)0x0;
  pvStack_1e0 = (void *)0x0;
  sVar9 = strlen(local_168);
  FUN_1800013c0(&local_1f8,local_168,sVar9);
  pauVar15 = (undefined1 (*) [16])&local_1f8;
  if ((void *)0xf < pvStack_1e0) {
    pauVar15 = local_1f8;
  }
  puVar20 = (undefined1 *)0xffffffffffffffff;
  if (local_1e8 != (undefined1 *)0x0) {
    unaff_RSI = (undefined8 *)0xffffffffffffffff;
    if ((undefined8 *)(local_1e8 + -1) != (undefined8 *)0xffffffffffffffff) {
      unaff_RSI = (undefined8 *)(local_1e8 + -1);
    }
    if ((longlong)unaff_RSI + 3U < 0x10) {
      memset(local_358,0,0x100);
      pbVar21 = &DAT_18000e718;
      do {
        local_358[*pbVar21] = '\x01';
        pbVar21 = pbVar21 + 1;
      } while (pbVar21 != &DAT_18000e71a);
      pauVar11 = (undefined1 (*) [16])((longlong)unaff_RSI + (longlong)pauVar15);
      cVar1 = local_358[(byte)(*pauVar11)[0]];
      while (cVar1 == '\0') {
        if (pauVar11 == pauVar15) goto LAB_180003aa8;
        pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 0xf);
        cVar1 = local_358[(byte)(*pauVar11)[0]];
      }
      puVar20 = (undefined1 *)((longlong)pauVar11 - (longlong)pauVar15);
    }
    else {
      puVar20 = thunk_FUN_18000a9c0(pauVar15,(undefined1 *)((longlong)unaff_RSI + 1),(undefined1 (*) [16])&DAT_18000e718,2);
    }
  }
LAB_180003aa8:
  local_238 = (undefined1 (*) [16])0x0;
  uStack_230 = 0;
  local_228 = (undefined1 *)0x0;
  pvStack_220 = (void *)0x0;
  puVar22 = puVar20 + 1;
  if (local_1e8 < puVar20 + 1) {
    puVar22 = local_1e8;
  }
  pauVar15 = (undefined1 (*) [16])&local_1f8;
  if ((void *)0xf < pvStack_1e0) {
    pauVar15 = local_1f8;
  }
  FUN_1800013c0(&local_238,pauVar15,(size_t)puVar22);
  uVar23 = 1;
  local_448[0] = 1;
  puVar17 = puVar13;
  if (pvStack_1e0 < (void *)0x10) {
LAB_180003b42:
    unaff_R15 = (void *)0xf;
    local_1f8 = local_238;
    uStack_1f0 = uStack_230;
    local_1e8 = local_228;
    pvStack_1e0 = pvStack_220;
    local_448[0] = 0;
    local_228 = (undefined1 *)0x0;
    pvStack_220 = (void *)0xf;
    local_238 = (undefined1 (*) [16])((ulonglong)local_238 & 0xffffffffffffff00);
    FUN_1800023d0((undefined8 *)&local_1b8,&local_1f8,"ServerGameConfig.ini");
    FUN_180004ed0(local_3b8,&local_1b8);
    local_420[0xc] = 0;
    local_420[0xd] = 0;
    local_420[0xe] = 0;
    local_420[0xf] = 0;
    local_420[0x10] = 0xb;
    local_420[0x11] = 0;
    local_420[0x12] = 0;
    local_420[0x13] = 0;
    local_420[0x14] = 0;
    local_420[0x15] = 0;
    local_420[0x16] = 0;
    local_420[0x17] = 0;
    local_420[0x18] = 0xf;
    local_420[0x19] = 0;
    local_420[0x1a] = 0;
    local_420[0x1b] = 0;
    local_420[0x1c] = 0;
    local_420[0x1d] = 0;
    local_420[0x1e] = 0;
    local_420[0x1f] = 0;
    local_420[0] = 0x53;
    local_420[1] = 0x6c;
    local_420[2] = 0x6f;
    local_420[3] = 0x74;
    local_420[4] = 0x4d;
    local_420[5] = 0x61;
    local_420[6] = 99;
    local_420[7] = 0x68;
    local_420[8] = 0x69;
    local_420[9] = 0x6e;
    local_420[10] = 0x65;
    local_420[0xb] = 0;
    unaff_R14 = 0xcbf29ce484222325;
    uVar12 = 0xcbf29ce484222325;
    puVar16 = puVar13;
    do {
      uVar12 = (uVar12 ^ local_420[(longlong)puVar16]) * 0x100000001b3;
      puVar16 = (undefined8 *)((longlong)puVar16 + 1);
    } while (puVar16 < (undefined8 *)0xb);
    puVar16 = *(undefined8 **)(local_3a0[0] + 8 + (local_388 & uVar12) * 0x10);
    puVar20 = auStack_468;
    uVar23 = 0;
    if (puVar16 != local_3b0[0]) {
      puVar2 = *(undefined8 **)(local_3a0[0] + (local_388 & uVar12) * 0x10);
      while( true ) {
        puVar17 = puVar16 + 2;
        if (0xf < (ulonglong)puVar16[5]) {
          puVar17 = (undefined8 *)*puVar17;
        }
        if (((puVar16[4] == 0xb) && (iVar7 = memcmp(local_420,puVar17,0xb), puVar17 = puVar16, puVar20 = auStack_468, uVar23 = 0, iVar7 == 0)) ||
           (puVar17 = puVar13, puVar20 = auStack_468, uVar23 = 0, puVar16 == puVar2)) break;
        puVar16 = (undefined8 *)puVar16[1];
      }
    }
  }
  else {
    pauVar15 = local_1f8;
    if (((longlong)pvStack_1e0 + 1U < 0x1000) ||
       (pauVar15 = *(undefined1 (**) [16])(local_1f8[-1] + 8), (ulonglong)((longlong)local_1f8 + (-8 - (longlong)pauVar15)) < 0x20)) {
      free(pauVar15);
      goto LAB_180003b42;
    }
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar20 = auStack_460;
  }
  *(undefined8 *)(puVar20 + 0x58) = 0;
  *(void **)(puVar20 + 0x60) = unaff_R15;
  puVar20[0x48] = 0;
  puVar16 = puVar13;
  if (puVar17 == (undefined8 *)0x0) {
LAB_18000400a:
    *(undefined8 *)(puVar20 + 0x28) = 0;
    *(undefined8 *)(puVar20 + 0x30) = 0;
    *(undefined8 *)(puVar20 + 0x38) = 0;
    *(undefined8 *)(puVar20 + 0x40) = 0;
    *(undefined8 *)(puVar20 + 0x38) = 7;
    *(void **)(puVar20 + 0x40) = unaff_R15;
    *(undefined4 *)(puVar20 + 0x28) = 0x72677055;
    *(undefined2 *)(puVar20 + 0x2c) = 0x6461;
    puVar20[0x2e] = 0x65;
    puVar20[0x2f] = 0;
    uVar12 = unaff_R14;
    puVar17 = puVar13;
    do {
      uVar12 = (uVar12 ^ (byte)(puVar20 + 0x28)[(longlong)puVar17]) * 0x100000001b3;
      puVar17 = (undefined8 *)((longlong)puVar17 + 1);
    } while (puVar17 < (undefined8 *)0x7);
    puVar17 = *(undefined8 **)(local_3a0[0] + 8 + (local_388 & uVar12) * 0x10);
    if (puVar17 != local_3b0[0]) {
      puVar2 = *(undefined8 **)(local_3a0[0] + (local_388 & uVar12) * 0x10);
      do {
        puVar16 = puVar17 + 2;
        if (0xf < (ulonglong)puVar17[5]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        if (puVar17[4] == 7) {
          *(undefined8 *)(puVar20 + -8) = 0x1800040d9;
          iVar7 = memcmp(puVar20 + 0x28,puVar16,7);
          puVar16 = puVar17;
          if (iVar7 == 0) break;
        }
        puVar16 = puVar13;
        if (puVar17 == puVar2) break;
        puVar17 = (undefined8 *)puVar17[1];
      } while( true );
    }
LAB_1800040fb:
    unaff_R15 = (void *)0xf;
    *(undefined8 *)(puVar20 + 0x38) = 0;
    *(undefined8 *)(puVar20 + 0x40) = 0xf;
    puVar20[0x28] = 0;
    if (puVar16 == (undefined8 *)0x0) {
LAB_18000457a:
      *(undefined8 *)(puVar20 + 0x68) = 0;
      *(undefined8 *)(puVar20 + 0x70) = 0;
      *(undefined8 *)(puVar20 + 0x78) = 0;
      *(undefined8 *)(puVar20 + 0x78) = 6;
      auStack_3f8[2] = 0xf;
      *(undefined4 *)(puVar20 + 0x68) = 0x79616c50;
      *(undefined2 *)(puVar20 + 0x6c) = 0x7265;
      puVar20[0x6e] = 0;
      uVar12 = unaff_R14;
      do {
        uVar12 = (uVar12 ^ (byte)(puVar20 + 0x68)[(longlong)puVar13]) * 0x100000001b3;
        puVar13 = (undefined8 *)((longlong)puVar13 + 1);
      } while (puVar13 < (undefined8 *)0x6);
      uVar18 = 0;
      *(undefined8 *)(puVar20 + -8) = 0x1800045fb;
      plVar10 = FUN_180002560((longlong)local_3b8,&local_178,(undefined8 *)(puVar20 + 0x68),uVar12);
      lVar3 = plVar10[1];
      *(undefined8 *)(puVar20 + 0x78) = 0;
      auStack_3f8[2] = 0xf;
      puVar20[0x68] = 0;
      if (lVar3 != 0) {
        local_228 = (undefined1 *)0xd;
        pvStack_220 = (void *)0xf;
        local_238 = (undefined1 (*) [16])0x72654d6563726f46;
        uStack_230 = 0x746e616863;
        uStack_251 = 0;
        uStack_24d = 0;
        uStack_24c = 0;
        local_248 = 6;
        local_240 = (void *)0xf;
        local_258 = 0x79616c50;
        uStack_254 = 0x65;
        uStack_253 = 0x72;
        uStack_252 = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800046d2;
        plVar10 = FUN_180002d00(local_3b8,&local_178,(undefined8 *)&local_258);
        lVar3 = *plVar10;
        *(undefined8 *)(puVar20 + -8) = 0x1800046e8;
        FUN_1800035e0(lVar3 + 0x30,&local_238,1);
        *(undefined8 *)(puVar20 + -8) = 0x1800046fa;
        DAT_180015074 = extraout_AL;
        FUN_180002290((longlong *)&local_258);
        *(undefined8 *)(puVar20 + -8) = 0x180004707;
        FUN_180002290((longlong *)&local_238);
      }
      local_3e0[1] = 0;
      local_3e0[2] = 5;
      local_3e0[3] = 0xf;
      local_3e0[0] = 0x736d657449;
      uVar12 = unaff_R14;
      do {
        uVar12 = (uVar12 ^ *(byte *)((longlong)local_3e0 + uVar18)) * 0x100000001b3;
        uVar18 = uVar18 + 1;
      } while (uVar18 < 5);
      puVar13 = *(undefined8 **)(local_3a0[0] + 8 + (uVar12 & local_388) * 0x10);
      if (puVar13 != local_3b0[0]) {
        puVar17 = *(undefined8 **)(local_3a0[0] + (uVar12 & local_388) * 0x10);
        while( true ) {
          puVar16 = puVar13 + 2;
          if (0xf < (ulonglong)puVar13[5]) {
            puVar16 = (undefined8 *)*puVar16;
          }
          if (puVar13[4] == 5) {
            *(undefined8 *)(puVar20 + -8) = 0x1800047b3;
            iVar7 = memcmp(local_3e0,puVar16,5);
            if (iVar7 == 0) goto LAB_1800047cf;
          }
          if (puVar13 == puVar17) break;
          puVar13 = (undefined8 *)puVar13[1];
        }
      }
    }
    else {
      local_238 = (undefined1 (*) [16])0x0;
      uStack_230 = 0;
      local_228 = (undefined1 *)0x0;
      pvStack_220 = (void *)0x0;
      local_218 = (void *)0x1f;
      *(undefined8 *)(puVar20 + -8) = 0x18000414f;
      local_238 = (undefined1 (*) [16])FUN_1800011e0(&local_238,(ulonglong *)&local_218);
      local_228 = (undefined1 *)0x11;
      pvStack_220 = local_218;
      *(undefined8 *)*local_238 = 0x6946726f6574654d;
      builtin_strncpy((char *)((longlong)*local_238 + 8),"rstSocke",8);
      local_238[1][0] = 0x74;
      local_238[1][1] = 0;
      uStack_24d = 0;
      uStack_24c = 0;
      local_248 = 7;
      local_240 = (void *)0xf;
      local_258 = 0x72677055;
      uStack_254 = 0x61;
      uStack_253 = 100;
      uStack_252 = 0x65;
      uStack_251 = 0;
      *(undefined8 *)(puVar20 + -8) = 0x1800041f7;
      plVar10 = FUN_180002d00(local_3b8,&local_178,(undefined8 *)&local_258);
      lVar3 = *plVar10;
      *(undefined8 *)(puVar20 + -8) = 0x180004210;
      uVar12 = FUN_1800038b0(lVar3 + 0x30,&local_238,0x4b0);
      DAT_180015068 = (undefined4)uVar12;
      if (local_240 < (void *)0x10) {
LAB_180004256:
        local_248 = 0;
        local_240 = (void *)0xf;
        local_258 = local_258 & 0xffffff00;
        if ((void *)0xf < pvStack_220) {
          pauVar15 = local_238;
          if ((0xfff < (longlong)pvStack_220 + 1U) &&
             (pauVar15 = *(undefined1 (**) [16])(local_238[-1] + 8), 0x1f < (ulonglong)((longlong)local_238 + (-8 - (longlong)pauVar15)))) goto LAB_180004c28;
          *(undefined8 *)(puVar20 + -8) = 0x1800042ac;
          free(pauVar15);
        }
        local_228 = (undefined1 *)0x0;
        pvStack_220 = (void *)0xf;
        local_238 = (undefined1 (*) [16])((ulonglong)local_238 & 0xffffffffffffff00);
        local_258 = 0;
        uStack_254 = 0;
        uStack_253 = 0;
        uStack_252 = 0;
        uStack_251 = 0;
        uStack_24d = 0;
        uStack_24c = 0;
        local_248 = 0;
        local_240 = (void *)0x0;
        *(undefined8 *)(puVar20 + -8) = 0x1800042f2;
        FUN_1800013c0((undefined8 *)&local_258,"MeteorSecondSocket",0x12);
        uStack_230 = 0;
        local_228 = (undefined1 *)0x7;
        pvStack_220 = (void *)0xf;
        local_238 = (undefined1 (*) [16])0x65646172677055;
        *(undefined8 *)(puVar20 + -8) = 0x180004363;
        plVar10 = FUN_180002d00(local_3b8,&local_178,&local_238);
        lVar3 = *plVar10;
        *(undefined8 *)(puVar20 + -8) = 0x18000437c;
        uVar12 = FUN_1800038b0(lVar3 + 0x30,(undefined8 *)&local_258,0x960);
        DAT_18001506c = (undefined4)uVar12;
        *(undefined8 *)(puVar20 + -8) = 0x18000438e;
        FUN_180002290((longlong *)&local_238);
        if ((void *)0xf < local_240) {
          pvVar6 = (void *)CONCAT17((undefined1)uStack_251,CONCAT16(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258))));
          pvVar14 = pvVar6;
          if ((0xfff < (longlong)local_240 + 1U) &&
             (pvVar14 = *(void **)((longlong)pvVar6 + -8), 0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar14)))) goto LAB_180004c28;
          *(undefined8 *)(puVar20 + -8) = 0x1800043d0;
          free(pvVar14);
        }
        local_208 = 0xd;
        local_200 = (void *)0xf;
        local_218 = (void *)0x537974696c617551;
        uStack_210 = 0x74656b636f;
        uStack_24d = 0;
        uStack_24c = 0;
        local_248 = 7;
        local_240 = (void *)0xf;
        local_258 = 0x72677055;
        uStack_254 = 0x61;
        uStack_253 = 100;
        uStack_252 = 0x65;
        uStack_251 = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800044af;
        plVar10 = FUN_180002d00(local_3b8,&local_178,(undefined8 *)&local_258);
        lVar3 = *plVar10;
        *(undefined8 *)(puVar20 + -8) = 0x1800044c8;
        uVar12 = FUN_1800038b0(lVar3 + 0x30,&local_218,300);
        DAT_180015070 = (undefined4)uVar12;
        if ((void *)0xf < local_240) {
          pvVar6 = (void *)CONCAT17((undefined1)uStack_251,CONCAT16(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258))));
          pvVar14 = pvVar6;
          if ((0xfff < (longlong)local_240 + 1U) &&
             (pvVar14 = *(void **)((longlong)pvVar6 + -8), 0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar14)))) goto LAB_1800047c7;
          *(undefined8 *)(puVar20 + -8) = 0x18000450f;
          free(pvVar14);
        }
        local_248 = 0;
        local_240 = (void *)0xf;
        local_258 = local_258 & 0xffffff00;
        if ((void *)0xf < local_200) {
          pvVar14 = local_218;
          if ((0xfff < (longlong)local_200 + 1U) &&
             (pvVar14 = *(void **)((longlong)local_218 + -8), 0x1f < (ulonglong)((longlong)local_218 + (-8 - (longlong)pvVar14)))) goto LAB_180004c28;
          *(undefined8 *)(puVar20 + -8) = 0x180004565;
          free(pvVar14);
        }
        local_208 = 0;
        local_200 = (void *)0xf;
        local_218 = (void *)((ulonglong)local_218 & 0xffffffffffffff00);
        goto LAB_18000457a;
      }
      pvVar6 = (void *)CONCAT17((undefined1)uStack_251,CONCAT16(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258))));
      pvVar14 = pvVar6;
      if (((longlong)local_240 + 1U < 0x1000) || (pvVar14 = *(void **)((longlong)pvVar6 + -8), (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar14)) < 0x20))
      {
        *(undefined8 *)(puVar20 + -8) = 0x180004256;
        free(pvVar14);
        goto LAB_180004256;
      }
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar20 = puVar20 + 8;
LAB_1800047c7:
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar20 = puVar20 + 8;
    }
    puVar13 = (undefined8 *)0x0;
LAB_1800047cf:
    uVar12 = 0;
    local_3e0[2] = 0;
    local_3e0[3] = 0xf;
    local_3e0[0] = local_3e0[0] & 0xffffffffffffff00;
    if (puVar13 != (undefined8 *)0x0) {
      local_238 = (undefined1 (*) [16])0x0;
      uStack_230 = 0;
      local_228 = (undefined1 *)0x0;
      pvStack_220 = (void *)0x0;
      *(undefined8 *)(puVar20 + -8) = 0x18000481b;
      FUN_1800013c0(&local_238,"LockAlwaysSucceeds",0x12);
      uStack_252 = 0;
      uStack_251 = 0;
      uStack_24d = 0;
      uStack_24c = 0;
      local_248 = 5;
      local_240 = (void *)0xf;
      local_258 = 0x6d657449;
      uStack_254 = 0x73;
      uStack_253 = 0;
      *(undefined8 *)(puVar20 + -8) = 0x18000487d;
      plVar10 = FUN_180002d00(local_3b8,&local_178,(undefined8 *)&local_258);
      lVar3 = *plVar10;
      *(undefined8 *)(puVar20 + -8) = 0x180004893;
      FUN_1800035e0(lVar3 + 0x30,&local_238,1);
      DAT_180015075 = extraout_AL_00;
      if (0xf < local_240) {
        *(undefined8 *)(puVar20 + -8) = 0x1800048b9;
        FUN_1800021a0(&local_258,(void *)CONCAT17((undefined1)uStack_251,CONCAT16(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258)))),
                      (longlong)local_240);
      }
      local_248 = 0;
      local_240 = (void *)0xf;
      local_258 = local_258 & 0xffffff00;
      if (0xf < pvStack_220) {
        *(undefined8 *)(puVar20 + -8) = 0x1800048f3;
        FUN_1800021a0(&local_238,local_238,(longlong)pvStack_220);
      }
      local_228 = (undefined1 *)0x0;
      pvStack_220 = (void *)0xf;
      local_238 = (undefined1 (*) [16])((ulonglong)local_238 & 0xffffffffffffff00);
    }
    local_378[2] = 8;
    local_378[3] = 0xf;
    local_378[0]._0_1_ = 'S';
    local_378[0]._1_1_ = 'e';
    local_378[0]._2_1_ = 'c';
    local_378[0]._3_1_ = 'u';
    local_378[0]._4_1_ = 'r';
    local_378[0]._5_1_ = 'i';
    local_378[0]._6_1_ = 't';
    local_378[0]._7_1_ = 'y';
    local_378[1] = 0;
    uVar18 = unaff_R14;
    do {
      uVar18 = (uVar18 ^ *(byte *)((longlong)local_378 + uVar12)) * 0x100000001b3;
      uVar12 = uVar12 + 1;
    } while (uVar12 < 8);
    puVar16 = (undefined8 *)0x0;
    puVar13 = *(undefined8 **)(local_3a0[0] + 8 + (local_388 & uVar18) * 0x10);
    puVar17 = puVar16;
    if (puVar13 != local_3b0[0]) {
      puVar2 = *(undefined8 **)(local_3a0[0] + (local_388 & uVar18) * 0x10);
      do {
        puVar17 = puVar13 + 2;
        if (0xf < (ulonglong)puVar13[5]) {
          puVar17 = (undefined8 *)*puVar17;
        }
        if (puVar13[4] == 8) {
          *(undefined8 *)(puVar20 + -8) = 0x1800049d0;
          iVar7 = memcmp(local_378,puVar17,8);
          puVar17 = puVar13;
          if (iVar7 == 0) break;
        }
        puVar17 = puVar16;
        if (puVar13 == puVar2) break;
        puVar13 = (undefined8 *)puVar13[1];
      } while( true );
    }
    local_378[2] = 0;
    local_378[3] = 0xf;
    local_378[0] = local_378[0] & 0xffffffffffffff00;
    unaff_R15 = (void *)0x10;
    unaff_RSI = &DAT_180015078;
    if (puVar17 != (undefined8 *)0x0) {
      local_238 = (undefined1 (*) [16])0x0;
      uStack_230 = 0;
      local_228 = (undefined1 *)0x0;
      pvStack_220 = (void *)0x0;
      *(undefined8 *)(puVar20 + -8) = 0x180004a7b;
      FUN_1800013c0(&local_238,"C238xs65pjy7HU9Q",0x10);
      uStack_24c = 0;
      local_248 = 0xb;
      local_240 = (void *)0xf;
      local_258 = 0x776f6c42;
      uStack_254 = 0x66;
      uStack_253 = 0x69;
      uStack_252 = 0x73;
      uStack_251 = 0x79654b68;
      uStack_24d = 0;
      local_1c8 = 8;
      local_1c0 = 0xf;
      local_1d8 = (void *)0x7974697275636553;
      local_1d0 = 0;
      *(undefined8 *)(puVar20 + -8) = 0x180004b21;
      plVar10 = FUN_180002d00(local_3b8,&local_178,&local_1d8);
      lVar3 = *plVar10;
      do {
        unaff_R14 = (unaff_R14 ^ *(byte *)((longlong)puVar16 + (longlong)&local_258)) * 0x100000001b3;
        puVar16 = (undefined8 *)((longlong)puVar16 + 1);
      } while (puVar16 < (undefined8 *)0xb);
      *(undefined8 *)(puVar20 + -8) = 0x180004b70;
      plVar10 = FUN_180002560(lVar3 + 0x30,(longlong *)&local_218,(undefined8 *)&local_258,unaff_R14);
      lVar4 = plVar10[1];
      if ((lVar4 == 0) || (ppauVar19 = (undefined1 (**) [16])(lVar4 + 0x30), lVar4 == *(longlong *)(lVar3 + 0x38))) {
        ppauVar19 = &local_238;
      }
      *(undefined8 *)(puVar20 + -8) = 0x180004b96;
      FUN_1800014c0(local_198,ppauVar19);
      *(uint *)(puVar20 + 0x20) = uVar23 | 4;
      *(undefined8 *)(puVar20 + -8) = 0x180004bae;
      FUN_180003550((longlong *)&DAT_180015078,local_198);
      *(uint *)(puVar20 + 0x20) = uVar23;
      *(undefined8 *)(puVar20 + -8) = 0x180004bc3;
      FUN_180002290(local_198);
      if (0xf < local_1c0) {
        *(undefined8 *)(puVar20 + -8) = 0x180004be4;
        FUN_1800021a0(&local_1d8,local_1d8,local_1c0);
      }
      local_1c8 = 0;
      local_1c0 = 0xf;
      local_1d8 = (void *)((ulonglong)local_1d8 & 0xffffffffffffff00);
      local_248 = 0;
      local_240 = (void *)0xf;
      local_258 = local_258 & 0xffffff00;
      *(undefined8 *)(puVar20 + -8) = 0x180004c20;
      FUN_180002290((longlong *)&local_238);
      unaff_R15 = (void *)0x10;
    }
  }
  else {
    local_208 = 0xd;
    local_218 = (void *)0x7261776552707845;
    uStack_210 = 0x656d695464;
    uStack_24c = 0;
    local_248 = 0xb;
    local_258 = 0x746f6c53;
    uStack_254 = 0x4d;
    uStack_253 = 0x61;
    uStack_252 = 99;
    uStack_251 = 0x656e6968;
    uStack_24d = 0;
    *(undefined8 *)(puVar20 + -8) = 0x180003da3;
    local_240 = unaff_R15;
    local_200 = unaff_R15;
    plVar10 = FUN_180002d00(local_3b8,&local_178,(undefined8 *)&local_258);
    lVar3 = *plVar10;
    *(undefined8 *)(puVar20 + -8) = 0x180003dbc;
    uVar12 = FUN_1800038b0(lVar3 + 0x30,&local_218,300);
    DAT_180015060 = (undefined4)uVar12;
    if ((void *)0xf < local_240) {
      pvVar6 = (void *)CONCAT17((undefined1)uStack_251,CONCAT16(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258))));
      pvVar14 = pvVar6;
      if (((longlong)local_240 + 1U < 0x1000) || (pvVar14 = *(void **)((longlong)pvVar6 + -8), (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar14)) < 0x20))
      {
        *(undefined8 *)(puVar20 + -8) = 0x180003e03;
        free(pvVar14);
        goto LAB_180003e03;
      }
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar20 = puVar20 + 8;
LAB_1800040f3:
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar20 = puVar20 + 8;
      goto LAB_1800040fb;
    }
LAB_180003e03:
    local_248 = 0;
    local_258 = local_258 & 0xffffff00;
    local_240 = unaff_R15;
    if (local_200 < (void *)0x10) {
LAB_180003e59:
      local_208 = 0;
      local_238 = (undefined1 (*) [16])0x0;
      uStack_230 = 0;
      local_228 = (undefined1 *)0x0;
      pvStack_220 = (void *)0x0;
      local_218 = (void *)0x1f;
      *(undefined8 *)(puVar20 + -8) = 0x180003ea4;
      local_200 = unaff_R15;
      local_238 = (undefined1 (*) [16])FUN_1800011e0(&local_238,(ulonglong *)&local_218);
      local_228 = (undefined1 *)0x13;
      pvStack_220 = local_218;
      *(undefined8 *)*local_238 = 0x776552657a697250;
      builtin_strncpy((char *)((longlong)*local_238 + 8),"ardMulti",8);
      *(undefined4 *)((longlong)*local_238 + 0xf) = 0x796c7069;
      local_238[1][3] = 0;
      uStack_24c = 0;
      local_248 = 0xb;
      local_258 = 0x746f6c53;
      uStack_254 = 0x4d;
      uStack_253 = 0x61;
      uStack_252 = 99;
      uStack_251 = 0x656e6968;
      uStack_24d = 0;
      *(undefined8 *)(puVar20 + -8) = 0x180003f3f;
      local_240 = unaff_R15;
      plVar10 = FUN_180002d00(local_3b8,&local_178,(undefined8 *)&local_258);
      lVar3 = *plVar10;
      *(undefined8 *)(puVar20 + -8) = 0x180003f58;
      uVar12 = FUN_1800038b0(lVar3 + 0x30,&local_238,300);
      DAT_180015064 = (undefined4)uVar12;
      if ((void *)0xf < local_240) {
        pvVar6 = (void *)CONCAT17((undefined1)uStack_251,CONCAT16(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258))));
        pvVar14 = pvVar6;
        if ((0xfff < (longlong)local_240 + 1U) && (pvVar14 = *(void **)((longlong)pvVar6 + -8), 0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar14)))
           ) goto LAB_1800040f3;
        *(undefined8 *)(puVar20 + -8) = 0x180003f9f;
        free(pvVar14);
      }
      local_248 = 0;
      local_240 = unaff_R15;
      local_258 = local_258 & 0xffffff00;
      if ((void *)0xf < pvStack_220) {
        pauVar15 = local_238;
        if ((0xfff < (longlong)pvStack_220 + 1U) &&
           (pauVar15 = *(undefined1 (**) [16])(local_238[-1] + 8), 0x1f < (ulonglong)((longlong)local_238 + (-8 - (longlong)pauVar15)))) goto LAB_180004c28;
        *(undefined8 *)(puVar20 + -8) = 0x180003ff5;
        free(pauVar15);
      }
      local_228 = (undefined1 *)0x0;
      pvStack_220 = unaff_R15;
      local_238 = (undefined1 (*) [16])((ulonglong)local_238 & 0xffffffffffffff00);
      goto LAB_18000400a;
    }
    pvVar14 = local_218;
    if (((longlong)local_200 + 1U < 0x1000) ||
       (pvVar14 = *(void **)((longlong)local_218 + -8), (ulonglong)((longlong)local_218 + (-8 - (longlong)pvVar14)) < 0x20)) {
      *(undefined8 *)(puVar20 + -8) = 0x180003e59;
      free(pvVar14);
      goto LAB_180003e59;
    }
LAB_180004c28:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar20 = puVar20 + 8;
  }
  *(undefined8 *)(puVar20 + -8) = 0x180004c3f;
  FUN_180002020(" ---- Game Server Config ----");
  *(undefined8 *)(puVar20 + -8) = 0x180004c51;
  FUN_180002020("SlotMachine::ExpRewardTime = %d");
  *(undefined8 *)(puVar20 + -8) = 0x180004c63;
  FUN_180002020("SlotMachine::PrizeRewardMultiply = %d");
  *(undefined8 *)(puVar20 + -8) = 0x180004c75;
  FUN_180002020("Upgrade::QualitySocket = %d");
  *(undefined8 *)(puVar20 + -8) = 0x180004c87;
  FUN_180002020("Upgrade::MeteorFirstSocket = %d");
  *(undefined8 *)(puVar20 + -8) = 0x180004c99;
  FUN_180002020("Upgrade::MeteorSecondSocket = %d");
  *(undefined8 *)(puVar20 + -8) = 0x180004cc1;
  FUN_180002020("Player::ForceMerchant = %s");
  *(undefined8 *)(puVar20 + -8) = 0x180004cdb;
  FUN_180002020("Items::LockAlwaysSucceeds = %s");
  *(undefined8 *)(puVar20 + -8) = 0x180004cfa;
  FUN_180002020("Security::BlowfishKey = %s");
  *(undefined8 *)(puVar20 + -8) = 0x180004d06;
  FUN_180002020(" ----------------------------");
  *(undefined8 *)(puVar20 + -8) = 0x180004d1b;
  FUN_180002510((undefined4 *)0x1403577d7,DAT_180015070);
  *(undefined8 *)(puVar20 + -8) = 0x180004d30;
  FUN_180002510((undefined4 *)0x140358472,DAT_180015068);
  *(undefined8 *)(puVar20 + -8) = 0x180004d45;
  FUN_180002510((undefined4 *)0x140358572,DAT_18001506c);
  local_178 = 0;
  uStack_170 = 0;
  pvVar14 = DAT_180015088;
  if ((void *)0x10 < DAT_180015088) {
    pvVar14 = unaff_R15;
  }
  if (0xf < DAT_180015090) {
    unaff_RSI = DAT_180015078;
  }
  *(undefined8 *)(puVar20 + -8) = 0x180004d7d;
  memcpy(&local_178,unaff_RSI,(size_t)pvVar14);
  *(undefined8 *)(puVar20 + -8) = 0x180004da0;
  BVar8 = VirtualProtect(&DAT_14079ae58,(SIZE_T)unaff_R15,4,(PDWORD)&local_218);
  if (BVar8 != 0) {
    _DAT_14079ae58 = (undefined4)local_178;
    uRam000000014079ae5c = local_178._4_4_;
    uRam000000014079ae60 = (undefined4)uStack_170;
    uRam000000014079ae64 = uStack_170._4_4_;
    *(undefined8 *)(puVar20 + -8) = 0x180004dc8;
    VirtualProtect(&DAT_14079ae58,(SIZE_T)unaff_R15,(DWORD)local_218,(PDWORD)&local_218);
  }
  *(undefined8 *)(puVar20 + -8) = 0x180004dd2;
  FUN_180003150(local_3a0);
  *(undefined8 *)(puVar20 + -8) = 0x180004de0;
  FUN_1800026b0(local_3b0,local_3b0[0]);
  *(undefined8 *)(puVar20 + -8) = 0x180004dee;
  free(local_3b0[0]);
  if (0xf < local_1a0) {
    pvVar6 = (void *)CONCAT71(uStack_1b7,local_1b8);
    pvVar14 = pvVar6;
    if ((0xfff < local_1a0 + 1) && (pvVar14 = *(void **)((longlong)pvVar6 + -8), 0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar14)))) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      goto LAB_180004ebf;
    }
    *(undefined8 *)(puVar20 + -8) = 0x180004e30;
    free(pvVar14);
  }
  local_1a8 = 0;
  local_1a0 = 0xf;
  local_1b8 = '\0';
  if ((void *)0xf < pvStack_1e0) {
    pauVar15 = local_1f8;
    if ((0xfff < (longlong)pvStack_1e0 + 1U) &&
       (pauVar15 = *(undefined1 (**) [16])((longlong)local_1f8[-1] + 8), 0x1f < (ulonglong)((longlong)local_1f8 + (-8 - (longlong)pauVar15)))) {
LAB_180004ebf:
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined8 *)(puVar20 + -8) = 0x180004e82;
    free(pauVar15);
  }
  *(undefined8 *)(puVar20 + -8) = 0x180004ea6;
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_180004ed0(float *param_1,char *param_2)

{
  float *pfVar1;
  code *pcVar2;
  undefined1 (*pauVar3) [32];
  void *pvVar4;
  longlong lVar5;
  FILE *_File;
  char *pcVar6;
  size_t sVar7;
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  longlong *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  undefined8 uStack_590;
  undefined1 auStack_588 [8];
  undefined1 auStack_580 [24];
  undefined4 local_568;
  float *local_560;
  longlong local_558 [2];
  longlong local_548 [2];
  undefined8 local_538 [2];
  ulonglong local_528;
  ulonglong local_520;
  void *local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  ulonglong uStack_500;
  void *local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  ulonglong uStack_4e0;
  longlong local_4d8 [2];
  size_t local_4c8;
  ulonglong local_4c0;
  void *local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  ulonglong local_4a0;
  void *local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  ulonglong local_480;
  void *local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  ulonglong local_460;
  undefined1 local_458;
  undefined7 uStack_457;
  undefined8 local_448;
  ulonglong local_440;
  char local_438 [1024];
  ulonglong local_38;
  
  puVar15 = auStack_588;
  puVar14 = auStack_588;
  puVar16 = auStack_588;
  puVar17 = auStack_588;
  puVar18 = auStack_588;
  local_38 = DAT_1800152c0 ^ (ulonglong)auStack_588;
  uVar20 = 1;
  local_568 = 1;
  *param_1 = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  local_560 = param_1;
  lVar5 = FUN_18000bb18(0x70);
  *(longlong *)lVar5 = lVar5;
  *(longlong *)(lVar5 + 8) = lVar5;
  *(longlong *)(param_1 + 2) = lVar5;
  pfVar1 = param_1 + 6;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 9.80909e-45;
  param_1[0xd] = 0.0;
  param_1[0xe] = 1.12104e-44;
  param_1[0xf] = 0.0;
  *param_1 = 1.0;
  FUN_180005820((ulonglong *)pfVar1,0x10,*(undefined8 *)(param_1 + 2));
  local_568 = 1;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  _File = fopen(param_2,"r");
  if (_File != (FILE *)0x0) {
    uStack_510 = 0;
    local_508 = 0;
    uStack_500 = 0xf;
    local_518 = (void *)0x0;
    pcVar6 = fgets(local_438,0x400,_File);
    while (pcVar6 != (char *)0x0) {
      local_4b8 = (void *)0x0;
      uStack_4b0 = 0;
      local_4a8 = 0;
      local_4a0 = 0;
      sVar7 = strlen(local_438);
      FUN_1800013c0(&local_4b8,local_438,sVar7);
      FUN_180005590(local_538,(undefined1 (*) [16])&local_4b8);
      if (0xf < local_4a0) {
        pvVar11 = local_4b8;
        if ((local_4a0 + 1 < 0x1000) ||
           (pvVar11 = *(void **)((longlong)local_4b8 + -8), puVar15 = auStack_588, (ulonglong)((longlong)local_4b8 + (-8 - (longlong)pvVar11)) < 0x20)) {
          free(pvVar11);
          goto LAB_180005053;
        }
LAB_180005521:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar16 = puVar15 + 8;
LAB_180005528:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar17 = puVar16 + 8;
        goto LAB_18000552f;
      }
LAB_180005053:
      local_4a8 = 0;
      local_4a0 = 0xf;
      local_4b8 = (void *)((ulonglong)local_4b8 & 0xffffffffffffff00);
      if (local_528 != 0) {
        pauVar3 = (undefined1 (*) [32])CONCAT71(local_538[0]._1_7_,(undefined1)local_538[0]);
        pauVar8 = (undefined1 (*) [32])local_538;
        if (0xf < local_520) {
          pauVar8 = pauVar3;
        }
        if ((*pauVar8)[0] != ';') {
          pauVar8 = (undefined1 (*) [32])local_538;
          if (0xf < local_520) {
            pauVar8 = pauVar3;
          }
          if ((*pauVar8)[0] != '#') {
            pauVar8 = (undefined1 (*) [32])local_538;
            if (0xf < local_520) {
              pauVar8 = pauVar3;
            }
            if ((*pauVar8)[0] == '[') {
              pauVar8 = (undefined1 (*) [32])local_538;
              if (0xf < local_520) {
                pauVar8 = pauVar3;
              }
              if (local_528 == 0) {
                lVar5 = -1;
              }
              else {
                pauVar3 = (undefined1 (*) [32])(*pauVar8 + local_528);
                pauVar9 = thunk_FUN_18000ae00(pauVar8,pauVar3,0x5d);
                lVar5 = -1;
                if (pauVar9 != pauVar3) {
                  lVar5 = (longlong)pauVar9 - (longlong)pauVar8;
                }
              }
              if (lVar5 == -1) goto LAB_18000545f;
              local_4f8 = (void *)0x0;
              uStack_4f0 = 0;
              local_4e8 = 0;
              uStack_4e0 = 0;
              if (local_528 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1800063d0();
              }
              uVar19 = lVar5 - 1U;
              if (local_528 - 1 < lVar5 - 1U) {
                uVar19 = local_528 - 1;
              }
              puVar12 = local_538;
              if (0xf < local_520) {
                puVar12 = (undefined8 *)CONCAT71(local_538[0]._1_7_,(undefined1)local_538[0]);
              }
              FUN_1800013c0(&local_4f8,(void *)((longlong)puVar12 + 1),uVar19);
              local_568 = 5;
              if (uStack_500 < 0x10) {
LAB_180005193:
                local_518 = local_4f8;
                uStack_510 = uStack_4f0;
                local_508 = local_4e8;
                uStack_500 = uStack_4e0;
                local_4e8 = 0;
                uStack_4e0 = 0xf;
                local_4f8 = (void *)((ulonglong)local_4f8 & 0xffffffffffffff00);
                local_568 = uVar20;
                goto LAB_18000545f;
              }
              pvVar11 = local_518;
              if ((uStack_500 + 1 < 0x1000) ||
                 (pvVar11 = *(void **)((longlong)local_518 + -8), (ulonglong)((longlong)local_518 + (-8 - (longlong)pvVar11)) < 0x20)) {
                free(pvVar11);
                goto LAB_180005193;
              }
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              puVar14 = auStack_580;
LAB_180005513:
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              puVar15 = puVar14 + 8;
            }
            else {
              pauVar8 = (undefined1 (*) [32])local_538;
              if (0xf < local_520) {
                pauVar8 = pauVar3;
              }
              if (local_528 == 0) {
                uVar19 = 0xffffffffffffffff;
              }
              else {
                pauVar3 = (undefined1 (*) [32])(*pauVar8 + local_528);
                pauVar9 = thunk_FUN_18000ae00(pauVar8,pauVar3,0x3d);
                uVar19 = 0xffffffffffffffff;
                if (pauVar9 != pauVar3) {
                  uVar19 = (longlong)pauVar9 - (longlong)pauVar8;
                }
              }
              if (uVar19 == 0xffffffffffffffff) goto LAB_18000545f;
              local_498 = (void *)0x0;
              uStack_490 = 0;
              local_488 = 0;
              local_480 = 0;
              uVar21 = uVar19;
              if (local_528 < uVar19) {
                uVar21 = local_528;
              }
              puVar12 = local_538;
              if (0xf < local_520) {
                puVar12 = (undefined8 *)CONCAT71(local_538[0]._1_7_,(undefined1)local_538[0]);
              }
              FUN_1800013c0(&local_498,puVar12,uVar21);
              local_568 = 9;
              FUN_180005590((undefined8 *)&local_458,(undefined1 (*) [16])&local_498);
              local_568 = uVar20;
              if (local_480 < 0x10) {
LAB_1800052b5:
                local_488 = 0;
                local_480 = 0xf;
                local_498 = (void *)((ulonglong)local_498 & 0xffffffffffffff00);
                uVar19 = uVar19 + 1;
                local_478 = (void *)0x0;
                uStack_470 = 0;
                local_468 = 0;
                local_460 = 0;
                if (local_528 < uVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_1800063d0();
                }
                sVar7 = 0xffffffffffffffff;
                if (local_528 - uVar19 != 0xffffffffffffffff) {
                  sVar7 = local_528 - uVar19;
                }
                puVar12 = local_538;
                if (0xf < local_520) {
                  puVar12 = (undefined8 *)CONCAT71(local_538[0]._1_7_,(undefined1)local_538[0]);
                }
                FUN_1800013c0(&local_478,(void *)((longlong)puVar12 + uVar19),sVar7);
                local_568 = 3;
                FUN_180005590(local_4d8,(undefined1 (*) [16])&local_478);
                local_568 = uVar20;
                if (0xf < local_460) {
                  pvVar11 = local_478;
                  if ((0xfff < local_460 + 1) &&
                     (pvVar11 = *(void **)((longlong)local_478 + -8), 0x1f < (ulonglong)((longlong)local_478 + (-8 - (longlong)pvVar11)))) goto LAB_180005513;
                  free(pvVar11);
                }
                local_468 = 0;
                local_460 = 0xf;
                local_478 = (void *)((ulonglong)local_478 & 0xffffffffffffff00);
                plVar10 = FUN_180002a90(param_1,local_558,&local_518);
                plVar10 = FUN_1800027b0((float *)(*plVar10 + 0x30),local_548,(undefined8 *)&local_458);
                if ((longlong *)(*plVar10 + 0x30) != local_4d8) {
                  plVar13 = local_4d8;
                  if (0xf < local_4c0) {
                    plVar13 = (longlong *)CONCAT71(local_4d8[0]._1_7_,(undefined1)local_4d8[0]);
                  }
                  FUN_180001250((longlong *)(*plVar10 + 0x30),plVar13,local_4c8);
                }
                if (0xf < local_4c0) {
                  pvVar4 = (void *)CONCAT71(local_4d8[0]._1_7_,(undefined1)local_4d8[0]);
                  pvVar11 = pvVar4;
                  if ((0xfff < local_4c0 + 1) &&
                     (pvVar11 = *(void **)((longlong)pvVar4 + -8), puVar15 = auStack_588, 0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11))))
                  goto LAB_18000551a;
                  free(pvVar11);
                }
                local_4c8 = 0;
                local_4c0 = 0xf;
                local_4d8[0]._0_1_ = 0;
                if (0xf < local_440) {
                  pvVar4 = (void *)CONCAT71(uStack_457,local_458);
                  pvVar11 = pvVar4;
                  if ((0xfff < local_440 + 1) &&
                     (pvVar11 = *(void **)((longlong)pvVar4 + -8), puVar15 = auStack_588, 0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11))))
                  goto LAB_180005521;
                  free(pvVar11);
                }
                local_448 = 0;
                local_440 = 0xf;
                local_458 = 0;
                goto LAB_18000545f;
              }
              pvVar11 = local_498;
              if ((local_480 + 1 < 0x1000) ||
                 (pvVar11 = *(void **)((longlong)local_498 + -8), puVar15 = auStack_588, (ulonglong)((longlong)local_498 + (-8 - (longlong)pvVar11)) < 0x20)) {
                free(pvVar11);
                goto LAB_1800052b5;
              }
            }
LAB_18000551a:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar15 = puVar15 + 8;
            goto LAB_180005521;
          }
        }
      }
LAB_18000545f:
      if (0xf < local_520) {
        pvVar4 = (void *)CONCAT71(local_538[0]._1_7_,(undefined1)local_538[0]);
        pvVar11 = pvVar4;
        if ((0xfff < local_520 + 1) && (pvVar11 = *(void **)((longlong)pvVar4 + -8), 0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11))))
        goto LAB_180005528;
        free(pvVar11);
      }
      local_528 = 0;
      local_520 = 0xf;
      local_538[0]._0_1_ = 0;
      pcVar6 = fgets(local_438,0x400,_File);
    }
    fclose(_File);
    local_568 = 0;
    if (0xf < uStack_500) {
      pvVar11 = local_518;
      puVar18 = auStack_588;
      if ((0xfff < uStack_500 + 1) &&
         (pvVar11 = *(void **)((longlong)local_518 + -8), puVar18 = auStack_588, 0x1f < (ulonglong)((longlong)local_518 + (-8 - (longlong)pvVar11)))) {
LAB_18000552f:
        pcVar2 = (code *)swi(0x29);
        pvVar11 = (void *)(*pcVar2)(5);
        puVar18 = puVar17 + 8;
      }
      *(undefined8 *)(puVar18 + -8) = 0x18000553e;
      free(pvVar11);
    }
    puVar18[0x70] = 0;
    puVar15 = puVar18;
  }
  *(undefined8 *)(puVar15 + -8) = 0x180005561;
  return param_1;
}




undefined8 * FUN_180005590(undefined8 *param_1,undefined1 (*param_2) [16])

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  longlong lVar10;
  char local_138 [256];
  
  uVar2 = *(ulonglong *)param_2[1];
  pauVar6 = param_2;
  if (0xf < *(ulonglong *)(param_2[1] + 8)) {
    pauVar6 = *(undefined1 (**) [16])*param_2;
  }
  if (uVar2 != 0) {
    if (uVar2 + 4 < 0x10) {
      memset(local_138,0,0x100);
      pbVar8 = &DAT_18000e6fc;
      do {
        local_138[*pbVar8] = '\x01';
        pbVar8 = pbVar8 + 1;
        pauVar5 = pauVar6;
      } while (pbVar8 != &DAT_18000e700);
      for (; pauVar5 < (undefined1 (*) [16])(*pauVar6 + uVar2); pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1)) {
        if (local_138[(byte)(*pauVar5)[0]] == '\0') {
          uVar2 = (longlong)pauVar5 - (longlong)pauVar6;
          goto LAB_1800056a1;
        }
      }
    }
    else {
      uVar2 = FUN_18000b960(pauVar6,uVar2,(undefined1 (*) [16])&DAT_18000e6fc,4);
LAB_1800056a1:
      pbVar8 = &DAT_18000e6fc;
      if (uVar2 != 0xffffffffffffffff) {
        pauVar6 = param_2;
        if (0xf < *(ulonglong *)(param_2[1] + 8)) {
          pauVar6 = *(undefined1 (**) [16])*param_2;
        }
        puVar7 = (undefined1 *)0xffffffffffffffff;
        if (*(longlong *)param_2[1] != 0) {
          lVar3 = *(longlong *)param_2[1] + -1;
          lVar10 = -1;
          if (lVar3 != -1) {
            lVar10 = lVar3;
          }
          if (lVar10 + 5U < 0x10) {
            memset(local_138,0,0x100);
            do {
              local_138[*pbVar8] = '\x01';
              pbVar8 = pbVar8 + 1;
            } while (pbVar8 != &DAT_18000e700);
            pauVar5 = (undefined1 (*) [16])(*pauVar6 + lVar10);
            cVar1 = local_138[(byte)(*pauVar5)[0]];
            while (cVar1 != '\0') {
              if (pauVar5 == pauVar6) goto LAB_180005748;
              pauVar5 = (undefined1 (*) [16])(pauVar5[-1] + 0xf);
              cVar1 = local_138[(byte)(*pauVar5)[0]];
            }
            puVar7 = (undefined1 *)((longlong)pauVar5 - (longlong)pauVar6);
          }
          else {
            puVar7 = thunk_FUN_18000a780(pauVar6,(undefined1 *)(lVar10 + 1),(undefined1 (*) [16])&DAT_18000e6fc,4);
          }
        }
LAB_180005748:
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        if (uVar2 <= *(ulonglong *)param_2[1]) {
          puVar4 = (undefined1 *)(*(ulonglong *)param_2[1] - uVar2);
          puVar9 = puVar7 + (1 - uVar2);
          if (puVar4 < puVar7 + (1 - uVar2)) {
            puVar9 = puVar4;
          }
          if (0xf < *(ulonglong *)(param_2[1] + 8)) {
            param_2 = *(undefined1 (**) [16])*param_2;
          }
          FUN_1800013c0(param_1,*param_2 + uVar2,(size_t)puVar9);
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1800063d0();
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return param_1;
}




void FUN_1800057b0(void *param_1,void *param_2,size_t param_3)

{
  BOOL BVar1;
  DWORD local_res20 [2];
  
  BVar1 = VirtualProtect(param_1,param_3,4,local_res20);
  if (BVar1 != 0) {
    memcpy(param_1,param_2,param_3);
    VirtualProtect(param_1,param_3,local_res20[0],local_res20);
  }
  return;
}




void FUN_180005820(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  void *_Memory;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 *unaff_RDI;
  undefined8 local_res18;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  local_res18 = param_3;
  if (param_2 <= (ulonglong)((longlong)param_1[1] - (longlong)*param_1 >> 3)) {
    FUN_180002f80((undefined8 *)*param_1,(undefined8 *)param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
LAB_18000595e:
                    /* WARNING: Subroutine does not return */
    FUN_1800021e0();
  }
  uVar2 = param_2 * 8;
  if (uVar2 == 0) {
    unaff_RDI = (undefined8 *)0x0;
LAB_1800058b7:
    pvVar3 = (void *)*param_1;
    lVar5 = (longlong)(param_1[2] - (longlong)pvVar3) >> 3;
    if (lVar5 == 0) goto LAB_180005901;
    _Memory = pvVar3;
    puVar6 = auStack_28;
    if ((0xfff < (ulonglong)(lVar5 * 8)) &&
       (_Memory = *(void **)((longlong)pvVar3 - 8), puVar6 = auStack_28, 0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) goto LAB_1800058f2;
  }
  else {
    if (uVar2 < 0x1000) {
      unaff_RDI = (undefined8 *)FUN_18000bb18(uVar2);
      goto LAB_1800058b7;
    }
    if (uVar2 + 0x27 <= uVar2) goto LAB_18000595e;
    lVar5 = FUN_18000bb18(uVar2 + 0x27);
    if (lVar5 != 0) {
      unaff_RDI = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar5;
      goto LAB_1800058b7;
    }
LAB_1800058f2:
    pcVar4 = (code *)swi(0x29);
    _Memory = (void *)(*pcVar4)(5);
    puVar6 = auStack_20;
  }
  *(undefined8 *)(puVar6 + -8) = 0x180005901;
  free(_Memory);
LAB_180005901:
  puVar1 = unaff_RDI + param_2;
  *param_1 = (ulonglong)unaff_RDI;
  param_1[1] = (ulonglong)puVar1;
  param_1[2] = (ulonglong)puVar1;
  for (; unaff_RDI != puVar1; unaff_RDI = unaff_RDI + 1) {
    *unaff_RDI = param_3;
  }
  return;
}




void FUN_180005970(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  
  for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  lVar14 = 1L << ((char)lVar14 + 1U & 0x3f);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_180005820((ulonglong *)(param_1 + 0x18),lVar14 * 2,plVar1);
  *(longlong *)(param_1 + 0x30) = lVar14 + -1;
  *(longlong *)(param_1 + 0x38) = lVar14;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001800059ee:
  do {
    while( true ) {
      if (plVar7 == plVar1) {
        return;
      }
      uVar10 = 0xcbf29ce484222325;
      plVar2 = (longlong *)*plVar7;
      uVar9 = plVar7[4];
      plVar15 = plVar7 + 2;
      uVar3 = plVar7[5];
      if (0xf < uVar3) {
        plVar15 = (longlong *)plVar7[2];
      }
      uVar12 = 0;
      if (uVar9 != 0) {
        do {
          uVar10 = (uVar10 ^ *(byte *)((longlong)plVar15 + uVar12)) * 0x100000001b3;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar9);
      }
      puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (uVar10 & *(ulonglong *)(param_1 + 0x30)) * 0x10);
      plVar15 = (longlong *)*puVar16;
      if (plVar15 != plVar1) break;
      *puVar16 = plVar7;
      puVar16[1] = plVar7;
      plVar7 = plVar2;
    }
    plVar4 = (longlong *)puVar16[1];
    plVar13 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      plVar13 = (longlong *)*plVar13;
    }
    plVar11 = plVar7 + 2;
    if (0xf < uVar3) {
      plVar11 = (longlong *)plVar7[2];
    }
    if (uVar9 != plVar4[4]) {
joined_r0x000180005ad9:
      while (plVar15 != plVar4) {
        plVar4 = (longlong *)plVar4[1];
        plVar13 = plVar4 + 2;
        if (0xf < (ulonglong)plVar4[5]) {
          plVar13 = (longlong *)*plVar13;
        }
        if (uVar3 < 0x10) {
          plVar11 = plVar7 + 2;
        }
        else {
          plVar11 = (longlong *)plVar7[2];
        }
        if (uVar9 == plVar4[4]) {
          if ((uVar9 == 0) || (iVar8 = memcmp(plVar11,plVar13,uVar9), iVar8 == 0)) {
            lVar14 = *plVar4;
            plVar15 = (longlong *)plVar7[1];
            *plVar15 = (longlong)plVar2;
            plVar13 = (longlong *)plVar2[1];
            *plVar13 = lVar14;
            puVar16 = *(undefined8 **)(lVar14 + 8);
            *puVar16 = plVar7;
            *(longlong **)(lVar14 + 8) = plVar13;
            plVar2[1] = (longlong)plVar15;
            plVar7[1] = (longlong)puVar16;
            plVar7 = plVar2;
            goto joined_r0x0001800059ee;
          }
          uVar3 = plVar7[5];
        }
      }
      plVar15 = (longlong *)plVar7[1];
      *plVar15 = (longlong)plVar2;
      puVar5 = (undefined8 *)plVar2[1];
      *puVar5 = plVar4;
      puVar6 = (undefined8 *)plVar4[1];
      *puVar6 = plVar7;
      plVar4[1] = (longlong)puVar5;
      plVar2[1] = (longlong)plVar15;
      plVar7[1] = (longlong)puVar6;
      *puVar16 = plVar7;
      plVar7 = plVar2;
      goto joined_r0x0001800059ee;
    }
    if ((uVar9 != 0) && (iVar8 = memcmp(plVar11,plVar13,uVar9), iVar8 != 0)) {
      uVar3 = plVar7[5];
      goto joined_r0x000180005ad9;
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != plVar7) {
      plVar15 = (longlong *)plVar7[1];
      *plVar15 = (longlong)plVar2;
      puVar5 = (undefined8 *)plVar2[1];
      *puVar5 = plVar4;
      puVar6 = (undefined8 *)plVar4[1];
      *puVar6 = plVar7;
      plVar4[1] = (longlong)puVar5;
      plVar2[1] = (longlong)plVar15;
      plVar7[1] = (longlong)puVar6;
    }
    puVar16[1] = plVar7;
    plVar7 = plVar2;
  } while( true );
}




void FUN_180005bd0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  
  for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  lVar14 = 1L << ((char)lVar14 + 1U & 0x3f);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_180005820((ulonglong *)(param_1 + 0x18),lVar14 * 2,plVar1);
  *(longlong *)(param_1 + 0x30) = lVar14 + -1;
  *(longlong *)(param_1 + 0x38) = lVar14;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000180005c4e:
  do {
    while( true ) {
      if (plVar7 == plVar1) {
        return;
      }
      uVar10 = 0xcbf29ce484222325;
      plVar2 = (longlong *)*plVar7;
      uVar9 = plVar7[4];
      plVar15 = plVar7 + 2;
      uVar3 = plVar7[5];
      if (0xf < uVar3) {
        plVar15 = (longlong *)plVar7[2];
      }
      uVar12 = 0;
      if (uVar9 != 0) {
        do {
          uVar10 = (uVar10 ^ *(byte *)((longlong)plVar15 + uVar12)) * 0x100000001b3;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar9);
      }
      puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (uVar10 & *(ulonglong *)(param_1 + 0x30)) * 0x10);
      plVar15 = (longlong *)*puVar16;
      if (plVar15 != plVar1) break;
      *puVar16 = plVar7;
      puVar16[1] = plVar7;
      plVar7 = plVar2;
    }
    plVar4 = (longlong *)puVar16[1];
    plVar13 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      plVar13 = (longlong *)*plVar13;
    }
    plVar11 = plVar7 + 2;
    if (0xf < uVar3) {
      plVar11 = (longlong *)plVar7[2];
    }
    if (uVar9 != plVar4[4]) {
joined_r0x000180005d39:
      while (plVar15 != plVar4) {
        plVar4 = (longlong *)plVar4[1];
        plVar13 = plVar4 + 2;
        if (0xf < (ulonglong)plVar4[5]) {
          plVar13 = (longlong *)*plVar13;
        }
        if (uVar3 < 0x10) {
          plVar11 = plVar7 + 2;
        }
        else {
          plVar11 = (longlong *)plVar7[2];
        }
        if (uVar9 == plVar4[4]) {
          if ((uVar9 == 0) || (iVar8 = memcmp(plVar11,plVar13,uVar9), iVar8 == 0)) {
            lVar14 = *plVar4;
            plVar15 = (longlong *)plVar7[1];
            *plVar15 = (longlong)plVar2;
            plVar13 = (longlong *)plVar2[1];
            *plVar13 = lVar14;
            puVar16 = *(undefined8 **)(lVar14 + 8);
            *puVar16 = plVar7;
            *(longlong **)(lVar14 + 8) = plVar13;
            plVar2[1] = (longlong)plVar15;
            plVar7[1] = (longlong)puVar16;
            plVar7 = plVar2;
            goto joined_r0x000180005c4e;
          }
          uVar3 = plVar7[5];
        }
      }
      plVar15 = (longlong *)plVar7[1];
      *plVar15 = (longlong)plVar2;
      puVar5 = (undefined8 *)plVar2[1];
      *puVar5 = plVar4;
      puVar6 = (undefined8 *)plVar4[1];
      *puVar6 = plVar7;
      plVar4[1] = (longlong)puVar5;
      plVar2[1] = (longlong)plVar15;
      plVar7[1] = (longlong)puVar6;
      *puVar16 = plVar7;
      plVar7 = plVar2;
      goto joined_r0x000180005c4e;
    }
    if ((uVar9 != 0) && (iVar8 = memcmp(plVar11,plVar13,uVar9), iVar8 != 0)) {
      uVar3 = plVar7[5];
      goto joined_r0x000180005d39;
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != plVar7) {
      plVar15 = (longlong *)plVar7[1];
      *plVar15 = (longlong)plVar2;
      puVar5 = (undefined8 *)plVar2[1];
      *puVar5 = plVar4;
      puVar6 = (undefined8 *)plVar4[1];
      *puVar6 = plVar7;
      plVar4[1] = (longlong)puVar5;
      plVar2[1] = (longlong)plVar15;
      plVar7[1] = (longlong)puVar6;
    }
    puVar16[1] = plVar7;
    plVar7 = plVar2;
  } while( true );
}




void FUN_180005e30(float *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar5 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar2 = 0;
  if ((9.223372e+18 <= fVar5) && (fVar5 = fVar5 - 9.223372e+18, fVar5 < 9.223372e+18)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar3 = (longlong)fVar5 + lVar2;
  }
  uVar4 = uVar1;
  if ((uVar1 < uVar3) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar3)))) {
    uVar4 = uVar3;
  }
  FUN_180005bd0((longlong)param_1,uVar4);
  return;
}




longlong * FUN_180005ee0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *_Memory;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_res18;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)param_2[1];
  local_res18 = param_2[1];
  plVar11 = param_2 + 2;
  if (0xf < (ulonglong)param_2[5]) {
    plVar11 = (longlong *)*plVar11;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_2[4] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)((longlong)plVar11 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_2[4]);
  }
  lVar5 = (*(ulonglong *)(param_1 + 0x30) & uVar8) * 0x10;
  plVar11 = (longlong *)(lVar5 + lVar2);
  plVar7 = (longlong *)(lVar2 + 8 + lVar5);
  plVar4 = (longlong *)*plVar11;
  plVar9 = (longlong *)*plVar7;
  _Memory = param_2;
  do {
    plVar10 = (longlong *)*_Memory;
    FUN_180002290(_Memory + 6);
    FUN_180002290(_Memory + 2);
    free(_Memory);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (_Memory == plVar9) {
      if (plVar4 == param_2) {
        *plVar11 = lVar1;
        local_res18 = lVar1;
      }
      *plVar7 = local_res18;
      while (plVar10 != param_3) {
        plVar11 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[5]) {
          plVar11 = (longlong *)*plVar11;
        }
        uVar6 = 0xcbf29ce484222325;
        uVar8 = 0;
        if (plVar10[4] != 0) {
          do {
            uVar6 = (uVar6 ^ *(byte *)((longlong)plVar11 + uVar8)) * 0x100000001b3;
            uVar8 = uVar8 + 1;
          } while (uVar8 < (ulonglong)plVar10[4]);
        }
        uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x30);
        plVar11 = (longlong *)(lVar2 + uVar6 * 0x10);
        lVar5 = lVar2 + uVar6 * 0x10;
        plVar4 = *(longlong **)(lVar5 + 8);
        plVar9 = plVar10;
        while( true ) {
          plVar10 = (longlong *)*plVar9;
          FUN_180002290(plVar9 + 6);
          FUN_180002290(plVar9 + 2);
          free(plVar9);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar9 == plVar4) break;
          plVar9 = plVar10;
          if (plVar10 == param_3) {
            *plVar11 = (longlong)plVar10;
            goto LAB_180006139;
          }
        }
        *plVar11 = lVar1;
        *(longlong *)(lVar5 + 8) = lVar1;
      }
      goto LAB_180006139;
    }
    _Memory = plVar10;
  } while (plVar10 != param_3);
  if (plVar4 == param_2) {
    *plVar11 = (longlong)plVar10;
  }
LAB_180006139:
  *puVar3 = plVar10;
  plVar10[1] = (longlong)puVar3;
  return param_3;
}




undefined8 * FUN_180006180(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  
  if (param_2 != param_3) {
    plVar1 = (longlong *)(param_1 + 8);
    lVar2 = *plVar1;
    lVar3 = *(longlong *)(param_1 + 0x18);
    puVar4 = (undefined8 *)param_2[1];
    lVar10 = param_2[1];
    puVar12 = param_2 + 2;
    if (0xf < (ulonglong)param_2[5]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    uVar9 = 0xcbf29ce484222325;
    uVar8 = 0;
    if (param_2[4] != 0) {
      do {
        uVar9 = (uVar9 ^ *(byte *)((longlong)puVar12 + uVar8)) * 0x100000001b3;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulonglong)param_2[4]);
    }
    plVar13 = (longlong *)((*(ulonglong *)(param_1 + 0x30) & uVar9) * 0x10 + lVar3);
    puVar12 = (undefined8 *)*plVar13;
    puVar5 = (undefined8 *)plVar13[1];
    puVar6 = (undefined8 *)*param_2;
    FUN_180002740(plVar1,param_2);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    puVar7 = param_2;
    while (puVar11 = puVar6, puVar7 != puVar5) {
      if (puVar11 == param_3) {
        if (puVar12 == param_2) {
LAB_1800063aa:
          *plVar13 = (longlong)puVar11;
        }
        goto LAB_1800063ad;
      }
      puVar6 = (undefined8 *)*puVar11;
      FUN_180002740(plVar1,puVar11);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      puVar7 = puVar11;
    }
    if (puVar12 == param_2) {
      *plVar13 = lVar2;
      lVar10 = lVar2;
    }
    plVar13[1] = lVar10;
    while (puVar11 != param_3) {
      puVar12 = puVar11 + 2;
      if (0xf < (ulonglong)puVar11[5]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      uVar9 = 0xcbf29ce484222325;
      uVar8 = 0;
      if (puVar11[4] != 0) {
        do {
          uVar9 = (uVar9 ^ *(byte *)((longlong)puVar12 + uVar8)) * 0x100000001b3;
          uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)puVar11[4]);
      }
      uVar9 = *(ulonglong *)(param_1 + 0x30) & uVar9;
      plVar13 = (longlong *)(lVar3 + uVar9 * 0x10);
      lVar10 = lVar3 + uVar9 * 0x10;
      puVar12 = *(undefined8 **)(lVar10 + 8);
      puVar5 = (undefined8 *)*puVar11;
      FUN_180002740(plVar1,puVar11);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      puVar6 = puVar11;
      while (puVar11 = puVar5, puVar6 != puVar12) {
        if (puVar11 == param_3) goto LAB_1800063aa;
        puVar5 = (undefined8 *)*puVar11;
        FUN_180002740(plVar1,puVar11);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        puVar6 = puVar11;
      }
      *plVar13 = lVar2;
      *(longlong *)(lVar10 + 8) = lVar2;
    }
LAB_1800063ad:
    *puVar4 = puVar11;
    puVar11[1] = puVar4;
  }
  return param_3;
}




void FUN_1800063d0(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_1800063f0(char *param_1,longlong *param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  char *local_res8 [4];
  
  piVar2 = _errno();
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(char **)param_1;
  }
  *piVar2 = 0;
  strtol(param_1,local_res8,param_3);
  if (param_1 != local_res8[0]) {
    if (*piVar2 != 0x22) {
      if (param_2 != (longlong *)0x0) {
        *param_2 = (longlong)local_res8[0] - (longlong)param_1;
      }
      return;
    }
    std::_Xout_of_range("stoi argument out of range");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  std::_Xinvalid_argument("invalid stoi argument");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined8 FUN_180006470(undefined8 *param_1)

{
  (*(code *)*param_1)();
  _Cnd_do_broadcast_at_thread_exit();
  free(param_1);
  return 0;
}




void FUN_1800064a0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,size_t param_5)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  size_t _Size;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  void *pvVar7;
  ulonglong uVar8;
  void *_Src;
  undefined1 *puVar9;
  void *unaff_RDI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar9 = auStack_48;
  _Size = param_1[2];
  _Src = (void *)0x7fffffffffffffff;
  if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180002300();
  }
  uVar4 = param_1[3];
  pvVar7 = (void *)(_Size + param_2 | 0xf);
  if ((pvVar7 < (void *)0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    pvVar3 = (void *)(uVar4 + (uVar4 >> 1));
    _Src = pvVar7;
    if (pvVar7 < pvVar3) {
      _Src = pvVar3;
    }
    uVar1 = (longlong)_Src + 1;
    if (uVar1 == 0) {
      unaff_RDI = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = (longlong)_Src + 0x28;
        if (uVar8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_1800021e0();
        }
        goto LAB_180006543;
      }
      unaff_RDI = (void *)FUN_18000bb18(uVar1);
    }
LAB_180006566:
    param_1[2] = _Size + param_2;
    pvVar7 = (void *)(_Size + (longlong)unaff_RDI);
    param_1[3] = _Src;
    if (uVar4 < 0x10) {
      memcpy(unaff_RDI,param_1,_Size);
      memcpy(pvVar7,param_4,param_5);
      *(undefined1 *)((longlong)pvVar7 + param_5) = 0;
      goto LAB_1800065f6;
    }
    _Src = (void *)*param_1;
    memcpy(unaff_RDI,_Src,_Size);
    memcpy(pvVar7,param_4,param_5);
    *(undefined1 *)((longlong)pvVar7 + param_5) = 0;
    if (0xfff < uVar4 + 1) {
      puVar2 = (undefined8 *)((longlong)_Src + -8);
      _Src = (void *)((longlong)_Src + (-8 - (longlong)*puVar2));
      if (_Src < (void *)0x20) {
        free((void *)*puVar2);
        goto LAB_1800065f6;
      }
      goto LAB_1800065ca;
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_180006543:
    lVar6 = FUN_18000bb18(uVar8);
    if (lVar6 != 0) {
      unaff_RDI = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RDI - 8) = lVar6;
      goto LAB_180006566;
    }
LAB_1800065ca:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x1800065d9;
  free(_Src);
LAB_1800065f6:
  *param_1 = unaff_RDI;
  return;
}




void FUN_180006630(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}




void FUN_180006650(longlong param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180006670(void)

{
  longlong lVar1;
  undefined1 (*pauVar2) [32];
  code *pcVar3;
  int iVar4;
  size_t _Size;
  undefined1 (*pauVar5) [32];
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  char ****ppppcVar8;
  void *_Dst;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uStackY_2c0;
  undefined1 auStackY_2b8 [8];
  undefined1 auStackY_2b0 [24];
  uint local_284;
  undefined1 (*local_280) [32];
  undefined8 uStack_278;
  ulonglong local_270 [2];
  char ***local_260;
  undefined8 uStack_258;
  longlong local_250;
  ulonglong local_248;
  char local_238 [512];
  ulonglong local_38;
  
  puVar11 = auStackY_2b8;
  puVar10 = auStackY_2b8;
  local_38 = DAT_1800152c0 ^ (ulonglong)auStackY_2b8;
  ConnectNamedPipe(DAT_180015098,(LPOVERLAPPED)0x0);
  uStack_278 = 0;
  local_270[0] = 0;
  local_270[1] = 0xf;
  local_280 = (undefined1 (*) [32])0x0;
  iVar4 = ReadFile(DAT_180015098,local_238,0x1ff,&local_284,(LPOVERLAPPED)0x0);
  do {
    if ((iVar4 == 0) || (local_284 == 0)) {
      if (0xf < local_270[1]) {
        pauVar7 = local_280;
        puVar11 = auStackY_2b8;
        if ((0xfff < local_270[1] + 1) &&
           (pauVar7 = *(undefined1 (**) [32])((longlong)(local_280 + -1) + 0x18), puVar11 = auStackY_2b8,
           0x1f < (ulonglong)((longlong)local_280 + (-8 - (longlong)pauVar7)))) {
LAB_18000699c:
          pcVar3 = (code *)swi(0x29);
          pauVar7 = (undefined1 (*) [32])(*pcVar3)(5);
          puVar11 = puVar10 + 8;
        }
        *(undefined8 *)(puVar11 + -8) = 0x1800069ab;
        free(pauVar7);
      }
      *(undefined8 *)(puVar11 + 0x48) = 0;
      *(undefined8 *)(puVar11 + 0x50) = 0xf;
      puVar11[0x38] = 0;
      *(undefined8 *)(puVar11 + -8) = 0x1800069cd;
      return;
    }
    if (0x1ff < (ulonglong)local_284) {
                    /* WARNING: Subroutine does not return */
      FUN_18000bed4();
    }
    local_238[local_284] = '\0';
    _Size = strlen(local_238);
    if (local_270[1] - local_270[0] < _Size) {
      FUN_1800064a0(&local_280,_Size,0,local_238,_Size);
    }
    else {
      pauVar7 = (undefined1 (*) [32])&local_280;
      if (0xf < local_270[1]) {
        pauVar7 = local_280;
      }
      _Dst = (void *)((longlong)*pauVar7 + local_270[0]);
      local_270[0] = _Size + local_270[0];
      memmove(_Dst,local_238,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
    }
    while( true ) {
      pauVar7 = (undefined1 (*) [32])&local_280;
      if (0xf < local_270[1]) {
        pauVar7 = local_280;
      }
      if (local_270[0] == 0) {
        uVar9 = 0xffffffffffffffff;
      }
      else {
        pauVar2 = (undefined1 (*) [32])(*pauVar7 + local_270[0]);
        pauVar5 = thunk_FUN_18000ae00(pauVar7,pauVar2,10);
        uVar9 = 0xffffffffffffffff;
        if (pauVar5 != pauVar2) {
          uVar9 = (longlong)pauVar5 - (longlong)pauVar7;
        }
      }
      if (uVar9 == 0xffffffffffffffff) break;
      local_260 = (char ***)0x0;
      uStack_258 = 0;
      local_250 = 0;
      local_248 = 0;
      uVar6 = uVar9;
      if (local_270[0] < uVar9) {
        uVar6 = local_270[0];
      }
      pauVar7 = (undefined1 (*) [32])&local_280;
      if (0xf < local_270[1]) {
        pauVar7 = local_280;
      }
      FUN_1800013c0(&local_260,pauVar7,uVar6);
      uVar6 = uVar9 + 1;
      if (local_270[0] < uVar9 + 1) {
        uVar6 = local_270[0];
      }
      pauVar7 = (undefined1 (*) [32])&local_280;
      if (0xf < local_270[1]) {
        pauVar7 = local_280;
      }
      uVar9 = local_270[0] - uVar6;
      memmove(pauVar7,(void *)((longlong)*pauVar7 + uVar6),uVar9 + 1);
      while (local_270[0] = uVar9, local_250 != 0) {
        ppppcVar8 = &local_260;
        if (0xf < local_248) {
          ppppcVar8 = (char ****)local_260;
        }
        lVar1 = local_250 + -1;
        if (*(char *)((longlong)ppppcVar8 + lVar1) != '\r') {
          ppppcVar8 = &local_260;
          if (0xf < local_248) {
            ppppcVar8 = (char ****)local_260;
          }
          if (*(char *)((longlong)ppppcVar8 + lVar1) != '\n') {
            if (local_250 != 0) {
              ppppcVar8 = &local_260;
              if (0xf < local_248) {
                ppppcVar8 = (char ****)local_260;
              }
              FUN_180007450((char *)ppppcVar8);
            }
            break;
          }
        }
        local_250 = lVar1;
        ppppcVar8 = &local_260;
        if (0xf < local_248) {
          ppppcVar8 = (char ****)local_260;
        }
        *(char *)((longlong)ppppcVar8 + lVar1) = '\0';
      }
      if (0xf < local_248) {
        ppppcVar8 = (char ****)local_260;
        if ((0xfff < local_248 + 1) && (ppppcVar8 = (char ****)local_260[-1], (char *)0x1f < (char *)((longlong)local_260 + (-8 - (longlong)ppppcVar8)))) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar10 = auStackY_2b0;
          goto LAB_18000699c;
        }
        free(ppppcVar8);
      }
      local_250 = 0;
      local_248 = 0xf;
      local_260 = (char ***)((ulonglong)local_260 & 0xffffffffffffff00);
    }
    iVar4 = ReadFile(DAT_180015098,local_238,0x1ff,&local_284,(LPOVERLAPPED)0x0);
  } while( true );
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800069f0(void)

{
  undefined1 (*pauVar1) [32];
  char cVar2;
  code *pcVar3;
  void *pvVar4;
  size_t sVar5;
  undefined1 *puVar6;
  FILE *_File;
  char *pcVar7;
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  void *_Memory;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  undefined1 (*pauVar15) [16];
  undefined1 *puVar16;
  undefined8 uStack_410;
  undefined1 auStack_408 [8];
  undefined1 auStack_400 [24];
  undefined4 local_3e8;
  char local_3d8 [256];
  undefined1 (*local_2d8) [16];
  undefined8 uStack_2d0;
  undefined1 *local_2c8;
  ulonglong uStack_2c0;
  undefined1 (*local_2b8) [16];
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  ulonglong uStack_2a0;
  undefined1 (*local_298) [32];
  undefined8 uStack_290;
  ulonglong local_288;
  ulonglong local_280;
  char local_278;
  undefined7 uStack_277;
  undefined8 local_268;
  ulonglong local_260;
  char local_258 [256];
  CHAR local_158 [272];
  ulonglong local_48;
  
  puVar13 = auStack_408;
  local_48 = DAT_1800152c0 ^ (ulonglong)auStack_408;
  local_3e8 = 0;
  GetModuleFileNameA((HMODULE)0x0,local_158,0x104);
  local_2d8 = (undefined1 (*) [16])0x0;
  uStack_2d0 = 0;
  local_2c8 = (undefined1 *)0x0;
  uStack_2c0 = 0;
  sVar5 = strlen(local_158);
  FUN_1800013c0(&local_2d8,local_158,sVar5);
  pauVar10 = (undefined1 (*) [16])&local_2d8;
  if (0xf < uStack_2c0) {
    pauVar10 = local_2d8;
  }
  if (local_2c8 == (undefined1 *)0x0) {
LAB_180006b18:
    puVar6 = (undefined1 *)0xffffffffffffffff;
  }
  else {
    puVar6 = (undefined1 *)0xffffffffffffffff;
    if (local_2c8 + -1 != (undefined1 *)0xffffffffffffffff) {
      puVar6 = local_2c8 + -1;
    }
    if (puVar6 + 3 < (undefined1 *)0x10) {
      memset(local_3d8,0,0x100);
      pbVar14 = &DAT_18000e718;
      do {
        local_3d8[*pbVar14] = '\x01';
        pbVar14 = pbVar14 + 1;
      } while (pbVar14 != &DAT_18000e71a);
      pauVar15 = (undefined1 (*) [16])(puVar6 + (longlong)pauVar10);
      cVar2 = local_3d8[(byte)(*pauVar15)[0]];
      while (cVar2 == '\0') {
        if (pauVar15 == pauVar10) goto LAB_180006b18;
        pauVar15 = (undefined1 (*) [16])(pauVar15[-1] + 0xf);
        cVar2 = local_3d8[(byte)(*pauVar15)[0]];
      }
      puVar6 = (undefined1 *)((longlong)pauVar15 - (longlong)pauVar10);
    }
    else {
      puVar6 = thunk_FUN_18000a9c0(pauVar10,puVar6 + 1,(undefined1 (*) [16])&DAT_18000e718,2);
    }
  }
  local_2b8 = (undefined1 (*) [16])0x0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  puVar16 = puVar6 + 1;
  if (local_2c8 < puVar6 + 1) {
    puVar16 = local_2c8;
  }
  pauVar10 = (undefined1 (*) [16])&local_2d8;
  if (0xf < uStack_2c0) {
    pauVar10 = local_2d8;
  }
  FUN_1800013c0(&local_2b8,pauVar10,(size_t)puVar16);
  local_3e8 = 2;
  if (0xf < uStack_2c0) {
    pauVar10 = local_2d8;
    puVar13 = auStack_408;
    if ((0xfff < uStack_2c0 + 1) &&
       (pauVar10 = *(undefined1 (**) [16])(local_2d8[-1] + 8), puVar13 = auStack_408, 0x1f < (ulonglong)((longlong)local_2d8 + (-8 - (longlong)pauVar10)))) {
      pcVar3 = (code *)swi(0x29);
      pauVar10 = (undefined1 (*) [16])(*pcVar3)(5);
      puVar13 = auStack_400;
    }
    *(undefined8 *)(puVar13 + -8) = 0x180006b95;
    free(pauVar10);
  }
  local_2d8 = local_2b8;
  uStack_2d0 = uStack_2b0;
  local_2c8 = (undefined1 *)local_2a8;
  uStack_2c0 = uStack_2a0;
  *(undefined4 *)(puVar13 + 0x20) = 0;
  local_2a8 = 0;
  uStack_2a0 = 0xf;
  local_2b8 = (undefined1 (*) [16])((ulonglong)local_2b8 & 0xffffffffffffff00);
  *(undefined8 *)(puVar13 + -8) = 0x180006bf3;
  FUN_1800023d0((undefined8 *)&local_278,&local_2d8,"shell.ini");
  pcVar7 = &local_278;
  if (0xf < local_260) {
    pcVar7 = (char *)CONCAT71(uStack_277,local_278);
  }
  *(undefined8 *)(puVar13 + -8) = 0x180006c18;
  _File = fopen(pcVar7,"r");
  if (_File != (FILE *)0x0) {
    *(undefined8 *)(puVar13 + -8) = 0x180006c39;
    pcVar7 = fgets(local_258,0x100,_File);
    while (pcVar7 != (char *)0x0) {
      local_298 = (undefined1 (*) [32])0x0;
      uStack_290 = 0;
      local_288 = 0;
      local_280 = 0;
      *(undefined8 *)(puVar13 + -8) = 0x180006c63;
      sVar5 = strlen(local_258);
      *(undefined8 *)(puVar13 + -8) = 0x180006c76;
      FUN_1800013c0(&local_298,local_258,sVar5);
      pauVar9 = (undefined1 (*) [32])&local_298;
      if (0xf < local_280) {
        pauVar9 = local_298;
      }
      if (9 < local_288) {
        pauVar1 = (undefined1 (*) [32])(*pauVar9 + local_288);
        *(undefined8 *)(puVar13 + -8) = 0x180006cb5;
        pauVar8 = thunk_FUN_18000b770(pauVar9,pauVar1,(undefined1 (*) [16])"ServerPort",10);
        if ((pauVar8 == pauVar1) || ((longlong)pauVar8 - (longlong)pauVar9 == -1)) goto LAB_180006de4;
        pauVar9 = (undefined1 (*) [32])&local_298;
        if (0xf < local_280) {
          pauVar9 = local_298;
        }
        if (local_288 == 0) {
          lVar11 = -1;
        }
        else {
          pauVar1 = (undefined1 (*) [32])(*pauVar9 + local_288);
          *(undefined8 *)(puVar13 + -8) = 0x180006d03;
          pauVar8 = thunk_FUN_18000ae00(pauVar9,pauVar1,0x3d);
          lVar11 = -1;
          if (pauVar8 != pauVar1) {
            lVar11 = (longlong)pauVar8 - (longlong)pauVar9;
          }
        }
        if (lVar11 == -1) goto LAB_180006de4;
        uVar12 = lVar11 + 1;
        local_2b8 = (undefined1 (*) [16])0x0;
        uStack_2b0 = 0;
        local_2a8 = 0;
        uStack_2a0 = 0;
        if (local_288 < uVar12) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar13 + -8) = &UNK_180006f41;
          FUN_1800063d0();
        }
        sVar5 = 0xffffffffffffffff;
        if (local_288 - uVar12 != 0xffffffffffffffff) {
          sVar5 = local_288 - uVar12;
        }
        pauVar9 = (undefined1 (*) [32])&local_298;
        if (0xf < local_280) {
          pauVar9 = local_298;
        }
        *(undefined8 *)(puVar13 + -8) = 0x180006d71;
        FUN_1800013c0(&local_2b8,(void *)((longlong)*pauVar9 + uVar12),sVar5);
        *(undefined4 *)(puVar13 + 0x20) = 1;
        *(undefined8 *)(puVar13 + -8) = 0x180006d92;
        FUN_180002020("[Entry] shell.ini ServerPort=%s");
        *(undefined4 *)(puVar13 + 0x20) = 0;
        if (uStack_2a0 < 0x10) {
LAB_180006dd4:
          local_2a8 = 0;
          uStack_2a0 = 0xf;
          local_2b8 = (undefined1 (*) [16])((ulonglong)local_2b8 & 0xffffffffffffff00);
          goto LAB_180006de4;
        }
        pauVar10 = local_2b8;
        if ((uStack_2a0 + 1 < 0x1000) ||
           (pauVar10 = *(undefined1 (**) [16])(local_2b8[-1] + 8), (ulonglong)((longlong)local_2b8 + (-8 - (longlong)pauVar10)) < 0x20)) {
          *(undefined8 *)(puVar13 + -8) = 0x180006dd4;
          free(pauVar10);
          goto LAB_180006dd4;
        }
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar13 = puVar13 + 8;
LAB_180006e9e:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar13 = puVar13 + 8;
        goto LAB_180006ea5;
      }
LAB_180006de4:
      if (0xf < local_280) {
        pauVar9 = local_298;
        if ((0xfff < local_280 + 1) &&
           (pauVar9 = *(undefined1 (**) [32])((longlong)local_298[-1] + 0x18), 0x1f < (ulonglong)((longlong)local_298 + (-8 - (longlong)pauVar9))))
        goto LAB_180006e9e;
        *(undefined8 *)(puVar13 + -8) = 0x180006e22;
        free(pauVar9);
      }
      local_288 = 0;
      local_280 = 0xf;
      local_298 = (undefined1 (*) [32])((ulonglong)local_298 & 0xffffffffffffff00);
      *(undefined8 *)(puVar13 + -8) = 0x180006e4d;
      pcVar7 = fgets(local_258,0x100,_File);
    }
    *(undefined8 *)(puVar13 + -8) = 0x180006e5f;
    fclose(_File);
  }
  if (0xf < local_260) {
    pvVar4 = (void *)CONCAT71(uStack_277,local_278);
    _Memory = pvVar4;
    if ((0xfff < local_260 + 1) && (_Memory = *(void **)((longlong)pvVar4 + -8), 0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
LAB_180006ea5:
      pcVar3 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar3)(5);
      puVar13 = puVar13 + 8;
    }
    *(undefined8 *)(puVar13 + -8) = 0x180006eb4;
    free(_Memory);
  }
  local_268 = 0;
  local_260 = 0xf;
  local_278 = '\0';
  if (0xf < uStack_2c0) {
    pauVar10 = local_2d8;
    if ((0xfff < uStack_2c0 + 1) && (pauVar10 = *(undefined1 (**) [16])(local_2d8[-1] + 8), 0x1f < (ulonglong)((longlong)local_2d8 + (-8 - (longlong)pauVar10)))
       ) {
      pcVar3 = (code *)swi(0x29);
      pauVar10 = (undefined1 (*) [16])(*pcVar3)(5);
      puVar13 = puVar13 + 8;
    }
    *(undefined8 *)(puVar13 + -8) = 0x180006f0d;
    free(pauVar10);
  }
  *(undefined8 *)(puVar13 + -8) = 0x180006f2c;
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180007088) */

void FUN_180006f50(void)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *_ArgList;
  uintptr_t uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  _ArgList = (undefined8 *)0x0;
  DAT_180015000 = CreateNamedPipeA("\\\\.\\pipe\\RevampedHookLog",2,0,1,0x10000,0,0,(LPSECURITY_ATTRIBUTES)0x0);
  if (DAT_180015000 != (HANDLE)0xffffffffffffffff) {
    DAT_180015098 = CreateNamedPipeA("\\\\.\\pipe\\RevampedHookCmd",1,0,1,0,0x1000,0,(LPSECURITY_ATTRIBUTES)0x0);
    ConnectNamedPipe(DAT_180015000,(LPOVERLAPPED)0x0);
  }
  if (DAT_180015098 != (HANDLE)0xffffffffffffffff) {
    puVar3 = (undefined8 *)FUN_18000bb18(8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = FUN_180006670;
      _ArgList = puVar3;
    }
    uVar4 = _beginthreadex((void *)0x0,0,FUN_180006470,_ArgList,0,(uint *)&uStack_20);
    if (uVar4 == 0) {
      uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    if ((uint)uStack_20 != 0) {
      local_28 = (undefined4)uVar4;
      uStack_24 = (undefined4)(uVar4 >> 0x20);
      local_18 = local_28;
      uStack_14 = uStack_24;
      uStack_10 = (uint)uStack_20;
      uStack_c = uStack_20._4_4_;
      iVar2 = _Thrd_detach(&local_18);
      if (iVar2 == 0) {
        uStack_20 = 0;
        goto LAB_1800070a9;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(1);
  }
LAB_1800070a9:
  FUN_180002020("[Entry] RevampedHook DLL loaded");
  FUN_1800069f0();
  FUN_180003960();
  FUN_180001dc0();
  FUN_180009480();
  FUN_180007760();
  FUN_180002020("[Entry] Waiting for MapGroup initialization...");
  bVar1 = FUN_180007240();
  while (!bVar1) {
    Sleep(100);
    bVar1 = FUN_180007240();
  }
  FUN_180002020("MapGroup->Initialized");
  FUN_180007570();
  FUN_180002020("----Commands----");
  FUN_180002020("/reloadgameconfig - Reloads ServerGameConfig.ini");
  do {
    Sleep(10000);
  } while( true );
}




undefined8 FUN_180007170(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_180006f50,(LPVOID)0x0,0,(LPDWORD)0x0);
    return 1;
  }
  if (param_2 == 0) {
    FUN_180009510();
    if (DAT_180015000 != (HANDLE)0xffffffffffffffff) {
      FlushFileBuffers(DAT_180015000);
      DisconnectNamedPipe(DAT_180015000);
      CloseHandle(DAT_180015000);
      DAT_180015000 = (HANDLE)0xffffffffffffffff;
    }
    if (DAT_180015098 != (HANDLE)0xffffffffffffffff) {
      CloseHandle(DAT_180015098);
      DAT_180015098 = (HANDLE)0xffffffffffffffff;
    }
  }
  return 1;
}




undefined8 FUN_180007220(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_180015428 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000180007238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*DAT_180015428 + 0x90))(DAT_180015428,param_1,0);
  return uVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180007240(void)

{
  bool bVar1;
  
  _DAT_180015418 = (*(code *)0x140008520)(0xe);
  bVar1 = _DAT_180015418 != 0;
  if (bVar1) {
    DAT_180015428 = (*(code *)0x140087650)(_DAT_180015418);
    LOCK();
    DAT_180015420 = 1;
    UNLOCK();
  }
  return bVar1;
}




uint FUN_180007290(uint *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 0x270;
  if (*param_1 == 0x270) {
    do {
      uVar3 = param_1[uVar6 - 0x26e];
      uVar4 = param_1[uVar6 - 0x26d];
      uVar5 = param_1[uVar6 - 0x26b];
      uVar2 = (uVar3 ^ param_1[uVar6 - 0x26f]) & 0x7fffffff ^ param_1[uVar6 - 0x26f];
      param_1[uVar6 + 1] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe2] ^ uVar2 >> 1;
      uVar3 = (uVar4 ^ uVar3) & 0x7fffffff ^ uVar3;
      uVar2 = param_1[uVar6 - 0x26c];
      param_1[uVar6 + 2] = -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe1] ^ uVar3 >> 1;
      uVar4 = (uVar2 ^ uVar4) & 0x7fffffff ^ uVar4;
      uVar3 = param_1[uVar6 - 0x26a];
      param_1[uVar6 + 3] = -(uint)((uVar4 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe0] ^ uVar4 >> 1;
      uVar2 = (uVar5 ^ uVar2) & 0x7fffffff ^ uVar2;
      param_1[uVar6 + 4] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xdf] ^ uVar2 >> 1;
      uVar5 = (uVar3 ^ uVar5) & 0x7fffffff ^ uVar5;
      uVar3 = (uVar3 ^ param_1[uVar6 - 0x269]) & 0x7fffffff ^ uVar3;
      param_1[uVar6 + 5] = -(uint)((uVar5 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xde] ^ uVar5 >> 1;
      uVar1 = uVar6 + 6;
      param_1[uVar1] = -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xdd] ^ uVar3 >> 1;
      uVar6 = uVar1;
    } while (uVar1 < 0x4e0);
  }
  else if (0x4df < *param_1) {
    FUN_180007a40(param_1);
  }
  uVar3 = param_1[(ulonglong)*param_1 + 1];
  *param_1 = *param_1 + 1;
  uVar3 = uVar3 >> 0xb & param_1[0x4e1] ^ uVar3;
  uVar3 = (uVar3 & 0xff3a58ad) << 7 ^ uVar3;
  uVar3 = (uVar3 & 0xffffdf8c) << 0xf ^ uVar3;
  return uVar3 >> 0x12 ^ uVar3;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180007450(char *param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  ulonglong uVar3;
  int iVar4;
  size_t sVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined8 ***local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  if (param_1 != (char *)0x0) {
    puVar8 = auStack_58;
    local_18 = DAT_1800152c0 ^ (ulonglong)auStack_58;
    puVar9 = auStack_58;
    if (*param_1 != '\0') {
      local_38 = (undefined8 ****)0x0;
      uStack_30 = 0;
      local_28 = 0;
      local_20 = 0;
      sVar5 = strlen(param_1);
      FUN_1800013c0(&local_38,param_1,sVar5);
      uVar3 = local_20;
      pppuVar2 = local_38;
      ppppuVar6 = &local_38;
      if (0xf < local_20) {
        ppppuVar6 = (undefined8 ****)local_38;
      }
      if ((local_28 == 0x11) && (iVar4 = memcmp(ppppuVar6,"/reloadgameconfig",0x11), iVar4 == 0)) {
        FUN_180003960();
      }
      else {
        FUN_180002020("Unknown command: %s");
      }
      if (0xf < uVar3) {
        ppppuVar6 = (undefined8 ****)pppuVar2;
        puVar8 = auStack_58;
        if (0xfff < uVar3 + 1) {
          ppppuVar6 = (undefined8 ****)pppuVar2[-1];
          ppppuVar7 = (undefined8 ****)((longlong)pppuVar2 + (-8 - (longlong)ppppuVar6));
          puVar8 = auStack_58;
          if ((undefined8 ****)0x1f < ppppuVar7) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            ppppuVar6 = ppppuVar7;
            puVar8 = auStack_50;
          }
        }
        *(undefined8 *)(puVar8 + -8) = 0x180007535;
        free(ppppuVar6);
      }
      *(undefined8 *)(puVar8 + 0x30) = 0;
      *(undefined8 *)(puVar8 + 0x38) = 0xf;
      puVar8[0x20] = 0;
      puVar9 = puVar8;
    }
    *(undefined8 *)(puVar9 + -8) = 0x180007559;
  }
  return;
}




void FUN_180007570(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_180002020("[HookManager] Applying game hooks...");
  iVar1 = FUN_180009210((undefined8 *)0x140372ed0,&LAB_1800081e0,&DAT_180015430);
  pcVar3 = "  [FAIL] %s: MH_CreateHook failed (%d)";
  if (iVar1 == 0) {
    iVar1 = FUN_180009470(0x140372ed0);
    if (iVar1 == 0) {
      FUN_180002020("  [OK] %s");
    }
    else {
      FUN_180002020("  [FAIL] %s: MH_EnableHook failed (%d)");
    }
  }
  else {
    FUN_180002020("  [FAIL] %s: MH_CreateHook failed (%d)");
  }
  iVar1 = FUN_180009210((undefined8 *)0x140255cf0,FUN_180008200,&DAT_180015438);
  if (iVar1 == 0) {
    iVar1 = FUN_180009470(0x140255cf0);
    if (iVar1 != 0) {
      pcVar2 = "  [FAIL] %s: MH_EnableHook failed (%d)";
      goto LAB_180007649;
    }
    FUN_180002020("  [OK] %s");
  }
  else {
    pcVar2 = "  [FAIL] %s: MH_CreateHook failed (%d)";
LAB_180007649:
    FUN_180002020(pcVar2);
  }
  iVar1 = FUN_180009210((undefined8 *)0x1403f24a0,&LAB_180008260,&DAT_180015440);
  if (iVar1 == 0) {
    iVar1 = FUN_180009470(0x1403f24a0);
    if (iVar1 != 0) {
      pcVar2 = "  [FAIL] %s: MH_EnableHook failed (%d)";
      goto LAB_1800076ad;
    }
    FUN_180002020("  [OK] %s");
  }
  else {
    pcVar2 = "  [FAIL] %s: MH_CreateHook failed (%d)";
LAB_1800076ad:
    FUN_180002020(pcVar2);
  }
  iVar1 = FUN_180009210((undefined8 *)0x1402a3280,FUN_180008280,&DAT_180015448);
  if (iVar1 == 0) {
    iVar1 = FUN_180009470(0x1402a3280);
    if (iVar1 == 0) {
      FUN_180002020("  [OK] %s");
      goto LAB_180007737;
    }
    pcVar3 = "  [FAIL] %s: MH_EnableHook failed (%d)";
  }
  FUN_180002020(pcVar3);
LAB_180007737:
  FUN_180007830();
  FUN_180002020("[HookManager] Complete: %d hooked, %d failed");
  return;
}




void FUN_180007760(void)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  char *pcVar3;
  
  FUN_180002020("[HookManager] Installing early hooks...");
  FUN_180008b70();
  hModule = LoadLibraryA("ws2_32.dll");
  if (hModule == (HMODULE)0x0) {
    FUN_180002020("  [FAIL] ConnectRedirect: ws2_32.dll not loaded");
    return;
  }
  pFVar2 = GetProcAddress(hModule,"connect");
  if (pFVar2 == (FARPROC)0x0) {
    FUN_180002020("  [FAIL] ConnectRedirect: GetProcAddress(connect) failed");
    return;
  }
  iVar1 = FUN_180009210((undefined8 *)pFVar2,FUN_180008320,&DAT_180015450);
  if (iVar1 != 0) {
    FUN_180002020("  [FAIL] ConnectRedirect: MH_CreateHook (%d)");
    return;
  }
  iVar1 = FUN_180009470((longlong)pFVar2);
  pcVar3 = "  [FAIL] ConnectRedirect: MH_EnableHook";
  if (iVar1 == 0) {
    pcVar3 = "  [OK] ConnectRedirect (ws2_32.connect)";
  }
  FUN_180002020(pcVar3);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180007830(void)

{
  DWORD DVar1;
  uint uVar2;
  BOOL BVar3;
  size_t sVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1428 [32];
  DWORD local_1408 [2];
  char local_1400 [18];
  ushort local_13ee;
  char local_13e8 [32];
  uint local_13c8;
  DWORD local_13c4;
  uint local_13c0 [1247];
  undefined4 local_44;
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x180007847;
  local_38 = DAT_1800152c0 ^ (ulonglong)auStack_1428;
  local_13c4 = GetTickCount();
  lVar6 = 1;
  local_44 = 0xffffffff;
  uVar5 = 1;
  DVar1 = local_13c4;
  do {
    DVar1 = (DVar1 >> 0x1e ^ DVar1) * 0x6c078965 + (int)uVar5;
    local_13c0[uVar5 - 1] = DVar1;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x270);
  local_13c8 = 0x270;
  local_1400[0] = '/';
  local_1400[1] = '\0';
  local_13e8[2] = '\0';
  local_13e8[3] = '\0';
  local_13e8[4] = '\0';
  local_13e8[5] = '\0';
  local_13e8[6] = '\0';
  local_13e8[7] = '\0';
  local_13e8[8] = '\0';
  local_13e8[9] = '\0';
  local_13e8[10] = '\0';
  local_13e8[0xb] = '\0';
  local_13e8[0xc] = '\0';
  local_13e8[0xd] = '\0';
  local_13e8[0xe] = '\0';
  local_13e8[0xf] = '\0';
  local_13e8[0x10] = '\0';
  local_13e8[0x11] = '\0';
  local_13e8[0x12] = '\0';
  local_13e8[0x13] = '\0';
  local_13e8[0x14] = '\0';
  local_13e8[0x15] = '\0';
  local_13e8[0x16] = '\0';
  local_13e8[0x17] = 0;
  lVar7 = 1;
  local_1400[2] = '\0';
  local_1400[3] = '\0';
  local_1400[4] = '\0';
  local_1400[5] = '\0';
  local_1400[6] = '\0';
  local_1400[7] = '\0';
  local_1400[8] = '\0';
  local_1400[9] = '\0';
  local_1400[10] = '\0';
  local_1400[0xb] = '\0';
  local_1400[0xc] = '\0';
  local_1400[0xd] = '\0';
  local_1400[0xe] = '\0';
  local_1400[0xf] = '\0';
  local_1400[0x10] = '\0';
  local_1400[0x11] = '\0';
  local_13ee = 0;
  local_13e8[0] = '/';
  local_13e8[1] = '\0';
  do {
    uVar2 = FUN_180007290(&local_13c8);
    local_1400[lVar7] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[uVar2 % 0x3e];
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x12);
  local_13ee = local_13ee & 0xff00;
  do {
    uVar2 = FUN_180007290(&local_13c8);
    local_13e8[lVar6] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[uVar2 % 0x3e];
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x17);
  local_13e8[0x17] = 0;
  sVar4 = strlen(local_1400);
  sVar4 = sVar4 + 1;
  BVar3 = VirtualProtect((LPVOID)0x1406e8b00,sVar4,4,local_1408);
  if (BVar3 != 0) {
    memcpy((void *)0x1406e8b00,local_1400,sVar4);
    VirtualProtect((LPVOID)0x1406e8b00,sVar4,local_1408[0],local_1408);
  }
  sVar4 = strlen(local_13e8);
  sVar4 = sVar4 + 1;
  BVar3 = VirtualProtect((LPVOID)0x1406e8b18,sVar4,4,local_1408);
  if (BVar3 != 0) {
    memcpy((void *)0x1406e8b18,local_13e8,sVar4);
    VirtualProtect((LPVOID)0x1406e8b18,sVar4,local_1408[0],local_1408);
  }
  FUN_180002020("  [OK] ServerTQCommands");
  return;
}




undefined8 FUN_180007a40(undefined4 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar2 = 0;
  uVar6 = 0xe3;
  do {
    uVar7 = (param_1[uVar2 + 0x271] ^ param_1[uVar2 + 0x272]) & 0x7fffffff ^ param_1[uVar2 + 0x271];
    param_1[uVar2 + 1] = -(uint)((uVar7 & 1) != 0) & 0x9908b0df ^ param_1[uVar2 + 0x3fe] ^ uVar7 >> 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xe3);
  do {
    uVar7 = param_1[uVar6 + 0x272];
    uVar4 = param_1[uVar6 + 0x273];
    uVar5 = param_1[uVar6 + 0x275];
    uVar3 = (uVar7 ^ param_1[uVar6 + 0x271]) & 0x7fffffff ^ param_1[uVar6 + 0x271];
    param_1[uVar6 + 1] = -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe2] ^ uVar3 >> 1;
    uVar7 = (uVar4 ^ uVar7) & 0x7fffffff ^ uVar7;
    uVar3 = param_1[uVar6 + 0x274];
    param_1[uVar6 + 2] = -(uint)((uVar7 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe1] ^ uVar7 >> 1;
    uVar4 = (uVar3 ^ uVar4) & 0x7fffffff ^ uVar4;
    uVar7 = param_1[uVar6 + 0x276];
    param_1[uVar6 + 3] = -(uint)((uVar4 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe0] ^ uVar4 >> 1;
    uVar3 = (uVar5 ^ uVar3) & 0x7fffffff ^ uVar3;
    param_1[uVar6 + 4] = -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xdf] ^ uVar3 >> 1;
    uVar5 = (uVar7 ^ uVar5) & 0x7fffffff ^ uVar5;
    uVar7 = (uVar7 ^ param_1[uVar6 + 0x277]) & 0x7fffffff ^ uVar7;
    param_1[uVar6 + 5] = -(uint)((uVar5 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xde] ^ uVar5 >> 1;
    uVar2 = uVar6 + 6;
    param_1[uVar2] = -(uint)((uVar7 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xdd] ^ uVar7 >> 1;
    uVar6 = uVar2;
  } while (uVar2 < 0x26f);
  uVar7 = (param_1[0x4e0] ^ param_1[1]) & 0x7fffffff ^ param_1[0x4e0];
  *param_1 = 0;
  uVar6 = (ulonglong)uVar7 & 0xffffffffffffff01;
  cVar1 = (char)uVar6;
  param_1[0x270] = -(uint)(cVar1 != '\0') & 0x9908b0df ^ param_1[0x18d] ^ uVar7 >> 1;
  return CONCAT71((int7)(uVar6 >> 8),-cVar1);
}




void FUN_180007c40(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,undefined8 param_5,longlong param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_6 + 0x10);
  cVar1 = (**(code **)(*plVar6 + 0x230))(plVar6);
  if (cVar1 != '\0') {
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      (**(code **)(*plVar6 + 0x358))(plVar6,"Usage: /bring <playername>");
    }
    else {
      lVar5 = FUN_180007220(param_3);
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x358))(plVar6,"Target not found.");
      }
      else {
        uVar2 = (**(code **)(*plVar6 + 0x168))(plVar6);
        uVar3 = (**(code **)(*plVar6 + 0x40))(plVar6);
        uVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
        (*(code *)0x1401c55b0)(lVar5,uVar2,uVar3,uVar4,0);
      }
    }
  }
  return;
}




void FUN_180007d00(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  cVar2 = (**(code **)(*(longlong *)(param_6 + 0x10) + 0x230))(param_6 + 0x10);
  if (cVar2 != '\0') {
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      (**(code **)(*(longlong *)(param_6 + 0x10) + 0x358))(param_6 + 0x10,"Usage: /goto <playername>");
    }
    else {
      lVar6 = FUN_180007220(param_3);
      if (lVar6 == 0) {
        (**(code **)(*(longlong *)(param_6 + 0x10) + 0x358))(param_6 + 0x10,"Target not found.");
      }
      else {
        plVar1 = (longlong *)(lVar6 + 0x10);
        uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
        uVar4 = (**(code **)(*plVar1 + 0x40))(plVar1);
        uVar5 = (**(code **)(*plVar1 + 0x168))(plVar1);
        (*(code *)0x1401c55b0)(param_6,uVar5,uVar4,uVar3,0);
      }
    }
  }
  return;
}




void FUN_180007dc0(void)

{
  char cVar1;
  longlong in_stack_00000030;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  
  cVar1 = (**(code **)(*(longlong *)(in_stack_00000030 + 0x10) + 0x230))(in_stack_00000030 + 0x10);
  if (cVar1 != '\0') {
    local_18 = 0xe9;
    local_17 = 0x83;
    local_16 = 1;
    local_15 = 0;
    local_14 = 0;
    local_13 = 0x90;
    FUN_1800057b0((void *)0x140146154,&local_18,6);
    (**(code **)(*(longlong *)(in_stack_00000030 + 0x10) + 0x358))(in_stack_00000030 + 0x10,"Actions are now hidden from PMS");
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180007e40(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,undefined8 param_5,longlong param_6)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  undefined8 ****ppppuVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 local_58;
  ulonglong local_48;
  undefined8 ***local_40;
  undefined8 uStack_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  puVar9 = auStack_78;
  local_20 = DAT_1800152c0 ^ (ulonglong)auStack_78;
  cVar5 = (**(code **)(*(longlong *)(param_6 + 0x10) + 0x230))(param_6 + 0x10);
  puVar10 = auStack_78;
  if (cVar5 != '\0') {
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      (**(code **)(*(longlong *)(param_6 + 0x10) + 0x358))(param_6 + 0x10,"scroll destinations: tc, pc, ac, dc, bi, ma");
      puVar10 = auStack_78;
    }
    else {
      local_40 = (undefined8 ****)0x0;
      uStack_38 = 0;
      local_30 = 0;
      local_28 = 0;
      sVar7 = strlen(param_3);
      FUN_1800013c0(&local_40,param_3,sVar7);
      uVar4 = local_28;
      lVar3 = local_30;
      pppuVar2 = local_40;
      ppppuVar8 = &local_40;
      if (0xf < local_28) {
        ppppuVar8 = (undefined8 ****)local_40;
      }
      if ((local_30 == 2) && (iVar6 = memcmp(ppppuVar8,&DAT_18000eb74,2), iVar6 == 0)) {
        local_58 = 0;
        (*(code *)0x1401c55b0)(param_6,0x3ea,0x12d,0x118);
      }
      else {
        ppppuVar8 = &local_40;
        if (0xf < uVar4) {
          ppppuVar8 = (undefined8 ****)pppuVar2;
        }
        if ((lVar3 == 2) && (iVar6 = memcmp(ppppuVar8,&DAT_18000eb78,2), iVar6 == 0)) {
          local_58 = 0;
          (*(code *)0x1401c55b0)(param_6,0x3f3,0xb8,0x113);
        }
        else {
          ppppuVar8 = &local_40;
          if (0xf < uVar4) {
            ppppuVar8 = (undefined8 ****)pppuVar2;
          }
          if ((lVar3 == 2) && (iVar6 = memcmp(ppppuVar8,&DAT_18000eb7c,2), iVar6 == 0)) {
            local_58 = 0;
            (*(code *)0x1401c55b0)(param_6,0x3fc,0x237);
          }
          else {
            ppppuVar8 = &local_40;
            if (0xf < uVar4) {
              ppppuVar8 = (undefined8 ****)pppuVar2;
            }
            if ((lVar3 == 2) && (iVar6 = memcmp(ppppuVar8,&DAT_18000eb80,2), iVar6 == 0)) {
              local_58 = 0;
              (*(code *)0x1401c55b0)(param_6,1000,0x1f6,0x28f);
            }
            else {
              ppppuVar8 = &local_40;
              if (0xf < uVar4) {
                ppppuVar8 = (undefined8 ****)pppuVar2;
              }
              if ((lVar3 == 2) && (iVar6 = memcmp(ppppuVar8,&DAT_18000eb84,2), iVar6 == 0)) {
                local_58 = 0;
                (*(code *)0x1401c55b0)(param_6,0x3f7,0x2d5,0x23e);
              }
              else {
                ppppuVar8 = &local_40;
                if (0xf < uVar4) {
                  ppppuVar8 = (undefined8 ****)pppuVar2;
                }
                if ((lVar3 == 2) && (iVar6 = memcmp(ppppuVar8,&DAT_18000eb88,2), iVar6 == 0)) {
                  local_58 = 0;
                  (*(code *)0x1401c55b0)(param_6,0x40c,0xd3,0xc4);
                }
                else {
                  (**(code **)(*(longlong *)(param_6 + 0x10) + 0x358))(param_6 + 0x10,"scroll destinations: tc, pc, ac, dc, bi, ma");
                }
              }
            }
          }
        }
      }
      puVar10 = auStack_78;
      if (0xf < local_28) {
        local_48 = local_28 + 1;
        ppppuVar8 = (undefined8 ****)local_40;
        if (0xfff < local_48) {
          local_48 = local_28 + 0x28;
          ppppuVar8 = (undefined8 ****)local_40[-1];
          puVar9 = auStack_78;
          if (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)local_40[-1]))) {
            pcVar1 = (code *)swi(0x29);
            ppppuVar8 = (undefined8 ****)(*pcVar1)(5);
            puVar9 = auStack_70;
          }
        }
        *(undefined8 *)(puVar9 + -8) = 0x180008108;
        free(ppppuVar8);
        puVar10 = puVar9;
      }
      *(undefined8 *)(puVar10 + 0x48) = 0;
      *(undefined8 *)(puVar10 + 0x50) = 0xf;
      puVar10[0x38] = 0;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18000812c;
  return;
}




void FUN_180008160(void)

{
  char cVar1;
  longlong in_stack_00000030;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  
  cVar1 = (**(code **)(*(longlong *)(in_stack_00000030 + 0x10) + 0x230))(in_stack_00000030 + 0x10);
  if (cVar1 != '\0') {
    local_18 = 0xf;
    local_17 = 0x84;
    local_16 = 0x82;
    local_15 = 1;
    local_14 = 0;
    local_13 = 0;
    FUN_1800057b0((void *)0x140146154,&local_18,6);
    (**(code **)(*(longlong *)(in_stack_00000030 + 0x10) + 0x358))(in_stack_00000030 + 0x10,"Actions are now visible to PMS");
  }
  return;
}




undefined1 FUN_180008200(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  
  uVar1 = (*DAT_180015438)();
  if (DAT_180015064 != 300) {
    *(int *)(param_3 + 8) = DAT_180015064;
  }
  if (DAT_180015060 != 100) {
    *(int *)(param_3 + 0x10) = (*(int *)(param_3 + 8) / 100) * DAT_180015060;
  }
  return uVar1;
}




void FUN_180008280(undefined8 param_1)

{
  (*(code *)0x1402a1f10)(param_1,"scroll",FUN_180007e40);
  (*(code *)0x1402a1f10)(param_1,"bring",FUN_180007c40);
  (*(code *)0x1402a1f10)(param_1,&DAT_18000ecbc,FUN_180007d00);
  (*(code *)0x1402a1f10)(param_1,"hideactions",FUN_180007dc0);
  (*(code *)0x1402a1f10)(param_1,"showactions",FUN_180008160);
  FUN_180002020("[PMCommands] Registered 5 in-game commands");
                    /* WARNING: Could not recover jumptable at 0x000180008313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180015448)(param_1);
  return;
}




void FUN_180008320(undefined8 param_1,short *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if ((param_2 != (short *)0x0) && (*param_2 == 2)) {
    uVar1 = Ordinal_15(param_2[1]);
    if (uVar1 == 0x268d) {
      uVar2 = Ordinal_11("127.0.0.1");
      pcVar3 = "[ConnRedirect] KeyServer -> 127.0.0.1:%u";
    }
    else {
      if (uVar1 < 0x2711) goto LAB_1800083b1;
      uVar2 = Ordinal_11("127.0.0.1");
      pcVar3 = "[ConnRedirect] Port %u -> 127.0.0.1";
    }
    *(undefined4 *)(param_2 + 2) = uVar2;
    FUN_180002020(pcVar3);
  }
LAB_1800083b1:
                    /* WARNING: Could not recover jumptable at 0x0001800083d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180015450)(param_1,param_2,param_3);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800083e0(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *_Memory;
  undefined1 *puVar6;
  undefined8 uStackY_b0;
  undefined1 auStackY_a8 [8];
  undefined1 auStackY_a0 [24];
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong uStack_58;
  undefined8 local_50 [2];
  ulonglong local_40 [4];
  
  local_40[2] = DAT_1800152c0 ^ (ulonglong)auStackY_a8;
  puVar3 = FUN_1800087a0(local_50);
  lVar1 = puVar3[2];
  if ((ulonglong)(puVar3[3] - lVar1) < 9) {
    puVar3 = (undefined8 *)FUN_1800064a0(puVar3,9,0,"kdata.dat",9);
  }
  else {
    puVar3[2] = lVar1 + 9;
    puVar4 = puVar3;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar4 = (undefined8 *)*puVar3;
    }
    memmove((void *)(lVar1 + (longlong)puVar4),"kdata.dat",9);
    *(undefined1 *)(lVar1 + (longlong)puVar4 + 9) = 0;
  }
  local_70 = (void *)*puVar3;
  uStack_68 = puVar3[1];
  local_60 = puVar3[2];
  uStack_58 = puVar3[3];
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  *(undefined1 *)puVar3 = 0;
  FUN_1800089a0(param_1,(char *)&local_70);
  puVar6 = auStackY_a8;
  if (0xf < uStack_58) {
    pvVar5 = local_70;
    puVar6 = auStackY_a8;
    if ((0xfff < uStack_58 + 1) &&
       (pvVar5 = *(void **)((longlong)local_70 + -8), puVar6 = auStackY_a8, 0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar5)))) {
      pcVar2 = (code *)swi(0x29);
      pvVar5 = (void *)(*pcVar2)(5);
      puVar6 = auStackY_a0;
    }
    *(undefined8 *)(puVar6 + -8) = 0x180008515;
    free(pvVar5);
  }
  *(undefined8 *)(puVar6 + 0x48) = 0;
  *(undefined8 *)(puVar6 + 0x50) = 0xf;
  puVar6[0x38] = 0;
  if (0xf < *(ulonglong *)(puVar6 + 0x70)) {
    pvVar5 = *(void **)(puVar6 + 0x58);
    _Memory = pvVar5;
    if ((0xfff < *(ulonglong *)(puVar6 + 0x70) + 1) &&
       (_Memory = *(void **)((longlong)pvVar5 + -8), 0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory)))) {
      pcVar2 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar2)(5);
      puVar6 = puVar6 + 8;
    }
    *(undefined8 *)(puVar6 + -8) = 0x18000856a;
    free(_Memory);
  }
  *(undefined8 *)(puVar6 + 0x68) = 0;
  *(undefined8 *)(puVar6 + 0x70) = 0xf;
  puVar6[0x58] = 0;
  *(undefined8 *)(puVar6 + -8) = 0x180008588;
  Sleep(5000);
  *(undefined8 *)(puVar6 + -8) = 0x180008596;
  Ordinal_22(param_1,2);
  *(undefined8 *)(puVar6 + -8) = 0x18000859f;
  Ordinal_3(param_1);
  *(undefined8 *)(puVar6 + -8) = 0x1800085ac;
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800085c0(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_18 = DAT_1800152c0 ^ (ulonglong)auStack_218;
  iVar2 = Ordinal_115(0x202,local_1b8);
  if (iVar2 != 0) {
    FUN_180002020("[KeyServer] WSAStartup failed");
    return;
  }
  lVar4 = Ordinal_23(2,1,6);
  if (lVar4 == -1) {
    Ordinal_111();
    FUN_180002020("[KeyServer] socket() failed: %d");
  }
  else {
    local_1e8 = 1;
    local_1f8 = 4;
    Ordinal_21(lVar4,0xffff,4,&local_1e8);
    uStack_1d8 = 0;
    local_1e0 = 2;
    uVar1 = Ordinal_9(0x268d);
    local_1e0._0_4_ = CONCAT22(uVar1,(undefined2)local_1e0);
    uVar3 = Ordinal_8(0);
    local_1e0 = CONCAT44(uVar3,(undefined4)local_1e0);
    iVar2 = Ordinal_2(lVar4,&local_1e0,0x10);
    if (iVar2 == -1) {
      Ordinal_111();
      FUN_180002020("[KeyServer] bind(0.0.0.0:%d) failed: %d");
    }
    else {
      iVar2 = Ordinal_13(lVar4,10);
      if (iVar2 != -1) {
        pcVar6 = "[KeyServer] listening on 0.0.0.0:%d";
        do {
          FUN_180002020(pcVar6);
          while( true ) {
            local_1e4 = 0x10;
            lVar5 = Ordinal_1(lVar4,local_1d0,&local_1e4);
            if (lVar5 == -1) break;
            FUN_180002020("[KeyServer] client connected");
            FUN_1800083e0(lVar5);
          }
          Ordinal_111();
          pcVar6 = "[KeyServer] accept() failed: %d";
        } while( true );
      }
      Ordinal_111();
      FUN_180002020("[KeyServer] listen() failed: %d");
    }
    Ordinal_3(lVar4);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800087a0(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  size_t sVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [24];
  undefined4 local_278;
  undefined8 *local_270;
  char local_268 [256];
  undefined1 (*local_168) [16];
  undefined8 uStack_160;
  undefined1 *local_158;
  ulonglong local_150;
  CHAR local_148 [272];
  ulonglong local_38;
  
  puVar7 = auStack_298;
  local_38 = DAT_1800152c0 ^ (ulonglong)auStack_298;
  local_278 = 0;
  local_270 = param_1;
  GetModuleFileNameA((HMODULE)0x0,local_148,0x104);
  local_168 = (undefined1 (*) [16])0x0;
  uStack_160 = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  sVar3 = strlen(local_148);
  FUN_1800013c0(&local_168,local_148,sVar3);
  pauVar4 = (undefined1 (*) [16])&local_168;
  if (0xf < local_150) {
    pauVar4 = local_168;
  }
  puVar6 = (undefined1 *)0xffffffffffffffff;
  if (local_158 != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)0xffffffffffffffff;
    if (local_158 + -1 != (undefined1 *)0xffffffffffffffff) {
      puVar8 = local_158 + -1;
    }
    if (puVar8 + 3 < (undefined1 *)0x10) {
      memset(local_268,0,0x100);
      pbVar9 = &DAT_18000e718;
      do {
        local_268[*pbVar9] = '\x01';
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 != &DAT_18000e71a);
      pauVar5 = (undefined1 (*) [16])(puVar8 + (longlong)pauVar4);
      cVar1 = local_268[(byte)(*pauVar5)[0]];
      while (cVar1 == '\0') {
        if (pauVar5 == pauVar4) goto LAB_1800088d8;
        pauVar5 = (undefined1 (*) [16])(pauVar5[-1] + 0xf);
        cVar1 = local_268[(byte)(*pauVar5)[0]];
      }
      puVar6 = (undefined1 *)((longlong)pauVar5 - (longlong)pauVar4);
    }
    else {
      puVar6 = thunk_FUN_18000a9c0(pauVar4,puVar8 + 1,(undefined1 (*) [16])&DAT_18000e718,2);
    }
  }
LAB_1800088d8:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar8 = puVar6 + 1;
  if (local_158 < puVar6 + 1) {
    puVar8 = local_158;
  }
  pauVar4 = (undefined1 (*) [16])&local_168;
  if (0xf < local_150) {
    pauVar4 = local_168;
  }
  FUN_1800013c0(param_1,pauVar4,(size_t)puVar8);
  local_278 = 1;
  if (0xf < local_150) {
    pauVar4 = local_168;
    puVar7 = auStack_298;
    if ((0xfff < local_150 + 1) &&
       (pauVar4 = *(undefined1 (**) [16])((longlong)local_168[-1] + 8), puVar7 = auStack_298, 0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)pauVar4))
       )) {
      pcVar2 = (code *)swi(0x29);
      pauVar4 = (undefined1 (*) [16])(*pcVar2)(5);
      puVar7 = auStack_290;
    }
    *(undefined8 *)(puVar7 + -8) = 0x180008961;
    free(pauVar4);
  }
  *(undefined8 *)(puVar7 + -8) = 0x180008983;
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1800089a0(undefined8 param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  FILE *_File;
  size_t sVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_5f8 [32];
  int local_5d8 [4];
  undefined1 local_5c8 [1424];
  ulonglong local_38;
  
  local_38 = DAT_1800152c0 ^ (ulonglong)auStack_5f8;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  _File = fopen(param_2,"rb");
  if (_File == (FILE *)0x0) {
    FUN_180002020("[KeyServer] %s not found at: %s");
    bVar5 = false;
  }
  else {
    fseek(_File,0,2);
    lVar1 = ftell(_File);
    fseek(_File,0,0);
    local_5d8[0] = lVar1;
    iVar2 = Ordinal_19(param_1,local_5d8,4,0);
    if (iVar2 == 4) {
      iVar2 = 0;
      if (0 < local_5d8[0]) {
        do {
          Sleep(0x50);
          iVar4 = 0x588;
          if (local_5d8[0] < iVar2 + 0x588) {
            iVar4 = local_5d8[0] - iVar2;
          }
          sVar3 = fread(local_5c8,1,(longlong)iVar4,_File);
          if (sVar3 == 0) break;
          iVar4 = Ordinal_19(param_1,local_5c8,sVar3 & 0xffffffff,0);
          if (iVar4 == -1) {
            Ordinal_111();
            FUN_180002020("[KeyServer] %s: send error %d after %d bytes");
            fclose(_File);
            return false;
          }
          iVar2 = iVar2 + (int)sVar3;
        } while (iVar2 < local_5d8[0]);
      }
      fclose(_File);
      FUN_180002020("[KeyServer] %s: sent %d/%d bytes");
      bVar5 = iVar2 == local_5d8[0];
    }
    else {
      FUN_180002020("[KeyServer] %s: failed to send length prefix");
      fclose(_File);
      bVar5 = false;
    }
  }
  return bVar5;
}




/* WARNING: Removing unreachable block (ram,0x000180008c13) */

undefined8 FUN_180008b70(void)

{
  undefined8 *puVar1;
  undefined8 *_ArgList;
  uintptr_t uVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  _ArgList = (undefined8 *)0x0;
  puVar1 = (undefined8 *)FUN_18000bb18(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = FUN_1800085c0;
    _ArgList = puVar1;
  }
  uVar2 = _beginthreadex((void *)0x0,0,FUN_180006470,_ArgList,0,(uint *)&uStack_20);
  if (uVar2 != 0) {
    if ((uint)uStack_20 != 0) {
      local_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)(uVar2 >> 0x20);
      local_18 = local_28;
      uStack_14 = uStack_24;
      uStack_10 = (uint)uStack_20;
      uStack_c = uStack_20._4_4_;
      uVar3 = _Thrd_detach(&local_18);
      if ((int)uVar3 == 0) {
        return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
    }
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(1);
  }
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(6);
}




ulonglong FUN_180008c40(uint param_1)

{
  DWORD dwThreadId;
  ulonglong uVar1;
  ulonglong uVar2;
  HANDLE hThread;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  LPVOID local_18;
  uint local_c;
  
  uVar1 = 0;
  uVar4 = 0;
  if (DAT_180015474 != 0) {
    while (uVar3 = (uint)uVar4, (*(byte *)(uVar4 * 0x38 + 0x20 + DAT_180015468) >> 1 & 1) == param_1) {
      uVar4 = (ulonglong)(uVar3 + 1);
      if (DAT_180015474 <= uVar3 + 1) {
        return 0;
      }
    }
    if (uVar3 != 0xffffffff) {
      uVar1 = FUN_180008ff0((longlong *)&local_18,0xffffffff,(uint)(param_1 != 0));
      uVar2 = uVar1 & 0xffffffff;
      if ((int)uVar1 == 0) {
        uVar1 = uVar2;
        uVar5 = DAT_180015474;
        if (uVar3 < DAT_180015474) {
          do {
            if ((*(byte *)(uVar4 * 0x38 + 0x20 + DAT_180015468) >> 1 & 1) != param_1) {
              uVar2 = FUN_180008e90(uVar4,param_1);
              uVar1 = uVar2 & 0xffffffff;
              uVar5 = DAT_180015474;
              if ((int)uVar2 != 0) break;
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
          } while (uVar3 < uVar5);
        }
        if (local_18 != (LPVOID)0x0) {
          uVar4 = 0;
          if (local_c != 0) {
            do {
              dwThreadId = *(DWORD *)((longlong)local_18 + uVar4 * 4);
              if ((dwThreadId != 0) && (hThread = OpenThread(0x5a,0,dwThreadId), hThread != (HANDLE)0x0)) {
                ResumeThread(hThread);
                CloseHandle(hThread);
              }
              uVar3 = (int)uVar4 + 1;
              uVar4 = (ulonglong)uVar3;
            } while (uVar3 < local_c);
          }
          HeapFree(DAT_180015460,0,local_18);
        }
      }
    }
  }
  return uVar1;
}




ulonglong FUN_180008da0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong local_38 [3];
  
  uVar3 = 0;
  LOCK();
  bVar5 = DAT_180015458 == 0;
  if (bVar5) {
    DAT_180015458 = 1;
  }
  UNLOCK();
  while (!bVar5) {
    Sleep((uint)(0x1f < uVar3));
    uVar3 = uVar3 + 1;
    LOCK();
    bVar5 = DAT_180015458 == 0;
    if (bVar5) {
      DAT_180015458 = 1;
    }
    UNLOCK();
  }
  if (DAT_180015460 == 0) {
    uVar3 = 2;
  }
  else if (param_1 == 0) {
    uVar3 = FUN_180008c40(param_2);
    uVar3 = uVar3 & 0xffffffff;
  }
  else {
    uVar4 = 0;
    if (DAT_180015474 != 0) {
      do {
        uVar2 = (uint)uVar4;
        if (param_1 == *(longlong *)(uVar4 * 0x38 + DAT_180015468)) {
          if (uVar2 != 0xffffffff) {
            if ((*(byte *)(uVar4 * 0x38 + 0x20 + DAT_180015468) >> 1 & 1) == param_2) {
              uVar3 = (ulonglong)(6 - (param_2 != 0));
            }
            else {
              uVar1 = FUN_180008ff0(local_38,uVar2,1);
              uVar3 = uVar1 & 0xffffffff;
              if ((int)uVar1 == 0) {
                uVar3 = FUN_180008e90(uVar4,param_2);
                uVar3 = uVar3 & 0xffffffff;
                FUN_180009790(local_38);
              }
            }
            goto LAB_180008e79;
          }
          break;
        }
        uVar4 = (ulonglong)(uVar2 + 1);
      } while (uVar2 + 1 < DAT_180015474);
    }
    uVar3 = 4;
  }
LAB_180008e79:
  LOCK();
  DAT_180015458 = 0;
  UNLOCK();
  return uVar3;
}




undefined8 FUN_180008e90(ulonglong param_1,int param_2)

{
  SIZE_T dwSize;
  undefined4 *puVar1;
  byte bVar2;
  BOOL BVar3;
  undefined8 uVar4;
  HANDLE hProcess;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *lpAddress;
  DWORD local_res8 [2];
  
  puVar5 = (undefined8 *)((param_1 & 0xffffffff) * 0x38 + DAT_180015468);
  puVar1 = (undefined4 *)*puVar5;
  bVar2 = *(byte *)(puVar5 + 4) & 1;
  iVar6 = (int)puVar1 + -5;
  if (bVar2 == 0) {
    iVar6 = (int)puVar1;
  }
  dwSize = (ulonglong)bVar2 * 2 + 5;
  lpAddress = (undefined4 *)((longlong)puVar1 + -5);
  if (bVar2 == 0) {
    lpAddress = puVar1;
  }
  BVar3 = VirtualProtect(lpAddress,dwSize,0x40,local_res8);
  if (BVar3 == 0) {
    uVar4 = 10;
  }
  else {
    if (param_2 == 0) {
      bVar2 = *(byte *)(puVar5 + 4);
      *lpAddress = *(undefined4 *)(puVar5 + 3);
      if ((bVar2 & 1) == 0) {
        *(undefined1 *)(lpAddress + 1) = *(undefined1 *)((longlong)puVar5 + 0x1c);
      }
      else {
        *(undefined2 *)(lpAddress + 1) = *(undefined2 *)((longlong)puVar5 + 0x1c);
        *(undefined1 *)((longlong)lpAddress + 6) = *(undefined1 *)((longlong)puVar5 + 0x1e);
      }
    }
    else {
      *(undefined1 *)lpAddress = 0xe9;
      *(int *)((longlong)lpAddress + 1) = (*(int *)(puVar5 + 1) - iVar6) + -5;
      if ((*(byte *)(puVar5 + 4) & 1) != 0) {
        *(undefined2 *)*puVar5 = 0xf9eb;
      }
    }
    VirtualProtect(lpAddress,dwSize,local_res8[0],local_res8);
    hProcess = GetCurrentProcess();
    FlushInstructionCache(hProcess,lpAddress,dwSize);
    bVar2 = ((char)param_2 * '\x02' ^ *(byte *)(puVar5 + 4)) & 2 ^ *(byte *)(puVar5 + 4);
    *(byte *)(puVar5 + 4) = ((char)param_2 << 2 ^ bVar2) & 4 ^ bVar2;
    uVar4 = 0;
  }
  return uVar4;
}




ulonglong FUN_180008fb0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (DAT_180015474 != 0) {
    do {
      if (param_1 == *(longlong *)(uVar2 * 0x38 + DAT_180015468)) {
        return uVar2;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < DAT_180015474);
  }
  return 0xffffffff;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180008ff0(longlong *param_1,uint param_2,int param_3)

{
  HANDLE hHeap;
  int iVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  LPVOID lpMem;
  uint uVar4;
  bool bVar6;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  DWORD local_60;
  DWORD local_5c;
  ulonglong local_48;
  ulonglong uVar5;
  
  local_48 = DAT_1800152c0 ^ (ulonglong)auStack_88;
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pvVar3 = (HANDLE)CreateToolhelp32Snapshot(4,0);
  if (pvVar3 != (HANDLE)0xffffffffffffffff) {
    local_68[0] = 0x1c;
    bVar6 = false;
    iVar1 = Thread32First(pvVar3,local_68);
    if (iVar1 != 0) {
      do {
        if (((0xf < local_68[0]) && (DVar2 = GetCurrentProcessId(), local_5c == DVar2)) &&
           (DVar2 = GetCurrentThreadId(), hHeap = DAT_180015460, local_60 != DVar2)) {
          lpMem = (LPVOID)*param_1;
          if (lpMem == (LPVOID)0x0) {
            *(undefined4 *)(param_1 + 1) = 0x80;
            lpMem = HeapAlloc(hHeap,0,0x200);
            *param_1 = (longlong)lpMem;
            bVar6 = false;
            if (lpMem == (LPVOID)0x0) goto LAB_18000911c;
          }
          else if (*(uint *)(param_1 + 1) <= *(uint *)((longlong)param_1 + 0xc)) {
            uVar4 = *(uint *)(param_1 + 1) * 2;
            *(uint *)(param_1 + 1) = uVar4;
            lpMem = HeapReAlloc(hHeap,0,lpMem,(ulonglong)uVar4 << 2);
            bVar6 = false;
            if (lpMem == (LPVOID)0x0) goto LAB_18000911c;
            *param_1 = (longlong)lpMem;
          }
          *(DWORD *)((longlong)lpMem + (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 4) = local_60;
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
        }
        local_68[0] = 0x1c;
        iVar1 = Thread32Next(pvVar3,local_68);
      } while (iVar1 != 0);
      DVar2 = GetLastError();
      bVar6 = DVar2 == 0x12;
      if (!bVar6) {
LAB_18000911c:
        if ((LPVOID)*param_1 != (LPVOID)0x0) {
          HeapFree(DAT_180015460,0,(LPVOID)*param_1);
          *param_1 = 0;
        }
      }
    }
    CloseHandle(pvVar3);
    if (bVar6) {
      if (*param_1 == 0) {
        return 0;
      }
      if (*(int *)((longlong)param_1 + 0xc) == 0) {
        return 0;
      }
      do {
        pvVar3 = OpenThread(0x5a,0,*(DWORD *)(*param_1 + uVar5 * 4));
        if (pvVar3 == (HANDLE)0x0) {
LAB_1800091c3:
          *(undefined4 *)(uVar5 * 4 + *param_1) = 0;
        }
        else {
          DVar2 = SuspendThread(pvVar3);
          if (DVar2 == 0xffffffff) {
            CloseHandle(pvVar3);
            goto LAB_1800091c3;
          }
          FUN_1800095d0(pvVar3,param_2,param_3);
          CloseHandle(pvVar3);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if (*(uint *)((longlong)param_1 + 0xc) <= uVar4) {
          return 0;
        }
      } while( true );
    }
  }
  return 9;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180009210(undefined8 *param_1,LPCVOID param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  LPCVOID local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  uint local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1800152c0 ^ (ulonglong)auStack_88;
  uVar5 = 0;
  LOCK();
  bVar7 = DAT_180015458 == 0;
  if (bVar7) {
    DAT_180015458 = 1;
  }
  UNLOCK();
  while (!bVar7) {
    Sleep((uint)(0x1f < uVar5));
    uVar5 = uVar5 + 1;
    LOCK();
    bVar7 = DAT_180015458 == 0;
    if (bVar7) {
      DAT_180015458 = 1;
    }
    UNLOCK();
  }
  if (DAT_180015460 == (HANDLE)0x0) {
    uVar4 = 2;
    goto LAB_180009444;
  }
  uVar1 = FUN_180009b20(param_1);
  if (((int)uVar1 == 0) || (uVar1 = FUN_180009b20(param_2), (int)uVar1 == 0)) {
    uVar4 = 7;
    goto LAB_180009444;
  }
  puVar6 = param_1;
  uVar5 = FUN_180008fb0((longlong)param_1);
  if ((int)uVar5 != -1) {
    uVar4 = 3;
    goto LAB_180009444;
  }
  plVar2 = (longlong *)FUN_180009810(puVar6);
  if (plVar2 == (longlong *)0x0) {
    uVar4 = 9;
    goto LAB_180009444;
  }
  local_68 = param_1;
  local_60 = param_2;
  local_58 = plVar2;
  uVar1 = FUN_180009bb0((ulonglong *)&local_68);
  if ((int)uVar1 == 0) {
    uVar4 = 8;
    FUN_180009840(plVar2);
    goto LAB_180009444;
  }
  if (DAT_180015468 == (LPVOID)0x0) {
    DAT_180015470 = 0x20;
    DAT_180015468 = HeapAlloc(DAT_180015460,0,0x700);
    if (DAT_180015468 != (LPVOID)0x0) goto LAB_180009371;
  }
  else {
    if (DAT_180015470 <= DAT_180015474) {
      pvVar3 = HeapReAlloc(DAT_180015460,0,DAT_180015468,(ulonglong)(DAT_180015470 * 2) * 0x38);
      if (pvVar3 == (LPVOID)0x0) goto LAB_180009310;
      DAT_180015470 = DAT_180015470 * 2;
      DAT_180015468 = pvVar3;
    }
LAB_180009371:
    uVar5 = (ulonglong)DAT_180015474;
    DAT_180015474 = DAT_180015474 + 1;
    puVar6 = (undefined8 *)(uVar5 * 0x38 + (longlong)DAT_180015468);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = local_68;
      puVar6[1] = local_50;
      puVar6[2] = local_58;
      *(byte *)(puVar6 + 4) = *(byte *)(puVar6 + 4) & 0xf8 | (byte)local_48 & 1;
      *(uint *)((longlong)puVar6 + 0x24) = *(uint *)((longlong)puVar6 + 0x24) & 0xfffffff0 | local_44 & 0xf;
      puVar6[5] = local_40;
      puVar6[6] = local_38;
      if (local_48 == 0) {
        *(undefined4 *)(puVar6 + 3) = *(undefined4 *)param_1;
        *(undefined1 *)((longlong)puVar6 + 0x1c) = *(undefined1 *)((longlong)param_1 + 4);
      }
      else {
        *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)param_1 + -5);
        *(undefined2 *)((longlong)puVar6 + 0x1c) = *(undefined2 *)((longlong)param_1 + -1);
        *(undefined1 *)((longlong)puVar6 + 0x1e) = *(undefined1 *)((longlong)param_1 + 1);
      }
      uVar4 = 0;
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = local_58;
        uVar4 = 0;
      }
      goto LAB_180009444;
    }
  }
LAB_180009310:
  FUN_180009840(plVar2);
  uVar4 = 9;
LAB_180009444:
  LOCK();
  DAT_180015458 = 0;
  UNLOCK();
  return uVar4;
}




void FUN_180009470(longlong param_1)

{
  FUN_180008da0(param_1,1);
  return;
}




undefined8 FUN_180009480(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar2 = 0;
  uVar1 = 1;
  LOCK();
  bVar3 = DAT_180015458 == 0;
  if (bVar3) {
    DAT_180015458 = 1;
  }
  UNLOCK();
  while (!bVar3) {
    Sleep((uint)(0x1f < uVar2));
    uVar2 = uVar2 + 1;
    LOCK();
    bVar3 = DAT_180015458 == 0;
    if (bVar3) {
      DAT_180015458 = 1;
    }
    UNLOCK();
  }
  if (DAT_180015460 == (HANDLE)0x0) {
    DAT_180015460 = HeapCreate(0,0,0);
    if (DAT_180015460 == (HANDLE)0x0) {
      uVar1 = 9;
    }
    else {
      uVar1 = 0;
      _guard_check_icall();
    }
  }
  LOCK();
  DAT_180015458 = 0;
  UNLOCK();
  return uVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180009510(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar2 = 0;
  LOCK();
  bVar3 = DAT_180015458 == 0;
  if (bVar3) {
    DAT_180015458 = 1;
  }
  UNLOCK();
  while (!bVar3) {
    Sleep((uint)(0x1f < uVar2));
    uVar2 = uVar2 + 1;
    LOCK();
    bVar3 = DAT_180015458 == 0;
    if (bVar3) {
      DAT_180015458 = 1;
    }
    UNLOCK();
  }
  if (DAT_180015460 == (HANDLE)0x0) {
    uVar2 = 2;
  }
  else {
    uVar1 = FUN_180008c40(0);
    uVar2 = uVar1 & 0xffffffff;
    if ((int)uVar1 == 0) {
      FUN_180009b60();
      HeapFree(DAT_180015460,0,DAT_180015468);
      HeapDestroy(DAT_180015460);
      DAT_180015460 = (HANDLE)0x0;
      DAT_180015468 = (LPVOID)0x0;
      _DAT_180015470 = 0;
    }
  }
  LOCK();
  DAT_180015458 = 0;
  UNLOCK();
  return uVar2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800095d0(HANDLE param_1,uint param_2,int param_3)

{
  uint uVar1;
  BOOL BVar2;
  uint uVar3;
  byte bVar4;
  DWORD64 DVar5;
  ulonglong uVar6;
  DWORD64 *pDVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_518 [32];
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_1800152c0 ^ (ulonglong)auStack_518;
  local_4f8.ContextFlags = 0x100001;
  BVar2 = GetThreadContext(param_1,&local_4f8);
  if (BVar2 != 0) {
    uVar8 = DAT_180015474;
    if (param_2 != 0xffffffff) {
      uVar8 = param_2 + 1;
    }
    uVar1 = 0;
    if (param_2 != 0xffffffff) {
      uVar1 = param_2;
    }
    for (; uVar1 < uVar8; uVar1 = uVar1 + 1) {
      pDVar7 = (DWORD64 *)((ulonglong)uVar1 * 0x38 + DAT_180015468);
      if (param_3 == 0) {
        bVar4 = 0;
      }
      else if (param_3 == 1) {
        bVar4 = 1;
      }
      else {
        bVar4 = (byte)pDVar7[4] >> 2 & 1;
      }
      if (((byte)pDVar7[4] >> 1 & 1) != bVar4) {
        if (bVar4 == 0) {
          if ((((byte)pDVar7[4] & 1) == 0) || (DVar5 = *pDVar7, local_4f8.Rip != DVar5 - 5)) {
            uVar9 = *(uint *)((longlong)pDVar7 + 0x24) & 0xf;
            if (uVar9 != 0) {
              uVar6 = 0;
              do {
                if (local_4f8.Rip == (ulonglong)*(byte *)(uVar6 + 0x30 + (longlong)pDVar7) + pDVar7[2]) {
                  DVar5 = (ulonglong)*(byte *)(uVar6 + 0x28 + (longlong)pDVar7) + *pDVar7;
                  goto LAB_1800096c6;
                }
                uVar3 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar3;
              } while (uVar3 < uVar9);
            }
            if (local_4f8.Rip != pDVar7[1]) goto LAB_1800096c4;
            DVar5 = *pDVar7;
          }
        }
        else {
          uVar9 = *(uint *)((longlong)pDVar7 + 0x24) & 0xf;
          if (uVar9 != 0) {
            uVar3 = 0;
            do {
              if (local_4f8.Rip == (ulonglong)*(byte *)((ulonglong)uVar3 + 0x28 + (longlong)pDVar7) + *pDVar7) {
                DVar5 = (ulonglong)*(byte *)((ulonglong)uVar3 + 0x30 + (longlong)pDVar7) + pDVar7[2];
                goto LAB_1800096c6;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < uVar9);
          }
LAB_1800096c4:
          DVar5 = 0;
        }
LAB_1800096c6:
        if (DVar5 != 0) {
          local_4f8.Rip = DVar5;
          SetThreadContext(param_1,&local_4f8);
        }
      }
    }
  }
  return;
}




void FUN_180009790(longlong *param_1)

{
  DWORD dwThreadId;
  HANDLE hThread;
  uint uVar1;
  ulonglong uVar2;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      do {
        dwThreadId = *(DWORD *)(*param_1 + uVar2 * 4);
        if ((dwThreadId != 0) && (hThread = OpenThread(0x5a,0,dwThreadId), hThread != (HANDLE)0x0)) {
          ResumeThread(hThread);
          CloseHandle(hThread);
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)((longlong)param_1 + 0xc));
    }
    HeapFree(DAT_180015460,0,(LPVOID)*param_1);
  }
  return;
}




void FUN_180009810(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_1800098c0(param_1);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar1 = *(undefined8 *)puVar2[1];
  *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 1;
  puVar2[1] = uVar1;
  return;
}




void FUN_180009840(longlong *param_1)

{
  longlong *plVar1;
  longlong *lpAddress;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  plVar1 = DAT_180015478;
  if (DAT_180015478 != (longlong *)0x0) {
    while (lpAddress = plVar1, lpAddress != (longlong *)((ulonglong)param_1 & 0xfffffffffffff000)) {
      plVar1 = (longlong *)*lpAddress;
      plVar2 = lpAddress;
      if ((longlong *)*lpAddress == (longlong *)0x0) {
        return;
      }
    }
    *param_1 = lpAddress[1];
    plVar1 = lpAddress + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    lpAddress[1] = (longlong)param_1;
    if ((int)*plVar1 == 0) {
      if (plVar2 == (longlong *)0x0) {
        DAT_180015478 = (longlong *)*lpAddress;
                    /* WARNING: Could not recover jumptable at 0x0001800098ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        VirtualFree(lpAddress,0,0x8000);
        return;
      }
      *plVar2 = *lpAddress;
                    /* WARNING: Could not recover jumptable at 0x000180009895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      VirtualFree(lpAddress,0,0x8000);
      return;
    }
  }
  return;
}




undefined8 * FUN_1800098c0(undefined8 *param_1)

{
  uint uVar1;
  SIZE_T SVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *lpAddress;
  PVOID pvVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  _SYSTEM_INFO local_78;
  _MEMORY_BASIC_INFORMATION local_48;
  
  GetSystemInfo(&local_78);
  puVar7 = local_78.lpMinimumApplicationAddress;
  if (((undefined8 *)0x40000000 < param_1) && (puVar7 = param_1 + -0x8000000, param_1 + -0x8000000 <= local_78.lpMinimumApplicationAddress)) {
    puVar7 = local_78.lpMinimumApplicationAddress;
  }
  if (param_1 + 0x8000000 < local_78.lpMaximumApplicationAddress) {
    local_78.lpMaximumApplicationAddress = param_1 + 0x8000000;
  }
  puVar8 = (undefined8 *)((longlong)local_78.lpMaximumApplicationAddress - 0xfff);
  for (puVar4 = DAT_180015478; puVar3 = (undefined8 *)0x0, lpAddress = param_1, puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
    if (((puVar7 <= puVar4) && (puVar4 < puVar8)) && (puVar4[1] != 0)) {
      return puVar4;
    }
  }
  do {
    uVar1 = local_78.dwAllocationGranularity;
    puVar4 = puVar3;
    if (lpAddress < puVar7) goto joined_r0x0001800099c5;
    pvVar5 = (PVOID)(ulonglong)local_78.dwAllocationGranularity;
    lpAddress = (undefined8 *)((longlong)lpAddress + (-(longlong)pvVar5 - (ulonglong)lpAddress % (ulonglong)pvVar5));
    while( true ) {
      uVar1 = local_78.dwAllocationGranularity;
      if ((lpAddress < puVar7) || (SVar2 = VirtualQuery(lpAddress,&local_48,0x30), uVar1 = local_78.dwAllocationGranularity, SVar2 == 0))
      goto joined_r0x0001800099bc;
      if (local_48.State == 0x10000) break;
      if (local_48.AllocationBase < pvVar5) goto joined_r0x0001800099bc;
      lpAddress = (undefined8 *)((longlong)local_48.AllocationBase - (longlong)pvVar5);
    }
    if (lpAddress == (undefined8 *)0x0) goto joined_r0x0001800099bc;
    puVar3 = VirtualAlloc(lpAddress,0x1000,0x3000,0x40);
  } while (puVar3 == (undefined8 *)0x0);
LAB_180009aa6:
  *(undefined4 *)(puVar3 + 2) = 0;
  puVar7 = puVar3 + 8;
  puVar4 = (undefined8 *)0x0;
  do {
    puVar8 = puVar7;
    *puVar8 = puVar4;
    puVar3[1] = puVar8;
    puVar7 = puVar8 + 8;
    puVar4 = puVar8;
  } while ((ulonglong)((longlong)(puVar8 + 8) - (longlong)puVar3) < 0xfc1);
  *puVar3 = DAT_180015478;
  DAT_180015478 = puVar3;
  return puVar3;
joined_r0x0001800099bc:
  while (puVar4 = (undefined8 *)0x0, puVar3 == (undefined8 *)0x0) {
joined_r0x0001800099c5:
    if (puVar8 < param_1) {
      return puVar4;
    }
    param_1 = (undefined8 *)(((ulonglong)uVar1 - (ulonglong)param_1 % (ulonglong)uVar1) + (longlong)param_1);
    local_78.dwAllocationGranularity = uVar1;
    while( true ) {
      if (puVar8 < param_1) {
        return puVar4;
      }
      SVar2 = VirtualQuery(param_1,&local_48,0x30);
      if (SVar2 == 0) {
        return puVar4;
      }
      if (local_48.State == 0x10000) break;
      uVar6 = (uVar1 - 1) + local_48.RegionSize + (longlong)local_48.BaseAddress;
      param_1 = (undefined8 *)(uVar6 - uVar6 % (ulonglong)uVar1);
    }
    if (param_1 == (undefined8 *)0x0) {
      return puVar4;
    }
    puVar3 = VirtualAlloc(param_1,0x1000,0x3000,0x40);
    uVar1 = local_78.dwAllocationGranularity;
  }
  goto LAB_180009aa6;
}




void _guard_check_icall(void)

{
  return;
}




undefined8 FUN_180009b20(LPCVOID param_1)

{
  _MEMORY_BASIC_INFORMATION local_38;
  
  VirtualQuery(param_1,&local_38,0x30);
  if ((local_38.State == 0x1000) && (((byte)local_38.Protect & 0xf0) != 0)) {
    return 1;
  }
  return 0;
}




void FUN_180009b60(void)

{
  undefined8 *puVar1;
  undefined8 *lpAddress;
  
  lpAddress = DAT_180015478;
  DAT_180015478 = (undefined8 *)0x0;
  while (lpAddress != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*lpAddress;
    VirtualFree(lpAddress,0,0x8000);
    lpAddress = puVar1;
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180009bb0(ulonglong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined7 extraout_var;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  char *pcVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  undefined1 auStack_c8 [32];
  byte local_a8;
  byte local_a7;
  byte local_a0 [11];
  byte local_95;
  byte local_94;
  byte local_93;
  char local_91;
  int local_8b;
  int local_83;
  uint local_7f;
  undefined2 local_78;
  undefined4 uStack_76;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  ulonglong local_68;
  ulonglong *local_60;
  undefined2 local_58;
  undefined4 local_56;
  undefined2 local_52;
  undefined8 local_50;
  ulonglong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_1800152c0 ^ (ulonglong)auStack_c8;
  puVar14 = (ulonglong *)0x0;
  local_58 = 0x15ff;
  uVar12 = 0;
  local_56 = 2;
  local_a7 = 0;
  local_52 = 0x8eb;
  local_50 = 0;
  local_78 = 0x25ff;
  uStack_76 = 0;
  uStack_72 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_68 = 0x25ff0e70;
  local_60 = (ulonglong *)0x0;
  local_a8 = 0;
  param_1[4] = 0;
  puVar9 = puVar14;
  do {
    uVar2 = param_1[2];
    puVar15 = (ulonglong *)(uVar12 + *param_1);
    bVar3 = FUN_180009fa0((byte *)puVar15,local_a0);
    uVar12 = CONCAT71(extraout_var,bVar3) & 0xffffffff;
    if ((local_7f >> 0xc & 1) != 0) {
      return 0;
    }
    uVar6 = (uint)local_a8;
    puVar16 = puVar9;
    if (local_a7 < 5) {
      if ((local_93 & 199) == 5) {
        puVar9 = puVar15;
        puVar10 = local_48;
        for (uVar7 = uVar12; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)puVar10 = (char)*puVar9;
          puVar9 = (ulonglong *)((longlong)puVar9 + 1);
          puVar10 = (ulonglong *)((longlong)puVar10 + 1);
        }
        *(uint *)((longlong)local_48 + ((ulonglong)local_a0[0] - (ulonglong)(local_7f >> 2 & 0xf)) + -4) = (((int)puVar15 - uVar6) - (int)uVar2) + local_83;
        puVar10 = local_48;
        if ((local_95 == 0xff) && (local_91 == '\x04')) {
          puVar14 = (ulonglong *)0x1;
        }
      }
      else if (local_95 == 0xe8) {
        uVar12 = 0x10;
        local_50 = (longlong)puVar15 + (ulonglong)local_a0[0] + (longlong)local_8b;
        puVar10 = (ulonglong *)&local_58;
      }
      else {
        puVar10 = puVar15;
        if ((local_95 & 0xfd) == 0xe9) {
          lVar4 = (longlong)(char)local_8b;
          if (local_95 != 0xeb) {
            lVar4 = (longlong)local_8b;
          }
          puVar16 = (ulonglong *)((longlong)puVar15 + lVar4 + (ulonglong)local_a0[0]);
          if ((puVar16 < (ulonglong *)*param_1) || ((ulonglong *)((longlong)*param_1 + 5U) <= puVar16)) {
            uStack_72 = SUB82(puVar16,0);
            uStack_70 = (undefined4)((ulonglong)puVar16 >> 0x10);
            uStack_6c = (undefined2)((ulonglong)puVar16 >> 0x30);
            puVar14 = (ulonglong *)(ulonglong)(puVar9 <= puVar15);
            uVar12 = 0xe;
            puVar10 = (ulonglong *)&local_78;
            puVar16 = puVar9;
          }
          else if (puVar16 <= puVar9) {
            puVar16 = puVar9;
          }
        }
        else if ((((local_95 & 0xf0) == 0x70) || ((local_95 & 0xfc) == 0xe0)) || ((local_94 & 0xf0) == 0x80)) {
          if (((local_95 & 0xf0) == 0x70) || (lVar4 = (longlong)local_8b, (local_95 & 0xfc) == 0xe0)) {
            lVar4 = (longlong)(char)local_8b;
          }
          puVar16 = (ulonglong *)((longlong)puVar15 + lVar4 + (ulonglong)local_a0[0]);
          if ((puVar16 < (ulonglong *)*param_1) || ((ulonglong *)((longlong)*param_1 + 5U) <= puVar16)) {
            if ((local_95 & 0xfc) == 0xe0) {
              return 0;
            }
            bVar3 = local_95;
            if (local_95 == 0xf) {
              bVar3 = local_94;
            }
            local_60 = puVar16;
            local_68 = CONCAT71(local_68._1_7_,bVar3) & 0xffffffffffffff0f ^ 0x71;
            uVar12 = 0x10;
            puVar10 = &local_68;
            puVar16 = puVar9;
          }
          else if (puVar16 <= puVar9) {
            puVar16 = puVar9;
          }
        }
        else if ((local_95 & 0xfe) == 0xc2) {
          puVar14 = (ulonglong *)(ulonglong)(puVar9 <= puVar15);
        }
      }
    }
    else {
      uStack_72 = SUB82(puVar15,0);
      uStack_70 = (undefined4)((ulonglong)puVar15 >> 0x10);
      uStack_6c = (undefined2)((ulonglong)puVar15 >> 0x30);
      uVar12 = 0xe;
      puVar14 = (ulonglong *)0x1;
      puVar10 = (ulonglong *)&local_78;
    }
    if ((puVar15 < puVar16) && ((uint)uVar12 != (uint)local_a0[0])) {
      return 0;
    }
    if (0x32 < (uint)local_a8 + (uint)uVar12) {
      return 0;
    }
    if (7 < *(uint *)((longlong)param_1 + 0x24)) {
      return 0;
    }
    *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x24) + 0x28 + (longlong)param_1) = local_a7;
    *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x24) + 0x30 + (longlong)param_1) = local_a8;
    local_a8 = local_a8 + (char)uVar12;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    puVar11 = (undefined1 *)(param_1[2] + (ulonglong)uVar6);
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar11 = (char)*puVar10;
      puVar10 = (ulonglong *)((longlong)puVar10 + 1);
      puVar11 = puVar11 + 1;
    }
    bVar3 = local_a7 + local_a0[0];
    uVar12 = (ulonglong)bVar3;
    puVar9 = puVar16;
    local_a7 = bVar3;
  } while ((int)puVar14 == 0);
  if (bVar3 < 5) {
    uVar2 = *param_1;
    pcVar13 = (char *)(uVar12 + uVar2);
    uVar6 = (uint)bVar3;
    uVar5 = FUN_180009f60(pcVar13,5 - uVar6);
    if ((int)uVar5 == 0) {
      if (((1 < bVar3) || (uVar5 = FUN_180009f60(pcVar13,2 - uVar6), (int)uVar5 != 0)) && (uVar5 = FUN_180009b20((LPCVOID)(uVar2 - 5)), (int)uVar5 != 0)) {
        cVar1 = *(char *)(*param_1 - 5);
        if (((cVar1 == '\0') || (cVar1 == -0x70)) || (cVar1 == -0x34)) {
          uVar12 = 1;
          do {
            if (*(char *)((uVar12 - 5) + *param_1) != cVar1) {
              return 0;
            }
            uVar6 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar6;
          } while (uVar6 < 5);
          *(undefined4 *)(param_1 + 4) = 1;
          goto LAB_180009efa;
        }
      }
      return 0;
    }
  }
LAB_180009efa:
  uVar12 = param_1[1];
  uStack_72 = (undefined2)uVar12;
  uStack_70 = (undefined4)(uVar12 >> 0x10);
  uStack_6c = (undefined2)(uVar12 >> 0x30);
  puVar8 = (undefined8 *)((ulonglong)local_a8 + param_1[2]);
  param_1[3] = (ulonglong)puVar8;
  *puVar8 = CONCAT26(uStack_72,CONCAT42(uStack_76,local_78));
  *(undefined4 *)(puVar8 + 1) = uStack_70;
  *(undefined2 *)((longlong)puVar8 + 0xc) = uStack_6c;
  return 1;
}




undefined8 FUN_180009f60(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  cVar1 = *param_1;
  if (((cVar1 != '\0') && (cVar1 != -0x70)) && (cVar1 != -0x34)) {
    return 0;
  }
  uVar3 = 1;
  if (1 < param_2) {
    do {
      if (param_1[uVar3] != cVar1) {
        return 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_2);
  }
  return 1;
}




byte FUN_180009fa0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  undefined *puVar13;
  ushort uVar14;
  byte *pbVar15;
  byte *pbVar16;
  char cVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  byte bVar22;
  longlong lVar23;
  bool local_res18;
  
  bVar6 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  local_res18 = false;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  cVar17 = '\x10';
  pbVar15 = param_1;
  do {
    pbVar16 = pbVar15;
    bVar1 = *pbVar16;
    uVar21 = (ulonglong)bVar1;
    pbVar15 = pbVar16 + 1;
    switch(bVar1) {
    case 0x26:
    case 0x2e:
    case 0x36:
    case 0x3e:
    case 100:
    case 0x65:
      param_2[3] = bVar1;
      bVar6 = bVar6 | 0x40;
      break;
    default:
      goto switchD_18000a026_caseD_27;
    case 0x66:
      param_2[4] = bVar1;
      bVar6 = bVar6 | 8;
      break;
    case 0x67:
      param_2[5] = bVar1;
      bVar6 = bVar6 | 0x10;
      break;
    case 0xf0:
      param_2[2] = bVar1;
      bVar6 = bVar6 | 0x20;
      break;
    case 0xf2:
      param_2[1] = bVar1;
      bVar6 = bVar6 | 2;
      break;
    case 0xf3:
      param_2[1] = bVar1;
      bVar6 = bVar6 | 4;
    }
    cVar17 = cVar17 + -1;
  } while (cVar17 != '\0');
switchD_18000a026_caseD_27:
  uVar19 = (uint)bVar6 << 0x17;
  bVar12 = 1;
  if (bVar6 != 0) {
    bVar12 = bVar6;
  }
  *(uint *)(param_2 + 0x21) = uVar19;
  if ((bVar1 & 0xf0) == 0x40) {
    uVar19 = uVar19 | 0x40000000;
    bVar6 = bVar1 >> 3 & 1;
    *(uint *)(param_2 + 0x21) = uVar19;
    param_2[7] = bVar6;
    if (bVar6 != 0) {
      local_res18 = (*pbVar15 & 0xf8) == 0xb8;
    }
    param_2[8] = bVar1 >> 2 & 1;
    param_2[10] = bVar1 & 1;
    param_2[9] = bVar1 >> 1 & 1;
    bVar6 = *pbVar15;
    uVar21 = (ulonglong)bVar6;
    pbVar15 = pbVar16 + 2;
    if ((bVar6 & 0xf0) != 0x40) goto LAB_18000a0f5;
LAB_18000a15d:
    uVar19 = uVar19 | 0x3000;
    *(uint *)(param_2 + 0x21) = uVar19;
    if (((byte)uVar21 & 0xfd) == 0x24) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
LAB_18000a19c:
    cVar17 = '\0';
  }
  else {
LAB_18000a0f5:
    bVar6 = (byte)uVar21;
    param_2[0xb] = bVar6;
    if (bVar6 == 0xf) {
      puVar13 = &DAT_1800150ea;
      uVar21 = (ulonglong)*pbVar15;
      param_2[0xc] = *pbVar15;
      pbVar15 = pbVar15 + 1;
    }
    else {
      puVar13 = &DAT_1800150a0;
      if ((0x9f < bVar6) && (bVar6 < 0xa4)) {
        local_res18 = (bool)(local_res18 + '\x01');
        if ((bVar12 & 0x10) == 0) {
          bVar12 = bVar12 & 0xf7;
        }
        else {
          bVar12 = bVar12 | 8;
        }
      }
    }
    bVar6 = (byte)uVar21;
    bVar1 = puVar13[(ulonglong)((uint)uVar21 & 3) + (ulonglong)(byte)puVar13[uVar21 >> 2]];
    uVar14 = (ushort)bVar1;
    if (bVar1 == 0xff) goto LAB_18000a15d;
    if (-1 < (char)bVar1) goto LAB_18000a19c;
    uVar14 = *(ushort *)(puVar13 + (bVar1 & 0x7f));
    cVar17 = (char)(uVar14 >> 8);
  }
  bVar1 = param_2[0xc];
  uVar11 = (uint)uVar21;
  if ((bVar1 != 0) &&
     ((s_____AI____LB________ODS___DWC____1800151dc[(ulonglong)(byte)s_____AI____LB________ODS___DWC____1800151dc[uVar21 >> 2] + (ulonglong)(uVar11 & 3)] &
      bVar12) != 0)) {
    uVar19 = uVar19 | 0x3000;
    *(uint *)(param_2 + 0x21) = uVar19;
  }
  if ((uVar14 & 1) == 0) {
    if ((bVar12 & 0x20) != 0) {
      *(uint *)(param_2 + 0x21) = uVar19 | 0x9000;
    }
  }
  else {
    uVar20 = uVar19 | 1;
    lVar23 = 0;
    *(uint *)(param_2 + 0x21) = uVar20;
    bVar2 = *pbVar15;
    param_2[0xd] = bVar2;
    bVar7 = bVar2 & 7;
    param_2[0x10] = bVar7;
    bVar8 = bVar2 >> 3 & 7;
    bVar22 = bVar2 >> 6;
    param_2[0xf] = bVar8;
    param_2[0xe] = bVar22;
    if ((cVar17 != '\0') && ((char)(cVar17 << bVar8) < '\0')) {
      uVar20 = uVar19 | 0x3001;
      *(uint *)(param_2 + 0x21) = uVar20;
    }
    if (((bVar1 == 0) && (0xd8 < bVar6)) && (bVar6 < 0xe0)) {
      if (bVar22 == 3) {
        cVar17 = (&DAT_1800151a4)[(ulonglong)bVar8 + (ulonglong)(byte)(bVar6 + 0x27) * 8];
        bVar18 = bVar7;
      }
      else {
        cVar17 = (&DAT_18001519d)[(byte)(bVar6 + 0x27)];
        bVar18 = bVar8;
      }
      if ((char)(cVar17 << bVar18) < '\0') {
        uVar20 = uVar20 | 0x3000;
        *(uint *)(param_2 + 0x21) = uVar20;
      }
    }
    if ((bVar12 & 0x20) != 0) {
      if (bVar22 == 3) {
        *(uint *)(param_2 + 0x21) = uVar20 | 0x9000;
      }
      else {
        if (bVar1 == 0) {
          pbVar16 = &DAT_18001524e;
          bVar18 = bVar6 & 0xfe;
          pbVar10 = &DAT_180015266;
        }
        else {
          pbVar16 = &DAT_180015266;
          pbVar10 = &DAT_180015278;
          bVar18 = bVar6;
        }
        do {
          if (*pbVar16 == bVar18) {
            if (-1 < (char)(pbVar16[1] << bVar8)) goto LAB_18000a304;
            break;
          }
          pbVar16 = pbVar16 + 2;
        } while (pbVar16 != pbVar10);
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x9000;
      }
    }
LAB_18000a304:
    if (bVar1 == 0) {
      if (uVar11 == 0x8c) {
LAB_18000a400:
        if (0x28 < (bVar2 & 0x38)) goto LAB_18000a40a;
      }
      else {
        if (uVar11 == 0x8e) {
          if ((bVar2 & 0x38) != 8) goto LAB_18000a400;
          goto LAB_18000a40a;
        }
LAB_18000a37c:
        if (bVar22 == 3) {
          pbVar10 = &DAT_180015287;
          pbVar16 = &DAT_1800152b1;
          if (bVar1 == 0) {
            pbVar16 = &DAT_180015287;
            pbVar10 = &DAT_180015278;
          }
          for (; pbVar10 != pbVar16; pbVar10 = pbVar10 + 3) {
            if (*pbVar10 == bVar6) {
              if (((pbVar10[1] & bVar12) != 0) && (-1 < (char)(pbVar10[2] << bVar8))) goto LAB_18000a40a;
              break;
            }
          }
        }
        else if (bVar1 != 0) {
          if (uVar11 == 0x50) {
LAB_18000a3e8:
            bVar1 = bVar12 & 9;
          }
          else {
            if (uVar11 == 0xc5) goto LAB_18000a40a;
            if (uVar11 != 0xd6) {
              if ((uVar11 != 0xd7) && (uVar11 != 0xf7)) goto LAB_18000a412;
              goto LAB_18000a3e8;
            }
            bVar1 = bVar12 & 6;
          }
          if (bVar1 != 0) goto LAB_18000a40a;
        }
      }
    }
    else if (uVar11 == 0x20) {
LAB_18000a347:
      bVar22 = 3;
      if ((0x20 < (bVar2 & 0x38)) || ((bVar2 & 0x38) == 8)) goto LAB_18000a40a;
    }
    else {
      if (uVar11 != 0x21) {
        if (uVar11 == 0x22) goto LAB_18000a347;
        if (uVar11 != 0x23) goto LAB_18000a37c;
      }
      bVar22 = 3;
      if (((bVar2 & 0x38) == 0x20) || ((bVar2 & 0x38) == 0x28)) {
LAB_18000a40a:
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x11000;
      }
    }
LAB_18000a412:
    bVar1 = pbVar15[1];
    pbVar16 = pbVar15 + 2;
    if ((bVar2 & 0x38) < 9) {
      if (bVar6 == 0xf6) {
        uVar14 = (ushort)(byte)((byte)uVar14 | 2);
      }
      else if (bVar6 == 0xf7) {
        uVar14 = (ushort)(byte)((byte)uVar14 | 0x10);
      }
    }
    if (bVar22 == 0) {
      if ((bVar12 & 0x10) == 0) {
        if (bVar7 == 5) {
          lVar23 = 4;
        }
      }
      else {
        lVar23 = 2;
        if (bVar7 != 6) {
          lVar23 = 0;
        }
      }
    }
    else if (bVar22 == 1) {
      lVar23 = 1;
    }
    else if ((bVar22 == 2) && (lVar23 = 2, (bVar12 & 0x10) == 0)) {
      lVar23 = 4;
    }
    if ((bVar22 != 3) && (bVar7 == 4)) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 2;
      pbVar16 = pbVar15 + 3;
      param_2[0x12] = bVar1 >> 6;
      param_2[0x11] = bVar1;
      param_2[0x13] = bVar1 >> 3 & 7;
      param_2[0x14] = bVar1 & 7;
      if (((bVar1 & 7) == 5) && ((bVar22 & 1) == 0)) {
        lVar23 = 4;
      }
    }
    iVar9 = (int)lVar23;
    if (iVar9 == 1) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x40;
      param_2[0x1d] = pbVar16[-1];
LAB_18000a536:
      pbVar15 = pbVar16 + lVar23 + -1;
    }
    else if (iVar9 == 2) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x80;
      pbVar15 = pbVar16 + lVar23 + -1;
      *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(pbVar16 + -1);
    }
    else {
      if (iVar9 != 4) goto LAB_18000a536;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x100;
      pbVar15 = pbVar16 + lVar23 + -1;
      *(undefined4 *)(param_2 + 0x1d) = *(undefined4 *)(pbVar16 + -1);
    }
  }
  if ((uVar14 & 0x10) == 0) goto LAB_18000a5c6;
  if ((uVar14 & 0x40) == 0) {
    if (local_res18 == false) {
      if ((bVar12 & 8) == 0) {
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x10;
        uVar4 = *(undefined4 *)pbVar15;
        pbVar15 = pbVar15 + 4;
        *(undefined4 *)(param_2 + 0x15) = uVar4;
        goto LAB_18000a5c6;
      }
LAB_18000a5cc:
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 8;
      uVar3 = *(undefined2 *)pbVar15;
      pbVar15 = pbVar15 + 2;
      *(undefined2 *)(param_2 + 0x15) = uVar3;
    }
    else {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x20;
      uVar5 = *(undefined8 *)pbVar15;
      pbVar15 = pbVar15 + 8;
      *(undefined8 *)(param_2 + 0x15) = uVar5;
LAB_18000a5c6:
      if ((uVar14 & 4) != 0) goto LAB_18000a5cc;
    }
    if ((uVar14 & 2) != 0) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 4;
      bVar6 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      param_2[0x15] = bVar6;
    }
    if ((uVar14 & 0x40) == 0) {
      if ((uVar14 & 0x20) != 0) {
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x204;
        bVar6 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        param_2[0x15] = bVar6;
      }
      goto LAB_18000a628;
    }
  }
  else if ((bVar12 & 8) != 0) {
    *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x208;
    uVar3 = *(undefined2 *)pbVar15;
    pbVar15 = pbVar15 + 2;
    *(undefined2 *)(param_2 + 0x15) = uVar3;
    goto LAB_18000a628;
  }
  *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x210;
  uVar4 = *(undefined4 *)pbVar15;
  pbVar15 = pbVar15 + 4;
  *(undefined4 *)(param_2 + 0x15) = uVar4;
LAB_18000a628:
  bVar6 = (char)pbVar15 - (char)param_1;
  *param_2 = bVar6;
  if (0xf < bVar6) {
    *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x5000;
    *param_2 = 0xf;
    return 0xf;
  }
  return bVar6;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_18000a780(undefined1 (*param_1) [16],undefined1 *param_2,undefined1 (*param_3) [16],ulonglong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined7 extraout_var;
  uint uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  undefined1 auStack_298 [56];
  undefined1 local_260 [32];
  char local_240 [256];
  char local_140 [256];
  ulonglong local_40;
  ulonglong local_38;
  undefined1 extraout_var_00 [56];
  
  local_38 = DAT_1800152c0 ^ (ulonglong)auStack_298;
  if ((DAT_180015314 & 4) == 0) {
    memset(local_140,0,0x100);
    puVar5 = *param_3;
    for (; param_3 != (undefined1 (*) [16])(puVar5 + param_4); param_3 = (undefined1 (*) [16])(*param_3 + 1)) {
      local_140[(byte)(*param_3)[0]] = '\x01';
    }
    do {
      if (param_2 == (undefined1 *)0x0) {
        return (undefined1 *)0xffffffffffffffff;
      }
      pbVar1 = param_1[-1] + 0xf + (longlong)param_2;
      param_2 = param_2 + -1;
    } while (local_140[*pbVar1] != '\0');
  }
  else {
    cVar6 = FUN_18000b6e0((ulonglong)param_2,param_4,(byte)(DAT_180015314 >> 5) & 1);
    iVar7 = (int)CONCAT71(extraout_var,cVar6);
    if (iVar7 == 2) {
      auVar11._0_8_ = FUN_18000b580((byte *)param_3,param_4);
      auVar11._8_56_ = extraout_var_00;
      local_260 = auVar11._0_32_;
      do {
        if (param_2 < (undefined1 *)0x8) {
          uVar8 = (uint)param_2 & 7;
          if (((ulonglong)param_2 & 7) != 0) {
            memcpy(&local_40,param_1,(ulonglong)uVar8);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_40;
            auVar10 = vpmovzxbd_avx2(auVar3);
            auVar4 = vpandn_avx2(auVar10,_DAT_180011760);
            auVar10 = vpsrld_avx2(auVar10,5);
            auVar10 = vpermd_avx2(auVar10,local_260);
            auVar4 = vpsllvd_avx2(auVar10,auVar4);
            uVar9 = vmovmskps_avx(auVar4);
            uVar8 = ~uVar9 & (1 << (sbyte)uVar8) - 1U;
            if (uVar8 != 0) {
              return (undefined1 *)(ulonglong)(0x1f - LZCOUNT(uVar8));
            }
          }
          return (undefined1 *)0xffffffffffffffff;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(param_1[-1] + 8 + (longlong)param_2);
        auVar4 = vpmovzxbd_avx2(auVar2);
        param_2 = param_2 + -8;
        auVar10 = vpsrld_avx2(auVar4,5);
        auVar10 = vpermd_avx2(auVar10,local_260);
        auVar4 = vpandn_avx2(auVar4,_DAT_180011760);
        auVar4 = vpsllvd_avx2(auVar10,auVar4);
        uVar8 = vmovmskps_avx(auVar4);
      } while ((uVar8 ^ 0xff) == 0);
      param_2 = param_2 + (0x1f - (ulonglong)(uint)LZCOUNT(uVar8 ^ 0xff));
    }
    else if (iVar7 == 1) {
      memset(local_240,0,0x100);
      puVar5 = *param_3;
      for (; param_3 != (undefined1 (*) [16])(puVar5 + param_4); param_3 = (undefined1 (*) [16])(*param_3 + 1)) {
        local_240[(byte)(*param_3)[0]] = '\x01';
      }
      do {
        if (param_2 == (undefined1 *)0x0) {
          return (undefined1 *)0xffffffffffffffff;
        }
        pbVar1 = param_1[-1] + 0xf + (longlong)param_2;
        param_2 = param_2 + -1;
      } while (local_240[*pbVar1] != '\0');
    }
    else {
      param_2 = FUN_18000af00(param_1,(ulonglong)param_2,param_3,param_4);
    }
  }
                    /* WARNING: Read-only address (ram,0x000180011760) is written */
  return param_2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_18000a9c0(undefined1 (*param_1) [16],undefined1 *param_2,undefined1 (*param_3) [16],ulonglong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  undefined7 extraout_var;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  undefined1 auStack_298 [56];
  undefined1 local_260 [32];
  char local_240 [256];
  char local_140 [256];
  ulonglong local_40;
  ulonglong local_38;
  undefined1 extraout_var_00 [56];
  
  local_38 = DAT_1800152c0 ^ (ulonglong)auStack_298;
  if ((DAT_180015314 & 4) == 0) {
    memset(local_140,0,0x100);
    puVar5 = *param_3;
    for (; param_3 != (undefined1 (*) [16])(puVar5 + param_4); param_3 = (undefined1 (*) [16])(*param_3 + 1)) {
      local_140[(byte)(*param_3)[0]] = '\x01';
    }
    do {
      if (param_2 == (undefined1 *)0x0) {
        return (undefined1 *)0xffffffffffffffff;
      }
      pbVar1 = param_1[-1] + 0xf + (longlong)param_2;
      param_2 = param_2 + -1;
    } while (local_140[*pbVar1] == '\0');
  }
  else {
    cVar6 = FUN_18000b6e0((ulonglong)param_2,param_4,(byte)(DAT_180015314 >> 5) & 1);
    iVar7 = (int)CONCAT71(extraout_var,cVar6);
    if (iVar7 == 2) {
      auVar11._0_8_ = FUN_18000b580((byte *)param_3,param_4);
      auVar11._8_56_ = extraout_var_00;
      local_260 = auVar11._0_32_;
      do {
        if (param_2 < (undefined1 *)0x8) {
          uVar9 = (uint)param_2 & 7;
          if (((ulonglong)param_2 & 7) != 0) {
            memcpy(&local_40,param_1,(ulonglong)uVar9);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_40;
            auVar10 = vpmovzxbd_avx2(auVar3);
            auVar4 = vpandn_avx2(auVar10,_DAT_180011760);
            auVar10 = vpsrld_avx2(auVar10,5);
            auVar10 = vpermd_avx2(auVar10,local_260);
            auVar4 = vpsllvd_avx2(auVar10,auVar4);
            uVar8 = vmovmskps_avx(auVar4);
            uVar8 = uVar8 & (1 << (sbyte)uVar9) - 1U;
            if (uVar8 != 0) {
              return (undefined1 *)(ulonglong)(0x1f - LZCOUNT(uVar8));
            }
          }
          return (undefined1 *)0xffffffffffffffff;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(param_1[-1] + 8 + (longlong)param_2);
        auVar4 = vpmovzxbd_avx2(auVar2);
        param_2 = param_2 + -8;
        auVar10 = vpsrld_avx2(auVar4,5);
        auVar10 = vpermd_avx2(auVar10,local_260);
        auVar4 = vpandn_avx2(auVar4,_DAT_180011760);
        auVar4 = vpsllvd_avx2(auVar10,auVar4);
        iVar7 = vmovmskps_avx(auVar4);
      } while (iVar7 == 0);
      param_2 = param_2 + (0x1f - (ulonglong)(uint)LZCOUNT(iVar7));
    }
    else if (iVar7 == 1) {
      memset(local_240,0,0x100);
      puVar5 = *param_3;
      for (; param_3 != (undefined1 (*) [16])(puVar5 + param_4); param_3 = (undefined1 (*) [16])(*param_3 + 1)) {
        local_240[(byte)(*param_3)[0]] = '\x01';
      }
      do {
        if (param_2 == (undefined1 *)0x0) {
          return (undefined1 *)0xffffffffffffffff;
        }
        pbVar1 = param_1[-1] + 0xf + (longlong)param_2;
        param_2 = param_2 + -1;
      } while (local_240[*pbVar1] == '\0');
    }
    else {
      param_2 = FUN_18000b140(param_1,(ulonglong)param_2,param_3,param_4);
    }
  }
                    /* WARNING: Read-only address (ram,0x000180011760) is written */
  return param_2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18000ac00(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  undefined7 extraout_var;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [32];
  undefined1 auStack_198 [56];
  undefined1 local_160 [32];
  char local_140 [256];
  ulonglong local_40;
  ulonglong local_38;
  undefined1 extraout_var_00 [56];
  
  local_38 = DAT_1800152c0 ^ (ulonglong)auStack_198;
  cVar5 = FUN_18000b6e0(param_2,param_4,(byte)(DAT_180015314 >> 5) & 1);
  iVar6 = (int)CONCAT71(extraout_var,cVar5);
  if (iVar6 == 2) {
    auVar12._0_8_ = FUN_18000b580((byte *)param_3,param_4);
    auVar12._8_56_ = extraout_var_00;
    uVar7 = 0;
    local_160 = auVar12._0_32_;
    uVar11 = param_2 & 0xfffffffffffffff8;
    if (uVar11 != 0) {
      do {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = *(ulonglong *)(*param_1 + uVar7);
        auVar3 = vpmovzxbd_avx2(auVar1);
        auVar13 = vpsrld_avx2(auVar3,5);
        auVar13 = vpermd_avx2(auVar13,local_160);
        auVar3 = vpandn_avx2(auVar3,_DAT_180011760);
        auVar3 = vpsllvd_avx2(auVar13,auVar3);
        uVar9 = vmovmskps_avx(auVar3);
        uVar9 = uVar9 ^ 0xff;
        if (uVar9 != 0) {
          uVar10 = 0;
          for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          return uVar10 + uVar7;
        }
        uVar7 = uVar7 + 8;
      } while (uVar7 != uVar11);
    }
    uVar9 = (uint)param_2 & 7;
    if ((param_2 & 7) != 0) {
      memcpy(&local_40,*param_1 + uVar11,(ulonglong)uVar9);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_40;
      auVar13 = vpmovzxbd_avx2(auVar2);
      auVar3 = vpandn_avx2(auVar13,_DAT_180011760);
      auVar13 = vpsrld_avx2(auVar13,5);
      auVar13 = vpermd_avx2(auVar13,local_160);
      auVar3 = vpsllvd_avx2(auVar13,auVar3);
      uVar10 = vmovmskps_avx(auVar3);
      uVar9 = ~uVar10 & (1 << (sbyte)uVar9) - 1U;
      if (uVar9 != 0) {
        uVar10 = 0;
        for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        return uVar10 + uVar11;
      }
    }
    uVar7 = 0xffffffffffffffff;
  }
  else if (iVar6 == 1) {
    memset(local_140,0,0x100);
    puVar4 = *param_3;
    for (; param_3 != (undefined1 (*) [16])(puVar4 + param_4); param_3 = (undefined1 (*) [16])(*param_3 + 1)) {
      local_140[(byte)(*param_3)[0]] = '\x01';
    }
    uVar7 = 0;
    if (param_2 != 0) {
      do {
        if (local_140[(byte)(*param_1)[uVar7]] == '\0') {
          return uVar7;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != param_2);
    }
    uVar7 = 0xffffffffffffffff;
  }
  else {
    pauVar8 = FUN_18000b360(param_1,param_2,param_3,param_4);
    uVar7 = 0xffffffffffffffff;
    if (pauVar8 != (undefined1 (*) [16])(*param_1 + param_2)) {
      uVar7 = (longlong)pauVar8 - (longlong)param_1;
    }
  }
                    /* WARNING: Read-only address (ram,0x000180011760) is written */
  return uVar7;
}




undefined1 (*) [32] FUN_18000ae00(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_180015314 & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_180015314 & 4) != 0)) {
      puVar4 = *param_1;
      auVar9 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar8[0] = -((*param_1)[0] == auVar9[0]);
        auVar8[1] = -((*param_1)[1] == auVar9[1]);
        auVar8[2] = -((*param_1)[2] == auVar9[2]);
        auVar8[3] = -((*param_1)[3] == auVar9[3]);
        auVar8[4] = -((*param_1)[4] == auVar9[4]);
        auVar8[5] = -((*param_1)[5] == auVar9[5]);
        auVar8[6] = -((*param_1)[6] == auVar9[6]);
        auVar8[7] = -((*param_1)[7] == auVar9[7]);
        auVar8[8] = -((*param_1)[8] == auVar9[8]);
        auVar8[9] = -((*param_1)[9] == auVar9[9]);
        auVar8[10] = -((*param_1)[10] == auVar9[10]);
        auVar8[0xb] = -((*param_1)[0xb] == auVar9[0xb]);
        auVar8[0xc] = -((*param_1)[0xc] == auVar9[0xc]);
        auVar8[0xd] = -((*param_1)[0xd] == auVar9[0xd]);
        auVar8[0xe] = -((*param_1)[0xe] == auVar9[0xe]);
        auVar8[0xf] = -((*param_1)[0xf] == auVar9[0xf]);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 | (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 | (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 | (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 | (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd | (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar8[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar9 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar10._16_16_ = auVar9;
    auVar10._0_16_ = auVar9;
    do {
      auVar2 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 | (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 | (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe |
              (uint)SUB321(auVar2 >> 0x7f,0) << 0xf | (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 | (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 | (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 | (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 | (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
              (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 | (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b | (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c | (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
      if (uVar5 != 0) goto LAB_18000aea1;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180011720 + -uVar7),*param_1);
      auVar10 = vpcmpeqb_avx2(auVar2,auVar10);
      auVar10 = vpand_avx2(auVar10,*(undefined1 (*) [32])(&DAT_180011720 + -uVar7));
      uVar5 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 | (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 | (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 | (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 | (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe |
              (uint)SUB321(auVar10 >> 0x7f,0) << 0xf | (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 | (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 | (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 | (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 | (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 |
              (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 | (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b | (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c | (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar10[0x1f] >> 7) << 0x1f;
      if (uVar5 != 0) {
LAB_18000aea1:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar3);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3)); param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_18000af00(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],ulonglong param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  uint uVar8;
  bool bVar10;
  undefined1 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar17;
  undefined1 auVar16 [16];
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  ulonglong local_68;
  ulonglong uVar9;
  
  local_68 = DAT_1800152c0 ^ (ulonglong)auStack_98;
  puVar5 = *param_1 + param_2;
  uVar8 = (uint)param_2 & 0xf;
  uVar9 = (ulonglong)uVar8;
  puVar1 = *param_1 + uVar9;
  uVar7 = (uint)param_4;
  if (param_4 < 0x11) {
    memcpy(local_78,param_3,param_4);
    auVar15 = local_78;
    do {
      if (puVar5 == puVar1) {
        if (uVar9 != 0) {
          uVar11 = param_2 < 0x10;
          if ((bool)uVar11) {
            memcpy(local_78,param_1,param_2);
          }
          else {
            local_78 = *param_1;
          }
          iVar3 = pcmpestri(auVar15,local_78,0x70,uVar7,uVar8);
          if ((bool)uVar11) {
            return (undefined1 *)(longlong)iVar3;
          }
        }
        goto LAB_18000b115;
      }
      pauVar6 = (undefined1 (*) [16])(puVar5 + -0x10);
      bVar10 = (undefined1 *)0xf < puVar5;
      puVar5 = puVar5 + -0x10;
      iVar3 = pcmpestri(local_78,*pauVar6,0x70,uVar7,0x10);
    } while (bVar10);
    puVar5 = puVar5 + ((longlong)iVar3 - (longlong)param_1);
  }
  else {
    uVar7 = uVar7 & 0xf;
    pauVar6 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    memcpy(local_78,pauVar6,(ulonglong)uVar7);
    auVar15 = local_78;
    if (puVar5 != puVar1) {
      do {
        auVar14 = *(undefined1 (*) [16])(puVar5 + -0x10);
        puVar5 = puVar5 + -0x10;
        auVar12 = pcmpestrm(*param_3,auVar14,0x30,0x10,0x10);
        pauVar4 = param_3;
        while( true ) {
          uVar2 = auVar12._8_4_;
          uVar17 = auVar12._12_4_;
          if (pauVar4 == pauVar6) break;
          auVar13 = *pauVar4;
          pauVar4 = pauVar4 + 1;
          auVar13 = pcmpestrm(auVar13,auVar14,0x30,0x10,0x10);
          auVar16._0_4_ = auVar12._0_4_ & auVar13._0_4_;
          auVar16._4_4_ = auVar12._4_4_ & auVar13._4_4_;
          auVar16._8_4_ = uVar2 & auVar13._8_4_;
          auVar16._12_4_ = uVar17 & auVar13._12_4_;
          auVar12 = auVar16;
        }
        if ((param_4 & 0xf) != 0) {
          auVar14 = pcmpestrm(local_78,auVar14,0x30,uVar7,0x10);
          auVar12._0_4_ = auVar12._0_4_ & auVar14._0_4_;
          auVar12._4_4_ = 0;
          auVar12._8_4_ = uVar2 & auVar14._8_4_;
          auVar12._12_4_ = uVar17 & auVar14._12_4_;
        }
        uVar2 = auVar12._0_4_;
        if (uVar2 != 0) {
          iVar3 = 0x1f;
          if (uVar2 != 0) {
            for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          if (iVar3 != -1) {
            return puVar5 + ((longlong)iVar3 - (longlong)param_1);
          }
        }
      } while (puVar5 != puVar1);
    }
    if (uVar9 == 0) {
LAB_18000b115:
      puVar5 = (undefined1 *)0xffffffffffffffff;
    }
    else {
      if (param_2 < 0x10) {
        memcpy(local_78,param_1,param_2);
      }
      else {
        local_78 = *param_1;
      }
      auVar14 = pcmpestrm(*param_3,local_78,0x30,0x10,uVar8);
      while( true ) {
        uVar2 = auVar14._8_4_;
        uVar17 = auVar14._12_4_;
        if (param_3 == pauVar6) break;
        auVar12 = *param_3;
        param_3 = param_3 + 1;
        auVar12 = pcmpestrm(auVar12,local_78,0x30,0x10,uVar8);
        auVar13._0_4_ = auVar14._0_4_ & auVar12._0_4_;
        auVar13._4_4_ = auVar14._4_4_ & auVar12._4_4_;
        auVar13._8_4_ = uVar2 & auVar12._8_4_;
        auVar13._12_4_ = uVar17 & auVar12._12_4_;
        auVar14 = auVar13;
      }
      if ((param_4 & 0xf) != 0) {
        auVar15 = pcmpestrm(auVar15,local_78,0x30,uVar7,uVar8);
        auVar14._0_4_ = auVar14._0_4_ & auVar15._0_4_;
        auVar14._4_4_ = 0;
        auVar14._8_4_ = uVar2 & auVar15._8_4_;
        auVar14._12_4_ = uVar17 & auVar15._12_4_;
      }
      uVar7 = auVar14._0_4_;
      iVar3 = -1;
      if ((uVar7 != 0) && (iVar3 = 0x1f, uVar7 != 0)) {
        for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      puVar5 = (undefined1 *)(longlong)iVar3;
    }
  }
  return puVar5;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018000b2a7) */
/* WARNING: Removing unreachable block (ram,0x00018000b2aa) */
/* WARNING: Removing unreachable block (ram,0x00018000b323) */
/* WARNING: Removing unreachable block (ram,0x00018000b325) */

undefined1 * FUN_18000b140(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],ulonglong param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  uint uVar10;
  bool bVar12;
  undefined1 uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  ulonglong uVar11;
  
  local_68 = DAT_1800152c0 ^ (ulonglong)auStack_a8;
  uVar10 = (uint)param_2 & 0xf;
  uVar11 = (ulonglong)uVar10;
  puVar6 = *param_1 + param_2;
  iVar3 = -1;
  uVar7 = (uint)param_4;
  local_88 = param_2;
  if (param_4 < 0x11) {
    memcpy(&local_88,param_3,param_4);
    auVar2._8_8_ = uStack_80;
    auVar2._0_8_ = local_88;
    do {
      if (puVar6 == *param_1 + uVar11) {
        if (uVar11 != 0) {
          uVar13 = param_2 < 0x10;
          if ((bool)uVar13) {
            memcpy(&local_88,param_1,param_2);
            auVar14._8_8_ = uStack_80;
            auVar14._0_8_ = local_88;
          }
          else {
            auVar14 = *param_1;
          }
          iVar3 = pcmpestri(auVar2,auVar14,0x40,uVar7,uVar10);
          if ((bool)uVar13) {
            return (undefined1 *)(longlong)iVar3;
          }
        }
        return (undefined1 *)0xffffffffffffffff;
      }
      pauVar9 = (undefined1 (*) [16])(puVar6 + -0x10);
      bVar12 = (undefined1 *)0xf < puVar6;
      puVar6 = puVar6 + -0x10;
      iVar3 = pcmpestri(auVar2,*pauVar9,0x40,uVar7,0x10);
    } while (bVar12);
    puVar6 = puVar6 + ((longlong)iVar3 - (longlong)param_1);
  }
  else {
    uVar7 = uVar7 & 0xf;
    pauVar9 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    memcpy(local_78,pauVar9,(ulonglong)uVar7);
    auVar2 = local_78;
    do {
      if (puVar6 == *param_1 + uVar11) {
        if (uVar11 == 0) {
          return (undefined1 *)0xffffffffffffffff;
        }
        uVar13 = local_88 < 0x10;
        if ((bool)uVar13) {
          memcpy(local_78,param_1,local_88);
        }
        else {
          local_78 = *param_1;
        }
        do {
          iVar5 = pcmpestri(*param_3,local_78,0x40,0x10,uVar10);
          if (((bool)uVar13) && (iVar3 < iVar5)) {
            iVar3 = iVar5;
          }
          param_3 = param_3 + 1;
          uVar13 = param_3 < pauVar9;
        } while (param_3 != pauVar9);
        if ((param_4 & 0xf) != 0) {
          pcmpestri(auVar2,local_78,0x40,uVar7,uVar10);
        }
        return (undefined1 *)(longlong)iVar3;
      }
      pauVar1 = (undefined1 (*) [16])(puVar6 + -0x10);
      bVar12 = puVar6 < (undefined1 *)0x10;
      puVar6 = puVar6 + -0x10;
      iVar5 = -1;
      pauVar8 = param_3;
      do {
        iVar4 = pcmpestri(*pauVar8,*pauVar1,0x40,0x10,0x10);
        if ((bVar12) && (iVar5 < iVar4)) {
          iVar5 = iVar4;
        }
        pauVar8 = pauVar8 + 1;
        bVar12 = pauVar8 < pauVar9;
      } while (pauVar8 != pauVar9);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_78,*pauVar1,0x40,uVar7,0x10);
      }
    } while (iVar5 == -1);
    puVar6 = puVar6 + ((longlong)iVar5 - (longlong)param_1);
  }
  return puVar6;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16] FUN_18000b360(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],ulonglong param_4)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*_Src) [16];
  uint uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar13;
  undefined1 auVar12 [16];
  uint uVar14;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1800152c0 ^ (ulonglong)auStack_88;
  pauVar6 = (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffffffffffff0));
  uVar3 = (uint)param_4;
  if (param_4 < 0x11) {
    memcpy(local_68,param_3,param_4);
    auVar11 = local_68;
    for (; param_1 != pauVar6; param_1 = param_1 + 1) {
      iVar1 = pcmpestri(local_68,*param_1,0x30,uVar3,0x10);
      if (param_1 < pauVar6) goto LAB_18000b40d;
    }
    bVar7 = false;
    uVar4 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      memcpy(local_68,param_1,(ulonglong)uVar4);
      iVar1 = pcmpestri(auVar11,local_68,0x30,uVar3,uVar4);
      if (bVar7) {
LAB_18000b40d:
        param_1 = (undefined1 (*) [16])(*param_1 + iVar1);
      }
      else {
        param_1 = (undefined1 (*) [16])(*param_1 + uVar4);
      }
    }
  }
  else {
    _Src = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    uVar3 = uVar3 & 0xf;
    memcpy(local_68,_Src,(ulonglong)uVar3);
    auVar11 = local_68;
    pauVar5 = param_3 + 1;
    if (param_1 != pauVar6) {
      do {
        auVar10 = *param_1;
        auVar8 = pcmpestrm(*param_3,auVar10,0x30,0x10,0x10);
        pauVar2 = pauVar5;
        while( true ) {
          uVar4 = auVar8._8_4_;
          uVar13 = auVar8._12_4_;
          if (pauVar2 == _Src) break;
          auVar9 = *pauVar2;
          pauVar2 = pauVar2 + 1;
          auVar9 = pcmpestrm(auVar9,auVar10,0x30,0x10,0x10);
          auVar12._0_4_ = auVar8._0_4_ & auVar9._0_4_;
          auVar12._4_4_ = auVar8._4_4_ & auVar9._4_4_;
          auVar12._8_4_ = uVar4 & auVar9._8_4_;
          auVar12._12_4_ = uVar13 & auVar9._12_4_;
          auVar8 = auVar12;
        }
        if ((param_4 & 0xf) != 0) {
          auVar10 = pcmpestrm(local_68,auVar10,0x30,uVar3,0x10);
          auVar8._0_4_ = auVar8._0_4_ & auVar10._0_4_;
          auVar8._4_4_ = 0;
          auVar8._8_4_ = uVar4 & auVar10._8_4_;
          auVar8._12_4_ = uVar13 & auVar10._12_4_;
        }
        uVar4 = auVar8._0_4_;
        if (uVar4 != 0) {
          iVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
            }
          }
          if ((iVar1 < 0x10) && (iVar1 != 0x10)) {
            return (undefined1 (*) [16])(*param_1 + iVar1);
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 != pauVar6);
    }
    uVar4 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      memcpy(local_68,param_1,(ulonglong)uVar4);
      auVar10 = pcmpestrm(*param_3,local_68,0x30,0x10,uVar4);
      while( true ) {
        uVar13 = auVar10._8_4_;
        uVar14 = auVar10._12_4_;
        if (pauVar5 == _Src) break;
        auVar8 = *pauVar5;
        pauVar5 = pauVar5 + 1;
        auVar8 = pcmpestrm(auVar8,local_68,0x30,0x10,uVar4);
        auVar9._0_4_ = auVar10._0_4_ & auVar8._0_4_;
        auVar9._4_4_ = auVar10._4_4_ & auVar8._4_4_;
        auVar9._8_4_ = uVar13 & auVar8._8_4_;
        auVar9._12_4_ = uVar14 & auVar8._12_4_;
        auVar10 = auVar9;
      }
      if ((param_4 & 0xf) != 0) {
        auVar11 = pcmpestrm(auVar11,local_68,0x30,uVar3,uVar4);
        auVar10._0_4_ = auVar10._0_4_ & auVar11._0_4_;
        auVar10._4_4_ = 0;
        auVar10._8_4_ = uVar13 & auVar11._8_4_;
        auVar10._12_4_ = uVar14 & auVar11._12_4_;
      }
      uVar3 = auVar10._0_4_;
      if (uVar3 != 0) {
        uVar13 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
          }
        }
        if ((int)uVar13 < (int)uVar4) {
          uVar4 = uVar13;
        }
      }
      param_1 = (undefined1 (*) [16])(*param_1 + (int)uVar4);
    }
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18000b580(byte *param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 auVar3 [32];
  ulonglong uVar4;
  undefined1 auVar5 [64];
  undefined1 auStack_158 [56];
  undefined1 local_120 [8] [32];
  ulonglong local_20;
  
  local_20 = DAT_1800152c0 ^ (ulonglong)auStack_158;
  pbVar1 = param_1 + param_2;
  if (param_2 < 0x15) {
    auVar5 = ZEXT1664((undefined1  [16])0x0);
    uVar4 = 0;
    while (param_1 != pbVar1) {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      auVar3 = vpmovzxbq_avx2(ZEXT416((uint)(1 << (bVar2 >> 3 & 0x18))));
      auVar3 = vpsllq_avx2(auVar3,ZEXT416(bVar2 & 0x3f));
      auVar3 = vpor_avx2(auVar3,auVar5._0_32_);
      auVar5 = ZEXT3264(auVar3);
      uVar4 = auVar3._0_8_;
    }
  }
  else {
    memset(local_120,0,0x100);
    for (; param_1 != pbVar1; param_1 = param_1 + 1) {
      local_120[0][*param_1] = 0xff;
    }
    uVar4 = (ulonglong)
            ((uint)(SUB321(local_120[0] >> 7,0) & 1) | (uint)(SUB321(local_120[0] >> 0xf,0) & 1) << 1 | (uint)(SUB321(local_120[0] >> 0x17,0) & 1) << 2 |
             (uint)(SUB321(local_120[0] >> 0x1f,0) & 1) << 3 | (uint)(SUB321(local_120[0] >> 0x27,0) & 1) << 4 | (uint)(SUB321(local_120[0] >> 0x2f,0) & 1) << 5
             | (uint)(SUB321(local_120[0] >> 0x37,0) & 1) << 6 | (uint)(SUB321(local_120[0] >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(local_120[0] >> 0x47,0) & 1) << 8 | (uint)(SUB321(local_120[0] >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(local_120[0] >> 0x57,0) & 1) << 10 | (uint)(SUB321(local_120[0] >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(local_120[0] >> 0x67,0) & 1) << 0xc | (uint)(SUB321(local_120[0] >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(local_120[0] >> 0x77,0) & 1) << 0xe | (uint)SUB321(local_120[0] >> 0x7f,0) << 0xf |
             (uint)(SUB321(local_120[0] >> 0x87,0) & 1) << 0x10 | (uint)(SUB321(local_120[0] >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(local_120[0] >> 0x97,0) & 1) << 0x12 | (uint)(SUB321(local_120[0] >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(local_120[0] >> 0xa7,0) & 1) << 0x14 | (uint)(SUB321(local_120[0] >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(local_120[0] >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(local_120[0] >> 0xbf,0) << 0x17 |
             (uint)(SUB321(local_120[0] >> 199,0) & 1) << 0x18 | (uint)(SUB321(local_120[0] >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(local_120[0] >> 0xd7,0) & 1) << 0x1a | (uint)(SUB321(local_120[0] >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(local_120[0] >> 0xe7,0) & 1) << 0x1c | (uint)(SUB321(local_120[0] >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(local_120[0] >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(local_120[0][0x1f] >> 7) << 0x1f);
  }
  return uVar4;
}




char FUN_18000b6e0(ulonglong param_1,ulonglong param_2,char param_3)

{
  bool bVar1;
  
  if ((param_3 != '\0') && (0x30 < param_1)) {
    if (param_2 < 0x11) {
      return (1000 < param_1) * '\x02';
    }
    if (param_2 < 0x31) {
      return (0x50 < param_1) * '\x02';
    }
    return '\x02';
  }
  bVar1 = false;
  if (0x20 < param_2) {
    if (param_2 < 0x31) {
      return 0x1a0 < param_1;
    }
    if (param_2 < 0x41) {
      return 0xe0 < param_1;
    }
    if (param_2 < 0x51) {
      return 0x80 < param_1;
    }
    if (param_2 < 0x21d) {
      return 0x30 < param_1;
    }
    bVar1 = 0x20 < param_1;
  }
  return bVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [32] FUN_18000b770(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [16],ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [32];
  int iVar3;
  ulonglong uVar4;
  size_t _Size;
  undefined1 (*pauVar5) [32];
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1800152c0 ^ (ulonglong)auStack_78;
  pauVar2 = param_1;
  if (param_4 != 0) {
    if (param_4 == 1) {
      pauVar2 = FUN_18000ae00(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar4 = (longlong)param_2 - (longlong)param_1;
      pauVar2 = param_2;
      if (param_4 <= uVar4) {
        if ((((byte)DAT_180015314 & 4) == 0) || (uVar4 < 0x10)) {
          pauVar5 = (undefined1 (*) [32])((longlong)param_1 + uVar4 + (1 - param_4));
          if (param_1 != pauVar5) {
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                uVar4 = 1;
                while ((*param_1)[uVar4] == (*param_3)[uVar4]) {
                  uVar4 = uVar4 + 1;
                  if (uVar4 == param_4) {
                    return param_1;
                  }
                }
              }
              param_1 = (undefined1 (*) [32])(*param_1 + 1);
            } while (param_1 != pauVar5);
          }
        }
        else if (param_4 < 0x11) {
          uVar6 = (uint)param_4;
          uVar7 = 0x10 < uVar6;
          memcpy(local_58,param_3,param_4);
          auVar1 = local_58;
          do {
            iVar3 = pcmpestri(local_58,*(undefined1 (*) [16])*param_1,0xc,uVar6,0x10);
            if ((bool)uVar7) {
              param_1 = (undefined1 (*) [32])(*param_1 + iVar3);
              if (iVar3 <= (int)(0x10 - uVar6)) {
                return param_1;
              }
            }
            else {
              param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
            }
            uVar7 = param_1 < (undefined1 (*) [32])(param_2[-1] + 0x10);
          } while (param_1 <= (undefined1 (*) [32])(param_2[-1] + 0x10));
          bVar8 = param_2 < param_1;
          _Size = (longlong)param_2 - (longlong)param_1;
          if (_Size != 0) {
            memcpy(local_58,param_1,_Size);
            iVar3 = pcmpestri(auVar1,local_58,0xc,uVar6,(int)_Size);
            if (bVar8) {
              pauVar2 = (undefined1 (*) [32])(*param_1 + iVar3);
            }
          }
        }
        else {
          auVar1 = *param_3;
          bVar8 = CARRY8((longlong)param_1 - param_4,uVar4);
          pauVar5 = (undefined1 (*) [32])(((longlong)param_1 - param_4) + uVar4);
          do {
            iVar3 = pcmpestri(auVar1,*(undefined1 (*) [16])*param_1,0xc,0x10,0x10);
            if (bVar8) {
              if (iVar3 == 0) {
LAB_18000b8c9:
                iVar3 = memcmp(*param_1 + 0x10,param_3 + 1,param_4 - 0x10);
                if (iVar3 == 0) {
                  return param_1;
                }
              }
              else {
                param_1 = (undefined1 (*) [32])(*param_1 + iVar3);
                if (pauVar5 < param_1) {
                  return param_2;
                }
                auVar9._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
                auVar9._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
                auVar9._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
                auVar9._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
                if (auVar9 == (undefined1  [16])0x0) goto LAB_18000b8c9;
              }
              param_1 = (undefined1 (*) [32])(*param_1 + 1);
            }
            else {
              param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
            }
            bVar8 = param_1 < pauVar5;
          } while (param_1 <= pauVar5);
        }
      }
    }
  }
  return pauVar2;
}




ulonglong FUN_18000b960(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],ulonglong param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  char local_128 [264];
  
  if (((byte)DAT_180015314 & 4) != 0) {
    uVar2 = FUN_18000ac00(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  memset(local_128,0,0x100);
  puVar1 = *param_3;
  for (; param_3 != (undefined1 (*) [16])(puVar1 + param_4); param_3 = (undefined1 (*) [16])(*param_3 + 1)) {
    local_128[(byte)(*param_3)[0]] = '\x01';
  }
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      if (local_128[(byte)(*param_1)[uVar2]] == '\0') {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_2);
  }
  return 0xffffffffffffffff;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl _eh_vector_destructor_iterator_(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000babc(longlong param_1,longlong param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    param_1 = param_1 - param_2;
    (*(code *)param_4)(param_1);
  }
  return;
}




void FUN_18000bb18(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800021e0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_18000c6b4();
}




/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar4;
  void *pvVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT71(extraout_var,bVar2);
  if ((int)pvVar3 == 0) {
LAB_18000bb8a:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180015488 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180015488;
        pvVar1 = DAT_180015488;
      }
      DAT_180015488 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18000bb8a;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}




/* Library Function - Single Match
    __scrt_dllmain_after_initialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = FUN_18000c6dc();
    uVar3 = _configure_narrow_argv(uVar3 & 0xffffffff);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = _initialize_narrow_environment();
  }
  else {
    uVar2 = FUN_18000c3f4();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




bool FUN_18000bbcc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18000bd04(0);
  return (char)uVar1 != '\0';
}




undefined1 FUN_18000bbe4(void)

{
  char cVar1;
  
  cVar1 = FUN_18000c918();
  if (cVar1 != '\0') {
    cVar1 = FUN_18000c918();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_18000c918();
  }
  return 0;
}




undefined1 FUN_18000bc0c(void)

{
  FUN_18000c918();
  FUN_18000c918();
  return 1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_exception_filter(undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,undefined4 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)param_4)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}




/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_180015498);
    return;
  }
  uVar2 = FUN_18000c91c();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}




void FUN_18000bcb4(void)

{
  FUN_18000c918();
  FUN_18000c918();
  return;
}




longlong FUN_18000bcc8(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_180015490 = 1;
  }
  FUN_18000c3f4();
  cVar1 = FUN_18000c918();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18000c918();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18000c918();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000bd04(uint param_1)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (DAT_180015491 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_18000c6f0(5);
    }
    bVar1 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar1) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_180015498 = 0xffffffffffffffff;
      uRam00000001800154a0 = 0xffffffffffffffff;
      _DAT_1800154a8 = 0xffffffffffffffff;
      _DAT_1800154b0 = 0xffffffffffffffff;
      uRam00000001800154b8 = 0xffffffffffffffff;
      _DAT_1800154c0 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180015498);
      if (((int)in_RAX != 0) || (in_RAX = _initialize_onexit_table(&DAT_1800154b0), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180015491 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018000be1d) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

ulonglong FUN_18000bd90(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1800002f8; pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress), param_1 - 0x180000000U < uVar1)) goto LAB_18000be06;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18000be06:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180015488 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180015490 == '\0') || (param_2 == '\0')) {
    FUN_18000c918();
    FUN_18000c918();
  }
  return 1;
}




/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_180015498 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180015498);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}




/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}




void FUN_18000becc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}




void FUN_18000bed4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(8);
  return;
}




void FUN_18000bedc(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_18000c03c(param_2,param_4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler4(param_1,param_2,param_3,param_4);
  }
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




/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_1800152c0) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_18000becc();
  return;
}




undefined8 * FUN_18000bff0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_18000c01c(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  FUN_18000c03c(param_2,param_4);
  return 1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18000c03c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = ((ulonglong)*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0) + param_1;
  }
  return param_1;
}




ulonglong FUN_18000c0a0(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined7 extraout_var;
  
  if (param_2 == 0) {
    uVar2 = FUN_18000c208(CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != 0));
    return CONCAT71(extraout_var,uVar2);
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar1 = FUN_18000bbe4();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = FUN_18000bc0c();
    }
    return (ulonglong)bVar1;
  }
  uVar3 = FUN_18000c0f0(param_1,param_3);
  return uVar3;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18000c0f0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar4 = FUN_18000bcc8(0);
  if ((char)uVar4 != '\0') {
    uVar4 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_180015480 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18000c6f0(7);
    }
    DAT_180015480 = 1;
    bVar2 = FUN_18000bbcc();
    if (bVar2) {
      FUN_18000c7f0();
      FUN_18000c7a8();
      FUN_18000c7cc();
      iVar3 = _initterm_e(&DAT_18000e440,&DAT_18000e448);
      if ((iVar3 == 0) && (uVar5 = __scrt_dllmain_after_initialize_c(), (char)uVar5 != '\0')) {
        _initterm(&DAT_18000e418,&DAT_18000e438);
        DAT_180015480 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar4);
    if (!bVar1) {
      plVar6 = (longlong *)FUN_18000c7e8();
      if ((*plVar6 != 0) && (uVar7 = FUN_18000bd90((longlong)plVar6), (char)uVar7 != '\0')) {
        (*(code *)*plVar6)(param_1,2,param_2,_guard_dispatch_icall);
      }
      DAT_1800154c8 = DAT_1800154c8 + 1;
      return 1;
    }
  }
  return 0;
}




undefined1 FUN_18000c208(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  
  uVar1 = (undefined1)param_1;
  if (DAT_1800154c8 < 1) {
    uVar1 = 0;
  }
  else {
    DAT_1800154c8 = DAT_1800154c8 + -1;
    uVar2 = __scrt_acquire_startup_lock();
    if (DAT_180015480 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_18000c6f0(7);
    }
    __scrt_dllmain_uninitialize_c();
    FUN_18000c7b8();
    FUN_18000c82c();
    DAT_180015480 = 0;
    uVar3 = (undefined7)((ulonglong)param_1 >> 8);
    __scrt_release_startup_lock((char)uVar2);
    uVar1 = __scrt_uninitialize_crt(CONCAT71(uVar3,uVar1),'\0');
    FUN_18000bcb4();
  }
  return uVar1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x00018000c349) */
/* WARNING: Removing unreachable block (ram,0x00018000c2da) */
/* WARNING: Removing unreachable block (ram,0x00018000c388) */

int FUN_18000c28c(HMODULE param_1,int param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  HMODULE pHVar4;
  
  if ((param_2 == 0) && (DAT_1800154c8 < 1)) {
    iVar1 = 0;
  }
  else {
    if ((param_2 - 1U < 2) && (uVar2 = FUN_18000c0a0(param_1,param_2,param_3), (int)uVar2 == 0)) {
      return 0;
    }
    uVar3 = FUN_180007170(param_1,param_2);
    iVar1 = (int)uVar3;
    if ((param_2 == 1) && (iVar1 == 0)) {
      pHVar4 = param_1;
      FUN_180007170(param_1,0);
      FUN_18000c208(CONCAT71((int7)((ulonglong)pHVar4 >> 8),param_3 != 0));
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar2 = FUN_18000c0a0(param_1,param_2,param_3);
      iVar1 = 0;
      if ((int)uVar2 != 0) {
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}




void entry(HMODULE param_1,int param_2,longlong param_3)

{
  if (param_2 == 1) {
    FUN_18000c6f8();
  }
  FUN_18000c28c(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018000c4df) */
/* WARNING: Removing unreachable block (ram,0x00018000c4cf) */
/* WARNING: Removing unreachable block (ram,0x00018000c4aa) */
/* WARNING: Removing unreachable block (ram,0x00018000c42e) */
/* WARNING: Removing unreachable block (ram,0x00018000c40c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000c3f4(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_180015318 = 0x8000;
    _DAT_180015320 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 && ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1800154cc = DAT_1800154cc | 1;
    }
  }
  uVar11 = 0;
  uVar8 = 0;
  if (*piVar1 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar3[1];
    uVar10 = piVar3[2];
    if ((uVar12 >> 9 & 1) != 0) {
      DAT_1800154cc = DAT_1800154cc | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar8 = *(uint *)(lVar4 + 4);
    }
  }
  _DAT_180015310 = 1;
  DAT_180015314 = 2;
  uVar9 = DAT_180015328 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_180015310 = 2;
    DAT_180015314 = 6;
    uVar9 = DAT_180015328 & 0xffffffffffffffee;
  }
  DAT_180015328 = uVar9;
  if ((uVar5 >> 0x1b & 1) != 0) {
    uVar9 = xinuse(0);
    uVar9 = in_XCR0 & uVar9 & 0xffffffff;
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar6 = (byte)uVar9, (bVar6 & 6) == 6)) {
      _DAT_180015310 = 3;
      uVar5 = DAT_180015314 | 8;
      uVar7 = DAT_180015328;
      if ((uVar12 & 0x20) != 0) {
        _DAT_180015310 = 5;
        uVar5 = DAT_180015314 | 0x28;
        uVar7 = DAT_180015328 & 0xfffffffffffffffd;
        if (((uVar12 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
          DAT_180015314 = DAT_180015314 | 0x68;
          _DAT_180015310 = 6;
          uVar5 = DAT_180015314;
          uVar7 = DAT_180015328 & 0xffffffffffffffd9;
        }
      }
      DAT_180015328 = uVar7;
      DAT_180015314 = uVar5;
      if ((uVar10 >> 0x17 & 1) != 0) {
        DAT_180015328 = DAT_180015328 & 0xfffffffffeffffff;
      }
      if (((uVar11 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
        _DAT_1800154d0 = uVar8 & 0x400ff;
        DAT_180015328 = DAT_180015328 & ~((ulonglong)(uVar8 >> 0x10 & 6) | 0x1000029);
        if (1 < (byte)_DAT_1800154d0) {
          DAT_180015328 = DAT_180015328 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar11 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)) {
      DAT_180015328 = DAT_180015328 & 0xffffffffffffff7f;
    }
  }
  return 0;
}




undefined8 * FUN_18000c690(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_18000c6b4(void)

{
  undefined8 local_28 [5];
  
  FUN_18000c690(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1800137b0);
}




undefined8 FUN_18000c6dc(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180015330 != 0;
}




void FUN_18000c6f0(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000c6f8(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_1800152c0 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_1800152c0 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^ CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^ (ulonglong)local_18) &
         0xffffffffffff;
    if (DAT_1800152c0 == 0x2b992ddfa232) {
      DAT_1800152c0 = 0x2b992ddfa233;
    }
  }
  _DAT_180015300 = ~DAT_1800152c0;
  return;
}




void FUN_18000c7a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000c7af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_1800154e0);
  return;
}




void FUN_18000c7b8(void)

{
  __std_type_info_destroy_list(&DAT_1800154e0);
  return;
}




undefined * FUN_18000c7c4(void)

{
  return &DAT_1800154f0;
}




void FUN_18000c7cc(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180002360();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_18000c7c4();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_18000c7e8(void)

{
  return &DAT_1800154f8;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000c7f0(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180011f28; puVar1 < &DAT_180011f28; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000c82c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180011f38; puVar1 < &DAT_180011f38; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_18000c918(void)

{
  return 1;
}




undefined8 FUN_18000c91c(void)

{
  return 0;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00018000c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void FUN_18000c9c0(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x40),0x20,1,thunk_FUN_180002290);
  return;
}




void FUN_18000c9f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    thunk_FUN_180002290(*(longlong **)(param_2 + 0x48));
  }
  return;
}




void FUN_18000ca30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    thunk_FUN_180002290(*(longlong **)(param_2 + 0x40));
  }
  return;
}




void FUN_18000ca90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_180002290(*(longlong **)(param_2 + 0x80));
  }
  return;
}




undefined8 FUN_18000ccf0(void)

{
  return 0;
}




void FUN_18000cdb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_180002290((longlong *)(param_2 + 0x230));
  }
  return;
}




void FUN_18000ce10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_180002290((longlong *)(param_2 + 0x2d0));
  }
  return;
}




void FUN_18000ce40(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800033d0(*(longlong *)(param_2 + 0x28));
  }
  return;
}




void FUN_18000cee0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_180002290((longlong *)(param_2 + 0x110));
  }
  return;
}




void FUN_18000cf10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_180002290((longlong *)(param_2 + 0x90));
  }
  return;
}




void FUN_18000cf40(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_180002290((longlong *)(param_2 + 0xf0));
  }
  return;
}




void FUN_18000cf70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_180002290(*(longlong **)(param_2 + 0x28));
  }
  return;
}




void FUN_18000cfa0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_180002290(*(longlong **)(param_2 + 0x28));
  }
  return;
}




void FUN_18000d060(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_180002290((longlong *)(param_2 + 0x58));
  }
  return;
}




void FUN_18000d0b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_180002290((longlong *)(param_2 + 0x150));
  }
  return;
}




void FUN_18000d0e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_180002290((longlong *)(param_2 + 0x150));
  }
  return;
}




void FUN_18000d120(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_180006630((undefined8 *)(param_2 + 0x88));
  }
  return;
}




undefined8 FUN_18000d150(void)

{
  FUN_180002020("[Entry] Error loading shell.ini");
  return 0;
}




undefined8 FUN_18000d190(void)

{
  FUN_180002020("[cmd_Bring] Exception");
  return 0;
}




undefined8 FUN_18000d1c0(void)

{
  FUN_180002020("[cmd_Goto] Exception");
  return 0;
}




undefined8 FUN_18000d1f0(void)

{
  FUN_180002020("[cmd_HideActions] Exception");
  return 0;
}




undefined8 FUN_18000d220(void)

{
  FUN_180002020("[cmd_Scroll] Exception");
  return 0;
}




undefined8 FUN_18000d250(void)

{
  FUN_180002020("[cmd_ShowActions] Exception");
  return 0;
}




void FUN_18000d290(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_180002290((longlong *)(param_2 + 0x38));
  }
  return;
}




void FUN_18000d2d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180006630((undefined8 *)(param_2 + 0x70));
  }
  return;
}




void FUN_18000d2f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_18000babc(*(longlong *)(param_2 + 0x60),*(longlong *)(param_2 + 0x68),*(longlong *)(param_2 + 0x70),*(undefined **)(param_2 + 0x78));
  }
  return;
}




undefined4 FUN_18000d322(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x28) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
  puVar2 = (undefined8 *)__current_exception();
  *puVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
  puVar2 = (undefined8 *)__current_exception_context();
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  terminate();
}




bool FUN_18000d37d(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




void FUN_18000d395(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18000d3ac(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x20));
  return;
}




void FUN_18000d3c5(void)

{
  FUN_18000bcb4();
  return;
}




void FUN_18000d3d9(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70),FUN_18000c0a0,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_18000d410(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  plVar3 = DAT_180015408;
  plVar2 = DAT_180015400;
  if (DAT_180015400 != (longlong *)0x0) {
    for (; plVar2 != plVar3; plVar2 = plVar2 + 4) {
      FUN_180002290(plVar2);
    }
    plVar2 = DAT_180015400;
    puVar4 = auStack_28;
    if (0xfff < (DAT_180015410 - (longlong)DAT_180015400 & 0xffffffffffffffe0U)) {
      plVar2 = (longlong *)DAT_180015400[-1];
      plVar3 = (longlong *)((longlong)DAT_180015400 + (-8 - (longlong)plVar2));
      puVar4 = auStack_28;
      if ((longlong *)0x1f < plVar3) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        plVar2 = plVar3;
        puVar4 = auStack_20;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x18000d491;
    free(plVar2);
    DAT_180015410 = 0;
    DAT_180015400 = (longlong *)0x0;
    DAT_180015408 = (longlong *)0x0;
  }
  return;
}




void FUN_18000d4b0(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  plVar3 = DAT_1800153f0;
  plVar2 = DAT_1800153e8;
  if (DAT_1800153e8 != (longlong *)0x0) {
    for (; plVar2 != plVar3; plVar2 = plVar2 + 4) {
      FUN_180002290(plVar2);
    }
    plVar2 = DAT_1800153e8;
    puVar4 = auStack_28;
    if (0xfff < (DAT_1800153f8 - (longlong)DAT_1800153e8 & 0xffffffffffffffe0U)) {
      plVar2 = (longlong *)DAT_1800153e8[-1];
      plVar3 = (longlong *)((longlong)DAT_1800153e8 + (-8 - (longlong)plVar2));
      puVar4 = auStack_28;
      if ((longlong *)0x1f < plVar3) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        plVar2 = plVar3;
        puVar4 = auStack_20;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x18000d531;
    free(plVar2);
    DAT_1800153f8 = 0;
    DAT_1800153e8 = (longlong *)0x0;
    DAT_1800153f0 = (longlong *)0x0;
  }
  return;
}




void FUN_18000d550(void)

{
  FUN_180002290(&DAT_180015078);
  return;
}




/* DONE: decompiled=213 failed=0 total=368 */
