/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002639a4 sqlite3_result_int */

void sqlite3_result_int(int param_1,int param_2)

{
  FUN_00263730(param_1 + 8);
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x1c) = param_2 >> 0x1f;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


