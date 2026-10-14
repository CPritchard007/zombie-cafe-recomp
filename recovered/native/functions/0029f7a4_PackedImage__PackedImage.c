/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f7a4 PackedImage::PackedImage */

/* PackedImage::PackedImage(CImage const*) */

PackedImage * __thiscall PackedImage::PackedImage(PackedImage *this,CImage *param_1)

{
  CImage::CImage((CImage *)this,param_1);
  *(int *)this = *(int *)(DAT_0029f7c0 + 0x29f7b4) + 8;
  *(undefined4 *)(this + 0x34) = 0;
  return this;
}


