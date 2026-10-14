/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019157c GameStateSurvivalMenu::tick */

/* GameStateSurvivalMenu::tick(long) */

void __thiscall GameStateSurvivalMenu::tick(GameStateSurvivalMenu *this,long param_1)

{
  GameStateMainMenu *this_00;
  GameStateLoading *pGVar1;
  int *piVar2;
  GameStateColosseum *this_01;
  String *pSVar3;
  GameStateCafe *pGVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  NoticeDialog *pNVar9;
  ConfirmDialog *pCVar10;
  int iVar11;
  int iVar12;
  CapcomGame *pCVar13;
  GameStateSurvivalMenu *pGVar14;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float fVar15;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  undefined8 uVar16;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float fVar17;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
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
  pCVar13 = *(CapcomGame **)(this + 0xc);
  iVar12 = DAT_001918f4 + 0x19159e;
  if (pCVar13[DAT_001918f0] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    pGVar1 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar1,(GameState *)this_00);
    CapcomGame::setNextState(pCVar13,(GameState *)pGVar1);
    return;
  }
  uVar16 = (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  if (*(char *)(*(int *)(this + 0x34) + 0x14) != '\0') {
    return;
  }
  if (*(char *)(*(int *)(this + 0x38) + 0x14) != '\0') {
    return;
  }
  pGVar14 = this + 0xa4;
  iVar11 = *(int *)pGVar14;
  if (iVar11 == 0) {
    Layout_SurvivalInit(this);
    this[0x68] = (GameStateSurvivalMenu)0x0;
    puVar8 = *(undefined4 **)(iVar12 + DAT_001918f8);
    loadSurvivalInfo((void *)*puVar8,this);
    uVar16 = loadSurvivalGiftInfo((void *)*puVar8,this);
    *(undefined4 *)pGVar14 = 1;
  }
  else if (iVar11 == 1) {
    uVar16 = drawConnectWindow(this,param_1);
    if (*(int *)(this + 0x70) == 3) {
      pNVar9 = *(NoticeDialog **)(this + 0x34);
      String::String(aSStack_b0,(char *)(DAT_001918fc + 0x191628));
      String::String(aSStack_a8,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                     **(int **)(iVar12 + DAT_00191900) * 8));
      NoticeDialog::show(pNVar9,aSStack_b0,aSStack_a8,*(undefined4 *)(iVar12 + DAT_00191904),this);
      String::~String(aSStack_a8);
      pSVar3 = aSStack_b0;
LAB_001917b8:
      uVar16 = String::~String(pSVar3);
      uVar5 = 2;
LAB_00191932:
      *(undefined4 *)(this + 0xa4) = uVar5;
    }
    else if (*(int *)(this + 0x70) == 2) {
      *(undefined4 *)pGVar14 = 3;
LAB_00191836:
      uVar16 = Layout_AutoDefault(this);
    }
  }
  else if (iVar11 != 2) {
    if (iVar11 == 4) {
      pCVar13 = *(CapcomGame **)(this + 0xc);
      pGVar4 = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(pGVar4);
      pGVar1 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar1,(GameState *)pGVar4);
      uVar16 = CapcomGame::setNextState(pCVar13,(GameState *)pGVar1);
    }
    else if (iVar11 == 3) {
      uVar16 = Layout_GetItemButton(this);
      if ((this[0xa0] == (GameStateSurvivalMenu)0x0) &&
         (*(char *)(*(int *)(this + 0x4c) + 0x14) != '\0')) {
        pNVar9 = *(NoticeDialog **)(this + 0x34);
        String::String(aSStack_a0,(char *)(DAT_00191908 + 0x1916c4));
        String::String(aSStack_98,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(iVar12 + DAT_00191900) * 8));
        NoticeDialog::show(pNVar9,aSStack_a0,aSStack_98,*(undefined4 *)(iVar12 + DAT_0019190c),this)
        ;
        String::~String(aSStack_98);
        uVar16 = String::~String(aSStack_a0);
        this[0xa0] = (GameStateSurvivalMenu)0x1;
      }
      if (((char)(*(int **)(this + 0x48))[5] == '\0') && (*(int *)(this + 0x54) == 1)) {
        if (*(int *)(*(int *)(this + 0xc) + DAT_00191910) < 1) {
          (**(code **)(**(int **)(this + 0x48) + 0x20))();
          (**(code **)(**(int **)(this + 0x50) + 0x20))(*(int **)(this + 0x50),0);
          piVar2 = *(int **)(this + 0x8c);
          pcVar6 = *(code **)(*piVar2 + 0x20);
          uVar5 = 0;
          goto LAB_00191764;
        }
        uVar16 = drawReOpenTimer(this);
      }
    }
    else if (iVar11 == 5) {
      *(undefined4 *)pGVar14 = 6;
      *(undefined4 *)(this + 0x70) = 0;
      requestGetGift((void *)**(undefined4 **)(iVar12 + DAT_001918f8),this);
      piVar2 = *(int **)(this + 0x24);
      uVar5 = 1;
      pcVar6 = *(code **)(*piVar2 + 0x20);
LAB_00191764:
      uVar16 = (*pcVar6)(piVar2,uVar5);
    }
    else if (iVar11 == 6) {
      uVar16 = drawConnectWindow(this,param_1);
      if (*(int *)(this + 0x70) == 3) {
        pNVar9 = *(NoticeDialog **)(this + 0x34);
        String::String(aSStack_90,(char *)(DAT_00191914 + 0x191784));
        String::String(aSStack_88,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(iVar12 + DAT_00191900) * 8));
        NoticeDialog::show(pNVar9,aSStack_90,aSStack_88,*(undefined4 *)(iVar12 + DAT_00191904),this)
        ;
        String::~String(aSStack_88);
        pSVar3 = aSStack_90;
        goto LAB_001917b8;
      }
      if (*(int *)(this + 0x70) == 2) {
        iVar11 = addGetGiftZombie(this);
        uVar16 = CONCAT44(extraout_s1,extraout_s0);
        if (iVar11 != 0) {
          *(undefined4 *)(this + 0x70) = 0;
          ZombieCafe::save();
          uVar16 = requestGotGift((void *)**(undefined4 **)(iVar12 + DAT_001918f8),this);
        }
        if (0 < **(int **)(iVar12 + DAT_00191918)) {
          uVar5 = 10;
          goto LAB_00191932;
        }
        pNVar9 = *(NoticeDialog **)(this + 0x34);
        String::String(aSStack_80,(char *)(DAT_0019191c + 0x1917fe));
        String::String(aSStack_78,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(iVar12 + DAT_00191900) * 8));
        NoticeDialog::show(pNVar9,aSStack_80,aSStack_78,*(undefined4 *)(iVar12 + DAT_00191920),this)
        ;
        String::~String(aSStack_78);
        pSVar3 = aSStack_80;
        goto LAB_00191832;
      }
    }
    else if (iVar11 == 10) {
      uVar16 = drawConnectWindow(this,param_1);
      iVar11 = DAT_00191924;
      if (*(int *)(this + 0x70) == 3) {
        *(undefined4 *)(this + 0x70) = 0;
        pNVar9 = *(NoticeDialog **)(this + 0x34);
        String::String(aSStack_70,(char *)(iVar11 + 0x191862));
        String::String(aSStack_68,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(iVar12 + DAT_00191900) * 8));
        NoticeDialog::show(pNVar9,aSStack_70,aSStack_68,*(undefined4 *)(iVar12 + DAT_00191920),this)
        ;
        String::~String(aSStack_68);
        pSVar3 = aSStack_70;
      }
      else {
        if (*(int *)(this + 0x70) != 2) goto LAB_00191934;
        *(undefined4 *)(this + 0x70) = 0;
        iVar11 = playerHaveZombieCountCheck(this);
        uVar16 = CONCAT44(extraout_s1_00,extraout_s0_00);
        if (iVar11 != 0) {
          uVar5 = 5;
          goto LAB_00191932;
        }
        pNVar9 = *(NoticeDialog **)(this + 0x34);
        String::String(aSStack_60,(char *)(DAT_00191928 + 0x1918b8));
        String::String(aSStack_58,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(iVar12 + DAT_00191900) * 8));
        NoticeDialog::show(pNVar9,aSStack_60,aSStack_58,*(undefined4 *)(iVar12 + DAT_00191920),this)
        ;
        String::~String(aSStack_58);
        pSVar3 = aSStack_60;
      }
LAB_00191832:
      String::~String(pSVar3);
      goto LAB_00191836;
    }
  }
LAB_00191934:
  fVar17 = (float)((ulonglong)uVar16 >> 0x20);
  fVar15 = (float)uVar16;
  if (*(int *)(this + 0xa4) == 1) {
    if (((*(char *)(*(int *)(this + 0x34) + 0x14) != '\0') ||
        (*(char *)(*(int *)(this + 0x38) + 0x14) != '\0')) ||
       (iVar12 = ZCImageButton::contains
                           (*(ZCImageButton **)(this + 0x44),
                            *(long *)(*(int *)(this + 0xc) + DAT_00191cc8),fVar15,fVar17),
       fVar15 = extraout_s0_01, iVar12 == 0)) goto LAB_00191bf0;
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_01);
    pCVar13 = *(CapcomGame **)(this + 0xc);
    pGVar4 = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(pGVar4);
    pGVar1 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar1,(GameState *)pGVar4);
  }
  else {
    if (((*(int *)(this + 0xa4) != 3) || (*(char *)(*(int *)(this + 0x34) + 0x14) != '\0')) ||
       (*(char *)(*(int *)(this + 0x38) + 0x14) != '\0')) goto LAB_00191bf0;
    pGVar14 = this + 0xbc;
    if (0 < *(int *)pGVar14) {
      *(int *)pGVar14 = *(int *)pGVar14 + -1;
    }
    if (0 < *(int *)pGVar14) goto LAB_00191bf0;
    *(undefined4 *)pGVar14 = 0;
    iVar11 = DAT_00191cc8;
    iVar7 = *(int *)(this + 0xc);
    if (((*(long *)(iVar7 + DAT_00191cc8) == 0) || (*(int *)(iVar7 + 0x4b8) != 0)) ||
       ((int)**(short **)(iVar12 + DAT_00191ccc) < *(int *)(iVar7 + DAT_00191cd0)))
    goto LAB_00191bf0;
    iVar7 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x48),*(long *)(iVar7 + DAT_00191cc8),fVar15,
                       fVar17);
    if (iVar7 == 0) {
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x44),*(long *)(*(int *)(this + 0xc) + iVar11),
                         extraout_s0_02,extraout_s1_01);
      if (iVar7 != 0) {
        fVar15 = (float)javaHideWebViewRanking(0,0,1);
        ZombieCafe::playEffect(*(int *)(this + 0xc),fVar15);
        pCVar13 = *(CapcomGame **)(this + 0xc);
        pGVar4 = (GameStateCafe *)operator_new(0x200);
        GameStateCafe::GameStateCafe(pGVar4);
        pGVar1 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar1,(GameState *)pGVar4);
        goto LAB_00191ab0;
      }
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x3c),*(long *)(*(int *)(this + 0xc) + iVar11),
                         extraout_s0_03,extraout_s1_02);
      if (iVar7 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_04);
        fVar15 = (float)setRankingWebWindow();
        goto LAB_00191bf0;
      }
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x40),*(long *)(*(int *)(this + 0xc) + iVar11),
                         extraout_s0_04,extraout_s1_03);
      if (iVar7 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_05);
        fVar15 = (float)setExplanationWebWindow();
        goto LAB_00191bf0;
      }
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x50),*(long *)(*(int *)(this + 0xc) + iVar11),
                         extraout_s0_05,extraout_s1_04);
      if (iVar7 == 0) {
        iVar12 = ZCImageButton::contains
                           (*(ZCImageButton **)(this + 0x4c),
                            *(long *)(*(int *)(this + 0xc) + iVar11),extraout_s0_06,extraout_s1_05);
        if (iVar12 == 0) {
          fVar15 = (float)javaHideWebViewRanking(0,0,1);
        }
        else {
          fVar15 = (float)javaHideWebViewRanking(0,0,1);
          ZombieCafe::playEffect(*(int *)(this + 0xc),fVar15);
          fVar15 = (float)getItemMain(this);
        }
        goto LAB_00191bf0;
      }
      fVar15 = (float)javaHideWebViewRanking(0,0,1);
      if (*(int *)(*(int *)(this + 0xc) + DAT_00191cd4) < 0x3e9) goto LAB_00191bf0;
      ZombieCafe::playEffect(*(int *)(this + 0xc),fVar15);
      if (this[0xc0] == (GameStateSurvivalMenu)0x0) {
        this[0xc0] = (GameStateSurvivalMenu)0x1;
        iVar11 = checkEndTime();
        if (iVar11 != 0) {
          pNVar9 = *(NoticeDialog **)(this + 0x34);
          String::String(aSStack_28,(char *)(DAT_00191d6c + 0x191d50));
          String::String(aSStack_20,(char *)(DAT_00191d70 + 0x191d5a));
          NoticeDialog::show(pNVar9,aSStack_28,aSStack_20,0,this);
          String::~String(aSStack_20);
          pSVar3 = aSStack_28;
          goto LAB_00191b98;
        }
      }
      pCVar10 = *(ConfirmDialog **)(this + 0x38);
      String::String(aSStack_40,(char *)(DAT_00191cd8 + 0x191b60));
      String::String(aSStack_38,(char *)(DAT_00191cdc + 0x191b6a));
      String::String(aSStack_30,(char *)(DAT_00191ce0 + 0x191b74));
      ConfirmDialog::show(pCVar10,aSStack_40,aSStack_38,aSStack_30,
                          *(undefined4 *)(iVar12 + DAT_00191ce4),this);
      String::~String(aSStack_30);
      String::~String(aSStack_38);
      pSVar3 = aSStack_40;
LAB_00191b98:
      fVar15 = (float)String::~String(pSVar3);
      goto LAB_00191bf0;
    }
    fVar15 = (float)javaHideWebViewRanking(0,0,1);
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar15);
    if (this[0xc0] == (GameStateSurvivalMenu)0x0) {
      this[0xc0] = (GameStateSurvivalMenu)0x1;
      iVar12 = checkEndTime();
      if (iVar12 != 0) {
        pNVar9 = *(NoticeDialog **)(this + 0x34);
        String::String(aSStack_50,(char *)(DAT_00191d64 + 0x191d38));
        String::String(aSStack_48,(char *)(DAT_00191d68 + 0x191d42));
        NoticeDialog::show(pNVar9,aSStack_50,aSStack_48,0,this);
        String::~String(aSStack_48);
        pSVar3 = aSStack_50;
        goto LAB_00191b98;
      }
    }
    pCVar13 = *(CapcomGame **)(this + 0xc);
    this_01 = (GameStateColosseum *)operator_new(0x150);
    GameStateColosseum::GameStateColosseum(this_01);
    pGVar1 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar1,(GameState *)this_01);
  }
LAB_00191ab0:
  fVar15 = (float)CapcomGame::setNextState(pCVar13,(GameState *)pGVar1);
LAB_00191bf0:
  if (*(char *)(*(int *)(this + 0xc) + DAT_00191ce8) != '\0') {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_00191ce8) = 0;
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar15);
    pCVar13 = *(CapcomGame **)(this + 0xc);
    pGVar4 = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(pGVar4);
    pGVar1 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar1,(GameState *)pGVar4);
    CapcomGame::setNextState(pCVar13,(GameState *)pGVar1);
    javaHideWebViewRanking(0,0,1);
  }
  return;
}


