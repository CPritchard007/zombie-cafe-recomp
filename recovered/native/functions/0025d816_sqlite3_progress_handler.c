/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d816 sqlite3_progress_handler */

void sqlite3_progress_handler(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x114) = param_3;
    *(int *)(param_1 + 0x11c) = param_2;
    *(undefined4 *)(param_1 + 0x118) = param_4;
  }
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return;
}


