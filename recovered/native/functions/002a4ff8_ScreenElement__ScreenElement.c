/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4ff8 ScreenElement::ScreenElement */

/* ScreenElement::ScreenElement(int, int, int, int, unsigned char, ScreenElement*) */

void __thiscall
ScreenElement::ScreenElement
          (ScreenElement *this,int param_1,int param_2,int param_3,int param_4,uchar param_5,
          ScreenElement *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)this = *(int *)(DAT_002a5050 + 0x2a500a) + 8;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x3c] = (ScreenElement)0x0;
  iVar1 = DAT_002a5054;
  *(int *)(this + 0xc) = param_3;
  uVar2 = *(undefined4 *)(iVar1 + 0x2a5024);
  this[0x14] = (ScreenElement)0x1;
  *(undefined4 *)(this + 0x40) = uVar2;
  *(ScreenElement **)(this + 0x30) = this + 0x24;
  *(int *)(this + 0x10) = param_4;
  *(ScreenElement **)(this + 0x20) = param_6;
  this[0x15] = (ScreenElement)param_5;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(int *)(this + 4) = param_1;
  *(int *)(this + 8) = param_2;
  this[0x4c] = (ScreenElement)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  return;
}


