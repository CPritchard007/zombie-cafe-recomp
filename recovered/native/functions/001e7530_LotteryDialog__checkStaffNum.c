/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e7530 LotteryDialog::checkStaffNum */

/* LotteryDialog::checkStaffNum() */

bool __thiscall LotteryDialog::checkStaffNum(LotteryDialog *this)

{
  bool bVar1;
  
  bVar1 = *(int *)(*(int *)(this + 0x60) + DAT_001e7574 + 4) + 1 <
          (int)*(short *)((*(int *)(*(int *)(this + 0x60) + 0x680) + -1) * 2 +
                         **(int **)(DAT_001e7578 + 0x1e7548));
  if (bVar1) {
    L_PrintLog((char *)(DAT_001e7584 + 0x1e756c),(char *)(DAT_001e7588 + 0x1e756e));
  }
  else {
    L_PrintLog((char *)(DAT_001e757c + 0x1e755c),(char *)(DAT_001e7580 + 0x1e755e));
  }
  return bVar1;
}


