/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017279c GameStateMeetLocker::fireZombie */

/* GameStateMeetLocker::fireZombie(GameStateMeetLocker*) */

void GameStateMeetLocker::fireZombie(GameStateMeetLocker *param_1)

{
  int iVar1;
  TutorialSystem *this;
  uchar uVar2;
  int iVar3;
  Character *this_00;
  
  iVar3 = DAT_00172864;
  iVar1 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_00172864),'\x1e');
  if ((iVar1 == 0) ||
     (iVar1 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),' '), iVar1 != 0)) {
    iVar1 = DAT_00172864;
    iVar3 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),'\x17');
    if ((iVar3 == 0) ||
       (iVar3 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1),'\x18'), iVar3 != 0
       )) goto LAB_001727f8;
    uVar2 = '\x18';
    this = *(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1);
  }
  else {
    TutorialSystem::setTutorialCompleted
              (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),'\x1f');
    uVar2 = ' ';
    this = *(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3);
    iVar1 = iVar3;
  }
  TutorialSystem::setTutorialCompleted(this,uVar2);
  TutorialArrow::detach(*(TutorialArrow **)(*(int *)(*(int *)(param_1 + 0xc) + iVar1) + 0x788));
LAB_001727f8:
  Quest::runQuest(*(int *)(*(int *)(param_1 + 0xc) + 0x40),7,(int *)0xffffffff);
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    iVar3 = (iVar1 + 0x2e) * 4;
    Vector<Character*>::removeElement
              ((Vector<Character*> *)(*(int *)(param_1 + 0xc) + 0x5a0),
               *(Character **)(*(int *)(param_1 + iVar3) + 0x8c));
    unSelectCharacter(param_1);
    this_00 = *(Character **)(*(int *)(param_1 + iVar3) + 0x8c);
    if (this_00 != (Character *)0x0) {
      Character::~Character(this_00);
      operator_delete(this_00);
    }
    releaseCharacter(param_1,iVar1);
  }
  return;
}


