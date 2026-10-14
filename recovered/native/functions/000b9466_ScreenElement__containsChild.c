/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b9466 ScreenElement::containsChild */

/* ScreenElement::containsChild(ScreenElement*) const */

undefined4 __thiscall ScreenElement::containsChild(ScreenElement *this,ScreenElement *param_1)

{
  ScreenElement *pSVar1;
  
  pSVar1 = this + 0x24;
  do {
    pSVar1 = *(ScreenElement **)(pSVar1 + 8);
    if (pSVar1 == (ScreenElement *)0x0) {
      return 0;
    }
  } while (*(ScreenElement **)pSVar1 != param_1);
  return 1;
}


