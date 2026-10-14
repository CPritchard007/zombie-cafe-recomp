/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293f94 SpecialSaleBg::~SpecialSaleBg */

/* SpecialSaleBg::~SpecialSaleBg() */

SpecialSaleBg * __thiscall SpecialSaleBg::~SpecialSaleBg(SpecialSaleBg *this)

{
  *(int *)this = *(int *)(DAT_00293fac + 0x293f9e) + 8;
  ImageElement::~ImageElement((ImageElement *)this);
  return this;
}


