/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e60d4 png_write_png */

void png_write_png(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (-1 < *(int *)(param_2 + 8) << 0x10) {
    png_app_error(param_1,DAT_002e61a0 + 0x2e60f0);
    return;
  }
  png_write_info();
  if ((int)(param_3 << 0x1a) < 0) {
    png_set_invert_mono(param_1);
  }
  if (((int)(param_3 << 0x19) < 0) && (*(int *)(param_2 + 8) << 0x1e < 0)) {
    png_set_shift(param_1,param_2 + 0x94);
  }
  if ((int)(param_3 << 0x1d) < 0) {
    png_set_packing(param_1);
  }
  if ((int)(param_3 << 0x17) < 0) {
    png_set_swap_alpha(param_1);
  }
  if ((param_3 & 0x1800) != 0) {
    if ((param_3 & 0x1000) == 0) {
      if ((param_3 & 0x800) == 0) goto LAB_002e6162;
      uVar1 = 0;
    }
    else {
      if ((param_3 & 0x800) != 0) {
        png_app_error(param_1,DAT_002e61a4 + 0x2e614c);
      }
      uVar1 = 1;
    }
    png_set_filler(param_1,0,uVar1);
  }
LAB_002e6162:
  if ((int)(param_3 << 0x18) < 0) {
    png_set_bgr(param_1);
  }
  if ((int)(param_3 << 0x16) < 0) {
    png_set_swap(param_1);
  }
  if ((int)(param_3 << 0x1c) < 0) {
    png_set_packswap(param_1);
  }
  if ((int)(param_3 << 0x15) < 0) {
    png_set_invert_alpha(param_1);
  }
  png_write_image(param_1,*(undefined4 *)(param_2 + 0x108));
  png_write_end(param_1,param_2);
  return;
}


