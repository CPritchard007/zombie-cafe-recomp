/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fef60 CookingOrder::~CookingOrder */

/* CookingOrder::~CookingOrder() */

CookingOrder * __thiscall CookingOrder::~CookingOrder(CookingOrder *this)

{
  ~CookingOrder(this);
  operator_delete(this);
  return this;
}


