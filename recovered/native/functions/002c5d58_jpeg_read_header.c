/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5d58 jpeg_read_header */

int jpeg_read_header(int *param_1,int param_2)

{
  int iVar1;
  
  if (1 < param_1[5] - 200U) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  iVar1 = jpeg_consume_input(param_1);
  if (iVar1 == 2) {
    if (param_2 != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x35;
      (**(code **)*param_1)(param_1);
    }
    jpeg_abort(param_1);
  }
  return iVar1;
}


