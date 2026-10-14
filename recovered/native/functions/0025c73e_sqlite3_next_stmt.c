/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c73e sqlite3_next_stmt */

undefined4 sqlite3_next_stmt(int param_1,int param_2)

{
  undefined4 uVar1;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
  }
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return uVar1;
}


