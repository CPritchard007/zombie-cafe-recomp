/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f3fe4 FeaturedItemDialog::~FeaturedItemDialog */

/* FeaturedItemDialog::~FeaturedItemDialog() */

FeaturedItemDialog * __thiscall FeaturedItemDialog::~FeaturedItemDialog(FeaturedItemDialog *this)

{
  *(int *)this = *(int *)(DAT_000f3ffc + 0xf3fee) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


