/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264a84 sqlite3_stmt_busy */

uint sqlite3_stmt_busy(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && (uVar1 = 0, 0 < *(int *)(param_1 + 0x54))) {
    uVar1 = (uint)(*(int *)(param_1 + 0x30) + DAT_00264a9c == 0);
  }
  return uVar1;
}


