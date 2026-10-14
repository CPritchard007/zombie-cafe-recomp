/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002760a6 FUN_002760a6 */

undefined8 FUN_002760a6(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_20;
  
  iVar2 = *param_1;
  iVar3 = *(int *)(iVar2 + 0x10);
  for (local_20 = 0; local_20 < *(int *)(iVar2 + 0x14); local_20 = local_20 + 1) {
    for (puVar1 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 0x10); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      FUN_00276050(param_1,puVar1[2],param_2);
    }
    iVar3 = iVar3 + 0x10;
  }
  return CONCAT44(param_2,local_20);
}


