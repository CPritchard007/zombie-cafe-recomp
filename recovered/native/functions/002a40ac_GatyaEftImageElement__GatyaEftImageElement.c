/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a40ac GatyaEftImageElement::GatyaEftImageElement */

/* GatyaEftImageElement::GatyaEftImageElement(ZombieCafe*, CImage*, unsigned char, bool) */

GatyaEftImageElement * __thiscall
GatyaEftImageElement::GatyaEftImageElement
          (GatyaEftImageElement *this,ZombieCafe *param_1,CImage *param_2,uchar param_3,bool param_4
          )

{
  ImageElement::ImageElement((ImageElement *)this,param_2,param_3,param_4);
  *(int *)this = *(int *)(DAT_002a4100 + 0x2a40c8) + 8;
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


