/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e808c LotteryDialog::completeLotteryPurchase */

/* LotteryDialog::completeLotteryPurchase(LotteryDialog*) */

undefined8 __thiscall
LotteryDialog::completeLotteryPurchase(LotteryDialog *this,LotteryDialog *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  LotteryDialog *local_18;
  
  L_PrintLog((char *)(DAT_001e80ec + 0x1e809c),(char *)(DAT_001e80e8 + 0x1e809a));
  spendCost(this,*(int *)(this + 0x1f8));
  if (*(int *)(*(GameStateCafe **)(this + 100) + 0x54) != 0) {
    GameStateCafe::deselect(*(GameStateCafe **)(this + 100));
  }
  iVar2 = *(int *)(this + 100);
  uVar1 = birthNewCharacterAndZombie(this,*(int *)(this + 0x1f8));
  *(undefined4 *)(iVar2 + 0x54) = uVar1;
  (**(code **)(*(int *)this + 0x20))(this,0);
  fVar3 = (float)displayZombieInfo(this);
  local_18 = this;
  if (*(int *)(this + 0x1f8) != 0) {
    local_18 = (LotteryDialog *)0x0;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0x60),1,0xe,fVar3,false);
  }
  return CONCAT44(param_1,local_18);
}


