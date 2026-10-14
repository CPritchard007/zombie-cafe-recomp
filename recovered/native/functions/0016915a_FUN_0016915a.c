/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016915a FUN_0016915a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016915a(void)

{
  GameStateRaid *pGVar1;
  GameStateLoading *pGVar2;
  int iVar3;
  GameStateAmpouleRaidMenu *this;
  GameStateEventRaid3Menu *this_00;
  GameStateEventRaid2Menu *this_01;
  GameStateEventRaidMenu *this_02;
  GameStateWeekRaidMenu *this_03;
  GameStateSurvivalMenu *this_04;
  String *this_05;
  GameStateCafe *this_06;
  int iVar4;
  ConfirmDialog *pCVar5;
  code *pcVar6;
  int *unaff_r5;
  int unaff_r6;
  CapcomGame *this_07;
  int unaff_r7;
  NoticeDialog *pNVar7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  undefined4 extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float fVar8;
  float extraout_s0_09;
  undefined8 uVar9;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined4 extraout_s1_06;
  CapcomGame *pCStack00000018;
  int in_stack_000002a4;
  byte in_stack_000002a8;
  
  pCStack00000018 = (CapcomGame *)unaff_r5[3];
  pGVar1 = (GameStateRaid *)operator_new(0x18c);
  GameStateRaid::GameStateRaid(pGVar1,in_stack_000002a4,(uint)in_stack_000002a8,false,false);
  pGVar2 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
  CapcomGame::setNextState(pCStack00000018,(GameState *)pGVar2);
  TutorialSystem::triggerEvent(*(TutorialSystem **)(unaff_r5[3] + DAT_0016934c),'\x1e',false);
  *(int *)(unaff_r5[3] + DAT_0016935c) = *(int *)(unaff_r5[3] + DAT_0016935c) + 1;
  CRAMHoover::beginTrackEvent(*(char **)(unaff_r5[3] + 0x840));
  ZombieCafe::addMixPanelHeader((ZombieCafe *)unaff_r5[3]);
  CRAMHoover::endTrackEvent();
  uVar9 = String::~String((String *)&stack0x0000029c);
  if ((ScreenElement *)unaff_r5[0xca] != (ScreenElement *)0x0) {
    iVar3 = ScreenElement::contains
                      ((ScreenElement *)unaff_r5[0xca],*(long *)(unaff_r5[3] + unaff_r7));
    uVar9 = CONCAT44(extraout_s1,extraout_s0);
    if (iVar3 != 0) {
      ZombieCafe::playEffect(unaff_r5[3],extraout_s0);
      pCStack00000018 = (CapcomGame *)unaff_r5[3];
      this = (GameStateAmpouleRaidMenu *)operator_new(0x98);
      GameStateAmpouleRaidMenu::GameStateAmpouleRaidMenu(this);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this);
      uVar9 = CapcomGame::setNextState(pCStack00000018,(GameState *)pGVar2);
      *(undefined1 *)(unaff_r5[3] + DAT_00169680) = 1;
    }
  }
  if ((ScreenElement *)unaff_r5[0xb5] != (ScreenElement *)0x0) {
    iVar3 = ScreenElement::contains
                      ((ScreenElement *)unaff_r5[0xb5],*(long *)(unaff_r5[3] + unaff_r7));
    uVar9 = CONCAT44(extraout_s1_00,extraout_s0_00);
    if (iVar3 != 0) {
      ZombieCafe::playEffect(unaff_r5[3],extraout_s0_00);
      pCStack00000018 = (CapcomGame *)unaff_r5[3];
      this_00 = (GameStateEventRaid3Menu *)operator_new(0xf0);
      GameStateEventRaid3Menu::GameStateEventRaid3Menu(this_00);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_00);
      uVar9 = CapcomGame::setNextState(pCStack00000018,(GameState *)pGVar2);
      *(undefined1 *)(unaff_r5[3] + DAT_00169680) = 1;
    }
  }
  if ((ScreenElement *)unaff_r5[0xa0] != (ScreenElement *)0x0) {
    iVar3 = ScreenElement::contains
                      ((ScreenElement *)unaff_r5[0xa0],*(long *)(unaff_r5[3] + unaff_r7));
    uVar9 = CONCAT44(extraout_s1_01,extraout_s0_01);
    if (iVar3 != 0) {
      ZombieCafe::playEffect(unaff_r5[3],extraout_s0_01);
      pCStack00000018 = (CapcomGame *)unaff_r5[3];
      this_01 = (GameStateEventRaid2Menu *)operator_new(0x114);
      GameStateEventRaid2Menu::GameStateEventRaid2Menu(this_01);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_01);
      uVar9 = CapcomGame::setNextState(pCStack00000018,(GameState *)pGVar2);
      *(undefined1 *)(unaff_r5[3] + DAT_00169680) = 1;
    }
  }
  if ((ScreenElement *)unaff_r5[0x8b] != (ScreenElement *)0x0) {
    iVar3 = ScreenElement::contains
                      ((ScreenElement *)unaff_r5[0x8b],*(long *)(unaff_r5[3] + unaff_r7));
    uVar9 = CONCAT44(extraout_s1_02,extraout_s0_02);
    if (iVar3 != 0) {
      ZombieCafe::playEffect(unaff_r5[3],extraout_s0_02);
      pCStack00000018 = (CapcomGame *)unaff_r5[3];
      this_02 = (GameStateEventRaidMenu *)operator_new(0xbc);
      GameStateEventRaidMenu::GameStateEventRaidMenu(this_02);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_02);
      uVar9 = CapcomGame::setNextState(pCStack00000018,(GameState *)pGVar2);
      *(undefined1 *)(unaff_r5[3] + DAT_00169680) = 1;
    }
  }
  if ((ScreenElement *)unaff_r5[0xdf] != (ScreenElement *)0x0) {
    iVar3 = ScreenElement::contains
                      ((ScreenElement *)unaff_r5[0xdf],*(long *)(unaff_r5[3] + unaff_r7));
    uVar9 = CONCAT44(extraout_s1_03,extraout_s0_03);
    if (iVar3 != 0) {
      ZombieCafe::playEffect(unaff_r5[3],extraout_s0_03);
      pCStack00000018 = (CapcomGame *)unaff_r5[3];
      this_03 = (GameStateWeekRaidMenu *)operator_new(0xd4);
      GameStateWeekRaidMenu::GameStateWeekRaidMenu(this_03);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_03);
      uVar9 = CapcomGame::setNextState(pCStack00000018,(GameState *)pGVar2);
      *(undefined1 *)(unaff_r5[3] + DAT_00169680) = 1;
    }
  }
  if ((ScreenElement *)unaff_r5[0x61] != (ScreenElement *)0x0) {
    iVar3 = ScreenElement::contains
                      ((ScreenElement *)unaff_r5[0x61],*(long *)(unaff_r5[3] + unaff_r7));
    uVar9 = CONCAT44(extraout_s1_04,extraout_s0_04);
    if (iVar3 != 0) {
      ZombieCafe::playEffect(unaff_r5[3],extraout_s0_04);
      pCStack00000018 = (CapcomGame *)unaff_r5[3];
      this_04 = (GameStateSurvivalMenu *)operator_new(0xc4);
      GameStateSurvivalMenu::GameStateSurvivalMenu(this_04);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_04);
      uVar9 = CapcomGame::setNextState(pCStack00000018,(GameState *)pGVar2);
      *(undefined1 *)(unaff_r5[3] + DAT_00169680) = 1;
    }
  }
  if ((ScreenElement *)unaff_r5[0x76] == (ScreenElement *)0x0) goto LAB_00169778;
  iVar3 = ScreenElement::contains((ScreenElement *)unaff_r5[0x76],*(long *)(unaff_r5[3] + unaff_r7))
  ;
  uVar9 = CONCAT44(extraout_s1_05,extraout_s0_05);
  iVar4 = unaff_r5[3];
  if ((iVar3 == 0) || ((char)unaff_r5[0x8a] != '\0')) {
    if (((char)unaff_r5[0x8a] == '\0') ||
       (uVar9 = CONCAT44(extraout_s1_05,extraout_s0_05), *(int *)(iVar4 + _DAT_001699f4) < 0x3e9))
    goto LAB_00169778;
    iVar3 = ScreenElement::contains((ScreenElement *)unaff_r5[0x79],*(long *)(iVar4 + unaff_r7));
    uVar9 = CONCAT44(extraout_s1_06,extraout_s0_06);
    if (iVar3 == 0) goto LAB_00169778;
    puts((char *)(_DAT_001699f8 + 0x1696ba));
    ZombieCafe::playEffect(unaff_r5[3],extraout_s0_07);
    snprintf(&stack0x00000314,0x80,(char *)(_DAT_00169a00 + 0x1696d2),
             **(undefined4 **)(unaff_r6 + _DAT_001699fc));
    Vector<String>::elementAt((int)&stack0x000000dc);
    operator+(&stack0x000000e4,&stack0x00000314,&stack0x000000dc);
    Vector<String>::elementAt((int)&stack0x000000ec);
    String::operator+((String *)&stack0x0000026c,&stack0x000000e4,&stack0x000000ec);
    String::~String((String *)&stack0x000000ec);
    String::~String((String *)&stack0x000000e4);
    String::~String((String *)&stack0x000000dc);
    pCVar5 = *(ConfirmDialog **)((int)unaff_r5 + _DAT_00169a0c);
    String::String((String *)&stack0x00000104,(String *)&stack0x0000026c);
    Vector<String>::elementAt((int)&stack0x000000f4);
    Vector<String>::elementAt((int)&stack0x000000fc);
    ConfirmDialog::show(pCVar5,&stack0x00000104,&stack0x000000f4,&stack0x000000fc);
    String::~String((String *)&stack0x000000fc);
    String::~String((String *)&stack0x000000f4);
    String::~String((String *)&stack0x00000104);
    this_05 = (String *)&stack0x0000026c;
  }
  else {
    ZombieCafe::playEffect(iVar4,extraout_s0_05);
    iVar3 = javaCanOpenHero();
    if (iVar3 == 0) {
      pNVar7 = *(NoticeDialog **)((int)unaff_r5 + DAT_00169684);
      String::String((String *)&stack0x000000cc,(char *)(DAT_00169690 + 0x16964e));
      Vector<String>::elementAt((int)&stack0x000000d4);
      NoticeDialog::show(pNVar7,&stack0x000000cc,&stack0x000000d4,0);
      String::~String((String *)&stack0x000000d4);
      this_05 = (String *)&stack0x000000cc;
    }
    else {
      iVar3 = ZombieCafe::haveZombies((ZombieCafe *)unaff_r5[3]);
      pCStack00000018 = (CapcomGame *)unaff_r5[3];
      if (iVar3 != 0) {
        pGVar1 = (GameStateRaid *)operator_new(0x18c);
        GameStateRaid::GameStateRaid
                  (pGVar1,unaff_r5[0x84],(uint)*(byte *)(unaff_r5 + 0x85),false,false);
        pGVar2 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar1);
        uVar9 = CapcomGame::setNextState(pCStack00000018,(GameState *)pGVar2);
        *(undefined1 *)(unaff_r5[3] + DAT_00169680) = 1;
        goto LAB_00169778;
      }
      pNVar7 = *(NoticeDialog **)((int)unaff_r5 + DAT_00169684);
      Vector<String>::elementAt((int)&stack0x000000bc);
      Vector<String>::elementAt((int)&stack0x000000c4);
      NoticeDialog::show(pNVar7,&stack0x000000bc,&stack0x000000c4,0);
      String::~String((String *)&stack0x000000c4);
      this_05 = (String *)&stack0x000000bc;
    }
  }
  uVar9 = String::~String(this_05);
LAB_00169778:
  iVar3 = ZCImageButton::contains
                    ((ZCImageButton *)unaff_r5[0xe],*(int *)(unaff_r5[3] + unaff_r7) >> 0x10,
                     (int)(short)*(int *)(unaff_r5[3] + unaff_r7),(float)uVar9,
                     (float)((ulonglong)uVar9 >> 0x20));
  fVar8 = extraout_s0_08;
  if (iVar3 != 0) {
    if (*(char *)(unaff_r5[0x10e] + 0x68) != '\0') {
      fVar8 = (float)TutorialSystem::triggerEvent
                               (*(TutorialSystem **)(unaff_r5[3] + DAT_00169a1c),'@',true);
      ZombieCafe::playEffect(unaff_r5[3],fVar8);
      InviteDialog::setFacebookCallback
                ((InviteDialog *)unaff_r5[0x10e],*(_func_void_void_ptr **)(unaff_r6 + DAT_00169a20),
                 unaff_r5);
      InviteDialog::setEmailCallback
                ((_func_void_void_ptr *)unaff_r5[0x10e],*(void **)(unaff_r6 + DAT_00169a24));
      InviteDialog::setSMSCallback
                ((_func_void_void_ptr *)unaff_r5[0x10e],*(void **)(unaff_r6 + DAT_00169a28));
      (**(code **)(*(int *)unaff_r5[0x10e] + 0x20))((int *)unaff_r5[0x10e],1);
      *(int *)(unaff_r5[0x10e] + 0x6c) = DAT_00169a2c + 0x1697ee;
      FUN_00169830();
      return;
    }
    pNVar7 = *(NoticeDialog **)((int)unaff_r5 + DAT_00169a34);
    Vector<String>::elementAt((int)&stack0x0000010c);
    Vector<String>::elementAt((int)&stack0x00000114);
    NoticeDialog::show(pNVar7,&stack0x0000010c,&stack0x00000114);
    String::~String((String *)&stack0x00000114);
    fVar8 = (float)String::~String((String *)&stack0x0000010c);
  }
  if (*(char *)((int)unaff_r5 + 0x4d) != '\0') {
    if (*(int *)(unaff_r5[0x11] * 4 + *(int *)(unaff_r5[3] + 0x698)) < 1) {
      pcVar6 = *(code **)(*unaff_r5 + 0x78);
    }
    else {
      pcVar6 = *(code **)(*unaff_r5 + 0x74);
    }
    fVar8 = (float)(*pcVar6)(unaff_r5);
  }
  if (((char)unaff_r5[0x13] != '\0') &&
     (*(int *)(unaff_r5[0x11] * 4 + *(int *)(unaff_r5[3] + 0x698)) < 1)) {
    *(undefined1 *)((int)unaff_r5 + 0x4d) = 1;
  }
  if ((char)unaff_r5[0x114] == '\0') {
    *(undefined1 *)(unaff_r5 + 0x114) = 1;
    ZombieCafe::loadAndPlayMusic((ZombieCafe *)unaff_r5[3],0,0xf,fVar8,false);
  }
  if (*(char *)(unaff_r5[3] + DAT_00169a3c) != '\0') {
    *(undefined1 *)(unaff_r5[3] + DAT_00169a3c) = 0;
    iVar3 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(unaff_r5[3] + DAT_00169a1c),',');
    if (iVar3 != 0) {
      ZombieCafe::playEffect(unaff_r5[3],extraout_s0_09);
      this_07 = (CapcomGame *)unaff_r5[3];
      this_06 = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(this_06);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_06);
      CapcomGame::setNextState(this_07,(GameState *)pGVar2);
      FUN_00169b04();
      return;
    }
    FUN_00169b04();
    return;
  }
  FUN_00169b04();
  return;
}


