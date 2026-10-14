/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4628 GatyaEftFallImageElement::GatyaEftFallImageElement */

/* GatyaEftFallImageElement::GatyaEftFallImageElement(CImage*, float, float, float, float, float,
   unsigned char) */

ulonglong __thiscall
GatyaEftFallImageElement::GatyaEftFallImageElement
          (GatyaEftFallImageElement *this,CImage *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,uchar param_7)

{
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  
  ImageElement::ImageElement
            ((ImageElement *)this,param_1,param_2,param_3,(uchar)*(undefined4 *)(this + 0x68),
             SUB41(*(undefined4 *)(this + 0x6c),0));
  *(int *)this = *(int *)(DAT_002a466c + 0x2a464e) + 8;
  *(undefined4 *)(this + 0xa0) = in_stack_00000000;
  *(uint *)(this + 0x98) = (uint)param_7;
  *(undefined4 *)(this + 0x9c) = in_r3;
  *(undefined4 *)(this + 0xa4) = in_stack_00000004;
  *(undefined4 *)(this + 0xa8) = in_stack_00000008;
  *(undefined4 *)(this + 0xac) = 0;
  return (ulonglong)CONCAT14(in_stack_0000000c,this);
}


