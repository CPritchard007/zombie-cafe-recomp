/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cdd20 GameStateChangeHard::tick */

/* GameStateChangeHard::tick(long) */

void __thiscall GameStateChangeHard::tick(GameStateChangeHard *this,long param_1)

{
  byte bVar1;
  size_t sVar2;
  JSONTakeOverData *pJVar3;
  char *pcVar4;
  GameStateLoading *pGVar5;
  void *pvVar6;
  int iVar7;
  String *this_00;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  GameStateChangeHard *pGVar15;
  NoticeDialog *pNVar16;
  ZombieCafe *pZVar17;
  code *pcVar18;
  GameStateMainMenu *pGVar19;
  CapcomGame *pCVar20;
  char *pcVar21;
  int *piVar22;
  float fVar23;
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
  float extraout_s0_12;
  float extraout_s0_13;
  float extraout_s0_14;
  float extraout_s0_15;
  float extraout_s0_16;
  float extraout_s0_17;
  float extraout_s0_18;
  float extraout_s0_19;
  float extraout_s0_20;
  undefined4 extraout_s1;
  undefined8 uVar24;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  float extraout_s1_09;
  float extraout_s1_10;
  float extraout_s1_11;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar9 = DAT_001ce088;
  fVar23 = (float)(**(code **)(**(int **)(this + 0x14) + 8))();
  pGVar19 = (GameStateMainMenu *)(iVar9 + 0x1cdd38);
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + param_1;
  if (*(char *)(*(int *)(this + 0x90) + 0x14) != '\0') {
    fVar23 = (float)FUN_001ce72e();
  }
  bVar1 = *(byte *)(*(int *)(this + 0xa4) + 0x14);
  if (bVar1 != 0) {
    fVar23 = (float)FUN_001ce72e();
  }
  pGVar15 = this + 0xc0;
  iVar9 = *(int *)pGVar15;
  if (iVar9 == 0) {
    uVar10 = 1;
LAB_001cdf50:
    *(undefined4 *)pGVar15 = uVar10;
    FUN_001ce674();
    return;
  }
  if (iVar9 == 1) {
    iVar9 = 2;
    *(undefined4 *)pGVar15 = 2;
    layout_mode_select(this);
    fVar23 = (float)FUN_001ce674();
  }
  if (iVar9 == 2) {
    pZVar17 = *(ZombieCafe **)(this + 0xc);
    iVar9 = ZombieCafe::touchUpEvent(pZVar17);
    uVar24 = CONCAT44(extraout_s1,extraout_s0);
    if (iVar9 == 0) {
      uVar24 = FUN_001ce674();
    }
    if ((int)**(short **)(pGVar19 + DAT_001ce08c) < *(int *)(pZVar17 + DAT_001ce090)) {
      uVar24 = FUN_001ce674();
    }
    iVar9 = DAT_001ce094;
    iVar7 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x5c),*(long *)(pZVar17 + DAT_001ce094),
                       (float)uVar24,(float)((ulonglong)uVar24 >> 0x20));
    uVar24 = CONCAT44(extraout_s1_00,extraout_s0_00);
    iVar11 = *(int *)(this + 0xc);
    if (iVar7 != 0) {
      ZombieCafe::playEffect(iVar11,extraout_s0_00);
      iVar9 = *(int *)(this + 0xc);
      pGVar19 = (GameStateMainMenu *)operator_new(0x154);
      GameStateMainMenu::GameStateMainMenu(pGVar19);
      pGVar5 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar19);
      uVar24 = FUN_001ce66c();
    }
    iVar7 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x40),*(long *)(iVar11 + iVar9),(float)uVar24,
                       (float)((ulonglong)uVar24 >> 0x20));
    uVar24 = CONCAT44(extraout_s1_01,extraout_s0_01);
    puVar12 = *(undefined4 **)(this + 0xc);
    if (iVar7 != 0) {
      ZombieCafe::playEffect((int)puVar12,extraout_s0_01);
      sVar2 = strlen(*(char **)(pGVar19 + DAT_001ce098));
      pGVar15 = this;
      if (sVar2 < 3) {
        pNVar16 = *(NoticeDialog **)(this + 0xa4);
        String::String(aSStack_38,(char *)(DAT_001ce09c + 0x1cde1c));
        String::String(aSStack_30,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                       **(int **)(pGVar19 + DAT_001ce0a0) * 8));
        pGVar15 = (GameStateChangeHard *)0x0;
        NoticeDialog::show(pNVar16,aSStack_38,aSStack_30,0,this);
        String::~String(aSStack_30);
        String::~String(aSStack_38);
        FUN_001ce72e();
      }
      *(undefined4 *)(pGVar15 + 0xc0) = 3;
      puVar12 = *(undefined4 **)(pGVar19 + DAT_001ce0a4);
      setTransferInfo((void *)*puVar12,this);
      uVar24 = FUN_001ce674();
    }
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x50),*(long *)((int)puVar12 + iVar9),
                       (float)uVar24,(float)((ulonglong)uVar24 >> 0x20));
    fVar23 = extraout_s0_02;
    if (iVar9 == 0) {
      fVar23 = (float)FUN_001ce674();
    }
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar23);
    uVar10 = 0x14;
    goto LAB_001ce5be;
  }
  if (iVar9 == 3) {
    layout_passward_output(this);
    *(undefined4 *)pGVar15 = 4;
    *(uint *)(this + 0x20) = (uint)bVar1;
LAB_001ce25c:
    clearTextTimer(this);
    FUN_001ce674();
    return;
  }
  if (iVar9 == 4) {
    autoTextTimer();
    if (*(int *)(this + 0x20) <= DAT_001ce0a8) {
      FUN_001ce674();
    }
    if (*(int *)(this + 0xcc) != 2) {
      if (*(int *)(this + 0xcc) != 3) {
        FUN_001ce674();
        return;
      }
      *(undefined4 *)(this + 0xc0) = 99;
      layout_output_faild(this);
      pcVar4 = (char *)(DAT_001ce0c4 + 0x1cdf30);
      pcVar8 = (char *)(DAT_001ce0c8 + 0x1cdf32);
LAB_001ce20a:
      L_PrintLog(pcVar4,pcVar8);
      FUN_001ce674();
      return;
    }
    L_PrintLog((char *)(DAT_001ce0ac + 0x1cded0),(char *)(DAT_001ce0b0 + 0x1cded2));
    pJVar3 = (JSONTakeOverData *)JSONTakeOverData::getInstance();
    iVar9 = JSONTakeOverData::SetCode(pJVar3);
    if (199 < iVar9) {
      L_PrintLog((char *)(DAT_001ce0b4 + 0x1cdeea),(char *)(DAT_001ce0b8 + 0x1cdeec));
      *(undefined4 *)(this + 0xc0) = 5;
      layout_passward_output_faild((int)this);
      FUN_001ce674();
      return;
    }
    L_PrintLog((char *)(DAT_001ce0bc + 0x1cdf08),(char *)(DAT_001ce0c0 + 0x1cdf0a));
    uVar10 = 6;
    goto LAB_001ce5be;
  }
  if (iVar9 == 6) {
    *(undefined4 *)pGVar15 = 7;
    pGVar15 = this + 0xcc;
    *(undefined4 *)pGVar15 = 1;
    iVar9 = changeHard_UploadData(this);
    if (iVar9 != 0) {
      FUN_001ce674();
      return;
    }
    uVar10 = 3;
    goto LAB_001cdf50;
  }
  if (iVar9 == 7) {
    if (*(int *)(this + 0xcc) != 2) {
      if (*(int *)(this + 0xcc) != 3) {
        FUN_001ce674();
        return;
      }
      L_PrintLog((char *)(DAT_001ce0dc + 0x1cdfac),(char *)(DAT_001ce0e0 + 0x1cdfae));
      *(undefined4 *)(this + 0xc0) = 99;
      layout_savedataUpload_faild(this);
      FUN_001ce674();
      return;
    }
    pcVar4 = (char *)(DAT_001ce0cc + 0x1cdf6a);
    L_PrintLog(pcVar4,(char *)(DAT_001ce0d0 + 0x1cdf6c));
    pJVar3 = (JSONTakeOverData *)JSONTakeOverData::getInstance();
    JSONTakeOverData::SetCode(pJVar3);
    L_PrintLog(pcVar4,(char *)(DAT_001ce0d4 + 0x1cdf82));
    layout_passward_draw((int)this);
    L_PrintLog(pcVar4,(char *)(DAT_001ce0d8 + 0x1cdf94));
    uVar10 = 8;
    goto LAB_001ce5be;
  }
  if (iVar9 == 8) {
    pZVar17 = *(ZombieCafe **)(this + 0xc);
    iVar9 = ZombieCafe::touchUpEvent(pZVar17);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    if ((int)**(short **)(pGVar19 + DAT_001ce08c) < *(int *)(pZVar17 + DAT_001ce090)) {
      FUN_001ce674();
      return;
    }
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x5c),*(long *)(pZVar17 + DAT_001ce094),
                       extraout_s0_03,extraout_s1_02);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_04);
    pGVar19 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar19);
    pGVar5 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar19);
    FUN_001ce66c();
    return;
  }
  if (iVar9 == 10) {
    pZVar17 = *(ZombieCafe **)(this + 0xc);
    iVar9 = ZombieCafe::touchUpEvent(pZVar17);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    if ((int)**(short **)(pGVar19 + DAT_001ce08c) < *(int *)(pZVar17 + DAT_001ce090)) {
      FUN_001ce674();
      return;
    }
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x5c),*(long *)(pZVar17 + DAT_001ce094),
                       extraout_s0_05,extraout_s1_03);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_06);
    pGVar19 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar19);
    pGVar5 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar19);
    FUN_001ce66c();
    return;
  }
  if (iVar9 == 5) {
    pZVar17 = *(ZombieCafe **)(this + 0xc);
    iVar9 = ZombieCafe::touchUpEvent(pZVar17);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    if ((int)**(short **)(pGVar19 + DAT_001ce43c) < *(int *)(pZVar17 + DAT_001ce440)) {
      FUN_001ce674();
      return;
    }
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x5c),*(long *)(pZVar17 + DAT_001ce444),
                       extraout_s0_07,extraout_s1_04);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_08);
    pGVar19 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar19);
    pGVar5 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar19);
    FUN_001ce66c();
    return;
  }
  if (iVar9 == 0x14) {
    layout_passward_input(this);
    *(undefined4 *)(this + 0xc0) = 0x15;
    **(undefined4 **)(pGVar19 + DAT_001ce448) = 0;
    javaEnterMigrationPassword();
    FUN_001ce674();
    return;
  }
  if (iVar9 == 0x15) {
    iVar9 = **(int **)(pGVar19 + DAT_001ce448);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    if (iVar9 != 1) {
      if (iVar9 != 2) {
        FUN_001ce674();
        return;
      }
      pGVar19 = (GameStateMainMenu *)operator_new(0x154);
      GameStateMainMenu::GameStateMainMenu(pGVar19);
      pGVar5 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar19);
      FUN_001ce66c();
      return;
    }
    pcVar21 = *(char **)(pGVar19 + DAT_001ce44c);
    String::operator=((String *)(this + 0x70),pcVar21);
    pcVar13 = *(char **)(pGVar19 + DAT_001ce450);
    String::operator=((String *)(this + 0x78),pcVar13);
    pcVar14 = *(char **)(pGVar19 + DAT_001ce454);
    String::operator=((String *)(this + 0x80),pcVar14);
    pcVar8 = *(char **)(pGVar19 + DAT_001ce458);
    String::operator=((String *)(this + 0x88),pcVar8);
    pcVar4 = (char *)(DAT_001ce45c + 0x1ce1f0);
    *(uint *)(this + 0xc0) =
         0x17 - (uint)((int)*(short *)(this + 0x76) + (int)*(short *)(this + 0x7e) +
                       (int)*(short *)(this + 0x86) + (int)*(short *)(this + 0x8e) != 0x10);
    L_PrintLog(pcVar4,pcVar21);
    L_PrintLog(pcVar4,pcVar13);
    L_PrintLog(pcVar4,pcVar14);
    goto LAB_001ce20a;
  }
  if (iVar9 == 0x16) {
LAB_001ce32a:
    *(undefined4 *)(this + 0xc0) = 99;
LAB_001ce334:
    layout_output_comm_error(this);
    FUN_001ce674();
    return;
  }
  if (iVar9 == 0x17) {
    layout_passward_upload(this);
    getTransferInfo((void *)**(undefined4 **)(pGVar19 + DAT_001ce460),this);
    *(undefined4 *)(this + 0xc0) = 0x18;
    *(undefined4 *)(this + 0x20) = 0;
    goto LAB_001ce25c;
  }
  if (iVar9 == 0x18) {
    autoTextTimer();
    if (*(int *)(this + 0x20) <= DAT_001ce464) {
      FUN_001ce674();
      return;
    }
    if (*(int *)(this + 0xcc) == 2) {
      pJVar3 = (JSONTakeOverData *)JSONTakeOverData::getInstance();
      iVar9 = JSONTakeOverData::GetCode(pJVar3);
      uVar10 = 0x19;
      if (iVar9 < 0xd2) goto LAB_001ce5be;
      *(undefined4 *)(this + 0xc0) = 99;
LAB_001ce2be:
      layout_passward_error_draw(this,iVar9);
      FUN_001ce674();
      return;
    }
    if (*(int *)(this + 0xcc) != 3) {
      FUN_001ce674();
      return;
    }
    pJVar3 = (JSONTakeOverData *)JSONTakeOverData::getInstance();
    iVar9 = JSONTakeOverData::GetCode(pJVar3);
    *(undefined4 *)(this + 0xc0) = 99;
    if (0xd1 < iVar9) goto LAB_001ce2be;
    goto LAB_001ce334;
  }
  if (iVar9 == 0x19) {
    changeHard_DownloadData(this);
    uVar10 = 0x1a;
    goto LAB_001ce5be;
  }
  if (iVar9 == 0x1a) {
    if (*(int *)(this + 0xcc) != 2) {
      if (*(int *)(this + 0xcc) != 3) {
        FUN_001ce674();
        return;
      }
      *(undefined4 *)(this + 0xc0) = 99;
      layout_download_savedata_error(this);
      FUN_001ce674();
      return;
    }
    *(undefined4 *)(this + 0xc0) = 0x1b;
    iVar9 = 1;
    pvVar6 = (void *)**(undefined4 **)(pGVar19 + DAT_001ce460);
LAB_001ce422:
    logTransferInfo(pvVar6,this,iVar9);
    FUN_001ce674();
    return;
  }
  if (iVar9 == 0x1b) {
    if (*(int *)(this + 0xcc) == 2) {
      uVar10 = 0x1c;
      goto LAB_001ce5be;
    }
    if (*(int *)(this + 0xcc) != 3) {
      FUN_001ce674();
      return;
    }
    goto LAB_001ce32a;
  }
  if (iVar9 == 0x1c) {
    layout_lastKakunin(this);
    uVar10 = 0x1d;
LAB_001ce5be:
    *(undefined4 *)(this + 0xc0) = uVar10;
    FUN_001ce674();
    return;
  }
  if (iVar9 == 0x1d) {
    pZVar17 = *(ZombieCafe **)(this + 0xc);
    iVar7 = ZombieCafe::touchUpEvent(pZVar17);
    iVar9 = DAT_001ce444;
    if (iVar7 == 0) {
      FUN_001ce674();
      return;
    }
    if ((int)**(short **)(pGVar19 + DAT_001ce43c) < *(int *)(pZVar17 + DAT_001ce440)) {
      FUN_001ce674();
      return;
    }
    iVar7 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x68),*(long *)(pZVar17 + DAT_001ce444),
                       extraout_s0_09,extraout_s1_05);
    if (iVar7 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_10);
      layout_Cancel(this);
      *(undefined4 *)(this + 0xc0) = 0x61;
      iVar9 = 4;
      pvVar6 = (void *)**(undefined4 **)(pGVar19 + DAT_001ce460);
      goto LAB_001ce422;
    }
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x60),*(long *)(*(int *)(this + 0xc) + iVar9),
                       extraout_s0_10,extraout_s1_06);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_11);
    changeHard_changeUserData();
    uVar10 = 0x1e;
    goto LAB_001ce5be;
  }
  if (iVar9 == 0x1e) {
    L_PrintLog((char *)(DAT_001ce468 + 0x1ce3e2),(char *)(DAT_001ce46c + 0x1ce3e4));
    gotTransferInfo((void *)**(undefined4 **)(pGVar19 + DAT_001ce460),this,1);
    uVar10 = 0x1f;
    goto LAB_001ce5be;
  }
  if (iVar9 == 0x1f) {
    if (*(int *)(this + 0xcc) == 2) {
      layout_Complete(this);
      *(undefined4 *)(this + 0xc0) = 0x20;
      iVar9 = 3;
      pvVar6 = (void *)**(undefined4 **)(pGVar19 + DAT_001ce460);
      goto LAB_001ce422;
    }
    if (*(int *)(this + 0xcc) != 3) {
      FUN_001ce674();
      return;
    }
    layout_Complete(this);
    uVar10 = 0x20;
    goto LAB_001ce5be;
  }
  if (iVar9 == 0x20) {
    pZVar17 = *(ZombieCafe **)(this + 0xc);
    iVar9 = ZombieCafe::touchUpEvent(pZVar17);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    if ((int)**(short **)(pGVar19 + DAT_001ce734) < *(int *)(pZVar17 + DAT_001ce738)) {
      FUN_001ce674();
      return;
    }
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x60),*(long *)(pZVar17 + DAT_001ce73c),
                       extraout_s0_12,extraout_s1_07);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_13);
    pGVar19 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar19);
    pGVar5 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar19);
    FUN_001ce66c();
    return;
  }
  if (iVar9 == 0x61) {
    if (1 < *(int *)(this + 0xcc) - 2U) {
      FUN_001ce674();
      return;
    }
    pZVar17 = *(ZombieCafe **)(this + 0xc);
    iVar9 = ZombieCafe::touchUpEvent(pZVar17);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    if ((int)**(short **)(pGVar19 + DAT_001ce734) < *(int *)(pZVar17 + DAT_001ce738)) {
      FUN_001ce674();
      return;
    }
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x60),*(long *)(pZVar17 + DAT_001ce73c),
                       extraout_s0_14,extraout_s1_08);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_15);
    pGVar19 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar19);
    pGVar5 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar19);
    FUN_001ce66c();
    return;
  }
  if (iVar9 == 99) {
    pZVar17 = *(ZombieCafe **)(this + 0xc);
    iVar9 = ZombieCafe::touchUpEvent(pZVar17);
    if (iVar9 == 0) {
      FUN_001ce674();
      return;
    }
    if ((int)**(short **)(pGVar19 + DAT_001ce734) < *(int *)(pZVar17 + DAT_001ce738)) {
      FUN_001ce674();
      return;
    }
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x5c),*(long *)(pZVar17 + DAT_001ce73c),
                       extraout_s0_16,extraout_s1_09);
    fVar23 = extraout_s0_17;
    if (iVar9 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_17);
      pGVar19 = (GameStateMainMenu *)operator_new(0x154);
      GameStateMainMenu::GameStateMainMenu(pGVar19);
      pGVar5 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar19);
      FUN_001ce66c();
      return;
    }
  }
  else {
    if (iVar9 == 0x5f) {
      clearTransferInfo((void *)**(undefined4 **)(pGVar19 + DAT_001ce740),this);
      uVar10 = 0x60;
      goto LAB_001ce5be;
    }
    if (iVar9 != 0x60) goto code_r0x001ce674;
    if (*(int *)(this + 0xcc) == 2) {
      piVar22 = *(int **)(this + 0x34);
      pcVar18 = *(code **)(*piVar22 + 0x44);
      String::String(aSStack_28,(char *)(DAT_001ce744 + 0x1ce5dc));
      (*pcVar18)(piVar22,aSStack_28);
      this_00 = aSStack_28;
LAB_001ce606:
      String::~String(this_00);
    }
    else if (*(int *)(this + 0xcc) == 3) {
      piVar22 = *(int **)(this + 0x34);
      pcVar18 = *(code **)(*piVar22 + 0x44);
      String::String(aSStack_20,(char *)(DAT_001ce748 + 0x1ce5fa));
      (*pcVar18)(piVar22,aSStack_20);
      this_00 = aSStack_20;
      goto LAB_001ce606;
    }
    pZVar17 = *(ZombieCafe **)(this + 0xc);
    iVar7 = ZombieCafe::touchUpEvent(pZVar17);
    iVar9 = DAT_001ce73c;
    fVar23 = extraout_s0_18;
    if (((iVar7 != 0) &&
        (*(int *)(pZVar17 + DAT_001ce738) <= (int)**(short **)(pGVar19 + DAT_001ce734))) &&
       ((iVar7 = ZCImageButton::contains
                           (*(ZCImageButton **)(this + 0x5c),*(long *)(pZVar17 + DAT_001ce73c),
                            extraout_s0_18,extraout_s1_10), iVar7 != 0 ||
        (iVar9 = ZCImageButton::contains
                           (*(ZCImageButton **)(this + 0x60),*(long *)(*(int *)(this + 0xc) + iVar9)
                            ,extraout_s0_19,extraout_s1_11), fVar23 = extraout_s0_20, iVar9 != 0))))
    {
      pCVar20 = *(CapcomGame **)(this + 0xc);
      pGVar19 = (GameStateMainMenu *)operator_new(0x154);
      GameStateMainMenu::GameStateMainMenu(pGVar19);
      pGVar5 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar19);
      fVar23 = (float)CapcomGame::setNextState(pCVar20,(GameState *)pGVar5);
    }
  }
code_r0x001ce674:
  if (*(char *)(*(int *)(this + 0xc) + DAT_001ce74c) == '\0') {
    return;
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_001ce74c) = 0;
  iVar9 = *(int *)(this + 0xc0);
  if (iVar9 != 8) {
    if (iVar9 < 9) {
      if ((iVar9 == 2) || (iVar9 == 5)) goto LAB_001ce712;
    }
    else if (((iVar9 == 0x20) || (iVar9 == 99)) || (iVar9 == 10)) goto LAB_001ce712;
    return;
  }
LAB_001ce712:
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar23);
  pCVar20 = *(CapcomGame **)(this + 0xc);
  pGVar19 = (GameStateMainMenu *)operator_new(0x154);
  GameStateMainMenu::GameStateMainMenu(pGVar19);
  pGVar5 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar19);
  CapcomGame::setNextState(pCVar20,(GameState *)pGVar5);
  FUN_001ce72e();
  return;
}


