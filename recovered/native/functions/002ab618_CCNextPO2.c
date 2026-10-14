/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab618 CCNextPO2 */

/* CCNextPO2(unsigned int) */

int CCNextPO2(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1 >> 1 | param_1 - 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  return (uVar1 | uVar1 >> 0x10) + 1;
}


