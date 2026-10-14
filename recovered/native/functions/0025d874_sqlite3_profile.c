/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d874 sqlite3_profile */

undefined4 sqlite3_profile(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x9c) = param_2;
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return uVar1;
}


