/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001657c0 GameStateMap::shouldCompleteTutorialStep */

/* GameStateMap::shouldCompleteTutorialStep(GameStateMap*, unsigned char) */

undefined4 GameStateMap::shouldCompleteTutorialStep(GameStateMap *param_1,uchar param_2)

{
  int iVar1;
  TutorialSystem *pTVar2;
  uchar uVar3;
  TutorialArrow *pTVar4;
  ScreenElement *local_b8 [12];
  String aSStack_88 [36];
  ScreenElement *local_64 [12];
  String aSStack_34 [40];
  
  if (param_2 == '2') {
    pTVar4 = *(TutorialArrow **)(param_1 + 0x440);
    MapCafe::MapCafe((MapCafe *)local_64,*(MapCafe **)(param_1 + 0xcc));
    TutorialArrow::attach(pTVar4,local_64[0],true,0);
    String::~String(aSStack_34);
    uVar3 = '3';
    pTVar2 = *(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_001658ac);
LAB_0016584c:
    iVar1 = DAT_001658ac;
    TutorialSystem::setTutorialCompleted(pTVar2,uVar3);
    uVar3 = '4';
    pTVar2 = *(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1);
LAB_0016587a:
    TutorialSystem::setTutorialCompleted(pTVar2,uVar3);
  }
  else {
    if (param_2 < 0x33) {
      if (param_2 == '%') {
        return 1;
      }
      if (param_2 != '1') {
        if ((param_2 == '$') && (-1 < *(int *)(*(int *)(param_1 + 0xc) + DAT_001658a8 + 4))) {
          pTVar4 = *(TutorialArrow **)(param_1 + 0x440);
          MapCafe::MapCafe((MapCafe *)local_b8,*(MapCafe **)(param_1 + 0xd8));
          TutorialArrow::attach(pTVar4,local_b8[0],true,0);
          String::~String(aSStack_88);
          return 1;
        }
        return 0;
      }
    }
    else {
      if (param_2 == '4') {
        TutorialArrow::attach
                  (*(TutorialArrow **)(param_1 + 0x440),*(ScreenElement **)(param_1 + 0x38),true,0);
        iVar1 = DAT_001658ac;
        TutorialSystem::setTutorialCompleted
                  (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_001658ac),'2');
        uVar3 = '3';
        pTVar2 = *(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1);
        goto LAB_0016587a;
      }
      if (param_2 < 0x34) {
        uVar3 = '2';
        pTVar2 = *(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_001658ac);
        goto LAB_0016584c;
      }
      if (param_2 != 'B') {
        return 0;
      }
    }
    TutorialArrow::detach(*(TutorialArrow **)(param_1 + 0x440));
  }
  return 1;
}


