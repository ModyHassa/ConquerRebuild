/* Decompiled by Ghidra 12.1.4 | program: EpochHook.dll
   image base: 180000000 | functions: 375 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001020(void)

{
  DAT_18000eaf8 = 0;
  _DAT_18000eb00 = 0;
  DAT_18000eaf8 = FUN_1800037d0();
  atexit(FUN_180009db0);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180001060(void)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  basic_istream<char,std::char_traits<char>_> *pbVar6;
  longlong lVar7;
  char *pcVar8;
  longlong *plVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  longlong lVar13;
  char **ppcVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong *plVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  char **ppcVar20;
  ulonglong in_R9;
  longlong lVar21;
  undefined1 auStack_1b8 [48];
  undefined8 local_188;
  longlong *local_180;
  longlong *local_178;
  longlong local_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148 [2];
  basic_streambuf<char,std::char_traits<char>_> local_138 [8];
  basic_istream<char,std::char_traits<char>_> local_130 [152];
  basic_ios<char,std::char_traits<char>_> local_98 [96];
  ulonglong local_38;
  
  local_188 = 0xfffffffffffffffe;
  local_38 = DAT_18000e008 ^ (ulonglong)auStack_1b8;
  uVar12 = 0;
  uVar18 = 0x110;
  memset(local_148,0,0x110);
  FUN_180001920((basic_istream<char,std::char_traits<char>_> *)local_148);
  local_158 = 0;
  uStack_150 = 0xf;
  local_168 = 0;
  FUN_180003de0(0x18000a690,uVar12,uVar18,in_R9);
  bVar2 = std::basic_ios<char,std::char_traits<char>_>::widen
                    ((basic_ios<char,std::char_traits<char>_> *)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)),'\n');
  uVar19 = (ulonglong)bVar2;
  pbVar6 = FUN_180002b40((basic_istream<char,std::char_traits<char>_> *)local_148,(longlong *)&local_168,bVar2);
  lVar13 = (longlong)*(int *)(*(longlong *)pbVar6 + 4);
  if (((byte)pbVar6[lVar13 + 0x10] & 6) == 0) {
    lVar21 = 0;
    do {
      local_180 = (longlong *)0x0;
      local_178 = (longlong *)0x0;
      local_170 = 0;
      FUN_180003f20((longlong *)&local_180,(undefined8 *)&local_168);
      plVar17 = local_180;
      if (1 < (ulonglong)((longlong)local_178 - (longlong)local_180 >> 5)) {
        uVar19 = local_180[3];
        plVar9 = local_180;
        if (0xf < uVar19) {
          plVar9 = (longlong *)*local_180;
        }
        lVar13 = local_180[2];
        if ((lVar13 == 0xd) && (lVar7 = lVar13, iVar3 = memcmp(plVar9,"ExpRewardTime",0xd), iVar3 == 0)) {
          plVar9 = plVar17 + 4;
          if (0xf < (ulonglong)plVar17[7]) {
            plVar9 = (longlong *)*plVar9;
          }
          DAT_18000eae0 = atoi((char *)plVar9);
          FUN_180003de0(0x18000a6d0,(ulonglong)DAT_18000eae0,lVar7,in_R9);
          plVar17 = local_180;
        }
        else {
          plVar9 = plVar17;
          if (0xf < uVar19) {
            plVar9 = (longlong *)*plVar17;
          }
          if ((lVar13 == 0x13) && (lVar7 = lVar13, iVar3 = memcmp(plVar9,"PrizeRewardMultiply",0x13), iVar3 == 0)) {
            plVar9 = plVar17 + 4;
            if (0xf < (ulonglong)plVar17[7]) {
              plVar9 = (longlong *)*plVar9;
            }
            DAT_18000eae4 = atoi((char *)plVar9);
            FUN_180003de0(0x18000a710,(ulonglong)DAT_18000eae4,lVar7,in_R9);
            plVar17 = local_180;
          }
          else {
            plVar9 = plVar17;
            if (0xf < uVar19) {
              plVar9 = (longlong *)*plVar17;
            }
            uVar5 = 0;
            if ((lVar13 == 0x10) && (iVar3 = memcmp(plVar9,"AllowRedeemEquip",0x10), iVar3 == 0)) {
              pbVar16 = (byte *)(plVar17 + 4);
              in_R9 = plVar17[7];
              pbVar15 = pbVar16;
              if (0xf < in_R9) {
                pbVar15 = *(byte **)pbVar16;
              }
              ppcVar20 = (char **)plVar17[6];
              lVar13 = lVar21;
              if (ppcVar20 == (char **)0x4) {
                do {
                  lVar7 = lVar13 + 1;
                  if (pbVar15[lVar13] != (&DAT_18000a988)[lVar13]) {
                    uVar4 = -(uint)(pbVar15[lVar13] < (byte)(&DAT_18000a988)[lVar13]) | 1;
                    break;
                  }
                  lVar13 = lVar7;
                  uVar4 = uVar5;
                } while (lVar7 != 4);
                if (uVar4 != 0) goto LAB_180001296;
LAB_18000133a:
                DAT_18000ead1 = '\x01';
              }
              else {
LAB_180001296:
                pbVar15 = pbVar16;
                if (0xf < in_R9) {
                  pbVar15 = *(byte **)pbVar16;
                }
                lVar13 = lVar21;
                if (ppcVar20 == (char **)0x4) {
                  do {
                    lVar7 = lVar13 + 1;
                    if (pbVar15[lVar13] != (&DAT_18000a74c)[lVar13]) {
                      uVar4 = -(uint)(pbVar15[lVar13] < (byte)(&DAT_18000a74c)[lVar13]) | 1;
                      break;
                    }
                    lVar13 = lVar7;
                    uVar4 = uVar5;
                  } while (lVar7 != 4);
                  if (uVar4 == 0) goto LAB_18000133a;
                }
                pbVar15 = pbVar16;
                if (0xf < in_R9) {
                  pbVar15 = *(byte **)pbVar16;
                }
                lVar13 = lVar21;
                if (ppcVar20 == (char **)0x4) {
                  do {
                    lVar7 = lVar13 + 1;
                    if (pbVar15[lVar13] != (&DAT_18000a754)[lVar13]) {
                      uVar4 = -(uint)(pbVar15[lVar13] < (byte)(&DAT_18000a754)[lVar13]) | 1;
                      break;
                    }
                    lVar13 = lVar7;
                    uVar4 = uVar5;
                  } while (lVar7 != 4);
                  if (uVar4 == 0) goto LAB_18000133a;
                }
                if (0xf < in_R9) {
                  pbVar16 = *(byte **)pbVar16;
                }
                if (ppcVar20 == (char **)0x1) {
                  if (*pbVar16 != 0x31) {
                    uVar5 = -(uint)(*pbVar16 < 0x31) | 1;
                  }
                  if (uVar5 == 0) goto LAB_18000133a;
                }
                DAT_18000ead1 = '\0';
              }
              ppcVar14 = (char **)"False";
              if (DAT_18000ead1 != '\0') {
                ppcVar14 = (char **)&DAT_18000a74c;
              }
              pcVar8 = "Allow Equipment Redeeming : %s.";
LAB_180001604:
              FUN_180003de0((longlong)pcVar8,ppcVar14,ppcVar20,in_R9);
              plVar17 = local_180;
            }
            else {
              plVar9 = plVar17;
              if (0xf < uVar19) {
                plVar9 = (longlong *)*plVar17;
              }
              if ((lVar13 == 0x11) && (lVar7 = lVar13, iVar3 = memcmp(plVar9,"MeteorFirstSocket",0x11), iVar3 == 0)) {
                plVar9 = plVar17 + 4;
                if (0xf < (ulonglong)plVar17[7]) {
                  plVar9 = (longlong *)*plVar9;
                }
                DAT_18000eadc = atoi((char *)plVar9);
                FUN_180003de0(0x18000a7a0,(ulonglong)DAT_18000eadc,lVar7,in_R9);
                plVar17 = local_180;
              }
              else {
                plVar9 = plVar17;
                if (0xf < uVar19) {
                  plVar9 = (longlong *)*plVar17;
                }
                if ((lVar13 != 0x12) || (lVar7 = lVar13, iVar3 = memcmp(plVar9,"MeteorSecondSocket",0x12), iVar3 != 0)) {
                  plVar9 = plVar17;
                  if (0xf < uVar19) {
                    plVar9 = (longlong *)*plVar17;
                  }
                  if ((lVar13 == 0xd) && (lVar7 = lVar13, iVar3 = memcmp(plVar9,"QualitySocket",0xd), iVar3 == 0)) {
                    plVar9 = plVar17 + 4;
                    if (0xf < (ulonglong)plVar17[7]) {
                      plVar9 = (longlong *)*plVar9;
                    }
                    DAT_18000ead4 = atoi((char *)plVar9);
                    FUN_180003de0(0x18000a800,(ulonglong)DAT_18000ead4,lVar7,in_R9);
                    plVar17 = local_180;
                    goto LAB_18000160e;
                  }
                  plVar9 = plVar17;
                  if (0xf < uVar19) {
                    plVar9 = (longlong *)*plVar17;
                  }
                  if ((lVar13 == 0xd) && (iVar3 = memcmp(plVar9,"ForceMerchant",0xd), iVar3 == 0)) {
                    pbVar16 = (byte *)(plVar17 + 4);
                    in_R9 = plVar17[7];
                    pbVar15 = pbVar16;
                    if (0xf < in_R9) {
                      pbVar15 = *(byte **)pbVar16;
                    }
                    ppcVar20 = (char **)plVar17[6];
                    lVar13 = lVar21;
                    if (ppcVar20 == (char **)0x4) {
                      do {
                        lVar7 = lVar13 + 1;
                        if (pbVar15[lVar13] != (&DAT_18000a988)[lVar13]) {
                          uVar4 = -(uint)(pbVar15[lVar13] < (byte)(&DAT_18000a988)[lVar13]) | 1;
                          break;
                        }
                        lVar13 = lVar7;
                        uVar4 = uVar5;
                      } while (lVar7 != 4);
                      if (uVar4 != 0) goto LAB_1800014d6;
LAB_18000157a:
                      DAT_18000ead0 = '\x01';
                    }
                    else {
LAB_1800014d6:
                      pbVar15 = pbVar16;
                      if (0xf < in_R9) {
                        pbVar15 = *(byte **)pbVar16;
                      }
                      lVar13 = lVar21;
                      if (ppcVar20 == (char **)0x4) {
                        do {
                          lVar7 = lVar13 + 1;
                          if (pbVar15[lVar13] != (&DAT_18000a74c)[lVar13]) {
                            uVar4 = -(uint)(pbVar15[lVar13] < (byte)(&DAT_18000a74c)[lVar13]) | 1;
                            break;
                          }
                          lVar13 = lVar7;
                          uVar4 = uVar5;
                        } while (lVar7 != 4);
                        if (uVar4 == 0) goto LAB_18000157a;
                      }
                      pbVar15 = pbVar16;
                      if (0xf < in_R9) {
                        pbVar15 = *(byte **)pbVar16;
                      }
                      lVar13 = lVar21;
                      if (ppcVar20 == (char **)0x4) {
                        do {
                          lVar7 = lVar13 + 1;
                          if (pbVar15[lVar13] != (&DAT_18000a754)[lVar13]) {
                            uVar4 = -(uint)(pbVar15[lVar13] < (byte)(&DAT_18000a754)[lVar13]) | 1;
                            break;
                          }
                          lVar13 = lVar7;
                          uVar4 = uVar5;
                        } while (lVar7 != 4);
                        if (uVar4 == 0) goto LAB_18000157a;
                      }
                      if (0xf < in_R9) {
                        pbVar16 = *(byte **)pbVar16;
                      }
                      if (ppcVar20 == (char **)0x1) {
                        if (*pbVar16 != 0x31) {
                          uVar5 = -(uint)(*pbVar16 < 0x31) | 1;
                        }
                        if (uVar5 == 0) goto LAB_18000157a;
                      }
                      DAT_18000ead0 = '\0';
                    }
                    ppcVar14 = (char **)"False";
                    if (DAT_18000ead0 != '\0') {
                      ppcVar14 = (char **)&DAT_18000a74c;
                    }
                    pcVar8 = "Force Merchant : %s.";
                  }
                  else {
                    plVar9 = plVar17;
                    if (0xf < uVar19) {
                      plVar9 = (longlong *)*plVar17;
                    }
                    if ((lVar13 != 0xb) || (iVar3 = memcmp(plVar9,"BlowfishKey",0xb), iVar3 != 0)) goto LAB_18000160e;
                    ppcVar14 = (char **)(plVar17 + 4);
                    ppcVar20 = ppcVar14;
                    if (ppcVar14 != &DAT_18000e068) {
                      if (0xf < (ulonglong)plVar17[7]) {
                        ppcVar14 = (char **)*ppcVar14;
                      }
                      ppcVar20 = (char **)plVar17[6];
                      FUN_1800033a0((longlong *)&DAT_18000e068,ppcVar14,(size_t)ppcVar20);
                    }
                    ppcVar14 = &DAT_18000e068;
                    if (0xf < DAT_18000e080) {
                      ppcVar14 = (char **)DAT_18000e068;
                    }
                    pcVar8 = "Blowfish Key : %s.";
                  }
                  goto LAB_180001604;
                }
                plVar9 = plVar17 + 4;
                if (0xf < (ulonglong)plVar17[7]) {
                  plVar9 = (longlong *)*plVar9;
                }
                DAT_18000ead8 = atoi((char *)plVar9);
                FUN_180003de0(0x18000a7d0,(ulonglong)DAT_18000ead8,lVar7,in_R9);
                plVar17 = local_180;
              }
            }
          }
        }
      }
LAB_18000160e:
      plVar1 = local_178;
      plVar9 = plVar17;
      if (plVar17 != (longlong *)0x0) {
        for (; plVar17 != plVar1; plVar17 = plVar17 + 4) {
          if (0xf < (ulonglong)plVar17[3]) {
            pvVar11 = (void *)*plVar17;
            pvVar10 = pvVar11;
            if ((0xfff < plVar17[3] + 1U) && (pvVar10 = *(void **)((longlong)pvVar11 + -8), 0x1f < (ulonglong)((longlong)pvVar11 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar10);
          }
          plVar17[2] = 0;
          plVar17[3] = 0xf;
          *(undefined1 *)plVar17 = 0;
          plVar9 = local_180;
        }
        plVar17 = plVar9;
        if ((0xfff < (local_170 - (longlong)plVar9 & 0xffffffffffffffe0U)) &&
           (plVar17 = (longlong *)plVar9[-1], (undefined1 *)0x1f < (undefined1 *)((longlong)plVar9 + (-8 - (longlong)plVar17)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(plVar17);
      }
      bVar2 = std::basic_ios<char,std::char_traits<char>_>::widen
                        ((basic_ios<char,std::char_traits<char>_> *)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)),'\n');
      uVar19 = (ulonglong)bVar2;
      pbVar6 = FUN_180002b40((basic_istream<char,std::char_traits<char>_> *)local_148,(longlong *)&local_168,bVar2);
      lVar13 = (longlong)*(int *)(*(longlong *)pbVar6 + 4);
    } while (((byte)pbVar6[lVar13 + 0x10] & 6) == 0);
  }
  FUN_180003de0(0x18000a870,lVar13,uVar19,in_R9);
  if (0xf < uStack_150) {
    pvVar10 = (void *)CONCAT71(uStack_167,local_168);
    pvVar11 = pvVar10;
    if ((0xfff < uStack_150 + 1) && (pvVar11 = *(void **)((longlong)pvVar10 + -8), 0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar11);
  }
  *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) = std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4) + -4) = *(int *)(local_148[0] + 4) + -0xb0;
  FUN_180002480(local_138);
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>(local_130);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_98);
  return;
}




void FUN_1800017c0(longlong *param_1)

{
  basic_ios<char,std::char_traits<char>_> *this;
  
  this = (basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x16);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0xb0) = std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0xb4) = *(int *)(*param_1 + 4) + -0xb0;
  FUN_180002480((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 2));
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>((basic_istream<char,std::char_traits<char>_> *)(param_1 + 3));
                    /* WARNING: Could not recover jumptable at 0x00018000181e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(this);
  return;
}




void FUN_180001830(undefined8 *param_1)

{
  void *pvVar1;
  void *_Memory;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      do {
        if (0xf < (ulonglong)plVar2[3]) {
          pvVar1 = (void *)*plVar2;
          _Memory = pvVar1;
          if ((0xfff < plVar2[3] + 1U) && (_Memory = *(void **)((longlong)pvVar1 + -8), 0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
        plVar2[2] = 0;
        plVar2[3] = 0xf;
        *(undefined1 *)plVar2 = 0;
        plVar2 = plVar2 + 4;
      } while (plVar2 != plVar3);
      plVar2 = (longlong *)*param_1;
    }
    plVar3 = plVar2;
    if ((0xfff < (param_1[2] - (longlong)plVar2 & 0xffffffffffffffe0U)) &&
       (plVar3 = (longlong *)plVar2[-1], (undefined1 *)0x1f < (undefined1 *)((longlong)plVar2 + (-8 - (longlong)plVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




basic_istream<char,std::char_traits<char>_> * FUN_180001920(basic_istream<char,std::char_traits<char>_> *param_1)

{
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  
  *(undefined **)param_1 = &DAT_18000a960;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0xb0));
  pbVar1 = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>(param_1,pbVar1,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) = std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) = *(int *)(*(longlong *)param_1 + 4) + -0xb0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>(pbVar1);
  *(undefined ***)pbVar1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  param_1[0x8c] = (basic_istream<char,std::char_traits<char>_>)0x0;
  param_1[0x81] = (basic_istream<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(pbVar1);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x84) = DAT_18000eac8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  pbVar1 = FUN_1800028f0(pbVar1);
  if (pbVar1 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate((basic_ios<char,std::char_traits<char>_> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  }
  return param_1;
}




void FUN_180001a20(basic_streambuf<char,std::char_traits<char>_> *param_1,locale *param_2)

{
  bool bVar1;
  _Facet_base *this;
  
  this = FUN_180002a20(param_2);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(_Facet_base **)(param_1 + 0x68) = this;
                    /* WARNING: Could not recover jumptable at 0x000180001a69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
  return;
}




undefined8 FUN_180001a70(longlong *param_1)

{
  int iVar1;
  
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if (iVar1 != -1) {
      iVar1 = fflush((FILE *)param_1[0x10]);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}




basic_streambuf<char,std::char_traits<char>_> * FUN_180001ac0(basic_streambuf<char,std::char_traits<char>_> *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
  if (*(FILE **)(param_1 + 0x80) != (FILE *)0x0) {
    if ((param_2 == (char *)0x0) && (param_3 == 0)) {
      iVar1 = 4;
    }
    else {
      iVar1 = 0;
    }
    iVar1 = setvbuf(*(FILE **)(param_1 + 0x80),param_2,iVar1,param_3);
    if (iVar1 == 0) {
      FUN_180002830(param_1,*(longlong *)(param_1 + 0x80),1);
      return param_1;
    }
  }
  return (basic_streambuf<char,std::char_traits<char>_> *)0x0;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180001b20(basic_filebuf<char,std::char_traits<char>_> *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong _Offset;
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_18000e008 ^ (ulonglong)auStack_48;
  local_28 = param_3[1];
  _Offset = *param_3;
  if ((((*(longlong *)(param_1 + 0x80) != 0) && (uVar3 = FUN_180002650((longlong *)param_1), (char)uVar3 != '\0')) &&
      (iVar2 = fsetpos(*(FILE **)(param_1 + 0x80),&local_28), iVar2 == 0)) &&
     (((_Offset == 0 || (iVar2 = _fseeki64(*(FILE **)(param_1 + 0x80),_Offset,1), iVar2 == 0)) &&
      (iVar2 = fgetpos(*(FILE **)(param_1 + 0x80),&local_28), iVar2 == 0)))) {
    *(longlong *)(param_1 + 0x74) = param_3[2];
    std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x74);
    param_2[1] = local_28;
    *param_2 = 0;
    param_2[2] = uVar1;
    return param_2;
  }
  *param_2 = *(undefined8 *)_BADOFF_exref;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180001c10(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  fpos_t local_38;
  ulonglong local_30;
  
  local_30 = DAT_18000e008 ^ (ulonglong)auStack_58;
  if (((*(longlong **)param_1[7] == param_1 + 0xe) && (param_4 == 1)) && (param_1[0xd] == 0)) {
    param_3 = param_3 + -1;
  }
  if ((((param_1[0x10] != 0) && (uVar5 = FUN_180002650(param_1), (char)uVar5 != '\0')) &&
      (((param_3 == 0 && (param_4 == 1)) || (iVar4 = _fseeki64((FILE *)param_1[0x10],param_3,param_4), iVar4 == 0)))) &&
     (iVar4 = fgetpos((FILE *)param_1[0x10],&local_38), iVar4 == 0)) {
    if (*(longlong **)param_1[3] == param_1 + 0xe) {
      lVar1 = param_1[0x11];
      lVar2 = param_1[0x12];
      *(longlong *)param_1[3] = lVar1;
      *(longlong *)param_1[7] = lVar1;
      *(int *)param_1[10] = (int)lVar2 - (int)lVar1;
    }
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x74);
    param_2[1] = local_38;
    param_2[2] = uVar3;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = *(undefined8 *)_BADOFF_exref;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_180001d20(longlong param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  FILE *_File;
  void *_Memory;
  uint uVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined1 auStackY_98 [32];
  char *local_50;
  byte *local_48;
  byte local_40;
  char local_3f [7];
  byte local_38;
  undefined7 uStack_37;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_18000e008 ^ (ulonglong)auStackY_98;
  uVar10 = **(ulonglong **)(param_1 + 0x38);
  if (uVar10 != 0) {
    iVar4 = **(int **)(param_1 + 0x50);
    if (uVar10 < uVar10 + (longlong)iVar4) {
      **(int **)(param_1 + 0x50) = iVar4 + -1;
      pbVar6 = (byte *)**(longlong **)(param_1 + 0x38);
      **(longlong **)(param_1 + 0x38) = (longlong)(pbVar6 + 1);
      return (uint)*pbVar6;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      lVar8 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar8;
      **(longlong **)(param_1 + 0x38) = lVar8;
      **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar8;
    }
    _File = *(FILE **)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      uVar3 = fgetc(_File);
      uVar7 = uVar3 & 0xff;
      if (uVar3 == 0xffffffff) {
        uVar7 = 0xffffffff;
      }
    }
    else {
      local_28 = 0;
      local_20 = 0xf;
      local_38 = 0;
LAB_180001e07:
      iVar4 = fgetc(_File);
      uVar10 = local_28;
      if (iVar4 != -1) {
        if (local_20 == local_28) {
          FUN_1800031e0((undefined8 *)&local_38,1,local_28,1,(byte)iVar4);
        }
        else {
          pbVar6 = &local_38;
          if (0xf < local_20) {
            pbVar6 = (byte *)CONCAT71(uStack_37,local_38);
          }
          pbVar9 = pbVar6 + local_28;
          local_28 = local_28 + 1;
          *pbVar9 = (byte)iVar4;
          pbVar6[uVar10 + 1] = 0;
        }
        pbVar6 = &local_38;
        if (0xf < local_20) {
          pbVar6 = (byte *)CONCAT71(uStack_37,local_38);
        }
        pbVar9 = &local_38;
        if (0xf < local_20) {
          pbVar9 = (byte *)CONCAT71(uStack_37,local_38);
        }
        iVar4 = std::codecvt<char,char,_Mbstatet>::in
                          (*(codecvt<char,char,_Mbstatet> **)(param_1 + 0x68),(_Mbstatet *)(param_1 + 0x74),(char *)pbVar9,(char *)(pbVar6 + local_28),&local_50
                           ,(char *)&local_40,local_3f,(char **)&local_48);
        if (-1 < iVar4) {
          if (iVar4 < 2) {
            if (local_48 == &local_40) {
              pbVar6 = &local_38;
              if (0xf < local_20) {
                pbVar6 = (byte *)CONCAT71(uStack_37,local_38);
              }
              uVar10 = (longlong)local_50 - (longlong)pbVar6;
              if (local_28 < (ulonglong)((longlong)local_50 - (longlong)pbVar6)) {
                uVar10 = local_28;
              }
              pbVar6 = &local_38;
              if (0xf < local_20) {
                pbVar6 = (byte *)CONCAT71(uStack_37,local_38);
              }
              local_28 = local_28 - uVar10;
              memmove(pbVar6,pbVar6 + uVar10,local_28 + 1);
              goto LAB_180001f5a;
            }
            pbVar6 = &local_38;
            if (0xf < local_20) {
              pbVar6 = (byte *)CONCAT71(uStack_37,local_38);
            }
            iVar4 = ((int)local_28 - (int)local_50) + (int)pbVar6;
            lVar8 = (longlong)iVar4;
            if (0 < iVar4) {
              do {
                lVar8 = lVar8 + -1;
                ungetc((int)local_50[lVar8],*(FILE **)(param_1 + 0x80));
              } while (0 < lVar8);
            }
            uVar7 = (uint)local_40;
            goto LAB_180001fba;
          }
          if (iVar4 == 3) {
            if (local_28 == 0) goto LAB_180001f5a;
            pbVar6 = &local_38;
            if ((local_20 < 0x10) || (pbVar6 = (byte *)CONCAT71(uStack_37,local_38), pbVar6 != (byte *)0x0)) {
              local_40 = *pbVar6;
              uVar7 = (uint)local_40;
            }
            else {
              local_40 = 0;
              piVar5 = _errno();
              *piVar5 = 0x16;
              _invalid_parameter_noinfo();
              uVar7 = (uint)local_40;
            }
            goto LAB_180001fba;
          }
        }
      }
      uVar7 = 0xffffffff;
LAB_180001fba:
      if (0xf < local_20) {
        pvVar2 = (void *)CONCAT71(uStack_37,local_38);
        _Memory = pvVar2;
        if ((0xfff < local_20 + 1) && (_Memory = *(void **)((longlong)pvVar2 + -8), 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
    }
  }
  return uVar7;
LAB_180001f5a:
  _File = *(FILE **)(param_1 + 0x80);
  goto LAB_180001e07;
}




ulonglong FUN_180002020(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[10])) {
    return (ulonglong)*pbVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if ((int)uVar2 == -1) {
    return uVar2;
  }
  (**(code **)(*param_1 + 0x20))(param_1,uVar2 & 0xffffffff);
  return uVar2 & 0xffffffff;
}




uint FUN_180002090(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  uVar2 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar2 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar2)) && ((param_2 == 0xffffffff || (*(byte *)(uVar2 - 1) == param_2)))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    return param_2;
  }
  if ((*(FILE **)(param_1 + 0x80) != (FILE *)0x0) && (param_2 != 0xffffffff)) {
    if ((*(longlong *)(param_1 + 0x68) == 0) && (iVar4 = ungetc(param_2 & 0xff,*(FILE **)(param_1 + 0x80)), iVar4 != -1)) {
      return param_2;
    }
    puVar1 = (undefined1 *)(param_1 + 0x70);
    if ((undefined1 *)**(longlong **)(param_1 + 0x38) != puVar1) {
      *puVar1 = (char)param_2;
      puVar3 = (undefined1 *)**(longlong **)(param_1 + 0x18);
      if (puVar3 != puVar1) {
        *(undefined1 **)(param_1 + 0x88) = puVar3;
        *(longlong *)(param_1 + 0x90) = (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
      }
      **(longlong **)(param_1 + 0x18) = (longlong)puVar1;
      **(longlong **)(param_1 + 0x38) = (longlong)puVar1;
      **(int **)(param_1 + 0x50) = ((int)param_1 - (int)puVar1) + 0x71;
      return param_2;
    }
  }
  return 0xffffffff;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180002180(longlong param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  size_t sVar6;
  char ******ppppppcVar7;
  size_t _Count;
  int local_res10;
  undefined1 auStackY_a8 [32];
  char *local_60;
  char *local_58;
  char local_50;
  char local_4f [7];
  char *****local_48 [2];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_18000e008 ^ (ulonglong)auStackY_a8;
  if (param_2 != -1) {
    uVar1 = **(ulonglong **)(param_1 + 0x40);
    local_50 = (char)param_2;
    if (uVar1 != 0) {
      iVar5 = **(int **)(param_1 + 0x58);
      if (uVar1 < uVar1 + (longlong)iVar5) {
        **(int **)(param_1 + 0x58) = iVar5 + -1;
        pcVar2 = (char *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(pcVar2 + 1);
        *pcVar2 = local_50;
        return local_res10;
      }
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        uVar3 = *(undefined8 *)(param_1 + 0x90);
        lVar4 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar4;
        **(longlong **)(param_1 + 0x38) = lVar4;
        **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar4;
      }
      if (*(longlong *)(param_1 + 0x68) == 0) {
        fputc((int)local_50,*(FILE **)(param_1 + 0x80));
      }
      else {
        FUN_1800030a0((longlong *)local_48);
        while( true ) {
          ppppppcVar7 = local_48;
          if (0xf < local_30) {
            ppppppcVar7 = (char ******)local_48[0];
          }
          iVar5 = std::codecvt<char,char,_Mbstatet>::out
                            (*(codecvt<char,char,_Mbstatet> **)(param_1 + 0x68),(_Mbstatet *)(param_1 + 0x74),&local_50,local_4f,&local_58,(char *)ppppppcVar7,
                             (char *)((longlong)ppppppcVar7 + local_38),&local_60);
          if (iVar5 < 0) goto LAB_1800023d4;
          if (1 < iVar5) break;
          ppppppcVar7 = local_48;
          if (0xf < local_30) {
            ppppppcVar7 = (char ******)local_48[0];
          }
          _Count = (longlong)local_60 - (longlong)ppppppcVar7;
          if (_Count != 0) {
            ppppppcVar7 = local_48;
            if (0xf < local_30) {
              ppppppcVar7 = (char ******)local_48[0];
            }
            sVar6 = fwrite(ppppppcVar7,1,_Count,*(FILE **)(param_1 + 0x80));
            if (_Count != sVar6) goto LAB_1800023d4;
          }
          uVar1 = local_38;
          *(undefined1 *)(param_1 + 0x71) = 1;
          if (local_58 != &local_50) goto LAB_1800023d4;
          if (_Count == 0) {
            if (0x1f < local_38) goto LAB_1800023d4;
            if (local_30 - local_38 < 8) {
              FUN_1800031e0(local_48,8,local_30,8,'\0');
            }
            else {
              ppppppcVar7 = local_48;
              if (0xf < local_30) {
                ppppppcVar7 = (char ******)local_48[0];
              }
              pcVar2 = (char *)((longlong)ppppppcVar7 + local_38);
              local_38 = local_38 + 8;
              pcVar2[0] = '\0';
              pcVar2[1] = '\0';
              pcVar2[2] = '\0';
              pcVar2[3] = '\0';
              pcVar2[4] = '\0';
              pcVar2[5] = '\0';
              pcVar2[6] = '\0';
              pcVar2[7] = '\0';
              *(char *)((longlong)ppppppcVar7 + uVar1 + 8) = '\0';
            }
          }
        }
        if (iVar5 == 3) {
          fputc((int)local_50,*(FILE **)(param_1 + 0x80));
        }
LAB_1800023d4:
        if (0xf < local_30) {
          ppppppcVar7 = (char ******)local_48[0];
          if ((0xfff < local_30 + 1) &&
             (ppppppcVar7 = (char ******)local_48[0][-1], (char *)0x1f < (char *)((longlong)local_48[0] + (-8 - (longlong)ppppppcVar7)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(ppppppcVar7);
        }
      }
    }
  }
  return local_res10;
}




void FUN_180002440(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018000244c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _unlock_file();
    return;
  }
  return;
}




void FUN_180002460(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018000246c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _lock_file();
    return;
  }
  return;
}




void FUN_180002480(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((*(longlong *)(param_1 + 0x80) != 0) && ((basic_streambuf<char,std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) == param_1 + 0x70)) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    lVar2 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar2;
    **(longlong **)(param_1 + 0x38) = lVar2;
    **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
  }
  if (param_1[0x7c] != (basic_streambuf<char,std::char_traits<char>_>)0x0) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_180002650((longlong *)param_1);
      fclose(*(FILE **)(param_1 + 0x80));
    }
    param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
    param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x74) = DAT_18000eac8;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000252c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>(param_1);
  return;
}




basic_ios<char,std::char_traits<char>_> * FUN_180002540(basic_ios<char,std::char_traits<char>_> *param_1,uint param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb0) = std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb4) = *(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb0;
  FUN_180002480((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + -0xa0));
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)(param_1 + -0x98));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1 + -0xb0);
  }
  return param_1 + -0xb0;
}




basic_streambuf<char,std::char_traits<char>_> * FUN_1800025e0(basic_streambuf<char,std::char_traits<char>_> *param_1,uint param_2)

{
  FUN_180002480(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    private: void __cdecl std::basic_filebuf<char,struct std::char_traits<char> >::_Reset_back(void) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back(basic_filebuf<char,std::char_traits<char>_> *this)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((basic_filebuf<char,std::char_traits<char>_> *)**(longlong **)(this + 0x18) == this + 0x70) {
    lVar1 = *(longlong *)(this + 0x88);
    uVar2 = *(undefined8 *)(this + 0x90);
    **(longlong **)(this + 0x18) = lVar1;
    **(longlong **)(this + 0x38) = lVar1;
    **(int **)(this + 0x50) = (int)uVar2 - (int)lVar1;
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180002650(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  char ****ppppcVar5;
  char ****ppppcVar6;
  char ****ppppcVar7;
  undefined1 auStackY_78 [32];
  char *local_40;
  char ***local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_18000e008 ^ (ulonglong)auStackY_78;
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x71) == '\0')) {
    uVar4 = CONCAT71((int7)(local_18 >> 8),1);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if ((int)uVar4 == -1) {
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      FUN_1800030a0((longlong *)local_38);
      while( true ) {
        ppppcVar6 = local_38;
        if (0xf < local_20) {
          ppppcVar6 = (char ****)local_38[0];
        }
        iVar3 = std::codecvt<char,char,_Mbstatet>::unshift
                          ((codecvt<char,char,_Mbstatet> *)param_1[0xd],(_Mbstatet *)((longlong)param_1 + 0x74),(char *)ppppcVar6,
                           (char *)((longlong)ppppcVar6 + local_28),&local_40);
        if (iVar3 != 0) break;
        *(undefined1 *)((longlong)param_1 + 0x71) = 0;
LAB_180002717:
        ppppcVar7 = local_38;
        if (0xf < local_20) {
          ppppcVar7 = (char ****)local_38[0];
        }
        ppppcVar7 = (char ****)(local_40 + -(longlong)ppppcVar7);
        if (ppppcVar7 != (char ****)0x0) {
          ppppcVar5 = local_38;
          if (0xf < local_20) {
            ppppcVar5 = (char ****)local_38[0];
          }
          ppppcVar6 = ppppcVar7;
          ppppcVar5 = (char ****)fwrite(ppppcVar5,1,(size_t)ppppcVar7,(FILE *)param_1[0x10]);
          if (ppppcVar7 != ppppcVar5) goto LAB_18000270c;
        }
        lVar2 = local_28;
        if (*(char *)((longlong)param_1 + 0x71) == '\0') goto LAB_1800027c2;
        if (ppppcVar7 == (char ****)0x0) {
          if (local_20 - local_28 < 8) {
            FUN_1800031e0(local_38,8,ppppcVar6,8,'\0');
          }
          else {
            ppppcVar6 = local_38;
            if (0xf < local_20) {
              ppppcVar6 = (char ****)local_38[0];
            }
            puVar1 = (undefined8 *)((longlong)ppppcVar6 + local_28);
            local_28 = local_28 + 8;
            *puVar1 = 0;
            *(undefined1 *)((longlong)ppppcVar6 + lVar2 + 8) = 0;
          }
        }
      }
      if (iVar3 == 1) goto LAB_180002717;
      if (iVar3 != 3) {
LAB_18000270c:
        uVar4 = 0;
        goto LAB_1800027c4;
      }
LAB_1800027c2:
      uVar4 = 1;
LAB_1800027c4:
      if (0xf < local_20) {
        ppppcVar6 = (char ****)local_38[0];
        if ((0xfff < local_20 + 1) && (ppppcVar6 = (char ****)local_38[0][-1], 0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)ppppcVar6)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(ppppcVar6);
      }
    }
  }
  return uVar4;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180002830(basic_streambuf<char,std::char_traits<char>_> *param_1,longlong param_2,int param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_18000e008 ^ (ulonglong)auStack_48;
  param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)(param_3 == 1);
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
  if (param_2 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    _get_stream_buffer_pointers(param_2,&local_28,&local_20,&local_18);
    *(undefined8 *)(param_1 + 0x18) = local_28;
    *(undefined8 *)(param_1 + 0x20) = local_28;
    *(undefined8 *)(param_1 + 0x38) = local_20;
    *(undefined8 *)(param_1 + 0x40) = local_20;
    *(undefined8 *)(param_1 + 0x50) = local_18;
    *(undefined8 *)(param_1 + 0x58) = local_18;
  }
  *(undefined8 *)(param_1 + 0x74) = DAT_18000eac8;
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}




basic_streambuf<char,std::char_traits<char>_> * FUN_1800028f0(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  _iobuf *p_Var2;
  locale *plVar3;
  _Facet_base *this;
  undefined8 *puVar4;
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    p_Var2 = std::_Fiopen("ServerGameConfig.ini",1,0x40);
    if (p_Var2 != (_iobuf *)0x0) {
      FUN_180002830(param_1,(longlong)p_Var2,1);
      plVar3 = (locale *)std::basic_streambuf<char,std::char_traits<char>_>::getloc(param_1);
      this = FUN_180002a20(plVar3);
      bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this);
      if (bVar1) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      else {
        *(_Facet_base **)(param_1 + 0x68) = this;
        std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
      }
      if (local_18 != (longlong *)0x0) {
        puVar4 = (undefined8 *)(**(code **)(*local_18 + 0x10))();
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      return param_1;
    }
  }
  return (basic_streambuf<char,std::char_traits<char>_> *)0x0;
}




void FUN_1800029d0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 << 5)) && (_Memory = *(void **)((longlong)param_2 + -8), 0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

_Facet_base * FUN_180002a20(locale *param_1)

{
  longlong lVar1;
  __uint64 _Var2;
  _Locimp *p_Var3;
  _Facet_base *p_Var4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40 [3];
  _Facet_base *local_28;
  _Lockit local_20 [8];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_18000e008 ^ (ulonglong)auStack_68;
  std::_Lockit::_Lockit(local_20,0);
  local_28 = DAT_18000eac0;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    p_Var4 = *(_Facet_base **)(*(longlong *)(lVar1 + 0x10) + _Var2 * 8);
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_180002ae9;
  }
  else {
    p_Var4 = (_Facet_base *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_180002aa8:
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_180002ae9;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      p_Var4 = *(_Facet_base **)(*(longlong *)(p_Var3 + 0x10) + _Var2 * 8);
      goto LAB_180002aa8;
    }
  }
  p_Var4 = local_28;
  if (local_28 == (_Facet_base *)0x0) {
    _Var2 = std::codecvt<char,char,_Mbstatet>::_Getcat((facet **)&local_28,param_1);
    p_Var4 = local_28;
    if (_Var2 == 0xffffffffffffffff) {
      FUN_180002f30(local_40);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_40,(ThrowInfo *)&DAT_18000c800);
    }
    DAT_18000eac0 = local_28;
    (**(code **)(*(longlong *)local_28 + 8))(local_28);
    std::_Facet_Register(p_Var4);
  }
LAB_180002ae9:
  std::_Lockit::~_Lockit(local_20);
  return p_Var4;
}




basic_istream<char,std::char_traits<char>_> * FUN_180002b40(basic_istream<char,std::char_traits<char>_> *param_1,longlong *param_2,byte param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  
  uVar5 = 0;
  bVar3 = false;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8))();
  }
  bVar4 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,true);
  if (bVar4) {
    param_2[2] = 0;
    plVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar6 = (longlong *)*param_2;
    }
    *(undefined1 *)plVar6 = 0;
    uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    while (uVar5 != 0xffffffff) {
      if (uVar5 == param_3) {
        bVar3 = true;
        std::basic_streambuf<char,std::char_traits<char>_>::sbumpc
                  (*(basic_streambuf<char,std::char_traits<char>_> **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
        uVar5 = 0;
        goto LAB_180002c2d;
      }
      uVar1 = param_2[2];
      if (0x7ffffffffffffffe < uVar1) {
        uVar5 = 2;
        goto LAB_180002c2d;
      }
      uVar2 = param_2[3];
      if (uVar1 < uVar2) {
        param_2[2] = uVar1 + 1;
        plVar6 = param_2;
        if (0xf < uVar2) {
          plVar6 = (longlong *)*param_2;
        }
        *(char *)((longlong)plVar6 + uVar1) = (char)uVar5;
        *(undefined1 *)((longlong)plVar6 + uVar1 + 1) = 0;
      }
      else {
        FUN_180002dd0(param_2,(ulonglong)uVar5,uVar2,(char)uVar5);
      }
      bVar3 = true;
      uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    }
    uVar5 = 1;
LAB_180002c2d:
    if (bVar3) goto LAB_180002c9f;
  }
  uVar5 = uVar5 | 2;
LAB_180002c9f:
  std::basic_ios<char,std::char_traits<char>_>::setstate((basic_ios<char,std::char_traits<char>_> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),uVar5,false);
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 0x10))();
  }
  return param_1;
}




void FUN_180002cf0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




void FUN_180002d20(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




undefined8 FUN_180002d50(undefined8 param_1)

{
  return param_1;
}




void FUN_180002d60(undefined8 param_1,longlong *param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < (ulonglong)param_2[3]) {
    pvVar1 = (void *)*param_2;
    _Memory = pvVar1;
    if ((0xfff < param_2[3] + 1U) && (_Memory = *(void **)((longlong)pvVar1 + -8), 0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return;
}




void FUN_180002dc0(longlong param_1,uint param_2)

{
  FUN_180002540((basic_ios<char,std::char_traits<char>_> *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}




undefined8 * FUN_180002dd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Src;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Memory;
  void *_Dst;
  
  _Size = param_1[2];
  if (_Size == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180003380();
  }
  uVar1 = param_1[3];
  uVar3 = _Size + 1 | 0xf;
  uVar5 = 0x7fffffffffffffff;
  if (((uVar3 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) && (uVar4 = (uVar1 >> 1) + uVar1, uVar5 = uVar3, uVar3 < uVar4)) {
    uVar5 = uVar4;
  }
  uVar3 = uVar5 + 1;
  if (uVar5 == 0xffffffffffffffff) {
    uVar3 = 0xffffffffffffffff;
  }
  if (uVar3 < 0x1000) {
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_18000550c(uVar3);
    }
  }
  else {
    uVar4 = uVar3 + 0x27;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar2 = FUN_18000550c(uVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
  param_1[2] = _Size + 1;
  param_1[3] = uVar5;
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_4;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_4;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
    _Memory = _Src;
    if ((0xfff < uVar1 + 1) && (_Memory = *(void **)((longlong)_Src + -8), 0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}




undefined8 * FUN_180002f30(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}




undefined8 * FUN_180002f70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180002fc0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}




char * FUN_180003000(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




undefined8 * FUN_180003020(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}




void FUN_180003060(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}




longlong * FUN_1800030a0(longlong *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *_Memory;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)0x0;
  param_1[3] = 0xf;
  param_1[2] = 0;
  *(undefined1 *)param_1 = 0;
  uVar1 = param_1[3];
  if (uVar1 < 8) {
    uVar7 = 0x7fffffffffffffff;
    if (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1)) {
      uVar4 = (uVar1 >> 1) + uVar1;
      uVar7 = 0xf;
      if (0xf < uVar4) {
        uVar7 = uVar4;
      }
    }
    uVar4 = uVar7 + 1;
    if (uVar7 == 0xffffffffffffffff) {
      uVar4 = 0xffffffffffffffff;
    }
    if (uVar4 < 0x1000) {
      if (uVar4 != 0) {
        puVar8 = (undefined8 *)FUN_18000550c(uVar4);
      }
    }
    else {
      uVar6 = uVar4 + 0x27;
      if (uVar6 <= uVar4) {
        uVar6 = 0xffffffffffffffff;
      }
      lVar5 = FUN_18000550c(uVar6);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      puVar8 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      puVar8[-1] = lVar5;
    }
    param_1[2] = 8;
    param_1[3] = uVar7;
    *puVar8 = 0;
    *(undefined1 *)(puVar8 + 1) = 0;
    if (0xf < uVar1) {
      pvVar2 = (void *)*param_1;
      _Memory = pvVar2;
      if ((0xfff < uVar1 + 1) && (_Memory = *(void **)((longlong)pvVar2 + -8), 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = (longlong)puVar8;
  }
  else {
    plVar3 = param_1;
    if (0xf < uVar1) {
      plVar3 = (longlong *)*param_1;
    }
    param_1[2] = 8;
    *plVar3 = 0;
    *(undefined1 *)(plVar3 + 1) = 0;
  }
  return param_1;
}




undefined8 * FUN_1800031e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,size_t param_4,char param_5)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Src;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Memory;
  void *_Dst;
  
  _Size = param_1[2];
  if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003380();
  }
  uVar1 = param_1[3];
  uVar3 = param_2 + _Size | 0xf;
  uVar5 = 0x7fffffffffffffff;
  if (((uVar3 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) && (uVar4 = (uVar1 >> 1) + uVar1, uVar5 = uVar3, uVar3 < uVar4)) {
    uVar5 = uVar4;
  }
  uVar3 = uVar5 + 1;
  if (uVar5 == 0xffffffffffffffff) {
    uVar3 = 0xffffffffffffffff;
  }
  if (uVar3 < 0x1000) {
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_18000550c(uVar3);
    }
  }
  else {
    uVar4 = uVar3 + 0x27;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar2 = FUN_18000550c(uVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
  param_1[2] = param_2 + _Size;
  param_1[3] = uVar5;
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memset((void *)((longlong)_Dst + _Size),(int)param_5,param_4);
    *(undefined1 *)((longlong)_Dst + _Size + param_4) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    memset((void *)((longlong)_Dst + _Size),(int)param_5,param_4);
    *(undefined1 *)((longlong)_Dst + _Size + param_4) = 0;
    _Memory = _Src;
    if ((0xfff < uVar1 + 1) && (_Memory = *(void **)((longlong)_Src + -8), 0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}




void FUN_180003380(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




longlong * FUN_1800033a0(longlong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Memory;
  void *_Dst;
  longlong *_Dst_00;
  ulonglong uVar6;
  
  uVar1 = param_1[3];
  if (param_3 <= uVar1) {
    _Dst_00 = param_1;
    if (0xf < uVar1) {
      _Dst_00 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst_00,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)_Dst_00) = 0;
    return param_1;
  }
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180003380();
  }
  uVar4 = param_3 | 0xf;
  uVar6 = 0x7fffffffffffffff;
  if (((uVar4 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) && (uVar5 = (uVar1 >> 1) + uVar1, uVar6 = uVar4, uVar4 < uVar5)) {
    uVar6 = uVar5;
  }
  uVar4 = uVar6 + 1;
  if (uVar6 == 0xffffffffffffffff) {
    uVar4 = 0xffffffffffffffff;
  }
  if (uVar4 < 0x1000) {
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_18000550c(uVar4);
    }
  }
  else {
    uVar5 = uVar4 + 0x27;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffffffffffff;
    }
    lVar3 = FUN_18000550c(uVar5);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar3;
  }
  param_1[2] = param_3;
  param_1[3] = uVar6;
  memcpy(_Dst,param_2,param_3);
  *(undefined1 *)(param_3 + (longlong)_Dst) = 0;
  if (0xf < uVar1) {
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < uVar1 + 1) && (_Memory = *(void **)((longlong)pvVar2 + -8), 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)_Dst;
  return param_1;
}




void FUN_180003500(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < param_1[3] + 1U) && (_Memory = *(void **)((longlong)pvVar1 + -8), 0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003560(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = param_2;
  uVar4 = param_3;
  uVar1 = Ordinal_9(*(undefined2 *)(param_2 + 2));
  if (uVar1 == 0x268d) {
    uVar2 = Ordinal_11("127.0.0.1");
    *(undefined4 *)(param_2 + 4) = uVar2;
    FUN_180003de0(0x18000a9a0,lVar3,uVar4,param_4);
  }
  else if (10000 < uVar1) {
    FUN_180003de0(0x18000a9d0,(ulonglong)uVar1,uVar4,param_4);
    uVar2 = Ordinal_11("127.0.0.1");
    *(undefined4 *)(param_2 + 4) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800035eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_18000eaf0)(param_1,param_2,param_3 & 0xffffffff);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180003600(undefined8 param_1,undefined8 param_2,size_t param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  LPCSTR ***ppppCVar4;
  LPCSTR ****pppppCVar5;
  HMODULE hLibModule;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *_Src;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  LPCSTR ***local_50;
  longlong lStack_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  plVar3 = DAT_18000eaf8;
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_18000e008 ^ (ulonglong)auStack_78;
  plVar7 = (longlong *)*DAT_18000eaf8;
  if (plVar7 != DAT_18000eaf8) {
    do {
      _Src = plVar7 + 2;
      local_40 = 0;
      local_38 = 0;
      uVar2 = plVar7[4];
      if (0xf < (ulonglong)plVar7[5]) {
        _Src = (longlong *)*_Src;
      }
      if (uVar2 < 0x10) {
        local_50 = (LPCSTR ***)*_Src;
        lStack_48 = _Src[1];
        uVar8 = 0xf;
      }
      else {
        uVar8 = uVar2 | 0xf;
        if (0x7fffffffffffffff < uVar8) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar1 = uVar8 + 1;
        if (uVar1 < 0x1000) {
          pppppCVar5 = (LPCSTR ****)0x0;
          if (uVar1 != 0) {
            pppppCVar5 = (LPCSTR ****)FUN_18000550c(uVar1);
          }
        }
        else {
          uVar6 = uVar8 + 0x28;
          if (uVar8 + 0x28 <= uVar1) {
            uVar6 = 0xffffffffffffffff;
          }
          ppppCVar4 = (LPCSTR ***)FUN_18000550c(uVar6);
          if (ppppCVar4 == (LPCSTR ***)0x0) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          pppppCVar5 = (LPCSTR ****)((longlong)ppppCVar4 + 0x27U & 0xffffffffffffffe0);
          pppppCVar5[-1] = ppppCVar4;
        }
        param_3 = uVar2 + 1;
        local_50 = (LPCSTR ***)pppppCVar5;
        memcpy(pppppCVar5,_Src,param_3);
      }
      pppppCVar5 = &local_50;
      if (0xf < uVar8) {
        pppppCVar5 = (LPCSTR ****)local_50;
      }
      local_40 = uVar2;
      local_38 = uVar8;
      hLibModule = GetModuleHandleA((LPCSTR)pppppCVar5);
      if (hLibModule != (HMODULE)0x0) {
        FreeLibrary(hLibModule);
      }
      pppppCVar5 = &local_50;
      if (0xf < local_38) {
        pppppCVar5 = (LPCSTR ****)local_50;
      }
      FUN_180003de0(0x18000a9f8,pppppCVar5,param_3,param_4);
      if (0xf < local_38) {
        pppppCVar5 = (LPCSTR ****)local_50;
        if ((0xfff < local_38 + 1) && (pppppCVar5 = (LPCSTR ****)local_50[-1], (LPCSTR)0x1f < (LPCSTR)((longlong)local_50 + (-8 - (longlong)pppppCVar5)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pppppCVar5);
      }
      plVar7 = (longlong *)*plVar7;
    } while (plVar7 != plVar3);
  }
  return;
}




void FUN_1800037d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18000550c(0x30);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  return;
}




void _guard_check_icall(void)

{
  return;
}




undefined8 * FUN_180003800(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  
  _Dst = (void *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar2 < 0x10) {
    uVar3 = param_2[1];
    uVar6 = 0xf;
    *param_1 = *param_2;
    param_1[1] = uVar3;
  }
  else {
    uVar6 = uVar2 | 0xf;
    if (0x7fffffffffffffff < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = uVar6 + 1;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        _Dst = (void *)FUN_18000550c(uVar1);
      }
    }
    else {
      uVar5 = uVar6 + 0x28;
      if (uVar5 <= uVar1) {
        uVar5 = 0xffffffffffffffff;
      }
      lVar4 = FUN_18000550c(uVar5);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
    }
    *param_1 = _Dst;
    memcpy(_Dst,param_2,uVar2 + 1);
  }
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800038d0(undefined8 param_1,ulonglong param_2,size_t param_3,undefined8 param_4)

{
  int iVar1;
  BOOL BVar2;
  HANDLE pvVar3;
  FILE *pFVar4;
  undefined8 *puVar5;
  HANDLE hObject;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStackY_48 [32];
  DWORD local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_18000e008 ^ (ulonglong)auStackY_48;
  if ((int)param_2 != 0) {
    uVar6 = (int)param_2 - 1;
    param_2 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      AllocConsole();
      pvVar3 = GetStdHandle(0xfffffff5);
      iVar1 = _open_osfhandle((ulonglong)pvVar3 & 0xffffffff,0x4000);
      pFVar4 = _fdopen(iVar1,"w");
      puVar5 = (undefined8 *)__acrt_iob_func(1);
      *puVar5 = pFVar4->_ptr;
      pFVar4 = (FILE *)__acrt_iob_func(1);
      setvbuf(pFVar4,(char *)0x0,4,0);
      pvVar3 = GetStdHandle(0xfffffff6);
      iVar1 = _open_osfhandle((ulonglong)pvVar3 & 0xffffffff,0x4000);
      pFVar4 = _fdopen(iVar1,"r");
      puVar5 = (undefined8 *)__acrt_iob_func(0);
      *puVar5 = pFVar4->_ptr;
      pFVar4 = (FILE *)__acrt_iob_func(0);
      setvbuf(pFVar4,(char *)0x0,4,0);
      pvVar3 = GetStdHandle(0xfffffff4);
      iVar1 = _open_osfhandle((ulonglong)pvVar3 & 0xffffffff,0x4000);
      pFVar4 = _fdopen(iVar1,"w");
      puVar5 = (undefined8 *)__acrt_iob_func(2);
      *puVar5 = pFVar4->_ptr;
      pFVar4 = (FILE *)__acrt_iob_func(2);
      setvbuf(pFVar4,(char *)0x0,4,0);
      pFVar4 = (FILE *)__acrt_iob_func(0);
      freopen("conin$","r+t",pFVar4);
      pFVar4 = (FILE *)__acrt_iob_func(1);
      freopen("conout$","w+t",pFVar4);
      pFVar4 = (FILE *)__acrt_iob_func(2);
      freopen("conout$","w+t",pFVar4);
      FUN_180001060();
      FUN_180008010();
      pvVar3 = GetCurrentThread();
      FUN_180008540(pvVar3);
      FUN_180007840((longlong *)&DAT_18000eaf0,(char *)FUN_180003560);
      FUN_180008090();
      FUN_180008010();
      pvVar3 = GetCurrentThread();
      FUN_180008540(pvVar3);
      FUN_180007840(&DAT_18000e058,(char *)FUN_180003d60);
      FUN_180008090();
      FUN_180008010();
      pvVar3 = GetCurrentThread();
      FUN_180008540(pvVar3);
      FUN_180007840((longlong *)&DAT_18000e048,(char *)FUN_180003c70);
      FUN_180008090();
      puVar5 = &DAT_18000e068;
      if (0xf < DAT_18000e080) {
        puVar5 = DAT_18000e068;
      }
      pvVar3 = GetCurrentProcess();
      uVar9 = 0x40;
      puVar8 = (undefined8 *)0x10;
      BVar2 = VirtualProtectEx(pvVar3,(LPVOID)0x14079ae58,0x10,0x40,local_18);
      if (BVar2 != 0) {
        hObject = OpenProcess(0x1fffff,0,(DWORD)pvVar3);
        uVar9 = 0x10;
        WriteProcessMemory(pvVar3,(LPVOID)0x14079ae58,puVar5,0x10,(SIZE_T *)0x0);
        CloseHandle(hObject);
        puVar8 = puVar5;
      }
      FUN_180003c80(DAT_18000eadc,(LPVOID)0x140358472);
      FUN_180003c80(DAT_18000ead8,(LPVOID)0x140358572);
      uVar7 = 0x1403577d7;
      FUN_180003c80(DAT_18000ead4,(LPVOID)0x1403577d7);
      FUN_180003de0(0x18000aa30,uVar7,puVar8,uVar9);
      FUN_180008010();
      pvVar3 = GetCurrentThread();
      FUN_180008540(pvVar3);
      FUN_180007840((longlong *)&DAT_18000e048,(char *)FUN_180003c70);
      FUN_180008090();
      FUN_180008010();
      pvVar3 = GetCurrentThread();
      FUN_180008540(pvVar3);
      FUN_180007840((longlong *)&DAT_18000e060,&LAB_180004fc0);
      FUN_180008090();
      atexit((_func_5014 *)&LAB_180003c60);
      return 1;
    }
    if (uVar6 != 2) {
      return 1;
    }
  }
  FUN_180003600(param_1,param_2,param_3,param_4);
  return 1;
}




undefined8 FUN_180003c70(void)

{
  return 1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180003c80(undefined4 param_1,LPVOID param_2)

{
  BOOL BVar1;
  undefined4 *lpBuffer;
  HANDLE hProcess;
  undefined4 extraout_var;
  HANDLE hObject;
  undefined4 extraout_var_00;
  ulonglong uVar2;
  undefined4 extraout_var_01;
  undefined1 auStackY_48 [32];
  DWORD local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_18000e008 ^ (ulonglong)auStackY_48;
  lpBuffer = (undefined4 *)thunk_FUN_18000550c(4);
  *lpBuffer = param_1;
  hProcess = GetCurrentProcess();
  BVar1 = VirtualProtectEx(hProcess,param_2,4,0x40,local_18);
  uVar2 = CONCAT44(extraout_var,BVar1);
  if (BVar1 != 0) {
    hObject = OpenProcess(0x1fffff,0,(DWORD)hProcess);
    BVar1 = WriteProcessMemory(hProcess,param_2,lpBuffer,4,(SIZE_T *)0x0);
    if (BVar1 != 0) {
      BVar1 = CloseHandle(hObject);
      return CONCAT71((int7)(CONCAT44(extraout_var_01,BVar1) >> 8),1);
    }
    BVar1 = CloseHandle(hObject);
    uVar2 = CONCAT44(extraout_var_00,BVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}




undefined1 FUN_180003d60(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = (*DAT_18000e058)();
  if (DAT_18000eae4 != 300) {
    *(int *)((longlong)param_3 + 8) = DAT_18000eae4;
  }
  if (DAT_18000eae0 != 100) {
    *(int *)((longlong)param_3 + 0x10) = (*(int *)((longlong)param_3 + 8) / 100) * DAT_18000eae0;
  }
  return uVar1;
}




undefined4 FUN_180003dc0(undefined4 param_1)

{
  return param_1;
}




undefined * FUN_180003dd0(void)

{
  return &DAT_18000eb10;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180003de0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong *puVar3;
  basic_ostream<char,std::char_traits<char>_> *this;
  void *_Memory;
  longlong *plVar4;
  size_t sVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_478 [32];
  undefined8 local_458;
  undefined8 *local_450;
  longlong local_448 [2];
  ulonglong local_438;
  ulonglong uStack_430;
  undefined8 local_428;
  char local_418 [1024];
  ulonglong local_18;
  size_t sVar6;
  
  if (param_1 != 0) {
    local_428 = 0xfffffffffffffffe;
    local_18 = DAT_18000e008 ^ (ulonglong)auStack_478;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    puVar3 = (ulonglong *)FUN_180003dd0();
    local_450 = &local_res10;
    local_458 = 0;
    __stdio_common_vsprintf(*puVar3 | 1,local_418,0xffffffffffffffff,param_1);
    local_438 = 0;
    uStack_430 = 0xf;
    local_448[0]._0_1_ = 0;
    sVar6 = 0xffffffffffffffff;
    do {
      sVar5 = sVar6 + 1;
      lVar2 = sVar6 + 1;
      sVar6 = sVar5;
    } while (local_418[lVar2] != '\0');
    FUN_1800033a0(local_448,local_418,sVar5);
    plVar4 = local_448;
    if (0xf < uStack_430) {
      plVar4 = (longlong *)CONCAT71(local_448[0]._1_7_,(undefined1)local_448[0]);
    }
    this = FUN_180004d80((basic_ostream<char,std::char_traits<char>_> *)cout_exref,(char *)plVar4,local_438);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,FUN_1800040c0);
    if (0xf < uStack_430) {
      pvVar1 = (void *)CONCAT71(local_448[0]._1_7_,(undefined1)local_448[0]);
      _Memory = pvVar1;
      if ((0xfff < uStack_430 + 1) && (_Memory = *(void **)((longlong)pvVar1 + -8), 0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180003f20(longlong *param_1,undefined8 *param_2)

{
  basic_istream<char,std::char_traits<char>_> bVar1;
  void *pvVar2;
  basic_istream<char,std::char_traits<char>_> *pbVar3;
  void *_Memory;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined8 local_130;
  ulonglong uStack_128;
  int iStack_11c;
  longlong local_118 [3];
  basic_streambuf<char,std::char_traits<char>_> local_100 [8];
  basic_iostream<char,std::char_traits<char>_> local_f8 [120];
  basic_ios<char,std::char_traits<char>_> local_80 [104];
  ulonglong local_18;
  
  local_150 = 0xfffffffffffffffe;
  local_18 = DAT_18000e008 ^ (ulonglong)auStack_178;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_158 = 1;
  local_148 = param_1;
  memset(local_118,0,0xf8);
  FUN_180004160((basic_iostream<char,std::char_traits<char>_> *)local_118,param_2);
  local_130 = 0;
  uStack_128 = 0xf;
  local_140 = 0;
  pbVar3 = FUN_180002b40((basic_istream<char,std::char_traits<char>_> *)local_118,(longlong *)&local_140,0x3d);
  bVar1 = pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10];
  while (((byte)bVar1 & 6) == 0) {
    FUN_180004af0(param_1,(undefined8 *)&local_140);
    pbVar3 = FUN_180002b40((basic_istream<char,std::char_traits<char>_> *)local_118,(longlong *)&local_140,0x3d);
    bVar1 = pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10];
  }
  if (0xf < uStack_128) {
    pvVar2 = (void *)CONCAT71(uStack_13f,local_140);
    _Memory = pvVar2;
    if ((0xfff < uStack_128 + 1) && (_Memory = *(void **)((longlong)pvVar2 + -8), 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118[0] + 4)) = *(int *)(local_118[0] + 4) + -0x98;
  FUN_180004950(local_100);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>(local_f8);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_80);
  return param_1;
}




basic_ostream<char,std::char_traits<char>_> * FUN_1800040c0(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,std::char_traits<char>_>::widen((basic_ios<char,std::char_traits<char>_> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<char,std::char_traits<char>_>::put(param_1,cVar1);
  std::basic_ostream<char,std::char_traits<char>_>::flush(param_1);
  return param_1;
}




void FUN_180004100(longlong *param_1)

{
  basic_ios<char,std::char_traits<char>_> *this;
  
  this = (basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x13);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0x98) = std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x9c) = *(int *)(*param_1 + 4) + -0x98;
  FUN_180004950((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 3));
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_1 + 4));
                    /* WARNING: Could not recover jumptable at 0x000180004158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(this);
  return;
}




basic_iostream<char,std::char_traits<char>_> * FUN_180004160(basic_iostream<char,std::char_traits<char>_> *param_1,undefined8 *param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *this;
  ulonglong _Size;
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *pvVar4;
  void *_Dst;
  
  *(undefined **)param_1 = &DAT_18000ab20;
  *(undefined **)(param_1 + 0x10) = &DAT_18000aa88;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x98));
  this = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x18);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>(param_1,this);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) = std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) = *(int *)(*(longlong *)param_1 + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>(this);
  *(undefined ***)this = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  _Size = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (_Size != 0) {
    if (_Size < 0x1000) {
      _Dst = (void *)FUN_18000550c(_Size);
    }
    else {
      uVar3 = _Size + 0x27;
      if (uVar3 <= _Size) {
        uVar3 = 0xffffffffffffffff;
      }
      lVar2 = FUN_18000550c(uVar3);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar2;
    }
    memcpy(_Dst,param_2,_Size);
    *(void **)(param_1 + 0x80) = (void *)((longlong)_Dst + _Size);
    uVar1 = *(uint *)(param_1 + 0x88);
    if ((uVar1 & 4) == 0) {
      **(undefined8 **)(param_1 + 0x30) = _Dst;
      **(undefined8 **)(param_1 + 0x50) = _Dst;
      **(int **)(param_1 + 0x68) = (int)_Size;
      uVar1 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar1 & 2) == 0) {
      pvVar4 = (void *)((longlong)_Dst + _Size);
      if ((uVar1 & 0x18) == 0) {
        pvVar4 = _Dst;
      }
      **(undefined8 **)(param_1 + 0x38) = _Dst;
      **(longlong **)(param_1 + 0x58) = (longlong)pvVar4;
      **(int **)(param_1 + 0x70) = ((int)_Dst - (int)pvVar4) + (int)_Size;
      if (**(longlong **)(param_1 + 0x50) == 0) {
        **(undefined8 **)(param_1 + 0x30) = _Dst;
        **(undefined8 **)(param_1 + 0x50) = 0;
        **(int **)(param_1 + 0x68) = (int)_Dst;
      }
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  }
  return param_1;
}




longlong * FUN_180004300(longlong param_1,longlong *param_2,longlong *param_3,byte param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_3[1] + *param_3;
  uVar1 = **(ulonglong **)(param_1 + 0x40);
  if ((uVar1 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar1)) {
    *(ulonglong *)(param_1 + 0x68) = uVar1;
  }
  lVar2 = *(longlong *)_BADOFF_exref;
  lVar5 = lVar4;
  if (lVar4 != lVar2) {
    lVar5 = lVar2;
    if (((param_4 & 1) == 0) || (**(longlong **)(param_1 + 0x38) == 0)) {
      if (((param_4 & 2) != 0) &&
         (((uVar1 = **(ulonglong **)(param_1 + 0x40), uVar1 != 0 && (-1 < lVar4)) && (lVar4 <= *(longlong *)(param_1 + 0x68) - **(longlong **)(param_1 + 0x18)))
         )) {
        iVar3 = ((int)**(longlong **)(param_1 + 0x18) - (int)uVar1) + (int)lVar4;
        **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) - iVar3;
        **(longlong **)(param_1 + 0x40) = **(longlong **)(param_1 + 0x40) + (longlong)iVar3;
        lVar5 = lVar4;
      }
    }
    else if ((-1 < lVar4) && (lVar4 <= *(longlong *)(param_1 + 0x68) - **(longlong **)(param_1 + 0x18))) {
      iVar3 = ((int)**(longlong **)(param_1 + 0x18) - (int)**(longlong **)(param_1 + 0x38)) + (int)lVar4;
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) - iVar3;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + (longlong)iVar3;
      lVar5 = lVar4;
      if ((param_4 & 2) != 0) {
        lVar2 = **(longlong **)(param_1 + 0x40);
        if (lVar2 != 0) {
          iVar3 = **(int **)(param_1 + 0x58);
          lVar5 = **(longlong **)(param_1 + 0x38);
          **(longlong **)(param_1 + 0x40) = lVar5;
          **(int **)(param_1 + 0x58) = (iVar3 + (int)lVar2) - (int)lVar5;
          lVar5 = lVar4;
        }
      }
    }
  }
  *param_2 = lVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}




longlong * FUN_180004410(longlong param_1,longlong *param_2,longlong param_3,int param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = **(ulonglong **)(param_1 + 0x40);
  if ((uVar4 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar4)) {
    *(ulonglong *)(param_1 + 0x68) = uVar4;
  }
  if (((param_5 & 1) == 0) || (uVar4 = **(ulonglong **)(param_1 + 0x38), uVar4 == 0)) {
    if (((param_5 & 2) == 0) || (uVar4 = **(ulonglong **)(param_1 + 0x40), uVar4 == 0)) {
      if (param_3 != 0) {
        param_3 = *(longlong *)_BADOFF_exref;
      }
      goto LAB_18000459a;
    }
    if (param_4 == 2) {
      param_3 = param_3 + (*(longlong *)(param_1 + 0x68) - **(longlong **)(param_1 + 0x18));
    }
    else if (param_4 == 1) {
      param_3 = param_3 + (uVar4 - **(longlong **)(param_1 + 0x18));
    }
    else if (param_4 != 0) {
      param_3 = *(longlong *)_BADOFF_exref;
    }
    if ((-1 < param_3) && (param_3 <= *(longlong *)(param_1 + 0x68) - **(longlong **)(param_1 + 0x18))) {
      iVar3 = ((int)param_3 - (int)uVar4) + (int)**(longlong **)(param_1 + 0x18);
      **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) - iVar3;
      **(longlong **)(param_1 + 0x40) = **(longlong **)(param_1 + 0x40) + (longlong)iVar3;
      goto LAB_18000459a;
    }
  }
  else {
    if (param_4 == 2) {
      param_3 = param_3 + (*(longlong *)(param_1 + 0x68) - **(longlong **)(param_1 + 0x18));
    }
    else if (param_4 == 1) {
      if ((param_5 & 2) == 0) {
        param_3 = param_3 + (uVar4 - **(longlong **)(param_1 + 0x18));
      }
      else {
LAB_180004495:
        param_3 = *(longlong *)_BADOFF_exref;
        uVar4 = uVar4 & 0xffffffff;
      }
    }
    else if (param_4 != 0) goto LAB_180004495;
    if ((-1 < param_3) && (param_3 <= *(longlong *)(param_1 + 0x68) - **(longlong **)(param_1 + 0x18))) {
      iVar3 = ((int)param_3 - (int)uVar4) + (int)**(longlong **)(param_1 + 0x18);
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) - iVar3;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + (longlong)iVar3;
      if ((param_5 & 2) != 0) {
        lVar1 = **(longlong **)(param_1 + 0x40);
        if (lVar1 != 0) {
          iVar3 = **(int **)(param_1 + 0x58);
          lVar2 = **(longlong **)(param_1 + 0x38);
          **(longlong **)(param_1 + 0x40) = lVar2;
          **(int **)(param_1 + 0x58) = (iVar3 + (int)lVar1) - (int)lVar2;
        }
      }
      goto LAB_18000459a;
    }
  }
  param_3 = *(longlong *)_BADOFF_exref;
LAB_18000459a:
  *param_2 = param_3;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}




ulonglong FUN_1800045c0(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)**(undefined8 **)(param_1 + 0x38);
  if (pbVar3 != (byte *)0x0) {
    if (pbVar3 < pbVar3 + **(int **)(param_1 + 0x50)) {
      return (ulonglong)*pbVar3;
    }
    if ((((*(byte *)(param_1 + 0x70) & 4) == 0) && (pbVar1 = (byte *)**(undefined8 **)(param_1 + 0x40), pbVar1 != (byte *)0x0)) &&
       ((pbVar3 < pbVar1 || (pbVar3 < *(byte **)(param_1 + 0x68))))) {
      pbVar2 = *(byte **)(param_1 + 0x68);
      if (pbVar2 < pbVar1) {
        *(byte **)(param_1 + 0x68) = pbVar1;
        pbVar2 = (byte *)((ulonglong)pbVar1 & 0xffffffff);
        pbVar3 = (byte *)**(undefined8 **)(param_1 + 0x38);
      }
      **(int **)(param_1 + 0x50) = (int)pbVar2 - (int)pbVar3;
      return (ulonglong)*(byte *)**(undefined8 **)(param_1 + 0x38);
    }
  }
  return 0xffffffff;
}




int FUN_180004630(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar1 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar1)) &&
     ((param_2 == -1 || (((char)param_2 == *(char *)(uVar1 - 1) || ((*(byte *)(param_1 + 0x70) & 2) == 0)))))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    if (param_2 == -1) {
      param_2 = 0;
    }
    else {
      *(char *)**(undefined8 **)(param_1 + 0x38) = (char)param_2;
    }
    return param_2;
  }
  return -1;
}




ulonglong FUN_180004690(basic_streambuf<char,std::char_traits<char>_> *param_1,uint param_2)

{
  void *_Src;
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  void *pvVar8;
  ulonglong uVar9;
  
  if ((*(uint *)(param_1 + 0x70) & 2) != 0) {
    return 0xffffffffffffffff;
  }
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x70) & 8) != 0) {
    uVar5 = **(ulonglong **)(param_1 + 0x40);
    if ((uVar5 != 0) && (uVar9 = *(ulonglong *)(param_1 + 0x68), uVar5 < uVar9)) {
      iVar7 = **(int **)(param_1 + 0x58);
      **(ulonglong **)(param_1 + 0x40) = uVar9;
      **(int **)(param_1 + 0x58) = (iVar7 + (int)uVar5) - (int)uVar9;
    }
  }
  uVar5 = **(ulonglong **)(param_1 + 0x40);
  uVar9 = 0;
  if (uVar5 != 0) {
    if (uVar5 < uVar5 + (longlong)**(int **)(param_1 + 0x58)) {
      pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::_Pninc(param_1);
      *pcVar3 = (char)param_2;
      return (ulonglong)param_2;
    }
    uVar9 = (uVar5 - **(longlong **)(param_1 + 0x18)) + (longlong)**(int **)(param_1 + 0x58);
  }
  uVar5 = uVar9 >> 1;
  if (uVar5 < 0x20) {
    uVar5 = 0x20;
  }
  else if (uVar5 == 0) {
    return 0xffffffffffffffff;
  }
  do {
    if (uVar9 <= 0x7fffffff - uVar5) break;
    uVar5 = uVar5 >> 1;
  } while (uVar5 != 0);
  if (uVar5 == 0) {
    return 0xffffffffffffffff;
  }
  uVar5 = uVar5 + uVar9;
  if (uVar5 < 0x1000) {
    if (uVar5 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = (void *)FUN_18000550c(uVar5);
    }
  }
  else {
    uVar6 = uVar5 + 0x27;
    if (uVar6 <= uVar5) {
      uVar6 = 0xffffffffffffffff;
    }
    lVar4 = FUN_18000550c(uVar6);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    pvVar8 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)pvVar8 - 8) = lVar4;
  }
  _Src = (void *)**(undefined8 **)(param_1 + 0x18);
  iVar7 = (int)pvVar8;
  if ((uVar9 == 0) || (memcpy(pvVar8,_Src,uVar9), uVar9 == 0)) {
    *(void **)(param_1 + 0x68) = pvVar8;
    **(undefined8 **)(param_1 + 0x20) = pvVar8;
    **(undefined8 **)(param_1 + 0x40) = pvVar8;
    **(int **)(param_1 + 0x58) = (int)uVar5;
    uVar2 = *(uint *)(param_1 + 0x70);
    **(undefined8 **)(param_1 + 0x18) = pvVar8;
    if ((uVar2 & 4) == 0) {
      **(undefined8 **)(param_1 + 0x38) = pvVar8;
      **(undefined4 **)(param_1 + 0x50) = 1;
    }
    else {
      **(undefined8 **)(param_1 + 0x38) = 0;
      **(int **)(param_1 + 0x50) = iVar7;
    }
  }
  else {
    *(longlong *)(param_1 + 0x68) = (*(longlong *)(param_1 + 0x68) - (longlong)_Src) + (longlong)pvVar8;
    lVar4 = **(longlong **)(param_1 + 0x40);
    **(longlong **)(param_1 + 0x20) = (longlong)pvVar8 + (**(longlong **)(param_1 + 0x20) - (longlong)_Src);
    lVar4 = (lVar4 - (longlong)_Src) + (longlong)pvVar8;
    **(longlong **)(param_1 + 0x40) = lVar4;
    **(int **)(param_1 + 0x58) = (iVar7 - (int)lVar4) + (int)uVar5;
    if (((byte)param_1[0x70] & 4) == 0) {
      uVar1 = **(undefined8 **)(param_1 + 0x40);
      lVar4 = (**(longlong **)(param_1 + 0x38) - (longlong)_Src) + (longlong)pvVar8;
      **(undefined8 **)(param_1 + 0x18) = pvVar8;
      **(longlong **)(param_1 + 0x38) = lVar4;
      **(int **)(param_1 + 0x50) = ((int)uVar1 - (int)lVar4) + 1;
    }
    else {
      **(undefined8 **)(param_1 + 0x18) = pvVar8;
      **(undefined8 **)(param_1 + 0x38) = 0;
      **(int **)(param_1 + 0x50) = iVar7;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x70);
  if ((uVar2 & 1) != 0) {
    pvVar8 = _Src;
    if ((0xfff < uVar9) && (pvVar8 = *(void **)((longlong)_Src + -8), 0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
    uVar2 = *(uint *)(param_1 + 0x70);
  }
  *(uint *)(param_1 + 0x70) = uVar2 | 1;
  pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::_Pninc(param_1);
  *pcVar3 = (char)param_2;
  return (ulonglong)param_2;
}




void FUN_180004950(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  void *pvVar1;
  void *_Memory;
  longlong lVar2;
  
  *(undefined ***)param_1 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if (((byte)param_1[0x70] & 1) != 0) {
    if (**(longlong **)(param_1 + 0x40) == 0) {
      lVar2 = (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
    }
    else {
      lVar2 = (longlong)**(int **)(param_1 + 0x58) + **(longlong **)(param_1 + 0x40);
    }
    pvVar1 = (void *)**(longlong **)(param_1 + 0x18);
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(lVar2 - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8), 0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001800049f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>(param_1);
  return;
}




basic_ios<char,std::char_traits<char>_> * FUN_180004a10(basic_ios<char,std::char_traits<char>_> *param_1,uint param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x98) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x9c) = *(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x98;
  FUN_180004950((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + -0x80));
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_1 + -0x78));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1 + -0x98);
  }
  return param_1 + -0x98;
}




basic_streambuf<char,std::char_traits<char>_> * FUN_180004ab0(basic_streambuf<char,std::char_traits<char>_> *param_1,uint param_2)

{
  FUN_180004950(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180004af0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Memory;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  
  puVar11 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[2] != puVar11) {
    FUN_180003800(puVar11,param_2);
    param_1[1] = param_1[1] + 0x20;
    return;
  }
  lVar8 = (longlong)puVar11 - *param_1 >> 5;
  if (lVar8 == 0x7ffffffffffffff) {
    FUN_180004d60();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = lVar8 + 1;
  uVar6 = param_1[2] - *param_1 >> 5;
  uVar4 = uVar1;
  if ((uVar6 <= 0x7ffffffffffffff - (uVar6 >> 1)) && (uVar4 = (uVar6 >> 1) + uVar6, uVar4 < uVar1)) {
    uVar4 = uVar1;
  }
  uVar6 = uVar4 * 0x20;
  if (uVar4 < 0x800000000000000) {
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar11 = (undefined8 *)FUN_18000550c(uVar6);
      }
      goto LAB_180004c0a;
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
  }
  uVar7 = uVar6 + 0x27;
  if (uVar7 <= uVar6) {
    uVar7 = 0xffffffffffffffff;
  }
  lVar5 = FUN_18000550c(uVar7);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  puVar11 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
  puVar11[-1] = lVar5;
LAB_180004c0a:
  FUN_180003800(puVar11 + lVar8 * 4,param_2);
  FUN_180004f60((undefined8 *)*param_1,(undefined8 *)param_1[1],puVar11);
  plVar9 = (longlong *)*param_1;
  if (plVar9 != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[1];
    if (plVar9 != plVar10) {
      do {
        if (0xf < (ulonglong)plVar9[3]) {
          pvVar2 = (void *)*plVar9;
          _Memory = pvVar2;
          if ((0xfff < plVar9[3] + 1U) && (_Memory = *(void **)((longlong)pvVar2 + -8), 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        plVar9 = plVar9 + 4;
      } while (plVar9 != plVar10);
      plVar9 = (longlong *)*param_1;
    }
    plVar10 = plVar9;
    if ((0xfff < (param_1[2] - (longlong)plVar9 & 0xffffffffffffffe0U)) &&
       (plVar10 = (longlong *)plVar9[-1], (undefined1 *)0x1f < (undefined1 *)((longlong)plVar9 + (-8 - (longlong)plVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar10);
  }
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + uVar1 * 4);
  param_1[2] = (longlong)(puVar11 + uVar4 * 4);
  return;
}




void FUN_180004d10(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = std::uncaught_exceptions();
  if (iVar2 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx((basic_ostream<char,std::char_traits<char>_> *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




void FUN_180004d60(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




basic_ostream<char,std::char_traits<char>_> * FUN_180004d80(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2,ulonglong param_3)

{
  longlong *plVar1;
  basic_ostream<char,std::char_traits<char>_> *this;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = 0;
  lVar5 = *(longlong *)param_1;
  uVar4 = *(ulonglong *)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x28);
  if (((longlong)uVar4 < 1) || (uVar4 <= param_3)) {
    lVar6 = 0;
  }
  else {
    lVar6 = uVar4 - param_3;
  }
  plVar1 = *(longlong **)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    lVar5 = *(longlong *)param_1;
  }
  if (((*(int *)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x10) == 0) &&
      (this = *(basic_ostream<char,std::char_traits<char>_> **)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x50),
      this != (basic_ostream<char,std::char_traits<char>_> *)0x0)) && (this != param_1)) {
    std::basic_ostream<char,std::char_traits<char>_>::flush(this);
    lVar5 = *(longlong *)param_1;
  }
  if (*(int *)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x10) == 0) {
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) {
          iVar3 = 4;
          goto LAB_180004e80;
        }
      }
      lVar5 = *(longlong *)param_1;
    }
    uVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,std::char_traits<char>_> **)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x48),param_2,param_3);
    if (uVar4 == param_3) {
LAB_180004e80:
      do {
        if (lVar6 == 0) goto LAB_180004eab;
        iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) break;
        lVar6 = lVar6 + -1;
      } while( true );
    }
    iVar3 = 4;
LAB_180004eab:
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  else {
    iVar3 = 4;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate((basic_ios<char,std::char_traits<char>_> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar3,false);
  iVar3 = std::uncaught_exceptions();
  if (iVar3 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 0x10))();
  }
  return param_1;
}




undefined8 * FUN_180004f60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    param_3[2] = 0;
    param_3[3] = 0;
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    param_1[2] = 0;
    param_3 = param_3 + 4;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_3;
}




void FUN_180004fa8(longlong param_1,uint param_2)

{
  FUN_180004a10((basic_ios<char,std::char_traits<char>_> *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}




/* Library Function - Single Match
    public: void * __ptr64 __cdecl std::_Fac_node::`scalar deleting destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2015 Release */

void * __thiscall std::_Fac_node::_scalar_deleting_destructor_(_Fac_node *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(this + 8);
  pcVar2 = *(code **)(*plVar1 + 0x10);
  _guard_check_icall();
  puVar3 = (undefined8 *)(*pcVar2)(plVar1);
  if (puVar3 != (undefined8 *)0x0) {
    pcVar2 = *(code **)*puVar3;
    _guard_check_icall();
    (*pcVar2)(puVar3,1,in_R8,in_R9,uVar4);
  }
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}




/* Library Function - Single Match
    void __cdecl std::_Facet_Register(class std::_Facet_base * __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl std::_Facet_Register(_Facet_base *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18000550c(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_18000e490;
    puVar1[1] = param_1;
  }
  DAT_18000e490 = puVar1;
  return;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18000e008) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
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
LAB_180005142:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18000e4d8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18000e4d8;
        pvVar1 = DAT_18000e4d8;
      }
      DAT_18000e4d8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180005142;
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
    uVar3 = FUN_180003c70();
    uVar3 = _configure_narrow_argv(uVar3 & 0xffffffff);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = _initialize_narrow_environment();
  }
  else {
    uVar2 = FUN_180005a84();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




bool FUN_180005184(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800052d0(0);
  return (char)uVar1 != '\0';
}




undefined1 FUN_18000519c(void)

{
  char cVar1;
  
  cVar1 = FUN_180009860();
  if (cVar1 != '\0') {
    cVar1 = FUN_180009860();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180009860();
  }
  return 0;
}




undefined1 FUN_1800051c4(void)

{
  FUN_180009860();
  FUN_180009860();
  return 1;
}




/* Library Function - Single Match
    __scrt_dllmain_exception_filter
   
   Library: Visual Studio 2015 Release */

void __scrt_dllmain_exception_filter(undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,undefined4 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    _guard_check_icall();
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
    _execute_onexit_table(&DAT_18000e4a0);
    return;
  }
  uVar2 = FUN_180009864();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}




void FUN_180005270(void)

{
  FUN_180009860();
  FUN_180009860();
  return;
}




/* Library Function - Single Match
    __scrt_initialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_18000e4e0 = 1;
  }
  FUN_180005a84();
  cVar1 = FUN_180009860();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180009860();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180009860();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800052d0(uint param_1)

{
  byte bVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (DAT_18000e4d0 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      __scrt_fastfail(5);
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      bVar1 = 0x40 - ((byte)DAT_18000e008 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar1 | -1L << 0x40 - bVar1) ^ DAT_18000e008;
      _DAT_18000e4a0 = in_RAX;
      uRam000000018000e4a8 = in_RAX;
      _DAT_18000e4b0 = in_RAX;
      _DAT_18000e4b8 = in_RAX;
      uRam000000018000e4c0 = in_RAX;
      _DAT_18000e4c8 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18000e4a0);
      if (((int)in_RAX != 0) || (in_RAX = _initialize_onexit_table(&DAT_18000e4b8), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18000e4d0 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018000543e) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */
/* Library Function - Single Match
    __scrt_is_nonwritable_in_current_image
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

ulonglong __scrt_is_nonwritable_in_current_image(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000210; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000350; pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress), param_1 - 0x180000000U < uVar1)) goto LAB_180005427;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180005427:
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
    DAT_18000e4d8 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18000e4e0 == '\0') || (param_2 == '\0')) {
    FUN_180009860();
    FUN_180009860();
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _onexit
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  _onexit_t p_Var3;
  
  bVar2 = (byte)DAT_18000e008 & 0x3f;
  if (((DAT_18000e008 ^ _DAT_18000e4a0) >> bVar2 | (DAT_18000e008 ^ _DAT_18000e4a0) << 0x40 - bVar2) == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18000e4a0,_Func);
  }
  p_Var3 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var3 = _Func;
  }
  return p_Var3;
}




/* Library Function - Single Match
    atexit
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}




void FUN_18000550c(size_t param_1)

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
  if (param_1 != 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180005ec0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005ee0();
}




undefined8 * FUN_180005548(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




ulonglong FUN_18000557c(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined7 extraout_var;
  
  if (param_2 == 0) {
    bVar2 = FUN_1800056e8(CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != 0));
    return CONCAT71(extraout_var,bVar2);
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar1 = FUN_18000519c();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = FUN_1800051c4();
    }
    return (ulonglong)bVar1;
  }
  uVar3 = FUN_1800055cc(param_1,param_3);
  return uVar3;
}




undefined8 FUN_1800055cc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  uVar5 = __scrt_initialize_crt(0);
  if ((char)uVar5 != '\0') {
    uVar5 = __scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_18000e4d4 != 0) {
                    /* WARNING: Subroutine does not return */
      __scrt_fastfail(7);
    }
    DAT_18000e4d4 = 1;
    bVar3 = FUN_180005184();
    if (bVar3) {
      FUN_180005ff8();
      FUN_180005fb0();
      FUN_180005fd4();
      iVar4 = _initterm_e(&DAT_18000a4b0,&DAT_18000a4b8);
      if ((iVar4 == 0) && (uVar6 = __scrt_dllmain_after_initialize_c(), (char)uVar6 != '\0')) {
        _initterm(&DAT_18000a480,&DAT_18000a4a8);
        DAT_18000e4d4 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar5);
    if (!bVar2) {
      plVar7 = (longlong *)FUN_180005ff0();
      if ((*plVar7 != 0) && (uVar8 = __scrt_is_nonwritable_in_current_image((longlong)plVar7), (char)uVar8 != '\0')) {
        pcVar1 = (code *)*plVar7;
        _guard_check_icall();
        (*pcVar1)(param_1,2,param_2);
      }
      DAT_18000e4e4 = DAT_18000e4e4 + 1;
      return 1;
    }
  }
  return 0;
}




bool FUN_1800056e8(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  bool bVar5;
  
  uVar1 = (undefined1)param_1;
  if (DAT_18000e4e4 < 1) {
    bVar5 = false;
  }
  else {
    DAT_18000e4e4 = DAT_18000e4e4 + -1;
    uVar3 = __scrt_acquire_startup_lock();
    if (DAT_18000e4d4 != 2) {
                    /* WARNING: Subroutine does not return */
      __scrt_fastfail(7);
    }
    __scrt_dllmain_uninitialize_c();
    FUN_180005fc0();
    FUN_180006044();
    DAT_18000e4d4 = 0;
    FUN_180005270();
    uVar4 = (undefined7)((ulonglong)param_1 >> 8);
    __scrt_release_startup_lock((char)uVar3);
    cVar2 = __scrt_uninitialize_crt(CONCAT71(uVar4,uVar1),'\0');
    bVar5 = cVar2 != '\0';
  }
  return bVar5;
}




/* WARNING: Removing unreachable block (ram,0x000180005847) */
/* WARNING: Removing unreachable block (ram,0x0001800057ca) */
/* WARNING: Removing unreachable block (ram,0x000180005891) */

ulonglong FUN_180005778(undefined8 param_1,uint param_2,size_t param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((param_2 == 0) && (DAT_18000e4e4 < 1)) {
    uVar2 = 0;
  }
  else {
    if (param_2 - 1 < 2) {
      uVar1 = FUN_18000557c(param_1,param_2,param_3);
      if ((int)uVar1 == 0) {
        return uVar1 & 0xffffffff;
      }
    }
    uVar1 = FUN_1800038d0(param_1,(ulonglong)param_2,param_3,param_4);
    uVar2 = uVar1 & 0xffffffff;
    if ((param_2 == 1) && ((int)uVar1 == 0)) {
      FUN_1800038d0(param_1,0,param_3,param_4);
      FUN_18000557c(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = FUN_18000557c(param_1,param_2,param_3);
      uVar2 = uVar1 & 0xffffffff;
      if ((int)uVar1 != 0) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}




void entry(undefined8 param_1,uint param_2,size_t param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    FUN_180005f00();
  }
  FUN_180005778(param_1,param_2,param_3,param_4);
  return;
}




/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180005935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(pvVar1,0xc0000409);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __report_gsfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x180005966;
  capture_previous_context((PCONTEXT)&DAT_18000e590);
  _DAT_18000e500 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18000e628 = puVar3 + 0x40;
  _DAT_18000e610 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18000e4f0 = 0xc0000409;
  _DAT_18000e4f4 = 1;
  _DAT_18000e508 = 1;
  DAT_18000e510 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18000e008;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18000e010;
  *(undefined8 *)(puVar3 + -8) = 0x180005a08;
  DAT_18000e688 = _DAT_18000e500;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000a520);
  return;
}




/* Library Function - Single Match
    capture_previous_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180005b8f) */
/* WARNING: Removing unreachable block (ram,0x000180005af2) */
/* WARNING: Removing unreachable block (ram,0x000180005aae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180005a84(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  byte in_XCR0;
  
  DAT_18000e01c = 2;
  _DAT_18000e018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar7 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    _DAT_18000e020 = 0xffffffffffffffff;
    uVar6 = *puVar2 & 0xfff3ff0;
    if ((((uVar6 == 0x106c0) || (uVar6 == 0x20660)) || (uVar6 == 0x20670)) ||
       ((uVar6 - 0x30650 < 0x21 && ((0x100010001U >> ((ulonglong)(uVar6 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18000ea60 = DAT_18000ea60 | 1;
    }
  }
  if (((piVar1[1] == 0x68747541 && piVar1[2] == 0x69746e65) && piVar1[3] == 0x444d4163) && (0x6010ff < (*puVar2 & 0xff00f00))) {
    DAT_18000ea60 = DAT_18000ea60 | 4;
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar7 = *(uint *)(lVar3 + 4);
    if ((uVar7 >> 9 & 1) != 0) {
      DAT_18000ea60 = DAT_18000ea60 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18000e018 = 2;
    DAT_18000e01c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && (uVar5 = xinuse(0), (in_XCR0 & (byte)uVar5 & 6) == 6)) {
      DAT_18000e01c = 0xe;
      _DAT_18000e018 = 3;
      if ((uVar7 & 0x20) != 0) {
        _DAT_18000e018 = 5;
        DAT_18000e01c = 0x2e;
      }
    }
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2015 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18000e040 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005c4c(void)

{
  _DAT_18000ea64 = 0;
  return;
}




/* Library Function - Single Match
    __scrt_fastfail
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_fastfail(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x180005c87;
  FUN_180005c4c();
  *(undefined8 *)(puVar4 + -8) = 0x180005c98;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180005ca2;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180005cbc;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180005cfd;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),*(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180005d2f;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180005d51;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180005d72;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180005d7d;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180005d8d;
    FUN_180005c4c();
  }
  return;
}




undefined8 * FUN_180005da8(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180005de8(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180005e08(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180005e48(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180005e7c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180005ec0(void)

{
  undefined8 local_28 [5];
  
  FUN_180005de8(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000c6f8);
}




void FUN_180005ee0(void)

{
  undefined8 local_28 [5];
  
  FUN_180005e48(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000c758);
}




void FUN_180005f00(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18;
  
  if (DAT_18000e008 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18000e008 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^ CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^ (ulonglong)&local_res8) &
         0xffffffffffff;
    if (DAT_18000e008 == 0x2b992ddfa232) {
      DAT_18000e008 = 0x2b992ddfa233;
    }
  }
  DAT_18000e010 = ~DAT_18000e008;
  return;
}




void FUN_180005fb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180005fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18000ea70);
  return;
}




void FUN_180005fc0(void)

{
  __std_type_info_destroy_list(&DAT_18000ea70);
  return;
}




undefined * FUN_180005fcc(void)

{
  return &DAT_18000ea80;
}




void FUN_180005fd4(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180003dd0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180005fcc();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180005ff0(void)

{
  return &DAT_18000eb18;
}




void FUN_180005ff8(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  for (puVar2 = &DAT_18000bb58; puVar2 < &DAT_18000bb58; puVar2 = puVar2 + 1) {
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
      _guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}




void FUN_180006044(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  for (puVar2 = &DAT_18000bb68; puVar2 < &DAT_18000bb68; puVar2 = puVar2 + 1) {
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
      _guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}




longlong FUN_180006090(ulonglong param_1)

{
  undefined8 local_18;
  
  if (param_1 < 0xffffffff80000000) {
    local_18 = param_1 + 0x7ff80000;
  }
  else {
    local_18 = -0x80000;
  }
  return local_18;
}




longlong FUN_1800060d0(ulonglong param_1)

{
  undefined8 local_18;
  
  if (param_1 < 0x7ff80001) {
    local_18 = 0x80000;
  }
  else {
    local_18 = param_1 - 0x7ff80000;
  }
  return local_18;
}




byte FUN_180006110(longlong param_1,uint param_2)

{
  uint local_18;
  
  local_18 = 0;
  while( true ) {
    if (7 < local_18) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x40 + (longlong)(int)local_18) & 7) == param_2) break;
    local_18 = local_18 + 1;
  }
  return *(byte *)(param_1 + 0x40 + (longlong)(int)local_18) >> 3;
}




ulonglong FUN_180006180(longlong param_1,byte param_2)

{
  uint local_18;
  
  local_18 = 0;
  while( true ) {
    if (7 < local_18) {
      return (ulonglong)(uint7)(int7)(int3)(local_18 >> 8) << 8;
    }
    if (*(byte *)(param_1 + 0x40 + (longlong)(int)local_18) >> 3 == param_2) break;
    local_18 = local_18 + 1;
  }
  return (ulonglong)(*(byte *)(param_1 + 0x40 + (longlong)(int)local_18) & 7);
}




LPVOID FUN_1800061f0(LPCVOID param_1,longlong param_2)

{
  SIZE_T SVar1;
  LPVOID pvVar2;
  LPCVOID local_48;
  _MEMORY_BASIC_INFORMATION local_38;
  
  local_48 = (LPCVOID)FUN_180006410(param_2 - 0x10000);
  while( true ) {
    while( true ) {
      if (local_48 <= param_1) {
        return (LPVOID)0x0;
      }
      if ((local_48 < DAT_18000e030) || (DAT_18000e038 < local_48)) break;
      local_48 = (LPCVOID)((longlong)local_48 + -0x8000000);
    }
    memset(&local_38,0,0x30);
    SVar1 = VirtualQuery(local_48,&local_38,0x30);
    if (SVar1 == 0) break;
    if ((local_38.State == 0x10000) && (0xffff < local_38.RegionSize)) {
      pvVar2 = VirtualAlloc(local_48,0x10000,0x3000,0x40);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      local_48 = (LPCVOID)((longlong)local_48 + -0x10000);
    }
    else {
      local_48 = (LPCVOID)FUN_180006410((longlong)local_38.AllocationBase - 0x10000);
    }
  }
  return (LPVOID)0x0;
}




LPVOID FUN_180006300(ulonglong param_1,LPCVOID param_2)

{
  SIZE_T SVar1;
  LPVOID pvVar2;
  LPCVOID local_48;
  _MEMORY_BASIC_INFORMATION local_38;
  
  local_48 = (LPCVOID)FUN_180006450(param_1);
  while( true ) {
    while( true ) {
      if (param_2 <= local_48) {
        return (LPVOID)0x0;
      }
      if ((local_48 < DAT_18000e030) || (DAT_18000e038 < local_48)) break;
      local_48 = (LPCVOID)((longlong)local_48 + 0x8000000);
    }
    memset(&local_38,0,0x30);
    SVar1 = VirtualQuery(local_48,&local_38,0x30);
    if (SVar1 == 0) break;
    if ((local_38.State == 0x10000) && (0xffff < local_38.RegionSize)) {
      pvVar2 = VirtualAlloc(local_48,0x10000,0x3000,0x40);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      local_48 = (LPCVOID)((longlong)local_48 + 0x10000);
    }
    else {
      local_48 = (LPCVOID)FUN_180006450((longlong)local_38.BaseAddress + local_38.RegionSize);
    }
  }
  return (LPVOID)0x0;
}




ulonglong FUN_180006410(ulonglong param_1)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  if ((param_1 & 0xffff) != 0) {
    local_res8 = param_1 - (param_1 & 0xffff);
  }
  return local_res8;
}




ulonglong FUN_180006450(ulonglong param_1)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  if ((param_1 & 0xffff) != 0) {
    local_res8 = param_1 + (0x10000 - (param_1 & 0xffff));
  }
  return local_res8;
}




void * FUN_1800064a0(char *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *_Dst;
  char *pcVar3;
  int local_38;
  undefined4 *local_30;
  void *local_20;
  void *local_18;
  undefined4 *local_10;
  
  FUN_180006a00(param_1,(longlong *)&local_20,(longlong *)&local_18);
  if ((DAT_18000ea90 == (undefined4 *)0x0) && (DAT_18000ea88 != (undefined4 *)0x0)) {
    DAT_18000ea90 = DAT_18000ea88;
  }
  if ((((DAT_18000ea90 == (undefined4 *)0x0) || (*(longlong *)(DAT_18000ea90 + 4) == 0)) || (*(void **)(DAT_18000ea90 + 4) < local_20)) ||
     (local_18 < *(void **)(DAT_18000ea90 + 4))) {
    for (DAT_18000ea90 = DAT_18000ea88; DAT_18000ea90 != (undefined4 *)0x0; DAT_18000ea90 = *(undefined4 **)(DAT_18000ea90 + 2)) {
      if (((DAT_18000ea90 != (undefined4 *)0x0) && (*(longlong *)(DAT_18000ea90 + 4) != 0)) &&
         ((local_20 <= *(void **)(DAT_18000ea90 + 4) && (*(void **)(DAT_18000ea90 + 4) <= local_18)))) goto LAB_18000652c;
    }
    uVar2 = FUN_180003dc0((int)param_1);
    pcVar3 = param_1 + -(ulonglong)(uVar2 & 0xffff);
    local_30 = (undefined4 *)0x0;
    if ((char *)0x40000000 < pcVar3) {
      local_30 = FUN_1800061f0(local_20,(longlong)(pcVar3 + -0x40000000));
    }
    if ((local_30 == (undefined4 *)0x0) && (pcVar3 < (char *)0xffffffff40000000)) {
      local_30 = FUN_180006300((ulonglong)(pcVar3 + 0x40000000),local_18);
    }
    if ((local_30 == (undefined4 *)0x0) && ((char *)0x40000000 < pcVar3)) {
      local_30 = FUN_180006300((ulonglong)(pcVar3 + -0x40000000),pcVar3);
    }
    if ((local_30 == (undefined4 *)0x0) && (pcVar3 < (char *)0xffffffff40000000)) {
      local_30 = FUN_1800061f0(pcVar3,(longlong)(pcVar3 + 0x40000000));
    }
    if (local_30 == (undefined4 *)0x0) {
      local_30 = FUN_1800061f0(local_20,(longlong)pcVar3);
    }
    if (local_30 == (undefined4 *)0x0) {
      local_30 = FUN_180006300((ulonglong)pcVar3,local_18);
    }
    if (local_30 == (undefined4 *)0x0) {
      return (void *)0x0;
    }
    DAT_18000ea90 = local_30;
    *local_30 = 0x52727464;
    *(undefined8 *)(DAT_18000ea90 + 4) = 0;
    *(undefined4 **)(DAT_18000ea90 + 2) = DAT_18000ea88;
    puVar1 = DAT_18000ea90;
    DAT_18000ea88 = DAT_18000ea90;
    local_10 = (undefined4 *)0x0;
    for (local_38 = 0x2a8; 1 < local_38; local_38 = local_38 + -1) {
      *(undefined4 **)(puVar1 + (longlong)local_38 * 0x18 + 0x2a) = local_10;
      local_10 = puVar1 + (longlong)local_38 * 0x18 + 0x18;
    }
    *(undefined4 **)(DAT_18000ea90 + 4) = local_10;
  }
LAB_18000652c:
  _Dst = *(void **)(DAT_18000ea90 + 4);
  if ((_Dst < local_20) || (local_18 < _Dst)) {
    _Dst = (void *)0x0;
  }
  else {
    *(undefined8 *)(DAT_18000ea90 + 4) = *(undefined8 *)((longlong)_Dst + 0x48);
    memset(_Dst,0xcc,0x60);
  }
  return _Dst;
}




undefined8 FUN_180006810(char *param_1)

{
  undefined8 uVar1;
  
  if (((((*param_1 == -0x15) || (*param_1 == -0x17)) || (*param_1 == -0x20)) || ((*param_1 == -0x3e || (*param_1 == -0x3d)))) || (*param_1 == -0x34)) {
    uVar1 = 1;
  }
  else if ((*param_1 == -0xd) && (param_1[1] == -0x3d)) {
    uVar1 = 1;
  }
  else if ((*param_1 == -1) && (param_1[1] == '%')) {
    uVar1 = 1;
  }
  else if (((((*param_1 == '&') || (*param_1 == '.')) || (*param_1 == '6')) || (((*param_1 == '>' || (*param_1 == 'd')) || (*param_1 == 'e')))) &&
          ((param_1[1] == -1 && (param_1[2] == '%')))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_180006a00(char *param_1,longlong *param_2,longlong *param_3)

{
  char *pcVar1;
  longlong local_18;
  longlong local_10;
  
  local_18 = FUN_1800060d0((ulonglong)param_1);
  local_10 = FUN_180006090((ulonglong)param_1);
  if ((*param_1 == -1) && (param_1[1] == '%')) {
    pcVar1 = param_1 + (longlong)*(int *)(param_1 + 2) + 6;
    if (pcVar1 < param_1) {
      local_10 = FUN_180006090((ulonglong)pcVar1);
    }
    else {
      local_18 = FUN_1800060d0((ulonglong)pcVar1);
    }
  }
  else if (*param_1 == -0x17) {
    pcVar1 = param_1 + (longlong)*(int *)(param_1 + 1) + 5;
    if (pcVar1 < param_1) {
      local_10 = FUN_180006090((ulonglong)pcVar1);
    }
    else {
      local_18 = FUN_1800060d0((ulonglong)pcVar1);
    }
  }
  *param_2 = local_18;
  *param_3 = local_10;
  return;
}




void FUN_180006b40(void *param_1)

{
  memset(param_1,0,0x60);
  *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)(((ulonglong)param_1 & 0xffffffffffff0000) + 0x10);
  *(void **)(((ulonglong)param_1 & 0xffffffffffff0000) + 0x10) = param_1;
  return;
}




void FUN_180006b90(void)

{
  undefined8 uVar1;
  int *local_18;
  int *local_10;
  
  local_10 = (int *)&DAT_18000ea88;
  local_18 = DAT_18000ea88;
  while (local_18 != (int *)0x0) {
    uVar1 = FUN_1800074e0(local_18);
    if ((int)uVar1 == 0) {
      local_10 = local_18 + 2;
    }
    else {
      *(undefined8 *)local_10 = *(undefined8 *)(local_18 + 2);
      VirtualFree(local_18,0,0x8000);
      DAT_18000ea90 = 0;
    }
    local_18 = *(int **)local_10;
  }
  return;
}




undefined1 * FUN_180006c20(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *local_res8;
  
  for (local_res8 = param_1; local_res8 < param_2; local_res8 = local_res8 + 1) {
    *local_res8 = 0xcc;
  }
  return local_res8;
}




undefined1 * FUN_180006c60(undefined1 *param_1,int param_2)

{
  *param_1 = 0xe9;
  *(int *)(param_1 + 1) = param_2 - ((int)param_1 + 5);
  return param_1 + 5;
}




undefined1 * FUN_180006cc0(undefined1 *param_1,int param_2)

{
  *param_1 = 0xff;
  param_1[1] = 0x25;
  *(int *)(param_1 + 2) = param_2 - ((int)param_1 + 6);
  return param_1 + 6;
}




undefined8 FUN_180006d40(char *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == -0x70) {
    uVar1 = 1;
  }
  else if ((*param_1 == 'f') && (param_1[1] == -0x70)) {
    uVar1 = 2;
  }
  else if ((*param_1 == '\x0f') && ((param_1[1] == '\x1f' && (param_1[2] == '\0')))) {
    uVar1 = 3;
  }
  else if ((*param_1 == '\x0f') && (((param_1[1] == '\x1f' && (param_1[2] == '@')) && (param_1[3] == '\0')))) {
    uVar1 = 4;
  }
  else if (((*param_1 == '\x0f') && (param_1[1] == '\x1f')) && ((param_1[2] == 'D' && ((param_1[3] == '\0' && (param_1[4] == '\0')))))) {
    uVar1 = 5;
  }
  else if ((*param_1 == 'f') && ((((param_1[1] == '\x0f' && (param_1[2] == '\x1f')) && (param_1[3] == 'D')) && ((param_1[4] == '\0' && (param_1[5] == '\0'))))))
  {
    uVar1 = 6;
  }
  else if ((((*param_1 == '\x0f') && ((param_1[1] == '\x1f' && (param_1[2] == -0x80)))) && (param_1[3] == '\0')) &&
          (((param_1[4] == '\0' && (param_1[5] == '\0')) && (param_1[6] == '\0')))) {
    uVar1 = 7;
  }
  else if ((((*param_1 == '\x0f') && (param_1[1] == '\x1f')) && ((param_1[2] == -0x7c && ((param_1[3] == '\0' && (param_1[4] == '\0')))))) &&
          ((param_1[5] == '\0' && ((param_1[6] == '\0' && (param_1[7] == '\0')))))) {
    uVar1 = 8;
  }
  else if ((((*param_1 == 'f') && (((param_1[1] == '\x0f' && (param_1[2] == '\x1f')) && (param_1[3] == -0x7c)))) &&
           (((param_1[4] == '\0' && (param_1[5] == '\0')) && (param_1[6] == '\0')))) && ((param_1[7] == '\0' && (param_1[8] == '\0')))) {
    uVar1 = 9;
  }
  else if ((((*param_1 == 'f') &&
            (((((param_1[1] == 'f' && (param_1[2] == '\x0f')) && (param_1[3] == '\x1f')) && ((param_1[4] == -0x7c && (param_1[5] == '\0')))) &&
             (param_1[6] == '\0')))) && ((param_1[7] == '\0' && (param_1[8] == '\0')))) && (param_1[9] == '\0')) {
    uVar1 = 10;
  }
  else if ((((((*param_1 == 'f') && (param_1[1] == 'f')) && (param_1[2] == 'f')) &&
            (((param_1[3] == '\x0f' && (param_1[4] == '\x1f')) && ((param_1[5] == -0x7c && ((param_1[6] == '\0' && (param_1[7] == '\0')))))))) &&
           (param_1[8] == '\0')) && ((param_1[9] == '\0' && (param_1[10] == '\0')))) {
    uVar1 = 0xb;
  }
  else if (*param_1 == -0x34) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




ulonglong FUN_1800073f0(LPCVOID param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  _MEMORY_BASIC_INFORMATION local_38;
  
  VirtualQuery(param_1,&local_38,0x30);
  if (*(short *)local_38.AllocationBase == 0x5a4d) {
    piVar1 = (int *)((longlong)local_38.AllocationBase + (longlong)*(int *)((longlong)local_38.AllocationBase + 0x3c));
    if (*piVar1 == 0x4550) {
      uVar2 = (longlong)local_38.AllocationBase + (ulonglong)(uint)piVar1[0x3a];
      if ((param_2 < uVar2) || (uVar2 = (longlong)local_38.AllocationBase + (ulonglong)(uint)piVar1[0x3b] + (ulonglong)(uint)piVar1[0x3a], uVar2 <= param_2)) {
        uVar2 = uVar2 & 0xffffffffffffff00;
      }
      else {
        uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
      }
    }
    else {
      uVar2 = (ulonglong)piVar1 & 0xffffffffffffff00;
    }
  }
  else {
    uVar2 = (ulonglong)(byte)((ushort)*(short *)local_38.AllocationBase >> 8) << 8;
  }
  return uVar2;
}




undefined8 FUN_1800074e0(int *param_1)

{
  undefined8 uVar1;
  uint local_28;
  
  if (*param_1 == 0x52727464) {
    for (local_28 = 0; local_28 < 0x2a9; local_28 = local_28 + 1) {
      if ((*(longlong *)(param_1 + (longlong)(int)local_28 * 0x18 + 0x2a) != 0) &&
         ((*(int **)(param_1 + (longlong)(int)local_28 * 0x18 + 0x2a) < param_1 ||
          (param_1 + 0x4000 <= *(int **)(param_1 + (longlong)(int)local_28 * 0x18 + 0x2a))))) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_1800075a0(void)

{
  DWORD local_28 [2];
  LPVOID local_20;
  HANDLE local_18;
  
  local_18 = GetCurrentProcess();
  for (local_20 = DAT_18000ea88; local_20 != (LPVOID)0x0; local_20 = *(LPVOID *)((longlong)local_20 + 8)) {
    VirtualProtect(local_20,0x10000,0x20,local_28);
    FlushInstructionCache(local_18,local_20,0x10000);
  }
  return;
}




char * FUN_180007610(char *param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  char *local_res8;
  
  if (param_1 == (char *)0x0) {
    local_res8 = (char *)0x0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    local_res8 = param_1;
    if ((*param_1 == -1) && (param_1[1] == '%')) {
      iVar1 = *(int *)(param_1 + 2);
      uVar2 = FUN_1800073f0(param_1,(ulonglong)(param_1 + (longlong)iVar1 + 6));
      if ((uVar2 & 0xff) != 0) {
        local_res8 = *(char **)(param_1 + (longlong)iVar1 + 6);
      }
    }
    if (*local_res8 == -0x15) {
      local_res8 = local_res8 + (longlong)local_res8[1] + 2;
      if ((*local_res8 == -1) && (local_res8[1] == '%')) {
        iVar1 = *(int *)(local_res8 + 2);
        uVar2 = FUN_1800073f0(local_res8,(ulonglong)(local_res8 + (longlong)iVar1 + 6));
        if ((uVar2 & 0xff) != 0) {
          local_res8 = *(char **)(local_res8 + (longlong)iVar1 + 6);
        }
      }
      else if (*local_res8 == -0x17) {
        local_res8 = local_res8 + (longlong)*(int *)(local_res8 + 1) + 5;
      }
    }
  }
  return local_res8;
}




DWORD FUN_1800077e0(void)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD local_18 [2];
  LPVOID local_10;
  
  local_10 = DAT_18000ea88;
  while( true ) {
    if (local_10 == (LPVOID)0x0) {
      return 0;
    }
    BVar1 = VirtualProtect(local_10,0x10000,0x40,local_18);
    if (BVar1 == 0) break;
    local_10 = *(LPVOID *)((longlong)local_10 + 8);
  }
  DVar2 = GetLastError();
  return DVar2;
}




void FUN_180007840(longlong *param_1,char *param_2)

{
  FUN_180007880(param_1,param_2,(undefined8 *)0x0,(undefined8 *)0x0,(undefined8 *)0x0);
  return;
}




ulonglong FUN_180007880(longlong *param_1,char *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5)

{
  code *pcVar1;
  DWORD DVar2;
  BOOL BVar3;
  byte *_Src;
  byte *pbVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint local_78;
  undefined1 *local_70;
  uint local_68;
  uint local_64;
  undefined1 *local_60;
  undefined8 *local_50;
  byte *local_40;
  int local_38;
  int local_34;
  DWORD local_30 [2];
  undefined1 *local_28;
  byte *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_68 = 0;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_2 == (char *)0x0) {
    return 0x57;
  }
  DVar2 = GetCurrentThreadId();
  if (DAT_18000eaa0 != DVar2) {
    return 0x10dd;
  }
  if (DAT_18000eaa4 != 0) {
    return (ulonglong)DAT_18000eaa4;
  }
  if (param_1 == (longlong *)0x0) {
    return 6;
  }
  if (*param_1 == 0) {
    DAT_18000eaa4 = 6;
    DAT_18000eaa8 = param_1;
    return 6;
  }
  local_70 = (undefined1 *)0x0;
  local_50 = (undefined8 *)0x0;
  _Src = (byte *)FUN_180007e90((char *)*param_1,(undefined8 *)0x0);
  pbVar4 = (byte *)FUN_180007e90(param_2,(undefined8 *)0x0);
  if (pbVar4 == _Src) goto joined_r0x000180007cf7;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = _Src;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = pbVar4;
  }
  local_50 = (undefined8 *)FUN_18000550c(0x30);
  local_18 = local_50;
  if (local_50 == (undefined8 *)0x0) {
    local_68 = 8;
  }
  else {
    local_70 = FUN_1800064a0((char *)_Src);
    if (local_70 != (undefined1 *)0x0) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = local_70;
      }
      memset(local_70 + 0x40,0,8);
      local_28 = local_70 + 0x1e;
      local_78 = 0;
      local_64 = 0;
      local_60 = local_70;
      local_40 = _Src;
      while( true ) {
        if (4 < local_78) break;
        local_20 = local_40;
        local_38 = 0;
        local_40 = (byte *)FUN_1800096e0((longlong)local_60,&local_28,local_40,(undefined4 *)0x0,&local_38);
        local_60 = local_60 + (longlong)(local_40 + ((longlong)local_38 - (longlong)local_20));
        local_78 = (int)local_40 - (int)_Src;
        local_70[(ulonglong)local_64 + 0x40] = local_70[(ulonglong)local_64 + 0x40] & 0xf8 | (byte)local_78 & 7;
        local_70[(ulonglong)local_64 + 0x40] = local_70[(ulonglong)local_64 + 0x40] & 7 | ((char)local_60 - (char)local_70) * '\b';
        local_64 = local_64 + 1;
        if ((7 < local_64) || (uVar5 = FUN_180006810((char *)local_20), (int)uVar5 != 0)) break;
      }
      do {
        if (4 < local_78) goto LAB_180007cd4;
        uVar5 = FUN_180006d40((char *)local_40);
        local_34 = (int)uVar5;
        if (local_34 == 0) goto LAB_180007cd4;
        local_40 = local_40 + local_34;
        local_78 = (int)local_40 - (int)_Src;
      } while( true );
    }
    local_68 = 8;
  }
LAB_180007a57:
  DAT_18000eaa4 = local_68;
LAB_180007a61:
  if ((local_70 != (undefined1 *)0x0) && (FUN_180006b40(local_70), param_3 != (undefined8 *)0x0)) {
    *param_3 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    local_10 = local_50;
    free(local_50);
  }
  DAT_18000eaa8 = param_1;
  return (ulonglong)local_68;
LAB_180007cd4:
  if ((local_78 < 5) || (8 < local_64)) {
    local_68 = 9;
joined_r0x000180007cf7:
    if (DAT_18000ea98 != 0) goto LAB_180007a61;
  }
  else {
    if (local_28 < local_60) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    local_70[0x1e] = (char)local_60 - (char)local_70;
    local_70[0x3e] = (byte)local_78;
    memcpy(local_70 + 0x20,_Src,(ulonglong)local_78);
    if (local_78 < 0x1a) {
      *(byte **)(local_70 + 0x48) = _Src + local_78;
      *(byte **)(local_70 + 0x50) = pbVar4;
      puVar7 = FUN_180006cc0(local_70 + (byte)local_70[0x1e],(int)local_70 + 0x48);
      FUN_180006c20(puVar7,local_28);
      local_30[0] = 0;
      BVar3 = VirtualProtect(_Src,(ulonglong)local_78,0x40,local_30);
      if (BVar3 != 0) {
        *(undefined4 *)(local_50 + 1) = 0;
        local_50[2] = param_1;
        local_50[4] = local_70;
        local_50[3] = _Src;
        *(DWORD *)(local_50 + 5) = local_30[0];
        *local_50 = DAT_18000eab8;
        DAT_18000eab8 = local_50;
        return 0;
      }
      local_68 = GetLastError();
    }
    else {
      local_68 = 6;
    }
  }
  goto LAB_180007a57;
}




void FUN_180007e90(char *param_1,undefined8 *param_2)

{
  FUN_180007610(param_1,param_2);
  return;
}




undefined8 FUN_180007ec0(void)

{
  DWORD DVar1;
  undefined8 uVar2;
  DWORD local_48 [2];
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  
  DVar1 = GetCurrentThreadId();
  if (DAT_18000eaa0 == DVar1) {
    local_40 = DAT_18000eab8;
    while (local_40 != (undefined8 *)0x0) {
      VirtualProtect((LPVOID)local_40[3],(ulonglong)*(byte *)(local_40[4] + 0x3e),*(DWORD *)(local_40 + 5),local_48);
      if ((*(int *)(local_40 + 1) == 0) && (local_40[4] != 0)) {
        FUN_180006b40((void *)local_40[4]);
        local_40[4] = 0;
      }
      local_28 = (undefined8 *)*local_40;
      local_30 = local_40;
      free(local_40);
      local_40 = local_28;
    }
    DAT_18000eab8 = (undefined8 *)0x0;
    FUN_1800075a0();
    local_38 = DAT_18000eab0;
    while (local_38 != (undefined8 *)0x0) {
      ResumeThread((HANDLE)local_38[1]);
      local_18 = (undefined8 *)*local_38;
      local_20 = local_38;
      free(local_38);
      local_38 = local_18;
    }
    DAT_18000eab0 = (undefined8 *)0x0;
    DAT_18000eaa0 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10dd;
  }
  return uVar2;
}




DWORD FUN_180008010(void)

{
  DWORD DVar1;
  DWORD DVar2;
  
  if (DAT_18000eaa0 == 0) {
    DVar1 = GetCurrentThreadId();
    DVar2 = 0;
    LOCK();
    if (DAT_18000eaa0 != 0) {
      DVar2 = DAT_18000eaa0;
      DVar1 = DAT_18000eaa0;
    }
    DAT_18000eaa0 = DVar1;
    UNLOCK();
    if (DVar2 == 0) {
      DAT_18000eab8 = 0;
      DAT_18000eab0 = 0;
      DAT_18000eaa8 = 0;
      DVar2 = FUN_1800077e0();
      DAT_18000eaa4 = DVar2;
    }
    else {
      DVar2 = 0x10dd;
    }
  }
  else {
    DVar2 = 0x10dd;
  }
  return DVar2;
}




void FUN_180008090(void)

{
  FUN_1800080a0((undefined8 *)0x0);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1800080a0(undefined8 *param_1)

{
  byte bVar1;
  DWORD DVar2;
  BOOL BVar3;
  int iVar4;
  ulonglong uVar5;
  undefined7 extraout_var;
  undefined1 auStack_558 [32];
  undefined8 *local_538;
  undefined8 *local_530;
  int local_528;
  undefined1 *local_520;
  DWORD local_518 [2];
  HANDLE local_510;
  undefined8 *local_508;
  undefined8 *local_500;
  undefined8 *local_4f8;
  undefined8 *local_4f0;
  _CONTEXT local_4e8;
  ulonglong local_18;
  
  local_18 = DAT_18000e008 ^ (ulonglong)auStack_558;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = DAT_18000eaa8;
  }
  DVar2 = GetCurrentThreadId();
  if (DAT_18000eaa0 == DVar2) {
    if (DAT_18000eaa4 == 0) {
      local_528 = 0;
      for (local_538 = DAT_18000eab8; local_538 != (undefined8 *)0x0; local_538 = (undefined8 *)*local_538) {
        if (*(int *)(local_538 + 1) == 0) {
          FUN_180006cc0((undefined1 *)(local_538[4] + 0x58),(int)local_538[4] + 0x50);
          local_520 = FUN_180006c60((undefined1 *)local_538[3],(int)local_538[4] + 0x58);
          local_520 = FUN_180006c20(local_520,*(undefined1 **)(local_538[4] + 0x48));
          *(undefined8 *)local_538[2] = local_538[4];
        }
        else {
          memcpy((void *)local_538[3],(void *)(local_538[4] + 0x20),(ulonglong)*(byte *)(local_538[4] + 0x3e));
          *(undefined8 *)local_538[2] = local_538[3];
        }
      }
      for (local_530 = DAT_18000eab0; local_530 != (undefined8 *)0x0; local_530 = (undefined8 *)*local_530) {
        local_4e8.ContextFlags = 0x100001;
        BVar3 = GetThreadContext((HANDLE)local_530[1],&local_4e8);
        if (BVar3 != 0) {
          for (local_538 = DAT_18000eab8; local_538 != (undefined8 *)0x0; local_538 = (undefined8 *)*local_538) {
            if (*(int *)(local_538 + 1) == 0) {
              if (((ulonglong)local_538[3] <= local_4e8.Rip) && (local_4e8.Rip < (ulonglong)*(byte *)(local_538[4] + 0x3e) + local_538[3])) {
                bVar1 = FUN_180006110(local_538[4],(int)local_4e8.Rip - (int)local_538[3] & 0xff);
                local_4e8.Rip = (longlong)(int)CONCAT71(extraout_var,bVar1) + local_538[4];
                SetThreadContext((HANDLE)local_530[1],&local_4e8);
              }
            }
            else if (((ulonglong)local_538[4] <= local_4e8.Rip) && (local_4e8.Rip < local_538[4] + 8)) {
              uVar5 = FUN_180006180(local_538[4],(char)local_4e8.Rip - (char)local_538[4]);
              local_4e8.Rip = (uVar5 & 0xff) + local_538[3];
              SetThreadContext((HANDLE)local_530[1],&local_4e8);
            }
          }
        }
      }
      local_510 = GetCurrentProcess();
      local_538 = DAT_18000eab8;
      while (local_538 != (undefined8 *)0x0) {
        VirtualProtect((LPVOID)local_538[3],(ulonglong)*(byte *)(local_538[4] + 0x3e),*(DWORD *)(local_538 + 5),local_518);
        FlushInstructionCache(local_510,(LPCVOID)local_538[3],(ulonglong)*(byte *)(local_538[4] + 0x3e));
        if ((*(int *)(local_538 + 1) != 0) && (local_538[4] != 0)) {
          FUN_180006b40((void *)local_538[4]);
          local_538[4] = 0;
          local_528 = 1;
        }
        local_500 = (undefined8 *)*local_538;
        local_508 = local_538;
        free(local_538);
        local_538 = local_500;
      }
      DAT_18000eab8 = (undefined8 *)0x0;
      if ((local_528 != 0) && (DAT_18000ea9c == 0)) {
        FUN_180006b90();
      }
      FUN_1800075a0();
      local_530 = DAT_18000eab0;
      while (local_530 != (undefined8 *)0x0) {
        ResumeThread((HANDLE)local_530[1]);
        local_4f0 = (undefined8 *)*local_530;
        local_4f8 = local_530;
        free(local_530);
        local_530 = local_4f0;
      }
      DAT_18000eab0 = (undefined8 *)0x0;
      DAT_18000eaa0 = 0;
      iVar4 = DAT_18000eaa4;
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = DAT_18000eaa8;
        iVar4 = DAT_18000eaa4;
      }
    }
    else {
      FUN_180007ec0();
      iVar4 = DAT_18000eaa4;
    }
  }
  else {
    iVar4 = 0x10dd;
  }
  return iVar4;
}




DWORD FUN_180008540(HANDLE param_1)

{
  DWORD DVar1;
  HANDLE pvVar2;
  undefined8 *_Memory;
  DWORD local_28;
  
  local_28 = DAT_18000eaa4;
  if (DAT_18000eaa4 == 0) {
    pvVar2 = GetCurrentThread();
    if (param_1 == pvVar2) {
      local_28 = 0;
    }
    else {
      _Memory = (undefined8 *)FUN_18000550c(0x10);
      if (_Memory == (undefined8 *)0x0) {
        local_28 = 8;
      }
      else {
        DVar1 = SuspendThread(param_1);
        if (DVar1 != 0xffffffff) {
          _Memory[1] = param_1;
          *_Memory = DAT_18000eab0;
          DAT_18000eab0 = _Memory;
          return 0;
        }
        local_28 = GetLastError();
      }
      if (_Memory != (undefined8 *)0x0) {
        free(_Memory);
      }
      DAT_18000eaa4 = local_28;
      DAT_18000eaa8 = 0;
    }
  }
  return local_28;
}




void FUN_180008630(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *local_18;
  
  if ((param_1[4] == 0) && (*param_1 == 0)) {
    local_18 = &DAT_180012120;
  }
  else {
    local_18 = &DAT_180012130;
  }
  (**(code **)(local_18 + 8))(param_1,local_18,param_3,param_4);
  return;
}




void FUN_1800086b0(undefined4 *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  *param_1 = 1;
  FUN_180008ee0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180008700(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  *(undefined4 *)(param_1 + 4) = 1;
  FUN_180008ee0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180008750(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  *(undefined4 *)(param_1 + 0x10) = 1;
  FUN_180008ee0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800087a0(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  *(undefined4 *)(param_1 + 0x14) = 1;
  FUN_180008ee0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800087f0(int *param_1,undefined8 param_2,void *param_3,void *param_4)

{
  if ((*(byte *)((longlong)param_4 + 1) & 0x38) == 0) {
    FUN_180008bc0(param_1,(uint *)&DAT_180012140,param_3,param_4);
  }
  else {
    FUN_180008bc0(param_1,(uint *)&DAT_180012150,param_3,param_4);
  }
  return;
}




void FUN_180008860(int *param_1,undefined8 param_2,void *param_3,void *param_4)

{
  if ((*(byte *)((longlong)param_4 + 1) & 0x38) == 0) {
    FUN_180008bc0(param_1,(uint *)&DAT_180012160,param_3,param_4);
  }
  else {
    FUN_180008bc0(param_1,(uint *)&DAT_180012170,param_3,param_4);
  }
  return;
}




longlong FUN_1800088d0(int *param_1,undefined8 param_2,void *param_3,void *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = FUN_180008bc0(param_1,(uint *)&DAT_180012180,param_3,param_4);
  bVar2 = *(byte *)((longlong)param_4 + 1);
  if ((bVar2 == 0x15) || (bVar2 == 0x25)) {
    if (((char)param_1[6] == 'd') || ((char)param_1[6] == 'e')) {
      **(undefined8 **)(param_1 + 8) = 0xffffffffffffffff;
    }
    else {
      puVar1 = (undefined8 *)((longlong)param_4 + (longlong)*(int *)((longlong)param_4 + 2) + 6);
      if ((DAT_180013000 == 0) || ((DAT_180013010 <= puVar1 && (puVar1 < DAT_180013008)))) {
        **(undefined8 **)(param_1 + 8) = *puVar1;
      }
      else {
        **(undefined8 **)(param_1 + 8) = 0xffffffffffffffff;
      }
    }
  }
  else if (((bVar2 & 0x30) == 0x10) || ((bVar2 & 0x30) == 0x20)) {
    **(undefined8 **)(param_1 + 8) = 0xffffffffffffffff;
  }
  return lVar3;
}




void FUN_180008a20(undefined4 *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  *param_3 = *param_4;
  param_3[1] = param_4[1];
  FUN_1800095d0(param_1,'\x01',param_3 + 2,param_4 + 2);
  return;
}




void FUN_180008ab0(undefined4 *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint local_18;
  
  *param_3 = *param_4;
  param_3[1] = param_4[1];
  param_3[2] = param_4[2];
  local_18 = (uint)((param_4[2] & 0x80) != 0);
  param_1[2] = param_1[2] | local_18;
  FUN_1800095d0(param_1,param_4[1] & 0x1f,param_3 + 3,param_4 + 3);
  return;
}




longlong FUN_180008bc0(int *param_1,uint *param_2,void *param_3,void *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint local_44;
  uint local_3c;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_18;
  
  uVar3 = *param_2 >> 0x10 & 0xf;
  uVar4 = *param_2 >> 0x18;
  local_24 = *param_2 >> 8 & 0xf;
  uVar5 = *param_2 >> 0xc & 0xf;
  if ((uVar4 & 2) == 0) {
    if (param_1[2] == 0) {
      local_18 = local_24;
      if (*param_1 != 0) {
        local_18 = uVar5;
      }
      local_2c = local_18;
    }
    else {
      if ((uVar4 & 8) == 0) {
        local_20 = 0;
      }
      else {
        local_20 = 4;
      }
      local_2c = local_24 + local_20;
    }
  }
  else {
    if (param_1[1] != 0) {
      local_24 = uVar5;
    }
    local_2c = local_24;
  }
  local_44 = local_2c;
  local_3c = *param_2 >> 0x14 & 0xf;
  local_28 = local_2c - local_3c;
  if (uVar3 != 0) {
    bVar1 = *(byte *)((longlong)param_4 + (ulonglong)uVar3);
    bVar2 = (&DAT_180010000)[bVar1];
    local_44 = local_2c + (bVar2 & 0xf);
    if ((bVar2 & 0x10) == 0) {
      if ((bVar2 & 0x20) != 0) {
        local_3c = uVar3 + 1;
        local_28 = 4;
      }
    }
    else {
      if ((*(byte *)((longlong)param_4 + (ulonglong)(uVar3 + 1)) & 7) == 5) {
        if ((bVar1 & 0xc0) == 0) {
          local_44 = local_44 + 4;
        }
        else if ((bVar1 & 0xc0) == 0x40) {
          local_44 = local_44 + 1;
        }
        else if ((bVar1 & 0xc0) == 0x80) {
          local_44 = local_44 + 4;
        }
      }
      local_28 = local_44 - local_3c;
    }
  }
  memcpy(param_3,param_4,(ulonglong)local_44);
  if (local_3c != 0) {
    lVar6 = FUN_180009370((longlong)param_1,(longlong)param_3,(longlong)param_4,local_44,local_3c,local_28);
    **(longlong **)(param_1 + 8) = lVar6;
    if ((*param_2 >> 0x14 & 0xf) == 0) {
      **(undefined8 **)(param_1 + 8) = 0;
    }
  }
  if ((uVar4 & 4) != 0) {
    **(int **)(param_1 + 10) = -**(int **)(param_1 + 10);
  }
  if ((uVar4 & 1) != 0) {
    **(undefined8 **)(param_1 + 8) = 0xffffffffffffffff;
  }
  return (longlong)param_4 + (ulonglong)local_44;
}




void FUN_180008ee0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  *param_3 = *param_4;
  (**(code **)(&UNK_180011118 + (ulonglong)(byte)param_4[1] * 0x10))(param_1,&DAT_180011110 + (ulonglong)(byte)param_4[1] * 0x10,param_3 + 1,param_4 + 1);
  return;
}




void FUN_180008f80(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  *(undefined1 *)(param_1 + 0x18) = *param_4;
  FUN_180008ee0(param_1,0,param_3,param_4);
  return;
}




void FUN_180008fd0(longlong param_1,undefined8 param_2,undefined1 *param_3,byte *param_4)

{
  if ((*param_4 & 8) != 0) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  FUN_180008ee0(param_1,0,param_3,param_4);
  return;
}




byte * FUN_180009030(longlong param_1,undefined8 param_2,undefined1 *param_3,byte *param_4)

{
  byte bVar1;
  int local_20;
  
  bVar1 = param_4[1];
  **(longlong **)(param_1 + 0x20) = (longlong)(param_4 + (longlong)(char)bVar1 + 2);
  if (*param_4 == 0xeb) {
    *param_3 = 0xe9;
    local_20 = (int)(char)bVar1 - (((int)param_3 - (int)param_4) + 3);
    *(int *)(param_3 + 1) = local_20;
    **(undefined4 **)(param_1 + 0x28) = 3;
  }
  else {
    *param_3 = 0xf;
    param_3[1] = *param_4 & 0xf | 0x80;
    local_20 = (int)(char)bVar1 - (((int)param_3 - (int)param_4) + 4);
    *(int *)(param_3 + 2) = local_20;
    **(undefined4 **)(param_1 + 0x28) = 4;
  }
  return param_4 + 2;
}




longlong FUN_1800091d0(void)

{
  longlong in_R9;
  
  return in_R9 + 1;
}




void FUN_1800091f0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  *param_3 = *param_4;
  (**(code **)(&UNK_180010108 + (ulonglong)(byte)param_4[1] * 0x10))(param_1,&DAT_180010100 + (ulonglong)(byte)param_4[1] * 0x10,param_3 + 1,param_4 + 1);
  return;
}




undefined4 * FUN_180009290(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *local_18;
  undefined4 *local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  local_18 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    local_18 = param_1 + 0xe;
  }
  *(undefined4 **)(param_1 + 8) = local_18;
  local_10 = param_3;
  if (param_3 == (undefined4 *)0x0) {
    local_10 = param_1 + 0xc;
  }
  *(undefined4 **)(param_1 + 10) = local_10;
  **(undefined8 **)(param_1 + 8) = 0;
  **(undefined4 **)(param_1 + 10) = 0;
  return param_1;
}




longlong FUN_180009370(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,int param_6)

{
  longlong *plVar1;
  longlong lVar2;
  int local_30;
  longlong local_20;
  
  plVar1 = (longlong *)(param_2 + (ulonglong)param_5);
  if (param_6 == 1) {
    local_20 = (longlong)(char)*plVar1;
  }
  else if (param_6 == 2) {
    local_20 = (longlong)(short)*plVar1;
  }
  else if (param_6 == 4) {
    local_20 = (longlong)(int)*plVar1;
  }
  else if (param_6 == 8) {
    local_20 = *plVar1;
  }
  else {
    local_20 = 0;
  }
  lVar2 = local_20 - (param_2 - param_3);
  if (param_6 == 1) {
    local_30._0_1_ = (char)lVar2;
    *(char *)plVar1 = (char)local_30;
    if ((lVar2 < -0x80) || (0x7f < lVar2)) {
      **(undefined4 **)(param_1 + 0x28) = 3;
    }
  }
  else if (param_6 == 2) {
    local_30._0_2_ = (short)lVar2;
    *(short *)plVar1 = (short)local_30;
    if ((lVar2 < -0x8000) || (0x7fff < lVar2)) {
      **(undefined4 **)(param_1 + 0x28) = 2;
    }
  }
  else if (param_6 == 4) {
    local_30 = (int)lVar2;
    *(int *)plVar1 = local_30;
    if ((lVar2 < -0x80000000) || (0x7fffffff < lVar2)) {
      **(undefined4 **)(param_1 + 0x28) = 0;
    }
  }
  else if (param_6 == 8) {
    *plVar1 = lVar2;
  }
  return param_3 + (ulonglong)param_4 + local_20;
}




undefined8 FUN_180009540(longlong param_1,longlong param_2,byte *param_3)

{
  undefined8 uVar1;
  longlong local_res10;
  
  local_res10 = param_2;
  if (param_2 == 0) {
    local_res10 = param_1 + 0x40;
  }
  if (param_3 == (byte *)0x0) {
    SetLastError(0xd);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(&UNK_180011118 + (ulonglong)*param_3 * 0x10))(param_1,&DAT_180011110 + (ulonglong)*param_3 * 0x10,local_res10,param_3);
  }
  return uVar1;
}




void FUN_1800095d0(undefined4 *param_1,char param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  undefined *local_10;
  
  param_1[3] = 1;
  if (param_2 == '\x01') {
    local_10 = &DAT_180010100 + (ulonglong)*param_4 * 0x10;
  }
  else if (param_2 == '\x02') {
    local_10 = &DAT_180012190;
  }
  else if (param_2 == '\x03') {
    local_10 = &DAT_1800121a0;
  }
  else {
    local_10 = &DAT_1800121b0;
  }
  bVar1 = param_4[-1] & 3;
  if (bVar1 == 1) {
    *param_1 = 1;
  }
  else if (bVar1 == 2) {
    param_1[5] = 1;
  }
  else if (bVar1 == 3) {
    param_1[4] = 1;
  }
  (**(code **)(local_10 + 8))(param_1,local_10,param_3,param_4);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800096e0(longlong param_1,undefined8 param_2,byte *param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98 [32];
  ulonglong local_18;
  
  local_18 = DAT_18000e008 ^ (ulonglong)auStack_b8;
  FUN_180009290(local_98,param_4,param_5);
  FUN_180009540((longlong)local_98,param_1,param_3);
  return;
}




/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __GSHandlerCheck(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4);
  return 1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __GSHandlerCheckCommon(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  uVar1 = *(ulonglong *)(param_2 + 8);
  if ((*(byte *)(uVar2 + 3 + uVar1) & 0xf) != 0) {
    uVar1 = (ulonglong)(*(byte *)(uVar2 + 3 + uVar1) & 0xfffffff0);
  }
  return uVar1;
}




undefined1 FUN_180009860(void)

{
  return 1;
}




undefined8 FUN_180009864(void)

{
  return 0;
}




/* Library Function - Multiple Matches With Different Base Names
    __GSHandlerCheck_EH
    __GSHandlerCheck_EH4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict___GSHandlerCheck_EH(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
                    /* WARNING: Subroutine does not return */
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
  return;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180009900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void FUN_180009920(void)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 unaff_retaddr;
  
  puVar3 = (undefined8 *)0x0;
  do {
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(0x2c,unaff_retaddr);
    puVar3 = (undefined8 *)((ulonglong)puVar3 ^ uVar2);
    unaff_retaddr = *puVar3;
  } while( true );
}




void FUN_180009950(void)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 *in_R11;
  undefined8 unaff_retaddr;
  
  uVar2 = (ulonglong)in_R11 & 7;
  if ((int)uVar2 != 0) goto LAB_18000996c;
  do {
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(0x2c,unaff_retaddr);
LAB_18000996c:
    in_R11 = (undefined8 *)((ulonglong)in_R11 ^ uVar2);
    unaff_retaddr = *in_R11;
  } while( true );
}




void FUN_1800099c0(void)

{
  return;
}




void Unwind_1800099d0(undefined8 param_1,longlong param_2)

{
  FUN_1800017c0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_1800099dc(undefined8 param_1,longlong param_2)

{
  FUN_180003500((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_1800099e8(undefined8 param_1,longlong param_2)

{
  FUN_180001830((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180009a00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x30) + 0xb0));
  }
  return;
}




void Unwind_180009a2e(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180009a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x30) + 0x18));
  return;
}




void Unwind_180009a40(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180009a47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_180009a4e(undefined8 param_1,longlong param_2)

{
  FUN_180002480((basic_streambuf<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x30) + 0x10));
  return;
}




void Unwind_180009a60(undefined8 param_1,longlong param_2)

{
  FUN_180003500((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_180009a70(undefined8 param_1,longlong param_2)

{
  FUN_180003500((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180009a80(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003060(param_2 + 0x28,param_2,param_3,param_4);
  return;
}




void Unwind_180009a90(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180009a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x48));
  return;
}




void Unwind_180009aa0(undefined8 param_1,longlong param_2)

{
  FUN_180002d20((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180009aac(undefined8 param_1,longlong param_2)

{
  FUN_180002cf0((longlong *)(param_2 + 0x30));
  return;
}




undefined * Catch_All_180009ab8(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)((longlong)*(int *)(**(longlong **)(param_2 + 0x28) + 4) + (longlong)*(longlong **)(param_2 + 0x28)),4,
             true);
  return &DAT_180002c83;
}




void Unwind_180009af0(undefined8 param_1,longlong param_2)

{
  FUN_180003500((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180009b00(undefined8 param_1,longlong param_2)

{
  FUN_180003500((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180009b10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001830(*(undefined8 **)(param_2 + 0x30));
  }
  return;
}




void Unwind_180009b36(undefined8 param_1,longlong param_2)

{
  FUN_180004100((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_180009b42(undefined8 param_1,longlong param_2)

{
  FUN_180003500((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180009b50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x78) & 1) != 0) {
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x60) + 0x98));
  }
  return;
}




void Unwind_180009b7e(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180009b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x60) + 0x20));
  return;
}




void Unwind_180009b90(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180009b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(param_2 + 0x68));
  return;
}




void Unwind_180009ba0(void)

{
  _guard_check_icall();
  return;
}




void Unwind_180009bbc(void)

{
  _guard_check_icall();
  return;
}




void Catch_All_180009bd8(void *param_1,longlong param_2)

{
  void *pvVar1;
  longlong *plVar2;
  
  pvVar1 = *(void **)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x30) != '\0') {
    param_1 = (void *)(*(longlong *)(param_2 + 0x48) * 0x20 + (longlong)pvVar1);
    plVar2 = (longlong *)FUN_180002d50(param_1);
    FUN_180002d60(param_1,plVar2);
  }
  FUN_1800029d0(param_1,pvVar1,*(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180009c20(undefined8 param_1,longlong param_2)

{
  FUN_180002d20((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180009c2c(undefined8 param_1,longlong param_2)

{
  FUN_180004d10((longlong *)(param_2 + 0x28));
  return;
}




undefined * Catch_All_180009c38(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) + (longlong)*(longlong **)(param_2 + 0x70)),4,
             true);
  return &DAT_180004eeb;
}




bool FUN_180009c70(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




void FUN_180009c88(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180009c9f(undefined8 param_1,longlong param_2)

{
  FUN_180005270();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_180009cbb(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x70),*(int *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80),FUN_18000557c,*(undefined4 *)*param_1,param_1);
  return;
}




undefined4 FUN_180009d00(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)**(undefined8 **)(param_2 + 0x38);
  if (*(int *)(param_2 + 0x24) == -0x3ffffffb) {
    *(undefined4 *)(param_2 + 0x20) = 1;
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  return *(undefined4 *)(param_2 + 0x20);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009d40(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_18000e080) {
    pvVar1 = (void *)CONCAT71(DAT_18000e068._1_7_,(undefined1)DAT_18000e068);
    _Memory = pvVar1;
    if ((0xfff < DAT_18000e080 + 1) && (_Memory = *(void **)((longlong)pvVar1 + -8), 0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  _DAT_18000e078 = 0;
  DAT_18000e080 = 0xf;
  DAT_18000e068._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009db0(void)

{
  longlong *plVar1;
  void *pvVar2;
  void *_Memory;
  longlong *_Memory_00;
  
  _Memory_00 = (longlong *)*DAT_18000eaf8;
  *DAT_18000eaf8 = (longlong)DAT_18000eaf8;
  DAT_18000eaf8[1] = (longlong)DAT_18000eaf8;
  _DAT_18000eb00 = 0;
  if (_Memory_00 != DAT_18000eaf8) {
    do {
      plVar1 = (longlong *)*_Memory_00;
      if (0xf < (ulonglong)_Memory_00[5]) {
        pvVar2 = (void *)_Memory_00[2];
        _Memory = pvVar2;
        if ((0xfff < _Memory_00[5] + 1U) && (_Memory = *(void **)((longlong)pvVar2 + -8), 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      _Memory_00[4] = 0;
      _Memory_00[5] = 0xf;
      *(undefined1 *)(_Memory_00 + 2) = 0;
      free(_Memory_00);
      _Memory_00 = plVar1;
    } while (plVar1 != DAT_18000eaf8);
  }
  free(DAT_18000eaf8);
  return;
}




/* Library Function - Single Match
    public: __cdecl std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(void) __ptr64
   
   Library: Visual Studio 2015 Release */

void __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(_Fac_tidy_reg_t *this)

{
  _Fac_node *this_00;
  
  while (this_00 = DAT_18000e490, DAT_18000e490 != (_Fac_node *)0x0) {
    DAT_18000e490 = *(_Fac_node **)DAT_18000e490;
    _Fac_node::_scalar_deleting_destructor_(this_00,1);
  }
  return;
}




/* DONE: decompiled=217 failed=0 total=375 */
