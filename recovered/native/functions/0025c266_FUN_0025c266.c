/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c266 FUN_0025c266 */

void FUN_0025c266(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  for (iVar1 = *(int *)(*(int *)(param_1 + 4) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if ((*(char *)(iVar1 + 0x5c) != '\0') &&
       ((param_5 != 0 ||
        ((*(int *)(iVar1 + 0x28) == param_3 && (*(int *)(iVar1 + 0x2c) == param_4)))))) {
      *(undefined1 *)(iVar1 + 0x5b) = 0;
    }
  }
  return;
}


