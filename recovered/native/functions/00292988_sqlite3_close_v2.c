/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00292988 sqlite3_close_v2 */

int sqlite3_close_v2(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_0026bcbc(param_1);
    if (iVar1 == 0) {
      param_1 = FUN_0026adf0(DAT_002929b0);
    }
    else {
      param_1 = FUN_0027c8a8(param_1,1);
    }
  }
  return param_1;
}


