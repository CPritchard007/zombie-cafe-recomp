/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002639f0 sqlite3_result_zeroblob */

void sqlite3_result_zeroblob(int param_1,uint param_2)

{
  FUN_00263730(param_1 + 8);
  *(short *)(param_1 + 0x24) = (short)DAT_00263a1c;
  *(undefined1 *)(param_1 + 0x26) = 4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x18) = param_2 & (int)~param_2 >> 0x1f;
  *(undefined1 *)(param_1 + 0x27) = 1;
  return;
}


