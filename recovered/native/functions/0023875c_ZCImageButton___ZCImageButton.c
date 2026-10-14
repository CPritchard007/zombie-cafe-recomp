/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023875c ZCImageButton::~ZCImageButton */

/* ZCImageButton::~ZCImageButton() */

ZCImageButton * __thiscall ZCImageButton::~ZCImageButton(ZCImageButton *this)

{
  *(int *)this = *(int *)(DAT_00238774 + 0x238766) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


