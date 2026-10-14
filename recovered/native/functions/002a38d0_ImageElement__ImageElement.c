/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a38d0 ImageElement::ImageElement */

/* ImageElement::ImageElement(unsigned char) */

ImageElement * __thiscall ImageElement::ImageElement(ImageElement *this,uchar param_1)

{
  int iVar1;
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar1 = DAT_002a3934;
  *(undefined4 *)(this + 0x74) = 0;
  iVar1 = *(int *)(iVar1 + 0x2a38e6);
  *(undefined4 *)(this + 0x78) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  *(undefined4 *)(this + 0x7c) = 0x3f800000;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 100) = 0;
  ScreenElement::setAnchor((ScreenElement *)this,param_1);
  this[0x60] = (ImageElement)0x0;
  this[0x91] = (ImageElement)0x0;
  this[0x92] = (ImageElement)0x0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  this[0x90] = (ImageElement)0x1;
  return this;
}


