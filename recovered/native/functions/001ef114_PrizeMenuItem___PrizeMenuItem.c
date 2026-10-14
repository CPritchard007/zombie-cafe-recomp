/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ef114 PrizeMenuItem::~PrizeMenuItem */

/* PrizeMenuItem::~PrizeMenuItem() */

PrizeMenuItem * __thiscall PrizeMenuItem::~PrizeMenuItem(PrizeMenuItem *this)

{
  *(int *)this = *(int *)(DAT_001ef12c + 0x1ef11e) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


