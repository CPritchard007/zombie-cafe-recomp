/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00210a34 RatingBar::~RatingBar */

/* RatingBar::~RatingBar() */

RatingBar * __thiscall RatingBar::~RatingBar(RatingBar *this)

{
  *(int *)this = *(int *)(DAT_00210a4c + 0x210a3e) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


