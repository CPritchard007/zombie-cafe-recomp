/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d48c4 QuestDialog::clearItemElements */

/* QuestDialog::clearItemElements() */

void __thiscall QuestDialog::clearItemElements(QuestDialog *this)

{
  int *piVar1;
  
  puts((char *)(DAT_001d4924 + 0x1d48d2));
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(this + 0xa4);
  while (*(int *)(this + 0xb0) != 0) {
    piVar1 = (int *)CapcomLinkedList<QuestItem*>::remove
                              ((CapcomLinkedList<QuestItem*> *)(this + 0xa0),0);
    (**(code **)(**(int **)(this + 0x8c) + 0x34))(*(int **)(this + 0x8c),piVar1);
    (**(code **)(**(int **)(this + 0x9c) + 0x34))(*(int **)(this + 0x9c),piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  (**(code **)(**(int **)(this + 0x8c) + 0x34))(*(int **)(this + 0x8c),*(undefined4 *)(this + 0xbc))
  ;
  return;
}


