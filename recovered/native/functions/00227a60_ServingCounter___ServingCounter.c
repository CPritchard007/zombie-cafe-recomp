/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227a60 ServingCounter::~ServingCounter */

/* ServingCounter::~ServingCounter() */

ServingCounter * __thiscall ServingCounter::~ServingCounter(ServingCounter *this)

{
  ~ServingCounter(this);
  operator_delete(this);
  return this;
}


