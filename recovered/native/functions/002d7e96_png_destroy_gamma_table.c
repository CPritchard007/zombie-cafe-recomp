/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7e96 png_destroy_gamma_table */

void png_destroy_gamma_table(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  png_free(param_1,*(undefined4 *)(param_1 + 0x250),param_3,param_4,param_4);
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(int *)(param_1 + 0x254) != 0) {
    iVar1 = *(int *)(param_1 + 0x248);
    for (; iVar2 < 1 << (8U - iVar1 & 0xff); iVar2 = iVar2 + 1) {
      png_free(param_1,*(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0x254)),iVar2 * 4,
               *(int *)(param_1 + 0x254),param_4);
    }
    png_free(param_1,*(undefined4 *)(param_1 + 0x254));
    *(undefined4 *)(param_1 + 0x254) = 0;
  }
  iVar2 = 0;
  png_free(param_1,*(undefined4 *)(param_1 + 600));
  *(undefined4 *)(param_1 + 600) = 0;
  png_free(param_1,*(undefined4 *)(param_1 + 0x25c));
  *(undefined4 *)(param_1 + 0x25c) = 0;
  if (*(int *)(param_1 + 0x260) != 0) {
    iVar1 = *(int *)(param_1 + 0x248);
    for (; iVar2 < 1 << (8U - iVar1 & 0xff); iVar2 = iVar2 + 1) {
      png_free(param_1,*(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0x260)));
    }
    png_free(param_1,*(undefined4 *)(param_1 + 0x260));
    *(undefined4 *)(param_1 + 0x260) = 0;
  }
  if (*(int *)(param_1 + 0x264) != 0) {
    iVar2 = *(int *)(param_1 + 0x248);
    for (iVar1 = 0; iVar1 < 1 << (8U - iVar2 & 0xff); iVar1 = iVar1 + 1) {
      png_free(param_1,*(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 0x264)));
    }
    png_free(param_1,*(undefined4 *)(param_1 + 0x264));
    *(undefined4 *)(param_1 + 0x264) = 0;
  }
  return;
}


