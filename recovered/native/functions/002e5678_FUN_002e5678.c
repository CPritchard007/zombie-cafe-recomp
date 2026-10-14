/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e5678 FUN_002e5678 */

undefined4 FUN_002e5678(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  undefined4 *puVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  int local_44;
  ushort *local_40;
  ushort *local_3c;
  ushort *local_38;
  ushort *local_34;
  int local_30;
  int local_2c;
  
  puVar9 = (undefined4 *)*param_1;
  puVar12 = (ushort *)param_1[5];
  local_40 = (ushort *)param_1[7];
  uVar2 = puVar9[4];
  uVar5 = *(undefined4 *)*puVar9;
  iVar6 = 1;
  local_44 = 1;
  if ((int)(uVar2 << 0x1e) < 0) {
    local_44 = 3;
  }
  local_30 = puVar9[3];
  if ((uVar2 & 1) == 0) {
    png_error(uVar5,DAT_002e578c + 0x2e56be);
  }
  else {
    iVar6 = local_44;
    if ((int)(uVar2 << 0x1a) < 0) {
      puVar12 = puVar12 + 1;
      local_40 = local_40 + 1;
      iVar6 = -1;
    }
  }
  iVar3 = puVar9[2];
  for (; local_30 != 0; local_30 = local_30 + -1) {
    local_2c = 4;
    puVar11 = local_40;
    local_3c = puVar12;
    if (local_44 != 0) {
      local_2c = (local_44 + 1) * 2;
    }
    while (uVar2 = DAT_002e5790, local_38 = local_3c,
          puVar11 < (ushort *)((int)local_40 + (local_44 + 1) * iVar3 * 2)) {
      iVar1 = 0;
      uVar8 = local_3c[iVar6];
      uVar10 = (uint)uVar8;
      puVar11[iVar6] = uVar8;
      if ((uVar10 - 1 & 0xffff) <= uVar2) {
        iVar1 = __divsi3((uint)(uVar8 >> 1) + DAT_002e5794,uVar10);
      }
      iVar4 = uVar10 + DAT_002e5798;
      iVar7 = local_44;
      local_34 = puVar11;
      do {
        uVar8 = *local_38;
        uVar2 = (uint)uVar8;
        local_38 = local_38 + 1;
        if (uVar2 < uVar10) {
          if ((uVar2 != 0) && (iVar4 != 0)) {
            uVar8 = (ushort)(uVar2 * iVar1 + 0x4000 >> 0xf);
          }
        }
        else {
          uVar8 = (ushort)DAT_002e579c;
        }
        iVar7 = iVar7 + -1;
        *local_34 = uVar8;
        local_34 = local_34 + 1;
      } while (0 < iVar7);
      puVar11 = (ushort *)((int)puVar11 + local_2c);
      local_3c = (ushort *)((int)local_3c + local_2c);
    }
    png_write_row(uVar5,param_1[7]);
    puVar12 = (ushort *)((int)puVar12 + (param_1[6] & 0xfffffffe));
  }
  return 1;
}


