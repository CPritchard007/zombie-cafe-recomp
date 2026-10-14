/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e2f04 ItemButton::~ItemButton */

/* ItemButton::~ItemButton() */

ItemButton * __thiscall ItemButton::~ItemButton(ItemButton *this)

{
  *(int *)this = *(int *)(DAT_001e2f1c + 0x1e2f0e) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


