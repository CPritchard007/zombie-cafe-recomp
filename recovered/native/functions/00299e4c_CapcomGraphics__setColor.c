/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299e4c CapcomGraphics::setColor */

/* CapcomGraphics::setColor(int, int, int, int) */

void __thiscall
CapcomGraphics::setColor(CapcomGraphics *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = DAT_00299e80;
  *(uint *)this =
       param_4 & 0xffU |
       param_1 << 0x18 | (param_2 & 0xffU) << 0x10 | (uint)(param_3 << 0x18) >> 0x10;
  if ((CapcomGraphics *)**(undefined4 **)(iVar1 + 0x299e6c) == this) {
    finishBatch();
    activateColor();
  }
  return;
}


