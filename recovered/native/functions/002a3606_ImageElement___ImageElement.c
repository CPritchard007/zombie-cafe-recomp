/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3606 ImageElement::~ImageElement */

/* ImageElement::~ImageElement() */

ImageElement * __thiscall ImageElement::~ImageElement(ImageElement *this)

{
  ~ImageElement(this);
  operator_delete(this);
  return this;
}


