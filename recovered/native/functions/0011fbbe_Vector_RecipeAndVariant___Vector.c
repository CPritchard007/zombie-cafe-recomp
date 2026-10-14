/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011fbbe Vector<RecipeAndVariant>::Vector */

/* Vector<RecipeAndVariant>::Vector() */

Vector<RecipeAndVariant> * __thiscall
Vector<RecipeAndVariant>::Vector(Vector<RecipeAndVariant> *this)

{
  void *__s;
  
  *(undefined4 *)this = 10;
  __s = operator_new__(0x14);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 1);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


