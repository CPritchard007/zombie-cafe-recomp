/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c7f28 GameStateZukan::createCharacterInstance */

/* GameStateZukan::createCharacterInstance(int, float) */

CharacterInstance * GameStateZukan::createCharacterInstance(int param_1,float param_2)

{
  Character *pCVar1;
  CharacterInstance *this;
  int in_r1;
  float fVar2;
  
  pCVar1 = (Character *)createCharacter((GameStateZukan *)param_1,in_r1);
  this = (CharacterInstance *)operator_new(0xdc);
  fVar2 = (float)CharacterInstance::CharacterInstance(this,pCVar1,(CFPathFinder *)0x0);
  CharacterInstance::setScale(this,fVar2);
  return this;
}


