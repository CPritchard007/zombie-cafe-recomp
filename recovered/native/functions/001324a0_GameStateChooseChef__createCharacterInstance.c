/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001324a0 GameStateChooseChef::createCharacterInstance */

/* GameStateChooseChef::createCharacterInstance(int, float) */

CharacterInstance * GameStateChooseChef::createCharacterInstance(int param_1,float param_2)

{
  Character *pCVar1;
  CharacterInstance *this;
  float fVar2;
  
  pCVar1 = (Character *)createCharacter(param_1);
  this = (CharacterInstance *)operator_new(0xdc);
  fVar2 = (float)CharacterInstance::CharacterInstance(this,pCVar1,(CFPathFinder *)0x0);
  CharacterInstance::setScale(this,fVar2);
  return this;
}


