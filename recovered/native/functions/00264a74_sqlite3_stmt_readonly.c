/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264a74 sqlite3_stmt_readonly */

undefined1 sqlite3_stmt_readonly(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 100);
  }
  return uVar1;
}


