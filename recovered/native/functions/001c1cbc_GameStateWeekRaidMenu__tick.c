/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c1cbc GameStateWeekRaidMenu::tick */

/* GameStateWeekRaidMenu::tick(long) */

void __thiscall GameStateWeekRaidMenu::tick(GameStateWeekRaidMenu *this,long param_1)

{
  GameStateMainMenu *pGVar1;
  GameStateLoading *pGVar2;
  int *piVar3;
  ZombieCafe *this_00;
  GameStateRaid *pGVar4;
  int iVar5;
  String *this_01;
  GameStateAmpouleRaidMenu *this_02;
  GameStateEventRaidMenu *this_03;
  GameStateEventRaid2Menu *this_04;
  GameStateCafe *pGVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  NoticeDialog *pNVar12;
  CapcomGame *pCVar13;
  float fVar14;
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
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ZombieCafe::tickPlaySecAnalysis_survival(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  pCVar13 = *(CapcomGame **)(this + 0xc);
  iVar11 = DAT_001c2034 + 0x1c1cde;
  if (pCVar13[DAT_001c2030] == (CapcomGame)0x0) {
    pGVar1 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar1);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
    goto LAB_001c1d5e;
  }
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  if (((*(char *)(*(int *)(this + 0x38) + 0x14) != '\0') ||
      (*(char *)(*(int *)(this + 0x3c) + 0x14) != '\0')) ||
     (*(char *)(*(int *)(this + 0x40) + 0x14) != '\0')) {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_001c2038) = 0;
    return;
  }
  iVar7 = ZombieCafe::checkWeekRaidTime();
  if (iVar7 == 0) {
    if (this[0xd0] != (GameStateWeekRaidMenu)0x0) {
      javaHideWebViewRanking(0,0,1);
    }
    pCVar13 = *(CapcomGame **)(this + 0xc);
    pGVar1 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar1);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
    goto LAB_001c1d5e;
  }
  iVar7 = ZombieCafe::checkGlobalPlayTime_WeekRaid(SUB41(*(undefined4 *)(this + 0xc),0));
  if (iVar7 != 0) {
    piVar3 = *(int **)(this + 0xa0);
    pcVar8 = *(code **)(*piVar3 + 0x20);
  }
  else {
    piVar3 = *(int **)(this + 0xa0);
    pcVar8 = *(code **)(*piVar3 + 0x20);
  }
  (*pcVar8)(piVar3,iVar7 == 0);
  fVar14 = (float)setLinkButton();
  iVar7 = *(int *)(this + 0xbc);
  if (iVar7 == 0) {
    *(undefined4 *)(this + 0xbc) = 1;
    Layout_WeekRaidInit();
    Layout_Default(this);
    fVar14 = (float)sendMaltaLog_CafeMember(this);
  }
  else {
    this_00 = *(ZombieCafe **)(this + 0xc);
    if (iVar7 == 1) {
      iVar7 = ZombieCafe::getWeekRaid_attackPointTimer(this_00);
      if (iVar7 < 1) {
        piVar3 = *(int **)(this + 0xac);
        (**(code **)(*piVar3 + 0x20))(piVar3,0);
      }
      else {
        piVar3 = *(int **)(this + 0xac);
        (**(code **)(*piVar3 + 0x20))(piVar3,1);
        drawReOpenTimer(this);
      }
      fVar14 = (float)drawWeekRaidSoul(this);
    }
    else if (iVar7 == 2) {
      if (*(int *)(this + 0xc4) == 0) {
        ZombieCafe::subWeekRaid_attackPoint(this_00,1);
        pCVar13 = *(CapcomGame **)(this + 0xc);
        iVar11 = ZombieCafe::getWeekRaidTheme((ZombieCafe *)pCVar13);
        pGVar4 = (GameStateRaid *)operator_new(0x18c);
        GameStateRaid::GameStateRaid(pGVar4,*(int *)(this + 0xc0) + 1,iVar11,true,false);
        pGVar2 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar4);
      }
      else {
        iVar11 = 3;
        if (*(int *)(this + 0xc0) != 1) {
          iVar11 = 1;
        }
        ZombieCafe::subWeekRaid_attackPoint(this_00,iVar11);
        pCVar13 = *(CapcomGame **)(this + 0xc);
        iVar11 = ZombieCafe::getWeekRaidTheme((ZombieCafe *)pCVar13);
        pGVar4 = (GameStateRaid *)operator_new(0x18c);
        GameStateRaid::GameStateRaid(pGVar4,*(int *)(this + 0xc0) + 1,iVar11,false,true);
        pGVar2 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar4);
      }
      goto LAB_001c1d5e;
    }
  }
  iVar7 = DAT_001c2040;
  if (((((*(int *)(this + 0xbc) == 1) && (*(char *)(*(int *)(this + 0x38) + 0x14) == '\0')) &&
       ((*(char *)(*(int *)(this + 0x3c) + 0x14) == '\0' &&
        ((*(char *)(*(int *)(this + 0x40) + 0x14) == '\0' &&
         (iVar9 = *(int *)(this + 0xc), *(char *)(iVar9 + DAT_001c203c) == '\0')))))) &&
      (*(int *)(iVar9 + DAT_001c2040) != 0)) &&
     ((*(int *)(iVar9 + 0x4b8) == 0 &&
      (*(int *)(iVar9 + DAT_001c2048) <= (int)**(short **)(iVar11 + DAT_001c2044))))) {
    iVar9 = FUN_001c0c98(*(undefined4 *)(this + 0x4c));
    if ((iVar9 == 0) &&
       ((((iVar9 = FUN_001c0c98(*(undefined4 *)(this + 0x50),
                                *(undefined4 *)(*(int *)(this + 0xc) + iVar7)), iVar9 == 0 &&
          (iVar9 = FUN_001c0c98(*(undefined4 *)(this + 0x54),
                                *(undefined4 *)(*(int *)(this + 0xc) + iVar7)), iVar9 == 0)) &&
         (iVar9 = FUN_001c0c98(*(undefined4 *)(this + 0x58),
                               *(undefined4 *)(*(int *)(this + 0xc) + iVar7)), iVar9 == 0)) &&
        ((iVar9 = FUN_001c0c98(*(undefined4 *)(this + 0x5c),
                               *(undefined4 *)(*(int *)(this + 0xc) + iVar7)), iVar9 == 0 &&
         (iVar9 = FUN_001c0c98(*(undefined4 *)(this + 0x60),
                               *(undefined4 *)(*(int *)(this + 0xc) + iVar7)), iVar9 == 0)))))) {
      iVar11 = FUN_001c0c98(*(undefined4 *)(this + 0x48),
                            *(undefined4 *)(*(int *)(this + 0xc) + iVar7));
      if (iVar11 == 0) {
        iVar11 = FUN_001c0c98(*(undefined4 *)(this + 0x90),
                              *(undefined4 *)(*(int *)(this + 0xc) + iVar7));
        if (iVar11 == 0) {
          iVar11 = FUN_001c0c98(*(undefined4 *)(this + 0x94),
                                *(undefined4 *)(*(int *)(this + 0xc) + iVar7));
          if (iVar11 == 0) {
            iVar11 = FUN_001c0c98(*(undefined4 *)(this + 0x98),
                                  *(undefined4 *)(*(int *)(this + 0xc) + iVar7));
            if (iVar11 == 0) {
              iVar11 = FUN_001c0c98(*(undefined4 *)(this + 0x44),
                                    *(undefined4 *)(*(int *)(this + 0xc) + iVar7));
              if (iVar11 == 0) goto LAB_001c224a;
              ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_09);
              fVar14 = (float)setExplanationWebWindow(this);
            }
            else {
              fVar14 = extraout_s0_08;
              if ((this[0xd0] == (GameStateWeekRaidMenu)0x0) &&
                 (*(char *)(*(int *)(this + 0x98) + 0x86) != '\0')) {
                ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_08);
                pCVar13 = *(CapcomGame **)(this + 0xc);
                this_04 = (GameStateEventRaid2Menu *)operator_new(0x114);
                GameStateEventRaid2Menu::GameStateEventRaid2Menu(this_04);
                pGVar2 = (GameStateLoading *)operator_new(0x2c);
                GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_04);
                goto LAB_001c221e;
              }
            }
          }
          else {
            fVar14 = extraout_s0_07;
            if ((this[0xd0] == (GameStateWeekRaidMenu)0x0) &&
               (*(char *)(*(int *)(this + 0x94) + 0x86) != '\0')) {
              ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_07);
              pCVar13 = *(CapcomGame **)(this + 0xc);
              this_03 = (GameStateEventRaidMenu *)operator_new(0xbc);
              GameStateEventRaidMenu::GameStateEventRaidMenu(this_03);
              pGVar2 = (GameStateLoading *)operator_new(0x2c);
              GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_03);
              goto LAB_001c221e;
            }
          }
        }
        else {
          fVar14 = extraout_s0_06;
          if ((this[0xd0] == (GameStateWeekRaidMenu)0x0) &&
             (*(char *)(*(int *)(this + 0x90) + 0x86) != '\0')) {
            ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_06);
            pCVar13 = *(CapcomGame **)(this + 0xc);
            this_02 = (GameStateAmpouleRaidMenu *)operator_new(0x98);
            GameStateAmpouleRaidMenu::GameStateAmpouleRaidMenu(this_02);
            pGVar2 = (GameStateLoading *)operator_new(0x2c);
            GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_02);
LAB_001c221e:
            fVar14 = (float)CapcomGame::setNextState(pCVar13,(GameState *)pGVar2);
          }
        }
      }
      else {
        if (this[0xd0] == (GameStateWeekRaidMenu)0x0) {
          ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_10);
          pCVar13 = *(CapcomGame **)(this + 0xc);
          pGVar6 = (GameStateCafe *)operator_new(0x200);
          GameStateCafe::GameStateCafe(pGVar6);
          pGVar2 = (GameStateLoading *)operator_new(0x2c);
          GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar6);
          CapcomGame::setNextState(pCVar13,(GameState *)pGVar2);
        }
LAB_001c224a:
        this[0xd0] = (GameStateWeekRaidMenu)0x0;
        fVar14 = (float)javaHideWebViewRanking(0,0,1);
      }
    }
    else {
      iVar5 = ZombieCafe::haveZombies(*(ZombieCafe **)(this + 0xc));
      iVar9 = DAT_001c2040;
      iVar10 = *(int *)(this + 0xc);
      if (iVar5 == 0) {
        pNVar12 = *(NoticeDialog **)(this + 0x38);
        String::String(aSStack_28,
                       (String *)
                       (*(int *)(*(int *)(iVar10 + 0x4b0) + 8) +
                       **(int **)(iVar11 + DAT_001c205c) * 8));
        String::String(aSStack_20,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(iVar11 + DAT_001c2058) * 8));
        NoticeDialog::show(pNVar12,aSStack_28,aSStack_20,0,this);
        String::~String(aSStack_20);
        this_01 = aSStack_28;
LAB_001c1fee:
        String::~String(this_01);
        return;
      }
      if (((int)*(short *)((*(int *)(iVar10 + 0x680) + -1) * 2 + **(int **)(iVar11 + DAT_001c2050))
           <= *(int *)(iVar10 + DAT_001c204c + 4) + 1) &&
         (*(int *)(iVar10 + 0x5b8) <= *(int *)(iVar10 + 0x5a4) + 1)) {
        pNVar12 = *(NoticeDialog **)(this + 0x38);
        String::String(aSStack_38,(char *)(DAT_001c2054 + 0x1c1f74));
        String::String(aSStack_30,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(iVar11 + DAT_001c2058) * 8));
        NoticeDialog::show(pNVar12,aSStack_38,aSStack_30,0,this);
        String::~String(aSStack_30);
        this_01 = aSStack_38;
        goto LAB_001c1fee;
      }
      iVar11 = FUN_001c0c98(*(undefined4 *)(this + 0x4c),*(undefined4 *)(iVar10 + iVar7));
      if (iVar11 == 0) {
        iVar11 = FUN_001c0c98(*(undefined4 *)(this + 0x50),
                              *(undefined4 *)(*(int *)(this + 0xc) + iVar9));
        if (iVar11 == 0) {
          iVar11 = FUN_001c0c98(*(undefined4 *)(this + 0x54),
                                *(undefined4 *)(*(int *)(this + 0xc) + iVar9));
          if (iVar11 == 0) {
            iVar11 = FUN_001c0c98(*(undefined4 *)(this + 0x58),
                                  *(undefined4 *)(*(int *)(this + 0xc) + iVar9));
            if (iVar11 == 0) {
              iVar11 = FUN_001c0c98(*(undefined4 *)(this + 0x5c),
                                    *(undefined4 *)(*(int *)(this + 0xc) + iVar9));
              if (iVar11 == 0) {
                iVar11 = FUN_001c0c98(*(undefined4 *)(this + 0x60),
                                      *(undefined4 *)(*(int *)(this + 0xc) + iVar9));
                fVar14 = extraout_s0_04;
                if ((iVar11 != 0) && (*(char *)(*(int *)(this + 0x78) + 0x14) == '\0')) {
                  iVar11 = 1;
                  iVar9 = 3;
                  iVar7 = 1;
                  goto LAB_001c20d8;
                }
              }
              else {
                fVar14 = extraout_s0_03;
                if (*(char *)(*(int *)(this + 0x74) + 0x14) == '\0') {
                  iVar9 = 1;
                  iVar7 = 1;
                  iVar11 = 0;
LAB_001c20d8:
                  iVar11 = selectButtom(this,iVar9,iVar11,iVar7);
                  fVar14 = extraout_s0_05;
                  if (iVar11 == 0) {
                    return;
                  }
                }
              }
            }
            else {
              fVar14 = extraout_s0_02;
              if (*(char *)(*(int *)(this + 0x70) + 0x14) == '\0') {
                iVar9 = 1;
                iVar11 = 3;
                iVar7 = 0;
                goto LAB_001c20d8;
              }
            }
          }
          else {
            fVar14 = extraout_s0_01;
            if (*(char *)(*(int *)(this + 0x6c) + 0x14) == '\0') {
              iVar9 = 1;
              iVar11 = 2;
              iVar7 = 0;
              goto LAB_001c20d8;
            }
          }
        }
        else {
          fVar14 = extraout_s0_00;
          if (*(char *)(*(int *)(this + 0x68) + 0x14) == '\0') {
            iVar9 = 1;
            iVar11 = 1;
            iVar7 = 0;
            goto LAB_001c20d8;
          }
        }
      }
      else {
        fVar14 = extraout_s0;
        if (*(char *)(*(int *)(this + 100) + 0x14) == '\0') {
          iVar9 = 1;
          iVar11 = 0;
          iVar7 = 0;
          goto LAB_001c20d8;
        }
      }
      fVar14 = (float)ZombieCafe::playEffect(*(int *)(this + 0xc),fVar14);
    }
  }
  if (*(char *)(*(int *)(this + 0xc) + DAT_001c2318) == '\0') {
    return;
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_001c2318) = 0;
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar14);
  if (this[0xd0] != (GameStateWeekRaidMenu)0x0) {
    this[0xd0] = (GameStateWeekRaidMenu)0x0;
    javaHideWebViewRanking(0,0,1);
    return;
  }
  pCVar13 = *(CapcomGame **)(this + 0xc);
  pGVar6 = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(pGVar6);
  pGVar2 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar6);
LAB_001c1d5e:
  CapcomGame::setNextState(pCVar13,(GameState *)pGVar2);
  return;
}


