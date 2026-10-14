/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001374c8 GameStateColosseum::~GameStateColosseum */

/* GameStateColosseum::~GameStateColosseum() */

GameStateColosseum * __thiscall GameStateColosseum::~GameStateColosseum(GameStateColosseum *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_00137548 + 0x1374d2) + 8;
  Vector<int>::~Vector((Vector<int> *)(this + 300));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x120));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x114));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x108));
  if (*(void **)(this + 0x104) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x104));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0xf0));
  if (*(void **)(this + 0xec) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xec));
  }
  iVar1 = DAT_0013754c;
  Vector<int>::~Vector((Vector<int> *)(this + 0xd8));
  iVar1 = *(int *)(iVar1 + 0x137532);
  String::~String((String *)(this + 0x1c));
  *(int *)this = iVar1 + 8;
  return this;
}


