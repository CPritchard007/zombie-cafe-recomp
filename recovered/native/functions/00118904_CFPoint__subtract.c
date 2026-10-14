/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118904 CFPoint::subtract */

/* CFPoint::subtract(long, long) */

uint CFPoint::subtract(long param_1,long param_2)

{
  return param_1 - param_2 & 0xffffU | (((uint)param_1 >> 0x10) - ((uint)param_2 >> 0x10)) * 0x10000
  ;
}


