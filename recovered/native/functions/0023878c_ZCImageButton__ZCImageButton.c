/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023878c ZCImageButton::ZCImageButton */

/* ZCImageButton::ZCImageButton(unsigned char, CImage*, CImage*, int, int, bool) */

ZCImageButton * __thiscall
ZCImageButton::ZCImageButton
          (ZCImageButton *this,uchar param_1,CImage *param_2,CImage *param_3,int param_4,int param_5
          ,bool param_6)

{
  int iVar1;
  
  ImageButton::ImageButton((ImageButton *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  *(int *)this = *(int *)(DAT_002387f4 + 0x2387ac) + 8;
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


