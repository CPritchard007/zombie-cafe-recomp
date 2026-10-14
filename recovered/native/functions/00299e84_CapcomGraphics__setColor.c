/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299e84 CapcomGraphics::setColor */

/* CapcomGraphics::setColor(int) */

void __thiscall CapcomGraphics::setColor(CapcomGraphics *this,int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00299ea4;
  *(int *)this = param_1;
  if ((CapcomGraphics *)**(undefined4 **)(iVar1 + 0x299e8e) == this) {
    finishBatch();
    activateColor();
  }
  return;
}


