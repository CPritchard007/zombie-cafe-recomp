/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260082 FUN_00260082 */

undefined8 FUN_00260082(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x138) != 0) {
    for (; iVar3 < *(int *)(param_1 + 0x120); iVar3 = iVar3 + 1) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x138) + iVar3 * 4);
      if ((*(int **)(iVar2 + 8) != (int *)0x0) &&
         (pcVar1 = *(code **)(**(int **)(iVar2 + 8) + param_2), pcVar1 != (code *)0x0)) {
        (*pcVar1)();
      }
      *(undefined4 *)(iVar2 + 0x14) = 0;
      FUN_00260036(iVar2);
    }
    FUN_0025fbda(param_1);
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return CONCAT44(param_2,param_1);
}


