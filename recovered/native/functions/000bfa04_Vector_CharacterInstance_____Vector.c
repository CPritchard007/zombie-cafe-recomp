/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bfa04 Vector<CharacterInstance*>::~Vector */

/* Vector<CharacterInstance*>::~Vector() */

Vector<CharacterInstance*> * __thiscall
Vector<CharacterInstance*>::~Vector(Vector<CharacterInstance*> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


