/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e82c8 png_write_find_filter */

void png_write_find_filter(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint local_54;
  undefined1 *local_50;
  uint local_48;
  
  uVar6 = (uint)*(byte *)(param_1 + DAT_002e8608);
  uVar2 = *(uint *)(param_2 + 4);
  puVar17 = *(undefined1 **)(param_1 + 0x1e4);
  uVar12 = (uint)*(byte *)(param_1 + DAT_002e860c);
  iVar14 = *(int *)(param_1 + 0x1e0);
  uVar5 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
  local_54 = DAT_002e8610;
  if (((int)(uVar6 << 0x1c) < 0) && (uVar6 != 8)) {
    local_54 = 0;
    for (uVar8 = 0; uVar8 != uVar2; uVar8 = uVar8 + 1) {
      uVar9 = (uint)(byte)puVar17[uVar8 + 1];
      uVar4 = 0x100 - uVar9;
      if (uVar9 < 0x80) {
        uVar4 = uVar9;
      }
      local_54 = local_54 + uVar4;
    }
    if (*(char *)(param_1 + 0x2d0) == '\x02') {
      uVar8 = local_54 >> 10 & DAT_002e8614;
      local_54 = local_54 & 0xffff;
      for (iVar3 = 0; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
        if (*(char *)(*(int *)(param_1 + 0x2d4) + iVar3) == '\0') {
          uVar4 = (uint)*(ushort *)(iVar3 * 2 + *(int *)(param_1 + 0x2d8));
          local_54 = uVar4 * local_54 >> 8;
          uVar8 = uVar4 * uVar8 >> 8;
        }
      }
      uVar8 = **(ushort **)(param_1 + 0x2e0) * uVar8 >> 3;
      if (DAT_002e8614 < uVar8) {
        local_54 = DAT_002e8610;
      }
      else {
        local_54 = uVar8 * 0x400 + (**(ushort **)(param_1 + 0x2e0) * local_54 >> 3);
      }
    }
  }
  if (uVar6 == 0x10) {
    iVar3 = *(int *)(param_1 + 0x1e8);
    for (iVar7 = 1; iVar7 != uVar5 + 1; iVar7 = iVar7 + 1) {
      *(undefined1 *)(iVar3 + iVar7) = puVar17[iVar7];
    }
    for (uVar8 = uVar5; uVar8 < uVar2; uVar8 = uVar8 + 1) {
      *(undefined1 *)(iVar3 + 1 + uVar8) = puVar17[uVar8 + 1] - puVar17[(uVar8 - uVar5) + 1];
    }
    local_50 = *(undefined1 **)(param_1 + 0x1e8);
LAB_002e8586:
    if ((int)(uVar6 << 0x1a) < 0) {
      uVar8 = local_54;
      if (*(char *)(param_1 + 0x2d0) == '\x02') {
        uVar8 = local_54 >> 10 & DAT_002e8614;
        uVar4 = local_54 & 0xffff;
        for (iVar3 = 0; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
          if (*(char *)(*(int *)(param_1 + 0x2d4) + iVar3) == '\x02') {
            uVar9 = (uint)*(ushort *)(iVar3 * 2 + *(int *)(param_1 + 0x2dc));
            uVar4 = uVar9 * uVar4 >> 8;
            uVar8 = uVar9 * uVar8 >> 8;
          }
        }
        uVar13 = (uint)*(ushort *)(*(int *)(param_1 + 0x2e4) + 4);
        uVar9 = uVar13 * uVar8 >> 3;
        uVar8 = DAT_002e8610;
        if (uVar9 <= DAT_002e8614) {
          uVar8 = uVar9 * 0x400 + (uVar4 * uVar13 >> 3);
        }
      }
      iVar7 = *(int *)(param_1 + 0x1ec);
      iVar3 = 1;
      uVar4 = 0;
      do {
        if (iVar3 == uVar2 + 1) break;
        bVar11 = puVar17[iVar3] - *(char *)(iVar14 + iVar3);
        uVar13 = (uint)bVar11;
        *(byte *)(iVar7 + iVar3) = bVar11;
        uVar9 = 0x100 - uVar13;
        if (uVar13 < 0x80) {
          uVar9 = uVar13;
        }
        uVar4 = uVar4 + uVar9;
        iVar3 = iVar3 + 1;
      } while (uVar4 <= uVar8);
      if (*(char *)(param_1 + 0x2d0) == '\x02') {
        uVar8 = uVar4 >> 10 & DAT_002e8990;
        uVar9 = uVar4 & 0xffff;
        for (iVar3 = 0; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
          if (*(char *)(*(int *)(param_1 + 0x2d4) + iVar3) == '\x02') {
            uVar4 = (uint)*(ushort *)(iVar3 * 2 + *(int *)(param_1 + 0x2d8));
            uVar9 = uVar4 * uVar9 >> 8;
            uVar8 = uVar4 * uVar8 >> 8;
          }
        }
        uVar13 = (uint)*(ushort *)(*(int *)(param_1 + 0x2e0) + 4);
        uVar8 = uVar13 * uVar8 >> 3;
        uVar4 = DAT_002e8994;
        if (uVar8 <= DAT_002e8990) {
          uVar4 = uVar8 * 0x400 + (uVar13 * uVar9 >> 3);
        }
      }
      if (uVar4 < local_54) {
        local_50 = *(undefined1 **)(param_1 + 0x1ec);
        local_54 = uVar4;
      }
    }
    if (uVar6 != 0x40) goto LAB_002e873c;
    iVar3 = *(int *)(param_1 + 0x1f0);
    for (iVar7 = 1; iVar7 != uVar5 + 1; iVar7 = iVar7 + 1) {
      *(byte *)(iVar3 + iVar7) = puVar17[iVar7] - (*(byte *)(iVar14 + iVar7) >> 1);
    }
    for (uVar8 = uVar5; uVar8 < uVar2; uVar8 = uVar8 + 1) {
      *(char *)(iVar3 + 1 + uVar8) =
           puVar17[uVar8 + 1] -
           (char)((int)((uint)*(byte *)(iVar14 + 1 + uVar8) +
                       (uint)(byte)puVar17[(uVar8 - uVar5) + 1]) >> 1);
    }
    local_50 = *(undefined1 **)(param_1 + 0x1f0);
  }
  else {
    local_50 = puVar17;
    if ((int)(uVar6 << 0x1b) < 0) {
      uVar8 = local_54;
      if (*(char *)(param_1 + 0x2d0) == '\x02') {
        uVar4 = local_54 & 0xffff;
        uVar8 = local_54 >> 10 & DAT_002e8614;
        for (iVar3 = 0; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
          if (*(char *)(*(int *)(param_1 + 0x2d4) + iVar3) == '\x01') {
            uVar9 = (uint)*(ushort *)(iVar3 * 2 + *(int *)(param_1 + 0x2dc));
            uVar4 = uVar9 * uVar4 >> 8;
            uVar8 = uVar9 * uVar8 >> 8;
          }
        }
        uVar13 = (uint)*(ushort *)(*(int *)(param_1 + 0x2e4) + 2);
        uVar9 = uVar13 * uVar8 >> 3;
        uVar8 = DAT_002e8610;
        if (uVar9 <= DAT_002e8614) {
          uVar8 = uVar9 * 0x400 + (uVar4 * uVar13 >> 3);
        }
      }
      iVar3 = *(int *)(param_1 + 0x1e8);
      uVar4 = 0;
      for (iVar7 = 1; iVar7 != uVar5 + 1; iVar7 = iVar7 + 1) {
        uVar13 = (uint)(byte)puVar17[iVar7];
        *(undefined1 *)(iVar3 + iVar7) = puVar17[iVar7];
        uVar9 = 0x100 - uVar13;
        if (uVar13 < 0x80) {
          uVar9 = uVar13;
        }
        uVar4 = uVar4 + uVar9;
      }
      for (uVar9 = uVar5; uVar9 < uVar2; uVar9 = uVar9 + 1) {
        uVar18 = (uint)(byte)(puVar17[uVar9 + 1] - puVar17[(uVar9 - uVar5) + 1]);
        *(undefined1 *)(iVar3 + 1 + uVar9) = puVar17[uVar9 + 1] - puVar17[(uVar9 - uVar5) + 1];
        uVar13 = 0x100 - uVar18;
        if (uVar18 < 0x80) {
          uVar13 = uVar18;
        }
        uVar4 = uVar4 + uVar13;
        if (uVar8 < uVar4) break;
      }
      if (*(char *)(param_1 + 0x2d0) == '\x02') {
        uVar8 = uVar4 >> 10 & DAT_002e8614;
        uVar9 = uVar4 & 0xffff;
        for (iVar3 = 0; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
          if (*(char *)(*(int *)(param_1 + 0x2d4) + iVar3) == '\x01') {
            uVar4 = (uint)*(ushort *)(iVar3 * 2 + *(int *)(param_1 + 0x2dc));
            uVar9 = uVar4 * uVar9 >> 8;
            uVar8 = uVar4 * uVar8 >> 8;
          }
        }
        uVar13 = (uint)*(ushort *)(*(int *)(param_1 + 0x2e4) + 2);
        uVar8 = uVar13 * uVar8 >> 3;
        uVar4 = DAT_002e8610;
        if (uVar8 <= DAT_002e8614) {
          uVar4 = uVar8 * 0x400 + (uVar13 * uVar9 >> 3);
        }
      }
      if (uVar4 < local_54) {
        local_54 = uVar4;
        local_50 = *(undefined1 **)(param_1 + 0x1e8);
      }
    }
    if (uVar6 != 0x20) goto LAB_002e8586;
    iVar7 = *(int *)(param_1 + 0x1ec);
    for (iVar3 = 1; iVar3 != uVar2 + 1; iVar3 = iVar3 + 1) {
      *(char *)(iVar7 + iVar3) = puVar17[iVar3] - *(char *)(iVar14 + iVar3);
    }
    local_50 = *(undefined1 **)(param_1 + 0x1ec);
LAB_002e873c:
    if ((int)(uVar6 << 0x19) < 0) {
      uVar8 = local_54;
      if (*(char *)(param_1 + 0x2d0) == '\x02') {
        uVar4 = local_54 & 0xffff;
        uVar8 = local_54 >> 10 & DAT_002e8990;
        for (iVar3 = 0; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
          if (*(char *)(*(int *)(param_1 + 0x2d4) + iVar3) == '\x03') {
            uVar9 = (uint)*(ushort *)(iVar3 * 2 + *(int *)(param_1 + 0x2dc));
            uVar4 = uVar9 * uVar4 >> 8;
            uVar8 = uVar9 * uVar8 >> 8;
          }
        }
        uVar13 = (uint)*(ushort *)(*(int *)(param_1 + 0x2e4) + 6);
        uVar9 = uVar13 * uVar8 >> 3;
        uVar8 = DAT_002e8994;
        if (uVar9 <= DAT_002e8990) {
          uVar8 = uVar9 * 0x400 + (uVar4 * uVar13 >> 3);
        }
      }
      iVar7 = *(int *)(param_1 + 0x1f0);
      uVar4 = 0;
      for (iVar3 = 1; iVar3 != uVar5 + 1; iVar3 = iVar3 + 1) {
        bVar11 = puVar17[iVar3] - (*(byte *)(iVar14 + iVar3) >> 1);
        uVar13 = (uint)bVar11;
        *(byte *)(iVar7 + iVar3) = bVar11;
        uVar9 = 0x100 - uVar13;
        if (uVar13 < 0x80) {
          uVar9 = uVar13;
        }
        uVar4 = uVar4 + uVar9;
      }
      for (uVar9 = uVar5; uVar9 < uVar2; uVar9 = uVar9 + 1) {
        uVar13 = (uint)(byte)puVar17[uVar9 + 1] -
                 ((int)((uint)*(byte *)(iVar14 + 1 + uVar9) +
                       (uint)(byte)puVar17[(uVar9 - uVar5) + 1]) >> 1);
        uVar18 = uVar13 & 0xff;
        *(char *)(iVar7 + 1 + uVar9) = (char)uVar13;
        uVar13 = 0x100 - uVar18;
        if (uVar18 < 0x80) {
          uVar13 = uVar18;
        }
        uVar4 = uVar4 + uVar13;
        if (uVar8 < uVar4) break;
      }
      if (*(char *)(param_1 + 0x2d0) == '\x02') {
        uVar8 = uVar4 >> 10 & DAT_002e8990;
        uVar9 = uVar4 & 0xffff;
        for (iVar3 = 0; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
          if (*(char *)(*(int *)(param_1 + 0x2d4) + iVar3) == '\0') {
            uVar4 = (uint)*(ushort *)(iVar3 * 2 + *(int *)(param_1 + 0x2d8));
            uVar9 = uVar4 * uVar9 >> 8;
            uVar8 = uVar4 * uVar8 >> 8;
          }
        }
        uVar13 = (uint)*(ushort *)(*(int *)(param_1 + 0x2e0) + 6);
        uVar8 = uVar13 * uVar8 >> 3;
        uVar4 = DAT_002e8994;
        if (uVar8 <= DAT_002e8990) {
          uVar4 = uVar8 * 0x400 + (uVar13 * uVar9 >> 3);
        }
      }
      if (uVar4 < local_54) {
        local_50 = *(undefined1 **)(param_1 + 0x1f0);
        local_54 = uVar4;
      }
    }
    if (uVar6 == 0x80) {
      iVar3 = *(int *)(param_1 + 500);
      for (iVar7 = 1; iVar7 != uVar5 + 1; iVar7 = iVar7 + 1) {
        *(char *)(iVar3 + iVar7) = puVar17[iVar7] - *(char *)(iVar14 + iVar7);
      }
      iVar7 = 0;
      for (; uVar5 < uVar2; uVar5 = uVar5 + 1) {
        iVar7 = iVar7 + 1;
        bVar11 = *(byte *)(iVar14 + iVar7);
        bVar1 = *(byte *)(iVar14 + 1 + uVar5);
        iVar15 = (uint)bVar1 - (uint)bVar11;
        iVar10 = (uint)(byte)puVar17[iVar7] - (uint)bVar11;
        uVar4 = iVar15 + (iVar15 >> 0x1f) ^ iVar15 >> 0x1f;
        uVar6 = iVar15 + iVar10 >> 0x1f;
        uVar8 = iVar10 + (iVar10 >> 0x1f) ^ iVar10 >> 0x1f;
        uVar6 = iVar15 + iVar10 + uVar6 ^ uVar6;
        if ((((((int)uVar6 >> 0x1f) + -((int)uVar4 >> 0x1f) + (uint)(uVar4 <= uVar6) & 0xff) == 0)
            || (bVar16 = puVar17[iVar7],
               (((int)uVar8 >> 0x1f) + -((int)uVar4 >> 0x1f) + (uint)(uVar4 <= uVar8) & 0xff) == 0))
           && (bVar16 = bVar11, (int)uVar8 <= (int)uVar6)) {
          bVar16 = bVar1;
        }
        *(byte *)(iVar3 + 1 + uVar5) = puVar17[uVar5 + 1] - bVar16;
      }
      local_50 = *(undefined1 **)(param_1 + 500);
      goto LAB_002e8b64;
    }
  }
  if ((int)(uVar6 << 0x18) < 0) {
    local_48 = local_54;
    if (*(char *)(param_1 + 0x2d0) == '\x02') {
      uVar8 = local_54 & 0xffff;
      uVar6 = local_54 >> 10 & DAT_002e8bec;
      for (iVar3 = 0; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
        if (*(char *)(*(int *)(param_1 + 0x2d4) + iVar3) == '\x04') {
          uVar4 = (uint)*(ushort *)(iVar3 * 2 + *(int *)(param_1 + 0x2dc));
          uVar8 = uVar4 * uVar8 >> 8;
          uVar6 = uVar4 * uVar6 >> 8;
        }
      }
      uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x2e4) + 8);
      uVar6 = uVar4 * uVar6 >> 3;
      if (DAT_002e8bec < uVar6) {
        local_48 = DAT_002e8bf0;
      }
      else {
        local_48 = uVar6 * 0x400 + (uVar4 * uVar8 >> 3);
      }
    }
    iVar7 = *(int *)(param_1 + 500);
    uVar6 = 0;
    for (iVar3 = 1; iVar3 != uVar5 + 1; iVar3 = iVar3 + 1) {
      bVar11 = puVar17[iVar3] - *(char *)(iVar14 + iVar3);
      uVar4 = (uint)bVar11;
      *(byte *)(iVar7 + iVar3) = bVar11;
      uVar8 = 0x100 - uVar4;
      if (uVar4 < 0x80) {
        uVar8 = uVar4;
      }
      uVar6 = uVar6 + uVar8;
    }
    iVar3 = 0;
    for (; uVar5 < uVar2; uVar5 = uVar5 + 1) {
      iVar3 = iVar3 + 1;
      uVar4 = (uint)*(byte *)(iVar14 + 1 + uVar5);
      uVar9 = (uint)*(byte *)(iVar14 + iVar3);
      iVar15 = uVar4 - uVar9;
      iVar10 = (byte)puVar17[iVar3] - uVar9;
      uVar18 = iVar15 + (iVar15 >> 0x1f) ^ iVar15 >> 0x1f;
      uVar8 = iVar15 + iVar10 >> 0x1f;
      uVar13 = iVar10 + (iVar10 >> 0x1f) ^ iVar10 >> 0x1f;
      uVar8 = iVar15 + iVar10 + uVar8 ^ uVar8;
      if ((((((int)uVar8 >> 0x1f) + -((int)uVar18 >> 0x1f) + (uint)(uVar18 <= uVar8) & 0xff) == 0)
          || (uVar19 = (uint)(byte)puVar17[iVar3],
             (((int)uVar13 >> 0x1f) + -((int)uVar18 >> 0x1f) + (uint)(uVar18 <= uVar13) & 0xff) == 0
             )) && (uVar19 = uVar9, (int)uVar13 <= (int)uVar8)) {
        uVar19 = uVar4;
      }
      uVar4 = (byte)puVar17[uVar5 + 1] - uVar19 & 0xff;
      *(char *)(iVar7 + 1 + uVar5) = (char)((byte)puVar17[uVar5 + 1] - uVar19);
      uVar8 = 0x100 - uVar4;
      if (uVar4 < 0x80) {
        uVar8 = uVar4;
      }
      uVar6 = uVar6 + uVar8;
      if (local_48 < uVar6) break;
    }
    if (*(char *)(param_1 + 0x2d0) == '\x02') {
      uVar2 = uVar6 & 0xffff;
      uVar5 = uVar6 >> 10 & DAT_002e8bec;
      for (iVar14 = 0; iVar14 < (int)uVar12; iVar14 = iVar14 + 1) {
        if (*(char *)(*(int *)(param_1 + 0x2d4) + iVar14) == '\x04') {
          uVar6 = (uint)*(ushort *)(iVar14 * 2 + *(int *)(param_1 + 0x2d8));
          uVar2 = uVar6 * uVar2 >> 8;
          uVar5 = uVar6 * uVar5 >> 8;
        }
      }
      uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x2e0) + 8);
      uVar5 = uVar8 * uVar5 >> 3;
      uVar6 = DAT_002e8bf0;
      if (uVar5 <= DAT_002e8bec) {
        uVar6 = uVar5 * 0x400 + (uVar8 * uVar2 >> 3);
      }
    }
    if (uVar6 < local_54) {
      local_50 = *(undefined1 **)(param_1 + 500);
    }
  }
LAB_002e8b64:
  png_compress_IDAT(param_1,local_50,*(int *)(param_2 + 4) + 1,0);
  iVar14 = *(int *)(param_1 + 0x1e0);
  if (iVar14 != 0) {
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1e4);
    *(int *)(param_1 + 0x1e4) = iVar14;
  }
  png_write_finish_row(param_1);
  uVar2 = *(int *)(param_1 + 0x244) + 1;
  *(uint *)(param_1 + 0x244) = uVar2;
  if ((*(uint *)(param_1 + 0x240) != 0) && (*(uint *)(param_1 + 0x240) <= uVar2)) {
    png_write_flush(param_1);
  }
  iVar14 = 1;
  if (*(char *)(param_1 + DAT_002e8bf4) != '\0') {
    for (; iVar14 < (int)uVar12; iVar14 = iVar14 + 1) {
      *(undefined1 *)(*(int *)(param_1 + 0x2d4) + iVar14) =
           *(undefined1 *)(*(int *)(param_1 + 0x2d4) + iVar14 + -1);
    }
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x2d4) + uVar12) = *local_50;
  }
  return;
}


