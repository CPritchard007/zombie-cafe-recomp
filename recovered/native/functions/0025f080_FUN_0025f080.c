/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f080 FUN_0025f080 */

void FUN_0025f080(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_0025f04c(param_1,200);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_1;
    if (*(int *)(param_1 + 4) != 0) {
      *(int **)(*(int *)(param_1 + 4) + 0x38) = piVar2;
    }
    piVar2[0xf] = *(int *)(param_1 + 4);
    piVar2[0xe] = 0;
    iVar1 = DAT_0025f0a8;
    *(int **)(param_1 + 4) = piVar2;
    piVar2[0xc] = iVar1;
  }
  return;
}


