/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a35d8 GatyaEftFallImageElement::~GatyaEftFallImageElement */

/* GatyaEftFallImageElement::~GatyaEftFallImageElement() */

GatyaEftFallImageElement * __thiscall
GatyaEftFallImageElement::~GatyaEftFallImageElement(GatyaEftFallImageElement *this)

{
  *(int *)this = *(int *)(DAT_002a35f0 + 0x2a35e2) + 8;
  ImageElement::~ImageElement((ImageElement *)this);
  return this;
}


