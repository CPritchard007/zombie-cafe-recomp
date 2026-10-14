/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020841e PullMenuElement::getButton */

/* PullMenuElement::getButton(int) */

PullMenuElement * __thiscall PullMenuElement::getButton(PullMenuElement *this,int param_1)

{
  PullMenuElement *pPVar1;
  
  if (param_1 == 1) {
    pPVar1 = *(PullMenuElement **)(this + 0x78);
  }
  else {
    if (param_1 == 3) {
      pPVar1 = this + 4;
    }
    else {
      if (param_1 != 4) {
        if (param_1 != 5) {
          return this;
        }
        return *(PullMenuElement **)(this + 0x88);
      }
      pPVar1 = this + 8;
    }
    pPVar1 = *(PullMenuElement **)(pPVar1 + 0x7c);
  }
  return pPVar1;
}


