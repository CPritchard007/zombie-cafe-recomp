/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00270420 sqlite3_column_bytes */

undefined4 sqlite3_column_bytes(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00268688();
  uVar1 = sqlite3_value_bytes();
  FUN_00268620(param_1);
  return uVar1;
}


