/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c60c0 jpeg_start_output */

void jpeg_start_output(int *param_1,int param_2)

{
  if ((param_1[5] != 0xcc) && (param_1[5] != 0xcf)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  if ((*(int *)(param_1[0x73] + 0x14) != 0) && (param_1[0x24] < param_2)) {
    param_2 = param_1[0x24];
  }
  param_1[0x26] = param_2;
  FUN_002c5e78(param_1);
  return;
}


