/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00241284 ZombieCafe::NextLotteryRandom */

/* ZombieCafe::NextLotteryRandom() */

void __thiscall ZombieCafe::NextLotteryRandom(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_002412bc;
  if (0x15 < *(uint *)(this + DAT_002412bc)) {
    *(undefined4 *)(this + DAT_002412bc) = 0;
  }
  iVar3 = *(int *)(this + iVar1);
  iVar2 = arc4random();
  *(int *)(this + (iVar3 + 0x1cc) * 4) = iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f;
  iVar2 = *(int *)(this + iVar1);
  *(int *)(this + iVar1) = iVar2 + 1;
  if (0x15 < iVar2 + 1) {
    *(undefined4 *)(this + DAT_002412bc) = 0;
  }
  return;
}


