/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001feea8 CompleteOrder::~CompleteOrder */

/* CompleteOrder::~CompleteOrder() */

CompleteOrder * __thiscall CompleteOrder::~CompleteOrder(CompleteOrder *this)

{
  ~CompleteOrder(this);
  operator_delete(this);
  return this;
}


