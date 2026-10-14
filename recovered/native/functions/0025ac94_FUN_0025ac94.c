/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ac94 FUN_0025ac94 */

void FUN_0025ac94(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0025acb0 + 0x25aca0;
  iVar1 = (param_1 + 10) * 4;
  param_2 = param_2 + *(int *)(param_1 * 4 + iVar2);
  *(int *)(param_1 * 4 + iVar2) = param_2;
  if (*(int *)(iVar1 + iVar2) < param_2) {
    *(int *)(iVar1 + iVar2) = param_2;
  }
  return;
}


