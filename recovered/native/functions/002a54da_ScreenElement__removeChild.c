/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a54da ScreenElement::removeChild */

/* ScreenElement::removeChild(int) */

void __thiscall ScreenElement::removeChild(ScreenElement *this,int param_1)

{
  int iVar1;
  CapcomOrderableList<ScreenElement*> *pCVar2;
  bool bVar3;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x38))) {
    pCVar2 = (CapcomOrderableList<ScreenElement*> *)(this + 0x24);
    do {
      pCVar2 = *(CapcomOrderableList<ScreenElement*> **)(pCVar2 + 8);
      bVar3 = param_1 != 0;
      param_1 = param_1 + -1;
    } while (bVar3);
    iVar1 = CapcomOrderableList<ScreenElement*>::deleteNode
                      ((CapcomOrderableList<ScreenElement*> *)(this + 0x24),
                       (CapcomOrderableListNode *)pCVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
  }
  return;
}


