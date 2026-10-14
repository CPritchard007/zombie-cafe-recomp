/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2744 BitmapTextElement::~BitmapTextElement */

/* BitmapTextElement::~BitmapTextElement() */

BitmapTextElement * __thiscall BitmapTextElement::~BitmapTextElement(BitmapTextElement *this)

{
  *(int *)this = *(int *)(DAT_002a2778 + 0x2a274e) + 8;
  TextElement::clearBreaks((TextElement *)this);
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    free(*(void **)(this + 0xb8));
  }
  TextElement::~TextElement((TextElement *)this);
  return this;
}


