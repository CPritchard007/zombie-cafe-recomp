/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015546e Vector<GatyaLotteryData>::elementAt */

/* Vector<GatyaLotteryData>::elementAt(int) const */

void Vector<GatyaLotteryData>::elementAt(int param_1)

{
  int in_r1;
  int in_r2;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(in_r1 + 8) + in_r2 * 8 + 4);
  *(undefined4 *)param_1 = *(undefined4 *)(in_r2 * 8 + *(int *)(in_r1 + 8));
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


