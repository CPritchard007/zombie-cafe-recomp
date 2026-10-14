/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e9950 LotteryFeaturedDialog::paint */

/* LotteryFeaturedDialog::paint(CapcomGraphics*) */

void __thiscall LotteryFeaturedDialog::paint(LotteryFeaturedDialog *this,CapcomGraphics *param_1)

{
  int *piVar1;
  
  ScreenElement::paint((ScreenElement *)this,param_1);
  if (this[0x14] != (LotteryFeaturedDialog)0x0) {
    ScreenElement::localToParentCoords((ScreenElement *)this,0,0);
    CapcomGraphics::translate((long)param_1);
    piVar1 = *(int **)(this + 0xa0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1,param_1);
    }
    (**(code **)(**(int **)(this + 0x78) + 0xc))(*(int **)(this + 0x78),param_1);
    ScreenElement::localToParentCoords((ScreenElement *)this,0,0);
    CapcomGraphics::translate((long)param_1);
  }
  return;
}


