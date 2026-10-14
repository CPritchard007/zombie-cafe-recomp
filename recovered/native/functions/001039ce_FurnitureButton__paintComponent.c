/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001039ce FurnitureButton::paintComponent */

/* FurnitureButton::paintComponent(CapcomGraphics*) */

void __thiscall FurnitureButton::paintComponent(FurnitureButton *this,CapcomGraphics *param_1)

{
  if (*(int *)(this + 0x8c) == -1) {
    ItemButton::paintComponent((ItemButton *)this,param_1);
  }
  else {
    CapcomGraphics::setColorModulation(param_1,true);
    CapcomGraphics::setColor(param_1,*(int *)(this + 0x8c));
    ItemButton::paintComponent((ItemButton *)this,param_1);
    if (this[0x80] == (FurnitureButton)0x0) {
      CapcomGraphics::setColor(param_1,*(int *)(this + 0x90));
    }
    CapcomGraphics::setColorModulation(param_1,false);
  }
  return;
}


