/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4168 GatyaEftImageElement::GatyaEftImageElement */

/* GatyaEftImageElement::GatyaEftImageElement(ZombieCafe*, CImage*, long, unsigned char, bool) */

undefined8 __thiscall
GatyaEftImageElement::GatyaEftImageElement
          (GatyaEftImageElement *this,ZombieCafe *param_1,CImage *param_2,long param_3,uchar param_4
          ,bool param_5)

{
  uint uVar1;
  
  uVar1 = (uint)param_5;
  ImageElement::ImageElement((ImageElement *)this,param_2,param_3,param_4,param_5);
  *(int *)this = *(int *)(DAT_002a41c4 + 0x2a418c) + 8;
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
  return CONCAT44(uVar1,this);
}


