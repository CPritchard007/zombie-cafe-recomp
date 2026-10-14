/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6ca0 ComponentAnimation::~ComponentAnimation */

/* ComponentAnimation::~ComponentAnimation() */

ComponentAnimation * __thiscall ComponentAnimation::~ComponentAnimation(ComponentAnimation *this)

{
  *(int *)this = *(int *)(DAT_002a6cb8 + 0x2a6caa) + 8;
  operator_delete(this);
  return this;
}


