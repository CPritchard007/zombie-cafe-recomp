/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d5b8 FUN_0026d5b8 */

void FUN_0026d5b8(int *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,int *param_9,int *param_10,uint *param_11)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  longlong lVar30;
  uint uVar31;
  uint *puVar32;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b4;
  undefined4 *puStack_8c;
  uint local_88;
  uint local_7c;
  undefined4 local_54;
  uint local_50 [3];
  undefined4 *local_44;
  uint *local_40;
  int local_3c;
  int local_34;
  int iStack_2c;
  int iStack_28;
  uint local_24;
  char local_1c;
  char cStack_1a;
  
  local_54 = 0xffffffff;
  iVar11 = *(int *)(param_3 + 0x20);
  memset(param_11,0,0x28);
  uVar16 = DAT_0026d934;
  param_11[6] = DAT_0026d930;
  param_11[7] = uVar16;
  local_7c = 0x83;
  if ((int)((uint)*(byte *)(param_3 + 0x1c) << 0x1c) < 0) {
    local_7c = 3;
  }
  uVar16 = *(uint *)(param_3 + 0x3c);
  if (uVar16 != 0) {
    FUN_0026ded8();
  }
  memset(local_50 + 2,uVar16,0x30);
  uVar31 = DAT_0026d948;
  local_44 = &local_54;
  local_1c = '\x05';
  local_3c = *(int *)(param_3 + 0xc);
  local_24 = 1;
  local_50[0] = *(uint *)(local_3c + 0x18);
  local_40 = local_50;
  local_50[1] = 1;
  if (*(char *)(param_3 + 0x1d) == '\0') {
    local_34 = *(int *)(local_3c + 0x10);
  }
  local_88 = 3;
  FUN_0026dedc();
  puVar32 = local_40;
  uStack_c8 = 0;
  uStack_c4 = 0;
  bVar23 = param_9 != (int *)0x0;
  bVar24 = param_10 != (int *)0x0;
  iStack_d0 = 1;
  bVar25 = false;
  uStack_c0 = 0;
  uStack_e0 = 0;
  while (((int)uStack_c0 < (int)local_24 &&
         (piVar6 = (int *)FUN_0026d44c(param_2,iVar11,local_44[uStack_c0],uVar16,param_5,param_6,3,
                                       uVar16), piVar6 != (int *)0x0))) {
    uVar19 = uStack_e0 | 0x11000;
    if ((*(ushort *)(piVar6 + 4) & 1) == 0) {
      if ((int)((uint)*(ushort *)(piVar6 + 4) << 0x18) < 0) {
        uVar19 = uStack_e0 | 0x91000;
      }
    }
    else {
      uVar19 = uStack_e0 | 0x51000;
      if ((int)((uint)*(ushort *)(*piVar6 + 2) << 0x14) < 0) {
        iStack_d0 = iStack_d0 * 0x19;
        bVar25 = true;
      }
      else {
        piVar10 = *(int **)(*piVar6 + 0x10);
        if ((piVar10 != (int *)0x0) && (iVar13 = *piVar10, iVar13 != 0)) {
          iStack_d0 = iStack_d0 * iVar13;
        }
      }
    }
    uStack_c8 = piVar6[6] | uStack_c8;
    uStack_c0 = uStack_c0 + 1;
    uStack_c4 = piVar6[7] | uStack_c4;
    uStack_e0 = uVar19;
  }
  if ((uStack_c0 == local_24) && (local_1c != '\0')) {
    if ((uStack_e0 & 0xc0000) != 0) {
LAB_0026d824:
      uStack_b4 = 0;
      uVar26 = CONCAT44(DAT_0026d93c,DAT_0026d938);
      goto LAB_0026d83c;
    }
    uStack_e0 = uStack_e0 | 0x4000000;
    uStack_b4 = 0;
  }
  else {
    if (cStack_1a != '\0') goto LAB_0026d824;
    if (uStack_c0 == local_24) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = local_44[uStack_c0];
    }
    uStack_b4 = FUN_0026d44c(param_2,iVar11,uVar12,0x3c,param_5,param_6,0x3c,uVar16);
    if (uStack_b4 != 0) {
      uStack_b4 = FUN_0026d44c(param_2,iVar11,uVar12,0x18,param_5,param_6,0x18,uVar16);
      iVar13 = FUN_0026d44c(param_2,iVar11,uVar12,0x24,param_5,param_6,0x24,uVar16);
      if (iVar13 == 0) {
        uStack_d8 = DAT_0026d938;
        uStack_d4 = DAT_0026d93c;
      }
      else {
        uStack_d8 = DAT_0026d940;
        uStack_d4 = DAT_0026d944;
      }
      uVar26 = CONCAT44(uStack_d4,uStack_d8);
      if (uStack_b4 != 0) {
        uVar26 = __muldf3(uStack_d8,uStack_d4,DAT_0026d940,DAT_0026d944);
        uStack_e0 = uStack_e0 | 0x100000;
        uStack_c8 = *(uint *)(uStack_b4 + 0x18) | uStack_c8;
        puVar1 = (uint *)(uStack_b4 + 0x1c);
        uStack_b4 = 1;
        uStack_c4 = uStack_c4 | *puVar1;
      }
      if (iVar13 != 0) {
        uStack_b4 = uStack_b4 + 1;
        uStack_e0 = uStack_e0 | 0x200000;
        uStack_c8 = *(uint *)(iVar13 + 0x18) | uStack_c8;
        uStack_c4 = *(uint *)(iVar13 + 0x1c) | uStack_c4;
      }
      uStack_e0 = uStack_e0 | 0x22000;
      goto LAB_0026d83c;
    }
  }
  uVar26 = CONCAT44(DAT_0026d93c,DAT_0026d938);
LAB_0026d83c:
  uVar19 = uStack_b4;
  uStack_d4 = (undefined4)((ulonglong)uVar26 >> 0x20);
  uStack_d8 = (undefined4)uVar26;
  uVar12 = *(undefined4 *)(param_2 + 4);
  iVar13 = *param_1;
  if (((param_9 != (int *)0x0) && (-1 < (int)(uStack_e0 << 0xd))) && (cStack_1a == '\0')) {
    iVar7 = *param_9;
    puStack_8c = (undefined4 *)param_9[2];
    uVar18 = 0;
    iVar14 = 0;
    uStack_e8 = 0;
    while (iVar14 < iVar7) {
      if ((((int)local_24 < (int)uVar18) || (pcVar17 = (char *)*puStack_8c, *pcVar17 != -0x68)) ||
         (*(int *)(pcVar17 + 0x18) != iVar11)) {
LAB_0026d992:
        if (((local_1c == '\0') || (uVar18 != local_24)) || ((int)(uStack_e0 << 0xc) < 0))
        goto LAB_0026da16;
        uVar26 = FUN_0025d3f8(uVar12,iVar11);
        iVar13 = iVar14 * 0x14;
        goto LAB_0026d9da;
      }
      puVar15 = (undefined4 *)FUN_0026cf38(param_1,pcVar17);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = *(undefined4 **)(iVar13 + 8);
      }
      if ((local_50[2] == 0) || ((int)local_24 <= (int)uVar18)) {
        uVar8 = *puVar15;
        uStack_bc = 0;
        iVar9 = -1;
      }
      else {
        iVar9 = local_44[uVar18];
        if (iVar9 == *(int *)(local_3c + 4)) {
          iVar9 = -1;
        }
        uStack_bc = (uint)*(byte *)(iStack_2c + uVar18);
        uVar8 = *(undefined4 *)(iStack_28 + uVar18 * 4);
      }
      sVar4 = *(short *)(pcVar17 + 0x1c);
      if ((sVar4 == iVar9) && (iVar9 = sqlite3_stricmp(*puVar15,uVar8), iVar9 == 0)) {
        uStack_bc = uStack_bc ^ *(byte *)(puStack_8c + 3);
        if (((int)uStack_c0 < (int)uVar18) && (uStack_bc != uStack_e8)) goto LAB_0026da16;
        iVar9 = iVar14 + 1;
        puStack_8c = puStack_8c + 5;
        iVar14 = iVar9;
        if (sVar4 < 0) {
          uVar26 = FUN_0025d3f8(uVar12,iVar11);
          iVar20 = iVar9 * 0x14;
          uStack_e8 = iVar9;
          do {
            iVar14 = iVar7;
            if (*param_9 <= (int)uStack_e8) break;
            uStack_e8 = uStack_e8 + 1;
            uVar27 = FUN_0025d4dc(uVar12,*(undefined4 *)(param_9[2] + iVar20));
            iVar20 = iVar20 + 0x14;
            iVar14 = iVar9;
          } while (((uint)((ulonglong)uVar27 >> 0x20) & ~(uint)((ulonglong)uVar26 >> 0x20)) == 0 &&
                   ((uint)uVar27 & ~(uint)uVar26) == 0);
        }
      }
      else {
        if ((int)uStack_c0 <= (int)uVar18) {
          if (uVar18 == local_24) goto LAB_0026d992;
          goto LAB_0026da16;
        }
        uStack_bc = uStack_e8;
      }
      uVar18 = uVar18 + 1;
      uStack_e8 = uStack_bc;
    }
LAB_0026d9fe:
    if (uStack_e8 != 0) {
      uStack_e8 = 0x2000000;
    }
    uStack_e0 = DAT_0026dd18 | uStack_e0 | uStack_e8;
    bVar23 = false;
  }
LAB_0026da16:
  if (((param_10 != (int *)0x0) && (local_50[2] != 0)) && (*param_10 < 0x40)) {
    uStack_e8 = 0;
    uStack_e4 = 0;
    for (iVar13 = 0; uVar18 = uStack_c0, iVar13 < *param_10; iVar13 = iVar13 + 1) {
      pcVar17 = *(char **)(iVar13 * 0x14 + param_10[2]);
      if (*pcVar17 != -0x68) goto LAB_0026dafc;
      piVar6 = (int *)FUN_0026d44c(param_2,*(undefined4 *)(pcVar17 + 0x18),
                                   (int)*(short *)(pcVar17 + 0x1c),0,0xffffffff,0xffffffff,2,0);
      if (piVar6 == (int *)0x0) {
LAB_0026da86:
        if (*(int *)(pcVar17 + 0x18) != iVar11) goto LAB_0026dafc;
        uVar26 = __ashldi3(1,0,iVar13);
        uStack_e8 = (uint)uVar26 | uStack_e8;
        uStack_e4 = (uint)((ulonglong)uVar26 >> 0x20) | uStack_e4;
      }
      else {
        iVar14 = FUN_0026d3c4(param_1,*(undefined4 *)(*piVar6 + 8),*(undefined4 *)(*piVar6 + 0xc));
        iVar7 = FUN_0026cf38(param_1,pcVar17);
        if (iVar14 != iVar7) goto LAB_0026da86;
      }
    }
    for (; uStack_e8 != 0 || uStack_e4 != 0; uStack_e8 = uStack_e8 & ~(uint)uVar26) {
      if (((int)local_24 <= (int)uVar18) ||
         (iVar13 = FUN_0026d54e(param_1,param_10,iVar11,local_50 + 2,uVar18), iVar13 < 0))
      goto LAB_0026dafc;
      uVar26 = __ashldi3(1,0);
      uStack_e4 = uStack_e4 & ~(uint)((ulonglong)uVar26 >> 0x20);
      uVar18 = uVar18 + 1;
    }
    if ((uStack_e0 & 0x40000) == 0) {
      uStack_e0 = uStack_e0 | DAT_0026dd1c;
      bVar24 = false;
    }
  }
LAB_0026dafc:
  if ((uStack_e0 == 0) || (uVar16 == 0)) {
    bVar5 = false;
  }
  else {
    uVar18 = *(uint *)(param_3 + 0x30);
    uVar21 = *(uint *)(param_3 + 0x34);
    iVar13 = *(int *)(uVar16 + 0x24);
    for (iVar14 = 0; iVar14 < iVar13; iVar14 = iVar14 + 1) {
      if (*(int *)(iVar14 * 4 + *(int *)(uVar16 + 4)) < 0x3f) {
        uVar26 = __ashldi3(1,0);
        uVar18 = uVar18 & ~(uint)uVar26;
        uVar21 = uVar21 & ~(uint)((ulonglong)uVar26 >> 0x20);
      }
    }
    bVar5 = true;
    if (uVar18 == 0 && uVar21 == 0) {
      uStack_e0 = uStack_e0 | 0x800000;
      bVar5 = false;
    }
  }
  uVar18 = puVar32[uStack_c0];
  uVar26 = __floatunsidf(uVar18 * iStack_d0);
  uVar12 = (undefined4)((ulonglong)uVar26 >> 0x20);
  if (bVar25) {
    uVar21 = *puVar32;
    uVar27 = __adddf3((int)uVar26,uVar12,(int)uVar26,uVar12);
    uVar28 = __floatunsidf(uVar21);
    iVar13 = __aeabi_dcmpgt((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,
                            (int)((ulonglong)uVar28 >> 0x20));
    if (iVar13 != 0) {
      uVar26 = __floatunsidf(uVar21 >> 1);
      uVar27 = __floatunsidf(uVar18);
      __divdf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
               (int)((ulonglong)uVar27 >> 0x20));
      iStack_d0 = __fixdfsi();
    }
  }
  uVar26 = __divdf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),uStack_d8,uStack_d4);
  iVar13 = __aeabi_dcmplt((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),DAT_0026dd00,DAT_0026dd04);
  uVar27 = CONCAT44(DAT_0026dd0c,DAT_0026dd08);
  if (iVar13 != 0) {
    uVar26 = CONCAT44(DAT_0026dd04,DAT_0026dd00);
  }
  uStack_e4 = (uint)((ulonglong)uVar26 >> 0x20);
  uStack_e8 = (uint)uVar26;
  if ((uStack_e0 & DAT_0026dd20) == 0) {
    uVar27 = __floatunsidf(*puVar32 << 2);
  }
  else {
    uVar29 = __floatunsidf(*puVar32);
    uVar28 = CONCAT44(DAT_0026dd04,DAT_0026dd00);
    while( true ) {
      uVar12 = (undefined4)((ulonglong)uVar27 >> 0x20);
      uStack_d4 = (undefined4)((ulonglong)uVar28 >> 0x20);
      uStack_d8 = (undefined4)uVar28;
      iVar13 = __aeabi_dcmpgt((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar27,uVar12);
      if (iVar13 == 0) break;
      uVar28 = __adddf3(uStack_d8,uStack_d4,DAT_0026dd00,DAT_0026dd04);
      uVar27 = __muldf3((int)uVar27,uVar12,DAT_0026dd08,DAT_0026dd0c);
    }
    if ((uVar16 == 0) || (!bVar5)) {
      uVar27 = __floatsidf(iStack_d0);
    }
    else {
      uVar27 = __floatsidf(iStack_d0);
      uVar27 = __adddf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uStack_e8,uStack_e4);
    }
    uVar27 = __muldf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uStack_d8,uStack_d4);
    uVar27 = __adddf3(uStack_e8,uStack_e4,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
  }
  uVar28 = CONCAT44(DAT_0026dd0c,DAT_0026dd08);
  if (bVar23) {
    uVar29 = CONCAT44(DAT_0026dd04,DAT_0026dd00);
    while( true ) {
      uVar12 = (undefined4)((ulonglong)uVar28 >> 0x20);
      uStack_d4 = (undefined4)((ulonglong)uVar29 >> 0x20);
      uStack_d8 = (undefined4)uVar29;
      iVar13 = __aeabi_dcmpgt(uStack_e8,uStack_e4,(int)uVar28,uVar12);
      if (iVar13 == 0) break;
      uVar29 = __adddf3(uStack_d8,uStack_d4,DAT_0026dd00,DAT_0026dd04);
      uVar28 = __muldf3((int)uVar28,uVar12,DAT_0026dd08,DAT_0026dd0c);
    }
    uVar28 = __muldf3(uStack_e8,uStack_e4,uStack_d8,uStack_d4);
    uVar28 = __muldf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),DAT_0026dd10,DAT_0026dd14);
    uVar27 = __adddf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,
                      (int)((ulonglong)uVar28 >> 0x20));
  }
  uVar28 = CONCAT44(DAT_0026dd0c,DAT_0026dd08);
  uStack_cc = (undefined4)((ulonglong)uVar27 >> 0x20);
  iStack_d0 = (int)uVar27;
  if (bVar24) {
    uVar27 = CONCAT44(DAT_0026dd04,DAT_0026dd00);
    while( true ) {
      uVar12 = (undefined4)((ulonglong)uVar28 >> 0x20);
      uStack_d4 = (undefined4)((ulonglong)uVar27 >> 0x20);
      uStack_d8 = (undefined4)uVar27;
      iVar13 = __aeabi_dcmpgt(uStack_e8,uStack_e4,(int)uVar28,uVar12);
      if (iVar13 == 0) break;
      uVar27 = __adddf3(uStack_d8,uStack_d4,DAT_0026e008,DAT_0026e00c);
      uVar28 = __muldf3((int)uVar28,uVar12,DAT_0026e010,DAT_0026e014);
    }
    uVar27 = __muldf3(uStack_e8,uStack_e4,uStack_d8,uStack_d4);
    uVar27 = __muldf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),DAT_0026e018,DAT_0026e01c);
    uVar27 = __adddf3(iStack_d0,uStack_cc,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
  }
  uStack_cc = (undefined4)((ulonglong)uVar27 >> 0x20);
  iStack_d0 = (int)uVar27;
  iVar13 = __aeabi_dcmpgt(uStack_e8,uStack_e4,DAT_0026e020,DAT_0026e024);
  if ((iVar13 != 0) &&
     (iVar13 = __aeabi_dcmple(iStack_d0,uStack_cc,param_11[6],param_11[7]), iVar13 != 0)) {
    lVar30 = FUN_0025d3f8(*(undefined4 *)(param_2 + 4),iVar11);
    iVar11 = *(int *)(param_2 + 0x20);
    iVar13 = *(int *)(param_2 + 0x18);
    uStack_b4 = uStack_c0;
    while( true ) {
      uStack_e4 = (uint)((ulonglong)uVar26 >> 0x20);
      uStack_e8 = (uint)uVar26;
      if ((iVar13 == 0) ||
         (iVar14 = __aeabi_dcmpgt(uStack_e8,uStack_e4,DAT_0026e020,DAT_0026e024), iVar14 == 0))
      break;
      if ((-1 < (int)((uint)*(byte *)(iVar11 + 0x12) << 0x1e)) &&
         (lVar30 == CONCAT44(*(uint *)(iVar11 + 0x24) & param_8,param_7 & *(uint *)(iVar11 + 0x20)))
         ) {
        uVar3 = *(ushort *)(iVar11 + 0x10);
        if ((uVar3 & 0x83) == 0) {
          if ((uVar3 & 0x3c) == 0) {
            if (uVar3 != 0x800) {
              uVar26 = __muldf3(uStack_e8,uStack_e4,DAT_0026e028,DAT_0026e02c);
            }
          }
          else {
            uVar12 = DAT_0026e018;
            uVar8 = DAT_0026e01c;
            if (uVar19 == 0) goto LAB_0026de0a;
            uVar19 = uVar19 + -1;
          }
        }
        else {
          uVar12 = DAT_0026e010;
          uVar8 = DAT_0026e014;
          if (uStack_b4 == 0) {
LAB_0026de0a:
            uVar26 = __divdf3(uStack_e8,uStack_e4,uVar12,uVar8);
          }
          else {
            uStack_b4 = uStack_b4 - 1;
          }
        }
      }
      iVar13 = iVar13 + -1;
      iVar11 = iVar11 + 0x28;
    }
    iVar11 = __aeabi_dcmplt(uStack_e8,uStack_e4,DAT_0026e020,DAT_0026e024);
    if (iVar11 != 0) {
      uVar26 = CONCAT44(DAT_0026e024,DAT_0026e020);
    }
  }
  uStack_e4 = (uint)((ulonglong)uVar26 >> 0x20);
  uStack_e8 = (uint)uVar26;
  if ((uStack_e0 != 0) || (uVar16 == 0)) {
    uVar19 = param_11[6];
    uVar18 = param_11[7];
    iVar11 = __aeabi_dcmplt(iStack_d0,uStack_cc,uVar19,uVar18);
    if ((iVar11 != 0) ||
       ((iVar11 = __aeabi_dcmple(iStack_d0,uStack_cc,uVar19,uVar18), iVar11 != 0 &&
        (iVar11 = __aeabi_dcmplt(uStack_e8,uStack_e4,param_11[2],param_11[3]), iVar11 != 0)))) {
      *(undefined8 *)(param_11 + 6) = uVar27;
      param_11[8] = uStack_c8;
      param_11[9] = uStack_c4;
      *(undefined8 *)(param_11 + 2) = uVar26;
      *param_11 = uVar31 & uStack_e0;
      param_11[1] = uStack_c0;
      param_11[4] = uVar16;
    }
  }
  if ((*(int *)(param_3 + 0x3c) == 0) && (local_88 = local_7c, local_34 != 0)) {
    FUN_0026d654();
  }
  if ((param_9 == (int *)0x0) && (*(int *)(*param_1 + 0x18) << 7 < 0)) {
    *param_11 = *param_11 | 0x2000000;
  }
  uVar16 = param_5;
  uVar31 = param_6;
  puVar32 = param_11;
  FUN_0026e168(param_1,param_2,param_3);
  iVar11 = param_1[0x6e];
  iVar14 = param_1[0x6f];
  iVar13 = __aeabi_dcmple(iVar11,iVar14,DAT_0026e008,DAT_0026e00c,uVar16,uVar31,param_7,param_8,
                          param_9,puVar32);
  uVar26 = CONCAT44(DAT_0026e014,DAT_0026e010);
  if ((((iVar13 == 0) && (*(int *)(*param_1 + 0x18) << 4 < 0)) && ((*param_11 & DAT_0026e034) == 0))
     && ((*(char *)(param_3 + 0x1d) == '\0' && (*(char *)(param_3 + 0x1e) == '\0')))) {
    iVar13 = *(int *)(param_3 + 0xc);
    uVar28 = __floatunsidf(*(undefined4 *)(iVar13 + 0x18));
    uVar12 = (undefined4)((ulonglong)uVar28 >> 0x20);
    uVar27 = CONCAT44(DAT_0026e00c,DAT_0026e008);
    while( true ) {
      uVar8 = (undefined4)((ulonglong)uVar26 >> 0x20);
      uStack_dc = (undefined4)((ulonglong)uVar27 >> 0x20);
      uStack_e0 = (uint)uVar27;
      iVar7 = __aeabi_dcmpgt((int)uVar28,uVar12,(int)uVar26,uVar8);
      if (iVar7 == 0) break;
      uVar27 = __adddf3(uStack_e0,uStack_dc,DAT_0026e008,DAT_0026e00c);
      uVar26 = __muldf3((int)uVar26,uVar8,DAT_0026e010,DAT_0026e014);
    }
    uVar26 = __adddf3(uStack_e0,uStack_dc,uStack_e0,uStack_dc);
    uVar27 = __divdf3((int)uVar28,uVar12,iVar11,iVar14);
    uVar27 = __adddf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),DAT_0026e008,DAT_0026e00c);
    uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                      (int)((ulonglong)uVar27 >> 0x20));
    iVar11 = __aeabi_dcmpge((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),param_11[6],param_11[7]);
    if (iVar11 == 0) {
      puVar15 = *(undefined4 **)(param_2 + 0x20);
      puVar22 = puVar15 + *(int *)(param_2 + 0x18) * 10;
      for (; puVar15 < puVar22; puVar15 = puVar15 + 10) {
        if (((puVar15[2] == *(int *)(param_3 + 0x20)) && (*(short *)(puVar15 + 4) == 2)) &&
           ((puVar15[7] & param_6) == 0 && (puVar15[6] & param_5) == 0)) {
          bVar2 = *(byte *)(*(int *)(iVar13 + 0xc) + puVar15[3] * 0x18 + 0x16);
          iVar11 = FUN_0025cd42(*puVar15);
          if (iVar11 == 0x61) {
            bVar25 = bVar2 == 0x61;
LAB_0026e084:
            if (!bVar25) goto LAB_0026e088;
          }
          else if (iVar11 != 0x62) {
            bVar25 = 0x62 < bVar2;
            goto LAB_0026e084;
          }
          *(undefined8 *)(param_11 + 6) = uVar26;
          uVar26 = __adddf3(uStack_e0,uStack_dc,DAT_0026e0f0,DAT_0026e0f4);
          *(undefined8 *)(param_11 + 2) = uVar26;
          *param_11 = 0x20000000;
          uVar16 = puVar15[7];
          param_11[8] = puVar15[6];
          param_11[9] = uVar16;
          break;
        }
LAB_0026e088:
      }
    }
  }
  *param_11 = *param_11 | local_88;
  return;
LAB_0026d9da:
  if (iVar14 < *param_9) goto LAB_0026d9be;
  iVar13 = uStack_c0 << 2;
  uVar21 = uStack_c0;
  while (((int)uVar21 < (int)uVar18 &&
         (piVar6 = (int *)((int)local_44 + iVar13), iVar13 = iVar13 + 4,
         *(char *)(*(int *)(local_3c + 0xc) + *piVar6 * 0x18 + 0x14) != '\0'))) {
    uVar21 = uVar21 + 1;
  }
  if (uVar21 == uVar18) goto LAB_0026d9fe;
  goto LAB_0026da16;
LAB_0026d9be:
  iVar14 = iVar14 + 1;
  uVar27 = FUN_0025d4dc(uVar12,*(undefined4 *)(param_9[2] + iVar13));
  iVar13 = iVar13 + 0x14;
  if (((uint)((ulonglong)uVar27 >> 0x20) & ~(uint)((ulonglong)uVar26 >> 0x20)) != 0 ||
      ((uint)uVar27 & ~(uint)uVar26) != 0) goto LAB_0026da16;
  goto LAB_0026d9da;
}


