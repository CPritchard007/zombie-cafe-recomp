/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002412e2 ZombieCafe::NextLotteryRandom2 */

/* ZombieCafe::NextLotteryRandom2() */

void __thiscall ZombieCafe::NextLotteryRandom2(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  
  if (0x15 < *(uint *)(this + 0x788)) {
    *(undefined4 *)(this + 0x788) = 0;
  }
  iVar2 = *(int *)(this + 0x788);
  iVar1 = arc4random();
  *(int *)(this + (iVar2 + 0x1e2) * 4 + 4) = iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f;
  iVar1 = *(int *)(this + 0x788);
  *(int *)(this + 0x788) = iVar1 + 1;
  if (0x15 < iVar1 + 1) {
    *(undefined4 *)(this + 0x788) = 0;
  }
  return;
}


