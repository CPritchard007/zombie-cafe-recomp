/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c700 sqlite3_bind_parameter_count */

int sqlite3_bind_parameter_count(int param_1)

{
  if (param_1 != 0) {
    param_1 = (int)*(short *)(param_1 + 0x4c);
  }
  return param_1;
}


