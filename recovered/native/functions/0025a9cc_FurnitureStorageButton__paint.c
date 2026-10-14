/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025a9cc FurnitureStorageButton::paint */

/* FurnitureStorageButton::paint(CapcomGraphics*) */

void FurnitureStorageButton::paint(CapcomGraphics *param_1)

{
  int iVar1;
  CapcomGraphics *in_r1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  ScreenElement::localToParentCoordsBig((ScreenElement *)param_1,0,*(int *)(param_1 + 0x10) >> 1);
  iVar1 = CapcomGraphics::isWithinClipBounds(CONCAT44(unaff_r4,in_r3));
  if (iVar1 == 0) {
    ScreenElement::localToParentCoordsBig
              ((ScreenElement *)param_1,*(int *)(param_1 + 0xc) + -1,*(int *)(param_1 + 0x10) >> 1);
    iVar1 = CapcomGraphics::isWithinClipBounds(CONCAT44(unaff_r4,in_r3));
    if (iVar1 == 0) {
      return;
    }
  }
  ScreenElement::paint((ScreenElement *)param_1,in_r1);
  ScreenElement::localToParentCoordsBig((ScreenElement *)param_1,0,*(int *)(param_1 + 0x10) >> 1);
  SmDev();
  CapcomGraphics::setColorModulation(in_r1,false);
  CapcomGraphics::setColor(in_r1,-1);
  return;
}


