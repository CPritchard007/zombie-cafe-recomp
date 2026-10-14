/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000dbf34 ChefHeadButton::paint */

/* ChefHeadButton::paint(CapcomGraphics*) */

undefined8 __thiscall ChefHeadButton::paint(ChefHeadButton *this,CapcomGraphics *param_1)

{
  ChefHeadButton *pCVar1;
  CapcomGraphics *pCVar2;
  
  pCVar1 = this;
  pCVar2 = param_1;
  if (*(int *)(this + 0x70) != 0) {
    CapcomGraphics::setColorModulation(param_1,true);
    CapcomGraphics::setColor(param_1,DAT_000dbfcc);
    if (this[0x7d] != (ChefHeadButton)0x0) {
      CapcomGraphics::setColor(param_1,-0x1000000);
    }
  }
  ScreenElement::paint((ScreenElement *)this,param_1);
  CapcomGraphics::setColorModulation(param_1,false);
  if (*(int *)(this + 0x70) != 0) {
    ScreenElement::localToParentCoords((ScreenElement *)this,0,0);
    CapcomGraphics::translate((long)param_1);
    CapcomGraphics::pushClip(CONCAT44(pCVar2,pCVar1));
    (**(code **)(**(int **)(this + 0x70) + 0xc))(*(int **)(this + 0x70),param_1);
    SmDev();
    CapcomGraphics::popClip();
    CapcomGraphics::translate((long)param_1);
  }
  return CONCAT44(pCVar2,pCVar1);
}


