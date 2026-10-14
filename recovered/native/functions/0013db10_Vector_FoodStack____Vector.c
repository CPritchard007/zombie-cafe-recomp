/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013db10 Vector<FoodStack*>::Vector */

/* Vector<FoodStack*>::Vector() */

Vector<FoodStack*> * __thiscall Vector<FoodStack*>::Vector(Vector<FoodStack*> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 2);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


