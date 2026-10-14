/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00292a52 FUN_00292a52 */

undefined4 FUN_00292a52(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_1 <= param_4) {
    FUN_0025ad28();
    sqlite3_wal_checkpoint(param_2,param_3);
    FUN_0025ad3c();
  }
  return 0;
}


