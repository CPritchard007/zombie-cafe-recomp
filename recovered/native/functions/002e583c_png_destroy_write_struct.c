/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e583c png_destroy_write_struct */

void png_destroy_write_struct(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    png_destroy_info_struct(iVar1);
    *param_1 = 0;
    if (*(int *)(iVar1 + 0x138) << 0x1e < 0) {
      deflateEnd(iVar1 + 0x144);
    }
    png_free_buffer_list(iVar1,iVar1 + 0x17c);
    png_free(iVar1,*(undefined4 *)(iVar1 + 0x1e4));
    png_free(iVar1,*(undefined4 *)(iVar1 + 0x1e0));
    png_free(iVar1,*(undefined4 *)(iVar1 + 0x1e8));
    png_free(iVar1,*(undefined4 *)(iVar1 + 0x1ec));
    png_free(iVar1,*(undefined4 *)(iVar1 + 0x1f0));
    png_free(iVar1,*(undefined4 *)(iVar1 + 500));
    FUN_002e48e0(iVar1);
    png_free(iVar1,*(undefined4 *)(iVar1 + 0x2e0));
    png_free(iVar1,*(undefined4 *)(iVar1 + 0x2e4));
    png_free(iVar1,*(undefined4 *)(iVar1 + 0x31c));
    png_destroy_png_struct(iVar1);
  }
  return;
}


