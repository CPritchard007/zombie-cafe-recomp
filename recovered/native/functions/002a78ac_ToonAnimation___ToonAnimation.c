/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a78ac ToonAnimation::~ToonAnimation */

/* ToonAnimation::~ToonAnimation() */

ToonAnimation * __thiscall ToonAnimation::~ToonAnimation(ToonAnimation *this)

{
  ~ToonAnimation(this);
  operator_delete(this);
  return this;
}


