/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00103a20 FurnitureButton::paint */

/* FurnitureButton::paint(CapcomGraphics*) */

void __thiscall FurnitureButton::paint(FurnitureButton *this,CapcomGraphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CImage *this_00;
  undefined8 uVar4;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  
  ScreenElement::localToParentCoordsBig((ScreenElement *)this,0,*(int *)(this + 0x10) >> 1);
  iVar1 = CapcomGraphics::isWithinClipBounds(CONCAT44(in_stack_ffffffdc,in_stack_ffffffd8));
  if (iVar1 == 0) {
    ScreenElement::localToParentCoordsBig
              ((ScreenElement *)this,*(int *)(this + 0xc) + -1,*(int *)(this + 0x10) >> 1);
    iVar1 = CapcomGraphics::isWithinClipBounds(CONCAT44(in_stack_ffffffdc,in_stack_ffffffd8));
    if (iVar1 == 0) {
      return;
    }
  }
  if (this[0x80] == (FurnitureButton)0x0) {
    CapcomGraphics::setColorModulation(param_1,true);
    CapcomGraphics::setColor(param_1,*(int *)(this + 0x90));
  }
  ScreenElement::paint((ScreenElement *)this,param_1);
  ScreenElement::localToParentCoordsBig
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x74) + 0xc) >> 1,
             *(int *)(this + 0x10) - (*(int *)(*(int *)(this + 0x74) + 0x10) >> 1));
  SmDev();
  CapcomGraphics::setColorModulation(param_1,false);
  if (this[0x80] == (FurnitureButton)0x0) {
    uVar4 = ScreenElement::localToParentCoordsBig
                      ((ScreenElement *)this,*(int *)(this + 0xc) >> 1,*(int *)(this + 0x10) >> 1);
    CapcomApp::getInstance();
    CapcomApp::getInstance();
    CapcomApp::getInstance();
    CapcomApp::getInstance();
    this_00 = *(CImage **)(*(int *)(this + 0x6c) + 0x1a8);
    iVar2 = CImage::getHeight(this_00);
    iVar1 = iVar2 + *(int *)(this + 0x10) >> 1;
    if ((int)uVar4 < iVar1) {
      iVar1 = (int)uVar4;
    }
    iVar3 = __divsi3(iVar2,3);
    (**(code **)(*(int *)this_00 + 0x10))
              (this_00,param_1,(int)((ulonglong)uVar4 >> 0x20),(iVar1 - (iVar2 >> 1)) + iVar3,0,0x12
              );
    SmDev();
  }
  CapcomGraphics::setColor(param_1,-1);
  return;
}


