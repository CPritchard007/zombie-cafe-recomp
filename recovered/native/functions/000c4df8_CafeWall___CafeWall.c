/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4df8 CafeWall::~CafeWall */

/* CafeWall::~CafeWall() */

CafeWall * __thiscall CafeWall::~CafeWall(CafeWall *this)

{
  ~CafeWall(this);
  operator_delete(this);
  return this;
}


