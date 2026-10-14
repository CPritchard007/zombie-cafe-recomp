/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4930 FUN_002e4930 */

uint FUN_002e4930(uint param_1,uint param_2,int param_3)

{
  if ((param_2 < 0x80) || (param_2 <= param_1)) {
    param_1 = 0xff;
  }
  else if (param_1 != 0) {
    if (DAT_002e4988 < param_2) {
      param_1 = param_1 * 0xff;
    }
    else {
      param_1 = param_3 * param_1 + 0x40 >> 7;
    }
    param_1 = ((uint)*(byte *)(*(int *)(DAT_002e498c + 0x2e4968) + (param_1 >> 0xf)) *
               (param_1 & 0x7fff) >> 0xc) +
              (uint)*(ushort *)((param_1 >> 0xf) * 2 + *(int *)(DAT_002e4990 + 0x2e4978)) >> 8 &
              0xff;
  }
  return param_1;
}


