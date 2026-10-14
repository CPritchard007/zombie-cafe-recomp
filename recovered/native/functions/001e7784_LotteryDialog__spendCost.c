/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e7784 LotteryDialog::spendCost */

/* LotteryDialog::spendCost(int) */

void __thiscall LotteryDialog::spendCost(LotteryDialog *this,int param_1)

{
  int iVar1;
  
  iVar1 = (param_1 + 0x9a) * 4;
  if (this[param_1 + 0x212] == (LotteryDialog)0x0) {
    ZombieCafe::addCash(*(ZombieCafe **)(this + 0x60),-*(int *)(this + iVar1 + 4));
    if (*(int *)(*(int *)(this + 0x60) + DAT_001e77c0) < 0) {
      *(undefined4 *)(*(int *)(this + 0x60) + DAT_001e77c0) = 0;
    }
  }
  else {
    ZombieCafe::spendToxin(*(ZombieCafe **)(this + 0x60),*(int *)(this + iVar1 + 4));
  }
  return;
}


