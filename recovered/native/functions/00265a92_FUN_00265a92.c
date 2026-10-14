/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265a92 FUN_00265a92 */

void FUN_00265a92(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = sqlite3_libversion();
  sqlite3_result_text(param_1,uVar1,0xffffffff,0);
  return;
}


