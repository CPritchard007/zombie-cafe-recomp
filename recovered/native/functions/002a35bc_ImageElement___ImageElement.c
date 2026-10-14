/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a35bc ImageElement::~ImageElement */

/* ImageElement::~ImageElement() */

ImageElement * __thiscall ImageElement::~ImageElement(ImageElement *this)

{
  *(int *)this = *(int *)(DAT_002a35d4 + 0x2a35c6) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


