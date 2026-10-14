/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263cc8 FUN_00263cc8 */

void FUN_00263cc8(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (param_1[0xe] == 0) {
      *(int *)(*param_1 + 4) = param_1[0xf];
    }
    else {
      *(int *)(param_1[0xe] + 0x3c) = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
      *(int *)(param_1[0xf] + 0x38) = param_1[0xe];
    }
    param_1[0xc] = DAT_00263cf8;
    *param_1 = 0;
    FUN_00263bd6();
  }
  return;
}


