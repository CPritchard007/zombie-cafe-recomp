/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5410 ScreenElement::~ScreenElement */

/* ScreenElement::~ScreenElement() */

ScreenElement * __thiscall ScreenElement::~ScreenElement(ScreenElement *this)

{
  ~ScreenElement(this);
  operator_delete(this);
  return this;
}


