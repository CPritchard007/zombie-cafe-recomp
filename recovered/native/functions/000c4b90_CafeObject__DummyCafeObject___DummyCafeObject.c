/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4b90 CafeObject::DummyCafeObject::~DummyCafeObject */

/* CafeObject::DummyCafeObject::~DummyCafeObject() */

DummyCafeObject * __thiscall CafeObject::DummyCafeObject::~DummyCafeObject(DummyCafeObject *this)

{
  ~DummyCafeObject(this);
  operator_delete(this);
  return this;
}


