/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024728e Vector<bool>::~Vector */

/* Vector<bool>::~Vector() */

Vector<bool> * __thiscall Vector<bool>::~Vector(Vector<bool> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


