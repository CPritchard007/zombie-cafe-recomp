/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299ea8 CapcomGraphics::setColorModulation */

/* CapcomGraphics::setColorModulation(bool) */

void __thiscall CapcomGraphics::setColorModulation(CapcomGraphics *this,bool param_1)

{
  int iVar1;
  
  iVar1 = DAT_00299ec8;
  this[0x18] = (CapcomGraphics)param_1;
  if ((CapcomGraphics *)**(undefined4 **)(iVar1 + 0x299eb2) == this) {
    finishBatch();
    activateColorModulation();
  }
  return;
}


