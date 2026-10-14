/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7b80 Food::~Food */

/* Food::~Food() */

Food * __thiscall Food::~Food(Food *this)

{
  void *pvVar1;
  
  *(int *)this = *(int *)(DAT_000f7bd8 + 0xf7b8a) + 8;
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  pvVar1 = *(void **)(this + 100);
  if (pvVar1 != (void *)0x0) {
    String::~String((String *)((int)pvVar1 + 0x14));
    String::~String((String *)((int)pvVar1 + 0xc));
    operator_delete(pvVar1);
  }
  Furniture::~Furniture((Furniture *)this);
  return this;
}


