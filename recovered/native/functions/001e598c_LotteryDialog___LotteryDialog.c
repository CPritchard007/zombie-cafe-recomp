/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e598c LotteryDialog::~LotteryDialog */

/* LotteryDialog::~LotteryDialog() */

LotteryDialog * __thiscall LotteryDialog::~LotteryDialog(LotteryDialog *this)

{
  int *piVar1;
  int iVar2;
  LotteryDialog *pLVar3;
  int iVar4;
  
  *(int *)this = *(int *)(DAT_001e5b10 + 0x1e5996) + 8;
  if (*(int **)(*(int *)(this + 0x68) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 100) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x6c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x1c4) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x1c4) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x1c4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c4) + 4))();
  }
  if (*(int *)(this + 0x78) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x78) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(this + 0x1b0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1b0) + 4))();
  }
  if (*(int **)(this + 0x1b4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1b4) + 4))();
  }
  if (*(int **)(this + 0x1b8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1b8) + 4))();
  }
  if (*(int **)(this + 0x1bc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1bc) + 4))();
  }
  if (*(int **)(this + 0x1c0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c0) + 4))();
  }
  iVar4 = 0;
  pLVar3 = this;
  do {
    iVar2 = *(int *)(pLVar3 + 0x80);
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar2 + 0x60);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      piVar1 = *(int **)(pLVar3 + 0x80);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    if (*(int **)(pLVar3 + 0xf8) != (int *)0x0) {
      (**(code **)(**(int **)(pLVar3 + 0xf8) + 4))();
    }
    iVar2 = *(int *)(pLVar3 + 0x134);
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar2 + 100);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      piVar1 = *(int **)(pLVar3 + 0x134);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    iVar2 = *(int *)(pLVar3 + 0x170);
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar2 + 100);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      piVar1 = *(int **)(pLVar3 + 0x170);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    iVar4 = iVar4 + 1;
    pLVar3 = pLVar3 + 4;
  } while (iVar4 != 0xf);
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


