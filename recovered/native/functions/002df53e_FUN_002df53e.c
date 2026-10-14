/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002df53e FUN_002df53e */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002df5b6) */
/* WARNING: Removing unreachable block (ram,0x002df5b6) */

void FUN_002df53e(void)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  char *pcVar16;
  undefined1 *puVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  undefined1 *puVar23;
  int unaff_r4;
  uint *unaff_r5;
  byte *pbVar24;
  uint uVar25;
  undefined1 *puVar26;
  undefined1 uStack0000000c;
  byte *pbStack00000020;
  uint uStack00000024;
  uint in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  
  if (((DAT_002df674 & *(uint *)(unaff_r4 + 0x13c)) == 0x2000) &&
     (((-1 < (int)(*(uint *)(unaff_r4 + 0x13c) << 0x18) ||
       ((*(short *)(unaff_r4 + 0x210) == 0 &&
        (-1 < (int)((uint)*(byte *)(unaff_r4 + DAT_002df678) << 0x1d))))) &&
      (*(char *)(unaff_r4 + DAT_002df678) != '\x03')))) {
    iVar11 = *(int *)(unaff_r4 + 0x250);
    iVar21 = *(int *)(unaff_r4 + 0x254);
    pbVar22 = *(byte **)(unaff_r4 + 0x1e4);
    uVar15 = *(uint *)(unaff_r4 + 0x248);
    uVar13 = *unaff_r5;
    bVar19 = *(byte *)((int)unaff_r5 + 9);
    if (((iVar11 != 0) && (bVar19 < 9)) || ((iVar21 != 0 && (bVar19 == 0x10)))) {
      pbVar24 = pbVar22 + 1;
      switch((char)unaff_r5[2]) {
      case '\0':
        if (bVar19 == 2) {
          pbStack00000020 = pbVar22;
          for (uStack00000024 = 0; pbStack00000020 = pbStack00000020 + 1, uStack00000024 < uVar13;
              uStack00000024 = uStack00000024 + 4) {
            uVar10 = (uint)*pbStack00000020;
            uVar18 = uVar10 & 0xc0;
            uVar20 = uVar10 & 0x30;
            uVar25 = uVar10 & 0xc;
            uVar10 = uVar10 & 3;
            *pbStack00000020 =
                 *(byte *)(iVar11 + (uVar10 << 2 | uVar10 << 4 | uVar10 << 6 | uVar10)) >> 6 |
                 *(byte *)(iVar11 + ((int)uVar18 >> 4 | (int)uVar18 >> 2 | uVar18 | (int)uVar18 >> 6
                                    )) & 0xc0 |
                 *(byte *)(iVar11 + ((int)uVar20 >> 2 | uVar20 << 2 | uVar20 | (int)uVar20 >> 4)) >>
                 2 & 0x30 |
                 *(byte *)(iVar11 + (uVar25 << 2 | uVar25 << 4 | uVar25 | (int)uVar25 >> 2)) >> 4 &
                 0xc;
          }
        }
        cVar4 = *(char *)((int)unaff_r5 + 9);
        if (cVar4 == '\x04') {
          for (uVar15 = 0; pbVar22 = pbVar22 + 1, uVar15 < uVar13; uVar15 = uVar15 + 2) {
            uVar18 = *pbVar22 & 0xf0;
            uVar25 = *pbVar22 & 0xf;
            *pbVar22 = *(byte *)(iVar11 + (uVar18 | (int)uVar18 >> 4)) & 0xf0 |
                       *(byte *)(iVar11 + (uVar25 | uVar25 << 4)) >> 4;
          }
        }
        else if (cVar4 == '\b') {
          for (uVar15 = 0; pbVar22 = pbVar22 + 1, uVar15 != uVar13; uVar15 = uVar15 + 1) {
            *pbVar22 = *(byte *)(iVar11 + (uint)*pbVar22);
          }
        }
        else if (cVar4 == '\x10') {
          for (uVar18 = 0; uVar18 != uVar13; uVar18 = uVar18 + 1) {
            uVar6 = *(undefined2 *)
                     ((uint)*pbVar24 * 2 +
                     *(int *)(((int)(uint)pbVar24[1] >> (uVar15 & 0xff)) * 4 + iVar21));
            *pbVar24 = (byte)((ushort)uVar6 >> 8);
            pbVar24[1] = (byte)uVar6;
            pbVar24 = pbVar24 + 2;
          }
        }
        break;
      case '\x02':
        if (bVar19 == 8) {
          for (uVar15 = 0; uVar15 != uVar13; uVar15 = uVar15 + 1) {
            *pbVar24 = *(byte *)(iVar11 + (uint)*pbVar24);
            pbVar24[1] = *(byte *)(iVar11 + (uint)pbVar24[1]);
            pbVar24[2] = *(byte *)(iVar11 + (uint)pbVar24[2]);
            pbVar24 = pbVar24 + 3;
          }
        }
        else {
          for (uVar18 = 0; uVar18 != uVar13; uVar18 = uVar18 + 1) {
            uVar6 = *(undefined2 *)
                     ((uint)*pbVar24 * 2 +
                     *(int *)(((int)(uint)pbVar24[1] >> (uVar15 & 0xff)) * 4 + iVar21));
            *pbVar24 = (byte)((ushort)uVar6 >> 8);
            pbVar24[1] = (byte)uVar6;
            uVar6 = *(undefined2 *)
                     ((uint)pbVar24[2] * 2 +
                     *(int *)(((int)(uint)pbVar24[3] >> (uVar15 & 0xff)) * 4 + iVar21));
            pbVar24[2] = (byte)((ushort)uVar6 >> 8);
            pbVar24[3] = (byte)uVar6;
            uVar6 = *(undefined2 *)
                     ((uint)pbVar24[4] * 2 +
                     *(int *)(((int)(uint)pbVar24[5] >> (uVar15 & 0xff)) * 4 + iVar21));
            pbVar24[4] = (byte)((ushort)uVar6 >> 8);
            pbVar24[5] = (byte)uVar6;
            pbVar24 = pbVar24 + 6;
          }
        }
        break;
      case '\x04':
        uVar18 = 0;
        if (bVar19 == 8) {
          for (; uVar18 != uVar13; uVar18 = uVar18 + 1) {
            pbVar22[1] = *(byte *)(iVar11 + (uint)pbVar22[1]);
            pbVar22 = pbVar22 + 2;
          }
        }
        else {
          for (; uVar18 != uVar13; uVar18 = uVar18 + 1) {
            uVar6 = *(undefined2 *)
                     ((uint)*pbVar24 * 2 +
                     *(int *)(((int)(uint)pbVar24[1] >> (uVar15 & 0xff)) * 4 + iVar21));
            *pbVar24 = (byte)((ushort)uVar6 >> 8);
            pbVar24[1] = (byte)uVar6;
            pbVar24 = pbVar24 + 4;
          }
        }
        break;
      case '\x06':
        if (bVar19 == 8) {
          for (uVar15 = 0; uVar15 != uVar13; uVar15 = uVar15 + 1) {
            *pbVar24 = *(byte *)(iVar11 + (uint)*pbVar24);
            pbVar24[1] = *(byte *)(iVar11 + (uint)pbVar24[1]);
            pbVar24[2] = *(byte *)(iVar11 + (uint)pbVar24[2]);
            pbVar24 = pbVar24 + 4;
          }
        }
        else {
          for (uVar18 = 0; uVar18 != uVar13; uVar18 = uVar18 + 1) {
            uVar6 = *(undefined2 *)
                     ((uint)*pbVar24 * 2 +
                     *(int *)(((int)(uint)pbVar24[1] >> (uVar15 & 0xff)) * 4 + iVar21));
            *pbVar24 = (byte)((ushort)uVar6 >> 8);
            pbVar24[1] = (byte)uVar6;
            uVar6 = *(undefined2 *)
                     ((uint)pbVar24[2] * 2 +
                     *(int *)(((int)(uint)pbVar24[3] >> (uVar15 & 0xff)) * 4 + iVar21));
            pbVar24[2] = (byte)((ushort)uVar6 >> 8);
            pbVar24[3] = (byte)uVar6;
            uVar6 = *(undefined2 *)
                     ((uint)pbVar24[4] * 2 +
                     *(int *)(((int)(uint)pbVar24[5] >> (uVar15 & 0xff)) * 4 + iVar21));
            pbVar24[4] = (byte)((ushort)uVar6 >> 8);
            pbVar24[5] = (byte)uVar6;
            pbVar24 = pbVar24 + 8;
          }
        }
      }
    }
  }
  if (((*(uint *)(unaff_r4 + 0x13c) & DAT_002dfb54) == DAT_002dfb54) &&
     (((char)unaff_r5[2] == '\x04' || ((char)unaff_r5[2] == '\x06')))) {
    png_do_strip_channel(unaff_r5,*(int *)(unaff_r4 + 0x1e4) + 1,0);
  }
  if (*(int *)(unaff_r4 + 0x13c) << 8 < 0) {
    bVar19 = (byte)unaff_r5[2];
    iVar11 = 4;
    if ((bVar19 & 4) != 0) {
      uVar15 = *unaff_r5;
      iVar21 = *(int *)(unaff_r4 + 0x1e4) + 1;
      if (*(char *)((int)unaff_r5 + 9) == '\b') {
        iVar11 = *(int *)(unaff_r4 + 600);
        if (iVar11 != 0) {
          iVar8 = 2;
          if ((bVar19 & 2) != 0) {
            iVar8 = 4;
          }
          pbVar22 = (byte *)(iVar21 + iVar8 + -1);
          for (; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pbVar22 = *(byte *)(iVar11 + (uint)*pbVar22);
            pbVar22 = pbVar22 + iVar8;
          }
          goto LAB_002df8e8;
        }
      }
      else if (*(char *)((int)unaff_r5 + 9) == '\x10') {
        iVar8 = *(int *)(unaff_r4 + 0x260);
        uVar13 = *(uint *)(unaff_r4 + 0x248);
        if (iVar8 != 0) {
          if ((int)((uint)bVar19 << 0x1e) < 0) {
            iVar11 = 8;
          }
          pbVar22 = (byte *)(iVar11 + -2 + iVar21);
          for (; uVar15 != 0; uVar15 = uVar15 - 1) {
            uVar6 = *(undefined2 *)
                     ((uint)*pbVar22 * 2 +
                     *(int *)(((int)(uint)pbVar22[1] >> (uVar13 & 0xff)) * 4 + iVar8));
            *pbVar22 = (byte)((ushort)uVar6 >> 8);
            pbVar22[1] = (byte)uVar6;
            pbVar22 = pbVar22 + iVar11;
          }
          goto LAB_002df8e8;
        }
      }
      png_warning(unaff_r4,DAT_002dfb58 + 0x2df8e6);
    }
  }
LAB_002df8e8:
  if ((*(int *)(unaff_r4 + 0x13c) << 5 < 0) &&
     (pcVar16 = *(char **)(unaff_r4 + 0x1e4), *(char *)((int)unaff_r5 + 9) == '\x10')) {
    pbVar22 = (byte *)(pcVar16 + 1);
    pbVar24 = pbVar22 + unaff_r5[1];
    for (; pcVar16 = pcVar16 + 1, pbVar22 < pbVar24; pbVar22 = pbVar22 + 2) {
      *pcVar16 = *pbVar22 +
                 (char)(((uint)pbVar22[1] - (uint)*pbVar22) * 0xffff + DAT_002dfb5c >> 0x18);
    }
    *(undefined1 *)((int)unaff_r5 + 9) = 8;
    *(byte *)((int)unaff_r5 + 0xb) = *(byte *)((int)unaff_r5 + 10) << 3;
    unaff_r5[1] = *unaff_r5 * (uint)*(byte *)((int)unaff_r5 + 10);
  }
  if ((*(int *)(unaff_r4 + 0x13c) << 0x15 < 0) &&
     (puVar17 = *(undefined1 **)(unaff_r4 + 0x1e4), *(char *)((int)unaff_r5 + 9) == '\x10')) {
    puVar23 = puVar17 + 1;
    puVar12 = puVar23 + unaff_r5[1];
    for (; puVar17 = puVar17 + 1, puVar23 < puVar12; puVar23 = puVar23 + 2) {
      *puVar17 = *puVar23;
    }
    *(undefined1 *)((int)unaff_r5 + 9) = 8;
    *(byte *)((int)unaff_r5 + 0xb) = *(byte *)((int)unaff_r5 + 10) << 3;
    unaff_r5[1] = *unaff_r5 * (uint)*(byte *)((int)unaff_r5 + 10);
  }
  if (*(int *)(unaff_r4 + 0x13c) << 0x19 < 0) {
    pbVar22 = *(byte **)(unaff_r4 + 0x1e4);
    iVar21 = *(int *)(unaff_r4 + 0x2c8);
    iVar11 = *(int *)(unaff_r4 + 0x2cc);
    uVar15 = *unaff_r5;
    if (*(char *)((int)unaff_r5 + 9) == '\b') {
      cVar4 = (char)unaff_r5[2];
      pbVar24 = pbVar22 + 1;
      if ((iVar21 == 0) || (uVar13 = 0, cVar4 != '\x02')) {
        if ((cVar4 != '\x06') || (uVar13 = 0, iVar21 == 0)) {
          if ((iVar11 != 0) && (cVar4 == '\x03')) {
            for (uVar13 = 0; pbVar22 = pbVar22 + 1, uVar13 != uVar15; uVar13 = uVar13 + 1) {
              *pbVar22 = *(byte *)(iVar11 + (uint)*pbVar22);
            }
          }
          goto LAB_002dfa70;
        }
        for (; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          bVar19 = *pbVar24;
          pbVar1 = pbVar24 + 1;
          pbVar2 = pbVar24 + 2;
          pbVar24 = pbVar24 + 4;
          pbVar22[uVar13 + 1] =
               *(byte *)(iVar21 + (((int)(uint)bVar19 >> 3) << 10 | ((int)(uint)*pbVar1 >> 3) << 5 |
                                  (int)(uint)*pbVar2 >> 3));
        }
      }
      else {
        for (; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          bVar19 = *pbVar24;
          pbVar1 = pbVar24 + 1;
          pbVar2 = pbVar24 + 2;
          pbVar24 = pbVar24 + 3;
          pbVar22[uVar13 + 1] =
               *(byte *)(iVar21 + (((int)(uint)bVar19 >> 3) << 10 | ((int)(uint)*pbVar1 >> 3) << 5 |
                                  (int)(uint)*pbVar2 >> 3));
        }
      }
      *(undefined1 *)(unaff_r5 + 2) = 3;
      *(undefined1 *)((int)unaff_r5 + 10) = 1;
      bVar19 = *(byte *)((int)unaff_r5 + 9);
      *(byte *)((int)unaff_r5 + 0xb) = bVar19;
      if (bVar19 < 8) {
        uVar13 = bVar19 * uVar13 + 7 >> 3;
      }
      else {
        uVar13 = (bVar19 >> 3) * uVar13;
      }
      unaff_r5[1] = uVar13;
    }
LAB_002dfa70:
    if (unaff_r5[1] == 0) {
      FUN_002de382(uVar15,DAT_002dfb60 + 0x2dfa7c);
    }
  }
  if (((*(int *)(unaff_r4 + 0x13c) << 0x16 < 0) && (*(char *)((int)unaff_r5 + 9) == '\b')) &&
     ((char)unaff_r5[2] != '\x03')) {
    puVar17 = (undefined1 *)(*(int *)(unaff_r4 + 0x1e4) + 1 + unaff_r5[1]);
    puVar12 = puVar17 + unaff_r5[1];
    while (puVar17 < puVar12) {
      puVar17 = puVar17 + -1;
      uVar14 = *puVar17;
      puVar23 = puVar12 + -1;
      puVar12 = puVar12 + -2;
      *puVar23 = uVar14;
      *puVar12 = uVar14;
    }
    unaff_r5[1] = unaff_r5[1] << 1;
    *(undefined1 *)((int)unaff_r5 + 9) = 0x10;
    *(char *)((int)unaff_r5 + 0xb) = *(char *)((int)unaff_r5 + 10) << 4;
  }
  if (((*(uint *)(unaff_r4 + 0x13c) & 0x4000) != 0) && (*(int *)(unaff_r4 + 0x134) << 0x14 < 0)) {
    FUN_002dc74c(unaff_r5,*(int *)(unaff_r4 + 0x1e4) + 1);
  }
  if (*(int *)(unaff_r4 + 0x13c) << 0x1a < 0) {
    png_do_invert(unaff_r5,*(int *)(unaff_r4 + 0x1e4) + 1);
  }
  if (*(int *)(unaff_r4 + 0x13c) << 0xc < 0) {
    uVar15 = *unaff_r5;
    iVar11 = *(int *)(unaff_r4 + 0x1e4) + 1;
    if ((char)unaff_r5[2] == '\x06') {
      iVar11 = iVar11 + unaff_r5[1];
      uVar13 = 0;
      if (*(char *)((int)unaff_r5 + 9) == '\b') {
        for (; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          pbVar22 = (byte *)(iVar11 + -1);
          iVar11 = iVar11 + -4;
          *pbVar22 = ~*pbVar22;
        }
      }
      else {
        for (; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          *(byte *)(iVar11 + -1) = ~*(byte *)(iVar11 + -1);
          pbVar22 = (byte *)(iVar11 + -2);
          iVar11 = iVar11 + -8;
          *pbVar22 = ~*pbVar22;
        }
      }
    }
    else if ((char)unaff_r5[2] == '\x04') {
      iVar11 = iVar11 + unaff_r5[1];
      uVar13 = 0;
      if (*(char *)((int)unaff_r5 + 9) == '\b') {
        for (; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          pbVar22 = (byte *)(iVar11 + -1);
          iVar11 = iVar11 + -2;
          *pbVar22 = ~*pbVar22;
        }
      }
      else {
        for (; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          *(byte *)(iVar11 + -1) = ~*(byte *)(iVar11 + -1);
          pbVar22 = (byte *)(iVar11 + -2);
          iVar11 = iVar11 + -4;
          *pbVar22 = ~*pbVar22;
        }
      }
    }
  }
  if (*(int *)(unaff_r4 + 0x13c) << 0x1c < 0) {
    uVar15 = (uint)(byte)unaff_r5[2];
    pbVar22 = *(byte **)(unaff_r4 + 0x1e4);
    if (uVar15 != 3) {
      uVar13 = (uint)*(byte *)((int)unaff_r5 + 9);
      if ((int)(uVar15 << 0x1e) < 0) {
        in_stack_00000030 = uVar13 - *(byte *)(unaff_r4 + DAT_002dfed8);
        in_stack_00000034 = uVar13 - *(byte *)(unaff_r4 + DAT_002dfed8 + 1);
        in_stack_00000038 = uVar13 - *(byte *)(unaff_r4 + DAT_002dfed8 + 2);
        iVar11 = 3;
      }
      else {
        in_stack_00000030 = uVar13 - *(byte *)(unaff_r4 + DAT_002dfed8 + 3);
        iVar11 = 1;
      }
      iVar21 = iVar11;
      if ((int)(uVar15 << 0x1d) < 0) {
        iVar21 = iVar11 + 1;
        (&stack0x00000030)[iVar11] = uVar13 - *(byte *)(unaff_r4 + DAT_002dfed8 + 4);
      }
      bVar7 = false;
      piVar9 = (int *)&stack0x00000030;
      iVar11 = 0;
      do {
        if ((*piVar9 < 1) || ((int)uVar13 <= *piVar9)) {
          *piVar9 = 0;
        }
        else {
          bVar7 = true;
        }
        iVar11 = iVar11 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar11 < iVar21);
      if (bVar7) {
        pbVar24 = pbVar22 + 1;
        if (uVar13 == 4) {
          uVar15 = unaff_r5[1];
          iVar11 = 0xf >> (in_stack_00000030 & 0xff);
          while (pbVar22 = pbVar22 + 1, pbVar22 < pbVar24 + uVar15) {
            *pbVar22 = (byte)((int)(uint)*pbVar22 >> (in_stack_00000030 & 0xff)) &
                       ((byte)iVar11 | (byte)(iVar11 << 4));
          }
        }
        else if (uVar13 < 5) {
          if (uVar13 == 2) {
            uVar15 = unaff_r5[1];
            while (pbVar22 = pbVar22 + 1, pbVar22 < pbVar24 + uVar15) {
              *pbVar22 = *pbVar22 >> 1 & 0x55;
            }
          }
        }
        else if (uVar13 == 8) {
          iVar11 = 0;
          pbVar22 = pbVar24 + unaff_r5[1];
          for (; pbVar24 < pbVar22; pbVar24 = pbVar24 + 1) {
            puVar3 = &stack0x00000030 + iVar11;
            iVar11 = iVar11 + 1;
            if (iVar21 <= iVar11) {
              iVar11 = 0;
            }
            *pbVar24 = (byte)((int)(uint)*pbVar24 >> (*puVar3 & 0xff));
          }
        }
        else if (uVar13 == 0x10) {
          iVar11 = 0;
          pbVar22 = pbVar24 + unaff_r5[1];
          for (; pbVar24 < pbVar22; pbVar24 = pbVar24 + 2) {
            puVar3 = &stack0x00000030 + iVar11;
            iVar11 = iVar11 + 1;
            iVar8 = (int)((uint)*pbVar24 * 0x100 + (uint)pbVar24[1]) >> (*puVar3 & 0xff);
            if (iVar21 <= iVar11) {
              iVar11 = 0;
            }
            *pbVar24 = (byte)((uint)iVar8 >> 8);
            pbVar24[1] = (byte)iVar8;
          }
        }
      }
    }
  }
  if (*(int *)(unaff_r4 + 0x13c) << 0x1d < 0) {
    bVar19 = *(byte *)((int)unaff_r5 + 9);
    if (bVar19 < 8) {
      iVar11 = *(int *)(unaff_r4 + 0x1e4) + 1;
      uVar15 = *unaff_r5;
      if (bVar19 == 2) {
        pbVar24 = (byte *)(iVar11 + (uVar15 - 1 >> 2));
        pbVar22 = (byte *)(iVar11 + (uVar15 - 1));
        uVar18 = (~(uVar15 + 3) & 3) << 1;
        for (uVar13 = 0; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          *pbVar22 = (byte)((int)(uint)*pbVar24 >> (uVar18 & 0xff)) & 3;
          if (uVar18 == 6) {
            pbVar24 = pbVar24 + -1;
            uVar18 = 0;
          }
          else {
            uVar18 = uVar18 + 2;
          }
          pbVar22 = pbVar22 + -1;
        }
      }
      else if (bVar19 == 4) {
        pbVar24 = (byte *)(iVar11 + (uVar15 - 1 >> 1));
        pbVar22 = (byte *)(iVar11 + (uVar15 - 1));
        iVar11 = (uint)((uVar15 + 1 & 1) == 0) * 4;
        for (uVar13 = 0; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          *pbVar22 = (byte)((int)(uint)*pbVar24 >> iVar11) & 0xf;
          if (iVar11 == 4) {
            pbVar24 = pbVar24 + -1;
            iVar11 = 0;
          }
          else {
            iVar11 = 4;
          }
          pbVar22 = pbVar22 + -1;
        }
      }
      else if (bVar19 == 1) {
        pbVar24 = (byte *)(iVar11 + (uVar15 - 1 >> 3));
        pbVar22 = (byte *)(iVar11 + (uVar15 - 1));
        uVar18 = ~(uVar15 + 7) & 7;
        for (uVar13 = 0; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          *pbVar22 = (byte)((int)(uint)*pbVar24 >> (uVar18 & 0xff)) & 1;
          if (uVar18 == 7) {
            pbVar24 = pbVar24 + -1;
            uVar18 = 0;
          }
          else {
            uVar18 = uVar18 + 1;
          }
          pbVar22 = pbVar22 + -1;
        }
      }
      *(undefined1 *)((int)unaff_r5 + 9) = 8;
      *(byte *)((int)unaff_r5 + 0xb) = *(byte *)((int)unaff_r5 + 10) << 3;
      unaff_r5[1] = *(byte *)((int)unaff_r5 + 10) * uVar15;
    }
  }
  if (((char)unaff_r5[2] == '\x03') && (-1 < *(int *)(unaff_r4 + 0x20c))) {
    png_do_check_palette_indexes(unaff_r4,unaff_r5);
  }
  if (*(int *)(unaff_r4 + 0x13c) << 0x1f < 0) {
    png_do_bgr(unaff_r5,*(int *)(unaff_r4 + 0x1e4) + 1);
  }
  if (*(int *)(unaff_r4 + 0x13c) << 0xf < 0) {
    png_do_packswap(unaff_r5,*(int *)(unaff_r4 + 0x1e4) + 1);
  }
  if (-1 < *(int *)(unaff_r4 + 0x13c) << 0x10) goto LAB_002e0098;
  uVar15 = *(uint *)(unaff_r4 + 0x138);
  iVar11 = *(int *)(unaff_r4 + 0x1e4) + 1;
  uVar13 = *unaff_r5;
  uVar14 = (undefined1)*(undefined2 *)(unaff_r4 + 0x220);
  uStack0000000c = (undefined1)((ushort)*(undefined2 *)(unaff_r4 + 0x220) >> 8);
  if ((char)unaff_r5[2] == '\0') {
    if (*(char *)((int)unaff_r5 + 9) == '\b') {
      puVar17 = (undefined1 *)(iVar11 + uVar13);
      if ((uVar15 & 0x80) != 0) {
        puVar12 = puVar17 + uVar13;
        for (uVar15 = 1; puVar12[-1] = uVar14, uVar15 < uVar13; uVar15 = uVar15 + 1) {
          puVar17 = puVar17 + -1;
          puVar12 = puVar12 + -2;
          *puVar12 = *puVar17;
        }
        *(undefined1 *)((int)unaff_r5 + 10) = 2;
        *(undefined1 *)((int)unaff_r5 + 0xb) = 0x10;
        uVar13 = uVar13 << 1;
        goto LAB_002dff64;
      }
      puVar12 = puVar17 + uVar13;
      for (uVar15 = 0; uVar15 != uVar13; uVar15 = uVar15 + 1) {
        puVar17 = puVar17 + -1;
        puVar23 = puVar12 + -1;
        puVar12 = puVar12 + -2;
        *puVar23 = *puVar17;
        *puVar12 = uVar14;
      }
      *(undefined1 *)((int)unaff_r5 + 10) = 2;
      *(undefined1 *)((int)unaff_r5 + 0xb) = 0x10;
      uVar15 = uVar15 << 1;
    }
    else {
      if (*(char *)((int)unaff_r5 + 9) != '\x10') goto LAB_002e0098;
      puVar17 = (undefined1 *)(iVar11 + uVar13 * 2);
      puVar12 = puVar17 + uVar13 * 2;
      if ((uVar15 & 0x80) != 0) {
        uVar15 = 1;
        while( true ) {
          if (uVar13 <= uVar15) break;
          uVar15 = uVar15 + 1;
          puVar12[-1] = uStack0000000c;
          puVar12[-2] = uVar14;
          puVar23 = puVar17 + -1;
          puVar17 = puVar17 + -2;
          puVar12[-3] = *puVar23;
          puVar12 = puVar12 + -4;
          *puVar12 = *puVar17;
        }
        puVar12[-1] = uStack0000000c;
        puVar12[-2] = uVar14;
        uVar14 = 2;
        goto LAB_002dff5c;
      }
      for (uVar15 = 0; uVar15 != uVar13; uVar15 = uVar15 + 1) {
        puVar23 = puVar17 + -1;
        puVar17 = puVar17 + -2;
        puVar12[-1] = *puVar23;
        puVar12[-2] = *puVar17;
        puVar23 = puVar12 + -3;
        puVar12 = puVar12 + -4;
        *puVar23 = uStack0000000c;
        *puVar12 = uVar14;
      }
      uVar14 = 2;
LAB_002dff9a:
      *(undefined1 *)((int)unaff_r5 + 10) = uVar14;
      *(undefined1 *)((int)unaff_r5 + 0xb) = 0x20;
      uVar15 = uVar15 << 2;
    }
LAB_002e0096:
    unaff_r5[1] = uVar15;
  }
  else {
    if ((char)unaff_r5[2] != '\x02') goto LAB_002e0098;
    if (*(char *)((int)unaff_r5 + 9) == '\b') {
      puVar17 = (undefined1 *)(iVar11 + uVar13 * 3);
      puVar12 = puVar17 + uVar13;
      if ((uVar15 & 0x80) == 0) {
        for (uVar15 = 0; uVar15 != uVar13; uVar15 = uVar15 + 1) {
          puVar12[-1] = puVar17[-1];
          puVar23 = puVar17 + -2;
          puVar17 = puVar17 + -3;
          puVar12[-2] = *puVar23;
          puVar23 = puVar12 + -3;
          puVar12 = puVar12 + -4;
          *puVar23 = *puVar17;
          *puVar12 = uVar14;
        }
        uVar14 = 4;
        goto LAB_002dff9a;
      }
      for (uVar15 = 1; uVar15 < uVar13; uVar15 = uVar15 + 1) {
        puVar12[-1] = uVar14;
        puVar12[-2] = puVar17[-1];
        puVar23 = puVar17 + -2;
        puVar17 = puVar17 + -3;
        puVar12[-3] = *puVar23;
        puVar12 = puVar12 + -4;
        *puVar12 = *puVar17;
      }
      puVar12[-1] = uVar14;
      uVar14 = 4;
LAB_002dff5c:
      *(undefined1 *)((int)unaff_r5 + 10) = uVar14;
      *(undefined1 *)((int)unaff_r5 + 0xb) = 0x20;
      uVar13 = uVar13 << 2;
    }
    else {
      if (*(char *)((int)unaff_r5 + 9) != '\x10') goto LAB_002e0098;
      puVar17 = (undefined1 *)(iVar11 + uVar13 * 6);
      puVar12 = puVar17 + uVar13 * 2;
      if ((uVar15 & 0x80) == 0) {
        for (uVar15 = 0; uVar15 != uVar13; uVar15 = uVar15 + 1) {
          puVar12[-1] = puVar17[-1];
          puVar12[-2] = puVar17[-2];
          puVar12[-3] = puVar17[-3];
          puVar12[-4] = puVar17[-4];
          puVar23 = puVar17 + -5;
          puVar17 = puVar17 + -6;
          puVar12[-5] = *puVar23;
          puVar12[-6] = *puVar17;
          puVar23 = puVar12 + -7;
          puVar12 = puVar12 + -8;
          *puVar23 = uStack0000000c;
          *puVar12 = uVar14;
        }
        *(undefined1 *)((int)unaff_r5 + 10) = 4;
        *(undefined1 *)((int)unaff_r5 + 0xb) = 0x40;
        uVar15 = uVar15 << 3;
        goto LAB_002e0096;
      }
      uVar15 = 1;
      while( true ) {
        if (uVar13 <= uVar15) break;
        uVar15 = uVar15 + 1;
        puVar12[-1] = uStack0000000c;
        puVar12[-2] = uVar14;
        puVar12[-3] = puVar17[-1];
        puVar12[-4] = puVar17[-2];
        puVar12[-5] = puVar17[-3];
        puVar12[-6] = puVar17[-4];
        puVar23 = puVar17 + -5;
        puVar17 = puVar17 + -6;
        puVar12[-7] = *puVar23;
        puVar12 = puVar12 + -8;
        *puVar12 = *puVar17;
      }
      puVar12[-1] = uStack0000000c;
      puVar12[-2] = uVar14;
      *(undefined1 *)((int)unaff_r5 + 10) = 4;
      *(undefined1 *)((int)unaff_r5 + 0xb) = 0x40;
      uVar13 = uVar13 << 3;
    }
LAB_002dff64:
    unaff_r5[1] = uVar13;
  }
LAB_002e0098:
  if (*(int *)(unaff_r4 + 0x13c) << 0xe < 0) {
    uVar15 = *unaff_r5;
    iVar11 = *(int *)(unaff_r4 + 0x1e4) + 1;
    if ((char)unaff_r5[2] == '\x06') {
      puVar17 = (undefined1 *)(iVar11 + unaff_r5[1]);
      uVar13 = 0;
      if (*(char *)((int)unaff_r5 + 9) == '\b') {
        for (; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          uVar14 = puVar17[-1];
          puVar23 = puVar17 + -2;
          puVar17[-1] = *puVar23;
          puVar12 = puVar17 + -3;
          puVar17 = puVar17 + -4;
          *puVar23 = *puVar12;
          *puVar12 = *puVar17;
          *puVar17 = uVar14;
        }
      }
      else {
        for (; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          uVar14 = puVar17[-2];
          uVar5 = puVar17[-1];
          puVar17[-1] = puVar17[-3];
          puVar17[-2] = puVar17[-4];
          puVar26 = puVar17 + -5;
          puVar17[-3] = *puVar26;
          puVar23 = puVar17 + -6;
          puVar17[-4] = *puVar23;
          puVar12 = puVar17 + -7;
          puVar17 = puVar17 + -8;
          *puVar26 = *puVar12;
          *puVar23 = *puVar17;
          *puVar12 = uVar5;
          *puVar17 = uVar14;
        }
      }
    }
    else if ((char)unaff_r5[2] == '\x04') {
      puVar17 = (undefined1 *)(iVar11 + unaff_r5[1]);
      uVar13 = 0;
      if (*(char *)((int)unaff_r5 + 9) == '\b') {
        for (; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          puVar12 = puVar17 + -1;
          puVar17 = puVar17 + -2;
          uVar14 = *puVar12;
          *puVar12 = *puVar17;
          *puVar17 = uVar14;
        }
      }
      else {
        for (; uVar13 != uVar15; uVar13 = uVar13 + 1) {
          puVar23 = puVar17 + -2;
          uVar14 = *puVar23;
          puVar26 = puVar17 + -1;
          uVar5 = *puVar26;
          puVar12 = puVar17 + -3;
          puVar17 = puVar17 + -4;
          *puVar26 = *puVar12;
          *puVar23 = *puVar17;
          *puVar12 = uVar5;
          *puVar17 = uVar14;
        }
      }
    }
  }
  if (*(int *)(unaff_r4 + 0x13c) << 0x1b < 0) {
    png_do_swap(unaff_r5,*(int *)(unaff_r4 + 0x1e4) + 1);
  }
  if (*(int *)(unaff_r4 + 0x13c) << 0xb < 0) {
    if (*(code **)(unaff_r4 + 0x124) != (code *)0x0) {
      (**(code **)(unaff_r4 + 0x124))(unaff_r4,unaff_r5,*(int *)(unaff_r4 + 0x1e4) + 1);
    }
    if (*(char *)(unaff_r4 + 0x130) != '\0') {
      *(char *)((int)unaff_r5 + 9) = *(char *)(unaff_r4 + 0x130);
    }
    if (*(char *)(unaff_r4 + DAT_002e01fc) != '\0') {
      *(char *)((int)unaff_r5 + 10) = *(char *)(unaff_r4 + DAT_002e01fc);
    }
    bVar19 = *(char *)((int)unaff_r5 + 9) * *(char *)((int)unaff_r5 + 10);
    *(byte *)((int)unaff_r5 + 0xb) = bVar19;
    if (bVar19 < 8) {
      uVar15 = *unaff_r5 * (uint)bVar19 + 7 >> 3;
    }
    else {
      uVar15 = *unaff_r5 * (uint)(bVar19 >> 3);
    }
    unaff_r5[1] = uVar15;
  }
  return;
}


