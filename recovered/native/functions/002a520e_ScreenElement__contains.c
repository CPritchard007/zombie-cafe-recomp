/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a520e ScreenElement::contains */

/* ScreenElement::contains(int, int) const */

ScreenElement __thiscall ScreenElement::contains(ScreenElement *this,int param_1,int param_2)

{
  int iVar1;
  ScreenElement SVar2;
  
  SVar2 = this[0x14];
  if (SVar2 != (ScreenElement)0x0) {
    iVar1 = globalToLocalCoords(this,param_1 << 0x10 | param_2 & 0xffffU);
    SVar2 = (ScreenElement)0x0;
    if (((-1 < iVar1 >> 0x10) && (-1 < (short)iVar1)) && (iVar1 >> 0x10 < *(int *)(this + 0xc))) {
      SVar2 = (ScreenElement)((int)(short)iVar1 < *(int *)(this + 0x10));
    }
  }
  return SVar2;
}


