/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0478 FUN_002e0478 */

int FUN_002e0478(byte *param_1)

{
  int iVar1;
  
  iVar1 = (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 + (uint)param_1[3] +
          (uint)param_1[2] * 0x100;
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


