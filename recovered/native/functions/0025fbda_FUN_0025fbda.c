/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025fbda FUN_0025fbda */

void FUN_0025fbda(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != 0) {
    piVar2 = *(int **)(param_1 + 0x1f0);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      iVar1 = FUN_0025f450();
      *piVar2 = iVar3 + iVar1;
      return;
    }
    if (((param_2 != (undefined4 *)0x0) && (*(undefined4 **)(param_1 + 0x104) <= param_2)) &&
       (param_2 < *(undefined4 **)(param_1 + 0x108))) {
      *param_2 = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 **)(param_1 + 0x100) = param_2;
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
      return;
    }
  }
  sqlite3_free(param_2);
  return;
}


