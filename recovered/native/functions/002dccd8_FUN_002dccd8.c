/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dccd8 FUN_002dccd8 */

int FUN_002dccd8(int param_1,int param_2,int param_3)

{
  if ((param_2 + DAT_002dcd18 == 0) || (param_2 == -1)) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x1000;
    param_2 = DAT_002dcd2c;
    if (param_3 != 0) {
      param_2 = DAT_002dcd1c;
    }
  }
  else if (((param_2 + DAT_002dcd20 == 0) || (param_2 == -2)) &&
          (param_2 = DAT_002dcd28, param_3 != 0)) {
    param_2 = DAT_002dcd24;
  }
  return param_2;
}


