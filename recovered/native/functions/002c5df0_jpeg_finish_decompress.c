/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5df0 jpeg_finish_decompress */

undefined4 jpeg_finish_decompress(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[5];
  if (iVar1 - 0xcdU < 2) {
    if (param_1[0x10] != 0) {
LAB_002c5e38:
      *(undefined4 *)(*param_1 + 0x14) = 0x15;
      *(int *)(*param_1 + 0x18) = param_1[5];
      (**(code **)*param_1)(param_1);
      goto LAB_002c5e5e;
    }
    if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x45;
      (**(code **)*param_1)();
    }
    (**(code **)(param_1[0x6f] + 4))(param_1);
  }
  else if (iVar1 != 0xcf) {
    if (iVar1 == 0xd2) goto LAB_002c5e5e;
    goto LAB_002c5e38;
  }
  param_1[5] = 0xd2;
LAB_002c5e5e:
  do {
    if (((undefined4 *)param_1[0x73])[5] != 0) {
      (**(code **)(param_1[6] + 0x18))(param_1);
      jpeg_abort(param_1);
      return 1;
    }
    iVar1 = (**(code **)param_1[0x73])(param_1);
  } while (iVar1 != 0);
  return 0;
}


