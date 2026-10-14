/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293f68 SpecialSaleBg::paintComponent */

/* SpecialSaleBg::paintComponent(CapcomGraphics*) */

void __thiscall SpecialSaleBg::paintComponent(SpecialSaleBg *this,CapcomGraphics *param_1)

{
  CapcomGraphics::setColorModulation(param_1,true);
  CapcomGraphics::setColor(param_1,*(int *)(this + 0x98));
  ImageElement::paintComponent((ImageElement *)this,param_1);
  CapcomGraphics::setColorModulation(param_1,false);
  return;
}


