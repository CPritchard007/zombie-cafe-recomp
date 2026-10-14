/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002226c4 ZukanHeadButton::paint */

/* ZukanHeadButton::paint(CapcomGraphics*) */

void __thiscall ZukanHeadButton::paint(ZukanHeadButton *this,CapcomGraphics *param_1)

{
  CapcomGraphics::setColorModulation(param_1,true);
  CapcomGraphics::setColor(param_1,*(int *)(this + 100));
  ScreenElement::paint((ScreenElement *)this,param_1);
  CapcomGraphics::setColorModulation(param_1,false);
  return;
}


