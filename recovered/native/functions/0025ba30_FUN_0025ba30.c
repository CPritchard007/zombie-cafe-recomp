/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ba30 FUN_0025ba30 */

uint FUN_0025ba30(byte *param_1)

{
  return (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[3] |
         (uint)param_1[2] << 8;
}


