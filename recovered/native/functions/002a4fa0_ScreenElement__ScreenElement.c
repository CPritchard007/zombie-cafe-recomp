/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4fa0 ScreenElement::ScreenElement */

/* ScreenElement::ScreenElement(ScreenElement*) */

void __thiscall ScreenElement::ScreenElement(ScreenElement *this,ScreenElement *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)this = *(int *)(DAT_002a4ff0 + 0x2a4faa) + 8;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x3c] = (ScreenElement)0x0;
  iVar1 = DAT_002a4ff4;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  uVar2 = *(undefined4 *)(iVar1 + 0x2a4fc4);
  *(ScreenElement **)(this + 0x20) = param_1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x40) = uVar2;
  *(ScreenElement **)(this + 0x30) = this + 0x24;
  this[0x14] = (ScreenElement)0x1;
  this[0x15] = (ScreenElement)0x9;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x4c] = (ScreenElement)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  return;
}


