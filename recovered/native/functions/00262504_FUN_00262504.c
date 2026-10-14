/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262504 FUN_00262504 */

undefined8 FUN_00262504(int *param_1)

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
      FUN_00262002();
    }
    uVar4 = uVar4 << 1;
    iVar2 = iVar2 + 0x10;
  }
  return CONCAT44(iVar1,param_1);
}


