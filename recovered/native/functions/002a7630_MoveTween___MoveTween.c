/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7630 MoveTween::~MoveTween */

/* MoveTween::~MoveTween() */

MoveTween * __thiscall MoveTween::~MoveTween(MoveTween *this)

{
  *(int *)this = *(int *)(DAT_002a7648 + 0x2a763a) + 8;
  operator_delete(this);
  return this;
}


