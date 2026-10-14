/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5da0 jpeg_input_complete */

undefined4 jpeg_input_complete(int *param_1)

{
  if (10 < param_1[5] - 200U) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  return *(undefined4 *)(param_1[0x73] + 0x14);
}


