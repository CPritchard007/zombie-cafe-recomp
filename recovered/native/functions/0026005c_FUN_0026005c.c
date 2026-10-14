/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026005c FUN_0026005c */

void FUN_0026005c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x13c) = 0;
  if (iVar1 != 0) {
    FUN_0025c5ec();
    do {
      iVar2 = *(int *)(iVar1 + 0x18);
      FUN_00260036(iVar1);
      iVar1 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}


