/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c64e sqlite3_column_count */

uint sqlite3_column_count(uint param_1)

{
  if (param_1 != 0) {
    param_1 = (uint)*(ushort *)(param_1 + 0x2c);
  }
  return param_1;
}


