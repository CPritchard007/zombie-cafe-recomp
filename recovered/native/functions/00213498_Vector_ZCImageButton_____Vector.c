/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00213498 Vector<ZCImageButton*>::~Vector */

/* Vector<ZCImageButton*>::~Vector() */

Vector<ZCImageButton*> * __thiscall Vector<ZCImageButton*>::~Vector(Vector<ZCImageButton*> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


