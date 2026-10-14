/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5494 ScreenElement::setOrder */

/* ScreenElement::setOrder(signed char) */

void __thiscall ScreenElement::setOrder(ScreenElement *this,ScreenElement param_2)

{
  this[0x4c] = param_2;
  if (*(int *)(this + 0x20) != 0) {
    CapcomOrderableList<ScreenElement*>::sort
              ((CapcomOrderableList<ScreenElement*> *)(*(int *)(this + 0x20) + 0x24),this);
  }
  return;
}


