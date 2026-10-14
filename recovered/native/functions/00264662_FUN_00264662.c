/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264662 FUN_00264662 */

undefined8 FUN_00264662(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar1 = FUN_0025b154(param_2);
  for (uVar6 = 0; (int)uVar6 < *(int *)(param_1 + 0x14); uVar6 = uVar6 + 1) {
    uVar4 = uVar6;
    if ((int)uVar6 < 2) {
      uVar4 = uVar6 ^ 1;
    }
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x10) + uVar4 * 0x10);
    iVar3 = puVar5[3];
    if (((param_3 == 0) || (iVar2 = sqlite3_stricmp(param_3,*puVar5), iVar2 == 0)) &&
       (iVar3 = FUN_0025bb3c(iVar3 + 0x18,param_2,uVar1), iVar3 != 0)) goto LAB_002646b4;
  }
  iVar3 = 0;
LAB_002646b4:
  return CONCAT44(uVar1,iVar3);
}


