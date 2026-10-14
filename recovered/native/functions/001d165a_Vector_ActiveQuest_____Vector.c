/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d165a Vector<ActiveQuest*>::~Vector */

/* Vector<ActiveQuest*>::~Vector() */

Vector<ActiveQuest*> * __thiscall Vector<ActiveQuest*>::~Vector(Vector<ActiveQuest*> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


