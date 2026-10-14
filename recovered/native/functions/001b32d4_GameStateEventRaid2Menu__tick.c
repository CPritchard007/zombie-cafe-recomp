/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b32d4 GameStateEventRaid2Menu::tick */

/* GameStateEventRaid2Menu::tick(long) */

void __thiscall GameStateEventRaid2Menu::tick(GameStateEventRaid2Menu *this,long param_1)

{
  undefined1 uVar1;
  GameStateMainMenu *pGVar2;
  GameStateLoading *pGVar3;
  int iVar4;
  int *piVar5;
  GameStateCafe *pGVar6;
  GameStateEventRaid2 *pGVar7;
  String *this_00;
  GameStatePrizeMenu *this_01;
  GameStateAmpouleRaidMenu *this_02;
  GameStateWeekRaidMenu *this_03;
  GameStateEventRaidMenu *this_04;
  int iVar8;
  code *pcVar9;
  CapcomGame *pCVar10;
  NoticeDialog *pNVar11;
  float fVar12;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  float extraout_s0_13;
  float extraout_s0_14;
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
  pCVar10 = *(CapcomGame **)(this + 0xc);
  if (pCVar10[DAT_001b3634] == (CapcomGame)0x0) {
    pGVar2 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar2);
    pGVar3 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar3,(GameState *)pGVar2);
    goto LAB_001b3a34;
  }
  (**(code **)(**(int **)(this + 0x28) + 8))(*(int **)(this + 0x28),param_1);
  if ((((*(char *)(*(int *)(this + 0x5c) + 0x14) != '\0') ||
       (*(char *)(*(int *)(this + 0x60) + 0x14) != '\0')) ||
      (*(char *)(*(int *)(this + 100) + 0x14) != '\0')) ||
     (*(char *)(*(int *)(this + 0x68) + 0x14) != '\0')) {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_001b3638) = 0;
    return;
  }
  if ((this[0x105] != (GameStateEventRaid2Menu)0x0) &&
     (iVar4 = ZombieCafe::checkEventRaid2Time(), iVar4 == 0)) {
    pCVar10 = *(CapcomGame **)(this + 0xc);
    pGVar2 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar2);
    pGVar3 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar3,(GameState *)pGVar2);
    goto LAB_001b3a34;
  }
  iVar4 = ZombieCafe::checkEventRaid2Time();
  if (iVar4 != 0) {
    iVar4 = ZombieCafe::checkGlobalPlayTime_EventRaid2(SUB41(*(undefined4 *)(this + 0xc),0));
    if (iVar4 != 0) {
      piVar5 = *(int **)(this + 0xe0);
      pcVar9 = *(code **)(*piVar5 + 0x20);
    }
    else {
      piVar5 = *(int **)(this + 0xe0);
      pcVar9 = *(code **)(*piVar5 + 0x20);
    }
    (*pcVar9)(piVar5,iVar4 == 0);
  }
  if (*(int *)(this + 0x100) == 0) {
    pCVar10 = *(CapcomGame **)(this + 0xc);
    pGVar6 = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(pGVar6);
    pGVar3 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar3,(GameState *)pGVar6);
    goto LAB_001b3a34;
  }
  fVar12 = (float)setLinkButton();
  iVar4 = *(int *)(this + 0xf8);
  if (iVar4 == 0) {
    *(undefined4 *)(this + 0xf8) = 1;
    Layout_EventRaid2Init();
    Layout_GetItemButton();
    Layout_Default(this);
    fVar12 = (float)sendMaltaLog_CafeMember(this);
  }
  else if (iVar4 == 1) {
    iVar4 = ZombieCafe::getEventRaid2_attackPointTimer(*(ZombieCafe **)(this + 0xc));
    if (iVar4 < 1) {
      iVar4 = ZombieCafe::checkEventRaid2Time();
      if (iVar4 != 0) {
        iVar4 = 0;
      }
      (**(code **)(**(int **)(this + 0xe4) + 0x20))(*(int **)(this + 0xe4),iVar4);
    }
    else {
      drawReOpenTimer(this);
    }
    Layout_GetItemButton();
    fVar12 = (float)drawEventRaid2Soul(this);
  }
  else {
    if (iVar4 == 2) {
      if (*(char *)(*(int *)(this + 0xbc) + 0x14) == '\0') {
        uVar1 = false;
      }
      else {
        uVar1 = ZombieCafe::getEventRaid2_bonusRate();
      }
      ZombieCafe::subEventRaid2_attackPoint(*(ZombieCafe **)(this + 0xc));
      pCVar10 = *(CapcomGame **)(this + 0xc);
      pGVar7 = (GameStateEventRaid2 *)operator_new(0x154);
      GameStateEventRaid2::GameStateEventRaid2(pGVar7,*(int *)(this + 0xfc),extraout_s0,(bool)uVar1)
      ;
      pGVar3 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar3,(GameState *)pGVar7);
      goto LAB_001b3a34;
    }
    if (iVar4 == 3) {
      if (*(char *)(*(int *)(this + 0xbc) + 0x14) == '\0') {
        uVar1 = false;
      }
      else {
        uVar1 = ZombieCafe::getEventRaid2_bonusRate();
      }
      ZombieCafe::subEventRaid2_attackPoint(*(ZombieCafe **)(this + 0xc));
      ZombieCafe::subEventRaid2_attackPoint(*(ZombieCafe **)(this + 0xc));
      ZombieCafe::subEventRaid2_attackPoint(*(ZombieCafe **)(this + 0xc));
      pCVar10 = *(CapcomGame **)(this + 0xc);
      pGVar7 = (GameStateEventRaid2 *)operator_new(0x154);
      GameStateEventRaid2::GameStateEventRaid2
                (pGVar7,*(int *)(this + 0xfc),extraout_s0_00,(bool)uVar1);
      pGVar3 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar3,(GameState *)pGVar7);
      goto LAB_001b3a34;
    }
  }
  iVar4 = DAT_001b3640;
  if ((((*(int *)(this + 0xf8) == 1) && (*(char *)(*(int *)(this + 0x5c) + 0x14) == '\0')) &&
      ((*(char *)(*(int *)(this + 0x60) + 0x14) == '\0' &&
       (((*(char *)(*(int *)(this + 0x68) + 0x14) == '\0' &&
         (iVar8 = *(int *)(this + 0xc), *(char *)(iVar8 + DAT_001b363c) == '\0')) &&
        (*(int *)(iVar8 + DAT_001b3640) != 0)))))) &&
     ((*(int *)(iVar8 + 0x4b8) == 0 &&
      (*(int *)(iVar8 + DAT_001b3648) <= (int)**(short **)(DAT_001b3644 + 0x1b3526))))) {
    iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0x94));
    if ((iVar8 == 0) &&
       (((iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0x98),
                               *(undefined4 *)(*(int *)(this + 0xc) + iVar4)), iVar8 == 0 &&
         (iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0x9c),
                               *(undefined4 *)(*(int *)(this + 0xc) + iVar4)), iVar8 == 0)) &&
        ((iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0xa0),
                               *(undefined4 *)(*(int *)(this + 0xc) + iVar4)), iVar8 == 0 &&
         (iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0xa4),
                               *(undefined4 *)(*(int *)(this + 0xc) + iVar4)), iVar8 == 0)))))) {
      iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0x70),
                           *(undefined4 *)(*(int *)(this + 0xc) + iVar4));
      if (iVar8 == 0) {
        iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0x6c),
                             *(undefined4 *)(*(int *)(this + 0xc) + iVar4));
        if (iVar8 == 0) {
          iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0x78),
                               *(undefined4 *)(*(int *)(this + 0xc) + iVar4));
          if (iVar8 == 0) {
            iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0x7c),
                                 *(undefined4 *)(*(int *)(this + 0xc) + iVar4));
            if (iVar8 == 0) {
              iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0x8c),
                                   *(undefined4 *)(*(int *)(this + 0xc) + iVar4));
              if (iVar8 == 0) {
                iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0x88),
                                     *(undefined4 *)(*(int *)(this + 0xc) + iVar4));
                if (iVar8 == 0) {
                  iVar8 = FUN_001aebb2(*(undefined4 *)(this + 0x90),
                                       *(undefined4 *)(*(int *)(this + 0xc) + iVar4));
                  if (iVar8 == 0) {
                    iVar4 = FUN_001aebb2(*(undefined4 *)(this + 0x80),
                                         *(undefined4 *)(*(ZombieCafe **)(this + 0xc) + iVar4));
                    fVar12 = extraout_s0_13;
                    if (iVar4 == 0) {
                      if (this[0x106] != (GameStateEventRaid2Menu)0x0) {
                        this[0x106] = (GameStateEventRaid2Menu)0x0;
                        goto LAB_001b39dc;
                      }
                    }
                    else if (this[0x106] == (GameStateEventRaid2Menu)0x0) {
                      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_13);
                      fVar12 = (float)selectRecoverButtom(this);
                    }
                  }
                  else {
                    fVar12 = extraout_s0_11;
                    if (((this[0x106] == (GameStateEventRaid2Menu)0x0) &&
                        (*(char *)(*(int *)(this + 0x90) + 0x86) != '\0')) &&
                       (iVar4 = ZombieCafe::isEventRaid_Advent(*(ZombieCafe **)(this + 0xc)),
                       fVar12 = extraout_s0_12, iVar4 != 0)) {
                      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_12);
                      pCVar10 = *(CapcomGame **)(this + 0xc);
                      this_04 = (GameStateEventRaidMenu *)operator_new(0xbc);
                      GameStateEventRaidMenu::GameStateEventRaidMenu(this_04);
                      pGVar3 = (GameStateLoading *)operator_new(0x2c);
                      GameStateLoading::GameStateLoading(pGVar3,(GameState *)this_04);
                      goto LAB_001b397c;
                    }
                  }
                }
                else {
                  fVar12 = extraout_s0_10;
                  if ((this[0x106] == (GameStateEventRaid2Menu)0x0) &&
                     (*(char *)(*(int *)(this + 0x88) + 0x86) != '\0')) {
                    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_10);
                    pCVar10 = *(CapcomGame **)(this + 0xc);
                    this_03 = (GameStateWeekRaidMenu *)operator_new(0xd4);
                    GameStateWeekRaidMenu::GameStateWeekRaidMenu(this_03);
                    pGVar3 = (GameStateLoading *)operator_new(0x2c);
                    GameStateLoading::GameStateLoading(pGVar3,(GameState *)this_03);
                    goto LAB_001b397c;
                  }
                }
              }
              else {
                fVar12 = extraout_s0_09;
                if ((this[0x106] == (GameStateEventRaid2Menu)0x0) &&
                   (*(char *)(*(int *)(this + 0x8c) + 0x86) != '\0')) {
                  ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_09);
                  pCVar10 = *(CapcomGame **)(this + 0xc);
                  this_02 = (GameStateAmpouleRaidMenu *)operator_new(0x98);
                  GameStateAmpouleRaidMenu::GameStateAmpouleRaidMenu(this_02);
                  pGVar3 = (GameStateLoading *)operator_new(0x2c);
                  GameStateLoading::GameStateLoading(pGVar3,(GameState *)this_02);
                  goto LAB_001b397c;
                }
              }
            }
            else {
              ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_08);
              pCVar10 = *(CapcomGame **)(this + 0xc);
              this_01 = (GameStatePrizeMenu *)operator_new(0x84);
              GameStatePrizeMenu::GameStatePrizeMenu(this_01,1);
              pGVar3 = (GameStateLoading *)operator_new(0x2c);
              GameStateLoading::GameStateLoading(pGVar3,(GameState *)this_01);
LAB_001b397c:
              fVar12 = (float)CapcomGame::setNextState(pCVar10,(GameState *)pGVar3);
            }
          }
          else {
            ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_07);
            getItemMain(this);
            fVar12 = (float)Layout_Default(this);
          }
        }
        else {
          ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_06);
          fVar12 = (float)ZombieCafe::eventRaid2_setExplanationWebWindow
                                    (*(ZombieCafe **)(this + 0xc),*(int *)(this + 0x100));
          this[0x106] = (GameStateEventRaid2Menu)0x1;
        }
      }
      else {
        if (this[0x106] == (GameStateEventRaid2Menu)0x0) {
          ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_14);
          pCVar10 = *(CapcomGame **)(this + 0xc);
          pGVar6 = (GameStateCafe *)operator_new(0x200);
          GameStateCafe::GameStateCafe(pGVar6);
          pGVar3 = (GameStateLoading *)operator_new(0x2c);
          GameStateLoading::GameStateLoading(pGVar3,(GameState *)pGVar6);
          goto LAB_001b397c;
        }
        this[0x106] = (GameStateEventRaid2Menu)0x0;
LAB_001b39dc:
        fVar12 = (float)javaHideWebViewRanking(0,0,1);
      }
    }
    else {
      iVar8 = ZombieCafe::haveZombiesCafeAll(*(ZombieCafe **)(this + 0xc));
      if (iVar8 == 0) {
        pNVar11 = *(NoticeDialog **)(this + 0x5c);
        String::String(aSStack_78,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(DAT_001b364c + 0x1b35aa) * 8));
        String::String(aSStack_70,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(DAT_001b3650 + 0x1b35c2) * 8));
        NoticeDialog::show(pNVar11,aSStack_78,aSStack_70,0,this);
        String::~String(aSStack_70);
        String::~String(aSStack_78);
        return;
      }
      fVar12 = extraout_s0_01;
      if (this[0x104] == (GameStateEventRaid2Menu)0x0) {
        this[0x104] = (GameStateEventRaid2Menu)0x1;
        iVar8 = checkEndTime();
        fVar12 = extraout_s0_02;
        if ((iVar8 == 0) ||
           (iVar8 = ZombieCafe::isFinishNotce_basicEventInfo(), fVar12 = extraout_s0_03, iVar8 == 0)
           ) goto LAB_001b360e;
        pNVar11 = *(NoticeDialog **)(this + 0x5c);
        String::String(aSStack_28,(char *)(DAT_001b3b14 + 0x1b3afe));
        String::String(aSStack_20,(char *)(DAT_001b3b18 + 0x1b3b08));
        NoticeDialog::show(pNVar11,aSStack_28,aSStack_20,0,this);
        String::~String(aSStack_20);
        this_00 = aSStack_28;
      }
      else {
LAB_001b360e:
        ZombieCafe::playEffect(*(int *)(this + 0xc),fVar12);
        iVar8 = DAT_001b3640;
        iVar4 = FUN_001aebb2(*(undefined4 *)(this + 0x94),
                             *(undefined4 *)(*(int *)(this + 0xc) + iVar4));
        if (iVar4 != 0) {
          iVar4 = 0;
LAB_001b3766:
          iVar4 = selectButtom(this,iVar4);
          fVar12 = extraout_s0_05;
          if (iVar4 == 0) {
            return;
          }
          goto LAB_001b39e2;
        }
        iVar4 = FUN_001aebb2(*(undefined4 *)(this + 0x98),
                             *(undefined4 *)(*(int *)(this + 0xc) + iVar8));
        if (iVar4 == 0) {
          iVar4 = FUN_001aebb2(*(undefined4 *)(this + 0x9c),
                               *(undefined4 *)(*(int *)(this + 0xc) + iVar8));
          if (iVar4 == 0) {
            iVar4 = FUN_001aebb2(*(undefined4 *)(this + 0xa0),
                                 *(undefined4 *)(*(int *)(this + 0xc) + iVar8));
            if (iVar4 == 0) {
              iVar4 = FUN_001aebb2(*(undefined4 *)(this + 0xa4),
                                   *(undefined4 *)(*(int *)(this + 0xc) + iVar8));
              fVar12 = extraout_s0_04;
              if (iVar4 == 0) goto LAB_001b39e2;
              if (*(char *)(*(int *)(this + 0xa4) + 0x86) != '\0') {
                iVar4 = 4;
                goto LAB_001b3766;
              }
              pNVar11 = *(NoticeDialog **)(this + 0x5c);
              String::String(aSStack_38,(char *)(DAT_001b39cc + 0x1b377c));
              String::String(aSStack_30,(char *)(DAT_001b39d0 + 0x1b3786));
              NoticeDialog::show(pNVar11,aSStack_38,aSStack_30,0,this);
              String::~String(aSStack_30);
              this_00 = aSStack_38;
            }
            else {
              if (*(char *)(*(int *)(this + 0xa0) + 0x86) != '\0') {
                iVar4 = 3;
                goto LAB_001b3766;
              }
              pNVar11 = *(NoticeDialog **)(this + 0x5c);
              String::String(aSStack_48,(char *)(DAT_001b39c4 + 0x1b3720));
              String::String(aSStack_40,(char *)(DAT_001b39c8 + 0x1b372a));
              NoticeDialog::show(pNVar11,aSStack_48,aSStack_40,0,this);
              String::~String(aSStack_40);
              this_00 = aSStack_48;
            }
          }
          else {
            if (*(char *)(*(int *)(this + 0x9c) + 0x86) != '\0') {
              iVar4 = 2;
              goto LAB_001b3766;
            }
            pNVar11 = *(NoticeDialog **)(this + 0x5c);
            String::String(aSStack_58,(char *)(DAT_001b39bc + 0x1b36d0));
            String::String(aSStack_50,(char *)(DAT_001b39c0 + 0x1b36da));
            NoticeDialog::show(pNVar11,aSStack_58,aSStack_50,0,this);
            String::~String(aSStack_50);
            this_00 = aSStack_58;
          }
        }
        else {
          if (*(char *)(*(int *)(this + 0x98) + 0x86) != '\0') {
            iVar4 = 1;
            goto LAB_001b3766;
          }
          pNVar11 = *(NoticeDialog **)(this + 0x5c);
          String::String(aSStack_68,(char *)(DAT_001b39b4 + 0x1b3680));
          String::String(aSStack_60,(char *)(DAT_001b39b8 + 0x1b368a));
          NoticeDialog::show(pNVar11,aSStack_68,aSStack_60,0,this);
          String::~String(aSStack_60);
          this_00 = aSStack_68;
        }
      }
      fVar12 = (float)String::~String(this_00);
    }
  }
LAB_001b39e2:
  if (*(char *)(*(int *)(this + 0xc) + DAT_001b3b10) == '\0') {
    return;
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_001b3b10) = 0;
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar12);
  if (this[0x106] != (GameStateEventRaid2Menu)0x0) {
    this[0x106] = (GameStateEventRaid2Menu)0x0;
    javaHideWebViewRanking(0,0,1);
    return;
  }
  pCVar10 = *(CapcomGame **)(this + 0xc);
  pGVar6 = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(pGVar6);
  pGVar3 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(pGVar3,(GameState *)pGVar6);
LAB_001b3a34:
  CapcomGame::setNextState(pCVar10,(GameState *)pGVar3);
  return;
}


