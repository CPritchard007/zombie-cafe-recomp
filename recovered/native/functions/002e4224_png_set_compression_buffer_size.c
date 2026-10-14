/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4224 png_set_compression_buffer_size */

void png_set_compression_buffer_size(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = param_1;
    if ((int)param_2 < 1) {
      iVar1 = png_error(param_1,DAT_002e4280 + 0x2e4238);
    }
    if (*(int *)(iVar1 + 0x134) << 0x10 < 0) {
      *(uint *)(iVar1 + 0x380) = param_2;
    }
    else {
      if (*(int *)(iVar1 + 0x140) == 0) {
        if (5 < param_2) {
          if (*(uint *)(iVar1 + 0x180) == param_2) {
            return;
          }
          png_free_buffer_list(iVar1,iVar1 + 0x17c);
          *(uint *)(param_1 + 0x180) = param_2;
          return;
        }
        iVar1 = DAT_002e4288 + 0x2e4262;
      }
      else {
        iVar1 = DAT_002e4284 + 0x2e4258;
      }
      png_warning(param_1,iVar1);
    }
  }
  return;
}


