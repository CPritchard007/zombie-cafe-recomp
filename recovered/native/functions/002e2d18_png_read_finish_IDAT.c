/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e2d18 png_read_finish_IDAT */

void png_read_finish_IDAT(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(uint *)(param_1 + 0x138) & 8) == 0) {
    png_read_IDAT_data(param_1,0,0,param_4,param_4);
    *(undefined4 *)(param_1 + 0x150) = 0;
    if ((*(uint *)(param_1 + 0x138) & 8) == 0) {
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 8;
      *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 8;
    }
  }
  if (*(int *)(param_1 + 0x140) == DAT_002e2d64) {
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    png_crc_finish(param_1,*(undefined4 *)(param_1 + 0x1fc));
  }
  return;
}


