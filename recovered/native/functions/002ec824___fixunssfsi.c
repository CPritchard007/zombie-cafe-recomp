/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ec824 __fixunssfsi */

uint __fixunssfsi(uint param_1)

{
  uint uVar1;
  
  if ((SUB41(param_1 >> 0x1f,0)) || (param_1 << 1 < 0x7f000000)) {
    return 0;
  }
  uVar1 = 0x9e - ((param_1 << 1) >> 0x18);
  if (-1 < (int)uVar1) {
    return (param_1 << 8 | 0x80000000) >> (uVar1 & 0xff);
  }
  if ((uVar1 == 0xffffff9f) && ((param_1 & 0x7fffff) != 0)) {
    return 0;
  }
  return 0xffffffff;
}


