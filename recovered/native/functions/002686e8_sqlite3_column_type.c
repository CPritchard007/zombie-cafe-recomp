/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002686e8 sqlite3_column_type */

undefined4 sqlite3_column_type(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00268688();
  uVar1 = sqlite3_value_type();
  FUN_00268620(param_1);
  return uVar1;
}


