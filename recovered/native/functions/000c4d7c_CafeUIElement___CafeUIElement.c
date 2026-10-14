/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4d7c CafeUIElement::~CafeUIElement */

/* CafeUIElement::~CafeUIElement() */

CafeUIElement * __thiscall CafeUIElement::~CafeUIElement(CafeUIElement *this)

{
  ~CafeUIElement(this);
  operator_delete(this);
  return this;
}


