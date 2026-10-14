/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262002 FUN_00262002 */

void FUN_00262002(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 9) != '\0') {
    iVar1 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == 0) {
      sqlite3_mutex_leave(*(undefined4 *)(*(int *)(param_1 + 4) + 0x38));
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return;
}


