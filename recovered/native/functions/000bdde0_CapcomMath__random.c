/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bdde0 CapcomMath::random */

/* CapcomMath::random(int) */

undefined4 CapcomMath::random(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  
  uVar2 = 0;
  if (0 < param_1) {
    iVar1 = arc4random();
    __aeabi_idivmod(iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f,param_1);
    uVar2 = extraout_r1;
  }
  return uVar2;
}


