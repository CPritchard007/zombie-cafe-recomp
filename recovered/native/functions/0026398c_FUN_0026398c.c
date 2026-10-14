/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026398c FUN_0026398c */

void FUN_0026398c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  sqlite3_context_db_handle();
  uVar2 = sqlite3_last_insert_rowid();
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  sqlite3_result_int64(param_1,uVar1,(int)uVar2,uVar1);
  return;
}


