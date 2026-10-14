/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002085b8 PullMenuElement::isButtonAvailability */

/* PullMenuElement::isButtonAvailability(int) */

uint __thiscall PullMenuElement::isButtonAvailability(PullMenuElement *this,int param_1)

{
  PullMenuElement *pPVar1;
  uint uVar2;
  
  if (param_1 == 1) {
    uVar2 = *(uint *)(this + 0x78);
    goto LAB_002085e4;
  }
  if (param_1 == 3) {
    pPVar1 = this + 4;
LAB_002085d6:
    uVar2 = *(uint *)(pPVar1 + 0x7c);
  }
  else {
    if (param_1 == 6) {
      pPVar1 = this + 0x8c;
    }
    else {
      if (param_1 == 4) {
        pPVar1 = this + 8;
        goto LAB_002085d6;
      }
      if (param_1 != 5) {
        return 0;
      }
      pPVar1 = this + 0x88;
    }
    uVar2 = *(uint *)pPVar1;
  }
LAB_002085e4:
  if (uVar2 != 0) {
    uVar2 = (uint)*(byte *)(uVar2 + 0x14);
  }
  return uVar2;
}


