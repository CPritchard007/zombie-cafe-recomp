/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a41c8 GatyaEftImageElement::GatyaEftImageElement */

/* GatyaEftImageElement::GatyaEftImageElement(ZombieCafe*, CImage*, long, int, int, unsigned char,
   bool) */

GatyaEftImageElement * __thiscall
GatyaEftImageElement::GatyaEftImageElement
          (GatyaEftImageElement *this,ZombieCafe *param_1,CImage *param_2,long param_3,int param_4,
          int param_5,uchar param_6,bool param_7)

{
  ImageElement::ImageElement((ImageElement *)this,param_2,param_3,param_4,param_5,param_6,param_7);
  *(int *)this = *(int *)(DAT_002a422c + 0x2a41f4) + 8;
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


