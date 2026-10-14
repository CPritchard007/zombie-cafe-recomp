/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025fc22 FUN_0025fc22 */

void FUN_0025fc22(undefined4 *param_1)

{
  if (param_1[2] != param_1[1]) {
    if (*(char *)((int)param_1 + 0x19) == '\x01') {
      FUN_0025fbda(*param_1);
    }
    else {
      sqlite3_free(param_1[2]);
    }
  }
  param_1[2] = 0;
  return;
}


