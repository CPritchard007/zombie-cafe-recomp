/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dacd0 png_read_update_info */

void png_read_update_info(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x138) << 0x19;
    if (iVar1 < 0) {
      png_app_error(param_1,DAT_002dacfc + 0x2dacf8,iVar1,*(int *)(param_1 + 0x138),param_4);
    }
    else {
      png_read_start_row();
      png_read_transform_info(param_1,param_2);
    }
  }
  return;
}


