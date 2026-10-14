/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c54c CFColor::changeSaturation */

/* CFColor::changeSaturation(long, int) */

uint CFColor::changeSaturation(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 0x10 & 0xff;
  uVar4 = param_1 >> 8 & 0xff;
  iVar1 = __divsi3(uVar3 + uVar4 + (param_1 & 0xffU),3);
  uVar3 = CapcomMath::interpolate(iVar1,uVar3,param_2,0);
  if (0x100 < (int)uVar3) {
    uVar3 = 0x100;
  }
  uVar4 = CapcomMath::interpolate(iVar1,uVar4,param_2,0);
  if (0x100 < (int)uVar4) {
    uVar4 = 0x100;
  }
  uVar2 = CapcomMath::interpolate(iVar1,param_1 & 0xffU,param_2,0);
  if ((int)uVar2 < 0x101) {
    uVar2 = uVar2 & (int)~uVar2 >> 0x1f;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xff | param_1 & 0xff000000U | (uVar3 & (int)~uVar3 >> 0x1f & 0xff) << 0x10 |
         ((uVar4 & (int)~uVar4 >> 0x1f) << 0x18) >> 0x10;
}


