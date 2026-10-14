/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a787c ToonAnimation::~ToonAnimation */

/* ToonAnimation::~ToonAnimation() */

ToonAnimation * __thiscall ToonAnimation::~ToonAnimation(ToonAnimation *this)

{
  *(int *)this = *(int *)(DAT_002a78a4 + 0x2a7886) + 8;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  *(int *)this = *(int *)(DAT_002a78a8 + 0x2a789c) + 8;
  return this;
}


