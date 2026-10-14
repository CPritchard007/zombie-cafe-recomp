/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00154bac Vector<GatyaEftImageElement*>::~Vector */

/* Vector<GatyaEftImageElement*>::~Vector() */

Vector<GatyaEftImageElement*> * __thiscall
Vector<GatyaEftImageElement*>::~Vector(Vector<GatyaEftImageElement*> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


