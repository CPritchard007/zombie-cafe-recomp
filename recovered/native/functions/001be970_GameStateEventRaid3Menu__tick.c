/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001be970 GameStateEventRaid3Menu::tick */

/* GameStateEventRaid3Menu::tick(long) */

void __thiscall GameStateEventRaid3Menu::tick(GameStateEventRaid3Menu *this,long param_1)

{
  GameStateMainMenu *pGVar1;
  GameStateLoading *pGVar2;
  int iVar3;
  int *piVar4;
  GameStateEventRaid3 *this_00;
  int iVar5;
  String *this_01;
  GameStateCafe *pGVar6;
  code *pcVar7;
  int iVar8;
  CapcomGame *pCVar9;
  GameStateEventRaid3Menu *pGVar10;
  NoticeDialog *pNVar11;
  undefined4 extraout_s0;
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
  float fVar12;
  float extraout_s0_12;
  float extraout_s0_13;
  float extraout_s0_14;
  float extraout_s0_15;
  undefined4 extraout_s1;
  undefined8 uVar13;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  float extraout_s1_09;
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
  pCVar9 = *(CapcomGame **)(this + 0xc);
  iVar8 = DAT_001becbc + 0x1be992;
  if (pCVar9[DAT_001becb8] == (CapcomGame)0x0) {
    pGVar1 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar1);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
LAB_001be9fc:
    CapcomGame::setNextState(pCVar9,(GameState *)pGVar2);
    return;
  }
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  if (*(char *)(*(int *)(this + 0x48) + 0x14) != '\0') {
    return;
  }
  if (*(char *)(*(int *)(this + 0x4c) + 0x14) != '\0') {
    return;
  }
  if (*(char *)(*(int *)(this + 0x50) + 0x14) != '\0') {
    return;
  }
  pCVar9 = *(CapcomGame **)(this + 0xc);
  if (**(char **)(iVar8 + DAT_001bf06c) == '\0') {
    pGVar1 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar1);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
    goto LAB_001be9fc;
  }
  iVar3 = ZombieCafe::checkEventRaid3Time();
  uVar13 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar3 != 0) {
    iVar3 = ZombieCafe::checkGlobalPlayTime(SUB41(*(undefined4 *)(this + 0xc),0));
    if (iVar3 != 0) {
      piVar4 = *(int **)(this + 0xa0);
      pcVar7 = *(code **)(*piVar4 + 0x20);
    }
    else {
      piVar4 = *(int **)(this + 0xa0);
      pcVar7 = *(code **)(*piVar4 + 0x20);
    }
    uVar13 = (*pcVar7)(piVar4,iVar3 == 0);
  }
  pGVar10 = this + 0xc4;
  iVar3 = *(int *)pGVar10;
  if (iVar3 == 0) {
    Layout_EventRaid3Init(this);
    uVar13 = loadInfo((void *)**(undefined4 **)(iVar8 + DAT_001becc0),this);
    *(undefined4 *)pGVar10 = 1;
  }
  else if (iVar3 == 1) {
    uVar13 = drawConnectWindow(this,param_1);
    if (*(int *)(this + 0xdc) == 3) {
      pNVar11 = *(NoticeDialog **)(this + 0x48);
      String::String(aSStack_88,(char *)(DAT_001becc4 + 0x1bea74));
      String::String(aSStack_80,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                     **(int **)(iVar8 + DAT_001becc8) * 8));
      NoticeDialog::show(pNVar11,aSStack_88,aSStack_80,*(undefined4 *)(iVar8 + DAT_001beccc),this);
      String::~String(aSStack_80);
      uVar13 = String::~String(aSStack_88);
      *(undefined4 *)(this + 0xc4) = 2;
    }
    else if (*(int *)(this + 0xdc) == 2) {
      *(undefined4 *)pGVar10 = 4;
      uVar13 = Layout_AutoDefault(this);
    }
  }
  else if (iVar3 != 2) {
    pCVar9 = *(CapcomGame **)(this + 0xc);
    if (iVar3 == 3) {
      pGVar6 = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(pGVar6);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar6);
      uVar13 = CapcomGame::setNextState(pCVar9,(GameState *)pGVar2);
    }
    else if (iVar3 == 4) {
      iVar3 = ZombieCafe::getEventRaid3_attackPointTimer((ZombieCafe *)pCVar9);
      if (iVar3 < 1) {
        iVar3 = ZombieCafe::checkEventRaid3Time();
        if (iVar3 != 0) {
          iVar3 = 0;
        }
        (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),iVar3);
      }
      else {
        drawReOpenTimer(this);
      }
      uVar13 = Layout_GetItemButton(this);
      if (**(int **)(iVar8 + DAT_001becd0) == 1) {
        uVar13 = drawEventRaid3Soul(this);
      }
    }
    else if (iVar3 == 5) {
      if (*(char *)(*(int *)(this + 0x88) + 0x14) != '\0') {
        ZombieCafe::getEventRaid3_bonusRate();
      }
      ZombieCafe::subEventRaid3_attackPoint(*(ZombieCafe **)(this + 0xc));
      pCVar9 = *(CapcomGame **)(this + 0xc);
      this_00 = (GameStateEventRaid3 *)operator_new(0x164);
      GameStateEventRaid3::GameStateEventRaid3(this_00,*(int *)(this + 200),extraout_s0_00);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_00);
      goto LAB_001be9fc;
    }
  }
  fVar12 = (float)uVar13;
  if ((((*(int *)(this + 0xc4) != 4) || (*(char *)(*(int *)(this + 0x48) + 0x14) != '\0')) ||
      (*(char *)(*(int *)(this + 0x4c) + 0x14) != '\0')) ||
     (((*(char *)(*(int *)(this + 0x50) + 0x14) != '\0' ||
       (iVar3 = *(int *)(this + 0xc), *(char *)(iVar3 + DAT_001becd4) != '\0')) ||
      ((*(long *)(iVar3 + DAT_001becd8) == 0 ||
       ((*(int *)(iVar3 + 0x4b8) != 0 ||
        ((int)**(short **)(iVar8 + DAT_001becdc) < *(int *)(iVar3 + DAT_001bece0)))))))))
  goto LAB_001bef34;
  iVar3 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0x68),*(long *)(iVar3 + DAT_001becd8),fVar12,
                     (float)((ulonglong)uVar13 >> 0x20));
  if ((iVar3 == 0) &&
     (((iVar5 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x6c),
                           *(long *)(*(int *)(this + 0xc) + DAT_001becd8),extraout_s0_01,
                           extraout_s1_00), iVar3 = DAT_001becd8, iVar5 == 0 &&
       (iVar5 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x70),
                           *(long *)(*(int *)(this + 0xc) + DAT_001becd8),extraout_s0_02,
                           extraout_s1_01), iVar5 == 0)) &&
      (iVar5 = ZCImageButton::contains
                         (*(ZCImageButton **)(this + 0x74),*(long *)(*(int *)(this + 0xc) + iVar3),
                          extraout_s0_03,extraout_s1_02), iVar5 == 0)))) {
    iVar8 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x5c),*(long *)(*(int *)(this + 0xc) + iVar3),
                       extraout_s0_04,extraout_s1_03);
    if (iVar8 == 0) {
      iVar8 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x54),*(long *)(*(int *)(this + 0xc) + iVar3),
                         extraout_s0_15,extraout_s1_09);
      if (iVar8 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_12);
        fVar12 = (float)setRankingWebWindow(this);
        goto LAB_001bef34;
      }
      iVar8 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x58),*(long *)(*(int *)(this + 0xc) + iVar3),
                         extraout_s0_12,extraout_s1_07);
      if (iVar8 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_13);
        fVar12 = (float)setExplanationWebWindow(this);
        goto LAB_001bef34;
      }
      iVar8 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 100),*(long *)(*(int *)(this + 0xc) + iVar3),
                         extraout_s0_13,extraout_s1_08);
      if (iVar8 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_14);
        getItemMain(this);
        fVar12 = (float)Layout_Default(this);
        goto LAB_001bef34;
      }
      fVar12 = extraout_s0_14;
      if (this[0xe0] == (GameStateEventRaid3Menu)0x0) goto LAB_001bef34;
      this[0xe0] = (GameStateEventRaid3Menu)0x0;
    }
    else {
      if (this[0xe0] == (GameStateEventRaid3Menu)0x0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_15);
        pCVar9 = *(CapcomGame **)(this + 0xc);
        pGVar6 = (GameStateCafe *)operator_new(0x200);
        GameStateCafe::GameStateCafe(pGVar6);
        pGVar2 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar6);
        fVar12 = (float)CapcomGame::setNextState(pCVar9,(GameState *)pGVar2);
        goto LAB_001bef34;
      }
      this[0xe0] = (GameStateEventRaid3Menu)0x0;
    }
    fVar12 = (float)javaHideWebViewRanking(0,0,1);
    goto LAB_001bef34;
  }
  iVar3 = ZombieCafe::haveZombiesCafeAll(*(ZombieCafe **)(this + 0xc));
  if (iVar3 == 0) {
    pNVar11 = *(NoticeDialog **)(this + 0x48);
    String::String(aSStack_78,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                   **(int **)(iVar8 + DAT_001bece4) * 8));
    String::String(aSStack_70,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                   **(int **)(iVar8 + DAT_001becc8) * 8));
    NoticeDialog::show(pNVar11,aSStack_78,aSStack_70,0,this);
    String::~String(aSStack_70);
    String::~String(aSStack_78);
    return;
  }
  fVar12 = extraout_s0_05;
  if (this[0xec] == (GameStateEventRaid3Menu)0x0) {
    this[0xec] = (GameStateEventRaid3Menu)0x1;
    iVar8 = checkEndTimeWarning();
    fVar12 = extraout_s0_06;
    if (iVar8 == 0) goto LAB_001bece8;
    iVar8 = checkEndTime();
    pNVar11 = *(NoticeDialog **)(this + 0x48);
    if (iVar8 != 0) {
      String::String(aSStack_38,(char *)(DAT_001bf060 + 0x1bee18));
      String::String(aSStack_30,(char *)(DAT_001bf064 + 0x1bee22));
      NoticeDialog::show(pNVar11,aSStack_38,aSStack_30,0,this);
      String::~String(aSStack_30);
      fVar12 = (float)String::~String(aSStack_38);
      *(undefined4 *)(this + 0xc4) = 0;
      goto LAB_001bef34;
    }
    String::String(aSStack_28,(char *)(DAT_001bf08c + 0x1bf078));
    String::String(aSStack_20,(char *)(DAT_001bf090 + 0x1bf082));
    NoticeDialog::show(pNVar11,aSStack_28,aSStack_20,0,this);
    String::~String(aSStack_20);
    this_01 = aSStack_28;
  }
  else {
LAB_001bece8:
    uVar13 = ZombieCafe::playEffect(*(int *)(this + 0xc),fVar12);
    iVar8 = DAT_001bf044;
    iVar3 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x68),
                       *(long *)(*(int *)(this + 0xc) + DAT_001bf044),(float)uVar13,
                       (float)((ulonglong)uVar13 >> 0x20));
    if (iVar3 != 0) {
      iVar8 = 0;
LAB_001bedd6:
      iVar8 = selectButtom(this,iVar8);
      fVar12 = extraout_s0_11;
      if (iVar8 == 0) {
        return;
      }
      goto LAB_001bef34;
    }
    iVar3 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x6c),*(long *)(*(int *)(this + 0xc) + iVar8),
                       extraout_s0_07,extraout_s1_04);
    if (iVar3 == 0) {
      iVar3 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x70),*(long *)(*(int *)(this + 0xc) + iVar8),
                         extraout_s0_08,extraout_s1_05);
      if (iVar3 == 0) {
        iVar8 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x74),*(long *)(*(int *)(this + 0xc) + iVar8),
                           extraout_s0_09,extraout_s1_06);
        fVar12 = extraout_s0_10;
        if (iVar8 == 0) goto LAB_001bef34;
        if (*(char *)(*(int *)(this + 0x74) + 0x86) != '\0') {
          iVar8 = 3;
          goto LAB_001bedd6;
        }
        pNVar11 = *(NoticeDialog **)(this + 0x48);
        String::String(aSStack_48,(char *)(DAT_001bf058 + 0x1bedec));
        String::String(aSStack_40,(char *)(DAT_001bf05c + 0x1bedf6));
        NoticeDialog::show(pNVar11,aSStack_48,aSStack_40,0,this);
        String::~String(aSStack_40);
        this_01 = aSStack_48;
      }
      else {
        if (*(char *)(*(int *)(this + 0x70) + 0x86) != '\0') {
          iVar8 = 2;
          goto LAB_001bedd6;
        }
        pNVar11 = *(NoticeDialog **)(this + 0x48);
        String::String(aSStack_58,(char *)(DAT_001bf050 + 0x1bed8e));
        String::String(aSStack_50,(char *)(DAT_001bf054 + 0x1bed98));
        NoticeDialog::show(pNVar11,aSStack_58,aSStack_50,0,this);
        String::~String(aSStack_50);
        this_01 = aSStack_58;
      }
    }
    else {
      if (*(char *)(*(int *)(this + 0x6c) + 0x86) != '\0') {
        iVar8 = 1;
        goto LAB_001bedd6;
      }
      pNVar11 = *(NoticeDialog **)(this + 0x48);
      String::String(aSStack_68,(char *)(DAT_001bf048 + 0x1bed3c));
      String::String(aSStack_60,(char *)(DAT_001bf04c + 0x1bed46));
      NoticeDialog::show(pNVar11,aSStack_68,aSStack_60,0,this);
      String::~String(aSStack_60);
      this_01 = aSStack_68;
    }
  }
  fVar12 = (float)String::~String(this_01);
LAB_001bef34:
  if (*(char *)(*(int *)(this + 0xc) + DAT_001bf068) != '\0') {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_001bf068) = 0;
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar12);
    pCVar9 = *(CapcomGame **)(this + 0xc);
    pGVar6 = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(pGVar6);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar6);
    CapcomGame::setNextState(pCVar9,(GameState *)pGVar2);
    this[0xe0] = (GameStateEventRaid3Menu)0x0;
    javaHideWebViewRanking(0,0,1);
  }
  return;
}


