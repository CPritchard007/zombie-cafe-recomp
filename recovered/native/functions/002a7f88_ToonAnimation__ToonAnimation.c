/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7f88 ToonAnimation::ToonAnimation */

/* ToonAnimation::ToonAnimation(ToonAnimation::Data*, PackedImage*, float) */

ToonAnimation * __thiscall
ToonAnimation::ToonAnimation(ToonAnimation *this,Data *param_1,PackedImage *param_2,float param_3)

{
  void *__s;
  undefined4 uVar1;
  undefined4 in_r3;
  
  ImageAnimation::ImageAnimation((ImageAnimation *)this);
  *(int *)this = *(int *)(DAT_002a8000 + 0x2a7f9e) + 8;
  *(undefined4 *)(this + 0x30) = 10;
  __s = operator_new__(200);
  *(void **)(this + 0x38) = __s;
  memset(__s,0,*(int *)(this + 0x30) * 0x14);
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0;
  *(PackedImage **)(this + 0x24) = param_2;
  uVar1 = PackedImage::getImages(param_2,true);
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x2c) = in_r3;
  setData(this,param_1);
  this[6] = (ToonAnimation)((byte)this[6] | 1);
  return this;
}


