/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026a4e8 FUN_0026a4e8 */

int * FUN_0026a4e8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    puVar2 = (undefined4 *)param_2[2];
    for (iVar3 = 0; iVar3 < *param_2; iVar3 = iVar3 + 1) {
      iVar1 = FUN_0026a49e(param_1,*puVar2,param_3,*param_2,param_4);
      if (iVar1 != 0) {
        return (int *)0x1;
      }
      puVar2 = puVar2 + 5;
    }
    param_2 = (int *)0x0;
  }
  return param_2;
}


