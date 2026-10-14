/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001faa32 Vector<ImageElement*>::~Vector */

/* Vector<ImageElement*>::~Vector() */

Vector<ImageElement*> * __thiscall Vector<ImageElement*>::~Vector(Vector<ImageElement*> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


