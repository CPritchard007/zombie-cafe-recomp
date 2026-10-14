/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d968 sqlite3_collation_needed */

undefined4 sqlite3_collation_needed(int param_1,undefined4 param_2,undefined4 param_3)

{
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = param_2;
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return 0;
}


