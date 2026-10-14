/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c8764 jpeg_new_colormap */

void jpeg_new_colormap(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0x6f];
  if (param_1[5] != 0xcf) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (((param_1[0x15] == 0) || (param_1[0x1a] == 0)) || (param_1[0x22] == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x18);
    param_1[0x79] = iVar1;
    (**(code **)(iVar1 + 0xc))(param_1);
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  return;
}


