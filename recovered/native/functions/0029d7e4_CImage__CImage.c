/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d7e4 CImage::CImage */

/* CImage::CImage(CImage const*, int, int, int, int) */

CImage * __thiscall
CImage::CImage(CImage *this,CImage *param_1,int param_2,int param_3,int param_4,int param_5)

{
  *(int *)this = *(int *)(DAT_0029d838 + 0x29d7f4) + 8;
  String::String((String *)(this + 4));
  CFTexture::CFTexture((CFTexture *)(this + 0x14));
  initCopy(this,param_1,param_2,param_3,param_4,param_5);
  return this;
}


