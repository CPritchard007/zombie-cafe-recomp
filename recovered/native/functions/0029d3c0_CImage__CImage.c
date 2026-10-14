/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d3c0 CImage::CImage */

/* CImage::CImage(CFTexture, int, int) */

CImage * __thiscall
CImage::CImage(CImage *this,CFTexture *param_2,undefined2 param_3,undefined2 param_4)

{
  CFTexture *this_00;
  
  this_00 = (CFTexture *)(this + 0x14);
  *(int *)this = *(int *)(DAT_0029d440 + 0x29d3d0) + 8;
  String::String((String *)(this + 4));
  CFTexture::CFTexture(this_00);
  String::operator=((String *)(this + 4),0);
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (CImage)0x0;
  CFTexture::releaseRef(this_00);
  CFTexture::init(this_00,param_2);
  *(undefined2 *)(this + 0x20) = param_3;
  *(undefined2 *)(this + 0x1e) = 0;
  *(undefined2 *)(this + 0x1c) = 0;
  *(undefined2 *)(this + 0x22) = param_4;
  *(undefined2 *)(this + 0x2a) = 0;
  *(undefined2 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x26) = 0;
  *(undefined2 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  return this;
}


