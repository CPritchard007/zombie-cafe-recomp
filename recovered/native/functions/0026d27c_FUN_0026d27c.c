/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d27c FUN_0026d27c */

int FUN_0026d27c(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if ((param_2[0xf] == 0) || (iVar1 = FUN_0026d27c(), iVar1 == 0)) {
    iVar1 = 0;
    if (param_3 < *(int *)*param_2) {
      iVar1 = FUN_0026cf38(param_1,*(undefined4 *)(param_3 * 0x14 + ((int *)*param_2)[2]));
    }
  }
  return iVar1;
}


