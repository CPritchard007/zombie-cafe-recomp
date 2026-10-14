/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00180fa8 GameStateRaid::~GameStateRaid */

/* GameStateRaid::~GameStateRaid() */

GameStateRaid * __thiscall GameStateRaid::~GameStateRaid(GameStateRaid *this)

{
  *(int *)this = *(int *)(DAT_0018101c + 0x180fb4) + 8;
  if (*(void **)(this + 0x128) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x128));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0x108));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0xfc));
  Vector<int>::~Vector((Vector<int> *)(this + 0xec));
  if (*(void **)(this + 0xe8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xe8));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0xd4));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0xc4));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0xb8));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0xac));
  *(int *)this = *(int *)(DAT_00181020 + 0x181016) + 8;
  return this;
}


