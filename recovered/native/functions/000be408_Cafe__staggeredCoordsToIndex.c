/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be408 Cafe::staggeredCoordsToIndex */

/* Cafe::staggeredCoordsToIndex(long) */

int Cafe::staggeredCoordsToIndex(long param_1)

{
  return (param_1 >> 0x10) + **(int **)(DAT_000be41c + 0xbe412) * (int)(short)param_1;
}


