/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4dc4 CafeWall::~CafeWall */

/* CafeWall::~CafeWall() */

CafeWall * __thiscall CafeWall::~CafeWall(CafeWall *this)

{
  *(int *)this = *(int *)(DAT_000c4df4 + 0xc4dce) + 8;
  if (*(int **)(this + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44) + 4))();
  }
  CafeObject::~CafeObject((CafeObject *)this);
  return this;
}


