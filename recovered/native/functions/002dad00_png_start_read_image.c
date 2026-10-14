/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dad00 png_start_read_image */

void png_start_read_image(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x138) << 0x19;
    if (iVar1 < 0) {
      png_app_error(param_1,DAT_002dad20 + 0x2dad1c,iVar1,*(int *)(param_1 + 0x138),param_4);
    }
    else {
      png_read_start_row();
    }
  }
  return;
}


