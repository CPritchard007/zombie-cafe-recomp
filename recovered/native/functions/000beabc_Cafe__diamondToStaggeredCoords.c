/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000beabc Cafe::diamondToStaggeredCoords */

/* Cafe::diamondToStaggeredCoords(int, int) */

uint Cafe::diamondToStaggeredCoords(int param_1,int param_2)

{
  return ((int)((param_1 + param_2) - (param_2 - param_1 & 1U)) >> 1) << 0x10 |
         param_2 - param_1 & 0xffffU;
}


