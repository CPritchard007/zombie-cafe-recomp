/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a58a8 TextElement::~TextElement */

/* TextElement::~TextElement() */

TextElement * __thiscall TextElement::~TextElement(TextElement *this)

{
  *(int *)this = *(int *)(DAT_002a58e0 + 0x2a58b4) + 8;
  clearBreaks(this);
  String::~String((String *)(this + 0x60));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


