/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5f0c jpeg_start_decompress */

undefined4 jpeg_start_decompress(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[5] == 0xca) {
    jinit_master_decompress();
    if (param_1[0x10] != 0) {
      param_1[5] = 0xcf;
      return 1;
    }
    param_1[5] = 0xcb;
  }
  if (param_1[5] == 0xcb) {
    if (*(int *)(param_1[0x73] + 0x10) != 0) {
      while( true ) {
        if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
          (**(code **)param_1[2])(param_1);
        }
        iVar1 = (**(code **)param_1[0x73])(param_1);
        if (iVar1 == 0) {
          return 0;
        }
        if (iVar1 == 2) break;
        iVar3 = param_1[2];
        if ((iVar3 != 0) && ((iVar1 == 1 || (iVar1 == 3)))) {
          iVar1 = *(int *)(iVar3 + 4) + 1;
          *(int *)(iVar3 + 4) = iVar1;
          iVar3 = *(int *)(param_1[2] + 8);
          if (iVar3 <= iVar1) {
            *(int *)(param_1[2] + 8) = iVar3 + param_1[0x53];
          }
        }
      }
    }
    param_1[0x26] = param_1[0x24];
  }
  else if (param_1[5] != 0xcc) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  uVar2 = FUN_002c5e78(param_1);
  return uVar2;
}


