/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c98a4 FUN_002c98a4 */

void FUN_002c98a4(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  size_t __n;
  int iVar14;
  int local_68;
  short *local_64;
  short *local_5c;
  int local_54;
  size_t local_50;
  int *local_4c;
  int local_48;
  int local_44;
  
  iVar11 = *(int *)(param_1 + 0x78);
  __n = *(size_t *)(param_1 + 0x70);
  iVar8 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x150);
  local_54 = 0;
  local_4c = param_2;
  while (local_54 < param_4) {
    memset((void *)*param_3,0,__n);
    iVar14 = iVar8;
    for (iVar6 = 0; iVar6 < iVar11; iVar6 = iVar6 + 1) {
      pcVar7 = (char *)*param_3;
      pbVar3 = (byte *)(*local_4c + iVar6);
      if (*(int *)(iVar8 + 0x54) == 0) {
        local_5c = *(short **)(iVar14 + 0x44);
        iVar4 = 1;
        local_44 = iVar11;
      }
      else {
        pbVar3 = pbVar3 + iVar11 * (__n - 1);
        pcVar7 = pcVar7 + (__n - 1);
        local_5c = (short *)(*(int *)(iVar14 + 0x44) + (__n + 1) * 2);
        iVar4 = -1;
        local_44 = -iVar11;
      }
      iVar9 = *(int *)(*(int *)(iVar8 + 0x18) + iVar6 * 4);
      iVar10 = *(int *)(*(int *)(iVar8 + 0x10) + iVar6 * 4);
      local_64 = local_5c;
      iVar5 = 0;
      local_48 = 0;
      local_68 = 0;
      for (local_50 = __n; local_50 != 0; local_50 = local_50 - 1) {
        uVar12 = (uint)*(byte *)(iVar2 + (local_68 + local_64[iVar4] + 8 >> 4) + (uint)*pbVar3);
        bVar1 = *(byte *)(iVar9 + uVar12);
        *pcVar7 = bVar1 + *pcVar7;
        iVar13 = uVar12 - *(byte *)(iVar10 + (uint)bVar1);
        *local_64 = (short)iVar13 * 3 + (short)iVar5;
        local_68 = iVar13 * 7;
        iVar5 = local_48 + iVar13 * 5;
        pcVar7 = pcVar7 + iVar4;
        pbVar3 = pbVar3 + local_44;
        local_64 = local_64 + iVar4;
        local_48 = iVar13;
      }
      *(short *)((int)local_5c + iVar4 * 2 * __n) = (short)iVar5;
      iVar14 = iVar14 + 4;
    }
    local_54 = local_54 + 1;
    local_4c = local_4c + 1;
    *(uint *)(iVar8 + 0x54) = (uint)(*(int *)(iVar8 + 0x54) == 0);
    param_3 = param_3 + 1;
  }
  return;
}


