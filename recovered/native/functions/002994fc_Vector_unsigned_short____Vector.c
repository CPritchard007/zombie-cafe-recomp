/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002994fc Vector<unsigned_short>::~Vector */

/* Vector<unsigned short>::~Vector() */

Vector<unsigned_short> * __thiscall Vector<unsigned_short>::~Vector(Vector<unsigned_short> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


