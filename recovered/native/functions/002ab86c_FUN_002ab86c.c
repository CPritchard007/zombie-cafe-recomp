/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab86c FUN_002ab86c */

int FUN_002ab86c(uint param_1,int param_2,uint param_3,int param_4)

{
  return ((uint)(param_2 << 0x18) >> 0x10) + (param_1 & 0xff) + (param_3 & 0xff) * 0x10000 +
         param_4 * 0x1000000;
}


