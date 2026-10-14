/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010eaee Vector<int>::~Vector */

/* Vector<int>::~Vector() */

Vector<int> * __thiscall Vector<int>::~Vector(Vector<int> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


