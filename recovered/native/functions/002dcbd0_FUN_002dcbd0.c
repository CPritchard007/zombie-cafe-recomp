/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dcbd0 FUN_002dcbd0 */

int FUN_002dcbd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x138);
    if ((int)(uVar1 << 0x19) < 0) {
      png_app_error(param_1,DAT_002dcc14 + 0x2dcbe8,uVar1,param_1,param_4);
      param_1 = 0;
    }
    else if ((param_2 == 0) || ((*(uint *)(param_1 + 0x134) & 1) != 0)) {
      *(uint *)(param_1 + 0x138) = uVar1 | 0x4000;
      param_1 = 1;
    }
    else {
      png_app_error(param_1,DAT_002dcc18 + 0x2dcc00,uVar1,param_1,param_4);
      param_1 = 0;
    }
  }
  return param_1;
}


