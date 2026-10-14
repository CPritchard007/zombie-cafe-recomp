/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002db83c FUN_002db83c */

undefined4 FUN_002db83c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint local_60;
  int local_5c;
  int local_58;
  int local_4c;
  int local_48;
  int local_3c;
  uint local_38;
  
  puVar9 = (undefined4 *)*param_1;
  iVar6 = *(int *)*puVar9;
  local_48 = 1;
  if (*(char *)(iVar6 + 0x214) != '\0') {
    if (*(char *)(iVar6 + 0x214) != '\x01') {
      png_error(iVar6,DAT_002db9f8 + 0x2db864);
    }
    local_48 = 7;
  }
  uVar7 = puVar9[3];
  iVar1 = puVar9[2];
  iVar5 = param_1[7];
  uVar14 = 1;
  if ((int)(puVar9[4] << 0x1e) < 0) {
    uVar14 = 3;
  }
  iVar15 = 7;
  uVar13 = 0;
  do {
    if (*(char *)(iVar6 + 0x214) == '\x01') {
      iVar2 = 7;
      uVar8 = iVar15 >> 1;
      if (1 < (int)uVar13) {
        iVar2 = (1 << (uVar8 & 0xff)) + -1;
      }
      uVar10 = (uVar13 & 1) << (3U - ((int)(uVar13 + 1) >> 1) & 0xff);
      uVar3 = 3;
      if (1 < (int)uVar13) {
        uVar3 = uVar8;
      }
      if ((iVar2 - (uVar10 & 7)) + iVar1 >> (uVar3 & 0xff) != 0) {
        local_3c = (uVar10 & 7) * uVar14;
        local_38 = uVar14 << (uVar8 & 0xff);
        local_60 = (uVar13 & 1 ^ 1) << (3U - ((int)uVar13 >> 1) & 0xff) & 7;
        local_58 = 8;
        if (2 < (int)uVar13) {
          local_58 = 8 >> ((int)(uVar13 - 1) >> 1 & 0xffU);
        }
        goto LAB_002db914;
      }
    }
    else {
      local_60 = 0;
      local_58 = 1;
      local_3c = 0;
      local_38 = uVar14;
LAB_002db914:
      local_4c = local_60 * iVar5;
      for (; local_60 < uVar7; local_60 = local_60 + local_58) {
        local_5c = param_1[5];
        png_read_row(iVar6,local_5c,0);
        iVar2 = param_1[6];
        for (uVar8 = iVar2 + local_4c + local_3c; uVar8 < iVar2 + local_4c + uVar14 * iVar1;
            uVar8 = uVar8 + local_38) {
          uVar3 = (uint)*(byte *)(local_5c + uVar14);
          if (uVar3 != 0) {
            uVar10 = 0;
            do {
              bVar11 = *(byte *)(local_5c + uVar10);
              if (uVar3 != 0xff) {
                uVar12 = (0xff - uVar3) *
                         (uint)*(ushort *)
                                ((uint)*(byte *)(uVar8 + uVar10) * 2 +
                                *(int *)(DAT_002db9fc + 0x2db976)) + (uint)bVar11 * 0xffff;
                uVar4 = uVar12 >> 0xf;
                bVar11 = (byte)(((uint)*(byte *)(*(int *)(DAT_002dba00 + 0x2db98a) + uVar4) *
                                 (uVar12 & 0x7fff) >> 0xc) +
                                (uint)*(ushort *)(uVar4 * 2 + *(int *)(DAT_002dba04 + 0x2db99e)) >>
                               8);
              }
              *(byte *)(uVar8 + uVar10) = bVar11;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar14);
          }
          local_5c = local_5c + uVar14 + 1;
        }
        local_4c = local_4c + local_58 * iVar5;
      }
    }
    uVar13 = uVar13 + 1;
    iVar15 = iVar15 + -1;
    if (local_48 <= (int)uVar13) {
      return 1;
    }
  } while( true );
}


