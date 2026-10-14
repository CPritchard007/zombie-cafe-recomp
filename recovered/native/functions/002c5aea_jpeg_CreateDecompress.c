/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5aea jpeg_CreateDecompress */

void jpeg_CreateDecompress(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x5a) {
    *(undefined4 *)(*param_1 + 0x14) = 0xd;
    *(undefined4 *)(*param_1 + 0x18) = 0x5a;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(code **)*param_1)();
  }
  if (param_3 != 0x1e8) {
    *(undefined4 *)(*param_1 + 0x14) = 0x16;
    *(undefined4 *)(*param_1 + 0x18) = 0x1e8;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar1 = *param_1;
  iVar2 = param_1[3];
  memset(param_1,0,0x1e8);
  *param_1 = iVar1;
  param_1[3] = iVar2;
  param_1[4] = 1;
  jinit_memory_mgr(param_1);
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x4e] = 0;
  jinit_marker_reader(param_1);
  jinit_input_controller(param_1);
  param_1[5] = 200;
  return;
}


