/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4230 GatyaEftImageElement::GatyaEftImageElement */

/* GatyaEftImageElement::GatyaEftImageElement(ZombieCafe*, CImage*, long, int, int, float, float,
   unsigned char, bool) */

GatyaEftImageElement * __thiscall
GatyaEftImageElement::GatyaEftImageElement
          (GatyaEftImageElement *this,ZombieCafe *param_1,CImage *param_2,long param_3,int param_4,
          int param_5,float param_6,float param_7,uchar param_8,bool param_9)

{
  ImageElement::ImageElement
            ((ImageElement *)this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *(int *)this = *(int *)(DAT_002a42a0 + 0x2a4266) + 8;
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


