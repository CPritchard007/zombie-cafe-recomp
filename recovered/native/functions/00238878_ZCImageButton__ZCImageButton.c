/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238878 ZCImageButton::ZCImageButton */

/* ZCImageButton::ZCImageButton(long, int, int, unsigned char, CImage*, CImage*, int, int, CImage*,
   int, int, bool) */

ZCImageButton * __thiscall
ZCImageButton::ZCImageButton
          (ZCImageButton *this,long param_1,int param_2,int param_3,uchar param_4,CImage *param_5,
          CImage *param_6,int param_7,int param_8,CImage *param_9,int param_10,int param_11,
          bool param_12)

{
  int iVar1;
  
  ImageButton::ImageButton
            ((ImageButton *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10,param_11,param_12);
  *(int *)this = *(int *)(DAT_002388f8 + 0x2388b2) + 8;
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(iVar1 + 4);
  this[0x91] = (ZCImageButton)0x0;
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  this[0x90] = (ZCImageButton)0x0;
  this[0x92] = (ZCImageButton)0x0;
  this[0x93] = (ZCImageButton)0x0;
  *(undefined4 *)(this + 0x98) = 0;
  this[0x9c] = (ZCImageButton)0x0;
  return this;
}


