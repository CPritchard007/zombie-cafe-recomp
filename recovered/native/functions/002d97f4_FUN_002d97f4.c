/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d97f4 FUN_002d97f4 */

uint FUN_002d97f4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + DAT_002d9830);
  uVar2 = uVar1 & 2;
  if ((*(byte *)(param_1 + DAT_002d9830) & 2) != 0) {
    uVar2 = 2;
  }
  if (((int)(uVar1 << 0x1d) < 0) || (*(short *)(param_1 + 0x210) != 0)) {
    uVar2 = uVar2 | 1;
  }
  if (*(char *)(param_1 + 0x218) == '\x10') {
    uVar2 = uVar2 | 4;
  }
  if ((int)(uVar1 << 0x1f) < 0) {
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}


