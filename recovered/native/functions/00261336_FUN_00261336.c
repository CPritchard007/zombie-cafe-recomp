/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261336 FUN_00261336 */

undefined8 FUN_00261336(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  uVar4 = param_3;
  if (param_2 != (int *)0x0) {
    for (; iVar3 < *param_2; iVar3 = iVar3 + 1) {
      puVar2 = (undefined4 *)(param_2[2] + iVar3 * 0x14);
      uVar1 = FUN_002612ac(param_1,*puVar2,param_3,param_4,param_1,param_3,uVar4);
      *puVar2 = uVar1;
    }
  }
  return CONCAT44(param_3,param_1);
}


