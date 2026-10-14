/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025cbd0 sqlite3_set_authorizer */

undefined4 sqlite3_set_authorizer(int param_1,undefined4 param_2,undefined4 param_3)

{
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  *(undefined4 *)(param_1 + 0x110) = param_3;
  FUN_0025c5ec(param_1);
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return 0;
}


