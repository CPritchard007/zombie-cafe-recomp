/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ebee8 PicGiftDialog::paint */

/* PicGiftDialog::paint(CapcomGraphics*) */

void __thiscall PicGiftDialog::paint(PicGiftDialog *this,CapcomGraphics *param_1)

{
  int *piVar1;
  
  if (this[0x14] != (PicGiftDialog)0x0) {
    ScreenElement::paint((ScreenElement *)this,param_1);
    ScreenElement::localToParentCoords((ScreenElement *)this,0,0);
    CapcomGraphics::translate((long)param_1);
    piVar1 = *(int **)(this + 0xbc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1,param_1);
    }
    (**(code **)(**(int **)(this + 0x7c) + 0xc))(*(int **)(this + 0x7c),param_1);
    ScreenElement::localToParentCoords((ScreenElement *)this,0,0);
    CapcomGraphics::translate((long)param_1);
  }
  return;
}


