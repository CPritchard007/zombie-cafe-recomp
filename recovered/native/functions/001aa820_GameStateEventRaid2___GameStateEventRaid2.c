/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aa820 GameStateEventRaid2::~GameStateEventRaid2 */

/* GameStateEventRaid2::~GameStateEventRaid2() */

GameStateEventRaid2 * __thiscall
GameStateEventRaid2::~GameStateEventRaid2(GameStateEventRaid2 *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_001aa8a0 + 0x1aa82a) + 8;
  Vector<int>::~Vector((Vector<int> *)(this + 0x134));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x128));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x11c));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x110));
  if (*(void **)(this + 0x10c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10c));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0xf8));
  if (*(void **)(this + 0xf4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xf4));
  }
  iVar1 = DAT_001aa8a4;
  Vector<int>::~Vector((Vector<int> *)(this + 0xe0));
  iVar1 = *(int *)(iVar1 + 0x1aa88a);
  String::~String((String *)(this + 0x1c));
  *(int *)this = iVar1 + 8;
  return this;
}


