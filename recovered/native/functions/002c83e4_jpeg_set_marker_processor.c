/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c83e4 jpeg_set_marker_processor */

void jpeg_set_marker_processor(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0xfe) {
    *(undefined4 *)(param_1[0x74] + 0x1c) = param_3;
  }
  else if (param_2 - 0xe0U < 0x10) {
    *(undefined4 *)((param_2 + -0xd8) * 4 + param_1[0x74]) = param_3;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  return;
}


