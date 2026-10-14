/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a0634 GameStateEventRaid::~GameStateEventRaid */

/* GameStateEventRaid::~GameStateEventRaid() */

GameStateEventRaid * __thiscall GameStateEventRaid::~GameStateEventRaid(GameStateEventRaid *this)

{
  *(int *)this = *(int *)(DAT_001a06a0 + 0x1a063e) + 8;
  Vector<int>::~Vector((Vector<int> *)(this + 0x114));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x108));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0xfc));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0xf0));
  if (*(void **)(this + 0xec) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xec));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0xd8));
  if (*(void **)(this + 0xd4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd4));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0xc0));
  *(int *)this = *(int *)(DAT_001a06a4 + 0x1a069a) + 8;
  return this;
}


