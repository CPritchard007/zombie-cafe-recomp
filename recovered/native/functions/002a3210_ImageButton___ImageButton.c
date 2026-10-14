/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3210 ImageButton::~ImageButton */

/* ImageButton::~ImageButton() */

ImageButton * __thiscall ImageButton::~ImageButton(ImageButton *this)

{
  ~ImageButton(this);
  operator_delete(this);
  return this;
}


