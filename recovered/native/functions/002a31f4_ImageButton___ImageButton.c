/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a31f4 ImageButton::~ImageButton */

/* ImageButton::~ImageButton() */

ImageButton * __thiscall ImageButton::~ImageButton(ImageButton *this)

{
  *(int *)this = *(int *)(DAT_002a320c + 0x2a31fe) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


