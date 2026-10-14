/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a52dc ScreenElement::addChild */

/* ScreenElement::addChild(ScreenElement*) */

void __thiscall ScreenElement::addChild(ScreenElement *this,ScreenElement *param_1)

{
  int iVar1;
  ScreenElement *pSVar2;
  ScreenElement *this_00;
  
  this_00 = this + 0x24;
  pSVar2 = this_00;
  while ((*(int *)((CapcomOrderableListNode *)pSVar2 + 8) != 0 &&
         (iVar1 = CapcomOrderableList<ScreenElement*>::compare(this_00,param_1), 0 < iVar1))) {
    pSVar2 = *(ScreenElement **)((CapcomOrderableListNode *)pSVar2 + 8);
  }
  CapcomOrderableList<ScreenElement*>::insert
            ((CapcomOrderableList<ScreenElement*> *)this_00,param_1,
             (CapcomOrderableListNode *)pSVar2);
  *(ScreenElement **)(param_1 + 0x20) = this;
  return;
}


