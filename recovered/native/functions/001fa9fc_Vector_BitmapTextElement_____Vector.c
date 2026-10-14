/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fa9fc Vector<BitmapTextElement*>::~Vector */

/* Vector<BitmapTextElement*>::~Vector() */

Vector<BitmapTextElement*> * __thiscall
Vector<BitmapTextElement*>::~Vector(Vector<BitmapTextElement*> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


