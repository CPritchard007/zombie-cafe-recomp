/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f414c CFPoint::add */

/* CFPoint::add(long, long) */

uint CFPoint::add(long param_1,long param_2)

{
  return param_2 + param_1 & 0xffffU | (((uint)param_2 >> 0x10) + ((uint)param_1 >> 0x10)) * 0x10000
  ;
}


