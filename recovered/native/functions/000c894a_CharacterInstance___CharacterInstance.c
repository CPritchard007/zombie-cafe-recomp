/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c894a CharacterInstance::~CharacterInstance */

/* CharacterInstance::~CharacterInstance() */

CharacterInstance * __thiscall CharacterInstance::~CharacterInstance(CharacterInstance *this)

{
  ~CharacterInstance(this);
  operator_delete(this);
  return this;
}


