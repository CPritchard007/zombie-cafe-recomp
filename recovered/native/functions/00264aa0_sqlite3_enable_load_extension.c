/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264aa0 sqlite3_enable_load_extension */

undefined4 sqlite3_enable_load_extension(int param_1,int param_2)

{
  uint uVar1;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x18) & DAT_00264acc;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18) | 0x20000000;
  }
  *(uint *)(param_1 + 0x18) = uVar1;
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return 0;
}


