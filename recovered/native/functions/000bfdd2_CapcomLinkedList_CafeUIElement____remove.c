/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bfdd2 CapcomLinkedList<CafeUIElement*>::remove */

/* CapcomLinkedList<CafeUIElement*>::remove(CafeUIElement*) */

CafeUIElement * __thiscall
CapcomLinkedList<CafeUIElement*>::remove
          (CapcomLinkedList<CafeUIElement*> *this,CafeUIElement *param_1)

{
  CapcomLinkedList<CafeUIElement*> *pCVar1;
  CapcomLinkedList<CafeUIElement*> *pCVar2;
  undefined4 uVar3;
  
  pCVar1 = this;
  do {
    pCVar2 = pCVar1;
    pCVar1 = *(CapcomLinkedList<CafeUIElement*> **)(pCVar2 + 4);
    if (pCVar1 == (CapcomLinkedList<CafeUIElement*> *)0x0) {
      return (CafeUIElement *)0x0;
    }
  } while (*(CafeUIElement **)pCVar1 != param_1);
  if (*(CapcomLinkedList<CafeUIElement*> **)(this + 0xc) == pCVar1) {
    *(CapcomLinkedList<CafeUIElement*> **)(this + 0xc) = pCVar2;
  }
  if (*(int *)(this + 8) == *(int *)(pCVar2 + 4)) {
    *(CapcomLinkedList<CafeUIElement*> **)(this + 8) = pCVar2;
  }
  uVar3 = *(undefined4 *)((int)*(void **)(pCVar2 + 4) + 4);
  operator_delete(*(void **)(pCVar2 + 4));
  *(undefined4 *)(pCVar2 + 4) = uVar3;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  return param_1;
}


