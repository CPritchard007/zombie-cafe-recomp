/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261102 FUN_00261102 */

void FUN_00261102(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)param_2[2];
    for (iVar2 = 0; iVar2 < *param_2; iVar2 = iVar2 + 1) {
      FUN_002610aa(param_1,*puVar1,param_3,*param_2,param_4);
      FUN_0025fbda(param_1,puVar1[1]);
      FUN_0025fbda(param_1,puVar1[2]);
      puVar1 = puVar1 + 5;
    }
    FUN_0025fbda(param_1,param_2[2]);
    FUN_0025fbda(param_1,param_2);
  }
  return;
}


