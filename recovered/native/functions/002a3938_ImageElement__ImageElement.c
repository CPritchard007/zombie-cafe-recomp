/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3938 ImageElement::ImageElement */

/* ImageElement::ImageElement(CImage*, unsigned char, bool) */

ImageElement * __thiscall
ImageElement::ImageElement(ImageElement *this,CImage *param_1,uchar param_2,bool param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar1 = CImage::getWidth(param_1);
  uVar2 = __floatsisf(1 - (uint)param_3);
  iVar3 = CapcomApp::getInstance();
  uVar4 = __floatsisf((uint)param_3);
  uVar1 = __floatsisf(uVar1);
  uVar5 = __mulsf3(uVar4,*(undefined4 *)(iVar3 + 0x40));
  uVar5 = __addsf3(uVar2,uVar5);
  __mulsf3(uVar1,uVar5);
  iVar3 = __fixsfsi();
  uVar1 = CImage::getHeight(param_1);
  iVar6 = CapcomApp::getInstance();
  uVar1 = __floatsisf(uVar1);
  uVar5 = __mulsf3(uVar4,*(undefined4 *)(iVar6 + 0x44));
  uVar5 = __addsf3(uVar2,uVar5);
  __mulsf3(uVar1,uVar5);
  iVar6 = __fixsfsi();
  ScreenElement::ScreenElement((ScreenElement *)this,0,0,iVar3,iVar6,param_2,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a3a64 + 0x2a39dc) + 8;
  iVar3 = CapcomApp::getInstance();
  uVar1 = __mulsf3(uVar4,*(undefined4 *)(iVar3 + 0x40));
  uVar1 = __addsf3(uVar2,uVar1);
  *(undefined4 *)(this + 0x68) = uVar1;
  iVar3 = CapcomApp::getInstance();
  uVar1 = __mulsf3(uVar4,*(undefined4 *)(iVar3 + 0x44));
  uVar1 = __addsf3(uVar2,uVar1);
  *(undefined4 *)(this + 0x6c) = uVar1;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x7c) = uVar1;
  *(CImage **)(this + 100) = param_1;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(this + 0x68);
  this[0x60] = (ImageElement)0x0;
  this[0x91] = (ImageElement)0x0;
  this[0x92] = (ImageElement)0x0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  this[0x90] = (ImageElement)param_3;
  return this;
}


