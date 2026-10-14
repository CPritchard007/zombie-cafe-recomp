/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c922 FUN_0025c922 */

void FUN_0025c922(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    for (; iVar1 < *param_1; iVar1 = iVar1 + 1) {
      FUN_0025c912(*(undefined4 *)(iVar1 * 0x14 + param_1[2]),param_2,iVar1 * 0x14,param_1[2],
                   param_4);
    }
  }
  return;
}


