/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c610e jpeg_finish_output */

undefined4 jpeg_finish_output(int *param_1)

{
  int iVar1;
  
  if (param_1[5] - 0xcdU < 2) {
    if (param_1[0x10] != 0) {
      (**(code **)(param_1[0x6f] + 4))();
      param_1[5] = 0xd0;
      goto LAB_002c6158;
    }
  }
  else if (param_1[5] == 0xd0) goto LAB_002c6158;
  *(undefined4 *)(*param_1 + 0x14) = 0x15;
  *(int *)(*param_1 + 0x18) = param_1[5];
  (**(code **)*param_1)(param_1);
LAB_002c6158:
  while ((param_1[0x24] <= param_1[0x26] && (((undefined4 *)param_1[0x73])[5] == 0))) {
    iVar1 = (**(code **)param_1[0x73])(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  param_1[5] = 0xcf;
  return 1;
}


