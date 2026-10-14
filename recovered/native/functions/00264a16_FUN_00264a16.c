/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264a16 FUN_00264a16 */

bool FUN_00264a16(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_2 + 0x24) <= iVar3) {
      return true;
    }
    iVar2 = iVar3 * 4;
    if ((*(int *)(*(int *)(param_2 + 4) + iVar2) != *(int *)(*(int *)(param_1 + 4) + iVar2)) ||
       (*(char *)(*(int *)(param_2 + 0x1c) + iVar3) != *(char *)(*(int *)(param_1 + 0x1c) + iVar3)))
    {
      return false;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + iVar2);
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar2) != 0) {
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = sqlite3_stricmp();
    }
    if (iVar1 != 0) break;
    iVar3 = iVar3 + 1;
  }
  return iVar1 == 0;
}


