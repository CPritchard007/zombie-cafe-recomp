/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020f444 RandomCafeElement::~RandomCafeElement */

/* RandomCafeElement::~RandomCafeElement() */

RandomCafeElement * __thiscall RandomCafeElement::~RandomCafeElement(RandomCafeElement *this)

{
  ~RandomCafeElement(this);
  operator_delete(this);
  return this;
}


