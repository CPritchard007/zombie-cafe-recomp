/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a733c FrameAnimation::~FrameAnimation */

/* FrameAnimation::~FrameAnimation() */

FrameAnimation * __thiscall FrameAnimation::~FrameAnimation(FrameAnimation *this)

{
  *(int *)this = *(int *)(DAT_002a7354 + 0x2a7346) + 8;
  operator_delete(this);
  return this;
}


