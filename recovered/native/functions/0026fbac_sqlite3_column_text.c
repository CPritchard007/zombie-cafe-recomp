/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026fbac sqlite3_column_text */

undefined4 sqlite3_column_text(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00268688();
  uVar1 = sqlite3_value_text();
  FUN_00268620(param_1);
  return uVar1;
}


