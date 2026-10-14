/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002624d0 FUN_002624d0 */

undefined8 FUN_002624d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 1;
  iVar1 = *(int *)(*param_1 + 0x14);
  iVar2 = *(int *)(*param_1 + 0x10);
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    if (((iVar3 != 1) && ((param_1[0x1c] & uVar4) != 0)) && (*(int *)(iVar2 + 4) != 0)) {
      FUN_00261f68();
    }
    uVar4 = uVar4 << 1;
    iVar2 = iVar2 + 0x10;
  }
  return CONCAT44(iVar1,param_1);
}


