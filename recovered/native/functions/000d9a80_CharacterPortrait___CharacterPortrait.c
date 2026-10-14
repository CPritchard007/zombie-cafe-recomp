/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d9a80 CharacterPortrait::~CharacterPortrait */

/* CharacterPortrait::~CharacterPortrait() */

CharacterPortrait * __thiscall CharacterPortrait::~CharacterPortrait(CharacterPortrait *this)

{
  ~CharacterPortrait(this);
  operator_delete(this);
  return this;
}


