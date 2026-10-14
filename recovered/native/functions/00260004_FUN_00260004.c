/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260004 FUN_00260004 */

void FUN_00260004(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != (int *)0x0) {
    for (; iVar1 < param_2[1]; iVar1 = iVar1 + 1) {
      FUN_0025fbda(param_1,*(undefined4 *)(*param_2 + iVar1 * 8));
    }
    FUN_0025fbda(param_1);
    FUN_0025fbda(param_1,param_2);
  }
  return;
}


