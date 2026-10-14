/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dd818 png_init_read_transformations */

void png_init_read_transformations(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  uint uVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  short sVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  int local_40;
  byte local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  byte local_28;
  undefined4 local_1c [2];
  
  uVar10 = DAT_002dda64;
  iVar18 = *(int *)(param_1 + 0x39c);
  iVar8 = *(int *)(param_1 + 0x24c);
  if (iVar18 == 0) {
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x39c) = DAT_002dda64;
      *(undefined4 *)(param_1 + 0x24c) = uVar10;
    }
    else {
      uVar10 = png_reciprocal();
      *(undefined4 *)(param_1 + 0x39c) = uVar10;
      iVar8 = 0;
    }
  }
  else {
    local_40 = iVar8;
    if (iVar8 == 0) {
      uVar10 = png_reciprocal(iVar18);
      *(undefined4 *)(param_1 + 0x24c) = uVar10;
    }
    else {
      iVar18 = png_muldiv(local_1c,iVar18,iVar8,DAT_002dda64);
      iVar8 = 1;
      if ((iVar18 != 0) && (iVar8 = png_gamma_significant(local_1c[0]), iVar8 != 0)) {
        iVar8 = 1;
      }
    }
  }
  *(ushort *)(param_1 + DAT_002dda68) = *(ushort *)(param_1 + DAT_002dda68) | 1;
  if (iVar8 == 0) {
    uVar14 = DAT_002dda6c & *(uint *)(param_1 + 0x13c);
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x13c) | 0x2000;
  }
  *(uint *)(param_1 + 0x13c) = uVar14;
  if ((DAT_002dda70 & *(uint *)(param_1 + 0x13c)) == 0x40000) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & DAT_002dda74;
    *(uint *)(param_1 + 0x138) = DAT_002dda6c & *(uint *)(param_1 + 0x138);
    *(undefined2 *)(param_1 + 0x210) = 0;
  }
  iVar8 = png_gamma_significant(*(undefined4 *)(param_1 + 0x24c));
  if (iVar8 == 0) {
    *(uint *)(param_1 + 0x13c) = DAT_002dda78 & *(uint *)(param_1 + 0x13c);
    *(uint *)(param_1 + 0x138) = DAT_002dda6c & *(uint *)(param_1 + 0x138);
  }
  if ((*(uint *)(param_1 + 0x13c) & 0x600000) != 0) {
    png_colorspace_set_rgb_coefficients(param_1);
  }
  if ((int)(*(uint *)(param_1 + 0x13c) << 0x17) < 0) {
    if (-1 < (int)((uint)*(byte *)(param_1 + DAT_002dda7c) << 0x1e)) {
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x800;
    }
  }
  else if ((((*(uint *)(param_1 + 0x13c) & 0x4080) == 0x4080) &&
           (*(short *)(param_1 + 0x22c) == *(short *)(param_1 + DAT_002dda80))) &&
          (sVar13 = *(short *)(param_1 + DAT_002dda84), sVar13 == *(short *)(param_1 + 0x22c))) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x800;
    *(short *)(param_1 + 0x230) = sVar13;
  }
  uVar14 = DAT_002dda6c;
  if (*(byte *)(param_1 + DAT_002dda7c) == 3) {
    uVar12 = (uint)*(ushort *)(param_1 + 0x210);
    uVar15 = uVar12;
    if (uVar12 != 0) {
      uVar15 = 0;
      for (iVar8 = 0; iVar8 < (int)uVar12; iVar8 = iVar8 + 1) {
        cVar1 = *(char *)(*(int *)(param_1 + 0x274) + iVar8);
        if (cVar1 != -1) {
          if (cVar1 != '\0') goto LAB_002dd98c;
          uVar15 = 1;
        }
      }
    }
    uVar12 = DAT_002dda78 & *(uint *)(param_1 + 0x13c);
    *(uint *)(param_1 + 0x13c) = uVar12;
    *(uint *)(param_1 + 0x138) = uVar14 & *(uint *)(param_1 + 0x138);
    if (uVar15 == 0) {
      *(uint *)(param_1 + 0x13c) = uVar12 & DAT_002dda88;
    }
LAB_002dd98c:
    if ((*(uint *)(param_1 + 0x13c) & 0x1100) == 0x1100) {
      pbVar17 = (byte *)(*(int *)(param_1 + 0x204) + (uint)*(byte *)(param_1 + 0x228) * 3);
      *(ushort *)(param_1 + DAT_002dda80) = (ushort)*pbVar17;
      *(ushort *)(param_1 + 0x22c) = (ushort)pbVar17[1];
      *(ushort *)(param_1 + DAT_002dda84) = (ushort)pbVar17[2];
      if (((int)(*(uint *)(param_1 + 0x13c) << 0xc) < 0) &&
         ((*(uint *)(param_1 + 0x13c) & 0x2000000) == 0)) {
        uVar5 = *(ushort *)(param_1 + 0x210);
        for (iVar8 = 0; iVar8 < (int)(uint)uVar5; iVar8 = iVar8 + 1) {
          pbVar17 = (byte *)(*(int *)(param_1 + 0x274) + iVar8);
          *pbVar17 = ~*pbVar17;
        }
      }
    }
  }
  else {
    if (-1 < (int)((uint)*(byte *)(param_1 + DAT_002dda7c) << 0x1d)) {
      uVar15 = DAT_002dda78 & *(uint *)(param_1 + 0x13c);
      *(uint *)(param_1 + 0x13c) = uVar15;
      *(uint *)(param_1 + 0x138) = uVar14 & *(uint *)(param_1 + 0x138);
      if (*(short *)(param_1 + 0x210) == 0) {
        *(uint *)(param_1 + 0x13c) = uVar15 & DAT_002dda88;
      }
    }
    if (((*(uint *)(param_1 + 0x13c) & 0x1100) == 0x1100) &&
       (-1 < (int)((uint)*(byte *)(param_1 + DAT_002dda7c) << 0x1e))) {
      cVar1 = *(char *)(param_1 + 0x218);
      sVar13 = *(short *)(param_1 + 0x230);
      sVar16 = *(short *)(param_1 + 0x280);
      if (cVar1 == '\x02') {
        sVar13 = sVar13 * 0x55;
        sVar16 = sVar16 * 0x55;
      }
      else if (cVar1 == '\x04') {
        sVar13 = sVar13 * 0x11;
        sVar16 = sVar16 * 0x11;
      }
      else if (cVar1 == '\x01') {
        sVar13 = sVar13 * 0xff;
        sVar16 = sVar16 * 0xff;
      }
      *(short *)(param_1 + DAT_002ddd5c) = sVar13;
      *(short *)(param_1 + 0x22c) = sVar13;
      *(short *)(param_1 + DAT_002ddd60) = sVar13;
      if (-1 < *(int *)(param_1 + 0x13c) << 6) {
        *(short *)(param_1 + DAT_002ddd64) = sVar16;
        *(short *)(param_1 + 0x27c) = sVar16;
        *(short *)(param_1 + DAT_002ddd68) = sVar16;
      }
    }
  }
  iVar8 = DAT_002ddd6c;
  if (((*(uint *)(param_1 + 0x13c) & 0x380) == 0x280) && (*(char *)(param_1 + 0x218) != '\x10')) {
    *(short *)(param_1 + DAT_002ddd60) =
         (short)((uint)*(ushort *)(param_1 + DAT_002ddd60) * 0xff + DAT_002ddd6c >> 0x10);
    *(short *)(param_1 + 0x22c) = (short)((uint)*(ushort *)(param_1 + 0x22c) * 0xff + iVar8 >> 0x10)
    ;
    *(short *)(param_1 + DAT_002ddd5c) =
         (short)((uint)*(ushort *)(param_1 + DAT_002ddd5c) * 0xff + iVar8 >> 0x10);
    *(short *)(param_1 + 0x230) = (short)((uint)*(ushort *)(param_1 + 0x230) * 0xff + iVar8 >> 0x10)
    ;
  }
  uVar14 = *(uint *)(param_1 + 0x13c);
  if ((((uVar14 & DAT_002ddd70) != 0) && ((uVar14 & 0x180) == 0x80)) &&
     (*(char *)(param_1 + 0x218) == '\x10')) {
    *(short *)(param_1 + DAT_002ddd60) = *(short *)(param_1 + DAT_002ddd60) * 0x101;
    *(short *)(param_1 + 0x22c) = *(short *)(param_1 + 0x22c) * 0x101;
    *(short *)(param_1 + DAT_002ddd5c) = *(short *)(param_1 + DAT_002ddd5c) * 0x101;
    *(short *)(param_1 + 0x230) = *(short *)(param_1 + 0x230) * 0x101;
  }
  memcpy((void *)(param_1 + DAT_002ddd74),(void *)(param_1 + 0x228),10);
  if (((((int)(uVar14 << 0x12) < 0) ||
       (((uVar14 & 0x600000) != 0 &&
        ((iVar8 = png_gamma_significant(*(undefined4 *)(param_1 + 0x39c)), iVar8 != 0 ||
         (iVar8 = png_gamma_significant(*(undefined4 *)(param_1 + 0x24c)), iVar8 != 0)))))) ||
      ((*(int *)(param_1 + 0x13c) << 0x18 < 0 &&
       (((iVar8 = png_gamma_significant(*(undefined4 *)(param_1 + 0x39c)), iVar8 != 0 ||
         (iVar8 = png_gamma_significant(*(undefined4 *)(param_1 + 0x24c)), iVar8 != 0)) ||
        ((*(char *)(param_1 + DAT_002ddd78) == '\x03' &&
         (iVar8 = png_gamma_significant(*(undefined4 *)(param_1 + 0x224)), iVar8 != 0)))))))) ||
     ((*(int *)(param_1 + 0x13c) << 8 < 0 &&
      (iVar8 = png_gamma_significant(*(undefined4 *)(param_1 + 0x24c)), iVar8 != 0)))) {
    png_build_gamma_table(param_1,*(undefined1 *)(param_1 + 0x218));
    uVar14 = *(uint *)(param_1 + 0x13c);
    iVar8 = uVar14 << 0x18;
    if (iVar8 < 0) {
      if ((uVar14 & 0x600000) != 0) {
        png_warning(param_1,DAT_002ddd7c + 0x2ddc0e);
      }
      if (*(char *)(param_1 + DAT_002ddd80) != '\x03') {
        cVar1 = *(char *)(param_1 + DAT_002de194);
        if (cVar1 == '\x02') {
          local_40 = png_reciprocal(*(undefined4 *)(param_1 + 0x39c));
          uVar10 = *(undefined4 *)(param_1 + 0x39c);
LAB_002ddeac:
          iVar8 = png_reciprocal2(uVar10,*(undefined4 *)(param_1 + 0x24c));
        }
        else {
          if (cVar1 == '\x03') {
            local_40 = png_reciprocal(*(undefined4 *)(param_1 + 0x224));
            uVar10 = *(undefined4 *)(param_1 + 0x224);
            goto LAB_002ddeac;
          }
          if (cVar1 == '\x01') {
            local_40 = *(int *)(param_1 + 0x24c);
            iVar8 = DAT_002de198;
          }
          else {
            png_error(param_1,DAT_002de19c + 0x2ddebe);
          }
        }
        iVar18 = png_gamma_significant(local_40);
        iVar19 = png_gamma_significant(iVar8);
        if (iVar18 != 0) {
          uVar7 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x230),local_40);
          *(undefined2 *)(param_1 + DAT_002de1a0) = uVar7;
        }
        if (iVar19 != 0) {
          uVar7 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x230),iVar8);
          *(undefined2 *)(param_1 + 0x230) = uVar7;
        }
        iVar6 = DAT_002de1a8;
        if (((*(short *)(param_1 + 0x22c) == *(short *)(param_1 + DAT_002de1a4)) &&
            (*(short *)(param_1 + DAT_002de1a8) == *(short *)(param_1 + 0x22c))) &&
           (sVar13 = *(short *)(param_1 + 0x230), sVar13 == *(short *)(param_1 + DAT_002de1a8))) {
          uVar7 = *(undefined2 *)(param_1 + DAT_002de1a0);
          *(undefined2 *)(param_1 + 0x238) = uVar7;
          *(undefined2 *)(param_1 + DAT_002de1ac) = uVar7;
          *(undefined2 *)(param_1 + 0x234) = uVar7;
          *(short *)(param_1 + iVar6) = sVar13;
          *(short *)(param_1 + 0x22c) = sVar13;
        }
        else {
          if (iVar18 != 0) {
            uVar7 = png_gamma_correct(param_1,*(short *)(param_1 + DAT_002de1a4),local_40);
            *(undefined2 *)(param_1 + 0x234) = uVar7;
            uVar7 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x22c),local_40);
            *(undefined2 *)(param_1 + DAT_002de1ac) = uVar7;
            uVar7 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + DAT_002de1a8),local_40);
            *(undefined2 *)(param_1 + 0x238) = uVar7;
          }
          iVar18 = DAT_002de1a4;
          if (iVar19 != 0) {
            uVar7 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + DAT_002de1a4),iVar8);
            *(undefined2 *)(param_1 + iVar18) = uVar7;
            uVar7 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x22c),iVar8);
            iVar18 = DAT_002de1a8;
            *(undefined2 *)(param_1 + 0x22c) = uVar7;
            uVar7 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + iVar18),iVar8);
            *(undefined2 *)(param_1 + iVar18) = uVar7;
          }
        }
        *(undefined1 *)(param_1 + DAT_002de194) = 1;
        goto LAB_002de0e8;
      }
      pbVar17 = *(byte **)(param_1 + 0x204);
      uVar5 = *(ushort *)(param_1 + 0x208);
      cVar1 = *(char *)(param_1 + DAT_002ddd78);
      if (cVar1 == '\x02') {
        iVar8 = *(int *)(param_1 + 0x250);
        local_3c = *(byte *)(iVar8 + (uint)*(ushort *)(param_1 + DAT_002ddd60));
        local_40._0_1_ = *(byte *)(iVar8 + (uint)*(ushort *)(param_1 + 0x22c));
        local_28 = *(byte *)(iVar8 + (uint)*(ushort *)(param_1 + DAT_002ddd5c));
        iVar8 = *(int *)(param_1 + 0x25c);
        local_2c = (uint)*(byte *)(iVar8 + (uint)*(ushort *)(param_1 + DAT_002ddd60));
        local_30 = (uint)*(byte *)(iVar8 + (uint)*(ushort *)(param_1 + 0x22c));
        local_34 = (uint)*(byte *)(iVar8 + (uint)*(ushort *)(param_1 + DAT_002ddd5c));
      }
      else {
        if (cVar1 == '\x03') {
          uVar9 = png_reciprocal(*(undefined4 *)(param_1 + 0x224));
          uVar10 = png_reciprocal2(*(undefined4 *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x24c)
                                  );
        }
        else {
          uVar10 = DAT_002ddd84;
          uVar9 = DAT_002ddd84;
          if (cVar1 == '\x01') {
            uVar9 = *(undefined4 *)(param_1 + 0x24c);
          }
        }
        iVar8 = png_gamma_significant(uVar10);
        if (iVar8 == 0) {
          local_3c = *(byte *)(param_1 + DAT_002ddd60);
          local_40._0_1_ = *(byte *)(param_1 + 0x22c);
          local_28 = *(byte *)(param_1 + DAT_002ddd5c);
        }
        else {
          local_3c = png_gamma_8bit_correct(*(undefined2 *)(param_1 + DAT_002ddd60),uVar10);
          local_40._0_1_ = png_gamma_8bit_correct(*(undefined2 *)(param_1 + 0x22c),uVar10);
          local_28 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + DAT_002ddd5c),uVar10);
        }
        iVar8 = png_gamma_significant(uVar9);
        if (iVar8 == 0) {
          local_2c = (uint)*(byte *)(param_1 + DAT_002ddd60);
          local_30 = (uint)*(byte *)(param_1 + 0x22c);
          local_34 = (uint)*(byte *)(param_1 + DAT_002ddd5c);
        }
        else {
          local_2c = png_gamma_8bit_correct(*(undefined2 *)(param_1 + DAT_002ddd60),uVar9);
          local_30 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + 0x22c),uVar9);
          local_34 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + DAT_002ddd5c),uVar9);
        }
      }
      for (iVar8 = 0; iVar8 < (int)(uint)uVar5; iVar8 = iVar8 + 1) {
        if ((iVar8 < (int)(uint)*(ushort *)(param_1 + 0x210)) &&
           (uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x274) + iVar8), uVar14 != 0xff)) {
          if (uVar14 == 0) {
            *pbVar17 = local_3c;
            pbVar17[1] = (byte)local_40;
            pbVar17[2] = local_28;
          }
          else {
            uVar14 = local_2c * (0xff - uVar14) +
                     uVar14 * *(byte *)(*(int *)(param_1 + 0x25c) + (uint)*pbVar17) + 0x80;
            *pbVar17 = *(byte *)(*(int *)(param_1 + 600) +
                                ((int)((uVar14 & 0xffff) + (uVar14 * 0x10000 >> 0x18)) >> 8 & 0xffU)
                                );
            uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x274) + iVar8);
            uVar14 = uVar14 * *(byte *)(*(int *)(param_1 + 0x25c) + (uint)pbVar17[1]) +
                     local_30 * (0xff - uVar14) + 0x80;
            pbVar17[1] = *(byte *)(*(int *)(param_1 + 600) +
                                  ((int)((uVar14 * 0x10000 >> 0x18) + (uVar14 & 0xffff)) >> 8 &
                                  0xffU));
            uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x274) + iVar8);
            uVar14 = uVar14 * *(byte *)(*(int *)(param_1 + 0x25c) + (uint)pbVar17[2]) +
                     local_34 * (0xff - uVar14) + 0x80;
            pbVar17[2] = *(byte *)(*(int *)(param_1 + 600) +
                                  ((int)((uVar14 * 0x10000 >> 0x18) + (uVar14 & 0xffff)) >> 8 &
                                  0xffU));
          }
        }
        else {
          *pbVar17 = *(byte *)(*(int *)(param_1 + 0x250) + (uint)*pbVar17);
          pbVar17[1] = *(byte *)(*(int *)(param_1 + 0x250) + (uint)pbVar17[1]);
          pbVar17[2] = *(byte *)(*(int *)(param_1 + 0x250) + (uint)pbVar17[2]);
        }
        pbVar17 = pbVar17 + 3;
      }
      uVar15 = *(uint *)(param_1 + 0x13c);
      uVar14 = DAT_002de190;
    }
    else {
      if ((*(char *)(param_1 + DAT_002de1b0) != '\x03') ||
         (((int)(uVar14 << 0x13) < 0 && ((uVar14 & 0x600000) != 0)))) goto LAB_002de0e8;
      uVar5 = *(ushort *)(param_1 + 0x208);
      pbVar17 = *(byte **)(param_1 + 0x204);
      for (iVar8 = 0; iVar8 < (int)(uint)uVar5; iVar8 = iVar8 + 1) {
        *pbVar17 = *(byte *)(*(int *)(param_1 + 0x250) + (uint)*pbVar17);
        pbVar17[1] = *(byte *)(*(int *)(param_1 + 0x250) + (uint)pbVar17[1]);
        pbVar17[2] = *(byte *)(*(int *)(param_1 + 0x250) + (uint)pbVar17[2]);
        pbVar17 = pbVar17 + 3;
      }
      uVar15 = *(uint *)(param_1 + 0x13c);
      uVar14 = DAT_002de1b4;
    }
    uVar14 = uVar14 & uVar15;
  }
  else {
    if ((-1 < *(int *)(param_1 + 0x13c) << 0x18) || (*(char *)(param_1 + DAT_002de1b0) != '\x03'))
    goto LAB_002de0e8;
    uVar5 = *(ushort *)(param_1 + 0x210);
    bVar2 = *(byte *)(param_1 + DAT_002de1a4);
    bVar3 = *(byte *)(param_1 + 0x22c);
    bVar4 = *(byte *)(param_1 + DAT_002de1a8);
    pbVar17 = *(byte **)(param_1 + 0x204);
    for (iVar8 = 0; iVar8 < (int)(uint)uVar5; iVar8 = iVar8 + 1) {
      uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x274) + iVar8);
      if (uVar14 == 0) {
        pbVar17[1] = bVar3;
        *pbVar17 = bVar2;
        bVar11 = bVar4;
LAB_002de0d0:
        pbVar17[2] = bVar11;
      }
      else if (uVar14 != 0xff) {
        uVar14 = (uint)bVar2 * (0xff - uVar14) + uVar14 * *pbVar17 + 0x80;
        *pbVar17 = (byte)((uVar14 * 0x10000 >> 0x18) + (uVar14 & 0xffff) >> 8);
        uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x274) + iVar8);
        uVar14 = (uint)bVar3 * (0xff - uVar14) + uVar14 * pbVar17[1] + 0x80;
        pbVar17[1] = (byte)((uVar14 * 0x10000 >> 0x18) + (uVar14 & 0xffff) >> 8);
        uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x274) + iVar8);
        uVar14 = (uint)bVar4 * (0xff - uVar14) + uVar14 * pbVar17[2] + 0x80;
        bVar11 = (byte)((uVar14 * 0x10000 >> 0x18) + (uVar14 & 0xffff) >> 8);
        goto LAB_002de0d0;
      }
      pbVar17 = pbVar17 + 3;
    }
    uVar14 = *(uint *)(param_1 + 0x13c) & 0xffffff7f;
  }
  *(uint *)(param_1 + 0x13c) = uVar14;
LAB_002de0e8:
  if (((DAT_002de1b8 & *(uint *)(param_1 + 0x13c)) == 8) &&
     (*(char *)(param_1 + DAT_002de1b0) == '\x03')) {
    bVar2 = *(byte *)(param_1 + 0x268);
    uVar14 = (uint)*(ushort *)(param_1 + 0x208);
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffff7;
    if (-(uint)bVar2 + 7 < 7) {
      iVar18 = 0;
      for (iVar8 = 0; iVar8 < (int)uVar14; iVar8 = iVar8 + 1) {
        pbVar17 = (byte *)(*(int *)(param_1 + 0x204) + iVar18);
        iVar18 = iVar18 + 3;
        *pbVar17 = (byte)((int)(uint)*pbVar17 >> (-(uint)bVar2 + 8 & 0xff));
      }
    }
    bVar2 = *(byte *)(param_1 + DAT_002de1bc);
    if (-(uint)bVar2 + 7 < 7) {
      iVar18 = 0;
      for (iVar8 = 0; iVar8 < (int)uVar14; iVar8 = iVar8 + 1) {
        iVar19 = *(int *)(param_1 + 0x204) + iVar18;
        iVar18 = iVar18 + 3;
        *(char *)(iVar19 + 1) =
             (char)((int)(uint)*(byte *)(iVar19 + 1) >> (-(uint)bVar2 + 8 & 0xff));
      }
    }
    bVar2 = *(byte *)(param_1 + DAT_002de1c0);
    if (-(uint)bVar2 + 7 < 7) {
      iVar18 = 0;
      for (iVar8 = 0; iVar8 < (int)uVar14; iVar8 = iVar8 + 1) {
        iVar19 = *(int *)(param_1 + 0x204) + iVar18;
        iVar18 = iVar18 + 3;
        *(char *)(iVar19 + 2) =
             (char)((int)(uint)*(byte *)(iVar19 + 2) >> (-(uint)bVar2 + 8 & 0xff));
      }
    }
  }
  return;
}


