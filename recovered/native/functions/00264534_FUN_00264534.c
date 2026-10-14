/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264534 FUN_00264534 */

undefined4 FUN_00264534(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x14) <= iVar3) {
      return 0;
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0x10);
    if ((puVar2[1] != 0) &&
       ((param_2 == 0 ||
        (iVar1 = sqlite3_stricmp(param_2,*puVar2,puVar2[1],puVar2,param_4), iVar1 == 0)))) break;
    iVar3 = iVar3 + 1;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0x10 + 4);
}


