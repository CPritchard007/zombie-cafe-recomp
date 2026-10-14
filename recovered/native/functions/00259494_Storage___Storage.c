/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00259494 Storage::~Storage */

/* Storage::~Storage() */

Storage * __thiscall Storage::~Storage(Storage *this)

{
  ~Storage(this);
  operator_delete(this);
  return this;
}


