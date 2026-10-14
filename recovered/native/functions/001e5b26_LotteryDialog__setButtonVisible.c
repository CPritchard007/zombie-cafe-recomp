/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e5b26 LotteryDialog::setButtonVisible */

/* LotteryDialog::setButtonVisible(int, bool) */

void __thiscall LotteryDialog::setButtonVisible(LotteryDialog *this,int param_1,bool param_2)

{
  int *piVar1;
  
  (**(code **)(**(int **)(this + (param_1 + 0x20) * 4) + 0x20))
            (*(int **)(this + (param_1 + 0x20) * 4),param_2);
  (**(code **)(**(int **)(this + (param_1 + 0x5c) * 4) + 0x20))
            (*(int **)(this + (param_1 + 0x5c) * 4),param_2);
  (**(code **)(**(int **)(this + (param_1 + 0x3e) * 4) + 0x20))
            (*(int **)(this + (param_1 + 0x3e) * 4),param_2);
  piVar1 = *(int **)(this + (param_1 + 0x4c) * 4 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,param_2);
  }
  return;
}


