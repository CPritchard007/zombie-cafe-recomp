/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001050fc CapcomLinkedList<EquipInfoDialog::QueueMessage*>::remove */

/* CapcomLinkedList<EquipInfoDialog::QueueMessage*>::remove(int) */

int __thiscall
CapcomLinkedList<EquipInfoDialog::QueueMessage*>::remove
          (CapcomLinkedList<EquipInfoDialog::QueueMessage*> *this,int param_1)

{
  CapcomLinkedList<EquipInfoDialog::QueueMessage*> *pCVar1;
  CapcomLinkedList<EquipInfoDialog::QueueMessage*> *pCVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x10))) {
    pCVar2 = (CapcomLinkedList<EquipInfoDialog::QueueMessage*> *)0x0;
    if ((param_1 < 0 == SCARRY4(param_1 + -1,1)) &&
       (pCVar1 = this, param_1 + -1 < *(int *)(this + 0x10))) {
      for (; pCVar2 = pCVar1, iVar3 != param_1; iVar3 = iVar3 + 1) {
        pCVar1 = *(CapcomLinkedList<EquipInfoDialog::QueueMessage*> **)(pCVar1 + 4);
      }
    }
    iVar3 = **(int **)(pCVar2 + 4);
    if (*(int **)(this + 0xc) == *(int **)(pCVar2 + 4)) {
      *(CapcomLinkedList<EquipInfoDialog::QueueMessage*> **)(this + 0xc) = pCVar2;
    }
    if (*(int *)(this + 8) == *(int *)(pCVar2 + 4)) {
      *(CapcomLinkedList<EquipInfoDialog::QueueMessage*> **)(this + 8) = pCVar2;
    }
    uVar4 = *(undefined4 *)((int)*(void **)(pCVar2 + 4) + 4);
    operator_delete(*(void **)(pCVar2 + 4));
    *(undefined4 *)(pCVar2 + 4) = uVar4;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  }
  return iVar3;
}


