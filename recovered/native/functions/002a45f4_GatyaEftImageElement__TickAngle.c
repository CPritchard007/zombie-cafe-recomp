/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a45f4 GatyaEftImageElement::TickAngle */

/* GatyaEftImageElement::TickAngle(int) */

void __thiscall GatyaEftImageElement::TickAngle(GatyaEftImageElement *this,int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = __floatsisf(param_1);
  uVar1 = __divsf3(uVar1,DAT_002a4620);
  uVar1 = __divsf3(uVar1,DAT_002a4624);
  fVar2 = (float)__mulsf3(uVar1,*(undefined4 *)(this + 0xb0));
  ImageElement::addRot(fVar2);
  return;
}


