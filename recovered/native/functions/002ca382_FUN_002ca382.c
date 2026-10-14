/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ca382 FUN_002ca382 */

void FUN_002ca382(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  short *psVar18;
  uint uVar19;
  int iVar20;
  byte *pbVar21;
  int iVar22;
  short *local_8c;
  undefined1 *local_88;
  int local_80;
  int local_78;
  int local_74;
  short *local_70;
  int local_6c;
  int local_64;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 *local_3c;
  undefined4 *local_38;
  
  iVar17 = *(int *)(param_1 + 0x1e4);
  iVar10 = *(int *)(iVar17 + 0x18);
  iVar5 = *(int *)(param_1 + 0x150);
  iVar11 = *(int *)(param_1 + 0x70);
  piVar6 = *(int **)(param_1 + 0x88);
  iVar12 = *(int *)(iVar17 + 0x28);
  iVar13 = *piVar6;
  iVar14 = piVar6[1];
  iVar7 = piVar6[2];
  local_3c = param_2;
  local_38 = param_3;
  for (iVar15 = 0; iVar15 < param_4; iVar15 = iVar15 + 1) {
    pbVar21 = (byte *)*local_3c;
    local_3c = local_3c + 1;
    local_70 = *(short **)(iVar17 + 0x20);
    local_88 = (undefined1 *)*local_38;
    local_38 = local_38 + 1;
    if (*(int *)(iVar17 + 0x24) == 0) {
      *(undefined4 *)(iVar17 + 0x24) = 1;
      local_6c = 3;
      local_4c = 1;
    }
    else {
      pbVar21 = pbVar21 + iVar11 * 3 + -3;
      local_88 = local_88 + iVar11 + -1;
      local_70 = local_70 + (iVar11 + 1) * 3;
      *(undefined4 *)(iVar17 + 0x24) = 0;
      local_6c = -3;
      local_4c = -1;
    }
    iVar20 = 0;
    local_74 = 0;
    local_78 = 0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_8c = local_70;
    iVar1 = 0;
    local_80 = 0;
    iVar22 = 0;
    for (local_64 = iVar11; local_64 != 0; local_64 = local_64 + -1) {
      psVar18 = local_8c + local_6c;
      uVar19 = (uint)*(byte *)(iVar5 + *(int *)(iVar12 + (local_80 + *psVar18 + 8 >> 4) * 4) +
                              (uint)*pbVar21);
      uVar3 = (uint)*(byte *)(iVar5 + *(int *)(iVar12 + (psVar18[1] + iVar22 + 8 >> 4) * 4) +
                             (uint)pbVar21[1]);
      uVar8 = (uint)*(byte *)(iVar5 + *(int *)(iVar12 + (iVar1 + psVar18[2] + 8 >> 4) * 4) +
                             (uint)pbVar21[2]);
      puVar16 = (ushort *)
                (*(int *)(((int)uVar19 >> 3) * 4 + iVar10) +
                (((int)uVar3 >> 2) * 0x20 + ((int)uVar8 >> 3)) * 2);
      if (*puVar16 == 0) {
        FUN_002c9fcc(param_1);
      }
      iVar1 = *puVar16 - 1;
      *local_88 = (char)iVar1;
      iVar2 = uVar19 - *(byte *)(iVar13 + iVar1);
      iVar4 = uVar3 - *(byte *)(iVar14 + iVar1);
      iVar9 = uVar8 - *(byte *)(iVar7 + iVar1);
      *local_8c = (short)local_78 + (short)iVar2 * 3;
      local_78 = local_58 + iVar2 * 5;
      local_80 = iVar2 * 7;
      local_8c[1] = (short)local_74 + (short)iVar4 * 3;
      local_74 = local_54 + iVar4 * 5;
      iVar22 = iVar4 * 7;
      local_8c[2] = (short)iVar9 * 3 + (short)iVar20;
      iVar1 = iVar9 * 7;
      iVar20 = local_50 + iVar9 * 5;
      pbVar21 = pbVar21 + local_6c;
      local_88 = local_88 + local_4c;
      local_8c = psVar18;
      local_58 = iVar2;
      local_54 = iVar4;
      local_50 = iVar9;
    }
    local_70 = (short *)((int)local_70 + local_6c * 2 * iVar11);
    *local_70 = (short)local_78;
    local_70[1] = (short)local_74;
    local_70[2] = (short)iVar20;
  }
  return;
}


