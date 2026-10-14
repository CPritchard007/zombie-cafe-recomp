/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024727c Vector<Order*>::~Vector */

/* Vector<Order*>::~Vector() */

Vector<Order*> * __thiscall Vector<Order*>::~Vector(Vector<Order*> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


