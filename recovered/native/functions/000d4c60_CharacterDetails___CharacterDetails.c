/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d4c60 CharacterDetails::~CharacterDetails */

/* CharacterDetails::~CharacterDetails() */

CharacterDetails * __thiscall CharacterDetails::~CharacterDetails(CharacterDetails *this)

{
  ~CharacterDetails(this);
  operator_delete(this);
  return this;
}


