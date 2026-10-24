/* Decompiled by Ghidra 12.1.4 | program: Common.dll
   image base: 10000000 | functions: 501 */


/* WARNING: Type propagation algorithm not settling */

bool __thiscall FUN_10001000(void *this,LPCSTR param_1)

{
  int *this_00;
  char cVar1;
  FILE *pFVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 *local_894;
  undefined4 local_890;
  int local_88c;
  undefined4 *local_888;
  undefined4 local_884;
  int local_880;
  undefined4 *local_87c;
  undefined4 local_878;
  int local_874;
  int local_870;
  undefined4 local_86c [3];
  undefined4 local_860 [2];
  char acStack_855 [2];
  undefined4 local_853;
  int local_814 [2];
  undefined1 local_80c;
  undefined4 local_80b;
  char acStack_40d [2];
  undefined4 local_40b;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fec3;
  local_c = ExceptionList;
  if (param_1 == (LPCSTR)0x0) {
    ExceptionList = &local_c;
    tq::SysLogSave(&DAT_100130d0,s_pszFilename_100130ec,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100130f8,0x12);
    bVar8 = false;
  }
  else {
    ExceptionList = &local_c;
    pFVar2 = (FILE *)FUN_10004939(param_1,&DAT_100130cc);
    if (pFVar2 == (FILE *)0x0) {
      tq::ErrorMsg(s_Error__ini_file__s_not_found__100130ac,param_1);
      bVar8 = false;
    }
    else {
      local_80c = DAT_100163d0;
      puVar6 = &local_80b;
      for (iVar5 = 0xff; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      *(undefined1 *)((int)puVar6 + 2) = 0;
      iVar5 = FUN_100016f0((undefined4 *)pFVar2,(undefined4 *)&local_80c,0x400);
      while (iVar5 != -1) {
        if (iVar5 != 0) {
          puVar6 = &local_853;
          for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          *(undefined2 *)puVar6 = 0;
          *(undefined1 *)((int)puVar6 + 2) = 0;
          acStack_855[1] = DAT_100163d0;
          uVar3 = FUN_10001790((char *)((int)acStack_855 + 1),&local_80c);
          if ((char)uVar3 == '\0') {
            tq::DebugLogMsg(s_error_in_get_key_of_line___s__in_10013088,&local_80c,param_1);
          }
          else {
            acStack_40d[1] = DAT_100163d0;
            puVar6 = &local_40b;
            for (iVar5 = 0xff; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            *(undefined2 *)puVar6 = 0;
            *(undefined1 *)((int)puVar6 + 2) = 0;
            uVar3 = FUN_10001830((char *)((int)acStack_40d + 1),(uint *)&local_80c);
            if ((char)uVar3 == '\0') {
              tq::DebugLogMsg(s_error_in_take_out_msg_of_line____1001305c,&local_80c,param_1);
            }
            else {
              local_87c = (undefined4 *)0x0;
              local_878 = 0;
              local_874 = 0;
              uVar3 = 0xffffffff;
              local_4 = 0;
              pcVar7 = (char *)((int)acStack_855 + 1);
              do {
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              FUN_10001d20(&local_87c,(undefined4 *)((int)acStack_855 + 1),(int)(acStack_855 + ~uVar3));
              this_00 = (int *)((int)this + 4);
              local_4 = 1;
              FUN_100027d0(this_00,&local_870,(int *)&local_87c);
              local_4 = 0xffffffff;
              if ((local_87c != (undefined4 *)0x0) && (local_874 - (int)local_87c != 0)) {
                FUN_10002100(local_87c,local_874 - (int)local_87c);
              }
              if (local_870 == *this_00) {
                local_888 = (undefined4 *)0x0;
                local_884 = 0;
                local_880 = 0;
                uVar3 = 0xffffffff;
                pcVar7 = (char *)((int)acStack_40d + 1);
                do {
                  if (uVar3 == 0) break;
                  uVar3 = uVar3 - 1;
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar1 != '\0');
                local_4 = 2;
                FUN_10001d20(&local_888,(undefined4 *)((int)acStack_40d + 1),(int)(acStack_40d + ~uVar3));
                local_894 = (undefined4 *)0x0;
                local_890 = 0;
                local_88c = 0;
                uVar3 = 0xffffffff;
                local_4._0_1_ = 4;
                local_4._1_3_ = 0;
                pcVar7 = (char *)((int)acStack_855 + 1);
                do {
                  if (uVar3 == 0) break;
                  uVar3 = uVar3 - 1;
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar1 != '\0');
                FUN_10001d20(&local_894,(undefined4 *)((int)acStack_855 + 1),(int)(acStack_855 + ~uVar3));
                local_4._0_1_ = 5;
                FUN_10001b90(local_86c,&local_894);
                local_4._0_1_ = 6;
                FUN_10001b90(local_860,&local_888);
                local_4._0_1_ = 7;
                FUN_10002610(this_00,local_814,local_86c);
                local_4._0_1_ = 8;
                FUN_10001e40(local_860);
                local_4._0_1_ = 5;
                FUN_10001e40(local_86c);
                local_4 = CONCAT31(local_4._1_3_,3);
                if ((local_894 != (undefined4 *)0x0) && (local_88c - (int)local_894 != 0)) {
                  FUN_10002100(local_894,local_88c - (int)local_894);
                }
                local_4 = 0xffffffff;
                if ((local_888 != (undefined4 *)0x0) && (local_880 - (int)local_888 != 0)) {
                  FUN_10002100(local_888,local_880 - (int)local_888);
                }
              }
            }
          }
        }
        iVar5 = FUN_100016f0((undefined4 *)pFVar2,(undefined4 *)&local_80c,0x400);
      }
      FUN_1000488b(pFVar2);
      puVar4 = FUN_10001560(this,s_STR_END_10013054);
      bVar8 = puVar4 != (undefined *)0x0;
    }
  }
  ExceptionList = local_c;
  return bVar8;
}




void __fastcall FUN_10001390(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000fed8;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)param_1[3];
  uVar3 = param_1[5] - (int)puVar1;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((puVar1 != (undefined4 *)0x0) && (ExceptionList = &local_c, uVar3 != 0)) {
    if (uVar3 < 0x81) {
      ExceptionList = &local_c;
      FUN_10001aa0(&DAT_10016418);
      *puVar1 = (&DAT_100163d4)[uVar3 + 7 >> 3];
      (&DAT_100163d4)[uVar3 + 7 >> 3] = (uint)puVar1;
      DAT_10016418 = 0;
    }
    else {
      ExceptionList = &local_c;
      FUN_10004d22((undefined *)puVar1);
    }
  }
  puVar1 = (undefined4 *)*param_1;
  uVar3 = param_1[2] - (int)puVar1;
  local_4 = 0xffffffff;
  if ((puVar1 != (undefined4 *)0x0) && (uVar3 != 0)) {
    if (0x80 < uVar3) {
      FUN_10004d22((undefined *)puVar1);
      ExceptionList = local_c;
      return;
    }
    iVar4 = FUN_10001a50(&DAT_10016418,1);
    uVar2 = DAT_10013130;
    if (iVar4 != 0) {
      uVar7 = 0;
      if (DAT_10013130 != 0) {
        uVar6 = DAT_100163d4 >> 1;
        do {
          if (((uVar6 <= uVar7) && (DAT_10016418 == 0)) && (iVar4 = FUN_10001a50(&DAT_10016418,1), iVar4 == 0)) {
            DAT_10013130 = 1000;
            DAT_100163d4 = uVar7;
            goto LAB_10001538;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      DAT_10013130 = 0x1e;
      iVar4 = 6;
      while( true ) {
        iVar8 = iVar4;
        if (0x1b < iVar4) {
          iVar8 = 0x1b;
        }
        iVar5 = FUN_10001a50(&DAT_10016418,1);
        if (iVar5 == 0) break;
        FUN_10001a70(iVar8);
        iVar4 = iVar4 + 1;
      }
    }
LAB_10001538:
    *puVar1 = (&DAT_100163d4)[uVar3 + 7 >> 3];
    (&DAT_100163d4)[uVar3 + 7 >> 3] = (uint)puVar1;
    DAT_10016418 = 0;
  }
  ExceptionList = local_c;
  return;
}




undefined * __thiscall FUN_10001560(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *local_58;
  int local_54;
  undefined4 local_50;
  char local_4c;
  undefined4 local_4b;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000ff00;
  local_c = ExceptionList;
  if (param_1 == (char *)0x0) {
    ExceptionList = &local_c;
    tq::SysLogSave(&DAT_100130d0,s_pszStrIndex_10013158,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100130f8,0x4d);
    ExceptionList = local_c;
    return PTR_s_ERROR_CnStrGet_10013040;
  }
  local_4c = DAT_100163d0;
  puVar4 = &local_4b;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_10004e0b(param_1,(byte *)s_STR__s_10013150);
  if (iVar2 != 1) {
    ExceptionList = local_c;
    return PTR_s_ERROR_CnStrGet_10013040;
  }
  local_58 = (undefined4 *)0x0;
  local_54 = 0;
  local_50 = 0;
  uVar3 = 0xffffffff;
  pcVar5 = &local_4c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_4 = 0;
  iVar2 = (int)&local_50 + ~uVar3 + 3;
  FUN_10001df0(&local_58,(iVar2 - (int)&local_4c) + 1);
  local_54 = FUN_10002c80((undefined4 *)&local_4c,iVar2,local_58);
  FUN_10001da0((int)&local_58);
  local_4 = 1;
  FUN_100027d0((int *)((int)this + 4),(int *)&param_1,(int *)&local_58);
  local_4 = 0xffffffff;
  if ((local_58 != (undefined4 *)0x0) && (local_50 - (int)local_58 != 0)) {
    FUN_10002100(local_58,local_50 - (int)local_58);
  }
  if (param_1 == *(char **)((int)this + 4)) {
    tq::SysLogSave(s_CnStrGet_Error__szKey__s_10013134,&local_4c);
    ExceptionList = local_c;
    return PTR_s_ERROR_CnStrGet_10013040;
  }
  ExceptionList = local_c;
  return *(undefined **)(param_1 + 0x1c);
}




int FUN_100016f0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) && (0 < (int)param_3)) {
    puVar3 = param_2;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar2 = 0;
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    while( true ) {
      uVar1 = FUN_10004e3f(param_1);
      if (uVar1 == 0xffffffff) {
        return -1;
      }
      if (uVar1 == 10) break;
      *(char *)(iVar2 + (int)param_2) = (char)uVar1;
      iVar2 = iVar2 + 1;
      if ((int)param_3 <= iVar2) {
        return -3;
      }
    }
    return iVar2;
  }
  tq::SysLogSave(&DAT_100130d0,s_fp____pszLine____nBufSize_>_0_10013164,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100130f8,0x67);
  return -2;
}




uint FUN_10001790(char *param_1,char *param_2)

{
  char cVar1;
  uint extraout_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char local_40;
  undefined4 local_3f;
  
  if (param_2 == (char *)0x0) {
    tq::SysLogSave(&DAT_100130d0,s_pszLine_10013194,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100130f8,0x82);
    return extraout_EAX & 0xffffff00;
  }
  local_40 = DAT_100163d0;
  puVar6 = &local_3f;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  uVar2 = FUN_10004e0b(param_2,(byte *)s__define_STR__s_10013184);
  if (uVar2 != 1) {
    return uVar2 & 0xffffff00;
  }
  uVar2 = 0xffffffff;
  pcVar5 = &local_40;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar7 + -uVar2;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    param_1 = param_1 + 1;
  }
  return 1;
}




uint FUN_10001830(char *param_1,uint *param_2)

{
  char cVar1;
  uint extraout_EAX;
  uint *puVar2;
  uint extraout_EAX_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  
  if ((param_2 == (uint *)0x0) || (param_1 == (char *)0x0)) {
    tq::SysLogSave(&DAT_100130d0,s_pszLine____pszMsgOut_100131c0,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100130f8,0x91);
    return extraout_EAX & 0xffffff00;
  }
  puVar2 = FUN_10004e70(param_2,&DAT_100131bc);
  if (puVar2 != (uint *)0x0) {
    iVar3 = -1;
    puVar7 = puVar2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      uVar4 = *puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
    } while ((char)uVar4 != '\0');
    if (iVar3 != -2) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)((int)puVar2 + 1);
      do {
        pcVar8 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar8 + -uVar4;
      pcVar8 = param_1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (0 < (int)(~uVar4 - 1)) {
        param_1[~uVar4 - 2] = '\0';
      }
      return 1;
    }
  }
  tq::SysLogSave(&DAT_100130d0,s_pszMsg____strlen_pszMsg__>_0_1001319c,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100130f8,0x96);
  return extraout_EAX_00 & 0xffffff00;
}




void __fastcall FUN_100018f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  LONG LVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = (undefined4 *)*param_1;
  uVar3 = param_1[2] - (int)puVar1;
  if ((puVar1 != (undefined4 *)0x0) && (uVar3 != 0)) {
    if (0x80 < uVar3) {
      FUN_10004d22((undefined *)puVar1);
      return;
    }
    LVar4 = InterlockedExchange(&DAT_10016418,1);
    uVar2 = DAT_10013130;
    if (LVar4 != 0) {
      uVar6 = 0;
      if (DAT_10013130 != 0) {
        uVar5 = DAT_100163d4 >> 1;
        do {
          if (((uVar5 <= uVar6) && (DAT_10016418 == 0)) && (LVar4 = InterlockedExchange(&DAT_10016418,1), LVar4 == 0)) {
            DAT_10013130 = 1000;
            DAT_100163d4 = uVar6;
            goto LAB_10001a17;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      DAT_10013130 = 0x1e;
      iVar8 = 6;
      while( true ) {
        iVar7 = iVar8;
        if (0x1b < iVar8) {
          iVar7 = 0x1b;
        }
        LVar4 = InterlockedExchange(&DAT_10016418,1);
        if (LVar4 == 0) break;
        if (iVar7 < 0x15) {
          Sleep(0);
          iVar8 = iVar8 + 1;
        }
        else {
          Sleep(1 << ((char)iVar7 - 0x14U & 0x1f));
          iVar8 = iVar8 + 1;
        }
      }
    }
LAB_10001a17:
    *puVar1 = (&DAT_100163d4)[uVar3 + 7 >> 3];
    (&DAT_100163d4)[uVar3 + 7 >> 3] = (uint)puVar1;
    DAT_10016418 = 0;
  }
  return;
}




void __cdecl FUN_10001a50(LONG *param_1,LONG param_2)

{
  InterlockedExchange(param_1,param_2);
  return;
}




void __cdecl FUN_10001a70(int param_1)

{
  if (param_1 < 0x15) {
    Sleep(0);
    return;
  }
  Sleep(1 << ((char)param_1 - 0x14U & 0x1f));
  return;
}




void __fastcall FUN_10001aa0(LONG *param_1)

{
  uint uVar1;
  LONG LVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  LVar2 = InterlockedExchange(param_1,1);
  uVar1 = DAT_10013130;
  if (LVar2 != 0) {
    uVar4 = 0;
    if (DAT_10013130 != 0) {
      uVar3 = DAT_100163d4 >> 1;
      do {
        if (((uVar3 <= uVar4) && (*param_1 == 0)) && (LVar2 = InterlockedExchange(param_1,1), LVar2 == 0)) {
          DAT_10013130 = 1000;
          DAT_100163d4 = uVar4;
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    DAT_10013130 = 0x1e;
    iVar6 = 6;
    while( true ) {
      iVar5 = iVar6;
      if (0x1b < iVar6) {
        iVar5 = 0x1b;
      }
      LVar2 = InterlockedExchange(param_1,1);
      if (LVar2 == 0) break;
      if (iVar5 < 0x15) {
        Sleep(0);
        iVar6 = iVar6 + 1;
      }
      else {
        Sleep(1 << ((char)iVar5 - 0x14U & 0x1f));
        iVar6 = iVar6 + 1;
      }
    }
  }
  return;
}




undefined4 * __thiscall FUN_10001b90(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 local_124 [3];
  undefined **local_118 [67];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1000ff39;
  local_c = ExceptionList;
  piVar6 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  local_4 = 0;
  iVar2 = param_1[1];
  puVar3 = (undefined4 *)*param_1;
  uVar5 = iVar2 - (int)puVar3;
  uVar4 = uVar5 + 1;
  if (uVar4 != 0xffffffff) {
    if (uVar4 != 0) {
      if (uVar4 < 0x81) {
        FUN_10001aa0(&DAT_10016418);
        local_4._0_1_ = 1;
        piVar6 = (int *)(&DAT_100163d4)[uVar5 + 8 >> 3];
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)FUN_10002470(uVar5 + 8 & 0xfffffff8);
        }
        else {
          (&DAT_100163d4)[uVar5 + 8 >> 3] = *piVar6;
        }
        local_4 = (uint)local_4._1_3_ << 8;
        DAT_10016418 = 0;
      }
      else {
        piVar6 = _malloc(uVar4);
        if (piVar6 == (undefined4 *)0x0) {
          piVar6 = (int *)FUN_100028a0(uVar4);
        }
      }
    }
    *(int **)this = piVar6;
    *(int **)((int)this + 4) = piVar6;
    *(uint *)((int)this + 8) = (int)piVar6 + uVar4;
    FUN_10005010(piVar6,puVar3,uVar5);
    *(int *)((int)this + 4) = (int)piVar6 + (iVar2 - (int)puVar3);
    FUN_10001da0((int)this);
    ExceptionList = local_c;
    return this;
  }
  FUN_10001d90(local_124);
  uVar4 = 0xffffffff;
  local_4._0_1_ = 2;
  pcVar7 = s_basic_string_10013258;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_10001d20(local_124,(undefined4 *)s_basic_string_10013258,(int)(s___AVlength_error_std___10013240 + ~uVar4 + 0x17));
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_10002250(local_118,local_124);
  local_118[0] = &PTR_FUN_100111a8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_118,&DAT_10011d70);
}




void __thiscall FUN_10001d20(void *this,undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = (param_2 - (int)param_1) + 1;
  if (uVar1 == 0xffffffff) {
    FUN_10002360();
  }
  else if (uVar1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    iVar3 = FUN_10001e60(uVar1);
    *(int *)this = iVar3;
    *(int *)((int)this + 4) = iVar3;
    *(uint *)((int)this + 8) = iVar3 + uVar1;
  }
  puVar2 = *(undefined4 **)this;
  FUN_10005010(puVar2,param_1,param_2 - (int)param_1);
  *(int *)((int)this + 4) = (int)puVar2 + (param_2 - (int)param_1);
  FUN_10001da0((int)this);
  return;
}




void __fastcall FUN_10001d90(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void __fastcall FUN_10001da0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000ff50;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_100022c0(*(undefined1 **)(param_1 + 4));
  ExceptionList = local_10;
  return;
}




void Catch_10001de0(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}




void __thiscall FUN_10001df0(void *this,uint param_1)

{
  int iVar1;
  
  if (param_1 == 0xffffffff) {
    FUN_10002360();
    return;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  iVar1 = FUN_10001e60(param_1);
  *(int *)this = iVar1;
  *(int *)((int)this + 4) = iVar1;
  *(uint *)((int)this + 8) = iVar1 + param_1;
  return;
}




void __fastcall FUN_10001e40(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if ((puVar1 != (undefined4 *)0x0) && (param_1[2] - (int)puVar1 != 0)) {
    FUN_10002100(puVar1,param_1[2] - (int)puVar1);
  }
  return;
}




void __cdecl FUN_10001e60(uint param_1)

{
  size_t _Size;
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  char *local_1c;
  undefined **local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar6 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000ff68;
  local_c = ExceptionList;
  if (0x80 < param_1) {
    ExceptionList = &local_c;
    pvVar3 = _malloc(param_1);
    while( true ) {
      if (pvVar3 != (void *)0x0) {
        ExceptionList = local_c;
        return;
      }
      if (DAT_10016428 == (code *)0x0) break;
      (*DAT_10016428)();
      pvVar3 = _malloc(uVar6);
    }
    local_1c = s_bad_allocation_10013284;
    FUN_10004f1d(local_18,&local_1c);
    local_18[0] = &PTR_FUN_100111b0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_18,&DAT_10011e48);
  }
  uVar6 = param_1 + 7;
  ExceptionList = &local_c;
  FUN_10001aa0(&DAT_10016418);
  local_4 = 0;
  piVar1 = (int *)(&DAT_100163d4)[uVar6 >> 3];
  if (piVar1 == (int *)0x0) {
    uVar6 = uVar6 & 0xfffffff8;
    uVar4 = DAT_10016424 - (int)DAT_10016420;
    param_1 = 0x14;
    puVar5 = DAT_10016420;
    if (uVar4 < uVar6 * 0x14) {
      if (uVar4 < uVar6) {
        _Size = ((DAT_1001641c >> 4) + 7 & 0xfffffff8) + uVar6 * 0x28;
        if (uVar4 != 0) {
          *DAT_10016420 = (&DAT_100163d4)[uVar4 + 7 >> 3];
          (&DAT_100163d4)[uVar4 + 7 >> 3] = DAT_10016420;
        }
        DAT_10016420 = _malloc(_Size);
        uVar4 = uVar6;
        if (DAT_10016420 == (undefined4 *)0x0) {
          for (; uVar4 < 0x81; uVar4 = uVar4 + 8) {
            puVar5 = (undefined4 *)(&DAT_100163d4)[uVar4 + 7 >> 3];
            if (puVar5 != (undefined4 *)0x0) {
              (&DAT_100163d4)[uVar4 + 7 >> 3] = *puVar5;
              DAT_10016424 = (int)puVar5 + uVar4;
              DAT_10016420 = puVar5;
              goto LAB_10002008;
            }
          }
          DAT_10016424 = 0;
          DAT_10016420 = (undefined4 *)FUN_100022e0(_Size);
        }
        DAT_1001641c = DAT_1001641c + _Size;
        DAT_10016424 = (int)DAT_10016420 + _Size;
LAB_10002008:
        puVar5 = FUN_100028f0(uVar6,&param_1);
      }
      else {
        param_1 = uVar4 / uVar6;
        DAT_10016420 = (undefined4 *)((int)DAT_10016420 + param_1 * uVar6);
      }
      if (param_1 == 1) {
        DAT_10016418 = 0;
        ExceptionList = local_c;
        return;
      }
    }
    else {
      DAT_10016420 = DAT_10016420 + uVar6 * 5;
    }
    puVar5 = (undefined4 *)((int)puVar5 + uVar6);
    (&DAT_100163d4)[uVar6 + 7 >> 3] = puVar5;
    iVar7 = 1;
    puVar2 = puVar5;
    if (param_1 != 2) {
      do {
        puVar5 = (undefined4 *)((int)puVar2 + uVar6);
        *puVar2 = puVar5;
        iVar7 = iVar7 + 1;
        puVar2 = puVar5;
      } while (param_1 - 1 != iVar7);
    }
    *puVar5 = 0;
  }
  else {
    (&DAT_100163d4)[uVar6 >> 3] = *piVar1;
  }
  DAT_10016418 = 0;
  ExceptionList = local_c;
  return;
}




void __fastcall FUN_10002090(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_100111b0;
  exception::~exception(param_1);
  return;
}




exception * __thiscall FUN_100020c0(void *this,byte param_1)

{
  FUN_10002090(this);
  if ((param_1 & 1) != 0) {
    FUN_10004880(this);
  }
  return this;
}




void __cdecl FUN_10002100(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  LONG LVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (0x80 < param_2) {
    FUN_10004d22((undefined *)param_1);
    return;
  }
  LVar2 = InterlockedExchange(&DAT_10016418,1);
  uVar1 = DAT_10013130;
  if (LVar2 != 0) {
    uVar4 = 0;
    if (DAT_10013130 != 0) {
      uVar3 = DAT_100163d4 >> 1;
      do {
        if (((uVar3 <= uVar4) && (DAT_10016418 == 0)) && (LVar2 = InterlockedExchange(&DAT_10016418,1), LVar2 == 0)) {
          DAT_10013130 = 1000;
          DAT_100163d4 = uVar4;
          goto LAB_1000220b;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    DAT_10013130 = 0x1e;
    iVar6 = 6;
    while( true ) {
      iVar5 = iVar6;
      if (0x1b < iVar6) {
        iVar5 = 0x1b;
      }
      LVar2 = InterlockedExchange(&DAT_10016418,1);
      if (LVar2 == 0) break;
      if (iVar5 < 0x15) {
        Sleep(0);
        iVar6 = iVar6 + 1;
      }
      else {
        Sleep(1 << ((char)iVar5 - 0x14U & 0x1f));
        iVar6 = iVar6 + 1;
      }
    }
  }
LAB_1000220b:
  *param_1 = (&DAT_100163d4)[param_2 + 7 >> 3];
  (&DAT_100163d4)[param_2 + 7 >> 3] = (uint)param_1;
  DAT_10016418 = 0;
  return;
}




undefined4 * __thiscall FUN_10002250(void *this,undefined4 *param_1)

{
  FUN_10004ef0(this);
  *(undefined ***)this = &PTR_FUN_100111c4;
  _strncpy((char *)((int)this + 0xc),(char *)*param_1,0x100);
  *(undefined1 *)((int)this + 0x10b) = 0;
  *(undefined ***)this = &PTR_FUN_100111bc;
  return this;
}




exception * __thiscall FUN_100022a0(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    FUN_10004880(this);
  }
  return this;
}




void FUN_100022c0(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_100022d0(void)

{
  DAT_10016418 = 0;
  return;
}




void __cdecl FUN_100022e0(size_t param_1)

{
  void *pvVar1;
  undefined4 local_c [3];
  
  pvVar1 = _malloc(param_1);
  while( true ) {
    if (pvVar1 != (void *)0x0) {
      return;
    }
    if (DAT_10016428 == (code *)0x0) break;
    (*DAT_10016428)();
    pvVar1 = _malloc(param_1);
  }
  FUN_10002340(local_c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_c,&DAT_10011e48);
}




undefined4 * __fastcall FUN_10002340(undefined4 *param_1)

{
  FUN_10004f1d(param_1,(undefined4 *)&stack0x00000004);
  *param_1 = &PTR_FUN_100111b0;
  return param_1;
}




void FUN_10002360(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *local_124;
  char *local_120;
  char *local_11c;
  undefined **local_118 [3];
  char local_10c [255];
  undefined1 local_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000ff96;
  pvStack_c = ExceptionList;
  local_124 = (char *)0x0;
  local_120 = (char *)0x0;
  local_11c = (char *)0x0;
  uVar2 = 0xffffffff;
  local_4 = 0;
  pcVar3 = s_basic_string_10013258;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  if (uVar2 == 0xffffffff) {
    ExceptionList = &pvStack_c;
    FUN_10002360();
  }
  else if (uVar2 == 0) {
    local_124 = (char *)0x0;
    local_120 = (char *)0x0;
    local_11c = (char *)0x0;
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    local_124 = (char *)FUN_10001e60(uVar2);
    local_11c = local_124 + uVar2;
    local_120 = local_124;
  }
  pcVar3 = local_124;
  FUN_10005010((undefined4 *)local_124,(undefined4 *)s_basic_string_10013258,uVar2 - 1);
  local_120 = pcVar3 + (uVar2 - 1);
  FUN_10001da0((int)&local_124);
  local_4 = 1;
  FUN_10004ef0(local_118);
  local_118[0] = &PTR_FUN_100111c4;
  _strncpy(local_10c,local_124,0x100);
  local_d = 0;
  local_118[0] = &PTR_FUN_100111a8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_118,&DAT_10011d70);
}




void __cdecl FUN_10002470(uint param_1)

{
  size_t _Size;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_10;
  undefined4 local_c [3];
  
  uVar1 = DAT_10016424 - (int)DAT_10016420;
  local_10 = 0x14;
  puVar3 = DAT_10016420;
  if (uVar1 < param_1 * 0x14) {
    if (uVar1 < param_1) {
      _Size = ((DAT_1001641c >> 4) + 7 & 0xfffffff8) + param_1 * 0x28;
      if (uVar1 != 0) {
        *DAT_10016420 = (&DAT_100163d4)[uVar1 + 7 >> 3];
        (&DAT_100163d4)[uVar1 + 7 >> 3] = DAT_10016420;
      }
      DAT_10016420 = _malloc(_Size);
      uVar1 = param_1;
      if (DAT_10016420 == (undefined4 *)0x0) {
        for (; uVar1 < 0x81; uVar1 = uVar1 + 8) {
          puVar3 = (undefined4 *)(&DAT_100163d4)[uVar1 + 7 >> 3];
          if (puVar3 != (undefined4 *)0x0) {
            (&DAT_100163d4)[uVar1 + 7 >> 3] = *puVar3;
            DAT_10016424 = (int)puVar3 + uVar1;
            DAT_10016420 = puVar3;
            goto LAB_100025c3;
          }
        }
        DAT_10016424 = 0;
        puVar2 = _malloc(_Size);
        puVar3 = DAT_10016420;
        while (DAT_10016420 = puVar2, DAT_10016420 == (undefined4 *)0x0) {
          DAT_10016420 = puVar3;
          if (DAT_10016428 == (code *)0x0) {
            FUN_10002340(local_c);
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8(local_c,&DAT_10011e48);
          }
          (*DAT_10016428)();
          puVar2 = _malloc(_Size);
          puVar3 = DAT_10016420;
        }
      }
      DAT_1001641c = DAT_1001641c + _Size;
      DAT_10016424 = (int)DAT_10016420 + _Size;
LAB_100025c3:
      puVar3 = FUN_100028f0(param_1,&local_10);
    }
    else {
      local_10 = uVar1 / param_1;
      DAT_10016420 = (undefined4 *)((int)DAT_10016420 + local_10 * param_1);
    }
    if (local_10 == 1) {
      return;
    }
  }
  else {
    DAT_10016420 = DAT_10016420 + param_1 * 5;
  }
  puVar3 = (undefined4 *)((int)puVar3 + param_1);
  (&DAT_100163d4)[param_1 + 7 >> 3] = puVar3;
  iVar4 = 1;
  puVar2 = puVar3;
  if (local_10 != 2) {
    do {
      puVar3 = (undefined4 *)((int)puVar2 + param_1);
      *puVar2 = puVar3;
      iVar4 = iVar4 + 1;
      puVar2 = puVar3;
    } while (local_10 - 1 != iVar4);
  }
  *puVar3 = 0;
  return;
}




void __thiscall FUN_10002610(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  
  puVar3 = param_2;
  bVar6 = true;
  puVar2 = *(undefined4 **)this;
  puVar1 = (undefined4 *)(*(undefined4 **)this)[1];
  while (puVar1 != (undefined4 *)0x0) {
    uVar4 = FUN_10002ae0((byte *)*puVar3,puVar3[1],(byte *)puVar1[4],puVar1[5]);
    bVar6 = (int)uVar4 < 0;
    puVar2 = puVar1;
    if (bVar6) {
      puVar1 = (undefined4 *)puVar1[2];
    }
    else {
      puVar1 = (undefined4 *)puVar1[3];
    }
  }
  param_2 = puVar2;
  if (bVar6) {
    if (puVar2 == (undefined4 *)(*(undefined4 **)this)[2]) {
      if ((puVar2 == *(undefined4 **)this) || (bVar6 = FUN_10002a70(puVar3,puVar2 + 4), bVar6)) {
        pcVar5 = (char *)FUN_10002b40(puVar3);
        puVar2[2] = pcVar5;
        puVar1 = *(undefined4 **)this;
        if (puVar2 == puVar1) {
          puVar1[1] = pcVar5;
          *(char **)(*(int *)this + 0xc) = pcVar5;
        }
        else if (puVar2 == (undefined4 *)puVar1[2]) {
          puVar1[2] = pcVar5;
        }
      }
      else {
        pcVar5 = (char *)FUN_10002b40(puVar3);
        puVar2[3] = pcVar5;
        if (puVar2 == *(undefined4 **)(*(int *)this + 0xc)) {
          *(char **)(*(int *)this + 0xc) = pcVar5;
        }
      }
      *(undefined4 **)(pcVar5 + 4) = puVar2;
      pcVar5[8] = '\0';
      pcVar5[9] = '\0';
      pcVar5[10] = '\0';
      pcVar5[0xb] = '\0';
      pcVar5[0xc] = '\0';
      pcVar5[0xd] = '\0';
      pcVar5[0xe] = '\0';
      pcVar5[0xf] = '\0';
      FUN_10002d90(pcVar5,(int *)(*(int *)this + 4));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      *param_1 = (int)pcVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_10002d40((int *)&param_2);
  }
  uVar4 = FUN_10002ae0((byte *)param_2[4],param_2[5],(byte *)*puVar3,puVar3[1]);
  if ((int)uVar4 < 0) {
    if ((puVar2 == *(undefined4 **)this) || (bVar6 = FUN_10002a70(puVar3,puVar2 + 4), bVar6)) {
      pcVar5 = (char *)FUN_10002b40(puVar3);
      puVar2[2] = pcVar5;
      puVar1 = *(undefined4 **)this;
      if (puVar2 == puVar1) {
        puVar1[1] = pcVar5;
        *(char **)(*(int *)this + 0xc) = pcVar5;
      }
      else if (puVar2 == (undefined4 *)puVar1[2]) {
        puVar1[2] = pcVar5;
      }
    }
    else {
      pcVar5 = (char *)FUN_10002b40(puVar3);
      puVar2[3] = pcVar5;
      if (puVar2 == *(undefined4 **)(*(int *)this + 0xc)) {
        *(char **)(*(int *)this + 0xc) = pcVar5;
      }
    }
    *(undefined4 **)(pcVar5 + 4) = puVar2;
    pcVar5[8] = '\0';
    pcVar5[9] = '\0';
    pcVar5[10] = '\0';
    pcVar5[0xb] = '\0';
    pcVar5[0xc] = '\0';
    pcVar5[0xd] = '\0';
    pcVar5[0xe] = '\0';
    pcVar5[0xf] = '\0';
    FUN_10002d90(pcVar5,(int *)(*(int *)this + 4));
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *param_1 = (int)pcVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = (int)param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}




void __thiscall FUN_100027d0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int **ppiVar6;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  int *local_8;
  int local_4;
  
  piVar3 = param_2;
  iVar2 = *(int *)this;
  iVar1 = *(int *)(*(int *)this + 4);
  local_8 = this;
  while (iVar1 != 0) {
    uVar4 = FUN_10002ae0(*(byte **)(iVar1 + 0x10),*(int *)(iVar1 + 0x14),(byte *)*piVar3,piVar3[1]);
    if ((int)uVar4 < 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  iVar1 = *local_8;
  local_4 = iVar2;
  if (iVar2 != iVar1) {
    local_8 = (int *)(piVar3[1] - *piVar3);
    iVar5 = *(int *)(iVar2 + 0x14) - (int)*(byte **)(iVar2 + 0x10);
    ppiVar6 = &param_2;
    if ((int)local_8 <= iVar5) {
      ppiVar6 = &local_8;
    }
    piVar7 = *ppiVar6;
    bVar10 = false;
    uVar4 = 0;
    bVar11 = true;
    pbVar8 = (byte *)*piVar3;
    pbVar9 = *(byte **)(iVar2 + 0x10);
    do {
      if (piVar7 == (int *)0x0) break;
      piVar7 = (int *)((int)piVar7 + -1);
      bVar10 = *pbVar8 < *pbVar9;
      bVar11 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while (bVar11);
    if (!bVar11) {
      uVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
    }
    if (uVar4 == 0) {
      if ((int)local_8 < iVar5) goto LAB_1000287a;
      uVar4 = (uint)(iVar5 < (int)local_8);
    }
    if (-1 < (int)uVar4) {
      *param_1 = iVar2;
      return;
    }
  }
LAB_1000287a:
  *param_1 = iVar1;
  return;
}




void __cdecl FUN_100028a0(size_t param_1)

{
  void *pvVar1;
  undefined4 local_c [3];
  
  do {
    if (DAT_10016428 == (code *)0x0) {
      FUN_10002340(local_c);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_10011e48);
    }
    (*DAT_10016428)();
    pvVar1 = _malloc(param_1);
  } while (pvVar1 == (void *)0x0);
  return;
}




undefined4 * __cdecl FUN_100028f0(uint param_1,uint *param_2)

{
  size_t _Size;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 auStack_c [3];
  
  uVar4 = *param_2 * param_1;
  uVar1 = DAT_10016424 - (int)DAT_10016420;
  if (uVar1 < uVar4) {
    do {
      if (param_1 <= uVar1) {
        *param_2 = uVar1 / param_1;
        puVar3 = DAT_10016420;
        DAT_10016420 = (undefined4 *)((int)DAT_10016420 + (uVar1 / param_1) * param_1);
        return puVar3;
      }
      _Size = ((DAT_1001641c >> 4) + 7 & 0xfffffff8) + uVar4 * 2;
      if (uVar1 != 0) {
        *DAT_10016420 = (&DAT_100163d4)[uVar1 + 7 >> 3];
        (&DAT_100163d4)[uVar1 + 7 >> 3] = DAT_10016420;
      }
      DAT_10016420 = _malloc(_Size);
      uVar1 = param_1;
      if (DAT_10016420 == (undefined4 *)0x0) {
        for (; uVar1 < 0x81; uVar1 = uVar1 + 8) {
          puVar3 = (undefined4 *)(&DAT_100163d4)[uVar1 + 7 >> 3];
          if (puVar3 != (undefined4 *)0x0) {
            (&DAT_100163d4)[uVar1 + 7 >> 3] = *puVar3;
            DAT_10016424 = (int)puVar3 + uVar1;
            DAT_10016420 = puVar3;
            goto LAB_100029e1;
          }
        }
        DAT_10016424 = 0;
        puVar2 = _malloc(_Size);
        puVar3 = DAT_10016420;
        while (DAT_10016420 = puVar2, DAT_10016420 == (undefined4 *)0x0) {
          DAT_10016420 = puVar3;
          if (DAT_10016428 == (code *)0x0) {
            FUN_10002340(auStack_c);
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8(auStack_c,&DAT_10011e48);
          }
          (*DAT_10016428)();
          puVar2 = _malloc(_Size);
          puVar3 = DAT_10016420;
        }
      }
      DAT_10016424 = (int)DAT_10016420 + _Size;
      DAT_1001641c = DAT_1001641c + _Size;
LAB_100029e1:
      uVar1 = DAT_10016424 - (int)DAT_10016420;
      uVar4 = *param_2 * param_1;
    } while (uVar1 < uVar4);
  }
  puVar3 = DAT_10016420;
  DAT_10016420 = (undefined4 *)((int)DAT_10016420 + uVar4);
  return puVar3;
}




bool __cdecl FUN_10002a70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  pbVar4 = (byte *)*param_1;
  pbVar5 = (byte *)*param_2;
  param_1 = (undefined4 *)(param_1[1] - (int)pbVar4);
  param_2 = (undefined4 *)(param_2[1] - (int)pbVar5);
  ppuVar1 = &param_2;
  if ((int)param_1 <= (int)param_2) {
    ppuVar1 = &param_1;
  }
  puVar2 = *ppuVar1;
  bVar6 = false;
  uVar3 = 0;
  bVar7 = true;
  do {
    if (puVar2 == (undefined4 *)0x0) break;
    puVar2 = (undefined4 *)((int)puVar2 + -1);
    bVar6 = *pbVar4 < *pbVar5;
    bVar7 = *pbVar4 == *pbVar5;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  } while (bVar7);
  if (!bVar7) {
    uVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  }
  if (uVar3 == 0) {
    if ((int)param_1 < (int)param_2) {
      return true;
    }
    uVar3 = (uint)((int)param_2 < (int)param_1);
  }
  return (int)uVar3 < 0;
}




uint __cdecl FUN_10002ae0(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte **ppbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  pbVar4 = param_1;
  param_1 = (byte *)(param_2 - (int)param_1);
  param_2 = param_4 - (int)param_3;
  ppbVar1 = (byte **)&param_2;
  if ((int)param_1 <= param_2) {
    ppbVar1 = &param_1;
  }
  pbVar3 = *ppbVar1;
  bVar5 = false;
  uVar2 = 0;
  bVar6 = true;
  do {
    if (pbVar3 == (byte *)0x0) break;
    pbVar3 = pbVar3 + -1;
    bVar5 = *pbVar4 < *param_3;
    bVar6 = *pbVar4 == *param_3;
    pbVar4 = pbVar4 + 1;
    param_3 = param_3 + 1;
  } while (bVar6);
  if (!bVar6) {
    uVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  }
  if (uVar2 == 0) {
    if ((int)param_1 < param_2) {
      return 0xffffffff;
    }
    uVar2 = (uint)(param_2 < (int)param_1);
  }
  return uVar2;
}




undefined4 * FUN_10002b40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ffc9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  ExceptionList = &local_10;
  FUN_10001aa0(&DAT_10016418);
  local_8 = 0;
  if (DAT_100163e8 == (undefined4 *)0x0) {
    local_18 = 0x14;
    puVar2 = FUN_100028f0(0x28,&local_18);
    if (local_18 != 1) {
      puVar3 = puVar2 + 10;
      iVar4 = 1;
      puVar1 = puVar3;
      DAT_100163e8 = puVar3;
      if (local_18 != 2) {
        do {
          puVar3 = puVar1 + 10;
          *puVar1 = puVar3;
          iVar4 = iVar4 + 1;
          puVar1 = puVar3;
        } while (local_18 - 1 != iVar4);
      }
      *puVar3 = 0;
    }
  }
  else {
    puVar2 = DAT_100163e8;
    DAT_100163e8 = (undefined4 *)*DAT_100163e8;
  }
  DAT_10016418 = 0;
  puVar3 = puVar2 + 4;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    local_8._1_3_ = 0;
    local_8._0_1_ = 3;
    FUN_10001d20(puVar3,(undefined4 *)*param_1,param_1[1]);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_10001b90(puVar2 + 7,param_1 + 3);
  }
  ExceptionList = local_10;
  return puVar2;
}




void Catch_10002c40(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_10001aa0(&DAT_10016418);
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  *puVar1 = DAT_100163e8;
  DAT_10016418 = 0;
  DAT_100163e8 = puVar1;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}




void FUN_10002c70(void)

{
  return;
}




int __cdecl FUN_10002c80(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_10005010(param_3,param_1,param_2 - (int)param_1);
  return (param_2 - (int)param_1) + (int)param_3;
}




void __fastcall FUN_10002d40(int *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)*param_1;
  if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
    *param_1 = *(int *)(pcVar1 + 0xc);
    return;
  }
  iVar3 = *(int *)(pcVar1 + 8);
  if (iVar3 == 0) {
    iVar3 = *(int *)(pcVar1 + 4);
    if (pcVar1 == *(char **)(iVar3 + 8)) {
      do {
        *param_1 = iVar3;
        iVar3 = *(int *)(iVar3 + 4);
      } while (*param_1 == *(int *)(iVar3 + 8));
    }
    *param_1 = iVar3;
    return;
  }
  for (iVar2 = *(int *)(iVar3 + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
    iVar3 = iVar2;
  }
  *param_1 = iVar3;
  return;
}




void __cdecl FUN_10002d90(char *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  *param_1 = '\0';
  if (param_1 == (char *)*param_2) {
    *(undefined1 *)*param_2 = 1;
    return;
  }
  do {
    pcVar1 = *(char **)(param_1 + 4);
    if (*pcVar1 != '\0') {
      *(undefined1 *)*param_2 = 1;
      return;
    }
    pcVar4 = *(char **)(*(int *)(pcVar1 + 4) + 8);
    if (pcVar1 == pcVar4) {
      pcVar4 = *(char **)(*(int *)(pcVar1 + 4) + 0xc);
      if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\0')) goto LAB_10002dcb;
      if (param_1 == *(char **)(pcVar1 + 0xc)) {
        iVar3 = *(int *)(pcVar1 + 0xc);
        *(undefined4 *)(pcVar1 + 0xc) = *(undefined4 *)(iVar3 + 8);
        if (*(int *)(iVar3 + 8) != 0) {
          *(char **)(*(int *)(iVar3 + 8) + 4) = pcVar1;
        }
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar1 + 4);
        if (pcVar1 == (char *)*param_2) {
          *param_2 = iVar3;
        }
        else {
          iVar5 = *(int *)(pcVar1 + 4);
          if (pcVar1 == *(char **)(iVar5 + 8)) {
            *(int *)(iVar5 + 8) = iVar3;
          }
          else {
            *(int *)(iVar5 + 0xc) = iVar3;
          }
        }
        *(char **)(iVar3 + 8) = pcVar1;
        *(int *)(pcVar1 + 4) = iVar3;
        param_1 = pcVar1;
      }
      **(undefined1 **)(param_1 + 4) = 1;
      **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 4);
      iVar5 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar5 + 0xc);
      if (*(int *)(iVar5 + 0xc) != 0) {
        *(int *)(*(int *)(iVar5 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar3 + 4);
      if (iVar3 == *param_2) {
        *param_2 = iVar5;
        *(int *)(iVar5 + 0xc) = iVar3;
      }
      else {
        iVar2 = *(int *)(iVar3 + 4);
        if (iVar3 == *(int *)(iVar2 + 0xc)) {
          *(int *)(iVar2 + 0xc) = iVar5;
          *(int *)(iVar5 + 0xc) = iVar3;
        }
        else {
          *(int *)(iVar2 + 8) = iVar5;
          *(int *)(iVar5 + 0xc) = iVar3;
        }
      }
LAB_10002f19:
      *(int *)(iVar3 + 4) = iVar5;
    }
    else {
      if ((pcVar4 == (char *)0x0) || (*pcVar4 != '\0')) {
        if (param_1 == *(char **)(pcVar1 + 8)) {
          iVar3 = *(int *)(pcVar1 + 8);
          *(undefined4 *)(pcVar1 + 8) = *(undefined4 *)(iVar3 + 0xc);
          if (*(int *)(iVar3 + 0xc) != 0) {
            *(char **)(*(int *)(iVar3 + 0xc) + 4) = pcVar1;
          }
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar1 + 4);
          if (pcVar1 == (char *)*param_2) {
            *param_2 = iVar3;
          }
          else {
            iVar5 = *(int *)(pcVar1 + 4);
            if (pcVar1 == *(char **)(iVar5 + 0xc)) {
              *(int *)(iVar5 + 0xc) = iVar3;
            }
            else {
              *(int *)(iVar5 + 8) = iVar3;
            }
          }
          *(char **)(iVar3 + 0xc) = pcVar1;
          *(int *)(pcVar1 + 4) = iVar3;
          param_1 = pcVar1;
        }
        **(undefined1 **)(param_1 + 4) = 1;
        **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
        iVar3 = *(int *)(*(int *)(param_1 + 4) + 4);
        iVar5 = *(int *)(iVar3 + 0xc);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 8);
        if (*(int *)(iVar5 + 8) != 0) {
          *(int *)(*(int *)(iVar5 + 8) + 4) = iVar3;
        }
        *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar3 + 4);
        if (iVar3 == *param_2) {
          *param_2 = iVar5;
        }
        else {
          iVar2 = *(int *)(iVar3 + 4);
          if (iVar3 == *(int *)(iVar2 + 8)) {
            *(int *)(iVar2 + 8) = iVar5;
          }
          else {
            *(int *)(iVar2 + 0xc) = iVar5;
          }
        }
        *(int *)(iVar5 + 8) = iVar3;
        goto LAB_10002f19;
      }
LAB_10002dcb:
      *pcVar1 = '\x01';
      *pcVar4 = '\x01';
      **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
      param_1 = *(char **)(*(int *)(param_1 + 4) + 4);
    }
    if (param_1 == (char *)*param_2) {
      *(char *)*param_2 = '\x01';
      return;
    }
  } while( true );
}




/* public: struct tq::LOG_INFO & __thiscall tq::LOG_INFO::operator=(struct tq::LOG_INFO const &) */

LOG_INFO * __thiscall tq::LOG_INFO::operator=(LOG_INFO *this,LOG_INFO *param_1)

{
  int iVar1;
  LOG_INFO *pLVar2;
  
                    /* 0x2f40  7  ??4LOG_INFO@tq@@QAEAAU01@ABU01@@Z */
  pLVar2 = this;
  for (iVar1 = 0x440; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pLVar2 = pLVar2 + 4;
  }
  return this;
}




/* public: __thiscall tq::ILog::ILog(void) */

void __thiscall tq::ILog::ILog(ILog *this)

{
                    /* 0x2f60  4  ??0ILog@tq@@QAE@XZ */
  *(undefined ***)this = &_vftable_;
  return;
}




/* public: __thiscall tq::ILog::ILog(class tq::ILog const &) */

void __thiscall tq::ILog::ILog(ILog *this,ILog *param_1)

{
                    /* 0x2f70  3  ??0ILog@tq@@QAE@ABV01@@Z */
  *(undefined ***)this = &_vftable_;
  return;
}




/* public: __thiscall tq::IException::IException(void) */

void __thiscall tq::IException::IException(IException *this)

{
                    /* 0x2f80  2  ??0IException@tq@@QAE@XZ */
  *(undefined ***)this = &_vftable_;
  return;
}




/* public: __thiscall tq::IException::IException(class tq::IException const &) */

void __thiscall tq::IException::IException(IException *this,IException *param_1)

{
                    /* 0x2f90  1  ??0IException@tq@@QAE@ABV01@@Z */
  *(undefined ***)this = &_vftable_;
  return;
}




/* public: class tq::IException & __thiscall tq::IException::operator=(class tq::IException const &) */

IException * __thiscall tq::IException::operator=(IException *this,IException *param_1)

{
                    /* 0x2fa0  5  ??4IException@tq@@QAEAAV01@ABV01@@Z
                       0x2fa0  6  ??4ILog@tq@@QAEAAV01@ABV01@@Z */
  return this;
}




/* WARNING: Type propagation algorithm not settling */

bool __thiscall FUN_10002fb0(void *this,LPCSTR param_1)

{
  int *this_00;
  char cVar1;
  FILE *pFVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 *local_894;
  undefined4 local_890;
  int local_88c;
  undefined4 *local_888;
  undefined4 local_884;
  int local_880;
  undefined4 *local_87c;
  undefined4 local_878;
  int local_874;
  int local_870;
  undefined4 local_86c [3];
  undefined4 local_860 [2];
  char acStack_855 [2];
  undefined4 local_853;
  int local_814 [2];
  undefined1 local_80c;
  undefined4 local_80b;
  char acStack_40d [2];
  undefined4 local_40b;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10010043;
  local_c = ExceptionList;
  if (param_1 == (LPCSTR)0x0) {
    ExceptionList = &local_c;
    tq::SysLogSave(&DAT_100130d0,s_pszFilename_100130ec,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100132b8,0x12);
    bVar8 = false;
  }
  else {
    ExceptionList = &local_c;
    pFVar2 = (FILE *)FUN_10004939(param_1,&DAT_100130cc);
    if (pFVar2 == (FILE *)0x0) {
      tq::ErrorMsg(s_Error__ini_file__s_not_found__100130ac,param_1);
      bVar8 = false;
    }
    else {
      local_80c = DAT_100163d0;
      puVar6 = &local_80b;
      for (iVar5 = 0xff; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      *(undefined1 *)((int)puVar6 + 2) = 0;
      iVar5 = FUN_100034d0((undefined4 *)pFVar2,(undefined4 *)&local_80c,0x400);
      while (iVar5 != -1) {
        if (iVar5 != 0) {
          puVar6 = &local_853;
          for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          *(undefined2 *)puVar6 = 0;
          *(undefined1 *)((int)puVar6 + 2) = 0;
          acStack_855[1] = DAT_100163d0;
          uVar3 = FUN_10003570((char *)((int)acStack_855 + 1),&local_80c);
          if ((char)uVar3 == '\0') {
            tq::DebugLogMsg(s_error_in_get_key_of_line___s__in_10013088,&local_80c,param_1);
          }
          else {
            acStack_40d[1] = DAT_100163d0;
            puVar6 = &local_40b;
            for (iVar5 = 0xff; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            *(undefined2 *)puVar6 = 0;
            *(undefined1 *)((int)puVar6 + 2) = 0;
            uVar3 = FUN_10003610((char *)((int)acStack_40d + 1),(uint *)&local_80c);
            if ((char)uVar3 == '\0') {
              tq::DebugLogMsg(s_error_in_take_out_msg_of_line____1001305c,&local_80c,param_1);
            }
            else {
              local_87c = (undefined4 *)0x0;
              local_878 = 0;
              local_874 = 0;
              uVar3 = 0xffffffff;
              local_4 = 0;
              pcVar7 = (char *)((int)acStack_855 + 1);
              do {
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              FUN_10001d20(&local_87c,(undefined4 *)((int)acStack_855 + 1),(int)(acStack_855 + ~uVar3));
              this_00 = (int *)((int)this + 4);
              local_4 = 1;
              FUN_100027d0(this_00,&local_870,(int *)&local_87c);
              local_4 = 0xffffffff;
              if ((local_87c != (undefined4 *)0x0) && (local_874 - (int)local_87c != 0)) {
                FUN_10002100(local_87c,local_874 - (int)local_87c);
              }
              if (local_870 == *this_00) {
                local_888 = (undefined4 *)0x0;
                local_884 = 0;
                local_880 = 0;
                uVar3 = 0xffffffff;
                pcVar7 = (char *)((int)acStack_40d + 1);
                do {
                  if (uVar3 == 0) break;
                  uVar3 = uVar3 - 1;
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar1 != '\0');
                local_4 = 2;
                FUN_10001d20(&local_888,(undefined4 *)((int)acStack_40d + 1),(int)(acStack_40d + ~uVar3));
                local_894 = (undefined4 *)0x0;
                local_890 = 0;
                local_88c = 0;
                uVar3 = 0xffffffff;
                local_4._0_1_ = 4;
                local_4._1_3_ = 0;
                pcVar7 = (char *)((int)acStack_855 + 1);
                do {
                  if (uVar3 == 0) break;
                  uVar3 = uVar3 - 1;
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar1 != '\0');
                FUN_10001d20(&local_894,(undefined4 *)((int)acStack_855 + 1),(int)(acStack_855 + ~uVar3));
                local_4._0_1_ = 5;
                FUN_10001b90(local_86c,&local_894);
                local_4._0_1_ = 6;
                FUN_10001b90(local_860,&local_888);
                local_4._0_1_ = 7;
                FUN_10002610(this_00,local_814,local_86c);
                local_4._0_1_ = 8;
                FUN_10001e40(local_860);
                local_4._0_1_ = 5;
                FUN_10001e40(local_86c);
                local_4 = CONCAT31(local_4._1_3_,3);
                if ((local_894 != (undefined4 *)0x0) && (local_88c - (int)local_894 != 0)) {
                  FUN_10002100(local_894,local_88c - (int)local_894);
                }
                local_4 = 0xffffffff;
                if ((local_888 != (undefined4 *)0x0) && (local_880 - (int)local_888 != 0)) {
                  FUN_10002100(local_888,local_880 - (int)local_888);
                }
              }
            }
          }
        }
        iVar5 = FUN_100034d0((undefined4 *)pFVar2,(undefined4 *)&local_80c,0x400);
      }
      FUN_1000488b(pFVar2);
      puVar4 = FUN_10003340(this,s_TABLE_END_100132ac);
      bVar8 = puVar4 != (undefined *)0x0;
    }
  }
  ExceptionList = local_c;
  return bVar8;
}




undefined * __thiscall FUN_10003340(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *local_58;
  int local_54;
  undefined4 local_50;
  char local_4c;
  undefined4 local_4b;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10010060;
  local_c = ExceptionList;
  if (param_1 == (char *)0x0) {
    ExceptionList = &local_c;
    tq::SysLogSave(&DAT_100130d0,s_pszStrIndex_10013158,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100132b8,0x4b);
    ExceptionList = local_c;
    return PTR_s_ERROR_CnTableGet_10013294;
  }
  local_4c = DAT_100163d0;
  puVar4 = &local_4b;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_10004e0b(param_1,(byte *)s_TABLE__s_10013310);
  if (iVar2 != 1) {
    ExceptionList = local_c;
    return PTR_s_ERROR_CnTableGet_10013294;
  }
  local_58 = (undefined4 *)0x0;
  local_54 = 0;
  local_50 = 0;
  uVar3 = 0xffffffff;
  pcVar5 = &local_4c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_4 = 0;
  iVar2 = (int)&local_50 + ~uVar3 + 3;
  FUN_10001df0(&local_58,(iVar2 - (int)&local_4c) + 1);
  local_54 = FUN_10002c80((undefined4 *)&local_4c,iVar2,local_58);
  FUN_10001da0((int)&local_58);
  local_4 = 1;
  FUN_100027d0((int *)((int)this + 4),(int *)&param_1,(int *)&local_58);
  local_4 = 0xffffffff;
  if ((local_58 != (undefined4 *)0x0) && (local_50 - (int)local_58 != 0)) {
    FUN_10002100(local_58,local_50 - (int)local_58);
  }
  if (param_1 == *(char **)((int)this + 4)) {
    tq::SysLogSave(s_CnTableGet_Error__szKey__s_100132f4,&local_4c);
    ExceptionList = local_c;
    return PTR_s_ERROR_CnTableGet_10013294;
  }
  ExceptionList = local_c;
  return *(undefined **)(param_1 + 0x1c);
}




int FUN_100034d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) && (0 < (int)param_3)) {
    puVar3 = param_2;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar2 = 0;
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    while( true ) {
      uVar1 = FUN_10004e3f(param_1);
      if (uVar1 == 0xffffffff) {
        return -1;
      }
      if (uVar1 == 10) break;
      *(char *)(iVar2 + (int)param_2) = (char)uVar1;
      iVar2 = iVar2 + 1;
      if ((int)param_3 <= iVar2) {
        return -3;
      }
    }
    return iVar2;
  }
  tq::SysLogSave(&DAT_100130d0,s_fp____pszLine____nBufSize_>_0_10013164,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100132b8,0x65);
  return -2;
}




uint FUN_10003570(char *param_1,char *param_2)

{
  char cVar1;
  uint extraout_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char local_40;
  undefined4 local_3f;
  
  if (param_2 == (char *)0x0) {
    tq::SysLogSave(&DAT_100130d0,s_pszLine_10013194,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100132b8,0x80);
    return extraout_EAX & 0xffffff00;
  }
  local_40 = DAT_100163d0;
  puVar6 = &local_3f;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  uVar2 = FUN_10004e0b(param_2,(byte *)s__define_TABLE__s_1001331c);
  if (uVar2 != 1) {
    return uVar2 & 0xffffff00;
  }
  uVar2 = 0xffffffff;
  pcVar5 = &local_40;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar7 + -uVar2;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    param_1 = param_1 + 1;
  }
  return 1;
}




uint FUN_10003610(char *param_1,uint *param_2)

{
  char cVar1;
  uint extraout_EAX;
  uint *puVar2;
  uint extraout_EAX_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  
  if ((param_2 == (uint *)0x0) || (param_1 == (char *)0x0)) {
    tq::SysLogSave(&DAT_100130d0,s_pszLine____pszMsgOut_100131c0,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100132b8,0x8f);
    return extraout_EAX & 0xffffff00;
  }
  puVar2 = FUN_10004e70(param_2,&DAT_100131bc);
  if (puVar2 != (uint *)0x0) {
    iVar3 = -1;
    puVar7 = puVar2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      uVar4 = *puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
    } while ((char)uVar4 != '\0');
    if (iVar3 != -2) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)((int)puVar2 + 1);
      do {
        pcVar8 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar8 + -uVar4;
      pcVar8 = param_1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (0 < (int)(~uVar4 - 1)) {
        param_1[~uVar4 - 2] = '\0';
      }
      return 1;
    }
  }
  tq::SysLogSave(&DAT_100130d0,s_pszMsg____strlen_pszMsg__>_0_1001319c,s_D__CQ_NEWSVR_MODULES_20090327_Ut_100132b8,0x94);
  return extraout_EAX_00 & 0xffffff00;
}




undefined4 FUN_100036d0(void)

{
  return 1;
}




/* void __cdecl tq::LogSave(char const *,char const *,...) */

void __cdecl tq::LogSave(char *param_1,char *param_2,...)

{
  ILog *pIVar1;
  int in_stack_00001104;
  byte *in_stack_00001108;
  
                    /* 0x36e0  15  ?LogSave@tq@@YAXPBD0ZZ */
  FUN_10005670();
  if (in_stack_00001104 != 0) {
    FUN_10005618(&stack0x00000000,(byte *)s_SysLog__s_10013330);
    if (in_stack_00001108 != (byte *)0x0) {
      FUN_100055c7(&stack0x00000100,in_stack_00001108,(undefined4 *)&stack0x0000110c);
      pIVar1 = LogInstanceGet();
      (**(code **)(*(int *)pIVar1 + 4))();
    }
  }
  return;
}




/* void __cdecl tq::GmLogSave(char const *,char const *,...) */

void __cdecl tq::GmLogSave(char *param_1,char *param_2,...)

{
  ILog *pIVar1;
  int in_stack_00001104;
  byte *in_stack_00001108;
  
                    /* 0x3750  13  ?GmLogSave@tq@@YAXPBD0ZZ */
  FUN_10005670();
  if (in_stack_00001104 != 0) {
    FUN_10005618(&stack0x00000000,(byte *)s_GMLog__s_1001333c);
    if (in_stack_00001108 != (byte *)0x0) {
      FUN_100055c7(&stack0x00000100,in_stack_00001108,(undefined4 *)&stack0x0000110c);
      pIVar1 = LogInstanceGet();
      (**(code **)(*(int *)pIVar1 + 4))();
    }
  }
  return;
}




/* void __cdecl tq::SysLogSave(char const *,...) */

void __cdecl tq::SysLogSave(char *param_1,...)

{
  ILog *pIVar1;
  byte *in_stack_00001004;
  
                    /* 0x37c0  16  ?SysLogSave@tq@@YAXPBDZZ */
  FUN_10005670();
  if (in_stack_00001004 != (byte *)0x0) {
    FUN_100055c7(&stack0x00000000,in_stack_00001004,(undefined4 *)&stack0x00001008);
    pIVar1 = LogInstanceGet();
    (**(code **)(*(int *)pIVar1 + 4))();
  }
  return;
}




/* void __cdecl tq::DebugLogMsg(char const *,...) */

void __cdecl tq::DebugLogMsg(char *param_1,...)

{
                    /* 0x3810  10  ?DebugLogMsg@tq@@YAXPBDZZ */
  return;
}




/* void __cdecl tq::ErrorMsg(char const *,...) */

void __cdecl tq::ErrorMsg(char *param_1,...)

{
  byte *in_stack_00001004;
  
                    /* 0x3820  12  ?ErrorMsg@tq@@YAXPBDZZ */
  FUN_10005670();
  if (in_stack_00001004 != (byte *)0x0) {
    FUN_100055c7(&stack0x00000000,in_stack_00001004,(undefined4 *)&stack0x00001008);
    MessageBoxA((HWND)0x0,&stack0x00000000,s_Error_10013354,0x10);
  }
  return;
}




/* void __cdecl tq::DebugMsg(char const *,...) */

void __cdecl tq::DebugMsg(char *param_1,...)

{
  byte *in_stack_00001004;
  
                    /* 0x3870  11  ?DebugMsg@tq@@YAXPBDZZ */
  FUN_10005670();
  if (in_stack_00001004 != (byte *)0x0) {
    FUN_100055c7(&stack0x00000000,in_stack_00001004,(undefined4 *)&stack0x00001008);
    OutputDebugStringA(&stack0x00000000);
    OutputDebugStringA(&DAT_1001335c);
  }
  return;
}




/* class tq::ILog & __cdecl tq::LogInstanceGet(void) */

ILog * __cdecl tq::LogInstanceGet(void)

{
                    /* 0x38c0  14  ?LogInstanceGet@tq@@YAAAVILog@1@XZ */
  if ((DAT_1001646c & 1) == 0) {
    DAT_1001646c = DAT_1001646c | 1;
    FUN_100041a0((undefined4 *)&DAT_10016430);
    FUN_1000571d(&LAB_10003900);
  }
  return (ILog *)&DAT_10016430;
}




void CnStrInit(void)

{
  void *this;
  char *pcVar1;
  
                    /* 0x3910  18  CnStrInit */
  pcVar1 = s_cnstr_txt_10013360;
  this = (void *)FUN_10003990();
  FUN_10001000(this,pcVar1);
  return;
}




void __cdecl CnStrGet(char *param_1)

{
  void *this;
  
                    /* 0x3930  17  CnStrGet */
  this = (void *)FUN_10003990();
  FUN_10001560(this,param_1);
  return;
}




void CnTableInit(void)

{
  void *this;
  char *pcVar1;
  
                    /* 0x3950  20  CnTableInit */
  pcVar1 = s_cntable_txt_1001336c;
  this = (void *)FUN_10003ae0();
  FUN_10002fb0(this,pcVar1);
  return;
}




void __cdecl CnTableGet(char *param_1)

{
  void *this;
  
                    /* 0x3970  19  CnTableGet */
  this = (void *)FUN_10003ae0();
  FUN_10003340(this,param_1);
  return;
}




void FUN_10003990(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_15;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001008e;
  local_c = ExceptionList;
  puVar2 = DAT_10016860;
  if (DAT_10016860 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar3 = operator_new(0x10);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      piVar1 = puVar3 + 1;
      *piVar1 = 0;
      iVar4 = FUN_10001e60(0x28);
      *piVar1 = iVar4;
      local_4._0_1_ = 1;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = local_15;
      FUN_10003a80(piVar1);
      *puVar3 = &PTR_FUN_100112bc;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (puVar3[2] != 0) {
        FUN_10003aa0(*(undefined4 **)(*piVar1 + 4));
        *(int *)(*piVar1 + 8) = *piVar1;
        *(undefined4 *)(*piVar1 + 4) = 0;
        *(int *)(*piVar1 + 0xc) = *piVar1;
        puVar3[2] = 0;
      }
    }
    local_4 = 0xffffffff;
    puVar2 = DAT_10016860;
    if ((puVar3 != DAT_10016860) && (puVar2 = puVar3, DAT_10016860 != (undefined4 *)0x0)) {
      (**(code **)*DAT_10016860)(1);
    }
  }
  DAT_10016860 = puVar2;
  ExceptionList = local_c;
  return;
}




void __fastcall FUN_10003a70(undefined4 *param_1)

{
  FUN_10002100((undefined4 *)*param_1,0x28);
  return;
}




void __fastcall FUN_10003a80(int *param_1)

{
  *(undefined1 *)*param_1 = 0;
  *(undefined4 *)(*param_1 + 4) = 0;
  *(int *)(*param_1 + 8) = *param_1;
  *(int *)(*param_1 + 0xc) = *param_1;
  return;
}




void FUN_10003aa0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    FUN_10003aa0((undefined4 *)param_1[3]);
    puVar1 = (undefined4 *)param_1[2];
    FUN_10001390(param_1 + 4);
    FUN_10002100(param_1,0x28);
    param_1 = puVar1;
  }
  return;
}




void FUN_10003ae0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100100b6;
  local_c = ExceptionList;
  puVar2 = DAT_1001685c;
  if (DAT_1001685c == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar3 = operator_new(0x10);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      piVar1 = puVar3 + 1;
      *piVar1 = 0;
      iVar4 = FUN_10001e60(0x28);
      *piVar1 = iVar4;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = local_11;
      FUN_10003a80(piVar1);
      *puVar3 = &PTR_FUN_100112c0;
      local_4 = CONCAT31(local_4._1_3_,1);
      if (puVar3[2] != 0) {
        FUN_10003aa0(*(undefined4 **)(*piVar1 + 4));
        *(int *)(*piVar1 + 8) = *piVar1;
        *(undefined4 *)(*piVar1 + 4) = 0;
        *(int *)(*piVar1 + 0xc) = *piVar1;
        puVar3[2] = 0;
      }
    }
    local_4 = 0xffffffff;
    puVar2 = DAT_1001685c;
    if ((puVar3 != DAT_1001685c) && (puVar2 = puVar3, DAT_1001685c != (undefined4 *)0x0)) {
      (**(code **)*DAT_1001685c)(1);
    }
  }
  DAT_1001685c = puVar2;
  ExceptionList = local_c;
  return;
}




void FUN_10003c00(void)

{
  FUN_1000571d(&LAB_10003c50);
  return;
}




void FUN_10003c10(void)

{
  FUN_1000571d(&LAB_10003c20);
  return;
}




undefined4 * __thiscall FUN_10003c80(void *this,byte param_1)

{
  FUN_10003ca0(this);
  if ((param_1 & 1) != 0) {
    FUN_10004880(this);
  }
  return this;
}




void __fastcall FUN_10003ca0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_100100c8;
  piVar1 = param_1 + 1;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_100112bc;
  local_4 = 0;
  if (param_1[2] != 0) {
    puVar3 = *(undefined4 **)(*piVar1 + 4);
    while (puVar3 != (undefined4 *)0x0) {
      FUN_10003aa0((undefined4 *)puVar3[3]);
      puVar2 = (undefined4 *)puVar3[2];
      FUN_10003e30(puVar3 + 4,0);
      FUN_10002100(puVar3,0x28);
      puVar3 = puVar2;
    }
    *(int *)(*piVar1 + 8) = *piVar1;
    *(undefined4 *)(*piVar1 + 4) = 0;
    *(int *)(*piVar1 + 0xc) = *piVar1;
    param_1[2] = 0;
  }
  puVar3 = (undefined4 *)*piVar1;
  iVar5 = FUN_10001a50(&DAT_10016418,1);
  uVar4 = DAT_10013130;
  if (iVar5 != 0) {
    uVar8 = 0;
    if (DAT_10013130 != 0) {
      uVar9 = DAT_100163d4 >> 1;
      do {
        if (((uVar9 <= uVar8) && (DAT_10016418 == 0)) && (iVar5 = FUN_10001a50(&DAT_10016418,1), iVar5 == 0)) {
          DAT_10013130 = 1000;
          DAT_100163d4 = uVar8;
          goto LAB_10003dff;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
    }
    DAT_10013130 = 0x1e;
    iVar5 = 6;
    while( true ) {
      iVar7 = iVar5;
      if (0x1b < iVar5) {
        iVar7 = 0x1b;
      }
      iVar6 = FUN_10001a50(&DAT_10016418,1);
      if (iVar6 == 0) break;
      FUN_10001a70(iVar7);
      iVar5 = iVar5 + 1;
    }
  }
LAB_10003dff:
  *puVar3 = DAT_100163e8;
  DAT_100163e8 = puVar3;
  DAT_10016418 = 0;
  ExceptionList = local_c;
  return;
}




undefined4 * __thiscall FUN_10003e30(void *this,byte param_1)

{
  FUN_10001390(this);
  if ((param_1 & 1) != 0) {
    FUN_10004880(this);
  }
  return this;
}




void __fastcall FUN_10003e50(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void **ppvVar4;
  LONG LVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100100e8;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar4 = &local_c;
  if (param_1[1] != 0) {
    ppvVar4 = &local_c;
    puVar2 = *(undefined4 **)(*param_1 + 4);
    while (ExceptionList = ppvVar4, puVar2 != (undefined4 *)0x0) {
      FUN_10003aa0((undefined4 *)puVar2[3]);
      puVar1 = (undefined4 *)puVar2[2];
      FUN_10003e30(puVar2 + 4,0);
      FUN_10002100(puVar2,0x28);
      ppvVar4 = ExceptionList;
      puVar2 = puVar1;
    }
    *(int *)(*param_1 + 8) = *param_1;
    *(undefined4 *)(*param_1 + 4) = 0;
    *(int *)(*param_1 + 0xc) = *param_1;
    param_1[1] = 0;
    ppvVar4 = ExceptionList;
  }
  ExceptionList = ppvVar4;
  puVar2 = (undefined4 *)*param_1;
  LVar5 = InterlockedExchange(&DAT_10016418,1);
  uVar3 = DAT_10013130;
  if (LVar5 != 0) {
    uVar6 = 0;
    if (DAT_10013130 != 0) {
      uVar8 = DAT_100163d4 >> 1;
      do {
        if (((uVar8 <= uVar6) && (DAT_10016418 == 0)) && (LVar5 = InterlockedExchange(&DAT_10016418,1), LVar5 == 0)) {
          DAT_10013130 = 1000;
          DAT_100163d4 = uVar6;
          goto LAB_10003fa8;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    DAT_10013130 = 0x1e;
    iVar9 = 6;
    while( true ) {
      iVar7 = iVar9;
      if (0x1b < iVar9) {
        iVar7 = 0x1b;
      }
      LVar5 = InterlockedExchange(&DAT_10016418,1);
      if (LVar5 == 0) break;
      if (iVar7 < 0x15) {
        Sleep(0);
        iVar9 = iVar9 + 1;
      }
      else {
        Sleep(1 << ((char)iVar7 - 0x14U & 0x1f));
        iVar9 = iVar9 + 1;
      }
    }
  }
LAB_10003fa8:
  *puVar2 = DAT_100163e8;
  DAT_100163e8 = puVar2;
  DAT_10016418 = 0;
  ExceptionList = local_c;
  return;
}




undefined4 * __thiscall FUN_10003ff0(void *this,byte param_1)

{
  FUN_10004010(this);
  if ((param_1 & 1) != 0) {
    FUN_10004880(this);
  }
  return this;
}




void __fastcall FUN_10004010(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_10010108;
  piVar1 = param_1 + 1;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_100112c0;
  local_4 = 0;
  if (param_1[2] != 0) {
    puVar3 = *(undefined4 **)(*piVar1 + 4);
    while (puVar3 != (undefined4 *)0x0) {
      FUN_10003aa0((undefined4 *)puVar3[3]);
      puVar2 = (undefined4 *)puVar3[2];
      FUN_10003e30(puVar3 + 4,0);
      FUN_10002100(puVar3,0x28);
      puVar3 = puVar2;
    }
    *(int *)(*piVar1 + 8) = *piVar1;
    *(undefined4 *)(*piVar1 + 4) = 0;
    *(int *)(*piVar1 + 0xc) = *piVar1;
    param_1[2] = 0;
  }
  puVar3 = (undefined4 *)*piVar1;
  iVar5 = FUN_10001a50(&DAT_10016418,1);
  uVar4 = DAT_10013130;
  if (iVar5 != 0) {
    uVar8 = 0;
    if (DAT_10013130 != 0) {
      uVar9 = DAT_100163d4 >> 1;
      do {
        if (((uVar9 <= uVar8) && (DAT_10016418 == 0)) && (iVar5 = FUN_10001a50(&DAT_10016418,1), iVar5 == 0)) {
          DAT_10013130 = 1000;
          DAT_100163d4 = uVar8;
          goto LAB_1000416f;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
    }
    DAT_10013130 = 0x1e;
    iVar5 = 6;
    while( true ) {
      iVar7 = iVar5;
      if (0x1b < iVar5) {
        iVar7 = 0x1b;
      }
      iVar6 = FUN_10001a50(&DAT_10016418,1);
      if (iVar6 == 0) break;
      FUN_10001a70(iVar7);
      iVar5 = iVar5 + 1;
    }
  }
LAB_1000416f:
  *puVar3 = DAT_100163e8;
  DAT_100163e8 = puVar3;
  DAT_10016418 = 0;
  ExceptionList = local_c;
  return;
}




undefined4 * __fastcall FUN_100041a0(undefined4 *param_1)

{
  *param_1 = &tq::ILog::_vftable_;
  param_1[1] = &PTR_LAB_1001135c;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_10011350;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  *param_1 = &PTR_LAB_10011348;
  param_1[1] = &PTR_FUN_10011334;
  return param_1;
}




undefined4 * __thiscall FUN_100041f0(void *this,byte param_1)

{
  FUN_10004220(this);
  if ((param_1 & 1) != 0) {
    FUN_10004880((undefined *)((int)this + -4));
  }
  return (undefined4 *)((int)this + -4);
}




void __fastcall FUN_10004220(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1001015e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[-1] = &PTR_LAB_10011348;
  *param_1 = &PTR_FUN_10011334;
  local_4 = 2;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
  param_1[7] = &PTR_LAB_10011350;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  puVar1 = (undefined4 *)param_1[1];
  iVar2 = (param_1[3] - (int)puVar1) / 0x1100;
  local_4 = local_4 & 0xffffff00;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 0x1100;
    if (uVar3 < 0x81) {
      FUN_10001aa0(&DAT_10016418);
      *puVar1 = (&DAT_100163d4)[uVar3 + 7 >> 3];
      (&DAT_100163d4)[uVar3 + 7 >> 3] = puVar1;
      DAT_10016418 = 0;
    }
    else {
      FUN_10004d22((undefined *)puVar1);
    }
  }
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x4) & (uint)param_1) = &PTR_LAB_1001135c;
  ExceptionList = pvStack_c;
  return;
}




void FUN_10004470(CHAR param_1)

{
  char *pcVar1;
  char cVar2;
  FILE *pFVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int in_stack_00001308;
  
  FUN_10005670();
  pcVar1 = (char *)(in_stack_00001308 + 0x100);
  if (pcVar1 != (char *)0x0) {
    iVar6 = -1;
    pcVar7 = pcVar1;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (iVar6 != -2) {
      FUN_10005936((int *)&stack0x00000000);
      FUN_100057d6((int *)&stack0x00000000);
      FUN_10005618(&stack0x00000104,(byte *)s__s__d__d__d_log_100133b0);
      pFVar3 = (FILE *)FUN_10004939(&stack0x00000104,&DAT_100133ac);
      if (pFVar3 != (FILE *)0x0) {
        FUN_1000e1c0(&stack0x00000304,pcVar1,0x1000);
        FUN_10005618(&stack0x00000204,(byte *)s__d__d__d__d__d__d_10013398);
        FUN_1000579a((int *)pFVar3,(byte *)s__s_____s_1001338c);
        uVar4 = FUN_1000e610((int)pFVar3);
        DVar5 = FUN_1000e586(uVar4);
        FUN_1000488b(pFVar3);
        if (0x13fffff < DVar5) {
          param_1 = DAT_100163d0;
          puVar8 = (undefined4 *)&stack0x00000005;
          for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          *(undefined2 *)puVar8 = 0;
          *(undefined1 *)((int)puVar8 + 2) = 0;
          FUN_1000e070(4);
          FUN_10005618(&param_1,(byte *)s__s__d__d__d__lu_log_10013378);
          FUN_1000576c(&stack0x00000104,&param_1);
        }
      }
    }
  }
  return;
}




undefined4 __fastcall FUN_100045f0(int param_1)

{
  while( true ) {
    if (*(int *)(param_1 + 4) == *(int *)(param_1 + 8)) {
      return 1;
    }
    if ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1100) <= *(uint *)(param_1 + 0x14)) break;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) + 1;
    FUN_10004470((CHAR)*(undefined4 *)(param_1 + 4));
  }
  return 1;
}




void __fastcall FUN_10004650(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  LONG LVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = (undefined4 *)*param_1;
  iVar8 = (param_1[2] - (int)puVar1) / 0x1100;
  if (iVar8 != 0) {
    uVar3 = iVar8 * 0x1100;
    if (0x80 < uVar3) {
      FUN_10004d22((undefined *)puVar1);
      return;
    }
    LVar4 = InterlockedExchange(&DAT_10016418,1);
    uVar2 = DAT_10013130;
    if (LVar4 != 0) {
      uVar6 = 0;
      if (DAT_10013130 != 0) {
        uVar5 = DAT_100163d4 >> 1;
        do {
          if (((uVar5 <= uVar6) && (DAT_10016418 == 0)) && (LVar4 = InterlockedExchange(&DAT_10016418,1), LVar4 == 0)) {
            DAT_10013130 = 1000;
            DAT_100163d4 = uVar6;
            goto LAB_1000478c;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      DAT_10013130 = 0x1e;
      iVar8 = 6;
      while( true ) {
        iVar7 = iVar8;
        if (0x1b < iVar8) {
          iVar7 = 0x1b;
        }
        LVar4 = InterlockedExchange(&DAT_10016418,1);
        if (LVar4 == 0) break;
        if (iVar7 < 0x15) {
          Sleep(0);
          iVar8 = iVar8 + 1;
        }
        else {
          Sleep(1 << ((char)iVar7 - 0x14U & 0x1f));
          iVar8 = iVar8 + 1;
        }
      }
    }
LAB_1000478c:
    *puVar1 = (&DAT_100163d4)[uVar3 + 7 >> 3];
    (&DAT_100163d4)[uVar3 + 7 >> 3] = (uint)puVar1;
    DAT_10016418 = 0;
  }
  return;
}




void __fastcall FUN_100047c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_10011350;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}




undefined4 * __thiscall FUN_10004800(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_10011350;
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  if ((param_1 & 1) != 0) {
    FUN_10004880(this);
  }
  return this;
}




void __fastcall FUN_10004830(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10004838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)*param_1 + 4))();
    return;
  }
  return;
}




void __fastcall FUN_10004840(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1001135c;
  return;
}




void __cdecl FUN_10004880(undefined *param_1)

{
  FUN_10004d22(param_1);
  return;
}




undefined4 __cdecl FUN_1000488b(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10005c77((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10005cc9((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}




/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_10005e54((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_10005d1b(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_10004d22(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}




undefined4 * __cdecl FUN_10004908(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_100060cd();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_10005f5d(param_1,param_2,param_3,puVar1);
  FUN_10005cc9((uint)puVar1);
  return puVar2;
}




void __cdecl FUN_10004939(LPCSTR param_1,char *param_2)

{
  FUN_10004908(param_1,param_2,0x40);
  return;
}




void FUN_1000494c(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x10004977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}




void FUN_10004980(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10004985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}




void FUN_10004987(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000498c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}




void FUN_1000498e(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x100049b6,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}




undefined4 __cdecl FUN_100049dd(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_10006195(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}




undefined4 __cdecl FUN_10004a13(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_10004a67;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}




void __cdecl FUN_10004a67(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_10006195(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),*(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}




undefined4 __cdecl
FUN_10004a8c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffbc;
  local_28 = FUN_10004b42;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x10004b14;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_10006a81();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}




undefined4 __cdecl FUN_10004b42(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_10006195(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),*(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01'
              );
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_1000498e(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x10004bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}




int __cdecl FUN_10004bb7(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = uVar5;
  uVar3 = uVar5;
  while (uVar2 = uVar4, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      FUN_10006be9();
    }
    uVar5 = uVar5 - 1;
    if (((*(int *)(iVar1 + 4 + uVar5 * 0x14) < param_3) && (param_3 <= *(int *)(iVar1 + uVar5 * 0x14 + 8))) || (uVar4 = uVar2, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      uVar3 = uVar2;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(uint *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_10006be9();
  }
  return iVar1 + uVar5 * 0x14;
}




/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10004c4c,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}




/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_10004c54;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10004d0a();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}




/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10004c54) && (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}




/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_100133c8 = param_1;
  DAT_100133c4 = in_EAX;
  DAT_100133cc = unaff_EBP;
  return;
}




void FUN_10004d0a(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100133c8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_100133c4 = in_EAX;
  DAT_100133cc = unaff_EBP;
  return;
}




void __cdecl FUN_10004d22(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10011370;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10016bd4 == 3) {
    ExceptionList = &local_14;
    FUN_10008162(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10006f01((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10006f2c(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10004d8c();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10016bd4 != 2) goto LAB_10004dee;
    ExceptionList = &local_14;
    FUN_10008162(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10007c5c(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10007cb3(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10004de4();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10004dee:
  HeapFree(DAT_10016bd0,0,param_1);
  ExceptionList = local_14;
  return;
}




void FUN_10004d8c(void)

{
  FUN_100081c3(9);
  return;
}




void FUN_10004de4(void)

{
  FUN_100081c3(9);
  return;
}




void __cdecl FUN_10004e0b(char *param_1,byte *param_2)

{
  void *this;
  char *local_24;
  size_t local_20;
  char *local_1c;
  undefined4 local_18;
  
  local_18 = 0x49;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = _strlen(param_1);
  FUN_100082b8(this,(int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  return;
}




uint __cdecl FUN_10004e3f(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  FUN_10005c77((uint)param_1);
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10008deb(param_1);
  }
  else {
    uVar2 = (uint)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  FUN_10005cc9((uint)param_1);
  return uVar2;
}




uint * __cdecl FUN_10004e70(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    while (((uint)param_1 & 3) != 0) {
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar7 = uVar5 ^ 0xffffffff ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (uint *)0x0;
          }
          if ((uVar5 + 0x7efefeff & 0x80000000) == 0) {
            return (uint *)0x0;
          }
        }
      }
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 8);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
    }
    return (uint *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (uint *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (uint *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar4 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar8 = pcVar8 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}




void __fastcall FUN_10004ef0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1001138c;
  return;
}




exception * __thiscall FUN_10004f01(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    FUN_10004880(this);
  }
  return this;
}




undefined4 * __thiscall FUN_10004f1d(void *this,undefined4 *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  *(undefined ***)this = &PTR_FUN_1001138c;
  sVar1 = _strlen((char *)*param_1);
  puVar2 = operator_new(sVar1 + 1);
  *(uint **)((int)this + 4) = puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_10008fa0(puVar2,(uint *)*param_1);
  }
  *(undefined4 *)((int)this + 8) = 1;
  return this;
}




/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_1001138c;
  if (*(int *)(this + 8) != 0) {
    FUN_10004880(*(undefined **)(this + 4));
  }
  return;
}




void __fastcall FUN_10004fc7(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_10008162(0x1b);
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_10004d22((undefined *)param_1[1]);
  }
  FUN_100081c3(0x1b);
  return;
}




undefined4 * __thiscall FUN_10004ff0(void *this,byte param_1)

{
  FUN_10004fc7(this);
  if ((param_1 & 1) != 0) {
    FUN_10004880(this);
  }
  return this;
}




undefined4 * __cdecl FUN_10005010(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_100051c7_caseD_2;
        case 3:
          goto switchD_100051c7_caseD_3;
        }
        goto switchD_100051c7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100051c7_caseD_0;
      case 1:
        goto switchD_100051c7_caseD_1;
      case 2:
        goto switchD_100051c7_caseD_2;
      case 3:
        goto switchD_100051c7_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100051c7_caseD_2;
            case 3:
              goto switchD_100051c7_caseD_3;
            }
            goto switchD_100051c7_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100051c7_caseD_2;
            case 3:
              goto switchD_100051c7_caseD_3;
            }
            goto switchD_100051c7_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_100051c7_caseD_2;
            case 3:
              goto switchD_100051c7_caseD_3;
            }
            goto switchD_100051c7_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_100051c7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100051c7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100051c7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100051c7_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10005045_caseD_2;
      case 3:
        goto switchD_10005045_caseD_3;
      }
      goto switchD_10005045_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005045_caseD_0;
    case 1:
      goto switchD_10005045_caseD_1;
    case 2:
      goto switchD_10005045_caseD_2;
    case 3:
      goto switchD_10005045_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10005045_caseD_2;
          case 3:
            goto switchD_10005045_caseD_3;
          }
          goto switchD_10005045_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10005045_caseD_2;
          case 3:
            goto switchD_10005045_caseD_3;
          }
          goto switchD_10005045_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10005045_caseD_2;
          case 3:
            goto switchD_10005045_caseD_3;
          }
          goto switchD_10005045_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10005045_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005045_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005045_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005045_caseD_0:
  return param_1;
}




/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10016508);
  return pvVar1;
}




/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10005383((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10009114(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}




void __cdecl FUN_10005383(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100113b0;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  if (DAT_10016bd4 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10016bcc) {
      ExceptionList = &local_14;
      FUN_10008162(9);
      local_8 = 0;
      piVar1 = FUN_10007255(param_1);
      local_8 = 0xffffffff;
      FUN_100053ea();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10016bd4 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_100156c4) {
        ExceptionList = &local_14;
        FUN_10008162(9);
        local_8 = 1;
        piVar1 = FUN_10007cf8(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10005449();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10005462;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10005462:
  HeapAlloc(DAT_10016bd0,0,dwBytes);
  ExceptionList = local_14;
  return;
}




void FUN_100053ea(void)

{
  FUN_100081c3(9);
  return;
}




void FUN_10005449(void)

{
  FUN_100081c3(9);
  return;
}




/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2003 Release */

void __CxxThrowException_8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pDVar2 = &DAT_100113c8;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}




/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x100054fe;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000553b;
        goto LAB_100055a9;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x100055a5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_100055a9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000553b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x100055a5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x100055a5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x100055a5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x100054fe:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1000553b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}




int __cdecl FUN_100055c7(undefined1 *param_1,byte *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_100092ab((int *)&local_24,param_2,param_3);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10009193(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}




int __cdecl FUN_10005618(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_100092ab((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10009193(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}




/* WARNING: Unable to track spacebase fully for stack */

void FUN_10005670(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}




undefined4 __cdecl FUN_1000569f(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_10009c04();
  pbVar1 = (byte *)FUN_10009f5f(DAT_10016bb0);
  if (pbVar1 < DAT_10016bac + (4 - (int)DAT_10016bb0)) {
    SVar2 = FUN_10009f5f(DAT_10016bb0);
    pbVar1 = FUN_10009c30(DAT_10016bb0,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_10005714;
    }
    DAT_10016bac = pbVar1 + ((int)DAT_10016bac - (int)DAT_10016bb0 >> 2) * 4;
    DAT_10016bb0 = pbVar1;
  }
  *(undefined4 *)DAT_10016bac = param_1;
  DAT_10016bac = DAT_10016bac + 4;
LAB_10005714:
  FUN_10009c0d();
  return param_1;
}




int __cdecl FUN_1000571d(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000569f(param_1);
  return (iVar1 != 0) - 1;
}




/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}




undefined4 __cdecl FUN_1000576c(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_1000a04d(uVar2);
    return 0xffffffff;
  }
  return 0;
}




int __cdecl FUN_1000579a(int *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_10005c77((uint)param_1);
  iVar1 = FUN_1000a0d2(param_1);
  iVar2 = FUN_100092ab(param_1,param_2,(undefined4 *)&stack0x0000000c);
  FUN_1000a15f(iVar1,param_1);
  FUN_10005cc9((uint)param_1);
  return iVar2;
}




int * __cdecl FUN_100057d6(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  
  piVar2 = param_1;
  if (*param_1 < 0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_1000a189();
    iVar3 = *piVar2;
    if ((iVar3 < 0x3f481) || (0x7ffc0b7e < iVar3)) {
      piVar2 = FUN_1000a74b(piVar2);
      bVar1 = FUN_1000a43e(piVar2);
      iVar3 = *piVar2;
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        iVar3 = iVar3 - DAT_10015918;
      }
      param_1 = (int *)(iVar3 - DAT_10015910);
      iVar3 = (int)param_1 % 0x3c;
      *piVar2 = iVar3;
      if (iVar3 < 0) {
        *piVar2 = iVar3 + 0x3c;
        param_1 = param_1 + -0xf;
      }
      param_1 = (int *)((int)param_1 / 0x3c + piVar2[1]);
      iVar3 = (int)param_1 % 0x3c;
      piVar2[1] = iVar3;
      if (iVar3 < 0) {
        piVar2[1] = iVar3 + 0x3c;
        param_1 = param_1 + -0xf;
      }
      param_1 = (int *)((int)param_1 / 0x3c + piVar2[2]);
      iVar3 = (int)param_1 % 0x18;
      piVar2[2] = iVar3;
      if (iVar3 < 0) {
        piVar2[2] = iVar3 + 0x18;
        param_1 = param_1 + -6;
      }
      iVar3 = (int)param_1 / 0x18;
      if (iVar3 < 1) {
        if (-1 < iVar3) {
          return piVar2;
        }
        piVar2[6] = (piVar2[6] + 7 + iVar3) % 7;
        piVar2[3] = piVar2[3] + iVar3;
        if (piVar2[3] < 1) {
          piVar2[5] = piVar2[5] + -1;
          piVar2[3] = piVar2[3] + 0x1f;
          piVar2[7] = 0x16c;
          piVar2[4] = 0xb;
          return piVar2;
        }
      }
      else {
        piVar2[6] = (piVar2[6] + iVar3) % 7;
        piVar2[3] = piVar2[3] + iVar3;
      }
      piVar2[7] = piVar2[7] + iVar3;
    }
    else {
      param_1 = (int *)(iVar3 - DAT_10015910);
      piVar2 = FUN_1000a74b((int *)&param_1);
      if ((DAT_10015914 != 0) && (bVar1 = FUN_1000a43e(piVar2), CONCAT31(extraout_var,bVar1) != 0)) {
        param_1 = (int *)((int)param_1 - DAT_10015918);
        piVar2 = FUN_1000a74b((int *)&param_1);
        piVar2[8] = 1;
      }
    }
  }
  return piVar2;
}




void __cdecl FUN_10005936(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_10016480._2_2_) {
    if (local_24.wHour == (WORD)DAT_10016480) {
      if (local_24.wDay == DAT_1001647c._2_2_) {
        if (local_24.wMonth == DAT_10016478._2_2_) {
          if (local_24.wYear == (WORD)DAT_10016478) goto LAB_100059e0;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_10016470 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_10016470 = 1;
  }
  else {
    DAT_10016470 = 0;
  }
  DAT_10016478._0_2_ = local_24.wYear;
  DAT_10016478._2_2_ = local_24.wMonth;
  DAT_1001647c._0_2_ = local_24.wDayOfWeek;
  DAT_1001647c._2_2_ = local_24.wDay;
  DAT_10016480._0_2_ = local_24.wHour;
  DAT_10016480._2_2_ = local_24.wMinute;
  DAT_10016484._0_2_ = local_24.wSecond;
  DAT_10016484._2_2_ = local_24.wMilliseconds;
LAB_100059e0:
  iVar2 = FUN_1000a855((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,(uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_10016470);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10005a12(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10016518 = GetVersion();
    iVar1 = FUN_10006db4(1);
    if (iVar1 != 0) {
      _DAT_10016524 = DAT_10016518 >> 8 & 0xff;
      _DAT_10016520 = DAT_10016518 & 0xff;
      DAT_10016518 = DAT_10016518 >> 0x10;
      _DAT_1001651c = _DAT_10016520 * 0x100 + _DAT_10016524;
      iVar1 = FUN_100069fc();
      if (iVar1 != 0) {
        DAT_10017be4 = GetCommandLineA();
        DAT_1001648c = FUN_1000ae2d();
        FUN_1000a917();
        FUN_1000abe0();
        FUN_1000ab27();
        FUN_10009b12();
        DAT_10016488 = DAT_10016488 + 1;
        goto LAB_10005ae5;
      }
      FUN_10006e11();
    }
LAB_10005a72:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10016488 < 1) goto LAB_10005a72;
      DAT_10016488 = DAT_10016488 + -1;
      if (DAT_10016550 == 0) {
        FUN_10009b50();
      }
      FUN_1000aad3();
      FUN_10006a50();
      FUN_10006e11();
    }
    else if (param_2 == 3) {
      FUN_10006ae8((undefined *)0x0);
    }
LAB_10005ae5:
    uVar2 = 1;
  }
  return uVar2;
}




int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10016488;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10005b33;
    if ((DAT_10017be8 != (code *)0x0) && (iVar2 = (*DAT_10017be8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10005a12(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10005b33:
  iVar2 = FUN_100036d0();
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10005a12(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10005a12(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10017be8 != (code *)0x0) {
      iVar2 = (*DAT_10017be8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}




/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10016494 == 1) || ((DAT_10016494 == 0 && (DAT_10016498 == 1)))) {
    FUN_1000af5f();
  }
  FUN_1000af98(param_1);
  (*(code *)PTR___exit_10013400)(0xff);
  return;
}




void __cdecl FUN_10005c77(uint param_1)

{
  if ((0x10013407 < param_1) && (param_1 < 0x10013669)) {
    FUN_10008162(((int)(param_1 + 0xeffecbf8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}




void __cdecl FUN_10005ca6(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10008162(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}




void __cdecl FUN_10005cc9(uint param_1)

{
  if ((0x10013407 < param_1) && (param_1 < 0x10013669)) {
    FUN_100081c3(((int)(param_1 + 0xeffecbf8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}




void __cdecl FUN_10005cf8(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100081c3(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}




undefined4 __cdecl FUN_10005d1b(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10016ba0) && ((*(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000b509(param_1);
    uVar1 = FUN_10005d78(param_1);
    FUN_1000b568(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000a0c0();
  *pDVar2 = 9;
  pDVar2 = FUN_1000a0c9();
  *pDVar2 = 0;
  return 0xffffffff;
}




undefined4 __cdecl FUN_10005d78(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1000b4c7(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000b4c7(2);
      iVar2 = FUN_1000b4c7(1);
      if (iVar2 == iVar1) goto LAB_10005dc6;
    }
    hObject = (HANDLE)FUN_1000b4c7(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10005dc8;
    }
  }
LAB_10005dc6:
  DVar4 = 0;
LAB_10005dc8:
  FUN_1000b448(param_1);
  *(undefined1 *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1000a04d(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}




/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_10004d22(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}




int __cdecl FUN_10005e26(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10005e54(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000b58a(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}




undefined4 __cdecl FUN_10005e54(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_1000b61d(param_1[4],(char *)param_1[2],uVar3);
      if (uVar1 == uVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}




int __cdecl FUN_10005eb9(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10008162(2);
  iVar4 = 0;
  if (0 < DAT_10017be0) {
    do {
      iVar2 = *(int *)(DAT_10016bd8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10005ca6(iVar4,iVar2);
        piVar1 = *(int **)(DAT_10016bd8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10005e26(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10005e26(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10005cf8(iVar4,*(int *)(DAT_10016bd8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10017be0);
  }
  FUN_100081c3(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_10005f5d(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar4 = false;
  bVar3 = false;
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    uVar5 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar5 = 0;
      uVar6 = DAT_10016750 | 1;
      goto LAB_10005f9e;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_10016750 | 2;
LAB_10005f9e:
  bVar2 = true;
LAB_10005fa1:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_1000b80d(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_1001649c = _DAT_1001649c + 1;
    param_4[3] = uVar6;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = uVar5;
    return param_4;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((uVar5 & 0x1000) == 0) {
        uVar5 = uVar5 | 0x1000;
        goto LAB_10005fa1;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_10005fa1;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_10005fa1;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_10005fa1;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_10005fa1;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_10006081;
      uVar5 = uVar5 | 0x8000;
      goto LAB_10005fa1;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_10005fa1;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_10006081;
        uVar5 = uVar5 | 0x4000;
        goto LAB_10005fa1;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_10005fa1;
      }
    }
  }
LAB_10006081:
  bVar2 = false;
  goto LAB_10005fa1;
}




undefined4 * FUN_100060cd(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_10008162(2);
  iVar3 = 0;
  if (0 < DAT_10017be0) {
    do {
      iVar1 = *(int *)(DAT_10016bd8 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_10016bd8) = pvVar2;
        if (*(int *)(iVar3 + DAT_10016bd8) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_10016bd8) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_10016bd8) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_10016bd8);
LAB_10006171:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_10005ca6(iVar3,iVar1);
        iVar1 = *(int *)(DAT_10016bd8 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_10016bd8 + iVar3 * 4);
          goto LAB_10006171;
        }
        FUN_10005cf8(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_10017be0);
  }
  FUN_100081c3(2);
  return puVar4;
}




undefined4 __cdecl FUN_10006195(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_10006be9();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])) &&
         (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_10006230(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_100064ea((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}




void __cdecl FUN_10006230(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,char param_6,int param_7,PVOID param_8)

{
  byte *pbVar1;
  bool bVar2;
  DWORD *pDVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_18 = local_18 & 0xffffff00;
  local_14 = *(int *)((int)param_2 + 8);
  if ((local_14 < -1) || (*(int *)(param_5 + 4) <= local_14)) {
    FUN_10006be9();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) && (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_10006a81();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_10006a81();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_10006a81();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_1000badc(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_10006be9();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_100063b8;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) && (param_1->ExceptionInformation[2] == 0)) {
        FUN_10006be9();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) && (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_10004bb7(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_10006922((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_1000648d(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_1000659e(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,param_7,param_8);
                iVar5 = local_14;
                goto LAB_10006398;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_10006398:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_100063b8:
  if (param_6 == '\0') {
    FUN_100063e3(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_10006b88();
  return;
}




void __cdecl FUN_100063e3(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_10006a81();
  if ((pDVar1[0x1a] != 0) && (iVar2 = FUN_10004a8c(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8), iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_10004bb7(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_1000659e(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}




undefined4 __cdecl FUN_1000648d(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_100064e4:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_100064be:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) && (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_100064e4;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_100064be;
    }
    uVar2 = 0;
  }
  return uVar2;
}




void __cdecl FUN_100064ea(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100113e8;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4; iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_10006be9();
    }
    local_8 = 0;
    iVar1 = *(int *)(*(int *)(param_3 + 8) + 4 + iVar2 * 8);
    if (iVar1 != 0) {
      __CallSettingFrame_12(iVar1,param_1,0x103);
    }
  }
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_14;
  return;
}




undefined4 __cdecl FUN_10006588(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
  uVar1 = FUN_10006b88();
  return uVar1;
}




void __cdecl
FUN_1000659e(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,byte *param_6,byte *param_7,int *param_8,int param_9,
            PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_1000675e((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_1000498e(param_10,param_1);
  FUN_100064ea((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE = (undefined *)FUN_10006619((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1000494c(UNRECOVERED_JUMPTABLE);
  }
  return;
}




undefined4 __cdecl FUN_10006619(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100113f8;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10006a81();
  FUN_10006a81();
  pDVar1 = FUN_10006a81();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_10006a81();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_10004a13(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_100066e6();
  ExceptionList = local_14;
  return uVar2;
}




void FUN_100066e6(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_10006a81();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_10006a81();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_10006922((int)unaff_EDI);
  }
  return;
}




undefined4 __cdecl FUN_10006734(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) && (piVar1[7] == 0)) {
    return 1;
  }
  return 0;
}




void __cdecl FUN_1000675e(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 *puVar4;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10011410;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  if (*(int *)(param_3 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_3 + 8) + 0xc + param_2);
  local_8 = 0;
  if ((*param_3 & 8) == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        ExceptionList = &local_14;
        bVar2 = FUN_1000badc(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) && (bVar2 = FUN_1000baf8(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_10006989(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_10005010(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_1000badc(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) && (bVar2 = FUN_1000baf8(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_1000bb14(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0)) {
          if ((*param_4 & 4) != 0) {
            FUN_10006989(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_10004987(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_10006989(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_10004980(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_1000badc(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) && (bVar2 = FUN_1000baf8(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_10005010(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_100067ec;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_1000badc(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) && (bVar2 = FUN_1000baf8(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_100067ec:
      iVar3 = FUN_10006989(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_10006be9();
  ExceptionList = local_14;
  return;
}




void __cdecl FUN_10006922(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10011420;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  if ((param_1 != 0) && (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4), UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_10004980(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}




int __cdecl FUN_10006989(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual Studio 2019 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}




undefined4 FUN_100069fc(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100080cd();
  DAT_10013690 = TlsAlloc();
  if (DAT_10013690 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000b0eb(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10013690,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10006a6e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}




void FUN_10006a50(void)

{
  FUN_100080f6();
  if (DAT_10013690 != 0xffffffff) {
    TlsFree(DAT_10013690);
    DAT_10013690 = 0xffffffff;
  }
  return;
}




void __cdecl FUN_10006a6e(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10015a80;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}




DWORD * FUN_10006a81(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10013690);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000b0eb(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10013690,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10006a6e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10006adc;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10006adc:
  SetLastError(dwErrCode);
  return lpTlsValue;
}




void __cdecl FUN_10006ae8(undefined *param_1)

{
  if (DAT_10013690 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) || (param_1 = TlsGetValue(DAT_10013690), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10004d22(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10004d22(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10004d22(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10004d22(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10004d22(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10004d22(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10015a80) {
        FUN_10004d22(*(undefined **)(param_1 + 0x50));
      }
      FUN_10004d22(param_1);
    }
    TlsSetValue(DAT_10013690,(LPVOID)0x0);
    return;
  }
  return;
}




void FUN_10006b88(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10011430;
  puStack_10 = &LAB_100081e0;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10006a81();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10006a81();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_1000bb2c();
  return;
}




void FUN_10006be9(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10011448;
  puStack_10 = &LAB_100081e0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_10013694 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_10013694)();
  }
  local_8 = 0xffffffff;
  FUN_10006b88();
  return;
}




void __cdecl FUN_10006c3f(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (iVar1 = pHVar2[0xf].unused, iVar1 != 0)) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}




int FUN_10006c6c(void)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *this;
  byte unaff_BL;
  undefined4 local_1230;
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_10005670();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x3a;
    aCStackY_18[1] = 'l';
    aCStackY_18[2] = '\0';
    aCStackY_18[3] = '\x10';
    DVar4 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",(LPSTR)&local_1230,0x1090);
    if (DVar4 != 0) {
      pcVar8 = (char *)&local_1230;
      while ((char)local_1230 != '\0') {
        cVar1 = *pcVar8;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar8 = cVar1 + -0x20;
        }
        pcVar8 = pcVar8 + 1;
        local_1230._0_1_ = *pcVar8;
      }
      aCStackY_18[0] = '\x04';
      aCStackY_18[1] = 'm';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",(char *)&local_1230,0x16);
      if (iVar5 == 0) {
        puVar6 = &local_1230;
      }
      else {
        aCStackY_18[0] = '&';
        aCStackY_18[1] = 'm';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar8 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar8;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar8 = cVar1 + -0x20;
          }
          pcVar8 = pcVar8 + 1;
          local_1a0[0] = *pcVar8;
        }
        puVar6 = FUN_10004e70(&local_1230,local_1a0);
      }
      if ((puVar6 != (uint *)0x0) && (puVar6 = FUN_10008ee0(puVar6,','), puVar6 != (uint *)0x0)) {
        pbVar7 = (byte *)((int)puVar6 + 1);
        bVar2 = *pbVar7;
        this = pbVar7;
        while (bVar2 != 0) {
          if (*this == 0x3b) {
            *this = 0;
          }
          else {
            this = this + 1;
          }
          bVar2 = *this;
        }
        aCStackY_18[0] = -0x74;
        aCStackY_18[1] = 'm';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_1000bb43(this,pbVar7,(int *)0x0,(void *)0xa);
        if (iVar5 == 2) {
          return 2;
        }
        if (iVar5 == 3) {
          return 3;
        }
        if (iVar5 == 1) {
          return 1;
        }
      }
    }
    FUN_10006c3f((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}




undefined4 __cdecl FUN_10006db4(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10016bd0 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10016bd0 != (HANDLE)0x0) {
    DAT_10016bd4 = FUN_10006c6c();
    if (DAT_10016bd4 == 3) {
      ppuVar1 = (undefined **)FUN_10006eb9(0x3f8);
    }
    else {
      if (DAT_10016bd4 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10007a00();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10016bd0);
  }
  return 0;
}




void FUN_10006e11(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10016bd4 == 3) {
    iVar1 = 0;
    if (0 < DAT_10016bc4) {
      puVar2 = (undefined4 *)((int)DAT_10016bc8 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10016bd0,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10016bc4);
    }
    HeapFree(DAT_10016bd0,0,DAT_10016bc8);
  }
  else if (DAT_10016bd4 == 2) {
    ppuVar3 = &PTR_LOOP_100136a0;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_100136a0);
  }
  HeapDestroy(DAT_10016bd0);
  return;
}




undefined4 __cdecl FUN_10006eb9(undefined4 param_1)

{
  DAT_10016bc8 = HeapAlloc(DAT_10016bd0,0,0x140);
  if (DAT_10016bc8 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10016bc0 = 0;
  DAT_10016bc4 = 0;
  DAT_10016bbc = DAT_10016bc8;
  DAT_10016bcc = param_1;
  DAT_10016bb4 = 0x10;
  return 1;
}




uint __cdecl FUN_10006f01(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10016bc8;
  while( true ) {
    if (DAT_10016bc8 + DAT_10016bc4 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}




void __cdecl FUN_10006f2c(uint *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar5 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar3 = (int *)(uVar14 * 0x204 + 0x144 + uVar5);
  uVar13 = *puVar12;
  local_8 = uVar13 - 1;
  if ((local_8 & 1) == 0) {
    uVar6 = *(uint *)(local_8 + (int)puVar12);
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar6 & 1) == 0) {
      uVar9 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (*(int *)((int)puVar12 + uVar13 + 3) == *(int *)((int)puVar12 + uVar13 + 7)) {
        if (uVar9 < 0x20) {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar6;
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 7) + 4) = *(undefined4 *)((int)puVar12 + uVar13 + 3);
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 3) + 8) = *(undefined4 *)((int)puVar12 + uVar13 + 7);
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      puVar12[1] = piVar3[(int)puVar10 * 2 + 1];
      puVar12[2] = (uint)(piVar3 + (int)puVar10 * 2);
      (piVar3 + (int)puVar10 * 2)[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar4 = *(char *)((int)puVar10 + uVar5 + 4);
        *(char *)((int)puVar10 + uVar5 + 4) = cVar4 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (DAT_10016bc0 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10016bb8 * 0x8000 + DAT_10016bc0[3]),0x8000,0x4000);
        DAT_10016bc0[2] = DAT_10016bc0[2] | 0x80000000U >> ((byte)DAT_10016bb8 & 0x1f);
        *(undefined4 *)(DAT_10016bc0[4] + 0xc4 + DAT_10016bb8 * 4) = 0;
        *(char *)(DAT_10016bc0[4] + 0x43) = *(char *)(DAT_10016bc0[4] + 0x43) + -1;
        if (*(char *)(DAT_10016bc0[4] + 0x43) == '\0') {
          DAT_10016bc0[1] = DAT_10016bc0[1] & 0xfffffffe;
        }
        if (DAT_10016bc0[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10016bc0[3],0,0x8000);
          HeapFree(DAT_10016bd0,0,(LPVOID)DAT_10016bc0[4]);
          FUN_10005010(DAT_10016bc0,DAT_10016bc0 + 5,(DAT_10016bc4 * 0x14 - (int)DAT_10016bc0) + -0x14 + DAT_10016bc8);
          DAT_10016bc4 = DAT_10016bc4 + -1;
          if (DAT_10016bc0 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10016bbc = DAT_10016bc8;
        }
      }
      DAT_10016bc0 = param_1;
      DAT_10016bb8 = uVar14;
    }
  }
  return;
}




int * __cdecl FUN_10007255(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_10016bc8 + DAT_10016bc4 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10016bbc;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0)); param_1 = param_1 + 5) {
  }
  puVar11 = DAT_10016bc8;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10016bbc && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0)); puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10016bbc) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10016bc8;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10016bbc && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10016bbc) && (param_1 = FUN_1000755e(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_1000760f((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) || ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_10016bbc = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_1000751b;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_1000751b:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10016bc0)) && (local_8 == DAT_10016bb8)) {
    DAT_10016bc0 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}




undefined4 * FUN_1000755e(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10016bc4 == DAT_10016bb4) {
    pvVar2 = HeapReAlloc(DAT_10016bd0,0,DAT_10016bc8,(DAT_10016bb4 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10016bb4 = DAT_10016bb4 + 0x10;
    DAT_10016bc8 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10016bc8 + DAT_10016bc4 * 0x14);
  pvVar2 = HeapAlloc(DAT_10016bd0,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10016bc4 = DAT_10016bc4 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10016bd0,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}




int __cdecl FUN_1000760f(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}




undefined4 __cdecl FUN_1000770a(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar5 = param_1[4];
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar3 = uVar10 * 0x204 + 0x144 + uVar5;
  iVar6 = *(int *)(param_2 + -4);
  iVar9 = iVar6 + -1;
  uVar13 = *(uint *)(iVar6 + -5 + param_2);
  iVar6 = iVar6 + -5 + param_2;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
    iVar6 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar6) {
      uVar13 = (iVar6 >> 4) - 1;
      iVar9 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar3 = iVar3 + uVar13 * 8;
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar3 + 4);
      *(int *)(iVar9 + 8) = iVar3;
      *(int *)(iVar3 + 4) = iVar9;
      *(int *)(*(int *)(iVar9 + 4) + 8) = iVar9;
      if (*(int *)(iVar9 + 4) == *(int *)(iVar9 + 8)) {
        cVar4 = *(char *)(uVar13 + 4 + uVar5);
        *(char *)(uVar13 + 4 + uVar5) = cVar4 + '\x01';
        bVar8 = (byte)uVar13;
        if (uVar13 < 0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          bVar8 = bVar8 - 0x20;
        }
        *puVar7 = *puVar7 | 0x80000000U >> (bVar8 & 0x1f);
      }
      piVar2 = (int *)(param_2 + -4 + uVar12);
      *piVar2 = iVar6;
      *(int *)(iVar6 + -4 + (int)piVar2) = iVar6;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar2 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar2[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar5);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar5);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar6 = iVar3 + uVar11 * 8;
    piVar2[1] = *(int *)(iVar3 + 4 + uVar11 * 8);
    piVar2[2] = iVar6;
    *(int **)(iVar6 + 4) = piVar2;
    *(int **)(piVar2[1] + 8) = piVar2;
    if (piVar2[1] == piVar2[2]) {
      cVar4 = *(char *)(uVar11 + 4 + uVar5);
      *(char *)(uVar11 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar11;
      if (uVar11 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        bVar8 = bVar8 - 0x20;
      }
      *puVar7 = *puVar7 | 0x80000000U >> (bVar8 & 0x1f);
    }
    *piVar2 = param_3;
    *(int *)(param_3 + -4 + (int)piVar2) = param_3;
  }
  return 1;
}




undefined ** FUN_10007a00(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_100136b0 == -1) {
    lpMem = &PTR_LOOP_100136a0;
  }
  else {
    lpMem = HeapAlloc(DAT_10016bd0,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_100136a0) {
        if (PTR_LOOP_100136a0 == (undefined *)0x0) {
          PTR_LOOP_100136a0 = (undefined *)&PTR_LOOP_100136a0;
        }
        if (PTR_LOOP_100136a4 == (undefined *)0x0) {
          PTR_LOOP_100136a4 = (undefined *)&PTR_LOOP_100136a0;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_100136a0;
        lpMem[1] = PTR_LOOP_100136a4;
        PTR_LOOP_100136a4 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      ppuVar3 = lpMem + 6;
      lpMem[3] = (undefined *)(lpMem + 0x26);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)ppuVar3;
      iVar4 = 0;
      do {
        bVar1 = 0xf < iVar4;
        iVar4 = iVar4 + 1;
        *ppuVar3 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar3[1] = (undefined *)0xf1;
        ppuVar3 = ppuVar3 + 2;
      } while (iVar4 < 0x400);
      _memset(lpAddress,0,0x10000);
      for (; lpAddress < lpMem[4] + 0x10000; lpAddress = lpAddress + 0x400) {
        *(undefined1 *)(lpAddress + 0x3e) = 0xff;
        *lpAddress = (int)(lpAddress + 2);
        lpAddress[1] = 0xf0;
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_100136a0) {
    HeapFree(DAT_10016bd0,0,lpMem);
  }
  return (undefined **)0x0;
}




void __cdecl FUN_10007b44(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_100156c0 == param_1) {
    PTR_LOOP_100156c0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_100136a0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10016bd0,0,param_1);
    return;
  }
  DAT_100136b0 = 0xffffffff;
  return;
}




void __cdecl FUN_10007b9a(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_100136a4;
  do {
    ppuVar5 = ppuVar4;
    if (ppuVar4[4] != (undefined *)0xffffffff) {
      local_8 = 0;
      ppuVar5 = ppuVar4 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar4[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_100164a0 = DAT_100164a0 + -1;
            if (((undefined **)ppuVar4[3] == (undefined **)0x0) || (ppuVar5 < ppuVar4[3])) {
              ppuVar4[3] = (undefined *)ppuVar5;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar4[1];
      if ((local_8 != 0) && (ppuVar4[6] == (undefined *)0xffffffff)) {
        ppuVar2 = ppuVar4 + 8;
        iVar3 = 1;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_10007b44(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_100136a4) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}




int __cdecl FUN_10007c5c(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_100136a0;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_100136a0) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}




void __cdecl FUN_10007cb3(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_100164a0 = DAT_100164a0 + 1, DAT_100164a0 == 0x20)) {
    FUN_10007b9a(0x10);
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10007cf8(uint param_1)

{
  uint *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  uint *puVar8;
  undefined **ppuVar9;
  int local_8;
  
  piVar7 = (int *)PTR_LOOP_100156c0;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10007f00(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10007dc3;
            puVar8[1] = param_1;
          }
          puVar8 = puVar8 + 2;
          piVar4 = piVar4 + 0x400;
        } while (puVar8 < piVar7 + 0x806);
      }
      puVar1 = (uint *)piVar7[2];
      piVar4 = (int *)piVar7[4];
      for (puVar8 = (uint *)(piVar7 + 6); puVar8 < puVar1; puVar8 = puVar8 + 2) {
        if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
          piVar5 = (int *)FUN_10007f00(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10007dc3:
            PTR_LOOP_100156c0 = (undefined *)piVar7;
            *puVar8 = *puVar8 - param_1;
            piVar7[2] = (int)puVar8;
            return piVar5;
          }
          puVar8[1] = param_1;
        }
        piVar4 = piVar4 + 0x400;
      }
    }
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)PTR_LOOP_100156c0) {
      ppuVar9 = &PTR_LOOP_100136a0;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_100136a0) {
          ppuVar9 = FUN_10007a00();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_100156c0 = (undefined *)ppuVar9;
          *piVar7 = (int)piVar7 + param_1 + 8;
          piVar7[1] = 0xf0 - param_1;
          ppuVar9[6] = ppuVar9[6] + -(param_1 & 0xff);
          return piVar7 + 0x40;
        }
      }
      ppuVar2 = (undefined **)ppuVar9[3];
      local_8 = 0;
      piVar7 = (int *)(ppuVar9[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar3 = *ppuVar2;
      ppuVar6 = ppuVar2;
      for (; (puVar3 == (undefined *)0xffffffff && (local_8 < 0x10)); local_8 = local_8 + 1) {
        ppuVar6 = ppuVar6 + 2;
        puVar3 = *ppuVar6;
      }
      piVar4 = VirtualAlloc(piVar7,local_8 << 0xc,0x1000,4);
      if (piVar4 != piVar7) {
        return (int *)0x0;
      }
      _memset(piVar7,local_8 << 0xc,0);
      ppuVar6 = ppuVar2;
      if (0 < local_8) {
        piVar4 = piVar7 + 1;
        do {
          *(undefined1 *)(piVar4 + 0x3d) = 0xff;
          piVar4[-1] = (int)(piVar4 + 1);
          *piVar4 = 0xf0;
          *ppuVar6 = (undefined *)0xf0;
          ppuVar6[1] = (undefined *)0xf1;
          piVar4 = piVar4 + 0x400;
          ppuVar6 = ppuVar6 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      for (; (ppuVar6 < ppuVar9 + 0x806 && (*ppuVar6 != (undefined *)0xffffffff)); ppuVar6 = ppuVar6 + 2) {
      }
      PTR_LOOP_100156c0 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar6 < ppuVar9 + 0x806) & (uint)ppuVar6);
      *(char *)(piVar7 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar2;
      *ppuVar2 = *ppuVar2 + -param_1;
      piVar7[1] = piVar7[1] - param_1;
      *piVar7 = (int)piVar7 + param_1 + 8;
      return piVar7 + 0x40;
    }
  } while( true );
}




int __cdecl FUN_10007f00(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  pbVar1 = (byte *)(param_1 + 0x3e);
  bVar3 = (byte)param_3;
  if ((uint)param_1[1] < param_3) {
    pbVar6 = pbVar2;
    if (pbVar2[param_1[1]] != 0) {
      pbVar6 = pbVar2 + param_1[1];
    }
    while( true ) {
      while( true ) {
        if (pbVar1 <= pbVar6 + param_3) {
          pbVar6 = (byte *)(param_1 + 2);
          while( true ) {
            while( true ) {
              if (pbVar2 <= pbVar6) {
                return 0;
              }
              if (pbVar1 <= pbVar6 + param_3) {
                return 0;
              }
              if (*pbVar6 == 0) break;
              pbVar6 = pbVar6 + *pbVar6;
            }
            uVar5 = 1;
            pbVar4 = pbVar6;
            while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
              uVar5 = uVar5 + 1;
            }
            if (param_3 <= uVar5) break;
            param_2 = param_2 - uVar5;
            pbVar6 = pbVar4;
            if (param_2 < param_3) {
              return 0;
            }
          }
          if (pbVar6 + param_3 < pbVar1) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            param_1[1] = 0;
            *param_1 = (int)(param_1 + 2);
          }
          *pbVar6 = bVar3;
          pbVar2 = pbVar6 + 8;
          goto LAB_10008013;
        }
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + *pbVar6;
      }
      uVar5 = 1;
      pbVar4 = pbVar6;
      while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
        uVar5 = uVar5 + 1;
      }
      if (param_3 <= uVar5) break;
      if (pbVar6 == pbVar2) {
        param_1[1] = uVar5;
        pbVar6 = pbVar4;
      }
      else {
        param_2 = param_2 - uVar5;
        pbVar6 = pbVar4;
        if (param_2 < param_3) {
          return 0;
        }
      }
    }
    if (pbVar6 + param_3 < pbVar1) {
      *param_1 = (int)(pbVar6 + param_3);
      param_1[1] = uVar5 - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    *pbVar6 = bVar3;
    pbVar2 = pbVar6 + 8;
  }
  else {
    *pbVar2 = bVar3;
    if (pbVar2 + param_3 < pbVar1) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    pbVar2 = pbVar2 + 8;
  }
LAB_10008013:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}




undefined4 __cdecl FUN_10008024(int param_1,int *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*param_3;
  piVar2 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  if (param_4 < uVar6) {
    *param_3 = (byte)param_4;
    *piVar2 = *piVar2 + (uVar6 - param_4);
    piVar2[1] = 0xf1;
  }
  else {
    if (param_4 <= uVar6) {
      return 0;
    }
    pbVar1 = param_3 + param_4;
    if (param_2 + 0x3e < pbVar1) {
      return 0;
    }
    for (pbVar4 = param_3 + uVar6; (pbVar4 < pbVar1 && (*pbVar4 == 0)); pbVar4 = pbVar4 + 1) {
    }
    if (pbVar4 != pbVar1) {
      return 0;
    }
    *param_3 = (byte)param_4;
    if ((param_3 <= (byte *)*param_2) && ((byte *)*param_2 < pbVar1)) {
      if (pbVar1 < param_2 + 0x3e) {
        iVar5 = 0;
        *param_2 = (int)pbVar1;
        bVar3 = *pbVar1;
        while (bVar3 == 0) {
          iVar5 = iVar5 + 1;
          bVar3 = pbVar1[iVar5];
        }
        param_2[1] = iVar5;
      }
      else {
        param_2[1] = 0;
        *param_2 = (int)(param_2 + 2);
      }
    }
    *piVar2 = *piVar2 + (uVar6 - param_4);
  }
  return 1;
}




void FUN_100080cd(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1001570c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100156fc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100156ec);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100156cc);
  return;
}




void FUN_100080f6(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100156c8;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) && (ppuVar1 != &PTR_DAT_1001570c)) && (ppuVar1 != &PTR_DAT_100156fc)) &&
       ((ppuVar1 != &PTR_DAT_100156ec && (ppuVar1 != &PTR_DAT_100156cc)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10004d22(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10015788);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100156ec);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100156fc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1001570c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100156cc);
  return;
}




void __cdecl FUN_10008162(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_100156c8 + param_1;
  if ((&DAT_100156c8)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10008162(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10004d22((undefined *)lpCriticalSection);
    }
    FUN_100081c3(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}




void __cdecl FUN_100081c3(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100156c8)[param_1]);
  return;
}




void FUN_1000829d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}




int __thiscall FUN_100082b8(void *this,int *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  void *this_00;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  void *this_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *piVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  WCHAR *pWVar13;
  undefined *puVar14;
  int iVar15;
  bool bVar16;
  int *piVar17;
  char local_1c8;
  char local_1c7 [351];
  byte local_68 [32];
  undefined4 *local_48;
  WCHAR local_42;
  uint local_40;
  byte local_3c;
  undefined1 local_3b;
  byte local_39;
  int local_38;
  WCHAR *local_34;
  WCHAR *local_30;
  undefined8 local_2c;
  int local_24;
  int local_20;
  byte local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  int *local_18;
  char local_13;
  char local_12;
  char local_11;
  int local_10;
  char local_9;
  undefined *local_8;
  
  local_19 = '\0';
  bVar1 = *param_2;
  local_8 = (undefined *)0x0;
  local_38 = 0;
  pbVar9 = param_2;
  piVar7 = (int *)PTR_DAT_10015b34;
  do {
    PTR_DAT_10015b34 = (undefined *)piVar7;
    if (bVar1 == 0) {
LAB_10008cbe:
      if (local_18 == (int *)0xffffffff) {
LAB_10008cc4:
        if ((local_38 == 0) && (local_19 == '\0')) {
          local_38 = -1;
        }
      }
      return local_38;
    }
    if ((int)DAT_10015b28 < 2) {
      uVar5 = *(byte *)((int)piVar7 + (uint)bVar1 * 2) & 8;
    }
    else {
      piVar7 = (int *)0x8;
      uVar5 = FUN_1000bf46(this,(uint)bVar1,8);
    }
    if (uVar5 != 0) {
      local_8 = local_8 + -1;
      piVar7 = param_1;
      uVar5 = FUN_10008d45((int *)&local_8,param_1);
      FUN_10008d2e(uVar5,piVar7);
      uVar5 = FUN_1000bf1e(this_00,(uint)pbVar9[1]);
      piVar7 = extraout_ECX;
      pbVar10 = pbVar9;
      while (pbVar9 = pbVar10 + 1, uVar5 != 0) {
        piVar17 = (int *)(uint)pbVar10[2];
        uVar5 = FUN_1000bf1e(piVar7,(int)(uint)pbVar10[2]);
        piVar7 = piVar17;
        pbVar10 = pbVar9;
      }
    }
    if (*pbVar9 == 0x25) {
      local_39 = 0;
      local_1c = 0;
      local_1b = '\0';
      local_12 = '\0';
      local_13 = '\0';
      local_1a = '\0';
      puVar14 = (undefined *)0x0;
      local_9 = '\0';
      local_20 = 0;
      local_24 = 0;
      local_10 = 0;
      local_11 = '\x01';
      local_34 = (WCHAR *)0x0;
      do {
        uVar5 = (uint)pbVar9[1];
        param_2 = pbVar9 + 1;
        if ((int)DAT_10015b28 < 2) {
          uVar6 = (byte)PTR_DAT_10015b34[uVar5 * 2] & 4;
          piVar7 = (int *)PTR_DAT_10015b34;
        }
        else {
          piVar17 = (int *)0x4;
          uVar6 = FUN_1000bf46(piVar7,uVar5,4);
          piVar7 = piVar17;
        }
        if (uVar6 == 0) {
          if (uVar5 < 0x4f) {
            if (uVar5 != 0x4e) {
              if (uVar5 == 0x2a) {
                local_12 = local_12 + '\x01';
              }
              else if (uVar5 != 0x46) {
                if (uVar5 == 0x49) {
                  if ((pbVar9[2] != 0x36) || (pbVar9[3] != 0x34)) goto LAB_10008413;
                  local_34 = (WCHAR *)((int)local_34 + 1);
                  local_2c = 0;
                  param_2 = pbVar9 + 3;
                }
                else if (uVar5 == 0x4c) {
                  local_11 = local_11 + '\x01';
                }
                else {
LAB_10008413:
                  local_13 = local_13 + '\x01';
                }
              }
            }
          }
          else if (uVar5 == 0x68) {
            local_11 = local_11 + -1;
            local_9 = local_9 + -1;
          }
          else {
            if (uVar5 == 0x6c) {
              local_11 = local_11 + '\x01';
            }
            else if (uVar5 != 0x77) goto LAB_10008413;
            local_9 = local_9 + '\x01';
          }
        }
        else {
          local_24 = local_24 + 1;
          local_10 = (uVar5 - 0x30) + local_10 * 10;
        }
        pbVar9 = param_2;
      } while (local_13 == '\0');
      puVar2 = param_3;
      if (local_12 == '\0') {
        local_30 = (WCHAR *)*param_3;
        puVar2 = param_3 + 1;
        local_48 = param_3;
      }
      param_3 = puVar2;
      local_13 = '\0';
      if (local_9 == '\0') {
        if ((*param_2 == 0x53) || (*param_2 == 0x43)) {
          local_9 = '\x01';
        }
        else {
          local_9 = -1;
        }
      }
      uVar5 = *param_2 | 0x20;
      local_40 = uVar5;
      if (uVar5 != 0x6e) {
        if ((uVar5 == 99) || (uVar5 == 0x7b)) {
          local_8 = local_8 + 1;
          piVar7 = param_1;
          local_18 = (int *)FUN_10008d14(param_1);
        }
        else {
          piVar7 = param_1;
          local_18 = (int *)FUN_10008d45((int *)&local_8,param_1);
        }
      }
      if ((local_24 != 0) && (local_10 == 0)) {
LAB_10008c9e:
        local_8 = local_8 + -1;
        FUN_10008d2e((uint)local_18,param_1);
        goto LAB_10008cbe;
      }
      if (uVar5 < 0x70) {
        if (uVar5 == 0x6f) {
LAB_100089cb:
          if (local_18 == (int *)0x2d) {
            local_1b = '\x01';
          }
          else if (local_18 != (int *)0x2b) goto LAB_10008a00;
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10008d14(param_1);
          }
          goto LAB_10008a00;
        }
        if (uVar5 != 99) {
          if (uVar5 == 100) goto LAB_100089cb;
          if (uVar5 < 0x65) {
LAB_10008743:
            if ((int *)(uint)*param_2 != local_18) goto LAB_10008c9e;
            local_19 = local_19 + -1;
            if (local_12 == '\0') {
              param_3 = local_48;
            }
            goto LAB_10008c1f;
          }
          if (0x67 < uVar5) {
            if (uVar5 == 0x69) {
              uVar5 = 100;
              goto LAB_10008501;
            }
            if (uVar5 != 0x6e) goto LAB_10008743;
            puVar14 = local_8;
            if (local_12 != '\0') goto LAB_10008c1f;
            goto LAB_10008bf9;
          }
          pcVar11 = &local_1c8;
          if (local_18 == (int *)0x2d) {
            local_1c8 = '-';
            pcVar11 = local_1c7;
LAB_10008537:
            local_10 = local_10 + -1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10008d14(param_1);
          }
          else if (local_18 == (int *)0x2b) goto LAB_10008537;
          if ((local_24 == 0) || (0x15d < local_10)) {
            local_10 = 0x15d;
          }
          while( true ) {
            piVar17 = local_18;
            if ((int)DAT_10015b28 < 2) {
              uVar5 = (byte)PTR_DAT_10015b34[(int)local_18 * 2] & 4;
            }
            else {
              uVar5 = FUN_1000bf46(piVar7,(int)local_18,4);
            }
            if ((uVar5 == 0) || (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
            local_20 = local_20 + 1;
            *pcVar11 = (char)piVar17;
            pcVar11 = pcVar11 + 1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10008d14(param_1);
          }
          if ((DAT_10015b2c == (char)piVar17) && (iVar15 = local_10 + -1, bVar16 = local_10 != 0, local_10 = iVar15, bVar16)) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            piVar17 = (int *)FUN_10008d14(param_1);
            *pcVar11 = DAT_10015b2c;
            while( true ) {
              pcVar11 = pcVar11 + 1;
              local_18 = piVar17;
              if ((int)DAT_10015b28 < 2) {
                uVar5 = (byte)PTR_DAT_10015b34[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_1000bf46(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) || (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar11 = (char)piVar17;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_10008d14(param_1);
            }
          }
          pcVar12 = pcVar11;
          if ((local_20 != 0) &&
             (((piVar17 == (int *)0x65 || (piVar17 == (int *)0x45)) && (iVar15 = local_10 + -1, bVar16 = local_10 != 0, local_10 = iVar15, bVar16)))) {
            *pcVar11 = 'e';
            pcVar12 = pcVar11 + 1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            piVar17 = (int *)FUN_10008d14(param_1);
            local_18 = piVar17;
            if (piVar17 == (int *)0x2d) {
              *pcVar12 = '-';
              pcVar12 = pcVar11 + 2;
LAB_1000865e:
              bVar16 = local_10 != 0;
              local_10 = local_10 + -1;
              if (bVar16) goto LAB_1000866d;
              local_10 = 0;
            }
            else if (piVar17 == (int *)0x2b) goto LAB_1000865e;
            while( true ) {
              if ((int)DAT_10015b28 < 2) {
                uVar5 = (byte)PTR_DAT_10015b34[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_1000bf46(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) || (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar12 = (char)piVar17;
              pcVar12 = pcVar12 + 1;
LAB_1000866d:
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_10008d14(param_1);
              local_18 = piVar17;
            }
          }
          local_8 = local_8 + -1;
          piVar7 = param_1;
          FUN_10008d2e((uint)piVar17,param_1);
          if (local_20 != 0) {
            if (local_12 == '\0') {
              local_38 = local_38 + 1;
              *pcVar12 = '\0';
              (*(code *)PTR___fptrap_10015b18)(local_11 + -1,local_30,&local_1c8);
              piVar7 = extraout_ECX_00;
            }
            goto LAB_10008c1f;
          }
          goto LAB_10008cbe;
        }
        if (local_24 == 0) {
          local_10 = local_10 + 1;
          local_24 = 1;
        }
        if ('\0' < local_9) {
          local_1a = '\x01';
        }
        pcVar11 = &DAT_10015790;
LAB_10008824:
        local_1c = 0xff;
        pbVar9 = (byte *)pcVar11;
        pbVar10 = param_2;
LAB_10008828:
        param_2 = pbVar10;
        _memset(local_68,0,0x20);
        if ((local_40 == 0x7b) && (*pbVar9 == 0x5d)) {
          uVar5 = 0x5d;
          local_68[0xb] = 0x20;
          pbVar9 = pbVar9 + 1;
        }
        else {
          uVar5 = (uint)local_39;
        }
        while (pWVar13 = local_30, bVar1 = *pbVar9, bVar1 != 0x5d) {
          if (((bVar1 == 0x2d) && (bVar8 = (byte)uVar5, bVar8 != 0)) && (bVar4 = pbVar9[1], bVar4 != 0x5d)) {
            if (bVar4 <= bVar8) {
              uVar5 = (uint)bVar4;
              bVar4 = bVar8;
            }
            if ((byte)uVar5 <= bVar4) {
              iVar15 = (bVar4 - uVar5) + 1;
              do {
                local_68[uVar5 >> 3] = local_68[uVar5 >> 3] | '\x01' << ((byte)uVar5 & 7);
                uVar5 = uVar5 + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            uVar5 = 0;
            pbVar9 = pbVar9 + 2;
          }
          else {
            uVar5 = (uint)bVar1;
            local_68[bVar1 >> 3] = local_68[bVar1 >> 3] | '\x01' << (bVar1 & 7);
            pbVar9 = pbVar9 + 1;
          }
        }
        if (*pbVar9 == 0) goto LAB_10008cbe;
        if (local_40 == 0x7b) {
          param_2 = pbVar9;
        }
        local_8 = local_8 + -1;
        local_34 = local_30;
        piVar7 = param_1;
        FUN_10008d2e((uint)local_18,param_1);
        while( true ) {
          if ((local_24 != 0) && (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) goto LAB_1000898d;
          local_8 = local_8 + 1;
          local_18 = (int *)FUN_10008d14(param_1);
          if (local_18 == (int *)0xffffffff) break;
          bVar1 = (byte)local_18;
          piVar7 = (int *)(int)(char)(local_68[(int)local_18 >> 3] ^ local_1c);
          if (((uint)piVar7 & 1 << (bVar1 & 7)) == 0) break;
          if (local_12 == '\0') {
            if (local_1a == '\0') {
              *(byte *)pWVar13 = bVar1;
              pWVar13 = (WCHAR *)((int)pWVar13 + 1);
              local_30 = pWVar13;
            }
            else {
              local_3c = bVar1;
              if ((PTR_DAT_10015b34[((uint)local_18 & 0xff) * 2 + 1] & 0x80) != 0) {
                local_8 = local_8 + 1;
                uVar5 = FUN_10008d14(param_1);
                local_3b = (undefined1)uVar5;
              }
              FUN_1000bdf8(&local_42,&local_3c,DAT_10015b28);
              *pWVar13 = local_42;
              pWVar13 = pWVar13 + 1;
              piVar7 = extraout_ECX_01;
              local_30 = pWVar13;
            }
          }
          else {
            local_34 = (WCHAR *)((int)local_34 + 1);
          }
        }
        local_8 = local_8 + -1;
        piVar7 = param_1;
        FUN_10008d2e((uint)local_18,param_1);
LAB_1000898d:
        if (local_34 == pWVar13) goto LAB_10008cbe;
        if ((local_12 == '\0') && (local_38 = local_38 + 1, local_40 != 99)) {
          if (local_1a == '\0') {
            *(byte *)local_30 = 0;
          }
          else {
            *local_30 = L'\0';
          }
        }
      }
      else {
        if (uVar5 == 0x70) {
          local_11 = '\x01';
          goto LAB_100089cb;
        }
        if (uVar5 == 0x73) {
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pcVar11 = s_____10015788;
          goto LAB_10008824;
        }
        if (uVar5 == 0x75) goto LAB_100089cb;
        if (uVar5 != 0x78) {
          if (uVar5 != 0x7b) goto LAB_10008743;
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pbVar9 = param_2 + 1;
          pbVar10 = pbVar9;
          if (*pbVar9 == 0x5e) {
            pcVar11 = (char *)(param_2 + 2);
            param_2 = pbVar9;
            goto LAB_10008824;
          }
          goto LAB_10008828;
        }
LAB_10008501:
        if (local_18 == (int *)0x2d) {
          local_1b = '\x01';
LAB_10008790:
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10008d14(param_1);
          }
        }
        else if (local_18 == (int *)0x2b) goto LAB_10008790;
        if (local_18 == (int *)0x30) {
          local_8 = local_8 + 1;
          piVar7 = param_1;
          local_18 = (int *)FUN_10008d14(param_1);
          if (((char)local_18 == 'x') || ((char)local_18 == 'X')) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10008d14(param_1);
            uVar5 = 0x78;
          }
          else {
            local_20 = 1;
            if (uVar5 == 0x78) {
              local_8 = local_8 + -1;
              piVar7 = param_1;
              FUN_10008d2e((uint)local_18,param_1);
              local_18 = (int *)0x30;
            }
            else {
              uVar5 = 0x6f;
            }
          }
        }
LAB_10008a00:
        if (local_34 == (WCHAR *)0x0) {
          if (local_13 == '\0') {
            while ((piVar17 = local_18, uVar5 != 0x78 && (uVar5 != 0x70))) {
              if ((int)DAT_10015b28 < 2) {
                uVar6 = (byte)PTR_DAT_10015b34[(int)local_18 * 2] & 4;
              }
              else {
                piVar3 = (int *)0x4;
                uVar6 = FUN_1000bf46(piVar7,(int)local_18,4);
                piVar7 = piVar3;
              }
              if (uVar6 == 0) goto LAB_10008bc7;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_10008bc7;
                iVar15 = (int)puVar14 << 3;
              }
              else {
                iVar15 = (int)puVar14 * 10;
              }
LAB_10008b9f:
              local_20 = local_20 + 1;
              puVar14 = (undefined *)(iVar15 + -0x30 + (int)piVar17);
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_10008bd5;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_10008d14(param_1);
            }
            if ((int)DAT_10015b28 < 2) {
              uVar6 = (byte)PTR_DAT_10015b34[(int)local_18 * 2] & 0x80;
            }
            else {
              piVar3 = (int *)0x80;
              uVar6 = FUN_1000bf46(piVar7,(int)local_18,0x80);
              piVar7 = piVar3;
            }
            if (uVar6 != 0) {
              iVar15 = (int)puVar14 << 4;
              piVar3 = piVar17;
              piVar17 = (int *)FUN_10008cdd(piVar7,(uint)piVar17);
              piVar7 = piVar3;
              local_18 = piVar17;
              goto LAB_10008b9f;
            }
LAB_10008bc7:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_10008d2e((uint)piVar17,param_1);
          }
LAB_10008bd5:
          if (local_1b != '\0') {
            puVar14 = (undefined *)-(int)puVar14;
          }
        }
        else {
          if (local_13 == '\0') {
            while (piVar17 = local_18, uVar5 != 0x78) {
              if ((int)DAT_10015b28 < 2) {
                uVar6 = (byte)PTR_DAT_10015b34[(int)local_18 * 2] & 4;
              }
              else {
                uVar6 = FUN_1000bf46(piVar7,(int)local_18,4);
              }
              if (uVar6 == 0) goto LAB_10008ae9;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_10008ae9;
                local_2c = __allshl(3,(int)local_2c._4_4_);
                piVar7 = extraout_ECX_02;
              }
              else {
                local_2c = __allmul((uint)local_2c,(int)local_2c._4_4_,10,0);
                piVar7 = extraout_ECX_03;
              }
LAB_10008abb:
              local_20 = local_20 + 1;
              piVar17 = piVar17 + -0xc;
              local_2c = CONCAT44((int)local_2c._4_4_ + ((int)piVar17 >> 0x1f) + (uint)CARRY4((uint)local_2c,(uint)piVar17),
                                  (undefined *)((uint)local_2c + (int)piVar17));
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_10008af7;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_10008d14(param_1);
            }
            if ((int)DAT_10015b28 < 2) {
              uVar6 = (byte)PTR_DAT_10015b34[(int)local_18 * 2] & 0x80;
            }
            else {
              uVar6 = FUN_1000bf46(piVar7,(int)local_18,0x80);
            }
            if (uVar6 != 0) {
              local_2c = __allshl(4,(int)local_2c._4_4_);
              piVar7 = piVar17;
              piVar17 = (int *)FUN_10008cdd(this_01,(uint)piVar17);
              local_18 = piVar17;
              goto LAB_10008abb;
            }
LAB_10008ae9:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_10008d2e((uint)piVar17,param_1);
          }
LAB_10008af7:
          if (local_1b != '\0') {
            piVar7 = (int *)-((int)local_2c._4_4_ + (uint)((uint)local_2c != 0));
            local_2c = CONCAT44(piVar7,-(uint)local_2c);
          }
        }
        if (uVar5 == 0x46) {
          local_20 = 0;
        }
        if (local_20 == 0) goto LAB_10008cbe;
        if (local_12 == '\0') {
          local_38 = local_38 + 1;
LAB_10008bf9:
          if (local_34 == (WCHAR *)0x0) {
            if (local_11 == '\0') {
              *local_30 = (WCHAR)puVar14;
            }
            else {
              *(undefined **)local_30 = puVar14;
            }
          }
          else {
            *(uint *)local_30 = (uint)local_2c;
            *(int **)(local_30 + 2) = local_2c._4_4_;
            piVar7 = local_2c._4_4_;
          }
        }
      }
LAB_10008c1f:
      local_19 = local_19 + '\x01';
      param_2 = param_2 + 1;
      this = piVar7;
    }
    else {
      local_8 = local_8 + 1;
      piVar7 = (int *)FUN_10008d14(param_1);
      param_2 = pbVar9 + 1;
      local_18 = piVar7;
      if ((int *)(uint)*pbVar9 != piVar7) goto LAB_10008c9e;
      this = PTR_DAT_10015b34;
      if ((PTR_DAT_10015b34[((uint)piVar7 & 0xff) * 2 + 1] & 0x80) != 0) {
        local_8 = local_8 + 1;
        piVar17 = (int *)FUN_10008d14(param_1);
        this = (void *)(uint)*param_2;
        param_2 = pbVar9 + 2;
        if (this != piVar17) {
          local_8 = local_8 + -1;
          FUN_10008d2e((uint)piVar17,param_1);
          local_8 = local_8 + -1;
          FUN_10008d2e((uint)piVar7,param_1);
          goto LAB_10008cbe;
        }
        local_8 = local_8 + -1;
      }
    }
    if ((local_18 == (int *)0xffffffff) && ((*param_2 != 0x25 || (param_2[1] != 0x6e)))) goto LAB_10008cc4;
    bVar1 = *param_2;
    pbVar9 = param_2;
    piVar7 = (int *)PTR_DAT_10015b34;
  } while( true );
}




uint __thiscall FUN_10008cdd(void *this,uint param_1)

{
  uint uVar1;
  
  if (DAT_10015b28 < 2) {
    uVar1 = (byte)PTR_DAT_10015b34[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_1000bf46(this,param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}




uint __cdecl FUN_10008d14(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar2;
  }
  uVar3 = FUN_10008deb(param_1);
  return uVar3;
}




void __cdecl FUN_10008d2e(uint param_1,int *param_2)

{
  if (param_1 != 0xffffffff) {
    FUN_1000c01f(param_1,param_2);
  }
  return;
}




uint __cdecl FUN_10008d45(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  void *this;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_10008d14(param_2);
    uVar2 = FUN_1000bf1e(this,uVar1);
  } while (uVar2 != 0);
  return uVar1;
}




/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_10008d90;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10008dc3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10008d90:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_10008dc3;
}




uint __cdecl FUN_10008deb(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      param_1[3] = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        FUN_1000c2cb(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_1000c08d(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_100159c8;
          }
          else {
            puVar4 = (undefined *)((&DAT_10016aa0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            param_1[3] = param_1[3] | 0x2000;
          }
        }
        if (((param_1[6] == 0x200) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
          param_1[6] = 0x1000;
        }
        param_1[1] = iVar3 + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (uint)bVar1;
      }
      param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      param_1[1] = 0;
    }
    else {
      param_1[3] = uVar2 | 0x20;
    }
  }
  return 0xffffffff;
}




uint * __cdecl FUN_10008ee0(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}




uint * __cdecl FUN_10008fa0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10009088;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10009088:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}




uint * __cdecl FUN_10008fb0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10008fcc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10008fff;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000901b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10008fcc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000901b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000901b;
    }
  }
LAB_10008fff:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000901b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10009088:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10009088;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}




/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_100090d4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100090a0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_100090d4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_100090d4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100090a0:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_100090d4:
  return (uint)bVar5 * -2 + 1;
}




undefined4 __cdecl FUN_10009114(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1001650c != (code *)0x0) {
    iVar1 = (*DAT_1001650c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




int FUN_1000912f(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_10006b88();
    return iVar3;
  }
  if ((DAT_10016510 != (FARPROC)0x0) && (bVar2 = FUN_1000bb14(DAT_10016510), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_10016510)(param_1);
    return iVar3;
  }
  return 0;
}




uint __cdecl FUN_10009193(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  byte bVar5;
  undefined3 extraout_var;
  undefined *puVar6;
  int *piVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_1000929f:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_1000929f;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_10013428 && (piVar4 != (int *)&DAT_10013448)) || (bVar5 = FUN_1000c3e7(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_1000c2cb(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_1000b61d(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_100159c8;
        }
        else {
          puVar6 = (undefined *)((&DAT_10016aa0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_1000c30f(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_1000b61d(uVar2,pcVar3,(uint)piVar7);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == piVar7) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}




int __cdecl FUN_100092ab(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  WCHAR *pWVar3;
  undefined4 uVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  WCHAR *pWVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  WCHAR local_250 [255];
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  CHAR local_48 [4];
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  WCHAR *local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined8 local_24;
  char local_1a;
  char local_19;
  int local_18;
  undefined1 *local_14;
  WCHAR *local_10;
  int local_c;
  uint local_8;
  
  local_40 = 0;
  local_14 = (undefined1 *)0x0;
  bVar8 = *param_2;
  local_18 = 0;
  local_34 = (WCHAR *)0x0;
  pbVar1 = param_2;
  do {
    if ((bVar8 == 0) || (param_2 = pbVar1 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar8 < ' ') || ('x' < (char)bVar8)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (byte)"__GLOBAL_HEAP_SELECTED"[(char)bVar8 + 0x10] & 0xf;
    }
    local_40 = (int)(char)(&DAT_10011490)[uVar2 * 8 + local_40] >> 4;
    switch(local_40) {
    case 0:
switchD_10009327_caseD_0:
      local_30 = 0;
      if ((PTR_DAT_10015b34[(uint)bVar8 * 2 + 1] & 0x80) != 0) {
        FUN_10009a49((int)(char)bVar8,param_1,&local_18);
        bVar8 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_10009a49((int)(char)bVar8,param_1,&local_18);
      break;
    case 1:
      local_c = -1;
      local_44 = 0;
      local_3c = 0;
      local_2c = 0;
      local_28 = 0;
      local_8 = 0;
      local_30 = 0;
      break;
    case 2:
      if (bVar8 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar8 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar8 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar8 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar8 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar8 == 0x2a) {
        local_2c = FUN_10009ae7((int *)&param_3);
        if (local_2c < 0) {
          local_8 = local_8 | 4;
          local_2c = -local_2c;
        }
      }
      else {
        local_2c = (char)bVar8 + -0x30 + local_2c * 10;
      }
      break;
    case 4:
      local_c = 0;
      break;
    case 5:
      if (bVar8 == 0x2a) {
        local_c = FUN_10009ae7((int *)&param_3);
        if (local_c < 0) {
          local_c = -1;
        }
      }
      else {
        local_c = (char)bVar8 + -0x30 + local_c * 10;
      }
      break;
    case 6:
      if (bVar8 == 0x49) {
        if ((*param_2 != 0x36) || (pbVar1[2] != 0x34)) {
          local_40 = 0;
          goto switchD_10009327_caseD_0;
        }
        param_2 = pbVar1 + 3;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar8 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar8 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar8 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      pWVar10 = local_10;
      if ((char)bVar8 < 'h') {
        if ((char)bVar8 < 'e') {
          if ((char)bVar8 < 'Y') {
            if (bVar8 != 0x58) {
              if (bVar8 == 0x43) {
                if ((local_8 & 0x830) == 0) {
                  local_8 = local_8 | 0x800;
                }
                goto LAB_1000957c;
              }
              if ((bVar8 != 0x45) && (bVar8 != 0x47)) {
                if (bVar8 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_100094ec;
                }
                goto LAB_100098ff;
              }
              local_44 = 1;
              bVar8 = bVar8 + 0x20;
              goto LAB_1000954e;
            }
LAB_1000975b:
            local_38 = 7;
LAB_10009762:
            local_14 = (undefined1 *)0x10;
            if ((local_8 & 0x80) != 0) {
              local_1a = '0';
              local_19 = (char)local_38 + 'Q';
              local_28 = 2;
            }
            goto LAB_100097cb;
          }
          if (bVar8 == 0x5a) {
            psVar5 = (short *)FUN_10009ae7((int *)&param_3);
            if ((psVar5 == (short *)0x0) || (pWVar10 = *(WCHAR **)(psVar5 + 2), pWVar10 == (WCHAR *)0x0)) {
              local_10 = (WCHAR *)PTR_DAT_100157a0;
              pWVar10 = (WCHAR *)PTR_DAT_100157a0;
              goto LAB_100096dc;
            }
            if ((local_8 & 0x800) == 0) {
              local_30 = 0;
              local_14 = (undefined1 *)(int)*psVar5;
            }
            else {
              local_30 = 1;
              local_14 = (undefined1 *)((uint)(int)*psVar5 >> 1);
            }
          }
          else if (bVar8 == 99) {
LAB_1000957c:
            if ((local_8 & 0x810) == 0) {
              uVar4 = FUN_10009ae7((int *)&param_3);
              local_250[0]._0_1_ = (undefined1)uVar4;
              local_14 = (undefined1 *)0x1;
            }
            else {
              uVar4 = FUN_10009b04((int *)&param_3);
              local_14 = (undefined1 *)FUN_1000c410((LPSTR)local_250,(WCHAR)uVar4);
              if ((int)local_14 < 0) {
                local_3c = 1;
              }
            }
            pWVar10 = local_250;
          }
          else if (bVar8 == 100) goto LAB_100097c0;
        }
        else {
LAB_1000954e:
          local_8 = local_8 | 0x40;
          pWVar10 = local_250;
          pWVar3 = local_250;
          if (local_c < 0) {
            local_c = 6;
          }
          else if (local_c == 0) {
            if (bVar8 == 0x67) {
              local_c = 1;
            }
          }
          else {
            if (0x200 < local_c) {
              local_c = 0x200;
            }
            if ((0xa3 < local_c) && (local_10 = local_250, local_34 = _malloc(local_c + 0x15d), pWVar10 = local_34, pWVar3 = local_34, local_34 == (WCHAR *)0x0)
               ) {
              local_c = 0xa3;
              pWVar10 = local_250;
              pWVar3 = local_10;
            }
          }
          local_10 = pWVar3;
          local_50 = *param_3;
          local_4c = param_3[1];
          param_3 = param_3 + 2;
          (*(code *)PTR___fptrap_10015b10)(&local_50,pWVar10,(int)(char)bVar8,local_c,local_44);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_c == 0)) {
            (*(code *)PTR___fptrap_10015b1c)(pWVar10);
          }
          if ((bVar8 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_10015b14)(pWVar10);
          }
          if ((char)*pWVar10 == '-') {
            local_8 = local_8 | 0x100;
            pWVar10 = (WCHAR *)((int)pWVar10 + 1);
            local_10 = pWVar10;
          }
LAB_100096dc:
          local_14 = (undefined1 *)_strlen((char *)pWVar10);
          pWVar10 = local_10;
        }
LAB_100098ff:
        local_10 = pWVar10;
        uVar2 = local_8;
        if (local_3c == 0) {
          if ((local_8 & 0x40) != 0) {
            if ((local_8 & 0x100) == 0) {
              if ((local_8 & 1) == 0) {
                if ((local_8 & 2) == 0) goto LAB_10009937;
                local_1a = ' ';
              }
              else {
                local_1a = '+';
              }
            }
            else {
              local_1a = '-';
            }
            local_28 = 1;
          }
LAB_10009937:
          iVar9 = (local_2c - local_28) - (int)local_14;
          if ((local_8 & 0xc) == 0) {
            FUN_10009a7e(0x20,iVar9,param_1,&local_18);
          }
          FUN_10009aaf(&local_1a,local_28,param_1,&local_18);
          if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
            FUN_10009a7e(0x30,iVar9,param_1,&local_18);
          }
          if ((local_30 == 0) || (puVar11 = local_14, pWVar10 = local_10, (int)local_14 < 1)) {
            FUN_10009aaf((char *)local_10,(int)local_14,param_1,&local_18);
          }
          else {
            do {
              puVar11 = puVar11 + -1;
              iVar7 = FUN_1000c410(local_48,*pWVar10);
              if (iVar7 < 1) break;
              FUN_10009aaf(local_48,iVar7,param_1,&local_18);
              pWVar10 = pWVar10 + 1;
            } while (puVar11 != (undefined1 *)0x0);
          }
          if ((local_8 & 4) != 0) {
            FUN_10009a7e(0x20,iVar9,param_1,&local_18);
          }
        }
      }
      else {
        if (bVar8 == 0x69) {
LAB_100097c0:
          local_8 = local_8 | 0x40;
LAB_100097c4:
          local_14 = (undefined1 *)0xa;
LAB_100097cb:
          if ((local_8 & 0x8000) == 0) {
            if ((local_8 & 0x20) == 0) {
              if ((local_8 & 0x40) == 0) {
                uVar2 = FUN_10009ae7((int *)&param_3);
                local_24 = (ulonglong)uVar2;
                goto LAB_1000981e;
              }
              uVar2 = FUN_10009ae7((int *)&param_3);
            }
            else if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_10009ae7((int *)&param_3);
              uVar2 = uVar2 & 0xffff;
            }
            else {
              uVar4 = FUN_10009ae7((int *)&param_3);
              uVar2 = (uint)(short)uVar4;
            }
            local_24 = (ulonglong)(int)uVar2;
          }
          else {
            local_24 = FUN_10009af4((int *)&param_3);
          }
LAB_1000981e:
          iVar9 = (int)(local_24 >> 0x20);
          if ((((local_8 & 0x40) != 0) && (iVar9 == 0 || (longlong)local_24 < 0)) && ((longlong)local_24 < 0)) {
            local_8 = local_8 | 0x100;
            local_24 = CONCAT44(-(iVar9 + (uint)((int)local_24 != 0)),-(int)local_24);
          }
          if ((local_8 & 0x8000) == 0) {
            local_24 = local_24 & 0xffffffff;
          }
          if (local_c < 0) {
            local_c = 1;
          }
          else {
            local_8 = local_8 & 0xfffffff7;
            if (0x200 < local_c) {
              local_c = 0x200;
            }
          }
          if ((uint)local_24 == 0 && local_24._4_4_ == 0) {
            local_28 = 0;
          }
          local_10 = (WCHAR *)&local_51;
          while( true ) {
            puVar11 = local_14;
            iVar9 = local_c + -1;
            if ((local_c < 1) && ((uint)local_24 == 0 && local_24._4_4_ == 0)) break;
            uVar2 = (int)local_14 >> 0x1f;
            local_c = iVar9;
            uVar12 = __aullrem((uint)local_24,local_24._4_4_,(uint)local_14,uVar2);
            iVar9 = (int)uVar12 + 0x30;
            local_24 = __aulldiv((uint)local_24,local_24._4_4_,(uint)puVar11,uVar2);
            if (0x39 < iVar9) {
              iVar9 = iVar9 + local_38;
            }
            pWVar10 = (WCHAR *)((int)local_10 + -1);
            *(char *)local_10 = (char)iVar9;
            local_10 = pWVar10;
          }
          iVar7 = -(int)local_10;
          local_14 = &local_51 + iVar7;
          pWVar10 = (WCHAR *)((int)local_10 + 1);
          local_c = iVar9;
          if (((local_8 & 0x200) != 0) && ((*(char *)pWVar10 != '0' || (local_14 == (undefined1 *)0x0)))) {
            *(char *)local_10 = '0';
            local_14 = (undefined1 *)((int)&local_50 + iVar7);
            pWVar10 = local_10;
          }
          goto LAB_100098ff;
        }
        if (bVar8 != 0x6e) {
          if (bVar8 == 0x6f) {
            local_14 = (undefined1 *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_100097cb;
          }
          if (bVar8 == 0x70) {
            local_c = 8;
            goto LAB_1000975b;
          }
          if (bVar8 == 0x73) {
LAB_100094ec:
            iVar9 = 0x7fffffff;
            if (local_c != -1) {
              iVar9 = local_c;
            }
            pWVar3 = (WCHAR *)FUN_10009ae7((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar10 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_100157a0;
                pWVar10 = (WCHAR *)PTR_DAT_100157a0;
              }
              for (; (iVar9 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1)) {
                iVar9 = iVar9 + -1;
              }
              local_14 = (undefined1 *)((int)pWVar3 - (int)pWVar10);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_100157a4;
              }
              local_30 = 1;
              for (pWVar10 = pWVar3; (iVar9 != 0 && (*pWVar10 != L'\0')); pWVar10 = pWVar10 + 1) {
                iVar9 = iVar9 + -1;
              }
              local_14 = (undefined1 *)((int)pWVar10 - (int)pWVar3 >> 1);
              pWVar10 = pWVar3;
            }
            goto LAB_100098ff;
          }
          if (bVar8 != 0x75) {
            if (bVar8 != 0x78) goto LAB_100098ff;
            local_38 = 0x27;
            goto LAB_10009762;
          }
          goto LAB_100097c4;
        }
        piVar6 = (int *)FUN_10009ae7((int *)&param_3);
        if ((local_8 & 0x20) == 0) {
          *piVar6 = local_18;
        }
        else {
          *(undefined2 *)piVar6 = (undefined2)local_18;
        }
        local_3c = 1;
      }
      if (local_34 != (WCHAR *)0x0) {
        FUN_10004d22((undefined *)local_34);
        local_34 = (WCHAR *)0x0;
      }
    }
    bVar8 = *param_2;
    pbVar1 = param_2;
  } while( true );
}




void __cdecl FUN_10009a49(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10009193(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    uVar2 = param_1 & 0xff;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}




void __cdecl FUN_10009a7e(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_10009a49(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}




void __cdecl FUN_10009aaf(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_10009a49((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}




undefined4 __cdecl FUN_10009ae7(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}




undefined8 __cdecl FUN_10009af4(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}




undefined4 __cdecl FUN_10009b04(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}




void FUN_10009b12(void)

{
  if (PTR_FUN_100160d0 != (undefined *)0x0) {
    (*(code *)PTR_FUN_100160d0)();
  }
  FUN_10009c16((undefined4 *)&DAT_10013010,(undefined4 *)&DAT_10013024);
  FUN_10009c16((undefined4 *)&DAT_10013000,(undefined4 *)&DAT_1001300c);
  return;
}




/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10009b5f(_Code,1,0);
  return;
}




void FUN_10009b50(void)

{
  FUN_10009b5f(0,0,1);
  return;
}




void __cdecl FUN_10009b5f(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10009c04();
  if (DAT_10016554 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10016550 = 1;
  DAT_1001654c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10016bb0 != (undefined4 *)0x0) && (puVar1 = (undefined4 *)(DAT_10016bac - 4), DAT_10016bb0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10016bb0 <= puVar1);
    }
    FUN_10009c16((undefined4 *)&DAT_10013028,(undefined4 *)&DAT_10013030);
  }
  FUN_10009c16((undefined4 *)&DAT_10013034,(undefined4 *)&DAT_1001303c);
  if (param_3 == 0) {
    DAT_10016554 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10009c0d();
  return;
}




void FUN_10009c04(void)

{
  FUN_10008162(0xd);
  return;
}




void FUN_10009c0d(void)

{
  FUN_100081c3(0xd);
  return;
}




void __cdecl FUN_10009c16(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}




byte * __cdecl FUN_10009c30(byte *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  int local_3c;
  uint *local_38;
  byte *local_34;
  int *local_30;
  uint *local_2c;
  byte *local_28;
  uint *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10011508;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_10004d22(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_10016bd4 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10008162(9);
            local_8 = 0;
            local_2c = (uint *)FUN_10006f01((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_10016bcc) {
                iVar1 = FUN_1000770a(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_10007255(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_1000c5d0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_10006f01((int)param_1);
                    FUN_10006f2c(local_2c,(int)param_1);
                  }
                }
                else {
                  local_28 = param_1;
                }
              }
              if (local_28 == (byte *)0x0) {
                if (param_2 == (uint *)0x0) {
                  param_2 = (uint *)0x1;
                }
                param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
                local_28 = HeapAlloc(DAT_10016bd0,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_1000c5d0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10006f2c(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_10009dbb();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_10016bd0,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_10016508 == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_10009114(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_10016bd4 == 2) {
          ExceptionList = &local_14;
          if (param_2 < (uint *)0xffffffe1) {
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x10;
              ExceptionList = &local_14;
            }
            else {
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              ExceptionList = &local_14;
            }
          }
          do {
            local_28 = pbVar3;
            if (param_2 < (uint *)0xffffffe1) {
              FUN_10008162(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_10007c5c(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_10016bd0,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_100156c4) {
                  iVar1 = FUN_10008024(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_10007cf8((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_1000c5d0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_10007cb3(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) && (local_28 = HeapAlloc(DAT_10016bd0,0,(SIZE_T)param_2), local_28 != (byte *)0x0)) {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_1000c5d0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10007cb3(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_10009f09();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_10016508 == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_10009114(param_2);
          } while (iVar1 != 0);
        }
        else {
          do {
            pbVar3 = (byte *)0x0;
            if (param_2 < (uint *)0xffffffe1) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              pbVar3 = HeapReAlloc(DAT_10016bd0,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_10016508 == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_10009114(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}




void FUN_10009dbb(void)

{
  FUN_100081c3(9);
  return;
}




void FUN_10009f09(void)

{
  FUN_100081c3(9);
  return;
}




SIZE_T __cdecl FUN_10009f5f(undefined *param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined4 local_30;
  byte *local_2c;
  uint local_28;
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10011520;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  if (DAT_10016bd4 == 3) {
    ExceptionList = &local_14;
    FUN_10008162(9);
    local_8 = 0;
    local_20 = (byte *)FUN_10006f01((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_10009fc9();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10016bd4 != 2) goto LAB_1000a01d;
    ExceptionList = &local_14;
    FUN_10008162(9);
    local_8 = 1;
    local_2c = (byte *)FUN_10007c5c(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_1000a044();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_1000a01d:
  SVar2 = HeapSize(DAT_10016bd0,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}




void FUN_10009fc9(void)

{
  FUN_100081c3(9);
  return;
}




void FUN_1000a044(void)

{
  FUN_100081c3(9);
  return;
}




void __cdecl FUN_1000a04d(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000a0c9();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_100157a8;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000a0c0();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x100157ac);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar2 < &DAT_10015910);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000a0c0();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000a0c0();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000a0c0();
  *pDVar1 = 0x16;
  return;
}




DWORD * FUN_1000a0c0(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10006a81();
  return pDVar1 + 2;
}




DWORD * FUN_1000a0c9(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10006a81();
  return pDVar1 + 3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000a0d2(undefined4 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var;
  int iVar3;
  void *pvVar4;
  
  bVar2 = FUN_1000c3e7(param_1[4]);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)&DAT_10013428) {
    iVar3 = 0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_10013448) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_1001649c = _DAT_1001649c + 1;
  if ((*(ushort *)(param_1 + 3) & 0x10c) != 0) {
    return 0;
  }
  if ((&DAT_10016558)[iVar3] == 0) {
    pvVar4 = _malloc(0x1000);
    (&DAT_10016558)[iVar3] = pvVar4;
    if (pvVar4 == (void *)0x0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1 + 5;
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_1000a14e;
    }
  }
  uVar1 = (&DAT_10016558)[iVar3];
  param_1[6] = 0x1000;
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = 0x1000;
LAB_1000a14e:
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x1102;
  return 1;
}




void __cdecl FUN_1000a15f(int param_1,int *param_2)

{
  if ((param_1 != 0) && ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0)) {
    FUN_10005e54(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}




void FUN_1000a189(void)

{
  if (DAT_10016618 == 0) {
    FUN_10008162(0xb);
    if (DAT_10016618 == 0) {
      FUN_1000a1b7();
      DAT_10016618 = DAT_10016618 + 1;
    }
    FUN_100081c3(0xb);
  }
  return;
}




void FUN_1000a1b7(void)

{
  char cVar1;
  char cVar2;
  uint *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  void *this;
  uint *_Source;
  int local_8;
  
  FUN_10008162(0xc);
  DAT_100159b8 = 0xffffffff;
  DAT_100159a8 = 0xffffffff;
  DAT_10016560 = 0;
  _Str1 = (uint *)FUN_1000c990("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_100081c3(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10016568);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_10015910 = (void *)(DAT_10016568 * 0x3c);
    DAT_10016560 = 1;
    if (DAT_100165ae != 0) {
      DAT_10015910 = (void *)((int)DAT_10015910 + DAT_100165bc * 0x3c);
    }
    if ((DAT_10016602 == 0) || (DAT_10016610 == 0)) {
      DAT_10015914 = 0;
      DAT_10015918 = 0;
    }
    else {
      DAT_10015914 = 1;
      DAT_10015918 = (DAT_10016610 - DAT_100165bc) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_1001676c,0x220,(LPCWSTR)&DAT_1001656c,-1,PTR_DAT_1001599c,0x3f,(LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_1001599c = 0;
    }
    else {
      PTR_DAT_1001599c[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_1001676c,0x220,(LPCWSTR)&DAT_100165c0,-1,PTR_DAT_100159a0,0x3f,(LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_100159a0[0x3f] = 0;
      return;
    }
LAB_1000a428:
    *PTR_DAT_100159a0 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') && ((DAT_10016614 == (uint *)0x0 || (iVar4 = _strcmp((char *)_Str1,(char *)DAT_10016614), iVar4 != 0)))) {
      FUN_10004d22((undefined *)DAT_10016614);
      sVar5 = _strlen((char *)_Str1);
      DAT_10016614 = _malloc(sVar5 + 1);
      if (DAT_10016614 != (uint *)0x0) {
        FUN_10008fa0(DAT_10016614,_Str1);
        FUN_100081c3(0xc);
        _strncpy(PTR_DAT_1001599c,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_1001599c[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_1000c905(this,(byte *)_Source);
        DAT_10015910 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':')))); _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_1000c905(DAT_10015910,(byte *)_Source);
          DAT_10015910 = (void *)((int)DAT_10015910 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':')); _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_1000c905(DAT_10015910,(byte *)_Source);
            DAT_10015910 = (void *)((int)DAT_10015910 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':')); _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_10015910 = (void *)-(int)DAT_10015910;
        }
        DAT_10015914 = (int)(char)*_Source;
        if (DAT_10015914 != 0) {
          _strncpy(PTR_DAT_100159a0,(char *)_Source,3);
          PTR_DAT_100159a0[3] = 0;
          return;
        }
        goto LAB_1000a428;
      }
    }
    FUN_100081c3(0xc);
  }
  return;
}




bool __cdecl FUN_1000a43e(int *param_1)

{
  bool bVar1;
  
  FUN_10008162(0xb);
  bVar1 = FUN_1000a45f(param_1);
  FUN_100081c3(0xb);
  return bVar1;
}




bool __cdecl FUN_1000a45f(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_10015914 != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_100159a8) || (uVar5 != DAT_100159b8)) {
      if (DAT_10016560 == 0) {
        FUN_1000a60b(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_1000a60b(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_10016600 != 0) {
          uVar6 = (uint)DAT_10016606;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_10016604;
          uVar6 = 0;
          uVar4 = (uint)DAT_10016606;
        }
        FUN_1000a60b(1,(uint)(DAT_10016600 == 0),uVar5,(uint)DAT_10016602,uVar4,uVar3,uVar6,(uint)DAT_10016608,(uint)DAT_1001660a,(uint)DAT_1001660c,
                     (uint)DAT_1001660e);
        if (DAT_100165ac != 0) {
          uVar6 = (uint)DAT_100165b2;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_100165b0;
          uVar6 = 0;
          uVar4 = (uint)DAT_100165b2;
          uVar5 = param_1[5];
        }
        FUN_1000a60b(0,(uint)(DAT_100165ac == 0),uVar5,(uint)DAT_100165ae,uVar4,uVar3,uVar6,(uint)DAT_100165b4,(uint)DAT_100165b6,(uint)DAT_100165b8,
                     (uint)DAT_100165ba);
      }
    }
    iVar1 = param_1[7];
    if (DAT_100159ac < DAT_100159bc) {
      if ((DAT_100159ac <= iVar1) && (iVar1 <= DAT_100159bc)) {
        if ((DAT_100159ac < iVar1) && (iVar1 < DAT_100159bc)) {
          return true;
        }
LAB_1000a5d7:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_100159ac) {
          return DAT_100159b0 <= iVar2;
        }
        return iVar2 < DAT_100159c0;
      }
    }
    else {
      if (iVar1 < DAT_100159bc) {
        return true;
      }
      if (DAT_100159ac < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_100159bc) || (DAT_100159ac <= iVar1)) goto LAB_1000a5d7;
    }
  }
  return false;
}




void __cdecl
FUN_1000a60b(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_10015d3c + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_10015d70 + param_4 * 4);
    }
    iVar2 = (int)(param_3 * 0x16d + -0x63db + iVar1 + 1 + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar2) {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_10015d40 + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_10015d74 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_10015d3c + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_10015d70 + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_100159a8 = param_3;
    DAT_100159b0 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_100159ac = iVar1;
  }
  else {
    DAT_100159c0 = ((param_8 * 0x3c + param_9) * 0x3c + DAT_10015918 + param_10) * 1000 + param_11;
    if (DAT_100159c0 < 0) {
      DAT_100159c0 = DAT_100159c0 + 86400000;
      DAT_100159bc = iVar1 + -1;
    }
    else {
      DAT_100159bc = iVar1;
      if (86399999 < DAT_100159c0) {
        DAT_100159c0 = DAT_100159c0 + -86400000;
        DAT_100159bc = iVar1 + 1;
      }
    }
    DAT_100159b8 = param_3;
  }
  return;
}




int * __cdecl FUN_1000a74b(int *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  iVar4 = *param_1;
  bVar1 = false;
  pDVar2 = FUN_10006a81();
  if (iVar4 < 0) {
    return (int *)0x0;
  }
  if (pDVar2[0x10] == 0) {
    pvVar3 = _malloc(0x24);
    pDVar2[0x10] = (DWORD)pvVar3;
    piVar5 = (int *)&DAT_10016620;
    if (pvVar3 == (void *)0x0) goto LAB_1000a785;
  }
  piVar5 = (int *)pDVar2[0x10];
LAB_1000a785:
  iVar8 = iVar4 % 0x7861f80;
  iVar4 = (iVar4 / 0x7861f80) * 4;
  iVar6 = iVar4 + 0x46;
  iVar9 = iVar8;
  if (0x1e1337f < iVar8) {
    iVar9 = iVar8 + -0x1e13380;
    iVar6 = iVar4 + 0x47;
    if (0x1e1337f < iVar9) {
      iVar9 = iVar8 + -0x3c26700;
      iVar6 = iVar4 + 0x48;
      if (iVar9 < 0x1e28500) {
        bVar1 = true;
      }
      else {
        iVar6 = iVar4 + 0x49;
        iVar9 = iVar8 + -0x5a4ec00;
      }
    }
  }
  piVar5[5] = iVar6;
  piVar10 = (int *)&DAT_10015d40;
  piVar5[7] = iVar9 / 0x15180;
  if (!bVar1) {
    piVar10 = (int *)&DAT_10015d74;
  }
  iVar4 = 1;
  piVar7 = piVar10;
  while (piVar7 = piVar7 + 1, *piVar7 < piVar5[7]) {
    iVar4 = iVar4 + 1;
  }
  piVar5[4] = iVar4 + -1;
  piVar5[3] = piVar5[7] - piVar10[iVar4 + -1];
  piVar5[6] = (*param_1 / 0x15180 + 4) % 7;
  piVar5[2] = (iVar9 % 0x15180) / 0xe10;
  iVar4 = (iVar9 % 0x15180) % 0xe10;
  piVar5[1] = iVar4 / 0x3c;
  piVar5[8] = 0;
  *piVar5 = iVar4 % 0x3c;
  return piVar5;
}




int __cdecl FUN_1000a855(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_28 [2];
  int local_20;
  int local_18;
  uint local_14;
  int local_c;
  
  uVar3 = param_1 - 0x76c;
  if (((int)uVar3 < 0x46) || (0x8a < (int)uVar3)) {
    iVar2 = -1;
  }
  else {
    iVar4 = *(int *)(&DAT_10015d70 + param_2 * 4) + param_3;
    if (((uVar3 & 3) == 0) && (2 < param_2)) {
      iVar4 = iVar4 + 1;
    }
    FUN_1000a189();
    local_20 = param_4;
    local_18 = param_2 + -1;
    iVar2 = ((param_4 + (uVar3 * 0x16d + iVar4 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5) * 0x3c + DAT_10015910 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_10015914 != 0)) && (local_14 = uVar3, local_c = iVar4, bVar1 = FUN_1000a43e(local_28), CONCAT31(extraout_var,bVar1) != 0)))) {
      iVar2 = iVar2 + DAT_10015918;
    }
  }
  return iVar2;
}




void FUN_1000a917(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  UINT *pUVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  UINT UVar9;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  puVar2 = _malloc(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_10016ba0 = 0x20;
  DAT_10016aa0 = puVar2;
  for (; puVar2 < DAT_10016aa0 + 0x120; puVar2 = puVar2 + 9) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_4c.lpReserved2;
    pUVar5 = (UINT *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)pUVar5 + UVar8);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_10016ba0 < (int)UVar8) {
      puVar2 = &DAT_10016aa4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10016ba0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10016ba0 = DAT_10016ba0 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          puVar3[2] = 0;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_10016ba0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10016aa0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)local_8;
          *(byte *)(puVar2 + 1) = (byte)*pUVar5;
        }
        local_8 = local_8 + 4;
        uVar7 = uVar7 + 1;
        pUVar5 = (UINT *)((int)pUVar5 + 1);
      } while ((int)uVar7 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_10016aa0 + iVar6 * 9;
    if (DAT_10016aa0[iVar6 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_1000aabc;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1000aabc:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10016ba0);
      return;
    }
  } while( true );
}




void FUN_1000aad3(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10016aa0;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_10004d22((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10016ba0);
  return;
}




void FUN_1000ab27(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10016ba8 == 0) {
    FUN_1000cde5();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1001648c; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_10016534 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1001648c;
  puVar6 = DAT_1001648c;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10008fa0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10004d22((undefined *)DAT_1001648c);
  DAT_1001648c = (uint *)0x0;
  *puVar3 = 0;
  DAT_10016ba4 = 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000abe0(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10016ba8 == 0) {
    FUN_1000cde5();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10016644,0x104);
  _DAT_10016544 = &DAT_10016644;
  pbVar2 = &DAT_10016644;
  if (*DAT_10017be4 != 0) {
    pbVar2 = DAT_10017be4;
  }
  FUN_1000ac79(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000ac79(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1001652c = puVar1;
  _DAT_10016528 = local_8 + -1;
  return;
}




void __cdecl FUN_1000ac79(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_10016980 + bVar1 + 1) & 4) != 0) && (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_10016980 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_1000ad24;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_1000ad24:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_10016980 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10016980 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}




LPSTR FUN_1000ae2d(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_10016748 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10016748 = 1;
LAB_1000ae84:
      if ((lpWideCharStr == (LPWCH)0x0) && (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0), local_8 = pCVar6, iVar5 == 0)) {
        FUN_10004d22(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10016748 = 2;
  }
  else {
    if (DAT_10016748 == 1) goto LAB_1000ae84;
    if (DAT_10016748 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_1000c5d0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}




void FUN_1000af5f(void)

{
  if ((DAT_10016494 == 1) || ((DAT_10016494 == 0 && (DAT_10016498 == 1)))) {
    FUN_1000af98(0xfc);
    if (DAT_1001674c != (code *)0x0) {
      (*DAT_1001674c)();
    }
    FUN_1000af98(0xff);
  }
  return;
}




void __cdecl FUN_1000af98(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_100159f0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while (pDVar2 < &DAT_10015a80);
  if (param_1 == (&DAT_100159f0)[iVar5 * 2]) {
    if ((DAT_10016494 == 1) || ((DAT_10016494 == 0 && (DAT_10016498 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100159f4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10008fa0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10008fa0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10008fb0(local_a4,_Dest);
      FUN_10008fb0(local_a4,(uint *)&DAT_10011830);
      FUN_10008fb0(local_a4,*(uint **)(iVar5 * 8 + 0x100159f4));
      auStackY_1e3._3_4_ = 0x1000b0bc;
      FUN_1000ce01(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}




int * __cdecl FUN_1000b0eb(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10011870;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_10016bd4 == 3) {
        if (puVar2 <= DAT_10016bcc) {
          FUN_10008162(9);
          local_8 = 0;
          local_24 = FUN_10007255(puVar2);
          local_8 = 0xffffffff;
          FUN_1000b184();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1000b1d8;
LAB_1000b1c7:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_1000b1d3:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10016bd4 != 2) || (DAT_100156c4 < puVar3)) goto LAB_1000b1d3;
        FUN_10008162(9);
        local_8 = 1;
        local_24 = FUN_10007cf8((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_1000b20d();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_1000b1c7;
      }
LAB_1000b1d8:
      local_24 = HeapAlloc(DAT_10016bd0,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10016508 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10009114(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}




void FUN_1000b184(void)

{
  FUN_100081c3(9);
  return;
}




void FUN_1000b20d(void)

{
  FUN_100081c3(9);
  return;
}




uint FUN_1000b2a9(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  uVar4 = 0xffffffff;
  FUN_10008162(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_10016aa0;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_10008162(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_100081c3(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          uVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (uVar4 != 0xffffffff) goto LAB_1000b3bb;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x10016b9f < (int)piVar3) goto LAB_1000b3bb;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_10016ba0 = DAT_10016ba0 + 0x20;
    (&DAT_10016aa0)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_10016aa0)[local_8];
    }
    uVar4 = local_8 << 5;
    FUN_1000b509(uVar4);
  }
LAB_1000b3bb:
  FUN_100081c3(0x12);
  return uVar4;
}




undefined4 __cdecl FUN_1000b3cc(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10016ba0) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_10016aa0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_10016498 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000b425;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1000b425:
      *(HANDLE *)((&DAT_10016aa0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_1000a0c0();
  *pDVar1 = 9;
  pDVar1 = FUN_1000a0c9();
  *pDVar1 = 0;
  return 0xffffffff;
}




undefined4 __cdecl FUN_1000b448(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10016ba0) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10016aa0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10016498 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000b4a4;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000b4a4:
      *(undefined4 *)((&DAT_10016aa0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000a0c0();
  *pDVar2 = 9;
  pDVar2 = FUN_1000a0c9();
  *pDVar2 = 0;
  return 0xffffffff;
}




undefined4 __cdecl FUN_1000b4c7(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10016ba0) && ((*(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10016aa0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000a0c0();
  *pDVar1 = 9;
  pDVar1 = FUN_1000a0c9();
  *pDVar1 = 0;
  return 0xffffffff;
}




void __cdecl FUN_1000b509(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10016aa0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10008162(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_100081c3(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10016aa0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}




void __cdecl FUN_1000b568(uint param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)((&DAT_10016aa0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}




undefined4 __cdecl FUN_1000b58a(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10016ba0 <= param_1) {
LAB_1000b60b:
    pDVar3 = FUN_1000a0c0();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000b60b;
  FUN_1000b509(param_1);
  if ((*(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000b4c7(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000b600;
    pDVar3 = FUN_1000a0c9();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000a0c0();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000b600:
  FUN_1000b568(param_1);
  return uVar5;
}




int __cdecl FUN_1000b61d(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10016ba0) && ((*(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000b509(param_1);
    iVar1 = FUN_1000b682(param_1,param_2,param_3);
    FUN_1000b568(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000a0c0();
  *pDVar2 = 9;
  pDVar2 = FUN_1000a0c9();
  *pDVar2 = 0;
  return -1;
}




int __cdecl FUN_1000b682(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  BOOL BVar6;
  DWORD *pDVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  local_c = 0;
  local_14 = 0;
  if (param_3 == 0) {
LAB_1000b69b:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10016aa0 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1000c374(param_1,0,2);
    }
    if ((*(byte *)((undefined4 *)(*piVar1 + iVar4) + 1) & 0x80) == 0) {
      BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        param_1 = GetLastError();
      }
      else {
        local_c = local_10;
        param_1 = 0;
      }
LAB_1000b76a:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_1000b7dc;
      if (param_1 == 5) {
        pDVar7 = FUN_1000a0c0();
        *pDVar7 = 9;
        pDVar7 = FUN_1000a0c9();
        *pDVar7 = 5;
      }
      else {
        FUN_1000a04d(param_1);
      }
    }
    else {
      local_8 = param_2;
      param_1 = 0;
      if (param_3 != 0) {
        do {
          pcVar5 = local_418;
          do {
            if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
            pcVar2 = local_8 + 1;
            cVar3 = *local_8;
            local_8 = pcVar2;
            if (cVar3 == '\n') {
              local_14 = local_14 + 1;
              *pcVar5 = '\r';
              pcVar5 = pcVar5 + 1;
            }
            *pcVar5 = cVar3;
            pcVar5 = pcVar5 + 1;
          } while ((int)pcVar5 - (int)local_418 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),local_418,(int)pcVar5 - (int)local_418,&local_10,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            param_1 = GetLastError();
            goto LAB_1000b76a;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) || (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1000b76a;
        } while( true );
      }
LAB_1000b7dc:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_1000b69b;
      pDVar7 = FUN_1000a0c0();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_1000a0c9();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}




uint __cdecl FUN_1000b80d(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  DWORD *pDVar4;
  HANDLE hFile;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar8 = (param_2 & 0x80) == 0;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar8) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar8;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_10016784 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) goto LAB_1000b911;
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) goto LAB_1000b911;
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_1000b92b;
      if (uVar2 != 0x300) goto LAB_1000b911;
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_1000b92b:
        local_c = 5;
        goto LAB_1000b93b;
      }
      if (uVar2 != 0x700) {
LAB_1000b911:
        pDVar4 = FUN_1000a0c0();
        *pDVar4 = 0x16;
        pDVar4 = FUN_1000a0c9();
        *pDVar4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_1000b93b:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_10016514 & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_1000b2a9();
  if (uVar3 == 0xffffffff) {
    pDVar4 = FUN_1000a0c0();
    *pDVar4 = 0x18;
    pDVar4 = FUN_1000a0c9();
    *pDVar4 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,local_14,&local_20,local_c,uVar2,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar5 = GetFileType(hFile);
    if (DVar5 != 0) {
      if (DVar5 == 2) {
        local_5 = local_5 | 0x40;
      }
      else if (DVar5 == 3) {
        local_5 = local_5 | 8;
      }
      FUN_1000b3cc(uVar3,hFile);
      iVar7 = (uVar3 & 0x1f) * 0x24;
      param_1._3_1_ = local_5 & 0x48;
      *(byte *)((&DAT_10016aa0)[(int)uVar3 >> 5] + 4 + iVar7) = local_5 | 1;
      if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        local_14 = FUN_1000c374(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          pDVar4 = FUN_1000a0c9();
          if (*pDVar4 == 0x83) goto LAB_1000bab5;
        }
        else {
          param_3 = param_3 & 0xffffff;
          iVar6 = FUN_1000c0f2(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
          if ((((iVar6 != 0) || (param_3._3_1_ != '\x1a')) || (iVar6 = FUN_1000ce8a(uVar3,local_14), iVar6 != -1)) &&
             (DVar5 = FUN_1000c374(uVar3,0,0), DVar5 != 0xffffffff)) goto LAB_1000bab5;
        }
        FUN_10005d1b(uVar3);
        uVar2 = 0xffffffff;
      }
      else {
LAB_1000bab5:
        uVar2 = uVar3;
        if ((param_1._3_1_ == 0) && ((param_2 & 8) != 0)) {
          pbVar1 = (byte *)((&DAT_10016aa0)[(int)uVar3 >> 5] + 4 + iVar7);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
      goto LAB_1000bace;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_1000a04d(DVar5);
  uVar2 = 0xffffffff;
LAB_1000bace:
  FUN_1000b568(uVar3);
  return uVar2;
}




bool __cdecl FUN_1000badc(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}




bool __cdecl FUN_1000baf8(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}




bool __cdecl FUN_1000bb14(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}




void FUN_1000bb2c(void)

{
  FUN_1000af98(10);
  FUN_1000cfaf((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}




void __thiscall FUN_1000bb43(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_1000bb5a(this,param_1,param_2,param_3,0);
  return;
}




void * __thiscall FUN_1000bb5a(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  DWORD *pDVar6;
  void *this_00;
  byte bVar7;
  undefined *puVar8;
  void *local_c;
  byte *local_8;
  
  local_c = (void *)0x0;
  bVar7 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_10015b28 < 2) {
      uVar3 = (byte)PTR_DAT_10015b34[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_10015b34;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_1000bf46(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1000bbb5:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_1000bbb5;
  if ((((int)param_3 < 0) || (param_3 == (void *)0x1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return (void *)0x0;
  }
  this_00 = (void *)0x10;
  if (param_3 == (void *)0x0) {
    if (bVar7 != 0x30) {
      param_3 = (void *)0xa;
      goto LAB_1000bc1f;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_1000bc1f;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_1000bc1f:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_10015b28 < 2) {
      uVar5 = (byte)PTR_DAT_10015b34[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_1000bf46(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_10015b28 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_10015b34 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_1000bf46(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_1000bccb:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = (void *)0x0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 && ((((param_4 & 2) != 0 && ((void *)0x80000000 < local_c)) || (((param_4 & 2) == 0 && ((void *)0x7fffffff < local_c)))))))
                ) {
          pDVar6 = FUN_1000a0c0();
          *pDVar6 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = (void *)(((param_4 & 2) != 0) + 0x7fffffff);
          }
          else {
            local_c = (void *)0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return (void *)-(int)local_c;
      }
      uVar3 = FUN_1000d16e((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_1000bccb;
    if ((local_c < pvVar4) || ((local_c == pvVar4 && (this_00 <= (void *)(0xffffffff % ZEXT48(param_3)))))) {
      local_c = (void *)((int)local_c * (int)param_3 + (int)this_00);
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar7 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}




/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}




/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}




uint __cdecl FUN_1000bdf8(LPWSTR param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_10016868);
  bVar2 = DAT_10016864 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_10016868);
    FUN_10008162(0x13);
  }
  uVar1 = FUN_1000be55(param_1,param_2,param_3);
  if (bVar2) {
    FUN_100081c3(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_10016868);
  }
  return uVar1;
}




uint __cdecl FUN_1000be55(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_1001675c == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_10015b34[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_1001676c,9,(LPCSTR)param_2,1,param_1,(uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_10015b28) {
          if ((int)param_3 < (int)DAT_10015b28) goto LAB_1000bee7;
          iVar2 = MultiByteToWideChar(DAT_1001676c,9,(LPCSTR)param_2,DAT_10015b28,param_1,(uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_10015b28;
          }
        }
        if ((DAT_10015b28 <= param_3) && (param_2[1] != 0)) {
          return DAT_10015b28;
        }
      }
LAB_1000bee7:
      pDVar3 = FUN_1000a0c0();
      *pDVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}




uint __thiscall FUN_1000bf1e(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_10015b28) {
    uVar1 = FUN_1000bf46(this,param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_10015b34[param_1 * 2] & 8;
}




uint __thiscall FUN_1000bf46(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_10015b34 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_10015b34[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1000d2b2(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}




/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) + param_2 * param_3 + param_1 * param_4,(int)((ulonglong)param_1 * (ulonglong)param_3))
  ;
}




/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall __allshl(byte param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}




uint __cdecl FUN_1000c01f(uint param_1,int *param_2)

{
  uint uVar1;
  
  if ((param_1 != 0xffffffff) && ((uVar1 = param_2[3], (uVar1 & 1) != 0 || (((uVar1 & 0x80) != 0 && ((uVar1 & 2) == 0)))))) {
    if (param_2[2] == 0) {
      FUN_1000c2cb(param_2);
    }
    if (*param_2 == param_2[2]) {
      if (param_2[1] != 0) {
        return 0xffffffff;
      }
      *param_2 = *param_2 + 1;
    }
    if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
      *param_2 = *param_2 + -1;
      *(char *)*param_2 = (char)param_1;
    }
    else {
      *param_2 = *param_2 + -1;
      if (*(char *)*param_2 != (char)param_1) {
        *param_2 = (int)((char *)*param_2 + 1);
        return 0xffffffff;
      }
    }
    param_2[1] = param_2[1] + 1;
    param_2[3] = param_2[3] & 0xffffffefU | 1;
    return param_1 & 0xff;
  }
  return 0xffffffff;
}




int __cdecl FUN_1000c08d(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10016ba0) && ((*(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000b509(param_1);
    iVar1 = FUN_1000c0f2(param_1,param_2,param_3);
    FUN_1000b568(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000a0c0();
  *pDVar2 = 9;
  pDVar2 = FUN_1000a0c9();
  *pDVar2 = 0;
  return -1;
}




int __cdecl FUN_1000c0f2(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  char *pcVar8;
  int iVar9;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar1 = &DAT_10016aa0 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) && (cVar3 = *(char *)((&DAT_10016aa0)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = cVar3;
        pcVar8 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar9) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),pcVar8,(DWORD)param_3,&local_10,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          pDVar7 = FUN_1000a0c0();
          *pDVar7 = 9;
          pDVar7 = FUN_1000a0c9();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_1000a04d(DVar6);
        }
        return -1;
      }
      bVar4 = *(byte *)(*piVar1 + 4 + iVar9);
      if ((bVar4 & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar4 = bVar4 & 0xfb;
      }
      else {
        bVar4 = bVar4 | 4;
      }
      *(byte *)(*piVar1 + 4 + iVar9) = bVar4;
      param_3 = param_2;
      local_c = param_2 + (int)local_c + local_10;
      pcVar8 = param_2;
      if (param_2 < local_c) {
        do {
          cVar3 = *param_3;
          if (cVar3 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar9);
            bVar4 = *pbVar2;
            if ((bVar4 & 0x40) == 0) {
              *pbVar2 = bVar4 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                param_3 = param_3 + 2;
                goto LAB_1000c27d;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_1000c297:
                *pcVar8 = '\r';
LAB_1000c29a:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_1000c27d:
                  *pcVar8 = '\n';
                  goto LAB_1000c29a;
                }
                FUN_1000c374(param_1,-1,1);
                if (local_5 != '\n') goto LAB_1000c297;
              }
              else {
                if (local_5 == '\n') goto LAB_1000c27d;
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                *(char *)(*piVar1 + 5 + iVar9) = local_5;
              }
            }
          }
          else {
            *pcVar8 = cVar3;
            pcVar8 = pcVar8 + 1;
            param_3 = param_3 + 1;
          }
        } while (param_3 < local_c);
      }
      return (int)pcVar8 - (int)param_2;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000c2cb(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_1001649c = _DAT_1001649c + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}




DWORD __cdecl FUN_1000c30f(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10016ba0) && ((*(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000b509(param_1);
    DVar1 = FUN_1000c374(param_1,param_2,param_3);
    FUN_1000b568(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1000a0c0();
  *pDVar2 = 9;
  pDVar2 = FUN_1000a0c9();
  *pDVar2 = 0;
  return 0xffffffff;
}




DWORD __cdecl FUN_1000c374(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_1000b4c7(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1000a0c0();
    *pDVar2 = 9;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar3 == 0xffffffff) {
      uVar4 = GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = (byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1000a04d(uVar4);
  }
  return 0xffffffff;
}




byte __cdecl FUN_1000c3e7(uint param_1)

{
  if (DAT_10016ba0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}




int __cdecl FUN_1000c410(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_10016868);
  bVar2 = DAT_10016864 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_10016868);
    FUN_10008162(0x13);
  }
  iVar1 = FUN_1000c469(param_1,param_2);
  if (bVar2) {
    FUN_100081c3(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_10016868);
  }
  return iVar1;
}




int __cdecl FUN_1000c469(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_1001675c == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_1001676c,0x220,&param_2,1,lpMultiByteStr,DAT_10015b28,(LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_1000a0c0();
  *pDVar2 = 0x2a;
  return -1;
}




/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) / (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}




/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) % (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4)))) {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}




undefined4 * __cdecl FUN_1000c5d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_1000c787_caseD_2;
        case 3:
          goto switchD_1000c787_caseD_3;
        }
        goto switchD_1000c787_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1000c787_caseD_0;
      case 1:
        goto switchD_1000c787_caseD_1;
      case 2:
        goto switchD_1000c787_caseD_2;
      case 3:
        goto switchD_1000c787_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000c787_caseD_2;
            case 3:
              goto switchD_1000c787_caseD_3;
            }
            goto switchD_1000c787_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000c787_caseD_2;
            case 3:
              goto switchD_1000c787_caseD_3;
            }
            goto switchD_1000c787_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000c787_caseD_2;
            case 3:
              goto switchD_1000c787_caseD_3;
            }
            goto switchD_1000c787_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_1000c787_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1000c787_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1000c787_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1000c787_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_1000c605_caseD_2;
      case 3:
        goto switchD_1000c605_caseD_3;
      }
      goto switchD_1000c605_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1000c605_caseD_0;
    case 1:
      goto switchD_1000c605_caseD_1;
    case 2:
      goto switchD_1000c605_caseD_2;
    case 3:
      goto switchD_1000c605_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000c605_caseD_2;
          case 3:
            goto switchD_1000c605_caseD_3;
          }
          goto switchD_1000c605_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000c605_caseD_2;
          case 3:
            goto switchD_1000c605_caseD_3;
          }
          goto switchD_1000c605_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000c605_caseD_2;
          case 3:
            goto switchD_1000c605_caseD_3;
          }
          goto switchD_1000c605_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_1000c605_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1000c605_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1000c605_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1000c605_caseD_0:
  return param_1;
}




int __thiscall FUN_1000c905(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_10015b28 < 2) {
      uVar1 = (byte)PTR_DAT_10015b34[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_10015b34;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_1000bf46(this,(uint)*param_1,8);
      this = puVar6;
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_10015b28 < 2) {
      uVar2 = (byte)PTR_DAT_10015b34[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_1000bf46(this,uVar4,4);
      this = puVar6;
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}




int __cdecl FUN_1000c990(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_10016ba4 != 0) && ((DAT_10016534 != (int *)0x0 || (((DAT_1001653c != 0 && (iVar1 = FUN_1000d43a(), iVar1 == 0)) && (DAT_10016534 != (int *)0x0))))))
     && (piVar3 = DAT_10016534, param_1 != (uchar *)0x0)) {
    _MaxCount = _strlen((char *)param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) && (iVar1 = __mbsnbicoll((uchar *)*piVar3,param_1,_MaxCount), iVar1 == 0)) {
        return *piVar3 + 1 + _MaxCount;
      }
    }
  }
  return 0;
}




undefined4 __cdecl FUN_1000ca0d(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_10008162(0x19);
  CodePage = FUN_1000cbba(param_1);
  if (CodePage != DAT_1001686c) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10015db0;
LAB_1000ca4a:
      if (*pUVar5 != CodePage) goto code_r0x1000ca4e;
      local_8 = 0;
      puVar15 = &DAT_10016980;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10015dc0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10015da8)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10016980 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      DAT_1001687c = 1;
      DAT_1001686c = CodePage;
      DAT_10016a84 = FUN_1000cc04(CodePage);
      DAT_10016870 = *(undefined4 *)(iVar12 + 0x10015db4);
      DAT_10016874 = *(undefined4 *)(iVar12 + 0x10015db8);
      DAT_10016878 = *(undefined4 *)(iVar12 + 0x10015dbc);
      goto LAB_1000cb9e;
    }
    goto LAB_1000cb99;
  }
  goto LAB_1000ca34;
code_r0x1000ca4e:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if ((UINT *)0x10015e9f < pUVar5) goto code_r0x1000ca59;
  goto LAB_1000ca4a;
code_r0x1000ca59:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10016a84 = 0;
    puVar15 = &DAT_10016980;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_1001687c = 0;
      DAT_1001686c = CodePage;
    }
    else {
      DAT_1001686c = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10016980 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10016980 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10016a84 = FUN_1000cc04(CodePage);
      DAT_1001687c = 1;
    }
    DAT_10016870 = 0;
    DAT_10016874 = 0;
    DAT_10016878 = 0;
  }
  else {
    if (DAT_10016774 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1000cbab;
    }
LAB_1000cb99:
    FUN_1000cc37();
  }
LAB_1000cb9e:
  FUN_1000cc60();
LAB_1000ca34:
  uVar14 = 0;
LAB_1000cbab:
  FUN_100081c3(0x19);
  return uVar14;
}




int __cdecl FUN_1000cbba(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10016774 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000cbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10016774 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000cbe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1001676c;
  }
  DAT_10016774 = (uint)bVar2;
  return param_1;
}




undefined4 __cdecl FUN_1000cc04(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}




void FUN_1000cc37(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10016980;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1001686c = 0;
  DAT_1001687c = 0;
  DAT_10016a84 = 0;
  DAT_10016870 = 0;
  DAT_10016874 = 0;
  DAT_10016878 = 0;
  return;
}




void FUN_1000cc60(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_1001686c,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_1000d2b2(1,local_118,0x100,local_518,DAT_1001686c,DAT_10016a84,0);
    FUN_1000d4a8(DAT_10016a84,0x100,local_118,0x100,local_218,0x100,DAT_1001686c,0);
    FUN_1000d4a8(DAT_10016a84,0x200,local_118,0x100,local_318,0x100,DAT_1001686c,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10016980 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000cd6c;
        }
        (&DAT_10016880)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10016980 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000cd6c:
        (&DAT_10016880)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_10016980 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1000cdb6;
        }
        (&DAT_10016880)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10016980 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1000cdb6:
        (&DAT_10016880)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}




void FUN_1000cde5(void)

{
  if (DAT_10016ba8 == 0) {
    FUN_1000ca0d(-3);
    DAT_10016ba8 = 1;
  }
  return;
}




int __cdecl FUN_1000ce01(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10016778 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10016778 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10016778 != (FARPROC)0x0) {
        DAT_1001677c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10016780 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000ce50;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000ce50:
    if (DAT_1001677c != (FARPROC)0x0) {
      iVar1 = (*DAT_1001677c)();
      if ((iVar1 != 0) && (DAT_10016780 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10016780)(iVar1);
      }
    }
    iVar1 = (*DAT_10016778)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}




int __cdecl FUN_1000ce8a(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  DWORD *pDVar6;
  HANDLE hFile;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  char local_1008 [4064];
  undefined4 uStackY_28;
  
  FUN_10005670();
  iVar8 = 0;
  DVar1 = FUN_1000c374(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_1000c374(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar8 = -1;
  }
  else {
    uVar9 = param_2 - DVar2;
    if ((int)uVar9 < 1) {
      if ((int)uVar9 < 0) {
        FUN_1000c374(param_1,param_2,0);
        hFile = (HANDLE)FUN_1000b4c7(param_1);
        BVar7 = SetEndOfFile(hFile);
        iVar8 = (BVar7 != 0) - 1;
        if (iVar8 == -1) {
          pDVar6 = FUN_1000a0c0();
          *pDVar6 = 0xd;
          DVar2 = GetLastError();
          pDVar6 = FUN_1000a0c9();
          *pDVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      uStackY_28 = 0x1000cef7;
      iVar3 = FUN_1000d6cc(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar9 < 0x1000) {
          uVar4 = uVar9;
        }
        iVar5 = FUN_1000b682(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          pDVar6 = FUN_1000a0c9();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_1000a0c0();
            *pDVar6 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        uVar9 = uVar9 - iVar5;
      } while (0 < (int)uVar9);
      FUN_1000d6cc(param_1,iVar3);
    }
    FUN_1000c374(param_1,DVar1,0);
  }
  return iVar8;
}




undefined4 __cdecl FUN_1000cfaf(DWORD *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  DWORD local_10;
  DWORD local_c;
  
  bVar1 = false;
  if (param_1 == (DWORD *)0x2) {
    puVar7 = &DAT_10016788;
    pcVar6 = DAT_10016788;
LAB_1000d035:
    bVar1 = true;
    FUN_10008162(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_10016794;
        pcVar6 = DAT_10016794;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_1001678c;
        pcVar6 = DAT_1001678c;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_10016790;
        pcVar6 = DAT_10016790;
      }
      goto LAB_1000d035;
    }
    pDVar2 = FUN_10006a81();
    uVar3 = FUN_1000d131((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_100081c3(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_100081c3(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)0x8) || (param_1 == (DWORD *)0xb)) || (param_1 == (DWORD *)0x4)) {
    local_c = pDVar2[0x15];
    pDVar2[0x15] = 0;
    if (param_1 == (DWORD *)0x8) {
      local_10 = pDVar2[0x16];
      pDVar2[0x16] = 0x8c;
      goto LAB_1000d0a9;
    }
  }
  else {
LAB_1000d0a9:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_10015af8 < DAT_10015afc + DAT_10015af8) {
        iVar4 = DAT_10015af8 * 0xc;
        iVar5 = DAT_10015af8;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_10015afc + DAT_10015af8);
      }
      goto LAB_1000d0e7;
    }
  }
  *puVar7 = 0;
LAB_1000d0e7:
  if (bVar1) {
    FUN_100081c3(1);
  }
  if (param_1 == (DWORD *)0x8) {
    (*pcVar6)(8,pDVar2[0x16]);
  }
  else {
    (*pcVar6)(param_1);
    if ((param_1 != (DWORD *)0xb) && (param_1 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar2[0x15] = local_c;
  if (param_1 == (DWORD *)0x8) {
    pDVar2[0x16] = local_10;
  }
  return 0;
}




uint __cdecl FUN_1000d131(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_10015b04 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_10015b04 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}




uint __cdecl FUN_1000d16e(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1001675c == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10016868);
    bVar1 = DAT_10016864 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10016868);
      this = (void *)0x13;
      FUN_10008162(0x13);
    }
    param_1 = FUN_1000d1dd(this,param_1);
    if (bVar1) {
      FUN_100081c3(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10016868);
    }
  }
  return param_1;
}




uint __thiscall FUN_1000d1dd(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1001675c == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10015b28 < 2) {
        uVar2 = (byte)PTR_DAT_10015b34[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1000bf46(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10015b34[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000d4a8(DAT_1001675c,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}




BOOL __cdecl FUN_1000d2b2(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100118d0;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_100167a8;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_100167a8 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_100167a8 = iVar3;
  if (DAT_100167a8 != 2) {
    if (DAT_100167a8 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1001676c;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10005670();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) && (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3), iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_1001675c;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}




/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_1000d7aa(DAT_10016a84,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_1001686c);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}




undefined4 FUN_1000d43a(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_1001653c;
  puVar2 = DAT_1001653c;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,(LPBOOL)0x0), iVar1 == 0)) break;
    FUN_1000da52(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}




int __cdecl FUN_1000d4a8(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100118e0;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_100167ac == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100167ac = 2;
    }
    else {
      DAT_100167ac = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000da27(param_3,param_4);
  }
  if (DAT_100167ac == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_100167ac == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1001676c;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10005670();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) && (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1), iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10005670();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}




int __cdecl FUN_1000d6cc(uint param_1,int param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar2 = FUN_1000a0c0();
      *pDVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}




int __cdecl FUN_1000d730(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}




byte * __cdecl FUN_1000d770(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}




int __cdecl FUN_1000d7aa(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,UINT param_7)

{
  undefined1 *puVar1;
  int iVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  int iVar5;
  _cpinfo local_40;
  undefined1 *local_2c;
  PCNZWCH local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100118f8;
  puStack_10 = &LAB_100081e0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_10016814 == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10016814 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10016814 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_1000da27((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_1000da27((char *)param_5,param_6);
  }
  if (DAT_10016814 == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_10016814 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1001676c;
    }
    if ((param_4 == 0) || (param_6 == 0)) {
      if (param_4 == param_6) {
        ExceptionList = local_14;
        return 2;
      }
      if (1 < param_6) {
        ExceptionList = local_14;
        return 1;
      }
      if (1 < param_4) {
        ExceptionList = local_14;
        return 3;
      }
      BVar3 = GetCPInfo(param_7,&local_40);
      if (BVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      if (0 < param_4) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 3;
        }
        pBVar4 = local_40.LeadByte;
        while( true ) {
          if (local_40.LeadByte[0] == 0) {
            ExceptionList = local_14;
            return 3;
          }
          if (pBVar4[1] == 0) break;
          if ((*pBVar4 <= *param_3) && (*param_3 <= pBVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          local_40.LeadByte[0] = *pBVar4;
        }
        ExceptionList = local_14;
        return 3;
      }
      if (0 < param_6) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 1;
        }
        pBVar4 = local_40.LeadByte;
        while( true ) {
          if (local_40.LeadByte[0] == 0) {
            ExceptionList = local_14;
            return 1;
          }
          if (pBVar4[1] == 0) break;
          if ((*pBVar4 <= *param_5) && (*param_5 <= pBVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          local_40.LeadByte[0] = *pBVar4;
        }
        ExceptionList = local_14;
        return 1;
      }
    }
    local_20 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
    if (local_20 != 0) {
      local_8 = 0;
      FUN_10005670();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_10005670();
          local_8 = 0xffffffff;
          if ((&stack0x00000000 != (undefined1 *)0x50) &&
             (local_2c = &stack0xffffffb0, local_1c = &stack0xffffffb0,
             iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,(LPWSTR)&stack0xffffffb0,iVar2), iVar5 != 0)) {
            iVar2 = CompareStringW(param_1,param_2,local_28,local_20,(PCNZWCH)&stack0xffffffb0,iVar2);
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}




int __cdecl FUN_1000da27(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}




undefined4 __cdecl FUN_1000da52(uint *param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  size_t sVar5;
  uint *lpName;
  undefined1 *puVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar2 = FUN_1000de71(param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar8 = *(char *)((int)puVar2 + 1) == '\0';
  if (DAT_10016534 == DAT_10016538) {
    DAT_10016534 = (byte *)FUN_1000dc31((int *)DAT_10016534);
  }
  if (DAT_10016534 == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_1001653c == (undefined4 *)0x0)) {
      if (bVar8) {
        return 0;
      }
      DAT_10016534 = _malloc(4);
      if (DAT_10016534 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_10016534 + 1;
      pbVar7 = DAT_10016534 + 2;
      pbVar1 = DAT_10016534 + 3;
      DAT_10016534[0] = 0;
      *pbVar4 = 0;
      *pbVar7 = 0;
      *pbVar1 = 0;
      if (DAT_1001653c == (undefined4 *)0x0) {
        DAT_1001653c = _malloc(4);
        if (DAT_1001653c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1001653c = 0;
      }
    }
    else {
      iVar3 = FUN_1000d43a();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_10016534;
  iVar3 = FUN_1000dbd9((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar8) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_10009c30(pbVar4,(uint *)(iVar3 * 4 + 8));
    if (pbVar4 == (byte *)0x0) {
      return 0xffffffff;
    }
    *(uint **)(pbVar4 + iVar3 * 4) = param_1;
    pbVar7 = pbVar4 + iVar3 * 4 + 4;
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
  }
  else {
    if (!bVar8) {
      *(uint **)(pbVar4 + iVar3 * 4) = param_1;
      goto LAB_1000db86;
    }
    pbVar7 = pbVar4 + iVar3 * 4;
    FUN_10004d22(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar7 != 0; pbVar7 = pbVar7 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar7 = *(int *)(pbVar7 + 4);
    }
    pbVar4 = FUN_10009c30(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_1000db86;
  }
  DAT_10016534 = pbVar4;
LAB_1000db86:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_10008fa0(lpName,param_1);
      puVar6 = (undefined1 *)(((int)lpName - (int)param_1) + (int)puVar2);
      *puVar6 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar8 & (uint)(puVar6 + 1)));
      FUN_10004d22((undefined *)lpName);
    }
  }
  return 0;
}




int __cdecl FUN_1000dbd9(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_10016534;
  piVar2 = DAT_10016534;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_10016534 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) && ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_10016534 >> 2;
}




undefined4 * __cdecl FUN_1000dc31(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = _malloc(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    puVar4 = (uint *)*param_1;
    puVar6 = puVar3;
    while (puVar4 != (uint *)0x0) {
      param_1 = param_1 + 1;
      puVar4 = FUN_1000df08(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000dca0(void *this,byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = _DAT_10016868;
  if (DAT_1001675c == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000dcee;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1000dcee:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10016868 = _DAT_10016868 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10016864;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10016868 = iVar2;
      FUN_10008162(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000dd4f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1000dfa2(this,uVar8);
      uVar7 = FUN_1000dfa2(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000dd4f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10016868 = _DAT_10016868 + -1;
      UNLOCK();
    }
    else {
      FUN_100081c3(0x13);
    }
  }
  return uVar7;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000dd70(byte *param_1,char *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *this;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_10016868;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1001675c == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_1000ddcf;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000ddcf:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10016868 = _DAT_10016868 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10016864;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10016868 = iVar2;
        FUN_10008162(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_1000dfa2(param_3,uVar7);
        uVar5 = FUN_1000dfa2(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000de45;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000de45:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10016868 = _DAT_10016868 + -1;
        UNLOCK();
      }
      else {
        FUN_100081c3(0x13);
      }
    }
  }
  return uVar6;
}




uint * __cdecl FUN_1000de71(uint *param_1,uint param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  
  if (DAT_1001687c == 0) {
    puVar2 = FUN_10008ee0(param_1,(char)param_2);
  }
  else {
    FUN_10008162(0x19);
    while( true ) {
      bVar1 = (byte)*param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_10016980 + uVar3 + 1) & 4) == 0) {
        puVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        puVar2 = (uint *)((int)param_1 + 1);
        if (*(byte *)((int)param_1 + 1) == 0) {
          FUN_100081c3(0x19);
          return (uint *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,*(byte *)((int)param_1 + 1))) {
          FUN_100081c3(0x19);
          return param_1;
        }
      }
      param_1 = (uint *)((int)puVar2 + 1);
    }
    FUN_100081c3(0x19);
    puVar2 = (uint *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return puVar2;
}




uint * __cdecl FUN_1000df08(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_10008fa0(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}




uint __cdecl FUN_1000df33(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1001675c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10016868);
    bVar1 = DAT_10016864 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10016868);
      this = (void *)0x13;
      FUN_10008162(0x13);
    }
    param_1 = FUN_1000dfa2(this,param_1);
    if (bVar1) {
      FUN_100081c3(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10016868);
    }
  }
  return param_1;
}




uint __thiscall FUN_1000dfa2(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1001675c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10015b28 < 2) {
        uVar2 = (byte)PTR_DAT_10015b34[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1000bf46(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10015b34[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000d4a8(DAT_1001675c,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}




DWORD __cdecl FUN_1000e070(int param_1)

{
  int *piVar1;
  DWORD DVar2;
  
  switch(param_1) {
  case 1:
    DVar2 = FUN_10005936((int *)0x0);
    return DVar2;
  case 2:
    FUN_10005936(&param_1);
    piVar1 = FUN_100057d6(&param_1);
    return piVar1[1] + (piVar1[2] + (piVar1[3] + (piVar1[4] + 1 + (piVar1[5] % 100) * 100) * 100) * 100) * 100;
  case 3:
    FUN_10005936(&param_1);
    piVar1 = FUN_100057d6(&param_1);
    return piVar1[3] + (piVar1[4] + 1 + piVar1[5] * 100) * 100;
  case 4:
    FUN_10005936(&param_1);
    piVar1 = FUN_100057d6(&param_1);
    return *piVar1 + (piVar1[1] + piVar1[2] * 100) * 100;
  case 5:
    FUN_10005936(&param_1);
    piVar1 = FUN_100057d6(&param_1);
    return *piVar1 + (piVar1[1] + (piVar1[2] + (piVar1[3] + (piVar1[4] + 1) * 100) * 100) * 100) * 100;
  default:
    DVar2 = timeGetTime();
    return DVar2;
  }
}




undefined4 __cdecl FUN_1000e1c0(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  if (((param_1 == (char *)0x0) || (in_EAX = param_2, param_2 == (char *)0x0)) || (param_3 == 0)) {
    return (uint)in_EAX & 0xffffff00;
  }
  pcVar2 = param_1;
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (param_3 <= ~uVar3 - 1) {
    pcVar2 = _strncpy(param_1,param_2,param_3 - 1);
    param_1[param_3 - 1] = '\0';
    return CONCAT31((int3)((uint)pcVar2 >> 8),1);
  }
  uVar3 = 0xffffffff;
  do {
    pcVar2 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar2;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = pcVar2 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    param_1 = param_1 + 1;
  }
  return 1;
}




void FUN_1000e260(void)

{
  FUN_1000e440((int *)&DAT_10016840);
  return;
}




void FUN_1000e270(void)

{
  FUN_1000571d(&LAB_1000e280);
  return;
}




void __fastcall FUN_1000e2a0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void **ppvVar4;
  LONG LVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100101b8;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar4 = &local_c;
  if (param_1[1] != 0) {
    ppvVar4 = &local_c;
    puVar2 = *(undefined4 **)(*param_1 + 4);
    while (ExceptionList = ppvVar4, puVar2 != (undefined4 *)0x0) {
      FUN_1000e520((undefined4 *)puVar2[3]);
      puVar1 = (undefined4 *)puVar2[2];
      FUN_1000e560(puVar2 + 4,0);
      FUN_10002100(puVar2,0x1c);
      ppvVar4 = ExceptionList;
      puVar2 = puVar1;
    }
    *(int *)(*param_1 + 8) = *param_1;
    *(undefined4 *)(*param_1 + 4) = 0;
    *(int *)(*param_1 + 0xc) = *param_1;
    param_1[1] = 0;
    ppvVar4 = ExceptionList;
  }
  ExceptionList = ppvVar4;
  puVar2 = (undefined4 *)*param_1;
  LVar5 = InterlockedExchange(&DAT_10016418,1);
  uVar3 = DAT_10013130;
  if (LVar5 != 0) {
    uVar6 = 0;
    if (DAT_10013130 != 0) {
      uVar8 = DAT_100163d4 >> 1;
      do {
        if (((uVar8 <= uVar6) && (DAT_10016418 == 0)) && (LVar5 = InterlockedExchange(&DAT_10016418,1), LVar5 == 0)) {
          DAT_10013130 = 1000;
          DAT_100163d4 = uVar6;
          goto LAB_1000e3f8;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    DAT_10013130 = 0x1e;
    iVar9 = 6;
    while( true ) {
      iVar7 = iVar9;
      if (0x1b < iVar9) {
        iVar7 = 0x1b;
      }
      LVar5 = InterlockedExchange(&DAT_10016418,1);
      if (LVar5 == 0) break;
      if (iVar7 < 0x15) {
        Sleep(0);
        iVar9 = iVar9 + 1;
      }
      else {
        Sleep(1 << ((char)iVar7 - 0x14U & 0x1f));
        iVar9 = iVar9 + 1;
      }
    }
  }
LAB_1000e3f8:
  *puVar2 = DAT_100163e4;
  DAT_100163e4 = puVar2;
  DAT_10016418 = 0;
  ExceptionList = local_c;
  return;
}




int * __fastcall FUN_1000e440(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_11;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100101d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  FUN_10001aa0(&DAT_10016418);
  local_4 = 0;
  if (DAT_100163e4 == (undefined4 *)0x0) {
    local_10 = 0x14;
    puVar2 = FUN_100028f0(0x20,&local_10);
    if (local_10 != 1) {
      puVar3 = puVar2 + 8;
      iVar4 = 1;
      puVar1 = puVar3;
      DAT_100163e4 = puVar3;
      if (local_10 != 2) {
        do {
          puVar3 = puVar1 + 8;
          *puVar1 = puVar3;
          iVar4 = iVar4 + 1;
          puVar1 = puVar3;
        } while (local_10 - 1 != iVar4);
      }
      *puVar3 = 0;
    }
  }
  else {
    puVar2 = DAT_100163e4;
    DAT_100163e4 = (undefined4 *)*DAT_100163e4;
  }
  DAT_10016418 = 0;
  *param_1 = (int)puVar2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = local_11;
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)(*param_1 + 4) = 0;
  *(int *)(*param_1 + 8) = *param_1;
  *(int *)(*param_1 + 0xc) = *param_1;
  ExceptionList = local_c;
  return param_1;
}




void __fastcall FUN_1000e510(undefined4 *param_1)

{
  FUN_10002100((undefined4 *)*param_1,0x1c);
  return;
}




void FUN_1000e520(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    FUN_1000e520((undefined4 *)param_1[3]);
    puVar1 = (undefined4 *)param_1[2];
    FUN_100018f0(param_1 + 4);
    FUN_10002100(param_1,0x1c);
    param_1 = puVar1;
  }
  return;
}




undefined4 * __thiscall FUN_1000e560(void *this,byte param_1)

{
  FUN_100018f0(this);
  if ((param_1 & 1) != 0) {
    FUN_10004880(this);
  }
  return this;
}




DWORD __cdecl FUN_1000e586(uint param_1)

{
  DWORD DVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  
  if ((param_1 < DAT_10016ba0) && ((*(byte *)((&DAT_10016aa0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000b509(param_1);
    DVar1 = FUN_1000c374(param_1,0,1);
    DVar3 = 0xffffffff;
    if (DVar1 != 0xffffffff) {
      DVar3 = FUN_1000c374(param_1,0,2);
      if (DVar1 != DVar3) {
        FUN_1000c374(param_1,DVar1,0);
      }
    }
    FUN_1000b568(param_1);
    return DVar3;
  }
  pDVar2 = FUN_1000a0c0();
  *pDVar2 = 9;
  pDVar2 = FUN_1000a0c9();
  *pDVar2 = 0;
  return 0xffffffff;
}




undefined4 __cdecl FUN_1000e610(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e618(void)

{
  void *extraout_ECX;
  
  FUN_1000e630();
  _DAT_10016854 = FUN_1000e792();
  FUN_1000e742(extraout_ECX);
  return;
}




void FUN_1000e630(void)

{
  PTR___fptrap_10015b14 = &LAB_1000e815;
  PTR___fptrap_10015b10 = __cfltcvt;
  PTR___fptrap_10015b18 = __fassign;
  PTR___fptrap_10015b1c = FUN_1000e7bb;
  PTR___fptrap_10015b20 = &LAB_1000e863;
  PTR___fptrap_10015b24 = __cfltcvt;
  return;
}




/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}




void __fastcall FUN_1000e742(void *param_1)

{
  FUN_1000ec16(param_1,0x10000,0x30000);
  return;
}




/* WARNING: Removing unreachable block (ram,0x1000e789) */

undefined4 FUN_1000e754(void)

{
  return 0;
}




void FUN_1000e792(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA(s_KERNEL32_100160bc);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_1000e754();
  return;
}




void __cdecl FUN_1000e7bb(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_1000df33((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10015b28 < 2) {
        uVar3 = (byte)PTR_DAT_10015b34[*param_1 * 2] & 4;
        this = PTR_DAT_10015b34;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1000bf46(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10015b2c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}




/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_1000f0d9(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_1000f106(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}




undefined1 * __cdecl FUN_1000e8b9(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_1000f1aa((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_1000f133(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14);
  FUN_1000e91a(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}




undefined1 * __cdecl FUN_1000e91a(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_1000ebbc(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  puVar2 = puVar1;
  if (0 < param_2) {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[1];
    *puVar2 = DAT_10015b2c;
  }
  puVar3 = FUN_10008fa0((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar4 = param_4[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar4) {
      *(char *)((int)puVar3 + 2) = *(char *)((int)puVar3 + 2) + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    if (9 < iVar4) {
      *(char *)((int)puVar3 + 3) = *(char *)((int)puVar3 + 3) + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    *(char *)(puVar3 + 1) = (char)puVar3[1] + (char)iVar4;
  }
  return param_1;
}




char * __cdecl FUN_1000e9dc(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000f1aa((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_1000f133(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_1000ea31(param_2,param_3,&local_14,'\0');
  return param_2;
}




char * __cdecl FUN_1000ea31(char *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *param_3;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = '0';
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
  }
  pcVar3 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    pcVar3 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_1000ebbc(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_1000ebbc(pcVar3,1);
    *pcVar3 = DAT_10015b2c;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_1000ebbc(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}




void __cdecl FUN_1000ead8(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000f1aa((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_1000f133(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_1000e91a(param_2,param_3,param_4,&local_14,'\x01');
  }
  else {
    pcVar2 = param_2 + (local_14 == 0x2d);
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000ea31(param_2,param_3,&local_14,'\x01');
  }
  return;
}




/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl __cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_1000e8b9(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_1000e9dc(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_1000ead8(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}




void __cdecl FUN_1000ebbc(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10005010((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}




uint __thiscall FUN_1000ebe1(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_1000ec2c(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_1000ecbe(uVar1);
  return uVar1;
}




void __thiscall FUN_1000ec16(void *this,uint param_1,uint param_2)

{
  FUN_1000ebe1(this,param_1,param_2 & 0xfff7ffff);
  return;
}




uint __cdecl FUN_1000ec2c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}




uint __cdecl FUN_1000ecbe(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}




undefined4 __cdecl FUN_1000ed47(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + (param_2 / 0x20) * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f))) != 0) {
    return 0;
  }
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    piVar1 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}




void __cdecl FUN_1000ed90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_1000f2bc(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1000f2bc(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}




undefined4 __cdecl FUN_1000ede6(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  bVar3 = 0x1f - (char)(param_2 % 0x20);
  if (((*puVar1 & 1 << (bVar3 & 0x1f)) != 0) && (iVar2 = FUN_1000ed47(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_1000ed90(param_1,param_2 + -1);
  }
  *puVar1 = *puVar1 & -1 << (bVar3 & 0x1f);
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar4 = 3 - iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}




void __cdecl FUN_1000ee72(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}




void __cdecl FUN_1000ee8d(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined4 __cdecl FUN_1000ee99(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}




void __cdecl FUN_1000eeb4(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  local_8 = 3;
  iVar2 = (int)param_2 / 0x20;
  iVar5 = (int)param_2 % 0x20;
  param_2 = 0;
  bVar3 = (byte)iVar5;
  puVar6 = param_1;
  do {
    uVar1 = *puVar6;
    *puVar6 = uVar1 >> (bVar3 & 0x1f) | param_2;
    puVar6 = puVar6 + 1;
    param_2 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 2;
  iVar4 = 8;
  do {
    if (iVar5 < iVar2) {
      *(undefined4 *)(iVar4 + (int)param_1) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + (int)param_1) = *(undefined4 *)(iVar4 + iVar2 * -4 + (int)param_1);
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -4;
  } while (-1 < iVar4);
  return;
}




undefined4 __cdecl FUN_1000ef41(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_8 = (uint)*param_1 << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = FUN_1000ee99((int *)&local_10);
    if (iVar2 != 0) {
LAB_1000f06d:
      uVar5 = 0;
      goto LAB_1000f06f;
    }
    FUN_1000ee8d(&local_10);
  }
  else {
    FUN_1000ee72((int)local_1c,&local_10);
    iVar2 = FUN_1000ede6((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_1000ee8d(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_1000ee8d(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_1000eeb4(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_1000f06f;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_1000eeb4(&local_10,param_3[3]);
        goto LAB_1000f06d;
      }
      FUN_1000ee72((int)&local_10,local_1c);
      FUN_1000eeb4(&local_10,iVar2 - iVar4);
      FUN_1000ede6((int)&local_10,param_3[2]);
      FUN_1000eeb4(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_1000f06f:
  local_10 = iVar4 << (0x1fU - (char)param_3[3] & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar5;
}




void __cdecl FUN_1000f0ad(ushort *param_1,uint *param_2)

{
  FUN_1000ef41(param_1,param_2,(int *)&DAT_100160e0);
  return;
}




void __cdecl FUN_1000f0c3(ushort *param_1,uint *param_2)

{
  FUN_1000ef41(param_1,param_2,(int *)&DAT_100160f8);
  return;
}




void __thiscall FUN_1000f0d9(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000f45d(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_1000f0ad(local_10,param_1);
  return;
}




void __thiscall FUN_1000f106(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000f45d(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_1000f0c3(local_10,param_1);
  return;
}




void __cdecl FUN_1000f133(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  char cVar5;
  
  pcVar1 = param_1;
  pcVar4 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar2 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        cVar5 = '0';
      }
      else {
        pcVar4 = pcVar4 + 1;
      }
      *pcVar2 = cVar5;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0);
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar4)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*pcVar1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(_Str);
    FUN_10005010((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}




int * __cdecl FUN_1000f1aa(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_stack_ffffffbc;
  undefined2 uVar4;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffbc >> 0x10);
  FUN_1000f206(&local_10,&param_1);
  iVar3 = FUN_1000f92e(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10008fa0(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}




void __cdecl FUN_1000f206(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  uVar2 = *param_2;
  local_8 = 0x80000000;
  if (uVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar4 = 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    iVar4 = 0x7fff;
  }
  else {
    iVar4 = uVar3 + 0x3c00;
  }
  local_8 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  param_1[1] = local_8;
  *param_1 = uVar2 << 0xb;
  while ((local_8 & 0x80000000) == 0) {
    local_8 = *param_1 >> 0x1f | local_8 * 2;
    *param_1 = *param_1 * 2;
    param_1[1] = local_8;
    iVar4 = iVar4 + 0xffff;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | (ushort)iVar4;
  return;
}




undefined4 __cdecl FUN_1000f2bc(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}




/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000f2bc(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1000f2bc(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1000f2bc(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1000f2bc(param_1[2],param_2[2],param_1 + 2);
  return;
}




void __cdecl FUN_1000f33b(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}




void __cdecl FUN_1000f369(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}




void __cdecl FUN_1000f396(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_1000f33b(puVar1);
      FUN_1000f33b(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1000f33b(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_1000f33b(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}




undefined4 __thiscall FUN_1000f45d(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = (byte *)0x0;
  local_c = 0;
  local_18 = 0;
  pbVar8 = param_3;
  while( true ) {
    bVar6 = *pbVar8;
    this = (void *)CONCAT31((int3)((uint)this >> 8),bVar6);
    if ((((bVar6 != 0x20) && (bVar6 != 9)) && (bVar6 != 10)) && (bVar6 != 0xd)) break;
    pbVar8 = pbVar8 + 1;
  }
  iVar1 = 4;
  iVar9 = 0;
  iVar5 = local_14;
LAB_1000f4b4:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1000f4d1:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1000f6f6;
    }
    if (bVar6 == DAT_10015b2c) goto LAB_1000f4e0;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000f7d0;
    }
    goto LAB_1000f4b4;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_1000f4d1;
    iVar9 = iVar1;
    if (bVar6 != DAT_10015b2c) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1000f565;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1000f53e;
    }
    goto LAB_1000f4b4;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1000f4d1;
    if (bVar6 == DAT_10015b2c) {
LAB_1000f4e0:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000f7d5;
    }
    goto LAB_1000f4b4;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_10015b28 < 2) {
        uVar3 = (byte)PTR_DAT_10015b34[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10015b34;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1000bf46(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar9 = iVar1;
    iVar5 = local_14;
    if (bVar6 != DAT_10015b2c) goto LAB_1000f652;
    goto LAB_1000f4b4;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar9 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar9 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar9;
      local_28 = iVar5;
      if (DAT_10015b28 < 2) {
        uVar3 = (byte)PTR_DAT_10015b34[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10015b34;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1000bf46(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar9 = local_14;
    }
LAB_1000f652:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1000f565:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1000f53e:
      if (((char)bVar6 < 'D') || (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1000f7d0;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_1000f4b4;
  case 5:
    local_28 = iVar5;
    if (DAT_10015b28 < 2) {
      uVar3 = (byte)PTR_DAT_10015b34[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10015b34;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1000bf46(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1000f6f6;
    goto LAB_1000f7d5;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1000f72b;
      if (bVar6 == 0x2d) goto LAB_1000f71f;
      if (bVar6 != 0x30) goto LAB_1000f7d5;
LAB_1000f6c4:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_1000f4b4;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_1000f6c4;
      goto LAB_1000f7d5;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1000f7d0;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1000f756;
  default:
    goto switchD_1000f4c0_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1000f72b:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1000f7d5;
LAB_1000f71f:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_1000f4b4;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_1000f4c0_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_1000f4b4;
    goto LAB_1000f7d5;
  }
  iVar9 = 9;
LAB_1000f6f6:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1000f4b4;
LAB_1000f756:
  if (DAT_10015b28 < 2) {
    uVar3 = (byte)PTR_DAT_10015b34[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_10015b34;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_1000bf46(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_1000f7a0;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_1000f798;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1000f756;
LAB_1000f798:
  pbVar7 = (byte *)0x1451;
LAB_1000f7a0:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_10015b28 < 2) {
      uVar3 = (byte)PTR_DAT_10015b34[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10015b34;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1000bf46(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1000f7d0:
  pbVar7 = pbVar8 + -1;
LAB_1000f7d5:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1000f8e3;
  }
  pcVar4 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar4 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar4 = pcVar4 + -1, *pcVar4 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_1000f396(local_60,local_8,(uint *)&local_44);
    pbVar8 = local_20;
    if (local_1c < 0) {
      pbVar8 = (byte *)-(int)local_20;
    }
    pbVar8 = pbVar8 + local_c;
    if (local_24 == 0) {
      pbVar8 = pbVar8 + param_5;
    }
    if (local_28 == 0) {
      pbVar8 = pbVar8 + -param_6;
    }
    if ((int)pbVar8 < 0x1451) {
      if (-0x1451 < (int)pbVar8) {
        FUN_1000fde1((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1000f868;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_1000f868:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_1000f8e3:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}




undefined4 __cdecl FUN_1000f92e(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar3 = param_6;
  uVar5 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar5 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000fa23;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000fa23:
            pcVar11 = "1#QNAN";
            goto LAB_1000fa28;
          }
          pcVar11 = "1#IND";
        }
        FUN_10008fa0((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1000fa28:
        FUN_10008fa0((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar5;
    cStack_9 = (char)(uVar5 >> 8);
    sVar8 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >> 0x10);
    local_e = param_2;
    local_12 = param_1;
    FUN_1000fde1((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000fbc1((int *)&local_14,(int *)&local_20);
    }
    *psVar3 = sVar8;
    iVar10 = param_4;
    if (((param_5 & 1) == 0) || (iVar10 = param_4 + sVar8, 0 < param_4 + sVar8)) {
      if (0x15 < iVar10) {
        iVar10 = 0x15;
      }
      iVar9 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_1000f33b((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_1000f369((uint *)&local_14);
        }
      }
      param_4 = iVar10 + 1;
      psVar6 = psVar3 + 2;
      param_6 = psVar6;
      uVar5 = local_12;
      uVar2 = local_e;
      if (0 < param_4) {
        do {
          local_e._2_2_ = (undefined2)(uVar2 >> 0x10);
          local_e._0_2_ = (undefined2)uVar2;
          local_12._2_2_ = (undefined2)(uVar5 >> 0x10);
          local_12._0_2_ = (undefined2)uVar5;
          param_1 = CONCAT22((undefined2)local_12,local_14);
          param_2 = CONCAT22((undefined2)local_e,local_12._2_2_);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
          local_12 = uVar5;
          local_e = uVar2;
          FUN_1000f33b((uint *)&local_14);
          FUN_1000f33b((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1000f33b((uint *)&local_14);
          cVar4 = cStack_9;
          cStack_9 = '\0';
          psVar6 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar4 + '0';
          param_6 = psVar6;
          uVar5 = local_12;
          uVar2 = local_e;
        } while (param_4 != 0);
      }
      psVar7 = psVar6 + -1;
      psVar1 = psVar3 + 2;
      if ('4' < *(char *)((int)psVar6 + -1)) {
        for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
          if ((char)*psVar7 != '9') {
            if (psVar1 <= psVar7) goto LAB_1000fb80;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1000fb80:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1000fb82:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1000fb82;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1000fbb8;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1000fbb8:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}




void __cdecl FUN_1000fbc1(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int *local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_18 = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_1000fc64:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) || ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0)) && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000fc64;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_1000f2bc(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,(uint *)(local_8 + -2));
            if (iVar8 != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_1000fd18:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1000f369((uint *)&local_28);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (local_18 != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_1000f33b((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000fd18;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar2 = CONCAT11(bStack_1d,uStack_1e), iVar3 = CONCAT22(local_20,uStack_22), iVar8 = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_1d,uStack_1e);
            iVar3 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_24,uStack_26) + 1;
          sVar2 = CONCAT11(bStack_1d,uStack_1e);
          iVar3 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)iVar8 >> 0x10);
      uStack_26 = (undefined2)iVar8;
      local_20 = (undefined2)((uint)iVar3 >> 0x10);
      uStack_22 = (undefined2)iVar3;
      bStack_1d = (byte)((ushort)sVar2 >> 8);
      uStack_1e = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_1000fdc1;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000fdc1:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}




void __cdecl FUN_1000fde1(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  int iStack_8;
  
  iVar3 = 0x100160b0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x10016210;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      iVar3 = iVar3 + 0x54;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        piVar4 = (int *)(iVar3 + uVar2 * 0xc);
        if (0x7fff < *(ushort *)(iVar3 + uVar2 * 0xc)) {
          local_10 = (undefined2)*piVar4;
          local_e._0_2_ = (undefined2)((uint)*piVar4 >> 0x10);
          local_e._2_2_ = (undefined2)piVar4[1];
          uStack_a = (undefined2)((uint)piVar4[1] >> 0x10);
          iStack_8 = piVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          piVar4 = (int *)&local_10;
        }
        FUN_1000fbc1(param_1,piVar4);
      }
    }
  }
  return;
}




void Unwind_1000fe60(void)

{
  int unaff_EBP;
  
  FUN_10001e40((undefined4 *)(unaff_EBP + -0x87c));
  return;
}




void Unwind_1000fe6b(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x87c));
  return;
}




void Unwind_1000fe76(void)

{
  int unaff_EBP;
  
  FUN_10001e40((undefined4 *)(unaff_EBP + -0x888));
  return;
}




void Unwind_1000fe81(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x888));
  return;
}




void Unwind_1000fe8c(void)

{
  int unaff_EBP;
  
  FUN_10001e40((undefined4 *)(unaff_EBP + -0x894));
  return;
}




void Unwind_1000fe97(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x894));
  return;
}




void Unwind_1000fea2(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x86c));
  return;
}




void Unwind_1000fead(void)

{
  int unaff_EBP;
  
  FUN_10001390((undefined4 *)(unaff_EBP + -0x86c));
  return;
}




void Unwind_1000feb8(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x86c));
  return;
}




void Unwind_1000fed0(void)

{
  int unaff_EBP;
  
  FUN_100018f0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_1000fef0(void)

{
  int unaff_EBP;
  
  FUN_10001e40((undefined4 *)(unaff_EBP + -0x58));
  return;
}




void Unwind_1000fef8(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x58));
  return;
}




void Unwind_1000ff10(void)

{
  int unaff_EBP;
  
  FUN_10001e40(*(undefined4 **)(unaff_EBP + -0x128));
  return;
}




void Unwind_1000ff1b(void)

{
  FUN_100022d0();
  return;
}




void Unwind_1000ff23(void)

{
  int unaff_EBP;
  
  FUN_10001e40((undefined4 *)(unaff_EBP + -0x124));
  return;
}




void Unwind_1000ff2e(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x124));
  return;
}




void Unwind_1000ff60(void)

{
  FUN_100022d0();
  return;
}




void Unwind_1000ff80(void)

{
  int unaff_EBP;
  
  FUN_10001e40((undefined4 *)(unaff_EBP + -0x124));
  return;
}




void Unwind_1000ff8b(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x124));
  return;
}




void Unwind_1000ffa0(void)

{
  FUN_100022d0();
  return;
}




void Unwind_1000ffa8(void)

{
  FUN_10002c70();
  return;
}




void Unwind_1000ffb9(void)

{
  int unaff_EBP;
  
  FUN_10001e40(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}




void Unwind_1000ffc1(void)

{
  int unaff_EBP;
  
  FUN_100018f0(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}




void Unwind_1000ffe0(void)

{
  int unaff_EBP;
  
  FUN_10001e40((undefined4 *)(unaff_EBP + -0x87c));
  return;
}




void Unwind_1000ffeb(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x87c));
  return;
}




void Unwind_1000fff6(void)

{
  int unaff_EBP;
  
  FUN_10001e40((undefined4 *)(unaff_EBP + -0x888));
  return;
}




void Unwind_10010001(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x888));
  return;
}




void Unwind_1001000c(void)

{
  int unaff_EBP;
  
  FUN_10001e40((undefined4 *)(unaff_EBP + -0x894));
  return;
}




void Unwind_10010017(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x894));
  return;
}




void Unwind_10010022(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x86c));
  return;
}




void Unwind_1001002d(void)

{
  int unaff_EBP;
  
  FUN_10001390((undefined4 *)(unaff_EBP + -0x86c));
  return;
}




void Unwind_10010038(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x86c));
  return;
}




void Unwind_10010050(void)

{
  int unaff_EBP;
  
  FUN_10001e40((undefined4 *)(unaff_EBP + -0x58));
  return;
}




void Unwind_10010058(void)

{
  int unaff_EBP;
  
  FUN_100018f0((undefined4 *)(unaff_EBP + -0x58));
  return;
}




void Unwind_10010070(void)

{
  int unaff_EBP;
  
  FUN_10004880(*(undefined **)(unaff_EBP + -0x14));
  return;
}




void Unwind_1001007b(void)

{
  int unaff_EBP;
  
  FUN_10003a70(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_10010083(void)

{
  int unaff_EBP;
  
  FUN_10003e50((int *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}




void Unwind_100100a0(void)

{
  int unaff_EBP;
  
  FUN_10004880(*(undefined **)(unaff_EBP + -0x10));
  return;
}




void Unwind_100100ab(void)

{
  int unaff_EBP;
  
  FUN_10003e50((int *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}




void Unwind_100100c0(void)

{
  int unaff_EBP;
  
  FUN_10003a70(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_100100e0(void)

{
  int unaff_EBP;
  
  FUN_10003a70(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_10010100(void)

{
  int unaff_EBP;
  
  FUN_10003a70(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_10010120(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 4) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x14);
  }
  FUN_10004840(*(undefined4 **)(unaff_EBP + -0x38));
  return;
}




void Unwind_10010148(void)

{
  int unaff_EBP;
  
  FUN_10004650((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}




void Unwind_10010153(void)

{
  int unaff_EBP;
  
  FUN_100047c0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1c));
  return;
}




void Unwind_10010170(void)

{
  int unaff_EBP;
  
  FUN_10004830((int *)(unaff_EBP + -4));
  return;
}




void Unwind_10010190(void)

{
  int unaff_EBP;
  
  FUN_10004830((int *)(unaff_EBP + -0x1110));
  return;
}




void Unwind_100101b0(void)

{
  int unaff_EBP;
  
  FUN_1000e510(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_100101d0(void)

{
  FUN_100022d0();
  return;
}




/* DONE: decompiled=426 failed=0 total=501 */
