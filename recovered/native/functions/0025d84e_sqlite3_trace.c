/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d84e sqlite3_trace */

undefined4 sqlite3_trace(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x94) = param_2;
  *(undefined4 *)(param_1 + 0x98) = param_3;
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return uVar1;
}


