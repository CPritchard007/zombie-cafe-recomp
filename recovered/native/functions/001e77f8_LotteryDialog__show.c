/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e77f8 LotteryDialog::show */

/* LotteryDialog::show(Character*) */

void __thiscall LotteryDialog::show(LotteryDialog *this,Character *param_1)

{
  undefined4 uVar1;
  
  L_PrintLog((char *)(DAT_001e784c + 0x1e7806),(char *)(DAT_001e7850 + 0x1e7808));
  GameStateCafe::deselect(*(GameStateCafe **)(this + 100));
  uVar1 = DAT_001e7858;
  *(undefined1 *)(*(int *)(this + 0x60) + DAT_001e7854) = 0;
  *(Character **)(*(int *)(this + 0x60) + DAT_001e785c) = param_1;
  *(undefined1 *)(*(int *)(this + 0x60) + DAT_001e7860) = 1;
  *(undefined4 *)(*(int *)(this + 0x60) + 0xa30) = uVar1;
  (**(code **)(*(int *)this + 0x20))(this);
  resetDisplayLottery();
  if (param_1 != (Character *)0x0) {
    pageMove(this,2);
  }
  return;
}


