/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5508 Scrollbar::~Scrollbar */

/* Scrollbar::~Scrollbar() */

Scrollbar * __thiscall Scrollbar::~Scrollbar(Scrollbar *this)

{
  *(int *)this = *(int *)(DAT_002a5520 + 0x2a5512) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


