/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f73c FUN_0025f73c */

void FUN_0025f73c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar2 = (int *)param_1[4];
    FUN_0025f6b8(*param_1);
    if (piVar2[3] != 0) {
      iVar1 = *piVar2;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
    }
  }
  return;
}


