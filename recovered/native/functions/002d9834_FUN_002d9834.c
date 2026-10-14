/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9834 FUN_002d9834 */

void FUN_002d9834(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(**(int **)*param_1 + 0x39c);
  iVar1 = png_gamma_significant(iVar3);
  uVar2 = 4;
  if (iVar1 != 0) {
    if (DAT_002d9884 < iVar3) {
LAB_002d986e:
      param_1[8] = 3;
      uVar2 = png_reciprocal(iVar3);
      param_1[9] = uVar2;
      return;
    }
    if (iVar3 != 0) {
      __divsi3(iVar3 * 0xb + 2,5);
      iVar1 = png_gamma_significant();
      if (iVar1 != 0) goto LAB_002d986e;
    }
    uVar2 = 1;
  }
  param_1[8] = uVar2;
  return;
}


