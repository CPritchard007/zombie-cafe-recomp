/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002999f4 CapcomGraphics::setTargetTexture */

/* CapcomGraphics::setTargetTexture(unsigned int) */

void __thiscall CapcomGraphics::setTargetTexture(CapcomGraphics *this,uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_00299a0c;
  *(uint *)(this + 0x14) = param_1;
  if ((CapcomGraphics *)**(undefined4 **)(iVar1 + 0x299a00) == this) {
    activateTargetTexture((CapcomGraphics *)**(undefined4 **)(iVar1 + 0x299a00));
  }
  return;
}


