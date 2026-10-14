/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00177fbc ColorModBg::ColorModBg */

/* ColorModBg::ColorModBg(CImage*, float, float, int, unsigned char) */

ulonglong __thiscall
ColorModBg::ColorModBg
          (ColorModBg *this,CImage *param_1,float param_2,float param_3,int param_4,uchar param_5)

{
  undefined4 in_stack_00000000;
  undefined1 in_stack_00000004;
  
  ImageElement::ImageElement
            ((ImageElement *)this,param_1,param_2,param_3,(uchar)param_4,(bool)param_5);
  *(int *)this = *(int *)(DAT_00177fe8 + 0x177fda) + 8;
  *(undefined4 *)(this + 0x98) = in_stack_00000000;
  return (ulonglong)CONCAT14(in_stack_00000004,this);
}


