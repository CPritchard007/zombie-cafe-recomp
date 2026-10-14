/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7b38 Furniture::~Furniture */

/* Furniture::~Furniture() */

Furniture * __thiscall Furniture::~Furniture(Furniture *this)

{
  *(int *)this = *(int *)(DAT_000f7b7c + 0xf7b42) + 8;
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3c) + 4))();
  }
  *(undefined4 *)(this + 0x3c) = 0;
  if (*(int **)(this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 4))();
    *(undefined4 *)(this + 0x48) = 0;
  }
  CafeObject::~CafeObject((CafeObject *)this);
  return this;
}


