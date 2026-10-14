/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c968 sqlite3_close */

int sqlite3_close(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_0026bcbc(param_1);
    if (iVar1 == 0) {
      param_1 = FUN_0026adf0(DAT_0027c990);
    }
    else {
      param_1 = FUN_0027c8a8(param_1,0);
    }
  }
  return param_1;
}


