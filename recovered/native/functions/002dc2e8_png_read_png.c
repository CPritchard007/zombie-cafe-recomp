/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc2e8 png_read_png */

undefined8 png_read_png(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *local_1c;
  
  local_1c = param_2;
  if ((param_2 != (undefined4 *)0x0) && (param_1 != 0)) {
    png_read_info();
    if (DAT_002dc440 < (uint)param_2[1]) {
      png_error(param_1,DAT_002dc444 + 0x2dc310);
    }
    if ((param_3 & 0x8000) != 0) {
      png_set_scale_16(param_1);
    }
    if ((int)(param_3 << 0x1f) < 0) {
      png_set_strip_16(param_1);
    }
    if ((int)(param_3 << 0x1e) < 0) {
      png_set_strip_alpha(param_1);
    }
    if ((int)(param_3 << 0x1d) < 0) {
      png_set_packing(param_1);
    }
    if ((int)(param_3 << 0x1c) < 0) {
      png_set_packswap(param_1);
    }
    if ((int)(param_3 << 0x1b) < 0) {
      png_set_expand(param_1);
    }
    if ((int)(param_3 << 0x1a) < 0) {
      png_set_invert_mono(param_1);
    }
    if (((int)(param_3 << 0x19) < 0) && ((int)(param_2[2] << 0x1e) < 0)) {
      png_set_shift(param_1,param_2 + 0x25);
    }
    if ((int)(param_3 << 0x18) < 0) {
      png_set_bgr(param_1);
    }
    if ((int)(param_3 << 0x17) < 0) {
      png_set_swap_alpha(param_1);
    }
    if ((int)(param_3 << 0x16) < 0) {
      png_set_swap(param_1);
    }
    if ((int)(param_3 << 0x15) < 0) {
      png_set_invert_alpha(param_1);
    }
    if ((int)(param_3 << 0x12) < 0) {
      png_set_gray_to_rgb(param_1);
    }
    if ((int)(param_3 << 0x11) < 0) {
      png_set_expand_16(param_1);
    }
    png_set_interlace_handling(param_1);
    png_read_update_info(param_1,param_2);
    png_free_data(param_1,param_2,0x40,0);
    if (param_2[0x42] == 0) {
      uVar1 = png_malloc(param_1,param_2[1] << 2);
      param_2[0x42] = uVar1;
      for (uVar2 = 0; uVar2 < (uint)param_2[1]; uVar2 = uVar2 + 1) {
        *(undefined4 *)(uVar2 * 4 + param_2[0x42]) = 0;
      }
      param_2[0x3a] = param_2[0x3a] | 0x40;
      for (uVar2 = 0; uVar2 < (uint)param_2[1]; uVar2 = uVar2 + 1) {
        local_1c = (undefined4 *)(param_2[0x42] + uVar2 * 4);
        uVar1 = png_malloc(param_1,param_2[3]);
        *local_1c = uVar1;
      }
    }
    png_read_image(param_1,param_2[0x42]);
    param_2[2] = param_2[2] | 0x8000;
    png_read_end(param_1,param_2);
  }
  return CONCAT44(local_1c,param_1);
}


