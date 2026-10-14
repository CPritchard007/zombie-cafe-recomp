/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ceb5c CharacterDetails::fireZombie */

/* CharacterDetails::fireZombie(CharacterDetails*) */

void __thiscall CharacterDetails::fireZombie(CharacterDetails *this,CharacterDetails *param_1)

{
  int iVar1;
  TutorialSystem *this_00;
  int iVar2;
  uchar uVar3;
  CharacterDetails *pCVar4;
  undefined4 *puVar5;
  float in_s0;
  
  pCVar4 = this + 0x88;
  *(undefined1 *)(*(int *)pCVar4 + 5) = 1;
  *(undefined1 *)(*(int *)pCVar4 + 4) = 0;
  *(undefined1 *)(*(int *)pCVar4 + 0x44) = 0;
  *(undefined1 *)(*(int *)pCVar4 + 0x24) = 1;
  ZombieCafe::playEffect(*(int *)(this + 0x78),in_s0);
  CRAMHoover::beginTrackEvent(*(char **)(*(int *)(this + 0x78) + 0x840));
  ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(this + 0x78));
  CRAMHoover::endTrackEvent();
  iVar2 = DAT_000cec30;
  iVar1 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0x78) + DAT_000cec30),'\x1e');
  if ((iVar1 == 0) ||
     (iVar1 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(this + 0x78) + iVar2),' '), iVar1 != 0)) {
    iVar1 = DAT_000cec30;
    iVar2 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0x78) + iVar2),'\x17');
    if ((iVar2 == 0) ||
       (iVar2 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(this + 0x78) + iVar1),'\x18'), iVar2 != 0))
    goto LAB_000cebfc;
    uVar3 = '\x18';
    this_00 = *(TutorialSystem **)(*(int *)(this + 0x78) + iVar1);
  }
  else {
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0x78) + iVar2),'\x1f')
    ;
    uVar3 = ' ';
    this_00 = *(TutorialSystem **)(*(int *)(this + 0x78) + iVar2);
    iVar1 = iVar2;
  }
  TutorialSystem::setTutorialCompleted(this_00,uVar3);
  TutorialArrow::detach(*(TutorialArrow **)(*(int *)(*(int *)(this + 0x78) + iVar1) + 0x788));
LAB_000cebfc:
  Quest::runQuest(*(int *)(*(int *)(this + 0x78) + 0x40),7,(int *)0xffffffff);
  puVar5 = *(undefined4 **)(this + 0x134);
  (*(code *)puVar5[1])(puVar5[2],*puVar5);
  return;
}


