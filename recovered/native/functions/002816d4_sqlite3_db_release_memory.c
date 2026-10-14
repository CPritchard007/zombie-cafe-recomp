/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002816d4 sqlite3_db_release_memory */

undefined4 sqlite3_db_release_memory(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_00281728;
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  FUN_00261fe0(param_1);
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x14); iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x10) + iVar3 * 0x10 + 4);
    if ((iVar2 != 0) && (*(int *)(*(int *)(**(int **)(iVar2 + 4) + 0xb4) + 0x28) != 0)) {
      (**(code **)(iVar1 + 0x28177c))();
    }
  }
  FUN_00262022(param_1);
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return 0;
}


