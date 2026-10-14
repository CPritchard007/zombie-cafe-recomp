/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027cc8e sqlite3_backup_finish */

int * sqlite3_backup_finish(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    iVar2 = param_1[5];
    sqlite3_mutex_enter(*(undefined4 *)(iVar2 + 0xc));
    FUN_00261f68(param_1[6]);
    if (*param_1 != 0) {
      sqlite3_mutex_enter(*(undefined4 *)(*param_1 + 0xc));
    }
    if (*param_1 != 0) {
      *(int *)(param_1[6] + 0x10) = *(int *)(param_1[6] + 0x10) + -1;
    }
    if (param_1[10] != 0) {
      for (piVar1 = (int *)(**(int **)(param_1[6] + 4) + 0x58); (int *)*piVar1 != param_1;
          piVar1 = (int *)*piVar1 + 0xb) {
      }
      *piVar1 = param_1[0xb];
    }
    FUN_0027c594(param_1[1],0);
    piVar1 = (int *)(param_1[7] & -(uint)(param_1[7] != 0x65));
    FUN_00268578(*param_1,piVar1,0);
    if (*param_1 != 0) {
      FUN_0027c6ec();
    }
    FUN_00262002(param_1[6]);
    if (*param_1 != 0) {
      sqlite3_free(param_1);
    }
    FUN_0027c6ec(iVar2);
  }
  return piVar1;
}


