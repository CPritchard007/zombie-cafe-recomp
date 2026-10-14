/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c873c Vector<ToonAnimation::ReplacementImage>::~Vector */

/* Vector<ToonAnimation::ReplacementImage>::~Vector() */

Vector<ToonAnimation::ReplacementImage> * __thiscall
Vector<ToonAnimation::ReplacementImage>::~Vector(Vector<ToonAnimation::ReplacementImage> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


