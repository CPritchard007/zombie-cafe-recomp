/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5110 ScreenElement::localToParentCoordsBig */

/* ScreenElement::localToParentCoordsBig(int, int) const */

undefined8 __thiscall
ScreenElement::localToParentCoordsBig(ScreenElement *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_1 + *(int *)(this + 4);
  iVar1 = param_2 + *(int *)(this + 8);
  uVar3 = (uint)(byte)this[0x15];
  if ((int)(uVar3 << 0x1b) < 0) {
    iVar4 = *(int *)(this + 0xc) >> 1;
LAB_002a512e:
    iVar2 = iVar2 - iVar4;
  }
  else if ((int)(uVar3 << 0x1a) < 0) {
    iVar4 = *(int *)(this + 0xc);
    goto LAB_002a512e;
  }
  if ((int)(uVar3 << 0x1e) < 0) {
    iVar4 = *(int *)(this + 0x10) >> 1;
  }
  else {
    if (-1 < (int)(uVar3 << 0x1d)) goto LAB_002a5142;
    iVar4 = *(int *)(this + 0x10);
  }
  iVar1 = iVar1 - iVar4;
LAB_002a5142:
  return CONCAT44(iVar2,iVar1);
}


