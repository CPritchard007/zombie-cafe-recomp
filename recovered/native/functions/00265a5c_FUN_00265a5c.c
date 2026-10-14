/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265a5c FUN_00265a5c */

void FUN_00265a5c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  sqlite3_value_int(*param_3);
  uVar1 = sqlite3_compileoption_get();
  sqlite3_result_text(param_1,uVar1,0xffffffff,0);
  return;
}


