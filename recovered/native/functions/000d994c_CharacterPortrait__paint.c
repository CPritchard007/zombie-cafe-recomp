/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d994c CharacterPortrait::paint */

/* CharacterPortrait::paint(CapcomGraphics*) */

void __thiscall CharacterPortrait::paint(CharacterPortrait *this,CapcomGraphics *param_1)

{
  int *piVar1;
  
  ScreenElement::paint((ScreenElement *)this,param_1);
  ScreenElement::localToParentCoords((ScreenElement *)this,0,0);
  CapcomGraphics::translate((long)param_1);
  piVar1 = *(int **)(this + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1);
  }
  (**(code **)(**(int **)(this + 100) + 0xc))(*(int **)(this + 100),param_1);
  ScreenElement::localToParentCoords((ScreenElement *)this,0,0);
  CapcomGraphics::translate((long)param_1);
  return;
}


