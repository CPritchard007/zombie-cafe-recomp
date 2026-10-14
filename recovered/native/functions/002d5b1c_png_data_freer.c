/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5b1c png_data_freer */

void png_data_freer(int param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    puVar1 = (uint *)(param_2 + 0xe8);
    if (param_3 == 1) {
      param_4 = param_4 | *puVar1;
    }
    else {
      if (param_3 != 2) {
        png_error(param_1,DAT_002d5b4c + 0x2d5b46,param_3,param_4,param_4);
        return;
      }
      param_4 = *puVar1 & ~param_4;
    }
    *puVar1 = param_4;
  }
  return;
}


