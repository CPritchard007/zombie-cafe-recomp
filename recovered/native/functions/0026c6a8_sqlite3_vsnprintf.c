/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c6a8 sqlite3_vsnprintf */

undefined4 sqlite3_vsnprintf(int param_1,undefined4 param_2)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  
  if (0 < param_1) {
    local_2c = 0;
    local_20 = 0;
    local_18 = 0;
    local_12 = 0;
    local_14 = 0;
    local_13 = 0;
    local_28 = param_2;
    local_24 = param_2;
    local_1c = param_1;
    FUN_002675a8(&local_2c);
    param_2 = FUN_002684c4(&local_2c);
  }
  return param_2;
}


