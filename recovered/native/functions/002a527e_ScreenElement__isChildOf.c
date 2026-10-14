/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a527e ScreenElement::isChildOf */

/* ScreenElement::isChildOf(ScreenElement*) const */

undefined4 __thiscall ScreenElement::isChildOf(ScreenElement *this,ScreenElement *param_1)

{
  do {
    this = *(ScreenElement **)(this + 0x20);
    if (this == (ScreenElement *)0x0) {
      return 0;
    }
  } while (this != param_1);
  return 1;
}


