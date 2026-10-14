/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002472c4 Vector<CapcomDate>::~Vector */

/* Vector<CapcomDate>::~Vector() */

Vector<CapcomDate> * __thiscall Vector<CapcomDate>::~Vector(Vector<CapcomDate> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


