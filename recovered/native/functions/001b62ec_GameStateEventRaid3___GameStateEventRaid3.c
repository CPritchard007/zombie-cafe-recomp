/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b62ec GameStateEventRaid3::~GameStateEventRaid3 */

/* GameStateEventRaid3::~GameStateEventRaid3() */

GameStateEventRaid3 * __thiscall
GameStateEventRaid3::~GameStateEventRaid3(GameStateEventRaid3 *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_001b6370 + 0x1b62f8) + 8;
  Vector<int>::~Vector((Vector<int> *)(this + 0x140));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x134));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x128));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x11c));
  if (*(void **)(this + 0x118) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x118));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0x104));
  if (*(void **)(this + 0x100) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x100));
  }
  iVar1 = DAT_001b6374;
  Vector<int>::~Vector((Vector<int> *)(this + 0xec));
  iVar1 = *(int *)(iVar1 + 0x1b6358);
  String::~String((String *)(this + 0x1c));
  *(int *)this = iVar1 + 8;
  return this;
}


