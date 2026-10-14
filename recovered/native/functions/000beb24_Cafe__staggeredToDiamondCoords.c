/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000beb24 Cafe::staggeredToDiamondCoords */

/* Cafe::staggeredToDiamondCoords(int, int) */

uint Cafe::staggeredToDiamondCoords(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 + (param_2 + 1 >> 1);
  return uVar1 & 0xffff | (uVar1 - param_2) * 0x10000;
}


