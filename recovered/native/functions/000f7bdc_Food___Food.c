/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7bdc Food::~Food */

/* Food::~Food() */

Food * __thiscall Food::~Food(Food *this)

{
  ~Food(this);
  operator_delete(this);
  return this;
}


