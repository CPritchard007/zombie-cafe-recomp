/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261f68 FUN_00261f68 */

void FUN_00261f68(undefined4 *param_1)

{
  int iVar1;
  
  if ((*(char *)((int)param_1 + 9) != '\0') &&
     (param_1[3] = param_1[3] + 1, *(char *)((int)param_1 + 10) == '\0')) {
    iVar1 = sqlite3_mutex_try(*(undefined4 *)(param_1[1] + 0x38));
    if (iVar1 != 0) {
      for (iVar1 = param_1[5]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
        if (*(char *)(iVar1 + 10) != '\0') {
          sqlite3_mutex_leave(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x38));
          *(undefined1 *)(iVar1 + 10) = 0;
        }
      }
      sqlite3_mutex_enter(*(undefined4 *)(param_1[1] + 0x38));
      *(undefined4 *)(param_1[1] + 4) = *param_1;
      do {
        *(undefined1 *)((int)param_1 + 10) = 1;
        do {
          param_1 = (undefined4 *)param_1[5];
          if (param_1 == (undefined4 *)0x0) {
            return;
          }
        } while (param_1[3] == 0);
        sqlite3_mutex_enter(*(undefined4 *)(param_1[1] + 0x38));
        *(undefined4 *)(param_1[1] + 4) = *param_1;
      } while( true );
    }
    *(undefined4 *)(param_1[1] + 4) = *param_1;
    *(undefined1 *)((int)param_1 + 10) = 1;
  }
  return;
}


