/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c891c GatyaEftCharacterInstance::~GatyaEftCharacterInstance */

/* GatyaEftCharacterInstance::~GatyaEftCharacterInstance() */

GatyaEftCharacterInstance * __thiscall
GatyaEftCharacterInstance::~GatyaEftCharacterInstance(GatyaEftCharacterInstance *this)

{
  *(int *)this = *(int *)(DAT_000c8934 + 0xc8926) + 8;
  CharacterInstance::~CharacterInstance((CharacterInstance *)this);
  return this;
}


