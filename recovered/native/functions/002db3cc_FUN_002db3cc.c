/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002db3cc FUN_002db3cc */

undefined4 FUN_002db3cc(undefined4 *param_1)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  byte *local_68;
  uint local_64;
  uint local_60;
  byte *local_5c;
  int local_58;
  ushort *local_54;
  uint local_50;
  int local_38;
  
  iVar16 = DAT_002db68c + 0x2db3d8;
  piVar17 = (int *)*param_1;
  uVar5 = piVar17[3];
  iVar8 = piVar17[2];
  iVar15 = *(int *)*piVar17;
  iVar20 = ((int *)*piVar17)[1];
  if ((*(uint *)(iVar15 + 0x13c) & 0x600000) == 0) {
    iVar9 = DAT_002db690 + 0x2db3fa;
  }
  else {
    if (-1 < (int)(*(uint *)(iVar15 + 0x13c) << 0x18)) goto LAB_002db408;
    iVar9 = DAT_002db694 + 0x2db404;
  }
LAB_002db402:
  do {
    while( true ) {
      while( true ) {
        png_error(iVar15,iVar9);
LAB_002db408:
        iVar9 = png_get_channels(iVar15,iVar20);
        if (iVar9 == 2) break;
        iVar9 = DAT_002db698 + 0x2db41a;
      }
      if ((piVar17[4] & 5U) != 1) break;
      iVar9 = DAT_002db69c + 0x2db42a;
    }
    local_38 = 1;
    if (*(char *)(iVar15 + 0x214) != '\0') {
      if (*(char *)(iVar15 + 0x214) != '\x01') {
        iVar9 = DAT_002db6a0 + 0x2db442;
        goto LAB_002db402;
      }
      local_38 = 7;
    }
    cVar1 = *(char *)(iVar20 + 0x18);
    if (cVar1 == '\b') {
      iVar20 = param_1[6];
      uVar21 = 0;
      iVar9 = param_1[7];
      local_58 = 7;
      break;
    }
    if (cVar1 == '\x10') goto LAB_002db6b4;
    iVar9 = DAT_002db6a4 + 0x2db458;
  } while( true );
LAB_002db468:
  if (*(char *)(iVar15 + 0x214) == '\x01') {
    iVar22 = 7;
    uVar19 = local_58 >> 1;
    if (1 < (int)uVar21) {
      iVar22 = (1 << (uVar19 & 0xff)) + -1;
    }
    uVar18 = (uVar21 & 1) << (3U - ((int)(uVar21 + 1) >> 1) & 0xff);
    uVar12 = 3;
    if (1 < (int)uVar21) {
      uVar12 = uVar19;
    }
    if ((iVar22 - (uVar18 & 7)) + iVar8 >> (uVar12 & 0xff) != 0) {
      uVar18 = uVar18 & 7;
      local_50 = 1 << (uVar19 & 0xff);
      uVar19 = (uVar21 & 1 ^ 1) << (3U - ((int)uVar21 >> 1) & 0xff) & 7;
      local_60 = 8;
      if (2 < (int)uVar21) {
        local_60 = 8 >> ((int)(uVar21 - 1) >> 1 & 0xffU);
      }
      goto LAB_002db4ec;
    }
  }
  else {
    uVar19 = 0;
    local_60 = 1;
    local_50 = 1;
    uVar18 = 0;
LAB_002db4ec:
    if (param_1[4] == 0) {
      local_5c = (byte *)(iVar20 + uVar19 * iVar9 + uVar18);
      for (; uVar19 < uVar5; uVar19 = uVar19 + local_60) {
        local_68 = (byte *)param_1[5];
        png_read_row(iVar15,local_68,0);
        for (pbVar13 = local_5c; pbVar13 < local_5c + (iVar8 - uVar18); pbVar13 = pbVar13 + local_50
            ) {
          uVar12 = (uint)local_68[1];
          if (uVar12 != 0) {
            bVar3 = *local_68;
            if (uVar12 != 0xff) {
              uVar12 = (uint)*(ushort *)((uint)*pbVar13 * 2 + *(int *)(iVar16 + DAT_002db6a8)) *
                       (0xff - uVar12) +
                       uVar12 * *(ushort *)((uint)bVar3 * 2 + *(int *)(iVar16 + DAT_002db6a8));
              uVar10 = uVar12 >> 0xf;
              bVar3 = (byte)(((uint)*(byte *)(*(int *)(iVar16 + DAT_002db6ac) + uVar10) *
                              (uVar12 & 0x7fff) >> 0xc) +
                             (uint)*(ushort *)(uVar10 * 2 + *(int *)(iVar16 + DAT_002db6b0)) >> 8);
            }
            *pbVar13 = bVar3;
          }
          local_68 = local_68 + 2;
        }
        local_5c = local_5c + local_60 * iVar9;
      }
    }
    else {
      bVar3 = *(byte *)(param_1[4] + 1);
      iVar22 = *(int *)(iVar16 + DAT_002db6a8);
      uVar2 = *(ushort *)((uint)bVar3 * 2 + iVar22);
      local_5c = (byte *)(iVar20 + uVar19 * iVar9 + uVar18);
      for (; uVar19 < uVar5; uVar19 = uVar19 + local_60) {
        local_68 = (byte *)param_1[5];
        png_read_row(iVar15,local_68,0);
        for (pbVar13 = local_5c; pbVar13 < local_5c + (iVar8 - uVar18); pbVar13 = pbVar13 + local_50
            ) {
          uVar12 = (uint)local_68[1];
          bVar7 = bVar3;
          if (uVar12 != 0) {
            bVar7 = *local_68;
            if (uVar12 != 0xff) {
              uVar12 = uVar12 * *(ushort *)(iVar22 + (uint)*local_68 * 2) +
                       (uint)uVar2 * (0xff - uVar12);
              uVar10 = uVar12 >> 0xf;
              bVar7 = (byte)(((uint)*(byte *)(*(int *)(iVar16 + DAT_002db6ac) + uVar10) *
                              (uVar12 & 0x7fff) >> 0xc) +
                             (uint)*(ushort *)(uVar10 * 2 + *(int *)(iVar16 + DAT_002db6b0)) >> 8);
            }
          }
          *pbVar13 = bVar7;
          local_68 = local_68 + 2;
        }
        local_5c = local_5c + local_60 * iVar9;
      }
    }
  }
  uVar21 = uVar21 + 1;
  local_58 = local_58 + -1;
  if (local_38 <= (int)uVar21) {
    return 1;
  }
  goto LAB_002db468;
LAB_002db6b4:
  iVar16 = param_1[6];
  uVar21 = (uint)((piVar17[4] & 0x21U) == 0x21);
  uVar18 = piVar17[4] & 1;
  iVar9 = uVar18 + 1;
  iVar20 = ((int)param_1[7] / 2) * 2;
  iVar22 = 7;
  uVar19 = 0;
  do {
    if (*(char *)(iVar15 + 0x214) == '\x01') {
      iVar6 = 7;
      uVar12 = iVar22 >> 1;
      if (1 < (int)uVar19) {
        iVar6 = (1 << (uVar12 & 0xff)) + -1;
      }
      uVar11 = (uVar19 & 1) << (3U - ((int)(uVar19 + 1) >> 1) & 0xff);
      uVar10 = 3;
      if (1 < (int)uVar19) {
        uVar10 = uVar12;
      }
      if ((iVar6 - (uVar11 & 7)) + iVar8 >> (uVar10 & 0xff) != 0) {
        iVar14 = iVar9 * (uVar11 & 7);
        iVar6 = iVar9 << (uVar12 & 0xff);
        local_64 = (uVar19 & 1 ^ 1) << (3U - ((int)uVar19 >> 1) & 0xff) & 7;
        local_58 = 8;
        if (2 < (int)uVar19) {
          local_58 = 8 >> ((int)(uVar19 - 1) >> 1 & 0xffU);
        }
        goto LAB_002db77c;
      }
    }
    else {
      iVar14 = 0;
      local_64 = 0;
      local_58 = 1;
      iVar6 = iVar9;
LAB_002db77c:
      local_50 = iVar16 + local_64 * iVar20 + iVar14 * 2;
      for (; local_64 < uVar5; local_64 = local_64 + local_58) {
        png_read_row(iVar15,param_1[5],0);
        local_54 = (ushort *)param_1[5];
        for (local_60 = local_50; local_60 < iVar8 * 2 * iVar9 + iVar14 * -2 + local_50;
            local_60 = local_60 + iVar6 * 2) {
          uVar2 = local_54[1];
          uVar12 = (uint)uVar2;
          uVar4 = uVar2;
          if ((uVar12 != 0) && (uVar4 = *local_54, uVar12 != DAT_002db834)) {
            uVar4 = __udivsi3(uVar12 * *local_54 + DAT_002db838,DAT_002db834);
          }
          *(ushort *)(local_60 + uVar21 * 2) = uVar4;
          if (uVar18 != 0) {
            *(ushort *)(local_60 + (uVar21 ^ 1) * 2) = uVar2;
          }
          local_54 = local_54 + 2;
        }
        local_50 = local_50 + local_58 * iVar20;
      }
    }
    uVar19 = uVar19 + 1;
    iVar22 = iVar22 + -1;
    if (local_38 <= (int)uVar19) {
      return 1;
    }
  } while( true );
}


