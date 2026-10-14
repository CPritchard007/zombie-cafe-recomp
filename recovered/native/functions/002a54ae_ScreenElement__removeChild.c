/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a54ae ScreenElement::removeChild */

/* ScreenElement::removeChild(ScreenElement*) */

int __thiscall ScreenElement::removeChild(ScreenElement *this,ScreenElement *param_1)

{
  int iVar1;
  ScreenElement *pSVar2;
  
  pSVar2 = this + 0x24;
  do {
    pSVar2 = *(ScreenElement **)(pSVar2 + 8);
    if (pSVar2 == (ScreenElement *)0x0) {
      return 0;
    }
  } while (*(ScreenElement **)pSVar2 != param_1);
  iVar1 = CapcomOrderableList<ScreenElement*>::deleteNode
                    ((CapcomOrderableList<ScreenElement*> *)(this + 0x24),
                     (CapcomOrderableListNode *)pSVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  return iVar1;
}


