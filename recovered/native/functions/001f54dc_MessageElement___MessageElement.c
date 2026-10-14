/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f54dc MessageElement::~MessageElement */

/* MessageElement::~MessageElement() */

MessageElement * __thiscall MessageElement::~MessageElement(MessageElement *this)

{
  ~MessageElement(this);
  operator_delete(this);
  return this;
}


