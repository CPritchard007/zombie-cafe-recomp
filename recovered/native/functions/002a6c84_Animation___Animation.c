/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6c84 Animation::~Animation */

/* Animation::~Animation() */

Animation * __thiscall Animation::~Animation(Animation *this)

{
  *(int *)this = *(int *)(DAT_002a6c9c + 0x2a6c8e) + 8;
  operator_delete(this);
  return this;
}


