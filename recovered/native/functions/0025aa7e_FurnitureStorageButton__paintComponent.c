/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025aa7e FurnitureStorageButton::paintComponent */

/* FurnitureStorageButton::paintComponent(CapcomGraphics*) */

void __thiscall
FurnitureStorageButton::paintComponent(FurnitureStorageButton *this,CapcomGraphics *param_1)

{
  if (*(int *)(this + 0x80) == -1) {
    ItemButton::paintComponent((ItemButton *)this,param_1);
  }
  else {
    CapcomGraphics::setColorModulation(param_1,true);
    CapcomGraphics::setColor(param_1,*(int *)(this + 0x80));
    ItemButton::paintComponent((ItemButton *)this,param_1);
    CapcomGraphics::setColorModulation(param_1,false);
  }
  return;
}


