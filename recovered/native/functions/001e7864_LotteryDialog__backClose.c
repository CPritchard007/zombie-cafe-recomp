/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e7864 LotteryDialog::backClose */

/* LotteryDialog::backClose() */

void __thiscall LotteryDialog::backClose(LotteryDialog *this)

{
  float fVar1;
  
  *(undefined1 *)(*(int *)(this + 0x60) + DAT_001e78b4) = 1;
  if (this[0x14] != (LotteryDialog)0x0) {
    fVar1 = (float)L_PrintLog((char *)(DAT_001e78b8 + 0x1e7880),(char *)(DAT_001e78bc + 0x1e7882));
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_001e78c0) = 0;
    ZombieCafe::playEffect(*(int *)(this + 0x60),fVar1);
    (**(code **)(**(int **)(*(int *)(this + 100) + 0x78) + 0x34))
              (*(int **)(*(int *)(this + 100) + 0x78),this);
    *(undefined4 *)(*(int *)(this + 100) + 0xa4) = 0;
    (**(code **)(*(int *)this + 0x20))(this,0);
  }
  return;
}


