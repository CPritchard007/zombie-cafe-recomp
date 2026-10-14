/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025acb4 FUN_0025acb4 */

void FUN_0025acb4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0025accc + 0x25acbe;
  *(int *)(param_1 * 4 + iVar2) = param_2;
  iVar1 = (param_1 + 10) * 4;
  if (*(int *)(iVar1 + iVar2) < param_2) {
    *(int *)(iVar1 + iVar2) = param_2;
  }
  return;
}


