/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d654 FUN_0026d654 */

void FUN_0026d654(void)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int *unaff_r5;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  longlong lVar26;
  uint uStack00000018;
  uint uStack0000001c;
  uint uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  uint uStack00000030;
  uint uStack00000034;
  uint uStack00000038;
  uint uStack0000003c;
  uint uStack00000040;
  uint uStack00000044;
  int in_stack_00000048;
  uint uStack0000004c;
  uint in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  int *in_stack_0000005c;
  int iStack00000060;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  undefined4 *puStack00000074;
  uint in_stack_00000078;
  uint in_stack_0000007c;
  uint *puStack00000080;
  uint in_stack_00000084;
  uint uStack00000088;
  uint uStack0000008c;
  uint in_stack_00000094;
  uint in_stack_00000098;
  int *in_stack_00000110;
  int *in_stack_00000114;
  uint *in_stack_00000118;
  
  puStack00000080 = (uint *)unaff_r5[2];
  uStack00000038 = 0;
  uStack0000003c = 0;
  uStack00000088 = (uint)(in_stack_00000110 != (int *)0x0);
  uStack0000008c = (uint)(in_stack_00000114 != (int *)0x0);
  uStack00000030 = 1;
  iStack00000060 = 0;
  uStack00000040 = 0;
  uStack00000020 = 0;
  uVar17 = 0;
  while (((int)uStack00000040 < unaff_r5[9] &&
         (piVar6 = (int *)FUN_0026d44c(in_stack_00000054,in_stack_00000058,
                                       *(undefined4 *)(uStack00000040 * 4 + unaff_r5[1])),
         piVar6 != (int *)0x0))) {
    uVar19 = uVar17 | 0x11000;
    if ((*(ushort *)(piVar6 + 4) & 1) == 0) {
      if ((int)((uint)*(ushort *)(piVar6 + 4) << 0x18) < 0) {
        uVar19 = uVar17 | 0x91000;
      }
    }
    else {
      uVar19 = uVar17 | 0x51000;
      if ((int)((uint)*(ushort *)(*piVar6 + 2) << 0x14) < 0) {
        uStack00000030 = uStack00000030 * 0x19;
        iStack00000060 = 1;
      }
      else {
        piVar11 = *(int **)(*piVar6 + 0x10);
        if ((piVar11 != (int *)0x0) && (iVar8 = *piVar11, iVar8 != 0)) {
          uStack00000030 = uStack00000030 * iVar8;
        }
      }
    }
    uStack00000038 = piVar6[6] | uStack00000038;
    uStack00000040 = uStack00000040 + 1;
    uStack0000003c = piVar6[7] | uStack0000003c;
    uVar17 = uVar19;
  }
  uVar5 = uStack0000003c;
  uVar19 = uStack00000038;
  uStack00000020 = uVar17;
  if ((uStack00000040 == unaff_r5[9]) && ((char)unaff_r5[0xb] != '\0')) {
    if ((uVar17 & 0xc0000) != 0) {
LAB_0026d824:
      uStack0000004c = 0;
      uVar22 = CONCAT44(DAT_0026d93c,DAT_0026d938);
      goto LAB_0026d83c;
    }
    uStack00000020 = uVar17 | 0x4000000;
    uStack0000004c = 0;
  }
  else {
    if (*(char *)((int)unaff_r5 + 0x2e) != '\0') goto LAB_0026d824;
    if (uStack00000040 == unaff_r5[9]) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = *(undefined4 *)(uStack00000040 * 4 + unaff_r5[1]);
    }
    uStack0000004c = FUN_0026d44c(in_stack_00000054,in_stack_00000058,uVar12);
    if (uStack0000004c != 0) {
      uStack0000004c = FUN_0026d44c(in_stack_00000054,in_stack_00000058,uVar12);
      iVar8 = FUN_0026d44c(in_stack_00000054,in_stack_00000058,uVar12);
      if (iVar8 == 0) {
        uStack00000028 = DAT_0026d938;
        uStack0000002c = DAT_0026d93c;
      }
      else {
        uStack00000028 = DAT_0026d940;
        uStack0000002c = DAT_0026d944;
      }
      uVar22 = CONCAT44(uStack0000002c,uStack00000028);
      if (uStack0000004c != 0) {
        uVar22 = __muldf3(uStack00000028,uStack0000002c,DAT_0026d940,DAT_0026d944);
        uStack00000020 = uStack00000020 | 0x100000;
        uStack00000038 = *(uint *)(uStack0000004c + 0x18) | uVar19;
        puVar1 = (uint *)(uStack0000004c + 0x1c);
        uStack0000004c = 1;
        uStack0000003c = uVar5 | *puVar1;
      }
      if (iVar8 != 0) {
        uStack0000004c = uStack0000004c + 1;
        uStack00000020 = uStack00000020 | 0x200000;
        uStack00000038 = *(uint *)(iVar8 + 0x18) | uStack00000038;
        uStack0000003c = *(uint *)(iVar8 + 0x1c) | uStack0000003c;
      }
      uStack00000020 = uStack00000020 | 0x22000;
      goto LAB_0026d83c;
    }
  }
  uVar22 = CONCAT44(DAT_0026d93c,DAT_0026d938);
LAB_0026d83c:
  iVar8 = uStack0000004c;
  uStack0000002c = (undefined4)((ulonglong)uVar22 >> 0x20);
  uStack00000028 = (undefined4)uVar22;
  uVar12 = *(undefined4 *)(in_stack_00000054 + 4);
  iVar13 = *in_stack_0000005c;
  if (((in_stack_00000110 != (int *)0x0) && (-1 < (int)(uStack00000020 << 0xd))) &&
     (*(char *)((int)unaff_r5 + 0x2e) == '\0')) {
    iVar7 = *in_stack_00000110;
    puStack00000074 = (undefined4 *)in_stack_00000110[2];
    uVar17 = 0;
    iVar14 = 0;
    uStack00000018 = 0;
    while (iVar14 < iVar7) {
      if (((unaff_r5[9] < (int)uVar17) || (pcVar16 = (char *)*puStack00000074, *pcVar16 != -0x68))
         || (*(int *)(pcVar16 + 0x18) != in_stack_00000058)) {
LAB_0026d992:
        if ((((char)unaff_r5[0xb] == '\0') || (uVar17 != unaff_r5[9])) ||
           ((int)(uStack00000020 << 0xc) < 0)) goto LAB_0026da16;
        uVar22 = FUN_0025d3f8(uVar12,in_stack_00000058);
        iVar13 = iVar14 * 0x14;
        goto LAB_0026d9da;
      }
      puVar15 = (undefined4 *)FUN_0026cf38(in_stack_0000005c,pcVar16);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = *(undefined4 **)(iVar13 + 8);
      }
      if ((*unaff_r5 == 0) || (unaff_r5[9] <= (int)uVar17)) {
        uVar9 = *puVar15;
        uStack00000044 = 0;
        iVar10 = -1;
      }
      else {
        iVar10 = *(int *)(unaff_r5[1] + uVar17 * 4);
        if (iVar10 == *(int *)(unaff_r5[3] + 4)) {
          iVar10 = -1;
        }
        uStack00000044 = (uint)*(byte *)(unaff_r5[7] + uVar17);
        uVar9 = *(undefined4 *)(unaff_r5[8] + uVar17 * 4);
      }
      sVar4 = *(short *)(pcVar16 + 0x1c);
      if ((sVar4 == iVar10) && (iVar10 = sqlite3_stricmp(*puVar15,uVar9), iVar10 == 0)) {
        uStack00000044 = uStack00000044 ^ *(byte *)(puStack00000074 + 3);
        if (((int)uStack00000040 < (int)uVar17) && (uStack00000044 != uStack00000018))
        goto LAB_0026da16;
        iVar10 = iVar14 + 1;
        puStack00000074 = puStack00000074 + 5;
        iVar14 = iVar10;
        if (sVar4 < 0) {
          uVar22 = FUN_0025d3f8(uVar12,in_stack_00000058);
          iVar18 = iVar10 * 0x14;
          uStack00000018 = iVar10;
          do {
            iVar14 = iVar7;
            if (*in_stack_00000110 <= (int)uStack00000018) break;
            uStack00000018 = uStack00000018 + 1;
            uVar23 = FUN_0025d4dc(uVar12,*(undefined4 *)(in_stack_00000110[2] + iVar18));
            iVar18 = iVar18 + 0x14;
            iVar14 = iVar10;
          } while (((uint)((ulonglong)uVar23 >> 0x20) & ~(uint)((ulonglong)uVar22 >> 0x20)) == 0 &&
                   ((uint)uVar23 & ~(uint)uVar22) == 0);
        }
      }
      else {
        if ((int)uStack00000040 <= (int)uVar17) {
          if (uVar17 == unaff_r5[9]) goto LAB_0026d992;
          goto LAB_0026da16;
        }
        uStack00000044 = uStack00000018;
      }
      uVar17 = uVar17 + 1;
      uStack00000018 = uStack00000044;
    }
LAB_0026d9fe:
    if (uStack00000018 != 0) {
      uStack00000018 = 0x2000000;
    }
    uStack00000020 = DAT_0026dd18 | uStack00000020 | uStack00000018;
    uStack00000088 = 0;
  }
LAB_0026da16:
  if (((in_stack_00000114 != (int *)0x0) && (*unaff_r5 != 0)) && (*in_stack_00000114 < 0x40)) {
    uStack00000018 = 0;
    uStack0000001c = 0;
    for (iVar13 = 0; uVar17 = uStack00000040, iVar13 < *in_stack_00000114; iVar13 = iVar13 + 1) {
      pcVar16 = *(char **)(iVar13 * 0x14 + in_stack_00000114[2]);
      if (*pcVar16 != -0x68) goto LAB_0026dafc;
      piVar6 = (int *)FUN_0026d44c(in_stack_00000054,*(undefined4 *)(pcVar16 + 0x18),
                                   (int)*(short *)(pcVar16 + 0x1c));
      if (piVar6 == (int *)0x0) {
LAB_0026da86:
        if (*(int *)(pcVar16 + 0x18) != in_stack_00000058) goto LAB_0026dafc;
        uVar22 = __ashldi3(1,0,iVar13);
        uStack00000018 = (uint)uVar22 | uStack00000018;
        uStack0000001c = (uint)((ulonglong)uVar22 >> 0x20) | uStack0000001c;
      }
      else {
        iVar14 = FUN_0026d3c4(in_stack_0000005c,*(undefined4 *)(*piVar6 + 8),
                              *(undefined4 *)(*piVar6 + 0xc));
        iVar7 = FUN_0026cf38(in_stack_0000005c,pcVar16);
        if (iVar14 != iVar7) goto LAB_0026da86;
      }
    }
    for (; uStack00000018 != 0 || uStack0000001c != 0;
        uStack00000018 = uStack00000018 & ~(uint)uVar22) {
      if ((unaff_r5[9] <= (int)uVar17) ||
         (iVar13 = FUN_0026d54e(in_stack_0000005c,in_stack_00000114,in_stack_00000058,unaff_r5),
         iVar13 < 0)) goto LAB_0026dafc;
      uVar22 = __ashldi3(1,0);
      uStack0000001c = uStack0000001c & ~(uint)((ulonglong)uVar22 >> 0x20);
      uVar17 = uVar17 + 1;
    }
    if ((uStack00000020 & 0x40000) == 0) {
      uStack00000020 = uStack00000020 | DAT_0026dd1c;
      uStack0000008c = 0;
    }
  }
LAB_0026dafc:
  if ((uStack00000020 == 0) || (in_stack_00000050 == 0)) {
    bVar21 = false;
  }
  else {
    uVar17 = *(uint *)(in_stack_00000048 + 0x30);
    uVar19 = *(uint *)(in_stack_00000048 + 0x34);
    iVar13 = *(int *)(in_stack_00000050 + 0x24);
    for (iVar14 = 0; iVar14 < iVar13; iVar14 = iVar14 + 1) {
      if (*(int *)(iVar14 * 4 + *(int *)(in_stack_00000050 + 4)) < 0x3f) {
        uVar22 = __ashldi3(1,0);
        uVar17 = uVar17 & ~(uint)uVar22;
        uVar19 = uVar19 & ~(uint)((ulonglong)uVar22 >> 0x20);
      }
    }
    bVar21 = true;
    if (uVar17 == 0 && uVar19 == 0) {
      uStack00000020 = uStack00000020 | 0x800000;
      bVar21 = false;
    }
  }
  uVar17 = puStack00000080[uStack00000040];
  uVar22 = __floatunsidf(uVar17 * uStack00000030);
  uVar12 = (undefined4)((ulonglong)uVar22 >> 0x20);
  if (iStack00000060 != 0) {
    uVar19 = *puStack00000080;
    uVar23 = __adddf3((int)uVar22,uVar12,(int)uVar22,uVar12);
    iStack00000060 = (int)uVar23;
    uVar24 = __floatunsidf(uVar19);
    iVar13 = __aeabi_dcmpgt(iStack00000060,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                            (int)((ulonglong)uVar24 >> 0x20));
    if (iVar13 != 0) {
      uVar22 = __floatunsidf(uVar19 >> 1);
      uVar23 = __floatunsidf(uVar17);
      __divdf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
               (int)((ulonglong)uVar23 >> 0x20));
      uStack00000030 = __fixdfsi();
    }
  }
  uVar22 = __divdf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),uStack00000028,uStack0000002c);
  iVar13 = __aeabi_dcmplt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_0026dd00,DAT_0026dd04);
  uVar23 = CONCAT44(DAT_0026dd0c,DAT_0026dd08);
  if (iVar13 != 0) {
    uVar22 = CONCAT44(DAT_0026dd04,DAT_0026dd00);
  }
  uStack0000001c = (uint)((ulonglong)uVar22 >> 0x20);
  uStack00000018 = (uint)uVar22;
  if ((uStack00000020 & DAT_0026dd20) == 0) {
    uVar23 = __floatunsidf(*puStack00000080 << 2);
  }
  else {
    uVar25 = __floatunsidf(*puStack00000080);
    iStack00000060 = (int)uVar25;
    uVar24 = CONCAT44(DAT_0026dd04,DAT_0026dd00);
    while( true ) {
      uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uStack0000002c = (undefined4)((ulonglong)uVar24 >> 0x20);
      uStack00000028 = (undefined4)uVar24;
      iVar13 = __aeabi_dcmpgt(iStack00000060,(int)((ulonglong)uVar25 >> 0x20),(int)uVar23,uVar12);
      if (iVar13 == 0) break;
      uVar24 = __adddf3(uStack00000028,uStack0000002c,DAT_0026dd00,DAT_0026dd04);
      uVar23 = __muldf3((int)uVar23,uVar12,DAT_0026dd08,DAT_0026dd0c);
    }
    if ((in_stack_00000050 == 0) || (!bVar21)) {
      uVar23 = __floatsidf(uStack00000030);
    }
    else {
      uVar23 = __floatsidf(uStack00000030);
      uVar23 = __adddf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uStack00000018,uStack0000001c);
    }
    uVar23 = __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uStack00000028,uStack0000002c);
    uVar23 = __adddf3(uStack00000018,uStack0000001c,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
  }
  uVar24 = CONCAT44(DAT_0026dd0c,DAT_0026dd08);
  uStack00000030 = (uint)uVar23;
  if (uStack00000088 != 0) {
    uVar25 = CONCAT44(DAT_0026dd04,DAT_0026dd00);
    while( true ) {
      uVar12 = (undefined4)((ulonglong)uVar24 >> 0x20);
      uStack0000002c = (undefined4)((ulonglong)uVar25 >> 0x20);
      uStack00000028 = (undefined4)uVar25;
      iVar13 = __aeabi_dcmpgt(uStack00000018,uStack0000001c,(int)uVar24,uVar12);
      if (iVar13 == 0) break;
      uVar25 = __adddf3(uStack00000028,uStack0000002c,DAT_0026dd00,DAT_0026dd04);
      uVar24 = __muldf3((int)uVar24,uVar12,DAT_0026dd08,DAT_0026dd0c);
    }
    uVar24 = __muldf3(uStack00000018,uStack0000001c,uStack00000028,uStack0000002c);
    uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_0026dd10,DAT_0026dd14);
    uVar23 = __adddf3(uStack00000030,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                      (int)((ulonglong)uVar24 >> 0x20));
  }
  uVar24 = CONCAT44(DAT_0026dd0c,DAT_0026dd08);
  uStack00000034 = (uint)((ulonglong)uVar23 >> 0x20);
  uStack00000030 = (uint)uVar23;
  if (uStack0000008c != 0) {
    uVar23 = CONCAT44(DAT_0026dd04,DAT_0026dd00);
    while( true ) {
      uVar12 = (undefined4)((ulonglong)uVar24 >> 0x20);
      uStack0000002c = (undefined4)((ulonglong)uVar23 >> 0x20);
      uStack00000028 = (undefined4)uVar23;
      iVar13 = __aeabi_dcmpgt(uStack00000018,uStack0000001c,(int)uVar24,uVar12);
      if (iVar13 == 0) break;
      uVar23 = __adddf3(uStack00000028,uStack0000002c,DAT_0026e008,DAT_0026e00c);
      uVar24 = __muldf3((int)uVar24,uVar12,DAT_0026e010,DAT_0026e014);
    }
    uVar23 = __muldf3(uStack00000018,uStack0000001c,uStack00000028,uStack0000002c);
    uVar23 = __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_0026e018,DAT_0026e01c);
    uVar23 = __adddf3(uStack00000030,uStack00000034,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
  }
  uStack00000034 = (uint)((ulonglong)uVar23 >> 0x20);
  uStack00000030 = (uint)uVar23;
  iVar13 = __aeabi_dcmpgt(uStack00000018,uStack0000001c,DAT_0026e020,DAT_0026e024);
  if ((iVar13 != 0) &&
     (iVar13 = __aeabi_dcmple(uStack00000030,uStack00000034,in_stack_00000118[6],
                              in_stack_00000118[7]), iVar13 != 0)) {
    lVar26 = FUN_0025d3f8(*(undefined4 *)(in_stack_00000054 + 4),in_stack_00000058);
    iVar13 = *(int *)(in_stack_00000054 + 0x20);
    iVar14 = *(int *)(in_stack_00000054 + 0x18);
    uStack0000004c = uStack00000040;
    while( true ) {
      uStack0000001c = (uint)((ulonglong)uVar22 >> 0x20);
      uStack00000018 = (uint)uVar22;
      if ((iVar14 == 0) ||
         (iVar7 = __aeabi_dcmpgt(uStack00000018,uStack0000001c,DAT_0026e020,DAT_0026e024),
         iVar7 == 0)) break;
      if ((-1 < (int)((uint)*(byte *)(iVar13 + 0x12) << 0x1e)) &&
         (lVar26 == CONCAT44(*(uint *)(iVar13 + 0x24) & in_stack_00000098,
                             in_stack_00000094 & *(uint *)(iVar13 + 0x20)))) {
        uVar3 = *(ushort *)(iVar13 + 0x10);
        if ((uVar3 & 0x83) == 0) {
          if ((uVar3 & 0x3c) == 0) {
            if (uVar3 != 0x800) {
              uVar22 = __muldf3(uStack00000018,uStack0000001c,DAT_0026e028,DAT_0026e02c);
            }
          }
          else {
            uVar12 = DAT_0026e018;
            uVar9 = DAT_0026e01c;
            if (iVar8 == 0) goto LAB_0026de0a;
            iVar8 = iVar8 + -1;
          }
        }
        else {
          uVar12 = DAT_0026e010;
          uVar9 = DAT_0026e014;
          if (uStack0000004c == 0) {
LAB_0026de0a:
            uVar22 = __divdf3(uStack00000018,uStack0000001c,uVar12,uVar9);
          }
          else {
            uStack0000004c = uStack0000004c - 1;
          }
        }
      }
      iVar14 = iVar14 + -1;
      iVar13 = iVar13 + 0x28;
    }
    iVar8 = __aeabi_dcmplt(uStack00000018,uStack0000001c,DAT_0026e020,DAT_0026e024);
    if (iVar8 != 0) {
      uVar22 = CONCAT44(DAT_0026e024,DAT_0026e020);
    }
  }
  uStack0000001c = (uint)((ulonglong)uVar22 >> 0x20);
  uStack00000018 = (uint)uVar22;
  if ((uStack00000020 != 0) || (in_stack_00000050 == 0)) {
    uVar17 = in_stack_00000118[6];
    uVar19 = in_stack_00000118[7];
    iVar8 = __aeabi_dcmplt(uStack00000030,uStack00000034,uVar17,uVar19);
    if ((iVar8 != 0) ||
       ((iVar8 = __aeabi_dcmple(uStack00000030,uStack00000034,uVar17,uVar19), iVar8 != 0 &&
        (iVar8 = __aeabi_dcmplt(uStack00000018,uStack0000001c,in_stack_00000118[2],
                                in_stack_00000118[3]), iVar8 != 0)))) {
      in_stack_00000118[6] = uStack00000030;
      in_stack_00000118[7] = uStack00000034;
      in_stack_00000118[8] = uStack00000038;
      in_stack_00000118[9] = uStack0000003c;
      *(undefined8 *)(in_stack_00000118 + 2) = uVar22;
      *in_stack_00000118 = in_stack_0000007c & uStack00000020;
      in_stack_00000118[1] = uStack00000040;
      in_stack_00000118[4] = in_stack_00000050;
    }
  }
  if ((*(int *)(in_stack_00000048 + 0x3c) == 0) &&
     (in_stack_00000078 = in_stack_00000084, unaff_r5[5] != 0)) {
    FUN_0026d654();
  }
  if ((in_stack_00000110 == (int *)0x0) && (*(int *)(*in_stack_0000005c + 0x18) << 7 < 0)) {
    *in_stack_00000118 = *in_stack_00000118 | 0x2000000;
  }
  FUN_0026e168(in_stack_0000005c,in_stack_00000054,in_stack_00000048);
  iVar8 = in_stack_0000005c[0x6e];
  iVar14 = in_stack_0000005c[0x6f];
  iVar13 = __aeabi_dcmple(iVar8,iVar14,DAT_0026e008,DAT_0026e00c);
  uVar22 = CONCAT44(DAT_0026e014,DAT_0026e010);
  if ((((iVar13 == 0) && (*(int *)(*in_stack_0000005c + 0x18) << 4 < 0)) &&
      ((*in_stack_00000118 & DAT_0026e034) == 0)) &&
     ((*(char *)(in_stack_00000048 + 0x1d) == '\0' && (*(char *)(in_stack_00000048 + 0x1e) == '\0'))
     )) {
    iVar13 = *(int *)(in_stack_00000048 + 0xc);
    uVar23 = __floatunsidf(*(undefined4 *)(iVar13 + 0x18));
    uStack00000020 = DAT_0026e008;
    uStack00000024 = DAT_0026e00c;
    while( true ) {
      uVar12 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uStack0000003c = (uint)((ulonglong)uVar23 >> 0x20);
      uStack00000038 = (uint)uVar23;
      iVar7 = __aeabi_dcmpgt(uStack00000038,uStack0000003c,(int)uVar22,uVar12);
      _uStack00000038 = uVar23;
      if (iVar7 == 0) break;
      uVar23 = __adddf3(uStack00000020,uStack00000024,DAT_0026e008,DAT_0026e00c);
      uStack00000024 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uStack00000020 = (uint)uVar23;
      uVar22 = __muldf3((int)uVar22,uVar12,DAT_0026e010,DAT_0026e014);
      uVar23 = _uStack00000038;
    }
    uVar22 = __adddf3(uStack00000020,uStack00000024,uStack00000020,uStack00000024);
    uVar23 = __divdf3(uStack00000038,uStack0000003c,iVar8,iVar14);
    uVar23 = __adddf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_0026e008,DAT_0026e00c);
    uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                      (int)((ulonglong)uVar23 >> 0x20));
    iVar8 = __aeabi_dcmpge((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),in_stack_00000118[6],
                           in_stack_00000118[7]);
    if (iVar8 == 0) {
      puVar15 = *(undefined4 **)(in_stack_00000054 + 0x20);
      puVar20 = puVar15 + *(int *)(in_stack_00000054 + 0x18) * 10;
      for (; puVar15 < puVar20; puVar15 = puVar15 + 10) {
        if (((puVar15[2] == *(int *)(in_stack_00000048 + 0x20)) && (*(short *)(puVar15 + 4) == 2))
           && ((puVar15[7] & in_stack_00000070) == 0 && (puVar15[6] & in_stack_0000006c) == 0)) {
          bVar2 = *(byte *)(*(int *)(iVar13 + 0xc) + puVar15[3] * 0x18 + 0x16);
          iVar8 = FUN_0025cd42(*puVar15);
          if (iVar8 == 0x61) {
            bVar21 = bVar2 == 0x61;
LAB_0026e084:
            if (!bVar21) goto LAB_0026e088;
          }
          else if (iVar8 != 0x62) {
            bVar21 = 0x62 < bVar2;
            goto LAB_0026e084;
          }
          *(undefined8 *)(in_stack_00000118 + 6) = uVar22;
          uVar22 = __adddf3(uStack00000020,uStack00000024,DAT_0026e0f0,DAT_0026e0f4);
          *(undefined8 *)(in_stack_00000118 + 2) = uVar22;
          *in_stack_00000118 = 0x20000000;
          uVar17 = puVar15[7];
          in_stack_00000118[8] = puVar15[6];
          in_stack_00000118[9] = uVar17;
          break;
        }
LAB_0026e088:
      }
    }
  }
  *in_stack_00000118 = *in_stack_00000118 | in_stack_00000078;
  return;
LAB_0026d9da:
  if (iVar14 < *in_stack_00000110) goto LAB_0026d9be;
  iVar13 = uStack00000040 << 2;
  uVar19 = uStack00000040;
  while (((int)uVar19 < (int)uVar17 &&
         (piVar6 = (int *)(unaff_r5[1] + iVar13), iVar13 = iVar13 + 4,
         *(char *)(*(int *)(unaff_r5[3] + 0xc) + *piVar6 * 0x18 + 0x14) != '\0'))) {
    uVar19 = uVar19 + 1;
  }
  if (uVar19 == uVar17) goto LAB_0026d9fe;
  goto LAB_0026da16;
LAB_0026d9be:
  iVar14 = iVar14 + 1;
  uVar23 = FUN_0025d4dc(uVar12,*(undefined4 *)(in_stack_00000110[2] + iVar13));
  iVar13 = iVar13 + 0x14;
  if (((uint)((ulonglong)uVar23 >> 0x20) & ~(uint)((ulonglong)uVar22 >> 0x20)) != 0 ||
      ((uint)uVar23 & ~(uint)uVar22) != 0) goto LAB_0026da16;
  goto LAB_0026d9da;
}


