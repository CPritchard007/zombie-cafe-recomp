/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011de90 GameStateCafe::onPullMenuButtonPress */

/* WARNING: Function: __gnu_thumb1_case_shi replaced with injection: switch16_shi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0011e1d8) */
/* WARNING: Removing unreachable block (ram,0x0011e1d8) */
/* GameStateCafe::onPullMenuButtonPress(GameStateCafe*, int, bool) */

undefined4 GameStateCafe::onPullMenuButtonPress(GameStateCafe *param_1,int param_2,bool param_3)

{
  CharacterDetails *this;
  ObjectiveCompleteDialog *this_00;
  ObjectiveDialog *this_01;
  GameStateZukan *this_02;
  GameStateLoading *this_03;
  int iVar1;
  QuestDialog *this_04;
  Storage *this_05;
  ZombieCafe *this_06;
  int *piVar2;
  GameStateCafe *pGVar3;
  NoticeDialog *pNVar4;
  int iVar5;
  int iVar6;
  CapcomGame *this_07;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar5 = DAT_0011e1ec;
  iVar6 = DAT_0011e1e8 + 0x11dea6;
  if (((((byte)(*(CookCommandBar **)(param_1 + 0xb4))[0xb0] - 1 < 2) ||
       (*(byte *)(*(int *)(param_1 + 0xac) + 0xb8) - 1 < 2)) ||
      (*(byte *)(*(int *)(param_1 + 0x84) + 0x80) - 1 < 2)) ||
     (*(byte *)(*(int *)(param_1 + 0xbc) + 0x8c) - 1 < 2)) {
    return 0;
  }
  switch(param_2) {
  case 1:
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_0011e1ec),'\x05');
    if ((iVar1 != 0) &&
       (iVar5 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar5),'!'), iVar5 == 0))
    {
      return 1;
    }
    RecipeBook::show(*(RecipeBook **)(param_1 + 0x94),
                     *(_func_void_void_ptr_int_int_bool_short **)(iVar6 + DAT_0011e248),param_1);
    param_1[DAT_0011e24c] = (GameStateCafe)0x4;
    deselect(param_1);
    CharacterCommandBar::close(*(CharacterCommandBar **)(param_1 + 0xac));
    *(undefined4 *)(param_1 + 0x50) = 0;
    break;
  case 2:
    iVar5 = PullMenuElement::hasNewIndicator(*(PullMenuElement **)(param_1 + 0xcc),2);
    if (iVar5 == 0) {
      if ((*(int **)(param_1 + 0x54) == (int *)0x0) ||
         (iVar5 = (**(code **)(**(int **)(param_1 + 0x54) + 0x20))(), iVar5 != 2)) {
        if (*(int *)(param_1 + 0x20) < 0) {
          return 1;
        }
        this = *(CharacterDetails **)(param_1 + 0xb0);
        iVar5 = **(int **)(param_1 + 0x24);
      }
      else {
        this = *(CharacterDetails **)(param_1 + 0xb0);
        iVar5 = *(int *)(param_1 + 0x54);
      }
      CharacterDetails::setCharacter(this,*(Character **)(iVar5 + 0x8c));
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))(*(int **)(param_1 + 0xb0),1);
    }
    else {
      pNVar4 = *(NoticeDialog **)(param_1 + 0xd0);
      Vector<String>::elementAt((int)aSStack_28);
      Vector<String>::elementAt((int)aSStack_20);
      NoticeDialog::show(pNVar4,aSStack_28,aSStack_20,0,0);
      String::~String(aSStack_20);
      String::~String(aSStack_28);
    }
    break;
  case 3:
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_0011e1ec),'S');
    if (iVar1 == 0) {
      return 1;
    }
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar5),'U',true);
    this_00 = (ObjectiveCompleteDialog *)operator_new(0xb4);
    ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_00);
    *(ObjectiveCompleteDialog **)(param_1 + 0x128) = this_00;
    (**(code **)(*(int *)this_00 + 0x1c))(this_00,0x12);
    FUN_00118458(*(undefined4 *)(param_1 + 0x128),*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14));
    ScreenElement::setOrder
              (*(ScreenElement **)(param_1 + 0x128),(int)**(char **)(iVar6 + DAT_0011e1f8));
    (**(code **)(**(int **)(param_1 + 0x128) + 0x20))(*(int **)(param_1 + 0x128),0);
    (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))
              (*(int **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x128));
    this_01 = (ObjectiveDialog *)operator_new(0x16c);
    ObjectiveDialog::ObjectiveDialog
              (this_01,*(ConfirmDialog **)(param_1 + 0x80),
               *(ObjectiveCompleteDialog **)(param_1 + 0x128),*(BuyToxinDialog **)(param_1 + 0x8c));
    *(ObjectiveDialog **)(param_1 + 0x124) = this_01;
    (**(code **)(*(int *)this_01 + 0x1c))(this_01,0x12);
    FUN_00118458(*(undefined4 *)(param_1 + 0x124),*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14));
    ScreenElement::setOrder
              (*(ScreenElement **)(param_1 + 0x124),(int)**(char **)(iVar6 + DAT_0011e1fc));
    (**(code **)(**(int **)(param_1 + 0x124) + 0x20))(*(int **)(param_1 + 0x124),0);
    (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))
              (*(int **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x124));
    ObjectiveDialog::show(*(ObjectiveDialog **)(param_1 + 0x124));
    break;
  case 4:
    printf((char *)(DAT_0011e200 + 0x11e096));
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar5),'W');
    if (iVar1 != 0) {
      TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar5),'Y',true);
    }
    checkAndAdjustQuest(param_1);
    for (piVar2 = (int *)0x0; this_06 = *(ZombieCafe **)(param_1 + 0xc),
        (int)piVar2 < (int)(uint)(byte)this_06[DAT_0011e204]; piVar2 = (int *)((int)piVar2 + 1)) {
      iVar5 = 0;
      do {
        iVar1 = ZombieCafe::isRecipeUnlocked(this_06,(int)piVar2,(uchar)iVar5);
        if (iVar1 != 0) {
          Quest::runQuest(*(int *)(this_06 + 0x40),1,piVar2);
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 10);
    }
    PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(param_1 + 0xcc),4,false);
    this_04 = (QuestDialog *)operator_new(200);
    QuestDialog::QuestDialog(this_04,param_1);
    pGVar3 = param_1 + 0xa8;
    *(QuestDialog **)pGVar3 = this_04;
    (**(code **)(*(int *)this_04 + 0x1c))(this_04,0x12);
    FUN_00118458(*(undefined4 *)pGVar3,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14));
    ScreenElement::setOrder(*(ScreenElement **)pGVar3,(int)**(char **)(iVar6 + DAT_0011e208));
    (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))
              (*(int **)(param_1 + 0x78),*(undefined4 *)pGVar3);
    QuestDialog::show(*(QuestDialog **)pGVar3);
    break;
  case 5:
    CookCommandBar::close(*(CookCommandBar **)(param_1 + 0xb4));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(param_1 + 0xc0));
    CharacterCommandBar::close(*(CharacterCommandBar **)(param_1 + 0xac));
    Store::close(*(Store **)(param_1 + 0x84));
    PlantCommandBar::close(*(PlantCommandBar **)(param_1 + 0xb8));
    this_05 = *(Storage **)(param_1 + 0xbc);
    if ((byte)this_05[0x8c] - 1 < 2) {
      Storage::close(this_05);
    }
    else {
      Storage::open(this_05,'\0','\0');
      ScreenElement::setOrder
                (*(ScreenElement **)(param_1 + 0xbc),(int)**(char **)(iVar6 + DAT_0011e20c));
    }
    break;
  case 6:
    this_07 = *(CapcomGame **)(param_1 + 0xc);
    this_02 = (GameStateZukan *)operator_new(0xe4);
    GameStateZukan::GameStateZukan(this_02);
    this_03 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_03,(GameState *)this_02);
    CapcomGame::setNextState(this_07,(GameState *)this_03);
    PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(param_1 + 0xcc),6,false);
  }
  return 1;
}


