/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011bddc GameStateCafe::setRemainCharacter */

/* GameStateCafe::setRemainCharacter(CharacterInstance*, bool) */

void __thiscall
GameStateCafe::setRemainCharacter(GameStateCafe *this,CharacterInstance *param_1,bool param_2)

{
  int iVar1;
  RestTask *this_00;
  Character *this_01;
  float fVar2;
  
  this_01 = *(Character **)(param_1 + 0x8c);
  this_01[0x44] = (Character)0x3;
  if (param_2) {
    Character::getMaxEnergy();
    iVar1 = __fixsfsi();
  }
  else {
    iVar1 = (int)**(short **)(DAT_0011be40 + 0x11be06);
  }
  fVar2 = (float)__floatsisf(iVar1);
  Character::setCurrentEnergy(this_01,fVar2);
  CharacterInstance::clearTasks();
  this_00 = (RestTask *)operator_new(0x40);
  RestTask::RestTask(this_00,param_1,*(Cafe **)(this + 0x14));
  CharacterInstance::addTask(param_1,(Task *)this_00);
  return;
}


