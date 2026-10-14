/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e07d0 png_crc_read */

void png_crc_read(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    png_read_data();
    png_calculate_crc(param_1,param_2,param_3);
  }
  return;
}


