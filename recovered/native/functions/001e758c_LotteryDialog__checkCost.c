/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e758c LotteryDialog::checkCost */

/* LotteryDialog::checkCost(int) */

uint __thiscall LotteryDialog::checkCost(LotteryDialog *this,int param_1)

{
  uint uVar1;
  
  if (this[param_1 + 0x212] == (LotteryDialog)0x0) {
    uVar1 = *(uint *)(*(ZombieCafe **)(this + 0x60) + DAT_001e75d4);
    uVar1 = (((int)uVar1 >> 0x1f) - ((int)*(uint *)(this + (param_1 + 0x9a) * 4 + 4) >> 0x1f)) +
            (uint)(*(uint *)(this + (param_1 + 0x9a) * 4 + 4) <= uVar1);
  }
  else {
    uVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0x60));
    uVar1 = (((int)uVar1 >> 0x1f) - ((int)*(uint *)(this + (param_1 + 0x9a) * 4 + 4) >> 0x1f)) +
            (uint)(*(uint *)(this + (param_1 + 0x9a) * 4 + 4) <= uVar1);
  }
  return uVar1 & 0xff;
}


