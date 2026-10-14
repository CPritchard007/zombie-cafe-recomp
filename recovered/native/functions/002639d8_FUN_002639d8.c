/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002639d8 FUN_002639d8 */

void FUN_002639d8(undefined4 param_1)

{
  undefined4 uVar1;
  
  sqlite3_context_db_handle();
  uVar1 = sqlite3_changes();
  sqlite3_result_int(param_1,uVar1);
  return;
}


