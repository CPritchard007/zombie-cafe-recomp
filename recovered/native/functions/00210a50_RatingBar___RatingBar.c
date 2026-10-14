/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00210a50 RatingBar::~RatingBar */

/* RatingBar::~RatingBar() */

RatingBar * __thiscall RatingBar::~RatingBar(RatingBar *this)

{
  ~RatingBar(this);
  operator_delete(this);
  return this;
}


