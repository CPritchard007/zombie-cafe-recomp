/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4104 GatyaEftImageElement::GatyaEftImageElement */

/* GatyaEftImageElement::GatyaEftImageElement(ZombieCafe*, CImage*, float, float, unsigned char,
   bool) */

ulonglong __thiscall
GatyaEftImageElement::GatyaEftImageElement
          (GatyaEftImageElement *this,ZombieCafe *param_1,CImage *param_2,float param_3,
          float param_4,uchar param_5,bool param_6)

{
  undefined1 in_stack_00000004;
  
  ImageElement::ImageElement((ImageElement *)this,param_2,param_3,param_4,param_5,param_6);
  *(int *)this = *(int *)(DAT_002a4164 + 0x2a412c) + 8;
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
  return (ulonglong)CONCAT14(in_stack_00000004,this);
}


