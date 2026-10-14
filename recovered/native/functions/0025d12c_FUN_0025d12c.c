/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d12c FUN_0025d12c */

int FUN_0025d12c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0025d154;
  if (param_2 != 0) {
    iVar1 = 0;
    while ((iVar1 < *(int *)(param_1 + 0x14) &&
           (*(int *)(*(int *)(param_1 + 0x10) + iVar1 * 0x10 + 0xc) != param_2))) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


