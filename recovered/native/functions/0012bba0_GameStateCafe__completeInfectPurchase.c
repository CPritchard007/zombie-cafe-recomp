/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012bba0 GameStateCafe::completeInfectPurchase */

/* GameStateCafe::completeInfectPurchase(GameStateCafe*) */

void __thiscall GameStateCafe::completeInfectPurchase(GameStateCafe *this,GameStateCafe *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  CharacterInstance *pCVar4;
  int *piVar5;
  int iVar6;
  Character *this_00;
  uint uVar7;
  float in_s0;
  float fVar8;
  char acStack_9c [128];
  int local_1c;
  
  piVar5 = *(int **)(DAT_0012bda4 + 0x12bbac);
  local_1c = *piVar5;
  if (*(int *)(this + 100) != 0) {
    iVar6 = **(int **)(*(int *)(this + 100) + 0x8c);
    uVar7 = (uint)*(byte *)(iVar6 + DAT_0012bda8);
    iVar6 = *(int *)(iVar6 + 0xb20);
    if (uVar7 == 0) {
      if (iVar6 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
        *(int *)(*(int *)(this + 0xc) + DAT_0012bdac) =
             *(int *)(*(int *)(this + 0xc) + DAT_0012bdac) -
             *(int *)(**(int **)(*(int *)(this + 100) + 0x8c) + 0xb20);
      }
    }
    else {
      ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
      ZombieCafe::spendToxin
                (*(ZombieCafe **)(this + 0xc),
                 *(int *)(**(int **)(*(int *)(this + 100) + 0x8c) + 0xb20));
    }
    memset(acStack_9c,0,0x80);
    iVar1 = DAT_0012bdb0;
    snprintf(acStack_9c,0x80,(char *)(DAT_0012bdb4 + 0x12bc24),
             (uint)*(ushort *)(**(int **)(*(int *)(this + 100) + 0x8c) + DAT_0012bdb0),iVar6,uVar7);
    sendMalta(this,(char *)(DAT_0012bdb8 + 0x12bc3c),acStack_9c);
    Quest::runQuest(*(int *)(*(int *)(this + 0xc) + 0x40),2,
                    (int *)(uint)*(ushort *)(**(int **)(*(int *)(this + 100) + 0x8c) + iVar1));
    Vector<Character*>::addElement
              ((Vector<Character*> *)(*(int *)(this + 0xc) + DAT_0012bdbc),
               *(Character **)(*(int *)(this + 100) + 0x8c));
    Vector<CharacterInstance*>::removeElement
              ((Vector<CharacterInstance*> *)(this + 0x28),*(CharacterInstance **)(this + 100));
    iVar6 = *(int *)(*(int *)(this + 100) + 0x8c);
    Platform::getAppTime();
    uVar2 = __fixdfsi();
    *(undefined4 *)(iVar6 + 0x10) = uVar2;
    if (*(int *)(this + 0x54) == *(int *)(this + 100)) {
      deselect(this);
    }
    Vector<CharacterInstance*>::addElement
              ((Vector<CharacterInstance*> *)(this + 0x1c),*(CharacterInstance **)(this + 100));
    iVar6 = DAT_0012bdc0;
    iVar3 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012bdc0),'Q');
    if (iVar3 != 0) {
      TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'M');
      TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'O');
    }
    *(undefined1 *)(*(int *)(*(int *)(this + 100) + 0x8c) + 4) = 1;
    *(undefined1 *)(*(int *)(*(int *)(this + 100) + 0x8c) + 5) = 2;
    this_00 = *(Character **)(*(int *)(this + 100) + 0x8c);
    fVar8 = (float)__floatsisf((int)**(short **)(DAT_0012bdc4 + 0x12bcdc));
    Character::setCurrentEnergy(this_00,fVar8);
    iVar3 = CharacterInstance::isMoving(*(CharacterInstance **)(this + 100));
    if (iVar3 == 0) {
      CharacterInstance::clearTasks();
    }
    else {
      CharacterInstance::stopTasks(*(CharacterInstance **)(this + 100));
    }
    iVar3 = CapcomMath::random(2);
    if (iVar3 == 1) {
      iVar3 = 0x13;
    }
    *(undefined1 *)(*(int *)(*(int *)(this + 100) + 0x8c) + 0x44) = 1;
    *(char *)(*(int *)(*(int *)(this + 100) + 0x8c) + 0x54) = (char)iVar3;
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'\x0f',false);
    PullMenuElement::setButtonAvailability(*(int *)(this + 0xcc),true);
    PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(this + 0xcc),2,false);
    while( true ) {
      iVar6 = *(int *)(this + 0x14);
      if (*(int *)(iVar6 + 0xb4) == -1) break;
      pCVar4 = (CharacterInstance *)
               Vector<CharacterInstance*>::removeElementAt
                         ((Vector<CharacterInstance*> *)(iVar6 + 0xb0),0);
      Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(iVar6 + 0xa4),pCVar4);
    }
    iVar6 = ZombieCafe::updateZukanUnlock
                      (*(ZombieCafe **)(this + 0xc),
                       (uint)*(ushort *)(**(int **)(*(int *)(this + 100) + 0x8c) + iVar1),'\x03');
    if (iVar6 != 0) {
      PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(this + 0xcc),6,true);
      PullMenuElement::ifIsCloseNewIndicatorPull();
    }
  }
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


