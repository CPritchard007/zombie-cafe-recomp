/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026460e FUN_0026460e */

undefined8 FUN_0026460e(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_0025b154(param_2);
  for (uVar3 = 0; (int)uVar3 < *(int *)(param_1 + 0x14); uVar3 = uVar3 + 1) {
    uVar4 = uVar3;
    if ((int)uVar3 < 2) {
      uVar4 = uVar3 ^ 1;
    }
    if (((param_3 == 0) ||
        (iVar2 = sqlite3_stricmp(param_3,*(undefined4 *)(uVar4 * 0x10 + *(int *)(param_1 + 0x10))),
        iVar2 == 0)) &&
       (iVar2 = FUN_0025bb3c(*(int *)(*(int *)(param_1 + 0x10) + uVar4 * 0x10 + 0xc) + 8,param_2,
                             uVar1), iVar2 != 0)) goto LAB_00264660;
  }
  iVar2 = 0;
LAB_00264660:
  return CONCAT44(param_2,iVar2);
}


