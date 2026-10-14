/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299a84 CapcomGraphics::activate */

/* CapcomGraphics::activate() */

void __thiscall CapcomGraphics::activate(CapcomGraphics *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(DAT_00299ab4 + 0x299a8e);
  if ((CapcomGraphics *)*puVar1 != this) {
    activateColor();
    activateOffset(this);
    activateClip(this);
    activateTargetTexture(this);
    activateColorModulation();
    *puVar1 = this;
  }
  return;
}


