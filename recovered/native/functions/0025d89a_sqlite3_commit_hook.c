/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d89a sqlite3_commit_hook */

undefined4 sqlite3_commit_hook(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_3;
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return uVar1;
}


