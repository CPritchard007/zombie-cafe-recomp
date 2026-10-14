/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00201802 PendingOrderDialog::clearItemElements */

/* PendingOrderDialog::clearItemElements() */

void __thiscall PendingOrderDialog::clearItemElements(PendingOrderDialog *this)

{
  int *piVar1;
  
  *(undefined4 *)(this + 200) = *(undefined4 *)(this + 0xc0);
  while (*(int *)(this + 0xcc) != 0) {
    piVar1 = (int *)CapcomLinkedList<PendingItem*>::remove
                              ((CapcomLinkedList<PendingItem*> *)(this + 0xbc),0);
    (**(code **)(**(int **)(this + 0x9c) + 0x34))(*(int **)(this + 0x9c),piVar1);
    (**(code **)(**(int **)(this + 0xb0) + 0x34))(*(int **)(this + 0xb0),piVar1);
    (**(code **)(**(int **)(this + 0xb4) + 0x34))(*(int **)(this + 0xb4),piVar1);
    (**(code **)(**(int **)(this + 0xb8) + 0x34))(*(int **)(this + 0xb8),piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  (**(code **)(**(int **)(this + 0x9c) + 0x34))(*(int **)(this + 0x9c),*(undefined4 *)(this + 0xd8))
  ;
  return;
}


