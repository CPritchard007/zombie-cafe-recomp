/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fedf8 PendingOrder::~PendingOrder */

/* PendingOrder::~PendingOrder() */

PendingOrder * __thiscall PendingOrder::~PendingOrder(PendingOrder *this)

{
  ~PendingOrder(this);
  operator_delete(this);
  return this;
}


