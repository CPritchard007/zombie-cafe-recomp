/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020f428 RandomCafeElement::~RandomCafeElement */

/* RandomCafeElement::~RandomCafeElement() */

RandomCafeElement * __thiscall RandomCafeElement::~RandomCafeElement(RandomCafeElement *this)

{
  *(int *)this = *(int *)(DAT_0020f440 + 0x20f432) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


