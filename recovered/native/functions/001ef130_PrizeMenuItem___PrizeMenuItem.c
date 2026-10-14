/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ef130 PrizeMenuItem::~PrizeMenuItem */

/* PrizeMenuItem::~PrizeMenuItem() */

PrizeMenuItem * __thiscall PrizeMenuItem::~PrizeMenuItem(PrizeMenuItem *this)

{
  ~PrizeMenuItem(this);
  operator_delete(this);
  return this;
}


