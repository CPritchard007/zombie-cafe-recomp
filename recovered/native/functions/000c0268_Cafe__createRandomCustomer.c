/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c0268 Cafe::createRandomCustomer */

/* Cafe::createRandomCustomer(int, float, bool) */

Character * Cafe::createRandomCustomer(int param_1,float param_2,bool param_3)

{
  int iVar1;
  Character *pCVar2;
  uint uVar3;
  bool in_r2;
  uint in_r3;
  CharacterData aCStack_18 [8];
  
  uVar3 = (uint)param_3;
  iVar1 = getDataForRandomCustomer((Cafe *)param_1,uVar3,param_2,in_r2);
  if (in_r3 != 0) {
    in_r3 = (uint)*(ushort *)(iVar1 + DAT_000c02bc);
  }
  CharacterData::getRandomName(aCStack_18,*(bool *)(iVar1 + DAT_000c02c0),in_r3);
  pCVar2 = (Character *)operator_new(0x6c);
  Character::Character(pCVar2,iVar1,1,0,aCStack_18,uVar3);
  String::~String((String *)aCStack_18);
  return pCVar2;
}


