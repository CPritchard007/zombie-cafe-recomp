/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011fbe2 Vector<RecipeAndVariant>::~Vector */

/* Vector<RecipeAndVariant>::~Vector() */

Vector<RecipeAndVariant> * __thiscall
Vector<RecipeAndVariant>::~Vector(Vector<RecipeAndVariant> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


