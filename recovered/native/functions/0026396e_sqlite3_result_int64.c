/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026396e sqlite3_result_int64 */

void sqlite3_result_int64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00263730(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


