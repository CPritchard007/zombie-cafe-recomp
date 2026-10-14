/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c126 FUN_0025c126 */

int FUN_0025c126(int param_1,code *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  do {
    iVar1 = 0;
    if (*(char *)(param_1 + 0x2b) == '\0') {
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))
                        (*(int **)(param_1 + 4),param_4,param_5,10);
    }
    if (iVar1 != 5) {
      return iVar1;
    }
    if (param_2 == (code *)0x0) {
      return 5;
    }
    iVar1 = (*param_2)(param_3);
  } while (iVar1 != 0);
  return 5;
}


