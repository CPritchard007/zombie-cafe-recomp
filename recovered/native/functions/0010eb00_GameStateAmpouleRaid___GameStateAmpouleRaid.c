/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010eb00 GameStateAmpouleRaid::~GameStateAmpouleRaid */

/* GameStateAmpouleRaid::~GameStateAmpouleRaid() */

GameStateAmpouleRaid * __thiscall
GameStateAmpouleRaid::~GameStateAmpouleRaid(GameStateAmpouleRaid *this)

{
  *(int *)this = *(int *)(DAT_0010eb6c + 0x10eb0a) + 8;
  Vector<int>::~Vector((Vector<int> *)(this + 0x118));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x10c));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x100));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0xf4));
  if (*(void **)(this + 0xf0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xf0));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0xdc));
  if (*(void **)(this + 0xd8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd8));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0xc4));
  *(int *)this = *(int *)(DAT_0010eb70 + 0x10eb66) + 8;
  return this;
}


