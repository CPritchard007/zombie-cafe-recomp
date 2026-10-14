/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d9b8 sqlite3_extended_result_codes */

undefined4 sqlite3_extended_result_codes(int param_1,int param_2)

{
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  *(uint *)(param_1 + 0x30) = -(uint)(param_2 != 0) | 0xff;
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return 0;
}


