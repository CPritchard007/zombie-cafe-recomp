/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025add4 sqlite3_vfs_unregister */

undefined4 sqlite3_vfs_unregister(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0025ad68(2);
  sqlite3_mutex_enter();
  FUN_0025acf8(param_1);
  sqlite3_mutex_leave(uVar1);
  return 0;
}


