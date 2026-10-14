/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d7ea sqlite3_busy_handler */

undefined4 sqlite3_busy_handler(int param_1,undefined4 param_2,undefined4 param_3)

{
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  *(undefined4 *)(param_1 + 0x1b0) = param_3;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return 0;
}


