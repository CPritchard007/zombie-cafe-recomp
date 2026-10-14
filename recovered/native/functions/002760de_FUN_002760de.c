/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002760de FUN_002760de */

void FUN_002760de(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  for (iVar4 = 0; iVar4 < *(int *)(iVar3 + 0x14); iVar4 = iVar4 + 1) {
    puVar2 = (undefined4 *)(*(int *)(iVar3 + 0x10) + iVar4 * 0x10);
    if ((puVar2[1] != 0) &&
       ((param_2 == 0 ||
        (iVar1 = sqlite3_stricmp(param_2,*puVar2,puVar2[1],puVar2,param_4), iVar1 == 0)))) {
      FUN_00275ec4(param_1,iVar4);
    }
  }
  return;
}


