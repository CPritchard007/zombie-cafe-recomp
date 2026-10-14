/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118948 ScreenElement::getChildAt */

/* ScreenElement::getChildAt(int) const */

undefined4 __thiscall ScreenElement::getChildAt(ScreenElement *this,int param_1)

{
  ScreenElement *pSVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x38))) {
    pSVar1 = this + 0x24;
    do {
      pSVar1 = *(ScreenElement **)(pSVar1 + 8);
      bVar3 = param_1 != 0;
      param_1 = param_1 + -1;
    } while (bVar3);
    uVar2 = *(undefined4 *)pSVar1;
  }
  return uVar2;
}


