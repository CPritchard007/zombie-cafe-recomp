/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3f7c ImageElement::setScale */

/* ImageElement::setScale(float, float) */

void __thiscall ImageElement::setScale(ImageElement *this,float param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  CImage *this_00;
  
  *(undefined4 *)(this + 0x6c) = in_r2;
  *(undefined4 *)(this + 0x68) = in_r1;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x70) = in_r1;
  this_00 = *(CImage **)(this + 100);
  *(undefined4 *)(this + 0x7c) = in_r2;
  CImage::getWidth(this_00);
  uVar1 = __floatsisf();
  __mulsf3(uVar1,in_r1);
  uVar1 = __fixsfsi();
  *(undefined4 *)(this + 0xc) = uVar1;
  CImage::getHeight(this_00);
  uVar1 = __floatsisf();
  __mulsf3(uVar1,in_r2);
  uVar1 = __fixsfsi();
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}


