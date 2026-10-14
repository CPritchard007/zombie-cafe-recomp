/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a53d0 ScreenElement::~ScreenElement */

/* ScreenElement::~ScreenElement() */

ScreenElement * __thiscall ScreenElement::~ScreenElement(ScreenElement *this)

{
  CapcomOrderableListNode *pCVar1;
  CapcomOrderableListNode *pCVar2;
  
  *(int *)this = *(int *)(DAT_002a540c + 0x2a53dc) + 8;
  if (*(int *)(this + 0x38) != 0) {
    pCVar1 = *(CapcomOrderableListNode **)(this + 0x2c);
    while (pCVar1 != (CapcomOrderableListNode *)0x0) {
      pCVar2 = *(CapcomOrderableListNode **)(pCVar1 + 8);
      CapcomOrderableList<ScreenElement*>::deleteNode
                ((CapcomOrderableList<ScreenElement*> *)(this + 0x24),pCVar1);
      pCVar1 = pCVar2;
    }
    *(ScreenElement **)(this + 0x30) = this + 0x24;
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x2c);
  }
  return this;
}


