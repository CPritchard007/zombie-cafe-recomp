/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7bee Furniture::~Furniture */

/* Furniture::~Furniture() */

Furniture * __thiscall Furniture::~Furniture(Furniture *this)

{
  ~Furniture(this);
  operator_delete(this);
  return this;
}


