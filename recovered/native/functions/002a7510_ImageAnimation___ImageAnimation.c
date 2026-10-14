/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7510 ImageAnimation::~ImageAnimation */

/* ImageAnimation::~ImageAnimation() */

ImageAnimation * __thiscall ImageAnimation::~ImageAnimation(ImageAnimation *this)

{
  *(int *)this = *(int *)(DAT_002a7528 + 0x2a751a) + 8;
  operator_delete(this);
  return this;
}


