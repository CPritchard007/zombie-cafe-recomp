/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00177aa4 ColorModBg::~ColorModBg */

/* ColorModBg::~ColorModBg() */

ColorModBg * __thiscall ColorModBg::~ColorModBg(ColorModBg *this)

{
  *(int *)this = *(int *)(DAT_00177abc + 0x177aae) + 8;
  ImageElement::~ImageElement((ImageElement *)this);
  return this;
}


