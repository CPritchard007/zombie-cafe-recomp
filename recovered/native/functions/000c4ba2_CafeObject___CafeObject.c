/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4ba2 CafeObject::~CafeObject */

/* CafeObject::~CafeObject() */

CafeObject * __thiscall CafeObject::~CafeObject(CafeObject *this)

{
  ~CafeObject(this);
  operator_delete(this);
  return this;
}


