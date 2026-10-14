/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5fb0 jpeg_read_scanlines */

undefined8 jpeg_read_scanlines(int *param_1,int param_2,undefined4 param_3)

{
  int local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  if (param_1[5] != 0xcd) {
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
    local_1c = 0;
    (**(code **)(param_1[0x70] + 4))(param_1,param_2,&local_1c,param_3);
    param_1[0x23] = local_1c + param_1[0x23];
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x7e;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    local_1c = 0;
  }
  return CONCAT44(param_1,local_1c);
}


