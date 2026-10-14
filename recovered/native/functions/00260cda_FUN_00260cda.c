/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260cda FUN_00260cda */

void FUN_00260cda(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    iVar2 = *param_2;
    iVar1 = iVar2;
    if (iVar2 != 0) {
      iVar1 = param_2[1];
    }
    *param_2 = iVar2 + 1;
    param_2[1] = (int)param_3;
    if (iVar1 != 0) {
      *param_3 = iVar1;
      param_3[1] = *(int *)(iVar1 + 4);
      if (*(int **)(iVar1 + 4) == (int *)0x0) {
        *(int **)(param_1 + 8) = param_3;
      }
      else {
        **(int **)(iVar1 + 4) = (int)param_3;
      }
      *(int **)(iVar1 + 4) = param_3;
      return;
    }
  }
  *param_3 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) != 0) {
    *(int **)(*(int *)(param_1 + 8) + 4) = param_3;
  }
  param_3[1] = 0;
  *(int **)(param_1 + 8) = param_3;
  return;
}


