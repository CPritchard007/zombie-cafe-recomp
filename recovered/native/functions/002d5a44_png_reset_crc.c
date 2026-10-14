/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5a44 png_reset_crc */

void png_reset_crc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = crc32(0,0,0);
  *(undefined4 *)(param_1 + 0x200) = uVar1;
  return;
}


