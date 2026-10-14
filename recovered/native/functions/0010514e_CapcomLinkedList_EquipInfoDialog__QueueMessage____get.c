/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010514e CapcomLinkedList<EquipInfoDialog::QueueMessage*>::get */

/* CapcomLinkedList<EquipInfoDialog::QueueMessage*>::get(int) */

undefined4 __thiscall
CapcomLinkedList<EquipInfoDialog::QueueMessage*>::get
          (CapcomLinkedList<EquipInfoDialog::QueueMessage*> *this,int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x10))) {
    do {
      this = *(CapcomLinkedList<EquipInfoDialog::QueueMessage*> **)(this + 4);
      bVar2 = param_1 != 0;
      param_1 = param_1 + -1;
    } while (bVar2);
    uVar1 = *(undefined4 *)this;
  }
  return uVar1;
}


