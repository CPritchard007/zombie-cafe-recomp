/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a405c GatyaEftImageElement::GatyaEftImageElement */

/* GatyaEftImageElement::GatyaEftImageElement(ZombieCafe*, unsigned char) */

GatyaEftImageElement * __thiscall
GatyaEftImageElement::GatyaEftImageElement
          (GatyaEftImageElement *this,ZombieCafe *param_1,uchar param_2)

{
  ImageElement::ImageElement((ImageElement *)this,param_2);
  *(int *)this = *(int *)(DAT_002a40a8 + 0x2a4072) + 8;
  *(ZombieCafe **)(this + 0x9c) = param_1;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  this[0xa8] = (GatyaEftImageElement)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  return this;
}


