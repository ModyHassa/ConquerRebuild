undefined8 FUN_14039eef0(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  char *pcVar15;
  CStringPacker *this;
  longlong *plVar16;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  longlong *local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  longlong local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [32];
  char local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1409707c0 ^ (ulonglong)auStack_108;
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  plVar16 = (longlong *)0x0;
  local_b8[0] = 0;
  local_c8 = param_4;
  cVar1 = (**(code **)(*param_2 + 0x298))(param_2,0x1001,local_b8);
  if ((cVar1 != '\0') && (*(char *)(local_b8[0] + 0x108) == '\0')) {
    return 0;
  }
  FUN_1402b5600(param_1);
  uVar6 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 8) = uVar6;
  lVar13 = *(longlong *)(param_1 + 0x428);
  uVar12 = (**(code **)(*param_2 + 0x58))(param_2,local_a8);
  FUN_14039eb90(uVar12,lVar13 + 0x16);
  uVar6 = (**(code **)(*param_2 + 0x30))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 4) = uVar6;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x6f) = uVar4;
  uVar6 = (**(code **)(*param_2 + 0x170))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xc) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x178))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x10) = uVar6;
  bVar2 = (**(code **)(*param_2 + 0x180))(param_2);
  *(ushort *)(*(longlong *)(param_1 + 0x428) + 0x14) = (ushort)bVar2;
  uVar6 = (**(code **)(*param_2 + 0x118))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x34) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x30) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x100))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x38) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x108))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x40) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x110))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x3c) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x60))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x72) = uVar6;
  uVar4 = (**(code **)(*param_2 + 0x68))(param_2);
  *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x76) = uVar4;
  local_d8 = (longlong *)0x0;
  cVar1 = (**(code **)(*param_2 + 0x298))(param_2,0x1001,&local_d8);
  if (cVar1 == '\0') {
    uVar6 = (**(code **)(*param_2 + 0x140))(param_2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x4c) = uVar6;
  }
  else {
    uVar4 = FUN_140373e50(local_d8 + 0x1cf);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x2e) = uVar4;
    plVar14 = DAT_140975b60;
    if (DAT_140975b60 == (longlong *)0x0) {
      local_e8 = 0x3c0;
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","g_pItemMgr","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\mapgroup.h");
      plVar14 = plVar16;
    }
    lVar13 = *plVar14;
    uVar6 = FUN_14032b4b0(local_d8,4);
    lVar13 = (**(code **)(lVar13 + 0x60))(plVar14,uVar6);
    uVar5 = 0;
    uVar4 = uVar5;
    if (lVar13 != 0) {
      uVar4 = FUN_1400fda10(lVar13,0x10,1);
    }
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x5d) = uVar4;
    plVar14 = DAT_140975b60;
    if (DAT_140975b60 == (longlong *)0x0) {
      local_e8 = 0x3c0;
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","g_pItemMgr","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\mapgroup.h");
      plVar14 = plVar16;
    }
    lVar13 = *plVar14;
    uVar6 = FUN_14032b4b0(local_d8,5);
    lVar13 = (**(code **)(lVar13 + 0x60))(plVar14,uVar6);
    if (lVar13 != 0) {
      uVar5 = FUN_1400fda10(lVar13,0x10,1);
    }
    plVar14 = local_d8;
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x5f) = uVar5;
    uVar7 = (**(code **)(*local_d8 + 0x108))(local_d8);
    if (uVar7 < 3) {
      uVar3 = (**(code **)(*plVar14 + 0x108))(plVar14);
    }
    else {
      uVar3 = 2;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0x79) = uVar3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xf2) = 0;
    plVar14 = (longlong *)FUN_140118320();
    if (plVar14 != (longlong *)0x0) {
      cVar1 = FUN_140167b70(local_d8);
      if (cVar1 == '\0') {
        iVar9 = (**(code **)(*plVar14 + 0x28))(plVar14,*(undefined4 *)(*(longlong *)(param_1 + 0x428) + 8));
        if (iVar9 != 0) {
          uVar6 = (**(code **)(*plVar14 + 0x48))(plVar14,iVar9,0);
          *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x8a) = uVar6;
          if (*(int *)(*(longlong *)(param_1 + 0x428) + 8) == *(int *)(*(longlong *)(param_1 + 0x428) + 0x8a)) {
            uVar6 = (**(code **)(*plVar14 + 0x50))(plVar14,iVar9,0);
            *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x86) = uVar6;
          }
          *(int *)(*(longlong *)(param_1 + 0x428) + 0xf2) = iVar9;
        }
      }
      else {
        lVar13 = *plVar14;
        uVar6 = (**(code **)(*local_d8 + 0x38))();
        uVar8 = FUN_140167b40(local_d8);
        iVar9 = (**(code **)(lVar13 + 0xe8))(plVar14,uVar8,uVar6);
        if (iVar9 != 0) {
          lVar13 = *plVar14;
          uVar6 = (**(code **)(*local_d8 + 0x38))();
          uVar8 = FUN_140167b40(local_d8);
          uVar6 = (**(code **)(lVar13 + 0xf0))(plVar14,uVar8,uVar6);
          *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x8a) = uVar6;
          iVar10 = (**(code **)(*local_d8 + 0x38))();
          if (iVar10 == *(int *)(*(longlong *)(param_1 + 0x428) + 0x8a)) {
            lVar13 = *plVar14;
            uVar6 = (**(code **)(*local_d8 + 0x38))();
            uVar8 = FUN_140167b40(local_d8);
            uVar6 = (**(code **)(lVar13 + 0xf8))(plVar14,uVar8,uVar6);
            *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x86) = uVar6;
          }
          *(int *)(*(longlong *)(param_1 + 0x428) + 0xf2) = iVar9;
        }
      }
    }
    uVar6 = FUN_140373040(local_d8 + 0x1cf);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x9c) = uVar6;
    uVar6 = FUN_140164ac0(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xb6) = uVar6;
    uVar6 = FUN_140164ba0(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xba) = uVar6;
    uVar4 = FUN_140163420(local_d8);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0xaa) = uVar4;
    uVar4 = FUN_140163440(local_d8);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0xac) = uVar4;
    uVar4 = FUN_140163460(local_d8);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0xae) = uVar4;
    uVar4 = FUN_140163480(local_d8);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0xb0) = uVar4;
    uVar4 = FUN_140164aa0(local_d8);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x61) = uVar4;
    uVar6 = FUN_1401649c0(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xb2) = uVar6;
    uVar6 = (**(code **)(local_d8[2] + 0x140))(local_d8 + 2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x4c) = uVar6;
    uVar4 = FUN_140160850(local_d8);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0xa0) = uVar4;
    uVar6 = FUN_1401608c0(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xa2) = uVar6;
    uVar6 = FUN_140160a80(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xa6) = uVar6;
    bVar2 = FUN_140161fe0(local_d8);
    *(ushort *)(*(longlong *)(param_1 + 0x428) + 0xc2) = (ushort)bVar2;
    uVar3 = FUN_140168ad0(local_d8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0xcf) = uVar3;
    if (*(char *)(*(longlong *)(param_1 + 0x428) + 0xcf) != '\0') {
      uVar6 = FUN_140168b40(local_d8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x72) = uVar6;
    }
    uVar4 = FUN_140167b40(local_d8);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0xfd) = uVar4;
    cVar1 = FUN_140167b70(local_d8);
    if (cVar1 != '\0') {
      uVar6 = (**(code **)(*local_d8 + 0x38))();
      *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xff) = uVar6;
    }
    uVar6 = FUN_1401657c0(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x10a) = uVar6;
    uVar6 = FUN_140168be0(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x10e) = uVar6;
    uVar6 = FUN_1401657e0(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x112) = uVar6;
    uVar3 = FUN_140167cb0(local_d8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0x116) = uVar3;
    uVar3 = FUN_140167d60(local_d8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0x117) = uVar3;
    param_4 = local_c8;
  }
  iVar9 = (**(code **)(*param_2 + 0x10))(param_2);
  if (iVar9 - 1U < 299999) {
    cVar1 = (**(code **)(*param_2 + 0x298))(param_2,0x1040,&local_c0);
    if (cVar1 == '\0') {
      local_e8 = 0xa7;
      log_InlineLogERROR(&DAT_1406d9c10,"IF_OK","pRole->QueryObj(OBJ_NPC, IPP_OF(pNpc))",
                         "f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\network\\msgplayer.cpp");
    }
    else {
      iVar9 = (**(code **)(**(longlong **)(local_c0 + 0x60) + 0x10))(*(longlong **)(local_c0 + 0x60),4);
      if (iVar9 == 9) {
        uVar7 = (**(code **)(*param_2 + 0x78))(param_2);
        *(uint *)(*(longlong *)(param_1 + 0x428) + 99) = uVar7 / 100;
        uVar4 = FUN_1400872b0(local_c0,0xe);
        *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x69) = uVar4;
      }
      else {
        uVar6 = (**(code **)(*param_2 + 0x78))(param_2);
        *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 99) = uVar6;
        uVar4 = FUN_1400872b0(local_c0,0x19);
        *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x69) = uVar4;
      }
    }
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x10))(param_2);
    if (((uVar7 < 0x61a81) || (699999 < uVar7)) && (0x1869e < uVar7 - 0xaae61)) {
      uVar6 = (**(code **)(*param_2 + 0x148))(param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x67) = uVar6;
    }
    else {
      uVar6 = (**(code **)(*param_2 + 0x78))(param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 99) = uVar6;
      uVar4 = (**(code **)(*param_2 + 0x70))(param_2);
      *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x69) = uVar4;
      *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0xd0) = 0;
      local_c0 = 0;
      (**(code **)(*param_2 + 0x298))(param_2,0x1002,&local_c0);
      if ((local_c0 != 0) && (cVar1 = FUN_14038bc80(), cVar1 != '\0')) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0xd0) = 1;
        plVar14 = (longlong *)(local_c0 + 0x10);
        iVar9 = (**(code **)(*(longlong *)(local_c0 + 0x10) + 0x80))(plVar14);
        iVar10 = (**(code **)(*plVar14 + 0x78))(plVar14);
        iVar9 = MulDiv(iVar10,10000,iVar9);
        *(int *)(*(longlong *)(param_1 + 0x428) + 99) = iVar9;
      }
    }
  }
  local_d0 = (longlong *)0x0;
  cVar1 = (**(code **)(*param_2 + 0x298))(param_2,0x1002,&local_d0);
  if (cVar1 != '\0') {
    *(char *)(*(longlong *)(param_1 + 0x428) + 0x103) = (char)local_d0[0x29];
    uVar4 = (**(code **)(local_d0[2] + 1000))(local_d0 + 2,0);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x104) = uVar4;
    iVar9 = (**(code **)(*param_2 + 0x10))(param_2);
    if ((iVar9 - 0xaae61U < 99999) && (lVar13 = (**(code **)(local_d0[2] + 0x2b0))(local_d0 + 2), lVar13 != 0)) {
      plVar14 = (longlong *)(**(code **)(local_d0[2] + 0x2b0))(local_d0 + 2);
      uVar6 = (**(code **)(*plVar14 + 8))(plVar14);
      *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x106) = uVar6;
    }
    plVar14 = (longlong *)(**(code **)(**(longlong **)local_d0[0x28] + 0x10))(*(longlong **)local_d0[0x28],0x15);
    uVar7 = (**(code **)(*plVar14 + 0x48))(plVar14);
    if ((uVar7 >> 0x11 & 1) == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0xce) = 0;
    }
    else {
      *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0xce) = 1;
    }
  }
  iVar9 = (**(code **)(*param_2 + 0x10))(param_2);
  if (iVar9 - 1000000U < 0xee5be5c0) {
    uVar4 = (**(code **)(*param_2 + 0x70))(param_2);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x7a) = uVar4;
  }
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x6b) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
  *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x6d) = uVar4;
  uVar3 = (**(code **)(*param_2 + 0x50))(param_2);
  *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0x71) = uVar3;
  *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0x7c) = param_3;
  uVar6 = (**(code **)(*param_2 + 0x198))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x92) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x1a0))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x8e) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x1a8))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x7e) = uVar6;
  uVar3 = (**(code **)(*param_2 + 0x1c8))(param_2);
  *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0x7d) = uVar3;
  uVar4 = (**(code **)(*param_2 + 0x1b0))(param_2);
  *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x9a) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x1b8))(param_2);
  *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x96) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x1c0))(param_2);
  *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x98) = uVar4;
  iVar9 = (**(code **)(*param_2 + 0x10))(param_2);
  if (iVar9 - 1000000U < 0xee5be5c0) {
    if ((DAT_140975c00 != '\0') && (lVar13 = (**(code **)(*param_2 + 0x28))(param_2), lVar13 != 0)) {
      pcVar15 = (char *)(**(code **)(*param_2 + 0x28))();
      lVar13 = -1;
      do {
        if (lVar13 == 0) break;
        lVar13 = lVar13 + -1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar1 != '\0');
      if (lVar13 != -2) {
        pcVar15 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
        tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x430),pcVar15);
        pcVar15 = (char *)(**(code **)(*param_2 + 0x28))(param_2);
        tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x430),pcVar15);
        goto LAB_14039fb88;
      }
    }
    pcVar15 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
    tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x430),pcVar15);
    tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x430),"");
  }
  else if ((local_d0 == (longlong *)0x0) || (iVar9 = FUN_140388790(), iVar9 == 0)) {
    pcVar15 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
    tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x430),pcVar15);
    tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x430),"");
  }
  else {
    cVar1 = FUN_14038ba40(local_d0,local_88,0x40);
    if (cVar1 == '\0') {
      pcVar15 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
      tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x430),pcVar15);
      tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x430),"");
    }
    else {
      pcVar15 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
      tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x430),pcVar15);
      tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x430),local_88);
    }
  }
LAB_14039fb88:
  this = (CStringPacker *)(param_1 + 0x430);
  if (*(int *)(*(longlong *)(param_1 + 0x428) + 0xb6) == 0) {
    tq::CStringPacker::AddString(this,"");
  }
  else {
    pcVar15 = (char *)FUN_140164b30(local_d8);
    tq::CStringPacker::AddString(this,pcVar15);
  }
  if ((local_d0 == (longlong *)0x0) || ((cVar1 = FUN_140388010(local_d0,1), cVar1 == '\0' && (cVar1 = FUN_140388010(local_d0,2), cVar1 == '\0')))) {
    tq::CStringPacker::AddString(this,"");
  }
  else {
    cVar1 = FUN_140388010(local_d0,2);
    if (cVar1 != '\0') {
      uVar6 = FUN_140388950(local_d0);
      *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xf6) = uVar6;
      *(int *)(*(longlong *)(param_1 + 0x428) + 0x44) = (int)local_d0[0x1a];
      *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x48) = *(undefined4 *)((longlong)local_d0 + 0xd4);
      uVar4 = (**(code **)(*local_d0 + 0x30))();
      *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0x2e) = uVar4;
    }
    lVar13 = (**(code **)(local_d0[2] + 0x2b0))(local_d0 + 2);
    if (lVar13 == 0) {
      tq::CStringPacker::AddString(this,"");
    }
    else {
      pcVar15 = (char *)(**(code **)(*(longlong *)(lVar13 + 0x10) + 0x18))(lVar13 + 0x10);
      tq::CStringPacker::AddString(this,pcVar15);
    }
  }
  if (local_d8 != (longlong *)0x0) {
    pcVar15 = (char *)FUN_140177090();
    tq::CStringPacker::AddString(this,pcVar15);
    cVar1 = FUN_140167b70(local_d8);
    if (cVar1 == '\0') {
      tq::CStringPacker::AddString(this,"");
    }
    else {
      pcVar15 = (char *)FUN_140167ba0(local_d8);
      tq::CStringPacker::AddString(this,pcVar15);
    }
    pcVar15 = (char *)FUN_140167bb0(local_d8);
    if (pcVar15 == (char *)0x0) {
      tq::CStringPacker::AddString(this,"");
    }
    else {
      tq::CStringPacker::AddString(this,pcVar15);
    }
    uVar6 = FUN_140188ec0(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xbe) = uVar6;
    uVar6 = FUN_140188f10(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x82) = uVar6;
    uVar6 = FUN_140188f70(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xc9) = uVar6;
    *(int *)(*(longlong *)(param_1 + 0x428) + 0xc4) = (int)local_d8[0x248];
    *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 200) = *(undefined1 *)((longlong)local_d8 + 0x1244);
    cVar1 = FUN_140178630(local_d8);
    if (cVar1 != '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xc4) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 200) = 0xff;
    }
    uVar6 = FUN_14032d5c0(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x44) = uVar6;
    uVar6 = FUN_14032d550(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x48) = uVar6;
    uVar6 = FUN_14032d4e0(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x50) = uVar6;
    plVar14 = DAT_140975b60;
    if (DAT_140975b60 == (longlong *)0x0) {
      local_e8 = 0x3c0;
      log_InlineLogERROR(&DAT_1406d9c10,"CHECKF","g_pItemMgr","f:\\version\\cqserver-78.0.11-1204\\msgserver\\mapgroupkernel\\mapgroup.h");
      plVar14 = plVar16;
    }
    lVar13 = *plVar14;
    uVar6 = FUN_14032b4b0(local_d8,0x13);
    lVar13 = (**(code **)(lVar13 + 0x60))(plVar14,uVar6);
    if (lVar13 != 0) {
      uVar6 = FUN_1400fda10(lVar13,1,1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x54) = uVar6;
      uVar3 = FUN_1400fda10(lVar13,0xc,1);
      *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0x58) = uVar3;
      uVar6 = FUN_1400ff980(lVar13);
      *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x59) = uVar6;
    }
    uVar4 = FUN_140165570(local_d8);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0xea) = uVar4;
    uVar4 = FUN_140165580(local_d8);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0xec) = uVar4;
    *(ushort *)(*(longlong *)(param_1 + 0x428) + 0xee) = (ushort)*(byte *)((longlong)local_d8 + 0xeee);
    uVar4 = FUN_140166d10(local_d8);
    *(undefined2 *)(*(longlong *)(param_1 + 0x428) + 0xf0) = uVar4;
    uVar6 = FUN_14018eb30(local_d8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xf6) = uVar6;
    uVar3 = FUN_140179a20(local_d8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0xfa) = uVar3;
    uVar3 = FUN_140179a90(local_d8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0xfb) = uVar3;
  }
  uVar3 = (**(code **)(*param_2 + 0x280))(param_2);
  *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0xcd) = uVar3;
  uVar6 = (**(code **)(*param_2 + 0x128))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xd5) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x120))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xd1) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x130))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xdd) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x138))(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0xd9) = uVar6;
  uVar3 = (**(code **)(*param_2 + 0x1d0))(param_2);
  *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0xe1) = uVar3;
  uVar12 = (**(code **)(*param_2 + 0x1d8))();
  *(undefined8 *)(*(longlong *)(param_1 + 0x428) + 0xe2) = uVar12;
  *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0xfc) = param_4;
  uVar11 = tq::TimeGet(0);
  **(ulong **)(param_1 + 0x428) = uVar11;
  *(undefined4 *)(param_1 + 8) = 0x271e;
  uVar7 = tq::CStringPacker::GetSize(this);
  *(uint *)(param_1 + 0xc) = uVar7 + 0x118;
  return 1;
}