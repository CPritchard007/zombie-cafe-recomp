/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5dc8 jpeg_has_multiple_scans */

undefined4 jpeg_has_multiple_scans(int *param_1)

{
  if (8 < param_1[5] - 0xcaU) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  return *(undefined4 *)(param_1[0x73] + 0x10);
}


