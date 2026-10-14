/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4b74 CafeObject::DummyCafeObject::~DummyCafeObject */

/* CafeObject::DummyCafeObject::~DummyCafeObject() */

DummyCafeObject * __thiscall CafeObject::DummyCafeObject::~DummyCafeObject(DummyCafeObject *this)

{
  *(int *)this = *(int *)(DAT_000c4b8c + 0xc4b7e) + 8;
  ~CafeObject((CafeObject *)this);
  return this;
}


