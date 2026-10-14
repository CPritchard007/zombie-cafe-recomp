/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00177a78 ColorModBg::paintComponent */

/* ColorModBg::paintComponent(CapcomGraphics*) */

void __thiscall ColorModBg::paintComponent(ColorModBg *this,CapcomGraphics *param_1)

{
  CapcomGraphics::setColorModulation(param_1,true);
  CapcomGraphics::setColor(param_1,*(int *)(this + 0x98));
  ImageElement::paintComponent((ImageElement *)this,param_1);
  CapcomGraphics::setColorModulation(param_1,false);
  return;
}


