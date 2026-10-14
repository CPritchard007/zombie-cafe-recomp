/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022cfb0 Store::~Store */

/* Store::~Store() */

Store * __thiscall Store::~Store(Store *this)

{
  ~Store(this);
  operator_delete(this);
  return this;
}


