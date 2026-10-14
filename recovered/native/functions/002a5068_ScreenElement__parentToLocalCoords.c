/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5068 ScreenElement::parentToLocalCoords */

/* ScreenElement::parentToLocalCoords(int, int) const */

uint __thiscall ScreenElement::parentToLocalCoords(ScreenElement *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_1 - *(int *)(this + 4);
  uVar2 = param_2 - *(int *)(this + 8);
  uVar3 = (uint)(byte)this[0x15];
  if ((int)(uVar3 << 0x1b) < 0) {
    iVar4 = *(int *)(this + 0xc) >> 1;
LAB_002a5084:
    iVar1 = iVar1 + iVar4;
  }
  else if ((int)(uVar3 << 0x1a) < 0) {
    iVar4 = *(int *)(this + 0xc);
    goto LAB_002a5084;
  }
  if ((int)(uVar3 << 0x1e) < 0) {
    iVar4 = *(int *)(this + 0x10) >> 1;
  }
  else {
    if (-1 < (int)(uVar3 << 0x1d)) goto LAB_002a5098;
    iVar4 = *(int *)(this + 0x10);
  }
  uVar2 = uVar2 + iVar4;
LAB_002a5098:
  return iVar1 << 0x10 | uVar2 & 0xffff;
}


