/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001137f8 GameStateAmpouleRaidMenu::tick */

/* GameStateAmpouleRaidMenu::tick(long) */

void __thiscall GameStateAmpouleRaidMenu::tick(GameStateAmpouleRaidMenu *this,long param_1)

{
  GameStateMainMenu *pGVar1;
  GameStateLoading *pGVar2;
  int *piVar3;
  GameStateAmpouleRaid *this_00;
  GameStateWeekRaidMenu *this_01;
  GameStateEventRaidMenu *this_02;
  GameStateEventRaid2Menu *this_03;
  GameStateCafe *pGVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  ConfirmDialog *pCVar8;
  CapcomGame *pCVar9;
  NoticeDialog *pNVar10;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float fVar11;
  undefined8 uVar12;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ZombieCafe::tickPlaySecAnalysis_survival(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  pCVar9 = *(CapcomGame **)(this + 0xc);
  if (pCVar9[DAT_00113b44] == (CapcomGame)0x0) {
    pGVar1 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar1);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
    goto LAB_00113c7a;
  }
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  if ((*(char *)(*(int *)(this + 0x30) + 0x14) != '\0') ||
     (*(char *)(*(int *)(this + 0x34) + 0x14) != '\0')) {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_00113b48) = 0;
    return;
  }
  iVar5 = ZombieCafe::checkAmpouleRaidTime();
  if (iVar5 == 0) {
    if (this[0x8c] != (GameStateAmpouleRaidMenu)0x0) {
      javaHideWebViewRanking(0,0,1);
    }
    pCVar9 = *(CapcomGame **)(this + 0xc);
    pGVar1 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar1);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
    goto LAB_00113c7a;
  }
  iVar5 = ZombieCafe::checkGlobalPlayTime_AmpouleRaid(SUB41(*(undefined4 *)(this + 0xc),0));
  piVar3 = *(int **)(this + 0x74);
  if (iVar5 != 0) {
    pcVar7 = *(code **)(*piVar3 + 0x20);
  }
  else {
    pcVar7 = *(code **)(*piVar3 + 0x20);
  }
  uVar12 = (*pcVar7)(piVar3,iVar5 == 0);
  iVar5 = *(int *)(this + 0x88);
  if (iVar5 == 0) {
    *(undefined4 *)(this + 0x88) = 3;
    Layout_AmpouleRaidInit(this);
    uVar12 = Layout_Default(this);
  }
  else if (iVar5 == 3) {
    if (*(char *)(*(int *)(this + 0x40) + 0x14) == '\0') {
      iVar5 = ZombieCafe::getAmpouleRaid_reopenTimer(*(ZombieCafe **)(this + 0xc));
      if (iVar5 < 1) {
        (**(code **)(**(int **)(this + 0x40) + 0x20))(*(int **)(this + 0x40),1);
        (**(code **)(**(int **)(this + 0x44) + 0x20))(*(int **)(this + 0x44),0);
        (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),0);
      }
      else {
        drawReOpenTimer(this);
      }
    }
    uVar12 = setLinkButton();
  }
  iVar5 = DAT_00113b50;
  fVar11 = (float)uVar12;
  if (((((*(int *)(this + 0x88) == 3) && (*(char *)(*(int *)(this + 0x30) + 0x14) == '\0')) &&
       (*(char *)(*(int *)(this + 0x34) + 0x14) == '\0')) &&
      ((iVar6 = *(int *)(this + 0xc), *(char *)(iVar6 + DAT_00113b4c) == '\0' &&
       (*(long *)(iVar6 + DAT_00113b50) != 0)))) &&
     ((*(int *)(iVar6 + 0x4b8) == 0 &&
      (*(int *)(iVar6 + DAT_00113b58) <= (int)**(short **)(DAT_00113b54 + 0x113954))))) {
    iVar6 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x40),*(long *)(iVar6 + DAT_00113b50),fVar11,
                       (float)((ulonglong)uVar12 >> 0x20));
    if (iVar6 == 0) {
      iVar6 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x3c),
                         *(long *)(*(ZombieCafe **)(this + 0xc) + iVar5),extraout_s0,extraout_s1);
      if (iVar6 == 0) {
        iVar6 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x38),*(long *)(*(int *)(this + 0xc) + iVar5),
                           extraout_s0_01,extraout_s1_00);
        if (iVar6 == 0) {
          iVar6 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0x44),
                             *(long *)(*(int *)(this + 0xc) + iVar5),extraout_s0_02,extraout_s1_01);
          iVar5 = DAT_00113b50;
          if (iVar6 == 0) {
            iVar6 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x4c),
                               *(long *)(*(ZombieCafe **)(this + 0xc) + DAT_00113b50),extraout_s0_03
                               ,extraout_s1_02);
            if (iVar6 == 0) {
              iVar6 = ZCImageButton::contains
                                (*(ZCImageButton **)(this + 0x50),
                                 *(long *)(*(int *)(this + 0xc) + iVar5),extraout_s0_05,
                                 extraout_s1_03);
              if (iVar6 == 0) {
                iVar5 = ZCImageButton::contains
                                  (*(ZCImageButton **)(this + 0x54),
                                   *(long *)(*(int *)(this + 0xc) + iVar5),extraout_s0_06,
                                   extraout_s1_04);
                if (iVar5 == 0) goto LAB_00113c22;
                fVar11 = extraout_s0_07;
                if ((this[0x8c] == (GameStateAmpouleRaidMenu)0x0) &&
                   (*(char *)(*(int *)(this + 0x54) + 0x86) != '\0')) {
                  ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_07);
                  pCVar9 = *(CapcomGame **)(this + 0xc);
                  this_03 = (GameStateEventRaid2Menu *)operator_new(0x114);
                  GameStateEventRaid2Menu::GameStateEventRaid2Menu(this_03);
                  pGVar2 = (GameStateLoading *)operator_new(0x2c);
                  GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_03);
                  goto LAB_00113c18;
                }
              }
              else {
                fVar11 = extraout_s0_06;
                if ((this[0x8c] == (GameStateAmpouleRaidMenu)0x0) &&
                   (*(char *)(*(int *)(this + 0x50) + 0x86) != '\0')) {
                  ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_06);
                  pCVar9 = *(CapcomGame **)(this + 0xc);
                  this_02 = (GameStateEventRaidMenu *)operator_new(0xbc);
                  GameStateEventRaidMenu::GameStateEventRaidMenu(this_02);
                  pGVar2 = (GameStateLoading *)operator_new(0x2c);
                  GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_02);
                  goto LAB_00113c18;
                }
              }
            }
            else {
              fVar11 = extraout_s0_05;
              if ((this[0x8c] == (GameStateAmpouleRaidMenu)0x0) &&
                 (*(char *)(*(int *)(this + 0x4c) + 0x86) != '\0')) {
                ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_05);
                pCVar9 = *(CapcomGame **)(this + 0xc);
                this_01 = (GameStateWeekRaidMenu *)operator_new(0xd4);
                GameStateWeekRaidMenu::GameStateWeekRaidMenu(this_01);
                pGVar2 = (GameStateLoading *)operator_new(0x2c);
                GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_01);
                goto LAB_00113c18;
              }
            }
          }
          else {
            iVar5 = ZombieCafe::getAmpouleRaid_reopenTimer(*(ZombieCafe **)(this + 0xc));
            fVar11 = extraout_s0_04;
            if (1000 < iVar5) {
              ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_04);
              pCVar8 = *(ConfirmDialog **)(this + 0x34);
              String::String(aSStack_30,(char *)(DAT_00113b68 + 0x113aae));
              String::String(aSStack_28,(char *)(DAT_00113b6c + 0x113ab8));
              String::String(aSStack_20,(char *)(DAT_00113b70 + 0x113ac2));
              ConfirmDialog::show(pCVar8,aSStack_30,aSStack_28,aSStack_20,
                                  *(undefined4 *)(DAT_00113b74 + 0x113ace),this);
              String::~String(aSStack_20);
              String::~String(aSStack_28);
              fVar11 = (float)String::~String(aSStack_30);
            }
          }
        }
        else {
          ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_02);
          fVar11 = (float)setExplanationWebWindow(this);
        }
      }
      else {
        iVar5 = 0;
        if (this[0x8c] == (GameStateAmpouleRaidMenu)0x0) {
          ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_01);
          pCVar9 = *(CapcomGame **)(this + 0xc);
          pGVar4 = (GameStateCafe *)operator_new(0x200);
          GameStateCafe::GameStateCafe(pGVar4);
          pGVar2 = (GameStateLoading *)operator_new(0x2c);
          GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar4);
          goto LAB_00113c18;
        }
LAB_00113c22:
        this[0x8c] = SUB41(iVar5,0);
        fVar11 = (float)javaHideWebViewRanking(iVar5,iVar5,1);
      }
    }
    else {
      iVar5 = ZombieCafe::haveZombiesCafeAll(*(ZombieCafe **)(this + 0xc));
      if (iVar5 == 0) {
        pNVar10 = *(NoticeDialog **)(this + 0x30);
        String::String(aSStack_40,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(DAT_00113b5c + 0x113990) * 8));
        String::String(aSStack_38,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(DAT_00113b60 + 0x1139a8) * 8));
        NoticeDialog::show(pNVar10,aSStack_40,aSStack_38,0,this);
        String::~String(aSStack_38);
        String::~String(aSStack_40);
        return;
      }
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
      ZombieCafe::setAmpouleRaid_reopenTimer(*(ZombieCafe **)(this + 0xc),DAT_00113b64);
      pCVar9 = *(CapcomGame **)(this + 0xc);
      this_00 = (GameStateAmpouleRaid *)operator_new(0x168);
      GameStateAmpouleRaid::GameStateAmpouleRaid(this_00);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_00);
LAB_00113c18:
      fVar11 = (float)CapcomGame::setNextState(pCVar9,(GameState *)pGVar2);
    }
  }
  if (*(char *)(*(int *)(this + 0xc) + DAT_00113ce8) == '\0') {
    return;
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00113ce8) = 0;
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar11);
  if (this[0x8c] != (GameStateAmpouleRaidMenu)0x0) {
    this[0x8c] = (GameStateAmpouleRaidMenu)0x0;
    javaHideWebViewRanking(0,0,1);
    return;
  }
  pCVar9 = *(CapcomGame **)(this + 0xc);
  pGVar4 = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(pGVar4);
  pGVar2 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar4);
LAB_00113c7a:
  CapcomGame::setNextState(pCVar9,(GameState *)pGVar2);
  return;
}


