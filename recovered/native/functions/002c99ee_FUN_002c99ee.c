/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c99ee FUN_002c99ee */

void FUN_002c99ee(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  size_t __n;
  byte *pbVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_40;
  int local_3c;
  size_t local_38;
  
  iVar8 = *(int *)(param_1 + 0x78);
  iVar6 = *(int *)(param_1 + 0x1e4);
  __n = *(size_t *)(param_1 + 0x70);
  for (local_3c = 0; local_3c < param_4; local_3c = local_3c + 1) {
    memset((void *)*param_3,0,__n);
    iVar3 = *(int *)(iVar6 + 0x30);
    iVar2 = iVar6;
    for (iVar5 = 0; iVar5 < iVar8; iVar5 = iVar5 + 1) {
      pcVar4 = (char *)*param_3;
      iVar9 = *(int *)(iVar5 * 4 + *(int *)(iVar6 + 0x18));
      iVar7 = *(int *)(iVar2 + 0x34);
      pbVar1 = (byte *)(*param_2 + iVar5);
      local_40 = 0;
      for (local_38 = __n; local_38 != 0; local_38 = local_38 - 1) {
        *pcVar4 = *(char *)(iVar9 + (uint)*pbVar1 + *(int *)(local_40 * 4 + iVar7 + iVar3 * 0x40)) +
                  *pcVar4;
        pcVar4 = pcVar4 + 1;
        pbVar1 = pbVar1 + iVar8;
        local_40 = local_40 + 1 & 0xf;
      }
      iVar2 = iVar2 + 4;
    }
    *(uint *)(iVar6 + 0x30) = iVar3 + 1U & 0xf;
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


