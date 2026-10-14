/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4d98 png_write_info_before_PLTE */

void png_write_info_before_PLTE(int param_1,undefined4 *param_2)

{
  uint uVar1;
  
  if (((param_2 != (undefined4 *)0x0) && (param_1 != 0)) &&
     ((*(uint *)(param_1 + 0x134) & 0x400) == 0)) {
    png_write_sig();
    if (((*(uint *)(param_1 + 0x134) & 0x1000) != 0) && (*(int *)(param_1 + 0x328) != 0)) {
      png_warning(param_1,DAT_002e4eb4 + 0x2e4dda);
      *(undefined4 *)(param_1 + 0x328) = 0;
    }
    png_write_IHDR(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 6),
                   *(undefined1 *)((int)param_2 + 0x19),*(undefined1 *)((int)param_2 + 0x1a),
                   *(undefined1 *)((int)param_2 + 0x1b),*(undefined1 *)(param_2 + 7));
    if (((-1 < (short)*(ushort *)((int)param_2 + 0x72)) &&
        ((int)((uint)*(ushort *)((int)param_2 + 0x72) << 0x1c) < 0)) &&
       ((int)(param_2[2] << 0x1f) < 0)) {
      png_write_gAMA_fixed(param_1,param_2[10]);
    }
    if (-1 < *(short *)((int)param_2 + 0x72)) {
      uVar1 = param_2[2];
      if ((uVar1 & 0x1000) == 0) {
        if ((uVar1 & 0x800) != 0) {
          png_write_sRGB(param_1,*(undefined2 *)(param_2 + 0x1c));
        }
      }
      else {
        if ((uVar1 & 0x800) != 0) {
          png_app_warning(param_1,DAT_002e4eb8 + 0x2e4e3e);
        }
        png_write_iCCP(param_1,param_2[0x1d],param_2[0x1e]);
      }
    }
    if ((int)(param_2[2] << 0x1e) < 0) {
      png_write_sBIT(param_1,param_2 + 0x25,*(undefined1 *)((int)param_2 + 0x19));
    }
    if (((-1 < (short)*(ushort *)((int)param_2 + 0x72)) &&
        ((int)((uint)*(ushort *)((int)param_2 + 0x72) << 0x1b) < 0)) &&
       ((int)(param_2[2] << 0x1d) < 0)) {
      png_write_cHRM_fixed(param_1,param_2 + 0xb);
    }
    if (param_2[0x3c] != 0) {
      FUN_002e4d20(param_1,param_2,1);
    }
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x400;
  }
  return;
}


