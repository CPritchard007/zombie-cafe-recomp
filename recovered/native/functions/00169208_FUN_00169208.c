/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00169208 FUN_00169208 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00169208(void)

{
  int iVar1;
  GameStateAmpouleRaidMenu *this;
  GameStateLoading *pGVar2;
  GameStateEventRaid3Menu *this_00;
  GameStateEventRaid2Menu *this_01;
  GameStateEventRaidMenu *this_02;
  GameStateWeekRaidMenu *this_03;
  GameStateSurvivalMenu *this_04;
  GameStateRaid *this_05;
  String *pSVar3;
  GameStateCafe *this_06;
  int extraout_r1;
  CapcomGame *pCVar4;
  int iVar5;
  ConfirmDialog *pCVar6;
  code *pcVar7;
  NoticeDialog *pNVar8;
  int unaff_r4;
  GameStateMap *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  float extraout_s0;
  float fVar9;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  undefined4 extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  undefined8 uVar10;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined4 extraout_s1_06;
  int in_stack_00000014;
  int in_stack_00000018;
  ScreenElement *in_stack_0000026c;
  ScreenElement *in_stack_00000278;
  byte in_stack_000002a8;
  char in_stack_000002bc;
  undefined4 in_stack_000002f8;
  
  iVar1 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0016934c),'%');
  if (iVar1 != 0) {
    iVar1 = ScreenElement::contains
                      (in_stack_00000278,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r7));
    if (iVar1 != 0) {
      *(int *)(unaff_r5 + 0xa0) = in_stack_00000014;
      iVar1 = *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_00169368);
      GameStateMap::MapCafe::MapCafe
                ((MapCafe *)&stack0x000002c0,(MapCafe *)(*(int *)(in_stack_00000018 + 8) + unaff_r4)
                );
      __aeabi_idivmod(in_stack_000002f8,**(undefined1 **)(unaff_r6 + DAT_0016936c));
      iVar1 = *(int *)(extraout_r1 * 4 + iVar1);
      fVar9 = (float)String::~String((String *)&stack0x000002f0);
      if (iVar1 <= DAT_00169370) {
        String::~String((String *)&stack0x0000029c);
        FUN_00169b04();
        return;
      }
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar9);
      snprintf(&stack0x00000314,0x80,(char *)(DAT_00169378 + 0x16927a),
               **(undefined4 **)(unaff_r6 + DAT_00169374));
      Vector<String>::elementAt((int)&stack0x0000008c);
      operator+(&stack0x00000094,&stack0x00000314,&stack0x0000008c);
      Vector<String>::elementAt((int)&stack0x0000009c);
      String::operator+((String *)&stack0x00000084,&stack0x00000094,&stack0x0000009c);
      String::~String((String *)&stack0x0000009c);
      String::~String((String *)&stack0x00000094);
      String::~String((String *)&stack0x0000008c);
      pCVar6 = *(ConfirmDialog **)(unaff_r5 + DAT_00169384);
      String::String((String *)&stack0x000000b4,(String *)&stack0x00000084);
      Vector<String>::elementAt((int)&stack0x000000a4);
      Vector<String>::elementAt((int)&stack0x000000ac);
      ConfirmDialog::show(pCVar6,&stack0x000000b4,&stack0x000000a4,&stack0x000000ac);
      String::~String((String *)&stack0x000000ac);
      String::~String((String *)&stack0x000000a4);
      String::~String((String *)&stack0x000000b4);
      String::~String((String *)&stack0x00000084);
    }
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169394) = 1;
  }
  uVar10 = String::~String((String *)&stack0x0000029c);
  in_stack_00000014 = in_stack_00000014 + 1;
  if (in_stack_00000014 < *(int *)(in_stack_00000018 + 4) + 1) {
    GameStateMap::MapCafe::MapCafe
              ((MapCafe *)&stack0x0000026c,
               (MapCafe *)(*(int *)(in_stack_00000018 + 8) + in_stack_00000014 * 0x54));
    iVar1 = ScreenElement::contains
                      (in_stack_0000026c,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r7));
    if (iVar1 == 0) {
      FUN_00169adc();
    }
    if (in_stack_000002bc != '\0') {
      FUN_00169adc();
    }
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0016934c),'%');
    fVar9 = extraout_s0;
    if ((iVar1 == 0) && (in_stack_00000014 != 0)) {
      fVar9 = (float)FUN_00169adc();
    }
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar9);
    iVar1 = ZombieCafe::haveZombies(*(ZombieCafe **)(unaff_r5 + 0xc));
    if (iVar1 == 0) {
      pNVar8 = *(NoticeDialog **)(unaff_r5 + _DAT_00169354);
      Vector<String>::elementAt((int)&stack0x00000074);
      Vector<String>::elementAt((int)&stack0x0000007c);
      NoticeDialog::show(pNVar8,&stack0x00000074,&stack0x0000007c,0);
      String::~String((String *)&stack0x0000007c);
      pSVar3 = (String *)&stack0x00000074;
    }
    else {
      iVar1 = ZombieCafe::isEventCafeTheme(*(ZombieCafe **)(unaff_r5 + 0xc),(uint)in_stack_000002a8)
      ;
      if (iVar1 == 0) {
        FUN_00169aea();
      }
      iVar1 = GameStateMap::eventCafeZombieNumCheck(unaff_r5);
      if (iVar1 != 0) {
        FUN_00169aea();
      }
      pNVar8 = *(NoticeDialog **)(unaff_r5 + _DAT_00169354);
      String::String((String *)&stack0x00000064,(char *)(_DAT_00169350 + 0x16912a));
      Vector<String>::elementAt((int)&stack0x0000006c);
      NoticeDialog::show(pNVar8,&stack0x00000064,&stack0x0000006c,0);
      String::~String((String *)&stack0x0000006c);
      pSVar3 = (String *)&stack0x00000064;
    }
    String::~String(pSVar3);
    uVar10 = String::~String((String *)&stack0x0000029c);
  }
  if (*(ScreenElement **)(unaff_r5 + 0x328) != (ScreenElement *)0x0) {
    iVar1 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x328),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r7));
    uVar10 = CONCAT44(extraout_s1,extraout_s0_00);
    if (iVar1 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_00);
      pCVar4 = *(CapcomGame **)(unaff_r5 + 0xc);
      this = (GameStateAmpouleRaidMenu *)operator_new(0x98);
      GameStateAmpouleRaidMenu::GameStateAmpouleRaidMenu(this);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this);
      uVar10 = CapcomGame::setNextState(pCVar4,(GameState *)pGVar2);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x2d4) != (ScreenElement *)0x0) {
    iVar1 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x2d4),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r7));
    uVar10 = CONCAT44(extraout_s1_00,extraout_s0_01);
    if (iVar1 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_01);
      pCVar4 = *(CapcomGame **)(unaff_r5 + 0xc);
      this_00 = (GameStateEventRaid3Menu *)operator_new(0xf0);
      GameStateEventRaid3Menu::GameStateEventRaid3Menu(this_00);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_00);
      uVar10 = CapcomGame::setNextState(pCVar4,(GameState *)pGVar2);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x280) != (ScreenElement *)0x0) {
    iVar1 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x280),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r7));
    uVar10 = CONCAT44(extraout_s1_01,extraout_s0_02);
    if (iVar1 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_02);
      pCVar4 = *(CapcomGame **)(unaff_r5 + 0xc);
      this_01 = (GameStateEventRaid2Menu *)operator_new(0x114);
      GameStateEventRaid2Menu::GameStateEventRaid2Menu(this_01);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_01);
      uVar10 = CapcomGame::setNextState(pCVar4,(GameState *)pGVar2);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x22c) != (ScreenElement *)0x0) {
    iVar1 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x22c),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r7));
    uVar10 = CONCAT44(extraout_s1_02,extraout_s0_03);
    if (iVar1 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_03);
      pCVar4 = *(CapcomGame **)(unaff_r5 + 0xc);
      this_02 = (GameStateEventRaidMenu *)operator_new(0xbc);
      GameStateEventRaidMenu::GameStateEventRaidMenu(this_02);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_02);
      uVar10 = CapcomGame::setNextState(pCVar4,(GameState *)pGVar2);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x37c) != (ScreenElement *)0x0) {
    iVar1 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x37c),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r7));
    uVar10 = CONCAT44(extraout_s1_03,extraout_s0_04);
    if (iVar1 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_04);
      pCVar4 = *(CapcomGame **)(unaff_r5 + 0xc);
      this_03 = (GameStateWeekRaidMenu *)operator_new(0xd4);
      GameStateWeekRaidMenu::GameStateWeekRaidMenu(this_03);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_03);
      uVar10 = CapcomGame::setNextState(pCVar4,(GameState *)pGVar2);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x184) != (ScreenElement *)0x0) {
    iVar1 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x184),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r7));
    uVar10 = CONCAT44(extraout_s1_04,extraout_s0_05);
    if (iVar1 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_05);
      pCVar4 = *(CapcomGame **)(unaff_r5 + 0xc);
      this_04 = (GameStateSurvivalMenu *)operator_new(0xc4);
      GameStateSurvivalMenu::GameStateSurvivalMenu(this_04);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_04);
      uVar10 = CapcomGame::setNextState(pCVar4,(GameState *)pGVar2);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x1d8) == (ScreenElement *)0x0) goto LAB_00169778;
  iVar1 = ScreenElement::contains
                    (*(ScreenElement **)(unaff_r5 + 0x1d8),
                     *(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r7));
  uVar10 = CONCAT44(extraout_s1_05,extraout_s0_06);
  iVar5 = *(int *)(unaff_r5 + 0xc);
  if ((iVar1 == 0) || (unaff_r5[0x228] != (GameStateMap)0x0)) {
    if ((unaff_r5[0x228] == (GameStateMap)0x0) ||
       (uVar10 = CONCAT44(extraout_s1_05,extraout_s0_06), *(int *)(iVar5 + _DAT_001699f4) < 0x3e9))
    goto LAB_00169778;
    iVar1 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x1e4),*(long *)(iVar5 + unaff_r7));
    uVar10 = CONCAT44(extraout_s1_06,extraout_s0_07);
    if (iVar1 == 0) goto LAB_00169778;
    puts((char *)(_DAT_001699f8 + 0x1696ba));
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_08);
    snprintf(&stack0x00000314,0x80,(char *)(_DAT_00169a00 + 0x1696d2),
             **(undefined4 **)(unaff_r6 + _DAT_001699fc));
    Vector<String>::elementAt((int)&stack0x000000dc);
    operator+(&stack0x000000e4,&stack0x00000314,&stack0x000000dc);
    Vector<String>::elementAt((int)&stack0x000000ec);
    String::operator+((String *)&stack0x0000026c,&stack0x000000e4,&stack0x000000ec);
    String::~String((String *)&stack0x000000ec);
    String::~String((String *)&stack0x000000e4);
    String::~String((String *)&stack0x000000dc);
    pCVar6 = *(ConfirmDialog **)(unaff_r5 + _DAT_00169a0c);
    String::String((String *)&stack0x00000104,(String *)&stack0x0000026c);
    Vector<String>::elementAt((int)&stack0x000000f4);
    Vector<String>::elementAt((int)&stack0x000000fc);
    ConfirmDialog::show(pCVar6,&stack0x00000104,&stack0x000000f4,&stack0x000000fc);
    String::~String((String *)&stack0x000000fc);
    String::~String((String *)&stack0x000000f4);
    String::~String((String *)&stack0x00000104);
    pSVar3 = (String *)&stack0x0000026c;
  }
  else {
    ZombieCafe::playEffect(iVar5,extraout_s0_06);
    iVar1 = javaCanOpenHero();
    if (iVar1 == 0) {
      pNVar8 = *(NoticeDialog **)(unaff_r5 + DAT_00169684);
      String::String((String *)&stack0x000000cc,(char *)(DAT_00169690 + 0x16964e));
      Vector<String>::elementAt((int)&stack0x000000d4);
      NoticeDialog::show(pNVar8,&stack0x000000cc,&stack0x000000d4,0);
      String::~String((String *)&stack0x000000d4);
      pSVar3 = (String *)&stack0x000000cc;
    }
    else {
      iVar1 = ZombieCafe::haveZombies(*(ZombieCafe **)(unaff_r5 + 0xc));
      pCVar4 = *(CapcomGame **)(unaff_r5 + 0xc);
      if (iVar1 != 0) {
        this_05 = (GameStateRaid *)operator_new(0x18c);
        GameStateRaid::GameStateRaid
                  (this_05,*(int *)(unaff_r5 + 0x210),(uint)(byte)unaff_r5[0x214],false,false);
        pGVar2 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_05);
        uVar10 = CapcomGame::setNextState(pCVar4,(GameState *)pGVar2);
        *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
        goto LAB_00169778;
      }
      pNVar8 = *(NoticeDialog **)(unaff_r5 + DAT_00169684);
      Vector<String>::elementAt((int)&stack0x000000bc);
      Vector<String>::elementAt((int)&stack0x000000c4);
      NoticeDialog::show(pNVar8,&stack0x000000bc,&stack0x000000c4,0);
      String::~String((String *)&stack0x000000c4);
      pSVar3 = (String *)&stack0x000000bc;
    }
  }
  uVar10 = String::~String(pSVar3);
LAB_00169778:
  iVar1 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x38),
                     *(int *)(*(int *)(unaff_r5 + 0xc) + unaff_r7) >> 0x10,
                     (int)(short)*(int *)(*(int *)(unaff_r5 + 0xc) + unaff_r7),(float)uVar10,
                     (float)((ulonglong)uVar10 >> 0x20));
  fVar9 = extraout_s0_09;
  if (iVar1 != 0) {
    if (*(char *)(*(int *)(unaff_r5 + 0x438) + 0x68) != '\0') {
      fVar9 = (float)TutorialSystem::triggerEvent
                               (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_00169a1c),'@',
                                true);
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar9);
      InviteDialog::setFacebookCallback
                (*(InviteDialog **)(unaff_r5 + 0x438),
                 *(_func_void_void_ptr **)(unaff_r6 + DAT_00169a20),unaff_r5);
      InviteDialog::setEmailCallback
                (*(_func_void_void_ptr **)(unaff_r5 + 0x438),*(void **)(unaff_r6 + DAT_00169a24));
      InviteDialog::setSMSCallback
                (*(_func_void_void_ptr **)(unaff_r5 + 0x438),*(void **)(unaff_r6 + DAT_00169a28));
      (**(code **)(**(int **)(unaff_r5 + 0x438) + 0x20))(*(int **)(unaff_r5 + 0x438),1);
      *(int *)(*(int *)(unaff_r5 + 0x438) + 0x6c) = DAT_00169a2c + 0x1697ee;
      FUN_00169830();
      return;
    }
    pNVar8 = *(NoticeDialog **)(unaff_r5 + DAT_00169a34);
    Vector<String>::elementAt((int)&stack0x0000010c);
    Vector<String>::elementAt((int)&stack0x00000114);
    NoticeDialog::show(pNVar8,&stack0x0000010c,&stack0x00000114);
    String::~String((String *)&stack0x00000114);
    fVar9 = (float)String::~String((String *)&stack0x0000010c);
  }
  if (unaff_r5[0x4d] != (GameStateMap)0x0) {
    if (*(int *)(*(int *)(unaff_r5 + 0x44) * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + 0x698)) < 1) {
      pcVar7 = *(code **)(*(int *)unaff_r5 + 0x78);
    }
    else {
      pcVar7 = *(code **)(*(int *)unaff_r5 + 0x74);
    }
    fVar9 = (float)(*pcVar7)(unaff_r5);
  }
  if ((unaff_r5[0x4c] != (GameStateMap)0x0) &&
     (*(int *)(*(int *)(unaff_r5 + 0x44) * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + 0x698)) < 1)) {
    unaff_r5[0x4d] = (GameStateMap)0x1;
  }
  if (unaff_r5[0x450] == (GameStateMap)0x0) {
    unaff_r5[0x450] = (GameStateMap)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,0xf,fVar9,false);
  }
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_00169a3c) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169a3c) = 0;
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_00169a1c),',');
    if (iVar1 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_10);
      pCVar4 = *(CapcomGame **)(unaff_r5 + 0xc);
      this_06 = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(this_06);
      pGVar2 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_06);
      CapcomGame::setNextState(pCVar4,(GameState *)pGVar2);
      FUN_00169b04();
      return;
    }
    FUN_00169b04();
    return;
  }
  FUN_00169b04();
  return;
}


