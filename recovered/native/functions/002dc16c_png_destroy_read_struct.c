/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc16c png_destroy_read_struct */

void png_destroy_read_struct(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (iVar2 = *param_1, iVar2 != 0)) {
    png_destroy_info_struct(iVar2,param_3);
    png_destroy_info_struct(iVar2,param_2);
    *param_1 = 0;
    png_destroy_gamma_table(iVar2);
    png_free(iVar2,*(undefined4 *)(iVar2 + 0x33c));
    png_free(iVar2,*(undefined4 *)(iVar2 + 0x388));
    png_free(iVar2,*(undefined4 *)(iVar2 + 0x378));
    png_free(iVar2,*(undefined4 *)(iVar2 + 0x2c8));
    png_free(iVar2,*(undefined4 *)(iVar2 + 0x2cc));
    if (*(int *)(iVar2 + 0x308) << 0x13 < 0) {
      png_zfree(iVar2,*(undefined4 *)(iVar2 + 0x204));
    }
    uVar1 = DAT_002dc240 & *(uint *)(iVar2 + 0x308);
    *(uint *)(iVar2 + 0x308) = uVar1;
    if ((int)(uVar1 << 0x12) < 0) {
      png_free(iVar2,*(undefined4 *)(iVar2 + 0x274));
    }
    *(uint *)(iVar2 + 0x308) = DAT_002dc244 & *(uint *)(iVar2 + 0x308);
    inflateEnd(iVar2 + 0x144);
    png_free(iVar2,*(undefined4 *)(iVar2 + 0x29c));
    png_free(iVar2,*(undefined4 *)(iVar2 + 0x368));
    png_free(iVar2,*(undefined4 *)(iVar2 + 0x31c));
    png_destroy_png_struct(iVar2);
  }
  return;
}


