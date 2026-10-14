/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f782 FUN_0025f782 */

undefined8 FUN_0025f782(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 0x28); uVar3 = uVar3 + 1) {
    piVar2 = (int *)(*(int *)(param_1 + 0x2c) + uVar3 * 4);
    while (iVar1 = *piVar2, iVar1 != 0) {
      if (*(uint *)(iVar1 + 8) < param_2) {
        piVar2 = (int *)(iVar1 + 0xc);
      }
      else {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        *piVar2 = *(int *)(iVar1 + 0xc);
        FUN_0025bd5e(iVar1);
        FUN_0025f73c(iVar1);
      }
    }
  }
  return CONCAT44(param_2,param_1);
}


