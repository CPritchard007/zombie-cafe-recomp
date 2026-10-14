/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a6fc GameStateEarlyBird::createCharacterInstance */

/* GameStateEarlyBird::createCharacterInstance(Character*, float) */

CharacterInstance * GameStateEarlyBird::createCharacterInstance(Character *param_1,float param_2)

{
  CharacterInstance *this;
  Character *in_r1;
  float fVar1;
  
  this = (CharacterInstance *)operator_new(0xdc);
  fVar1 = (float)CharacterInstance::CharacterInstance(this,in_r1,(CFPathFinder *)0x0);
  CharacterInstance::setScale(this,fVar1);
  return this;
}


