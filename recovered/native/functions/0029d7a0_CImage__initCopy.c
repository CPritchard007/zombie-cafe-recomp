/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d7a0 CImage::initCopy */

/* CImage::initCopy(CImage const*, int, int, int, int) */

ulonglong __thiscall
CImage::initCopy(CImage *this,CImage *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 local_1c;
  
  local_1c = (undefined2)param_3;
  CFTexture::releaseRef((CFTexture *)(this + 0x14));
  CFTexture::init((CFTexture *)(this + 0x14),param_1 + 0x14);
  *(short *)(this + 0x20) = (short)param_4;
  *(short *)(this + 0x1c) = (short)param_2;
  *(undefined2 *)(this + 0x1e) = local_1c;
  *(short *)(this + 0x22) = (short)param_5;
  *(undefined2 *)(this + 0x2a) = 0;
  *(undefined2 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x26) = 0;
  *(undefined2 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  return (ulonglong)CONCAT24(local_1c,this);
}


