/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7c78 ToonAnimation::destroy */

/* ToonAnimation::destroy() */

void __thiscall ToonAnimation::destroy(ToonAnimation *this)

{
  short sVar1;
  Data *this_00;
  
  PackedImage::destroyImages(*(PackedImage **)(this + 0x24),*(CImage ***)(this + 0x28));
  this_00 = *(Data **)(this + 0x20);
  sVar1 = *(short *)(this_00 + 4);
  *(short *)(this_00 + 4) = sVar1 + -1;
  if ((short)(sVar1 + -1) < 1) {
    Data::~Data(this_00);
    operator_delete(this_00);
  }
  ImageAnimation::destroy((ImageAnimation *)this);
  return;
}


