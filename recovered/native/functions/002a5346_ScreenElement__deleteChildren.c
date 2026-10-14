/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5346 ScreenElement::deleteChildren */

/* ScreenElement::deleteChildren() */

void __thiscall ScreenElement::deleteChildren(ScreenElement *this)

{
  CapcomOrderableListNode *pCVar1;
  int iVar2;
  ScreenElement *pSVar3;
  int iVar4;
  CapcomOrderableListNode *pCVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = *(int *)(this + 0x38);
  for (iVar4 = 0; iVar4 < iVar6; iVar4 = iVar4 + 1) {
    if ((-1 < iVar4) && (iVar4 < *(int *)(this + 0x38))) {
      pSVar3 = this + 0x24;
      iVar2 = iVar4;
      do {
        pSVar3 = *(ScreenElement **)(pSVar3 + 8);
        bVar7 = iVar2 != 0;
        iVar2 = iVar2 + -1;
      } while (bVar7);
      if (*(int **)pSVar3 != (int *)0x0) {
        (**(code **)(**(int **)pSVar3 + 4))();
      }
    }
  }
  if (*(int *)(this + 0x38) != 0) {
    pCVar1 = *(CapcomOrderableListNode **)(this + 0x2c);
    while (pCVar1 != (CapcomOrderableListNode *)0x0) {
      pCVar5 = *(CapcomOrderableListNode **)(pCVar1 + 8);
      CapcomOrderableList<ScreenElement*>::deleteNode
                ((CapcomOrderableList<ScreenElement*> *)(this + 0x24),pCVar1);
      pCVar1 = pCVar5;
    }
    *(ScreenElement **)(this + 0x30) = this + 0x24;
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x2c);
  }
  return;
}


