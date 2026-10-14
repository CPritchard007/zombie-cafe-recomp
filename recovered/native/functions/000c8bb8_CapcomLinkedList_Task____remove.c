/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8bb8 CapcomLinkedList<Task*>::remove */

/* CapcomLinkedList<Task*>::remove(Task*) */

Task * __thiscall CapcomLinkedList<Task*>::remove(CapcomLinkedList<Task*> *this,Task *param_1)

{
  CapcomLinkedList<Task*> *pCVar1;
  CapcomLinkedList<Task*> *pCVar2;
  undefined4 uVar3;
  
  pCVar1 = this;
  do {
    pCVar2 = pCVar1;
    pCVar1 = *(CapcomLinkedList<Task*> **)(pCVar2 + 4);
    if (pCVar1 == (CapcomLinkedList<Task*> *)0x0) {
      return (Task *)0x0;
    }
  } while (*(Task **)pCVar1 != param_1);
  if (*(CapcomLinkedList<Task*> **)(this + 0xc) == pCVar1) {
    *(CapcomLinkedList<Task*> **)(this + 0xc) = pCVar2;
  }
  if (*(int *)(this + 8) == *(int *)(pCVar2 + 4)) {
    *(CapcomLinkedList<Task*> **)(this + 8) = pCVar2;
  }
  uVar3 = *(undefined4 *)((int)*(void **)(pCVar2 + 4) + 4);
  operator_delete(*(void **)(pCVar2 + 4));
  *(undefined4 *)(pCVar2 + 4) = uVar3;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  return param_1;
}


