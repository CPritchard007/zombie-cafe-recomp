/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a58e4 TextElement::~TextElement */

/* TextElement::~TextElement() */

TextElement * __thiscall TextElement::~TextElement(TextElement *this)

{
  ~TextElement(this);
  operator_delete(this);
  return this;
}


