/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002645c6 FUN_002645c6 */

undefined8 FUN_002645c6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    iVar4 = -1;
  }
  else {
    iVar1 = FUN_0025b154(param_2);
    iVar4 = *(int *)(param_1 + 0x14) + -1;
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar4 * 0x10);
    for (; -1 < iVar4; iVar4 = iVar4 + -1) {
      uVar5 = *puVar3;
      iVar2 = FUN_0025b154(uVar5);
      if ((iVar1 == iVar2) && (iVar2 = sqlite3_stricmp(uVar5,param_2), iVar2 == 0)) break;
      puVar3 = puVar3 + -4;
    }
  }
  return CONCAT44(param_1,iVar4);
}


