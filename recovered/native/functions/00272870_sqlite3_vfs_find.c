/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00272870 sqlite3_vfs_find */

int sqlite3_vfs_find(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = sqlite3_initialize();
  iVar3 = 0;
  if (iVar1 == 0) {
    uVar2 = FUN_0025ad68(2);
    sqlite3_mutex_enter();
    iVar3 = *(int *)(FUN_002728dc + DAT_002728b4 + 4);
    while (((iVar3 != 0 && (param_1 != (char *)0x0)) &&
           (iVar1 = strcmp(param_1,*(char **)(iVar3 + 0x10)), iVar1 != 0))) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    sqlite3_mutex_leave(uVar2);
  }
  return iVar3;
}


