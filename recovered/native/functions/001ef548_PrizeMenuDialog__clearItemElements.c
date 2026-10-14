/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ef548 PrizeMenuDialog::clearItemElements */

/* PrizeMenuDialog::clearItemElements() */

void __thiscall PrizeMenuDialog::clearItemElements(PrizeMenuDialog *this)

{
  int *piVar1;
  
  puts((char *)(DAT_001ef590 + 0x1ef556));
  while( true ) {
    if (*(int *)(*(Vector<PrizeMenuItem*> **)(this + 0x94) + 4) == -1) break;
    piVar1 = (int *)Vector<PrizeMenuItem*>::removeElementAt
                              (*(Vector<PrizeMenuItem*> **)(this + 0x94),0);
    (**(code **)(**(int **)(this + 0x7c) + 0x34))(*(int **)(this + 0x7c),piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  (**(code **)(**(int **)(this + 0x7c) + 0x34))(*(int **)(this + 0x7c),*(undefined4 *)(this + 0xa4))
  ;
  return;
}


