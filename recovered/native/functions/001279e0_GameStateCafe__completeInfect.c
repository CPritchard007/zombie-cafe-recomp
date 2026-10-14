/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001279e0 GameStateCafe::completeInfect */

/* GameStateCafe::completeInfect(CharacterInstance*, GameStateCafe*) */

undefined8 GameStateCafe::completeInfect(CharacterInstance *param_1,GameStateCafe *param_2)

{
  undefined4 uVar1;
  RestTask *this;
  GameStateCafe *in_r2;
  int iVar2;
  GameStateCafe *pGVar3;
  GameStateCafe *pGVar4;
  Character *this_00;
  float in_s0;
  float fVar5;
  
  if ((*(char *)(**(int **)(param_2 + 0x8c) + DAT_00127b14) != '\0') ||
     (*(int *)(**(int **)(param_2 + 0x8c) + 0xb20) != 0)) {
    ZombieCafe::playEffect(*(int *)(in_r2 + 0xc),in_s0);
  }
  Vector<Character*>::addElement
            ((Vector<Character*> *)(*(int *)(in_r2 + 0xc) + DAT_00127b18),
             *(Character **)(param_2 + 0x8c));
  Vector<CharacterInstance*>::removeElement
            ((Vector<CharacterInstance*> *)(in_r2 + 0x28),(CharacterInstance *)param_2);
  iVar2 = *(int *)(param_2 + 0x8c);
  Platform::getAppTime();
  uVar1 = __fixdfsi();
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  if (*(GameStateCafe **)(in_r2 + 0x54) == param_2) {
    deselect(in_r2);
  }
  pGVar3 = param_2 + 0x8c;
  Vector<CharacterInstance*>::addElement
            ((Vector<CharacterInstance*> *)(in_r2 + 0x1c),(CharacterInstance *)param_2);
  *(undefined1 *)(*(int *)pGVar3 + 4) = 1;
  *(undefined1 *)(*(int *)pGVar3 + 5) = 2;
  this_00 = *(Character **)pGVar3;
  fVar5 = (float)__floatsisf((int)**(short **)(DAT_00127b1c + 0x127a62));
  Character::setCurrentEnergy(this_00,fVar5);
  CharacterInstance::clearTasks();
  this = (RestTask *)operator_new(0x40);
  RestTask::RestTask(this,(CharacterInstance *)param_2,*(Cafe **)(param_1 + 0x14));
  CharacterInstance::addTask((CharacterInstance *)param_2,(Task *)this);
  *(undefined1 *)(*(int *)pGVar3 + 0x44) = 3;
  iVar2 = CapcomMath::random(2);
  if (iVar2 == 1) {
    iVar2 = 0x13;
  }
  pGVar4 = param_2 + 0x8c;
  pGVar3 = in_r2 + 0xcc;
  *(char *)(*(int *)pGVar4 + 0x54) = (char)iVar2;
  PullMenuElement::setButtonAvailability(*(int *)pGVar3,true);
  PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)pGVar3,2,false);
  iVar2 = DAT_00127b20;
  Quest::runQuest(*(int *)(*(int *)(in_r2 + 0xc) + 0x40),2,
                  (int *)(uint)*(ushort *)(**(int **)pGVar4 + DAT_00127b20));
  iVar2 = ZombieCafe::updateZukanUnlock
                    (*(ZombieCafe **)(in_r2 + 0xc),(uint)*(ushort *)(**(int **)pGVar4 + iVar2),
                     '\x03');
  if (iVar2 != 0) {
    puts((char *)(DAT_00127b24 + 0x127af2));
    PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)pGVar3,6,true);
    PullMenuElement::ifIsCloseNewIndicatorPull();
  }
  return CONCAT44(param_1,param_1);
}


