/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f1e0 PackedImage::~PackedImage */

/* PackedImage::~PackedImage() */

PackedImage * __thiscall PackedImage::~PackedImage(PackedImage *this)

{
  int iVar1;
  String *this_00;
  
  *(int *)this = *(int *)(DAT_0029f22c + 0x29f1ea) + 8;
  iVar1 = *(int *)(this + 0x34);
  if (iVar1 != 0) {
    this_00 = (String *)(iVar1 + *(int *)(iVar1 + -4) * 0x18);
    while (this_00 != *(String **)(this + 0x34)) {
      this_00 = this_00 + -0x18;
      String::~String(this_00);
    }
    operator_delete__(this_00 + -8);
  }
  CImage::~CImage((CImage *)this);
  return this;
}


