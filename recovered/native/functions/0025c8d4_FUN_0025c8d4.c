/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c8d4 FUN_0025c8d4 */

int * FUN_0025c8d4(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    puVar2 = (undefined4 *)param_2[2];
    for (iVar3 = *param_2; 0 < iVar3; iVar3 = iVar3 + -1) {
      iVar1 = FUN_0025c882(param_1,*puVar2);
      if (iVar1 != 0) {
        return (int *)0x2;
      }
      puVar2 = puVar2 + 5;
    }
    param_2 = (int *)0x0;
  }
  return param_2;
}


