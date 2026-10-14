/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002412c0 ZombieCafe::GetLotteryRandom2 */

/* ZombieCafe::GetLotteryRandom2() */

uint __thiscall ZombieCafe::GetLotteryRandom2(ZombieCafe *this)

{
  uint uVar1;
  
  if (0x15 < *(uint *)(this + 0x788)) {
    *(undefined4 *)(this + 0x788) = 0;
  }
  uVar1 = *(int *)(this + (*(int *)(this + 0x788) + 0x1e2) * 4 + 4) >> 0x1f;
  return *(int *)(this + (*(int *)(this + 0x788) + 0x1e2) * 4 + 4) + uVar1 ^ uVar1;
}


