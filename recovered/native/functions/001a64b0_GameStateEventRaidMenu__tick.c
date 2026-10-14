/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a64b0 GameStateEventRaidMenu::tick */

/* GameStateEventRaidMenu::tick(long) */

void __thiscall GameStateEventRaidMenu::tick(GameStateEventRaidMenu *this,long param_1)

{
  GameStateMainMenu *pGVar1;
  GameStateLoading *pGVar2;
  int *piVar3;
  GameStateEventRaid *this_00;
  String *this_01;
  GameStateAmpouleRaidMenu *this_02;
  GameStateWeekRaidMenu *this_03;
  GameStateEventRaid2Menu *this_04;
  GameStateCafe *pGVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  NoticeDialog *pNVar9;
  ConfirmDialog *pCVar10;
  CapcomGame *pCVar11;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float fVar12;
  undefined8 uVar13;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ZombieCafe::tickPlaySecAnalysis_survival(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  pCVar11 = *(CapcomGame **)(this + 0xc);
  iVar8 = DAT_001a6810 + 0x1a64d2;
  if (pCVar11[DAT_001a680c] == (CapcomGame)0x0) {
    pGVar1 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar1);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
    goto LAB_001a6554;
  }
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  if (((*(char *)(*(int *)(this + 0x48) + 0x14) != '\0') ||
      (*(char *)(*(int *)(this + 0x4c) + 0x14) != '\0')) ||
     (*(char *)(*(int *)(this + 0x50) + 0x14) != '\0')) {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_001a6814) = 0;
    return;
  }
  iVar5 = ZombieCafe::checkEventRaidTime();
  if (iVar5 == 0) {
    if (this[0xb8] != (GameStateEventRaidMenu)0x0) {
      javaHideWebViewRanking(0,0,1);
    }
    pCVar11 = *(CapcomGame **)(this + 0xc);
    pGVar1 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar1);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
    goto LAB_001a6554;
  }
  iVar5 = ZombieCafe::checkGlobalPlayTime(SUB41(*(undefined4 *)(this + 0xc),0));
  if (iVar5 != 0) {
    piVar3 = *(int **)(this + 0x80);
    pcVar6 = *(code **)(*piVar3 + 0x20);
  }
  else {
    piVar3 = *(int **)(this + 0x80);
    pcVar6 = *(code **)(*piVar3 + 0x20);
  }
  (*pcVar6)(piVar3,iVar5 == 0);
  uVar13 = setLinkButton();
  iVar5 = *(int *)(this + 0xa4);
  if (iVar5 == 0) {
    *(undefined4 *)(this + 0xa4) = 1;
    Layout_EventRaidInit(this);
    Layout_Default(this);
    uVar13 = sendMaltaLog_CafeMember(this);
  }
  else {
    pCVar11 = *(CapcomGame **)(this + 0xc);
    if (iVar5 == 1) {
      if (*(char *)(*(int *)(this + 0x5c) + 0x14) == '\0') {
        iVar5 = ZombieCafe::getEventRaid_attackPoint((ZombieCafe *)pCVar11);
        if (iVar5 < 3) {
          iVar7 = ZombieCafe::getEventRaid_attackPointTimer(*(ZombieCafe **)(this + 0xc));
          if (0 < iVar7) {
            drawReOpenTimer(this);
          }
          if (iVar5 < 1) goto LAB_001a6600;
        }
        (**(code **)(**(int **)(this + 0x5c) + 0x20))(*(int **)(this + 0x5c),1);
        piVar3 = *(int **)(this + 0x60);
LAB_001a65f8:
        (**(code **)(*piVar3 + 0x20))(piVar3,0);
      }
      else {
        iVar5 = ZombieCafe::getEventRaid_attackPointTimer((ZombieCafe *)pCVar11);
        if (iVar5 < 1) {
          piVar3 = *(int **)(this + 0x84);
          goto LAB_001a65f8;
        }
        drawReOpenTimer(this);
      }
LAB_001a6600:
      uVar13 = drawEventRaidSoul(this);
    }
    else if (iVar5 == 2) {
      this_00 = (GameStateEventRaid *)operator_new(0x170);
      GameStateEventRaid::GameStateEventRaid(this_00);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_00);
      goto LAB_001a6554;
    }
  }
  iVar5 = DAT_001a681c;
  fVar12 = (float)uVar13;
  if (((((*(int *)(this + 0xa4) == 1) && (*(char *)(*(int *)(this + 0x48) + 0x14) == '\0')) &&
       ((*(char *)(*(int *)(this + 0x4c) + 0x14) == '\0' &&
        ((iVar7 = *(int *)(this + 0xc), *(char *)(iVar7 + DAT_001a6818) == '\0' &&
         (*(long *)(iVar7 + DAT_001a681c) != 0)))))) && (*(int *)(iVar7 + 0x4b8) == 0)) &&
     (*(int *)(iVar7 + DAT_001a6824) <= (int)**(short **)(iVar8 + DAT_001a6820))) {
    iVar7 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x5c),*(long *)(iVar7 + DAT_001a681c),fVar12,
                       (float)((ulonglong)uVar13 >> 0x20));
    if (iVar7 == 0) {
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x58),
                         *(long *)(*(ZombieCafe **)(this + 0xc) + iVar5),extraout_s0,extraout_s1);
      if (iVar7 == 0) {
        iVar7 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x54),*(long *)(*(int *)(this + 0xc) + iVar5),
                           extraout_s0_00,extraout_s1_00);
        if (iVar7 == 0) {
          iVar7 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0x60),
                             *(long *)(*(int *)(this + 0xc) + iVar5),extraout_s0_01,extraout_s1_01);
          iVar5 = DAT_001a6b8c;
          if (iVar7 == 0) {
            iVar8 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x90),
                               *(long *)(*(ZombieCafe **)(this + 0xc) + DAT_001a6b8c),extraout_s0_02
                               ,extraout_s1_02);
            if (iVar8 == 0) {
              iVar8 = ZCImageButton::contains
                                (*(ZCImageButton **)(this + 0x8c),
                                 *(long *)(*(int *)(this + 0xc) + iVar5),extraout_s0_04,
                                 extraout_s1_03);
              if (iVar8 == 0) {
                iVar8 = ZCImageButton::contains
                                  (*(ZCImageButton **)(this + 0x94),
                                   *(long *)(*(int *)(this + 0xc) + iVar5),extraout_s0_05,
                                   extraout_s1_04);
                if (iVar8 == 0) goto LAB_001a6a96;
                fVar12 = extraout_s0_06;
                if (((this[0xb8] == (GameStateEventRaidMenu)0x0) &&
                    (*(char *)(*(int *)(this + 0x94) + 0x86) != '\0')) &&
                   (iVar8 = ZombieCafe::isEventRaid2_Advent(*(ZombieCafe **)(this + 0xc)),
                   fVar12 = extraout_s0_07, iVar8 != 0)) {
                  ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_07);
                  pCVar11 = *(CapcomGame **)(this + 0xc);
                  this_04 = (GameStateEventRaid2Menu *)operator_new(0x114);
                  GameStateEventRaid2Menu::GameStateEventRaid2Menu(this_04);
                  pGVar2 = (GameStateLoading *)operator_new(0x2c);
                  GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_04);
                  goto LAB_001a6a8c;
                }
              }
              else {
                fVar12 = extraout_s0_05;
                if ((this[0xb8] == (GameStateEventRaidMenu)0x0) &&
                   (*(char *)(*(int *)(this + 0x8c) + 0x86) != '\0')) {
                  ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_05);
                  pCVar11 = *(CapcomGame **)(this + 0xc);
                  this_03 = (GameStateWeekRaidMenu *)operator_new(0xd4);
                  GameStateWeekRaidMenu::GameStateWeekRaidMenu(this_03);
                  pGVar2 = (GameStateLoading *)operator_new(0x2c);
                  GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_03);
                  goto LAB_001a6a8c;
                }
              }
            }
            else {
              fVar12 = extraout_s0_04;
              if ((this[0xb8] == (GameStateEventRaidMenu)0x0) &&
                 (*(char *)(*(int *)(this + 0x90) + 0x86) != '\0')) {
                ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_04);
                pCVar11 = *(CapcomGame **)(this + 0xc);
                this_02 = (GameStateAmpouleRaidMenu *)operator_new(0x98);
                GameStateAmpouleRaidMenu::GameStateAmpouleRaidMenu(this_02);
                pGVar2 = (GameStateLoading *)operator_new(0x2c);
                GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_02);
LAB_001a6a8c:
                fVar12 = (float)CapcomGame::setNextState(pCVar11,(GameState *)pGVar2);
              }
            }
          }
          else {
            iVar5 = ZombieCafe::getEventRaid_attackPointTimer(*(ZombieCafe **)(this + 0xc));
            fVar12 = extraout_s0_03;
            if (1000 < iVar5) {
              ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_03);
              pCVar10 = *(ConfirmDialog **)(this + 0x50);
              String::String(aSStack_30,(char *)(DAT_001a6b90 + 0x1a6906));
              String::String(aSStack_28,(char *)(DAT_001a6b94 + 0x1a6910));
              String::String(aSStack_20,(char *)(DAT_001a6b98 + 0x1a691a));
              ConfirmDialog::show(pCVar10,aSStack_30,aSStack_28,aSStack_20,
                                  *(undefined4 *)(iVar8 + DAT_001a6b9c),
                                  *(undefined4 *)(iVar8 + DAT_001a6ba0),this,0,1);
              String::~String(aSStack_20);
              String::~String(aSStack_28);
              String::~String(aSStack_30);
              uVar13 = __mulsf3(*(undefined4 *)(this + 0xb0),DAT_001a6ba4);
              ConfirmDialog::setYesButtonPosition
                        ((float)uVar13,(float)((ulonglong)uVar13 >> 0x20),extraout_s2);
              uVar13 = __mulsf3(*(undefined4 *)(this + 0xb0),DAT_001a6ba4);
              fVar12 = (float)ConfirmDialog::setNoButtonPosition
                                        (*(ConfirmDialog **)(this + 0x50),(float)uVar13,
                                         (float)((ulonglong)uVar13 >> 0x20),extraout_s2_00,
                                         extraout_s3);
            }
          }
        }
        else {
          ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_01);
          fVar12 = (float)setExplanationWebWindow(this);
        }
      }
      else {
        if (this[0xb8] == (GameStateEventRaidMenu)0x0) {
          ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
          pCVar11 = *(CapcomGame **)(this + 0xc);
          pGVar4 = (GameStateCafe *)operator_new(0x200);
          GameStateCafe::GameStateCafe(pGVar4);
          pGVar2 = (GameStateLoading *)operator_new(0x2c);
          GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar4);
          CapcomGame::setNextState(pCVar11,(GameState *)pGVar2);
        }
        iVar8 = 0;
LAB_001a6a96:
        this[0xb8] = SUB41(iVar8,0);
        fVar12 = (float)javaHideWebViewRanking(iVar8,iVar8,1);
      }
    }
    else {
      iVar5 = ZombieCafe::haveZombiesCafeAll(*(ZombieCafe **)(this + 0xc));
      iVar7 = *(int *)(this + 0xc);
      if (iVar5 == 0) {
        if (*(int *)(iVar7 + DAT_001a6828 + 4) < 0) {
          pNVar9 = *(NoticeDialog **)(this + 0x48);
          String::String(aSStack_68,(char *)(DAT_001a6838 + 0x1a6722));
          String::String(aSStack_60,
                         (String *)
                         (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                         **(int **)(iVar8 + DAT_001a6834) * 8));
          NoticeDialog::show(pNVar9,aSStack_68,aSStack_60,0,this);
          String::~String(aSStack_60);
          this_01 = aSStack_68;
          goto LAB_001a67b2;
        }
      }
      else if (((int)*(short *)((*(int *)(iVar7 + 0x680) + -1) * 2 +
                               **(int **)(iVar8 + DAT_001a682c)) <=
                *(int *)(iVar7 + DAT_001a6828 + 4) + 1) &&
              (*(int *)(iVar7 + 0x5b8) <= *(int *)(iVar7 + 0x5a4) + 1)) {
        pNVar9 = *(NoticeDialog **)(this + 0x48);
        String::String(aSStack_78,(char *)(DAT_001a6830 + 0x1a66dc));
        String::String(aSStack_70,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(iVar8 + DAT_001a6834) * 8));
        NoticeDialog::show(pNVar9,aSStack_78,aSStack_70,0,this);
        String::~String(aSStack_70);
        this_01 = aSStack_78;
        goto LAB_001a67b2;
      }
      iVar5 = GameStateEventRaid::isEventRaidRewardRecipe();
      if ((iVar5 != 0) &&
         ((this[0xac] == (GameStateEventRaidMenu)0x0 &&
          (iVar7 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(this + 0xc)), iVar5 = DAT_001a683c,
          iVar7 == 0)))) {
        this[0xac] = (GameStateEventRaidMenu)0x1;
        pNVar9 = *(NoticeDialog **)(this + 0x48);
        String::String(aSStack_58,(char *)(iVar5 + 0x1a677c));
        String::String(aSStack_50,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(iVar8 + DAT_001a6834) * 8));
        NoticeDialog::show(pNVar9,aSStack_58,aSStack_50,0,this);
        String::~String(aSStack_50);
        this_01 = aSStack_58;
LAB_001a67b2:
        String::~String(this_01);
        return;
      }
      pCVar10 = *(ConfirmDialog **)(this + 0x4c);
      String::String(aSStack_48,(char *)(DAT_001a6840 + 0x1a67c2));
      String::String(aSStack_40,(char *)(DAT_001a6844 + 0x1a67cc));
      String::String(aSStack_38,(char *)(DAT_001a6848 + 0x1a67d6));
      ConfirmDialog::show(pCVar10,aSStack_48,aSStack_40,aSStack_38,
                          *(undefined4 *)(iVar8 + DAT_001a684c),this);
      String::~String(aSStack_38);
      String::~String(aSStack_40);
      fVar12 = (float)String::~String(aSStack_48);
      fVar12 = (float)ZombieCafe::playEffect(*(int *)(this + 0xc),fVar12);
    }
  }
  if (*(char *)(*(int *)(this + 0xc) + DAT_001a6bb4) == '\0') {
    return;
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_001a6bb4) = 0;
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar12);
  if (this[0xb8] != (GameStateEventRaidMenu)0x0) {
    this[0xb8] = (GameStateEventRaidMenu)0x0;
    javaHideWebViewRanking(0,0,1);
    return;
  }
  pCVar11 = *(CapcomGame **)(this + 0xc);
  pGVar4 = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(pGVar4);
  pGVar2 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar4);
LAB_001a6554:
  CapcomGame::setNextState(pCVar11,(GameState *)pGVar2);
  return;
}


