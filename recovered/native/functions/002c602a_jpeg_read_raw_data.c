/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c602a jpeg_read_raw_data */

uint jpeg_read_raw_data(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[5] != 0xce) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 4) = param_1[0x23];
      *(int *)(param_1[2] + 8) = param_1[0x1d];
      (**(code **)param_1[2])(param_1);
    }
    uVar2 = param_1[0x50] * param_1[0x52];
    if (param_3 < uVar2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      (**(code **)*param_1)(param_1);
    }
    iVar1 = (**(code **)(param_1[0x71] + 0xc))(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      param_1[0x23] = uVar2 + param_1[0x23];
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x7e;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff,0x7e,*(code **)(*param_1 + 4),param_4);
    uVar2 = 0;
  }
  return uVar2;
}


