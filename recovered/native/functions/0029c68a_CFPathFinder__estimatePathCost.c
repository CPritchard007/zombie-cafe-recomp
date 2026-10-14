/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c68a CFPathFinder::estimatePathCost */

/* CFPathFinder::estimatePathCost(void*, unsigned int, unsigned int) */

void CFPathFinder::estimatePathCost(void *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float __x;
  
  uVar3 = *(uint *)(param_3 * 4 + *(int *)((int)param_1 + 0x10));
  uVar2 = *(uint *)(param_2 * 4 + *(int *)((int)param_1 + 0x10));
  uVar4 = uVar3 - uVar2;
  iVar1 = (int)(uVar4 & 0xffff | ((uVar3 >> 0x10) - (uVar2 >> 0x10)) * 0x10000) >> 0x10;
  iVar5 = (int)(short)uVar4;
  __x = (float)__floatsisf(iVar1 * iVar1 + iVar5 * iVar5);
  sqrtf(__x);
  return;
}


