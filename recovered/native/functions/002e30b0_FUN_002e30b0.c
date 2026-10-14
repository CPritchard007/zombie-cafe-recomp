/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e30b0 FUN_002e30b0 */

uint FUN_002e30b0(int param_1,uint param_2)

{
  uint extraout_r1;
  uint uVar1;
  
  param_2 = param_2 & 0xb;
  if (param_2 != 0) goto LAB_002e30de;
  uVar1 = *(uint *)(param_1 + 0x134);
  if (-1 < (int)(uVar1 << 0x10)) {
    png_app_warning(param_1,DAT_002e30ec + 0x2e30ca);
    param_2 = *(uint *)(param_1 + 0x134) & 0xb;
    if (param_2 != 0) goto LAB_002e30de;
  }
  png_error(param_1,DAT_002e30f0 + 0x2e30da);
  param_2 = extraout_r1;
  do {
    param_2 = param_2 & ~uVar1;
LAB_002e30de:
    uVar1 = -param_2 & param_2;
  } while (param_2 != uVar1);
  return param_2 & 0xff;
}


