/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023334c TutorialArrow::TutorialArrow */

/* TutorialArrow::TutorialArrow() */

TutorialArrow * __thiscall TutorialArrow::TutorialArrow(TutorialArrow *this)

{
  int iVar1;
  CImage *pCVar2;
  ImageElement *this_00;
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002333c4 + 0x23335c) + 8;
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  detach(this);
  pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar1 + DAT_002333c8),0x1b,false);
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar2,'\0',true);
  *(ImageElement **)(this + 0x6c) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x6c) + 0xc),
             *(int *)(*(int *)(this + 0x6c) + 0x10) << 1);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  return this;
}


