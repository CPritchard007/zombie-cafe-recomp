/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bf014 Cafe::createCustomer */

/* Cafe::createCustomer(int) */

Character * Cafe::createCustomer(int param_1)

{
  int iVar1;
  Character *pCVar2;
  int in_r1;
  CharacterData aCStack_18 [8];
  
  iVar1 = getDataForCustomer((Cafe *)param_1,in_r1);
  CharacterData::getRandomName(aCStack_18,*(bool *)(iVar1 + DAT_000bf060),in_r1);
  pCVar2 = (Character *)operator_new(0x6c);
  Character::Character(pCVar2,iVar1,1,0,aCStack_18);
  String::~String((String *)aCStack_18);
  return pCVar2;
}


