/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00234cea UserRankDialog::paint */

/* UserRankDialog::paint(CapcomGraphics*) */

void __thiscall UserRankDialog::paint(UserRankDialog *this,CapcomGraphics *param_1)

{
  ScreenElement::paint((ScreenElement *)this,param_1);
  if (this[0x14] != (UserRankDialog)0x0) {
    ScreenElement::localToParentCoords((ScreenElement *)this,0,0);
    CapcomGraphics::translate((long)param_1);
    ScreenElement::localToParentCoords((ScreenElement *)this,0,0);
    CapcomGraphics::translate((long)param_1);
  }
  return;
}


