/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022b298 Store::paint */

/* Store::paint(CapcomGraphics*) */

void __thiscall Store::paint(Store *this,CapcomGraphics *param_1)

{
  if (this[0x80] != (Store)0x0) {
    ScreenElement::paint((ScreenElement *)this,param_1);
  }
  return;
}


