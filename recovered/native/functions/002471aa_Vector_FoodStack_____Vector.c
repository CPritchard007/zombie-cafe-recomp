/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002471aa Vector<FoodStack*>::~Vector */

/* Vector<FoodStack*>::~Vector() */

Vector<FoodStack*> * __thiscall Vector<FoodStack*>::~Vector(Vector<FoodStack*> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


