/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022e8c8 Stove::~Stove */

/* Stove::~Stove() */

Stove * __thiscall Stove::~Stove(Stove *this)

{
  ~Stove(this);
  operator_delete(this);
  return this;
}


