/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c4fc CFColor::changeBrightness */

/* CFColor::changeBrightness(long, int) */

uint CFColor::changeBrightness(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (param_1 >> 0x10 & 0xffU) + param_2;
  if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  uVar3 = (param_1 >> 8 & 0xffU) + param_2;
  if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  uVar1 = (param_1 & 0xffU) + param_2;
  if ((int)uVar1 < 0x100) {
    uVar1 = uVar1 & (int)~uVar1 >> 0x1f;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1 | param_1 & 0xff000000U | (uVar2 & (int)~uVar2 >> 0x1f) << 0x10 |
         ((uVar3 & (int)~uVar3 >> 0x1f) << 0x18) >> 0x10;
}


