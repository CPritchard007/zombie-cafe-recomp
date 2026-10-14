/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247198 Vector<Character*>::~Vector */

/* Vector<Character*>::~Vector() */

Vector<Character*> * __thiscall Vector<Character*>::~Vector(Vector<Character*> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


