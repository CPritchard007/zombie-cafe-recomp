/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001435d8 GameStateFriendCafe::tick */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001437bc) */
/* WARNING: Removing unreachable block (ram,0x001437bc) */
/* GameStateFriendCafe::tick(long) */

void __thiscall GameStateFriendCafe::tick(GameStateFriendCafe *this,long param_1)

{
  GameStateMainMenu *this_00;
  GameStateLoading *pGVar1;
  GameStateMap *pGVar2;
  ZCImageButton *this_01;
  int iVar3;
  int *piVar4;
  CapcomOrderableList<Furniture*> *this_02;
  CapcomGame *pCVar5;
  ConfirmDialog *pCVar6;
  int iVar7;
  long lVar8;
  GameStateFriendCafe *pGVar9;
  ZombieCafe *this_03;
  int iVar10;
  float extraout_s0;
  float extraout_s0_00;
  float fVar11;
  float extraout_s0_01;
  float extraout_s1;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ZombieCafe::tickPlaySecAnalysis_friend(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  pCVar5 = *(CapcomGame **)(this + 0xc);
  iVar10 = DAT_00143948 + 0x1435fc;
  if (pCVar5[DAT_00143944] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    pGVar1 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar1,(GameState *)this_00);
    CapcomGame::setNextState(pCVar5,(GameState *)pGVar1);
    this[0x11] = (GameStateFriendCafe)0x1;
    return;
  }
  if (this[0xc0] != (GameStateFriendCafe)0x0) {
    pGVar2 = (GameStateMap *)operator_new(DAT_0014394c);
    GameStateMap::GameStateMap(pGVar2,true);
    pGVar1 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar1,(GameState *)pGVar2);
    CapcomGame::setNextState(pCVar5,(GameState *)pGVar1);
    return;
  }
  if (*(char *)(*(int *)(this + 0x1c4) + 0x14) == '\0') goto LAB_001436fc;
  this_01 = (ZCImageButton *)
            FriendCafeHudElement::getButton(*(FriendCafeHudElement **)(this + 0x19c),0);
  iVar3 = ZCImageButton::contains
                    (this_01,*(int *)(*(int *)(this + 0xc) + DAT_00143950) >> 0x10,
                     (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_00143950),extraout_s0,
                     extraout_s1);
  if (((iVar3 != 0) || (*(char *)(*(int *)(this + 0x1c8) + 0x14) != '\0')) ||
     (*(char *)(*(int *)(this + 0x1b0) + 0x14) != '\0')) goto LAB_001436fc;
  this_03 = *(ZombieCafe **)(this + 0xc);
  iVar3 = ZombieCafe::unhandledPressOrLongEvent(this_03);
  if (iVar3 == 0) {
    this_03[DAT_00143954] = (ZombieCafe)0x1;
    goto LAB_001436fc;
  }
  iVar3 = TutorialArrow::attachedToCafeObject(*(TutorialArrow **)(this + 0x1c4));
  if (iVar3 == 0) {
LAB_001439ba:
    iVar3 = TutorialArrow::attachedToScreenElement(*(TutorialArrow **)(this + 0x1c4));
    if ((iVar3 == 0) ||
       (iVar3 = TutorialArrow::targetContains
                          (*(TutorialArrow **)(this + 0x1c4),this,
                           *(long *)(*(int *)(this + 0xc) + DAT_00143950)), iVar3 != 0))
    goto LAB_001436fc;
  }
  else {
    lVar8 = *(long *)(this + 0x34);
    screenToWorldCoords(this,*(long *)(*(int *)(this + 0xc) + DAT_00143950));
    iVar3 = Cafe::pickCafeObject(lVar8);
    if (iVar3 == *(int *)(*(int *)(this + 0x1c4) + 0x60)) goto LAB_001439ba;
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00143954) = 1;
LAB_001436fc:
  pGVar9 = this + 0x9c;
  (**(code **)(**(int **)(this + 0x1d8) + 8))(*(int **)(this + 0x1d8),param_1);
  piVar4 = *(int **)pGVar9;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4,param_1);
    iVar3 = (**(code **)(**(int **)pGVar9 + 0x10))();
    if (iVar3 != 0) {
      if (*(int **)pGVar9 != (int *)0x0) {
        (**(code **)(**(int **)pGVar9 + 4))();
      }
      *(undefined4 *)(this + 0x9c) = 0;
    }
  }
  if (((*(char *)(*(int *)(this + 0x1ac) + 0x14) == '\0') &&
      (*(char *)(*(int *)(this + 0x1c8) + 0x14) == '\0')) &&
     ((*(char *)(*(int *)(this + 0x1b0) + 0x14) == '\0' &&
      (*(char *)(*(int *)(this + 0x1c0) + 0x14) == '\0')))) {
    Cafe::tick(*(Cafe **)(this + 0x34),param_1);
    this_02 = (CapcomOrderableList<Furniture*> *)
              Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x34),'\b',0);
    *(undefined4 *)(this_02 + 0x10) = *(undefined4 *)(this_02 + 8);
    while (iVar3 = CapcomOrderableList<Furniture*>::nextItem(this_02), iVar3 != 0) {
      iVar7 = *(int *)(*(int *)(iVar3 + 0x38) + 0x24);
      if ((iVar7 == **(int **)(iVar10 + DAT_00143958)) || (iVar7 == 0x1fa)) {
        *(undefined1 *)(iVar3 + 0x46) = 0;
      }
    }
    CapcomOrderableList<Furniture*>::removeAll(this_02);
    operator_delete(this_02);
    tickColorShift(this,param_1);
    switch(this[0x38]) {
    case (GameStateFriendCafe)0x0:
      if (this[0xc3] == (GameStateFriendCafe)0x0) {
        tickDefault((long)this);
      }
      else {
        tickAttackMode(this,param_1);
      }
      break;
    case (GameStateFriendCafe)0x1:
      onRecipeBookExit((long)this);
      break;
    case (GameStateFriendCafe)0x2:
      onFridgeExit((long)this);
      break;
    case (GameStateFriendCafe)0x4:
      onFridgeWaitExit((long)this);
    }
    tickCameraControl(this,param_1);
    if (this[0xc3] == (GameStateFriendCafe)0x0) {
      tickStaff(this,param_1);
      tickZombieWorkInterruptions(this,param_1);
      tickCustomers(this,param_1);
    }
    iVar3 = ZombieCafe::IsMusicPlaying();
    fVar11 = extraout_s0_00;
    if ((iVar3 == 0) &&
       (iVar3 = *(int *)(*(int *)(this + 0xc) + DAT_0014395c) - param_1,
       *(int *)(*(int *)(this + 0xc) + DAT_0014395c) = iVar3, iVar3 < 1)) {
      if (this[0x1d4] == (GameStateFriendCafe)0x0) {
        fVar11 = (float)ZombieCafe::PlayCafeMusic();
        this[0x1d4] = (GameStateFriendCafe)0x1;
      }
      else {
        fVar11 = (float)ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(this + 0xc));
        this[0x1d4] = (GameStateFriendCafe)0x0;
      }
      *(undefined4 *)(*(int *)(this + 0xc) + DAT_0014395c) =
           **(undefined4 **)(iVar10 + DAT_00143960);
    }
    if (*(char *)(*(int *)(this + 0xc) + DAT_00143964) != '\0') {
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_00143964) = 0;
      iVar3 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00143968),'S');
      fVar11 = extraout_s0_01;
      if (iVar3 != 0) {
        if ((*(char *)(*(int *)(*(int *)(this + 0x19c) + 100) + 0x14) == '\0') &&
           (this[0xc1] == (GameStateFriendCafe)0x0)) {
          if (*(int *)(this + 0x30) == 0) {
            pCVar6 = *(ConfirmDialog **)(this + 0x1c8);
            Vector<String>::elementAt((int)aSStack_30);
            Vector<String>::elementAt((int)aSStack_28);
            Vector<String>::elementAt((int)aSStack_20);
            ConfirmDialog::show(pCVar6,aSStack_30,aSStack_28,aSStack_20,
                                *(undefined4 *)(iVar10 + DAT_00143978),this);
            String::~String(aSStack_20);
            String::~String(aSStack_28);
            fVar11 = (float)String::~String(aSStack_30);
          }
        }
        else {
          pCVar5 = *(CapcomGame **)(this + 0xc);
          pGVar2 = (GameStateMap *)operator_new(DAT_00143a00);
          GameStateMap::GameStateMap(pGVar2,false);
          pGVar1 = (GameStateLoading *)operator_new(0x2c);
          GameStateLoading::GameStateLoading(pGVar1,(GameState *)pGVar2);
          fVar11 = (float)CapcomGame::setNextState(pCVar5,(GameState *)pGVar1);
        }
      }
    }
    TutorialArrow::tick(*(TutorialArrow **)(this + 0x1c4),param_1,*(long *)(this + 0xa8),fVar11);
  }
  return;
}


