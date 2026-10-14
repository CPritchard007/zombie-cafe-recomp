/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a50a2 ScreenElement::parentToLocalCoordsBig */

/* ScreenElement::parentToLocalCoordsBig(long, long) const */

undefined8 __thiscall
ScreenElement::parentToLocalCoordsBig(ScreenElement *this,long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_1 - *(int *)(this + 4);
  iVar1 = param_2 - *(int *)(this + 8);
  uVar3 = (uint)(byte)this[0x15];
  if ((int)(uVar3 << 0x1b) < 0) {
    iVar4 = *(int *)(this + 0xc) >> 1;
LAB_002a50c0:
    iVar2 = iVar2 + iVar4;
  }
  else if ((int)(uVar3 << 0x1a) < 0) {
    iVar4 = *(int *)(this + 0xc);
    goto LAB_002a50c0;
  }
  if ((int)(uVar3 << 0x1e) < 0) {
    iVar4 = *(int *)(this + 0x10) >> 1;
  }
  else {
    if (-1 < (int)(uVar3 << 0x1d)) goto LAB_002a50d4;
    iVar4 = *(int *)(this + 0x10);
  }
  iVar1 = iVar1 + iVar4;
LAB_002a50d4:
  return CONCAT44(iVar2,iVar1);
}


