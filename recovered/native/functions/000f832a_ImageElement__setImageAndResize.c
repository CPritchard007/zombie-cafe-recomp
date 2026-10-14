/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f832a ImageElement::setImageAndResize */

/* ImageElement::setImageAndResize(CImage*) */

void __thiscall ImageElement::setImageAndResize(ImageElement *this,CImage *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(CImage **)(this + 100) = param_1;
  if (this[0x90] == (ImageElement)0x0) {
    uVar1 = CImage::getWidth(param_1);
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar1 = CImage::getHeight(param_1);
  }
  else {
    uVar1 = CImage::getWidth(param_1);
    iVar2 = CapcomApp::getInstance();
    uVar1 = __floatsisf(uVar1);
    __mulsf3(uVar1,*(undefined4 *)(iVar2 + 0x40));
    uVar1 = __fixsfsi();
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar1 = CImage::getHeight(param_1);
    iVar2 = CapcomApp::getInstance();
    uVar1 = __floatsisf(uVar1);
    __mulsf3(uVar1,*(undefined4 *)(iVar2 + 0x44));
    uVar1 = __fixsfsi();
  }
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}


