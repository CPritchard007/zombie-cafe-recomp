/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e5500 FUN_002e5500 */

undefined4 FUN_002e5500(int *param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  undefined1 *puVar13;
  int local_54;
  undefined1 *local_50;
  ushort *local_4c;
  int local_48;
  ushort *local_44;
  undefined1 *local_40;
  int local_3c;
  undefined4 local_38;
  int local_30;
  int local_2c;
  
  puVar4 = (undefined4 *)*param_1;
  puVar11 = (ushort *)param_1[5];
  puVar13 = (undefined1 *)param_1[7];
  uVar7 = *(undefined4 *)*puVar4;
  local_54 = puVar4[3];
  uVar8 = puVar4[4];
  iVar12 = 1;
  if ((int)(uVar8 << 0x1e) < 0) {
    iVar12 = 3;
  }
  iVar5 = puVar4[2];
  if ((uVar8 & 1) == 0) {
    for (; puVar3 = puVar11, puVar6 = puVar13, local_54 != 0; local_54 = local_54 + -1) {
      for (; puVar6 < puVar13 + iVar5 * iVar12; puVar6 = puVar6 + 1) {
        uVar8 = (uint)*puVar3 * 0xff >> 0xf;
        *puVar6 = (char)(((uint)*(byte *)(*(int *)(DAT_002e5670 + 0x2e561e) + uVar8) *
                          ((uint)*puVar3 * 0x1fe0000 >> 0x11) >> 0xc) +
                         (uint)*(ushort *)(uVar8 * 2 + *(int *)(DAT_002e5674 + 0x2e562e)) >> 8);
        puVar3 = puVar3 + 1;
      }
      png_write_row(uVar7,puVar13);
      puVar11 = (ushort *)((int)puVar11 + (param_1[6] & 0xfffffffeU));
    }
  }
  else {
    local_48 = iVar12;
    if ((int)(uVar8 << 0x1a) < 0) {
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
      local_48 = -1;
    }
    iVar9 = iVar12 + 1;
    for (; local_54 != 0; local_54 = local_54 + -1) {
      local_30 = 2;
      if (iVar12 != 0) {
        local_30 = iVar9;
      }
      local_2c = 4;
      local_50 = puVar13;
      local_4c = puVar11;
      if (iVar12 != 0) {
        local_2c = iVar9 * 2;
      }
      while( true ) {
        local_40 = local_50;
        local_44 = local_4c;
        if (puVar13 + iVar9 * iVar5 <= local_50) break;
        uVar1 = local_4c[local_48];
        uVar8 = (uint)uVar1;
        uVar10 = uVar8 * 0xff + DAT_002e5668;
        local_50[local_48] = (char)(uVar10 >> 0x10);
        local_38 = 0;
        local_3c = iVar12;
        if (((uVar10 >> 0x10 & 0xff) - 1 & 0xff) < 0xfe) {
          local_38 = __divsi3((uint)(uVar1 >> 1) + DAT_002e566c,uVar8);
        }
        do {
          uVar1 = *local_44;
          local_44 = local_44 + 1;
          uVar2 = FUN_002e4930(uVar1,uVar8,local_38);
          *local_40 = uVar2;
          local_3c = local_3c + -1;
          local_40 = local_40 + 1;
        } while (0 < local_3c);
        local_50 = local_50 + local_30;
        local_4c = (ushort *)((int)local_4c + local_2c);
      }
      png_write_row(uVar7,param_1[7]);
      puVar11 = (ushort *)((int)puVar11 + (param_1[6] & 0xfffffffeU));
    }
  }
  return 1;
}


