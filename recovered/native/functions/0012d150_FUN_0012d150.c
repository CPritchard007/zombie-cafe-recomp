/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012d150 FUN_0012d150 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0012ecc0) */
/* WARNING: Removing unreachable block (ram,0x0012ecc0) */
/* WARNING: Removing unreachable block (ram,0x0012f324) */
/* WARNING: Removing unreachable block (ram,0x0012f32a) */
/* WARNING: Removing unreachable block (ram,0x0012f334) */
/* WARNING: Removing unreachable block (ram,0x0012f36a) */
/* WARNING: Removing unreachable block (ram,0x0012f33c) */
/* WARNING: Removing unreachable block (ram,0x0012f358) */
/* WARNING: Removing unreachable block (ram,0x0012f34e) */
/* WARNING: Removing unreachable block (ram,0x0012f360) */
/* WARNING: Removing unreachable block (ram,0x0012f36e) */

void FUN_0012d150(void)

{
  FurnitureData FVar1;
  Furniture FVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  TutorialArrow *this;
  ZCImageButton *this_00;
  String *pSVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  MALTAHoover *pMVar12;
  SServer *pSVar13;
  HCOManager *pHVar14;
  GameStateSpecialSale *this_01;
  GameStateLoading *this_02;
  LotteryFeaturedDialog *this_03;
  UserRankDialog *this_04;
  long lVar15;
  CharacterInstance *pCVar16;
  StatusNote *pSVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  TutorialSystem *this_05;
  LotteryDialog *this_06;
  byte bVar23;
  uchar uVar24;
  uint extraout_r1;
  char *pcVar25;
  char cVar26;
  ScreenElement *in_r3;
  uint uVar27;
  GameStateCafe *pGVar28;
  ConfirmDialog *pCVar29;
  Furniture *pFVar30;
  undefined4 uVar31;
  NoticeDialog *pNVar32;
  undefined4 *puVar33;
  CapcomGame *this_07;
  char *pcVar34;
  ScreenElement *pSVar35;
  FurnitureData *pFVar36;
  Furniture *pFVar37;
  Cafe *pCVar38;
  undefined4 uVar39;
  uint *puVar40;
  GameStateCafe *unaff_r5;
  int unaff_r6;
  MessageElement *pMVar41;
  code *pcVar42;
  ZombieCafe *pZVar43;
  CharacterInstance *pCVar44;
  int unaff_r7;
  undefined4 in_cr15;
  float extraout_s0;
  float extraout_s0_00;
  float fVar45;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float __x;
  float __x_00;
  float extraout_s1;
  undefined8 uVar46;
  float extraout_s1_00;
  undefined1 *in_stack_00000000;
  GameStateCafe *in_stack_00000004;
  uint in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  int in_stack_00000020;
  
  if ((*(ScreenElement **)(unaff_r5 + 0x9c))[0x14] == (ScreenElement)0x0) {
    piVar7 = *(int **)(unaff_r5 + 0x134);
    if ((char)piVar7[5] != '\0') goto LAB_0012d2c8;
    if (unaff_r5[unaff_r6] != (GameStateCafe)0xd) {
      this = *(TutorialArrow **)(unaff_r5 + 0xc4);
      if (this[0x14] != (TutorialArrow)0x0) {
        iVar6 = TutorialArrow::attachedToCafeObject(this);
        if (iVar6 != 0) {
          iVar6 = *(int *)(unaff_r5 + 0xc4);
          iVar6 = CFPoint::subtract(*(long *)(*(int *)(unaff_r5 + 0xc) + 0x14),
                                    CONCAT22(*(undefined2 *)(iVar6 + 4),*(undefined2 *)(iVar6 + 8)))
          ;
          uVar11 = __floatsisf(iVar6 >> 0x10);
          uVar11 = __divsf3(uVar11,DAT_0012d2fc);
          *(undefined4 *)(unaff_r5 + 0x1d8) = uVar11;
          uVar11 = __floatsisf((int)(short)iVar6);
          uVar11 = __divsf3(uVar11,DAT_0012d2fc);
          *(undefined4 *)(unaff_r5 + 0x1dc) = uVar11;
        }
        this_00 = (ZCImageButton *)HudElement::getButton(*(HudElement **)(unaff_r5 + 200),0);
        iVar6 = ZCImageButton::contains
                          (this_00,*(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0012d2f4),extraout_s0,
                           extraout_s1);
        if (iVar6 == 0) {
          pZVar43 = *(ZombieCafe **)(unaff_r5 + 0xc);
          iVar6 = ZombieCafe::unhandledPressOrLongEvent(pZVar43);
          if (iVar6 != 0) {
            FUN_0012fdc8();
          }
          iVar6 = ZombieCafe::unhandledTouching(pZVar43);
          if ((iVar6 != 0) && (iVar6 = ZombieCafe::touchWasPinch(pZVar43), iVar6 == 0)) {
            FUN_0012fdc8();
          }
          pZVar43[DAT_0012d2f8] = (ZombieCafe)0x1;
          FUN_0012d28e();
          return;
        }
        (**(code **)(**(int **)(unaff_r5 + 0x8c) + 0x20))(*(int **)(unaff_r5 + 0x8c),0);
        (**(code **)(**(int **)(unaff_r5 + 0xb0) + 0x20))(*(int **)(unaff_r5 + 0xb0),0);
        (**(code **)(**(int **)(unaff_r5 + 0x90) + 0x20))(*(int **)(unaff_r5 + 0x90),0);
        (**(code **)(**(int **)(unaff_r5 + 0xa0) + 0x20))(*(int **)(unaff_r5 + 0xa0),0);
      }
      piVar7 = *(int **)(unaff_r5 + 0x78);
      goto LAB_0012d2c8;
    }
  }
  else {
    if (((in_r3 != (ScreenElement *)0x0) &&
        (iVar6 = ScreenElement::isChildOf(in_r3,*(ScreenElement **)(unaff_r5 + 0x9c)), iVar6 != 0))
       && (iVar6 = TutorialArrow::targetContains
                             (*(TutorialArrow **)(unaff_r5 + 0xc4),unaff_r5,
                              *(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0012d2f4)), iVar6 == 0)) {
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012d2f8) = 1;
    }
    piVar7 = *(int **)(unaff_r5 + 0x9c);
LAB_0012d2c8:
    (**(code **)(*piVar7 + 8))(piVar7,in_stack_00000020);
  }
  if (unaff_r5[0x1a4] == (GameStateCafe)0x0) {
    if (*(char *)(*(int *)(unaff_r5 + 0x8c) + 0x14) != '\0') {
      unaff_r5[0x1a4] = (GameStateCafe)0x1;
    }
  }
  else if (*(char *)(*(int *)(unaff_r5 + 0x8c) + 0x14) == '\0') {
    GameStateCafe::save(SUB41(unaff_r5,0));
    unaff_r5[0x1a4] = (GameStateCafe)0x0;
  }
  uVar27 = *(uint *)(unaff_r5 + 0xa4);
  if (uVar27 != 0) {
    uVar27 = (uint)*(byte *)(uVar27 + 0x14);
  }
  if (*(char *)(*(int *)(unaff_r5 + 0x7c) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(unaff_r5 + 0x80) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  iVar6 = *(int *)(unaff_r5 + 0x8c);
  if (*(char *)(iVar6 + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(iVar6 + 0x60) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(unaff_r5 + 0x90) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (uVar27 != 0) {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(unaff_r5 + 0x134) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if ((*(int *)(unaff_r5 + 0x98) != 0) && (*(char *)(*(int *)(unaff_r5 + 0x98) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(unaff_r5 + 0xd8) != 0) && (*(char *)(*(int *)(unaff_r5 + 0xd8) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(unaff_r5 + 0xdc) != 0) && (*(char *)(*(int *)(unaff_r5 + 0xdc) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  pGVar28 = unaff_r5 + 0xfc;
  if ((*(int *)(unaff_r5 + 0x120) != 0) && (*(char *)(*(int *)(unaff_r5 + 0x120) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(pGVar28 + 0x28) != 0) && (*(char *)(*(int *)(pGVar28 + 0x28) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(unaff_r5 + 0xa8) != 0) && (*(char *)(*(int *)(unaff_r5 + 0xa8) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  pGVar28 = unaff_r5 + 0xfc;
  if ((*(int *)(unaff_r5 + 0x128) != 0) && (*(char *)(*(int *)(unaff_r5 + 0x128) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(pGVar28 + 0x3c) != 0) && (*(char *)(*(int *)(pGVar28 + 0x3c) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if (-1 < *(int *)(unaff_r5 + 0x17c)) {
    pSVar8 = (String *)
             Vector<MessageWithToxin*>::removeElementAt
                       ((Vector<MessageWithToxin*> *)(unaff_r5 + 0x178),0);
    ZombieCafe::addToxin(*(ZombieCafe **)(unaff_r5 + 0xc),*(int *)(pSVar8 + 8),false);
    ZombieCafe::addCash(*(ZombieCafe **)(unaff_r5 + 0xc),*(int *)(pSVar8 + 0xc));
    ZombieCafe::addXp(*(ZombieCafe **)(unaff_r5 + 0xc),*(int *)(pSVar8 + 0x10));
    pMVar41 = *(MessageElement **)(unaff_r5 + 0x7c);
    String::String((String *)&stack0x00000038,pSVar8);
    in_stack_00000000 = *(undefined1 **)(pSVar8 + 0x10);
    MessageElement::show
              (pMVar41,&stack0x00000038,*(undefined4 *)(pSVar8 + 8),*(undefined4 *)(pSVar8 + 0xc));
    String::~String((String *)&stack0x00000038);
    String::~String(pSVar8);
    operator_delete(pSVar8);
  }
  if ((5 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) &&
     (iVar6 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'S'),
     iVar6 == 0)) {
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'R',false);
    CharacterCommandBar::close(*(CharacterCommandBar **)(unaff_r5 + 0xac));
    CookCommandBar::close(*(CookCommandBar **)(unaff_r5 + 0xb4));
    Store::close(*(Store **)(unaff_r5 + 0x84));
    Storage::close(*(Storage **)(unaff_r5 + 0xbc));
    PlantCommandBar::close(*(PlantCommandBar **)(unaff_r5 + 0xb8));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r5 + 0xc0));
  }
  iVar6 = DAT_0012d768;
  if (((7 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) &&
      (iVar9 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'U'),
      iVar9 == 0)) && (iVar9 = GameStateCafe::checkCanLotteryButton(unaff_r5), iVar9 != 0)) {
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'V',false);
  }
  iVar6 = DAT_0012d768;
  if (((8 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) &&
      (iVar9 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'W'),
      iVar9 == 0)) && (*(int *)(unaff_r5 + 300) == 0)) {
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'X',true);
  }
  iVar6 = DAT_0012d768;
  if (*(int *)(*(int *)(unaff_r5 + 0xc) + 0x680) == 3) {
    iVar9 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'[');
    if (iVar9 == 0) {
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'\\',false);
    }
    else {
      TutorialSystem::setTutorialCompleted
                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'[');
    }
  }
  pGVar28 = unaff_r5 + 0xcc;
  iVar6 = ObjectiveSystem::actionRequired
                    (*(ObjectiveSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d76c));
  if (iVar6 == 0) {
    iVar6 = PullMenuElement::hasNewIndicator(*(PullMenuElement **)pGVar28,3);
    if (iVar6 != 0) {
      PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)pGVar28,3,false);
    }
  }
  else {
    iVar6 = PullMenuElement::hasNewIndicator(*(PullMenuElement **)pGVar28,3);
    if (iVar6 == 0) {
      PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)pGVar28,3,true);
      PullMenuElement::ifIsCloseNewIndicatorPull();
    }
  }
  iVar6 = *(int *)(unaff_r5 + 0xc);
  in_stack_00000000 = (undefined1 *)(uint)*(byte *)(iVar6 + DAT_0012d774);
  in_stack_00000004 = (GameStateCafe *)(uint)*(byte *)(iVar6 + DAT_0012d77c);
  in_stack_00000008 = *(uint *)(iVar6 + DAT_0012d780);
  sprintf(&stack0x000002fc,(char *)(DAT_0012d778 + 0x12d5e8),(uint)*(byte *)(iVar6 + DAT_0012d770),
          (uint)*(byte *)(iVar6 + 0x6f8));
  iVar6 = *(int *)(unaff_r5 + 0xc);
  if ((((*(char *)(iVar6 + DAT_0012d770) != '\0') && (*(char *)(iVar6 + 0x6f8) == '\0')) ||
      (*(char *)(iVar6 + DAT_0012d774) != '\0')) && (*(char *)(iVar6 + DAT_0012d77c) == '\0')) {
    *(undefined1 *)(iVar6 + DAT_0012d77c) = 1;
    pCVar29 = *(ConfirmDialog **)(unaff_r5 + 0x80);
    Vector<String>::elementAt((int)&stack0x00000040);
    Vector<String>::elementAt((int)&stack0x00000048);
    Vector<String>::elementAt((int)&stack0x00000050);
    in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012d790);
    in_stack_00000004 = unaff_r5;
    ConfirmDialog::show(pCVar29,&stack0x00000040,&stack0x00000048,&stack0x00000050);
    String::~String((String *)&stack0x00000050);
    String::~String((String *)&stack0x00000048);
    String::~String((String *)&stack0x00000040);
  }
  iVar9 = DAT_0012d798;
  iVar6 = DAT_0012d794;
  if ((*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012d794) != '\0') &&
     (iVar10 = *(int *)(unaff_r5 + 0x1b0), *(int *)(unaff_r5 + 0x1b0) = in_stack_00000020 + iVar10,
     **(int **)(unaff_r7 + iVar9) <= in_stack_00000020 + iVar10)) {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + iVar6) = 0;
    *(undefined4 *)(unaff_r5 + 0x1b0) = 0;
    GameStateCafe::showEnemyCafeDialog((int)unaff_r5);
  }
  GameStateCafe::tickColorShift(unaff_r5,in_stack_00000020);
  iVar6 = GameStateCafe::tickEditModes(unaff_r5,in_stack_00000020);
  if (iVar6 == 0) {
    FUN_0012ff22();
  }
  Cafe::tick(*(Cafe **)(unaff_r5 + 0x14),in_stack_00000020);
  if ((*(char *)(*(int *)(unaff_r5 + 0x14) + 100) == '\0') &&
     (iVar6 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'\x16'),
     iVar6 != 0)) {
    iVar6 = *(int *)(unaff_r5 + 0xc);
    puVar33 = *(undefined4 **)(unaff_r7 + DAT_0012d79c);
    uVar11 = __floatsisf(in_stack_00000020);
    uVar11 = __mulsf3(uVar11,*puVar33);
    uVar11 = __subsf3(*(undefined4 *)(iVar6 + 0x688),uVar11);
    *(undefined4 *)(iVar6 + 0x688) = uVar11;
    iVar9 = *(int *)(unaff_r5 + 0xc);
    uVar11 = *(undefined4 *)(iVar9 + 0x688);
    iVar6 = __aeabi_fcmplt(uVar11,0);
    if (iVar6 == 0) {
      iVar6 = __aeabi_fcmpgt(uVar11,0x3f800000);
      if (iVar6 != 0) {
        uVar11 = 0x3f800000;
      }
    }
    else {
      uVar11 = 0;
    }
    *(undefined4 *)(iVar9 + 0x688) = uVar11;
  }
  iVar6 = *(int *)(unaff_r5 + 0x1bc);
  *(int *)(unaff_r5 + 0x1bc) = iVar6 - in_stack_00000020;
  if (iVar6 - in_stack_00000020 < 1) {
    iVar6 = GameStateCafe::isDishInTransit(unaff_r5);
    if (iVar6 == 0) {
      GameStateCafe::save(SUB41(unaff_r5,0));
    }
    else {
      *(undefined4 *)(unaff_r5 + 0x1bc) = DAT_0012d7a0;
    }
  }
  iVar6 = *(int *)(unaff_r5 + 0x1c0);
  *(int *)(unaff_r5 + 0x1c0) = iVar6 - in_stack_00000020;
  if (iVar6 - in_stack_00000020 < 1) {
    *(undefined4 *)(unaff_r5 + 0x1c0) = **(undefined4 **)(unaff_r7 + DAT_0012da6c);
    GameStateCafe::saveServerData(unaff_r5);
    ZombieCafe::saveGameState(*(ZombieCafe **)(unaff_r5 + 0xc),false);
  }
  iVar6 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012da70),'\x16');
  if ((iVar6 != 0) &&
     (iVar6 = *(int *)(unaff_r5 + 0x1c4), *(int *)(unaff_r5 + 0x1c4) = iVar6 - in_stack_00000020,
     iVar6 - in_stack_00000020 < 1)) {
    pZVar43 = *(ZombieCafe **)(unaff_r5 + 0xc);
    piVar7 = *(int **)(unaff_r7 + DAT_0012da78);
    if (pZVar43[DAT_0012da74] == (ZombieCafe)0x0) {
      ZombieCafe::beginLoadOrders(pZVar43,true);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012da74) = 1;
      uVar11 = __divsi3(*piVar7,100);
      *(undefined4 *)(unaff_r5 + 0x1c4) = uVar11;
      if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012da7c) != '\0') {
        uVar11 = CCServer::GetMyUserID(*(void **)(*(int *)(unaff_r5 + 0xc) + DAT_0012da80));
        pZVar43 = *(ZombieCafe **)(unaff_r5 + 0xc);
        uVar39 = *(undefined4 *)(pZVar43 + 0x680);
        uVar31 = *(undefined4 *)(pZVar43 + DAT_0012da84);
        uVar20 = *(undefined4 *)(pZVar43 + DAT_0012da88);
        in_stack_00000010 = (char *)ZombieCafe::getToxin(pZVar43);
        pcVar25 = (char *)(DAT_0012da8c + 0x12d868);
        in_stack_00000000 = (undefined1 *)uVar11;
        in_stack_00000004 = (GameStateCafe *)uVar39;
        in_stack_00000008 = uVar31;
        in_stack_0000000c = (char *)uVar20;
        snprintf((char *)((int)&stack0x00000000 + DAT_0012da94),0x80,
                 (char *)(DAT_0012da90 + 0x12d86a),pcVar25);
        CCMarketing_RecordAnalyticsEvent
                  (*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012da98),DAT_0012da9c + 0x12d884,
                   (int)&stack0x00000000 + DAT_0012da94);
        pMVar12 = (MALTAHoover *)MALTAHoover::GetInstance();
        MALTAHoover::GetInstance();
        MALTAHoover::GetInstance();
        MALTAHoover::init(pMVar12,(char *)(DAT_0012daa0 + 0x12d8a0),
                          (char *)(DAT_0012daa4 + 0x12d8a2),pcVar25);
        memset(&stack0x0000027c,0,0x40);
        pSVar13 = (SServer *)MALTAHoover::GetInstance();
        iVar6 = MALTAHoover::getFBID(pSVar13,(char *)**(undefined4 **)(unaff_r7 + DAT_0012daa8));
        if (iVar6 == 0) {
          L_PrintLog((char *)(DAT_0012daac + 0x12d8cc),&stack0x0000027c);
        }
        memset(&stack0x000003fc,0,0x40);
        snprintf(&stack0x000003fc,0x40,(char *)(DAT_0012dab0 + 0x12d8e4),&stack0x0000027c);
        pMVar12 = (MALTAHoover *)MALTAHoover::GetInstance();
        uVar21 = *(uint *)(*(ZombieCafe **)(unaff_r5 + 0xc) + 0x680);
        uVar27 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
        iVar6 = *(int *)(unaff_r5 + 0xc);
        in_stack_00000000 = *(undefined1 **)(iVar6 + DAT_0012da88);
        in_stack_00000004 = *(GameStateCafe **)(iVar6 + DAT_0012da84);
        in_stack_00000008 = (uint)*(byte *)(iVar6 + DAT_0012dab8);
        in_stack_00000010 = *(char **)(unaff_r7 + DAT_0012dabc);
        in_stack_0000000c = &stack0x000003fc;
        MALTAHoover::send(pMVar12,(char *)(DAT_0012dab4 + 0x12d906),uVar21,uVar27,
                          (uint)in_stack_00000000,(uint)in_stack_00000004,in_stack_00000008,
                          &stack0x000003fc,in_stack_00000010);
      }
    }
    else {
      ZombieCafe::beginLoadOrders(pZVar43,false);
      puVar33 = *(undefined4 **)(unaff_r7 + DAT_0012daa8);
      GameStateCafe::requestGetEventGift((void *)*puVar33,unaff_r5);
      GameStateCafe::requestGetRankingGift((void *)*puVar33,unaff_r5);
      iVar6 = ZombieCafe::checkInstallGift();
      if (iVar6 != 0) {
        ZombieCafe::setZombie_InstallGift();
      }
      *(int *)(unaff_r5 + 0x1c4) = *piVar7 * 10;
    }
  }
  iVar6 = *(int *)(unaff_r5 + 500);
  *(int *)(unaff_r5 + 500) = iVar6 - in_stack_00000020;
  if (iVar6 - in_stack_00000020 < 1) {
    pHVar14 = (HCOManager *)HCOManager::getInstance();
    iVar6 = HCOManager::getHCOEnable(pHVar14);
    if (iVar6 != 0) {
      pHVar14 = (HCOManager *)HCOManager::getInstance();
      iVar6 = HCOManager::getFirstDisplay(pHVar14);
      if ((((iVar6 == 0) &&
           ((*(int *)(unaff_r5 + 300) == 0 || (*(char *)(*(int *)(unaff_r5 + 300) + 0x14) == '\0')))
           ) && ((*(int *)(unaff_r5 + 0x138) == 0 ||
                 (*(char *)(*(int *)(unaff_r5 + 0x138) + 0x14) == '\0')))) &&
         ((3 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680) &&
          (iVar6 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012da70),'I'),
          iVar6 != 0)))) {
        this_07 = *(CapcomGame **)(unaff_r5 + 0xc);
        this_01 = (GameStateSpecialSale *)operator_new(DAT_0012dac0);
        GameStateSpecialSale::GameStateSpecialSale(this_01);
        this_02 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(this_02,(GameState *)this_01);
        CapcomGame::setNextState(this_07,(GameState *)this_02);
      }
    }
    *(undefined4 *)(unaff_r5 + 500) = 1000;
  }
  pHVar14 = (HCOManager *)HCOManager::getInstance();
  HCOManager::tickHCO(pHVar14);
  iVar6 = *(int *)(unaff_r5 + 0x1cc);
  *(int *)(unaff_r5 + 0x1cc) = iVar6 - in_stack_00000020;
  if ((iVar6 - in_stack_00000020 < 1) &&
     (iVar6 = HudElement::isButtonAvailability(*(HudElement **)(unaff_r5 + 200),10), iVar6 != 0)) {
    iVar6 = GameStateCafe::CheckPicGiftBoxAndShowDialog(unaff_r5);
    if (iVar6 == 0) {
      *(undefined4 *)(unaff_r5 + 0x1cc) = DAT_0012dac4;
    }
    else if (iVar6 == 1) {
      *(undefined4 *)(unaff_r5 + 0x1cc) = 200;
    }
    else if (iVar6 == 2) {
      *(undefined4 *)(unaff_r5 + 0x1cc) = DAT_0012dac8;
    }
  }
  iVar6 = HudElement::isButtonAvailability(*(HudElement **)(unaff_r5 + 200),10);
  if ((iVar6 != 0) &&
     (iVar6 = *(int *)(unaff_r5 + 0x1c8), *(int *)(unaff_r5 + 0x1c8) = iVar6 - in_stack_00000020,
     iVar6 - in_stack_00000020 < 1)) {
    iVar6 = GameStateCafe::EventGiftShowDialog(unaff_r5);
    uVar11 = uRam0012de08;
    if (iVar6 != 0) {
      uVar11 = DAT_0012dacc;
    }
    *(undefined4 *)(unaff_r5 + 0x1c8) = uVar11;
  }
  if ((*(short *)(unaff_r5 + 0x16c) != 0) && (*(int *)(unaff_r5 + 0x40) == 0)) {
    iVar6 = *(short *)(unaff_r5 + 0x16c) - in_stack_00000020;
    *(ushort *)(unaff_r5 + 0x16c) = (ushort)iVar6 & (short)~(ushort)((uint)iVar6 >> 0x10) >> 0xf;
  }
  if (*(char *)(*(int *)(unaff_r5 + 0x14) + 200) != '\0') {
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iRam0012de0c),'\x18',true);
  }
  GameStateCafe::checkForLevelUp(unaff_r5);
  if ((((*(int *)(unaff_r5 + 0xd8) == 0) || (*(char *)(*(int *)(unaff_r5 + 0xd8) + 0x14) == '\0'))
      && (*(char *)(*(int *)(unaff_r5 + 0xc) + iRam0012de10) != '\0')) &&
     (*(char *)(*(int *)(unaff_r5 + 0xc4) + 0x14) == '\0')) {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + iRam0012de10) = 0;
  }
  iVar6 = iRam0012de0c;
  pcVar25 = *(char **)(unaff_r7 + iRam0012de14);
  if ((((((*pcVar25 != '\0') && (**(char **)(unaff_r7 + DAT_0012de18) == '\0')) &&
        ((*(int *)(unaff_r5 + 0xd8) == 0 || (*(char *)(*(int *)(unaff_r5 + 0xd8) + 0x14) == '\0'))))
       && ((*(int *)(unaff_r5 + 300) == 0 || (*(char *)(*(int *)(unaff_r5 + 300) + 0x14) == '\0'))))
      && ((*(int *)(unaff_r5 + 0x130) == 0 || (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')
          ))) &&
     ((((*(char *)(*(int *)(unaff_r5 + 0xc4) + 0x14) == '\0' &&
        (iVar9 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iRam0012de0c),'\x16'),
        iVar9 != 0)) && (7 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680))) &&
      (((iVar9 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'U'), iVar9 != 0
        && (iVar9 = TutorialSystem::isTutorialCompleted
                              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'V'),
           iVar9 != 0)) && (*(int *)(unaff_r5 + 0xa8) == 0)))))) {
    L_PrintLog((char *)(DAT_0012de1c + 0x12dbde),(char *)(DAT_0012de20 + 0x12dbe0));
    if ((*(int *)(*(int *)(unaff_r5 + 0xc) + 0x680) < 9) ||
       (iVar6 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'X'), iVar6 != 0))
    {
      pcVar34 = (char *)(DAT_0012de24 + 0x12dc02);
      L_PrintLog(pcVar34,(char *)(DAT_0012de28 + 0x12dc04));
      *pcVar25 = '\0';
      if (**(char **)(unaff_r7 + DAT_0012de2c) != '\0') {
        L_PrintLog(pcVar34,(char *)(DAT_0012de30 + 0x12dc20));
        this_03 = (LotteryFeaturedDialog *)operator_new(0xb8);
        LotteryFeaturedDialog::LotteryFeaturedDialog(this_03,(ZombieCafeGameState *)unaff_r5);
        *(LotteryFeaturedDialog **)(unaff_r5 + 300) = this_03;
        (**(code **)(*(int *)this_03 + 0x1c))(this_03,0x12);
        iVar6 = DAT_0012de34;
        FUN_00118458(*(undefined4 *)(unaff_r5 + 300),
                     *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + 0x14));
        ScreenElement::setOrder
                  (*(ScreenElement **)(unaff_r5 + 300),(int)**(char **)(unaff_r7 + DAT_0012de38));
        (**(code **)(**(int **)(unaff_r5 + 300) + 0x20))(*(int **)(unaff_r5 + 300),0);
        (**(code **)(**(int **)(unaff_r5 + 0x78) + 0x2c))
                  (*(int **)(unaff_r5 + 0x78),*(undefined4 *)(unaff_r5 + 300));
        L_PrintLog((char *)(iVar6 + 0x12dc58),(char *)(DAT_0012de3c + 0x12dc78));
        LotteryFeaturedDialog::show
                  (*(LotteryFeaturedDialog **)(unaff_r5 + 300),**(int **)(unaff_r7 + DAT_0012de40),
                   *(_func_void_void_ptr **)(unaff_r7 + DAT_0012de44),unaff_r5);
        L_PrintLog((char *)(iVar6 + 0x12dc58),(char *)(DAT_0012de48 + 0x12dc94));
      }
    }
  }
  pcVar25 = *(char **)(unaff_r7 + DAT_0012de4c);
  if ((((*pcVar25 != '\0') &&
       ((*(int *)(unaff_r5 + 0xd8) == 0 || (*(char *)(*(int *)(unaff_r5 + 0xd8) + 0x14) == '\0'))))
      && ((*(int *)(unaff_r5 + 300) == 0 || (*(char *)(*(int *)(unaff_r5 + 300) + 0x14) == '\0'))))
     && ((((*(int *)(unaff_r5 + 0x130) == 0 ||
           (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) &&
          (*(char *)(*(int *)(unaff_r5 + 0xc4) + 0x14) == '\0')) &&
         (iVar6 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iRam0012de0c),'.'),
         iVar6 != 0)))) {
    L_PrintLog((char *)(DAT_0012de50 + 0x12dcf0),(char *)(DAT_0012de54 + 0x12dcf2));
    *pcVar25 = '\0';
    this_04 = (UserRankDialog *)operator_new(0xac);
    UserRankDialog::UserRankDialog
              (this_04,(ZombieCafeGameState *)unaff_r5,
               *(bool *)*(undefined4 *)(unaff_r7 + DAT_0012de58));
    *(UserRankDialog **)(unaff_r5 + 0x130) = this_04;
    (**(code **)(*(int *)this_04 + 0x1c))(this_04,0x12);
    FUN_00118458(*(undefined4 *)(unaff_r5 + 0x130),*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + 0x14))
    ;
    ScreenElement::setOrder
              (*(ScreenElement **)(unaff_r5 + 0x130),(int)**(char **)(unaff_r7 + DAT_0012de38));
    (**(code **)(**(int **)(unaff_r5 + 0x130) + 0x20))(*(int **)(unaff_r5 + 0x130),0);
    (**(code **)(**(int **)(unaff_r5 + 0x78) + 0x2c))
              (*(int **)(unaff_r5 + 0x78),*(undefined4 *)(unaff_r5 + 0x130));
    UserRankDialog::show(*(UserRankDialog **)(unaff_r5 + 0x130));
    HudElement::updateCardButton(*(HudElement **)(unaff_r5 + 200));
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 200),true);
  }
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012de5c) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012de5c) = 0;
    *(undefined1 *)(*(int *)(unaff_r5 + 0x18) + 0xc6) = 1;
  }
  if (*(byte *)(*(int *)(unaff_r5 + 0x84) + 0x80) - 1 < 2) {
    piVar7 = *(int **)(unaff_r5 + 0xf4);
    pcVar42 = *(code **)(*piVar7 + 0x44);
    Vector<String>::elementAt((int)&stack0x00000058);
    (*pcVar42)(piVar7,&stack0x00000058);
    String::~String((String *)&stack0x00000058);
    (**(code **)(**(int **)(unaff_r5 + 0xf0) + 0x20))(*(int **)(unaff_r5 + 0xf0),0);
  }
  if (unaff_r5[DAT_0012de64] != (GameStateCafe)0x0) {
    if (unaff_r5[DAT_0012de64] != (GameStateCafe)0x5) {
      FUN_0012f41e();
    }
    FUN_0012f418();
  }
  pSVar35 = *(ScreenElement **)(unaff_r5 + 0x84);
  if (1 < (byte)pSVar35[0x80] - 1) {
    FUN_0012fdf0();
  }
  uVar27 = (uint)(byte)pSVar35[100];
  if (uVar27 == 1) {
    GameStateCafe::enterTileEditMode(unaff_r5);
    FUN_0012f41e();
  }
  if (uVar27 == 2) {
    GameStateCafe::enterWallEditMode(unaff_r5);
    FUN_0012f41e();
    coprocessor_loadlong(0xf,in_cr15,extraout_r1 >> 10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar27 != 3) {
    FUN_0012fdf0();
  }
  GameStateCafe::enterExpansionPreviewMode(unaff_r5);
  FUN_0012f41e();
  pZVar43 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar6 = ZombieCafe::unhandledTouching(pZVar43);
  if ((iVar6 == 0) ||
     (iVar6 = ScreenElement::contains(pSVar35,*(long *)(pZVar43 + 0x4b8)), iVar6 != 0)) {
    pSVar35 = *(ScreenElement **)(unaff_r5 + 0x84);
    if (pSVar35[0x65] == (ScreenElement)0x0) {
      pSVar35 = (ScreenElement *)FUN_0012fdfa();
    }
    iVar6 = ScreenElement::contains(pSVar35,*(long *)(*(int *)(unaff_r5 + 0xc) + iRam0012e068));
    if (iVar6 == 0) {
      FUN_0012fdfa();
    }
  }
  pFVar36 = *(FurnitureData **)(*(int *)(unaff_r5 + 0x84) + 0xd0);
  if (pFVar36 == (FurnitureData *)0x0) {
    FUN_0012fdfa();
  }
  if ((pFVar36[0x44] == (FurnitureData)0xa) || (pFVar36[0x44] == (FurnitureData)0xc)) {
    if (pFVar36[0x38] == (FurnitureData)0x0) {
      if (*(int *)(*(ZombieCafe **)(unaff_r5 + 0xc) + DAT_0012e098) < *(int *)(pFVar36 + 0x34)) {
        FUN_0012f41e();
      }
      *(FurnitureData **)(unaff_r5 + 0x60) = pFVar36;
      GameStateCafe::completeStorePurchase(unaff_r5);
      FUN_0012f41e();
      software_interrupt(0x7c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar6 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
    if (iVar6 < *(int *)(pFVar36 + 0x34)) {
      iVar6 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012e080),'\x16');
      if (iVar6 != 0) goto LAB_0012dff8;
      pNVar32 = *(NoticeDialog **)(unaff_r5 + 0xd0);
      Vector<String>::elementAt((int)&stack0x00000098);
      Vector<String>::elementAt((int)&stack0x000000a0);
      in_stack_00000000 = (undefined1 *)0x0;
      NoticeDialog::show(pNVar32,&stack0x00000098,&stack0x000000a0);
      String::~String((String *)&stack0x000000a0);
      pSVar8 = (String *)&stack0x00000098;
    }
    else {
      *(FurnitureData **)(unaff_r5 + 0x60) = pFVar36;
      pCVar29 = *(ConfirmDialog **)(unaff_r5 + 0x80);
      Vector<String>::elementAt((int)&stack0x00000060);
      String::valueOf((int)&stack0x00000068);
      String::operator+((String *)&stack0x00000070,&stack0x00000060,&stack0x00000068);
      Vector<String>::elementAt((int)&stack0x00000078);
      String::operator+((String *)&stack0x00000080,&stack0x00000070,&stack0x00000078);
      Vector<String>::elementAt((int)&stack0x00000088);
      Vector<String>::elementAt((int)&stack0x00000090);
      in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012e07c);
      in_stack_00000004 = unaff_r5;
      ConfirmDialog::show(pCVar29,&stack0x00000080,&stack0x00000088,&stack0x00000090);
      String::~String((String *)&stack0x00000090);
      String::~String((String *)&stack0x00000088);
      String::~String((String *)&stack0x00000080);
      String::~String((String *)&stack0x00000078);
      String::~String((String *)&stack0x00000070);
      String::~String((String *)&stack0x00000068);
      pSVar8 = (String *)&stack0x00000060;
    }
    do {
      String::~String(pSVar8);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x84) + 0x65) = 0;
      FUN_0012f41e();
LAB_0012dff8:
      pCVar29 = *(ConfirmDialog **)(unaff_r5 + 0x80);
      Vector<String>::elementAt((int)&stack0x000000a8);
      Vector<String>::elementAt((int)&stack0x000000b0);
      Vector<String>::elementAt((int)&stack0x000000b8);
      in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012e094);
      in_stack_00000004 = unaff_r5;
      ConfirmDialog::show(pCVar29,&stack0x000000a8,&stack0x000000b0,&stack0x000000b8);
      String::~String((String *)&stack0x000000b8);
      String::~String((String *)&stack0x000000b0);
      pSVar8 = (String *)&stack0x000000a8;
    } while( true );
  }
  uVar11 = GameStateCafe::createFurnitureFromData(unaff_r5,pFVar36);
  iVar6 = DAT_0012e400;
  *(undefined4 *)(unaff_r5 + 0x40) = uVar11;
  unaff_r5[iVar6] = (GameStateCafe)0x0;
  *(undefined2 *)(unaff_r5 + 0x162) = 0;
  unaff_r5[0x164] = (GameStateCafe)0x0;
  iVar6 = DAT_0012e404;
  (**(code **)(**(int **)(unaff_r5 + 0x84) + 0x20))();
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e408) = 1;
  unaff_r5[iVar6] = (GameStateCafe)0x7;
  pGVar28 = unaff_r5 + 0xf8;
  (**(code **)(**(int **)pGVar28 + 0x20))();
  (**(code **)(**(int **)pGVar28 + 0x24))(*(int **)pGVar28,0xffffffff);
  piVar7 = *(int **)pGVar28;
  pcVar42 = *(code **)(*piVar7 + 0x44);
  Vector<String>::elementAt((int)&stack0x000000c0);
  (*pcVar42)(piVar7,&stack0x000000c0);
  String::~String((String *)&stack0x000000c0);
  StringBuffer::StringBuffer((StringBuffer *)&stack0x000001e0);
  Vector<String>::elementAt((int)&stack0x000000c8);
  StringBuffer::append(&stack0x000001e0,&stack0x000000c8);
  String::~String((String *)&stack0x000000c8);
  if (*(char *)(*(int *)(*(int *)(unaff_r5 + 0x84) + 0xd0) + 0x38) == '\0') {
    String::String((String *)&stack0x000000d0,(char *)(DAT_0012e414 + 0x12e14e));
    StringBuffer::append(&stack0x000001e0,&stack0x000000d0);
    String::~String((String *)&stack0x000000d0);
  }
  String::valueOf((int)&stack0x000000d8);
  StringBuffer::append(&stack0x000001e0,&stack0x000000d8);
  String::~String((String *)&stack0x000000d8);
  if (*(char *)(*(int *)(*(int *)(unaff_r5 + 0x84) + 0xd0) + 0x38) != '\0') {
    Vector<String>::elementAt((int)&stack0x000000e0);
    StringBuffer::append(&stack0x000001e0,&stack0x000000e0);
    String::~String((String *)&stack0x000000e0);
  }
  piVar7 = *(int **)(unaff_r5 + 0xfc);
  pcVar42 = *(code **)(*piVar7 + 0x44);
  StringBuffer::toString();
  (*pcVar42)(piVar7,&stack0x000000e8);
  String::~String((String *)&stack0x000000e8);
  String::String((String *)&stack0x000000f0,
                 (String *)(*(int *)(*(int *)(unaff_r5 + 0x40) + 0x38) + 100));
  GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x000000f0);
  String::~String((String *)&stack0x000000f0);
  piVar7 = *(int **)(unaff_r5 + 0x100);
  pcVar42 = *(code **)(*piVar7 + 0x44);
  String::String((String *)&stack0x000000f8,(char *)(DAT_0012e41c + 0x12e1f0));
  __fixsfsi(*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x40) + 0x38) + 0x6c));
  String::valueOf((int)&stack0x00000100);
  String::operator+((String *)&stack0x00000108,&stack0x000000f8,&stack0x00000100);
  String::String((String *)&stack0x00000110,(char *)(DAT_0012e420 + 0x12e218));
  String::operator+((String *)&stack0x00000118,&stack0x00000108,&stack0x00000110);
  (*pcVar42)(piVar7,&stack0x00000118);
  String::~String((String *)&stack0x00000118);
  String::~String((String *)&stack0x00000110);
  String::~String((String *)&stack0x00000108);
  String::~String((String *)&stack0x00000100);
  String::~String((String *)&stack0x000000f8);
  (**(code **)(**(int **)(unaff_r5 + 0xe8) + 0x20))(*(int **)(unaff_r5 + 0xe8),1);
  if (*(int *)(*(int *)(unaff_r5 + 0xc) + 0x4b8) == 0) {
    lVar15 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x14))
    ;
    iVar6 = *(int *)(unaff_r5 + 0x40);
    lVar15 = Cafe::worldToDiamondCoords(lVar15);
    lVar15 = Cafe::diamondToStaggeredCoords(lVar15);
    uVar3 = Cafe::staggeredCoordsToIndex(lVar15);
    *(undefined2 *)(iVar6 + 0x2c) = uVar3;
    piVar7 = *(int **)(unaff_r5 + 0x40);
    pcVar42 = *(code **)(*piVar7 + 0xc);
    uVar11 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x14),(int)(short)piVar7[0xb]);
    (*pcVar42)(piVar7,uVar11);
    pFVar37 = *(Furniture **)(unaff_r5 + 0x40);
    iVar6 = Furniture::canRotate(pFVar37);
    if ((iVar6 != 0) && (*(char *)(*(int *)(pFVar37 + 0x38) + 0x44) != '\x06')) {
      iVar6 = *(int *)(pFVar37 + 0x20);
      lVar15 = CFPoint::subtract(*(long *)(pFVar37 + 4),
                                 (int)(short)iVar6 >> 1 & 0xffffU | (iVar6 >> 0x11) << 0x10);
      CFPoint::add(lVar15,(iVar6 >> 0x10) << 0x10);
      uVar11 = GameStateCafe::worldToScreenCoords((long)unaff_r5);
      FUN_00118458(*(undefined4 *)(unaff_r5 + 0x170),uVar11);
      *(undefined2 *)(unaff_r5 + 0x16c) = **(undefined2 **)(unaff_r7 + DAT_0012e424);
    }
    *(undefined4 *)(unaff_r5 + 0x44) = *(undefined4 *)(unaff_r5 + 0x40);
  }
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)&stack0x000001e0);
  FUN_0012f41e();
  pZVar43 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar6 = ZombieCafe::unhandledTouching(pZVar43);
  if ((iVar6 == 0) ||
     (iVar6 = ScreenElement::contains
                        (*(ScreenElement **)(unaff_r5 + 0xbc),*(long *)(pZVar43 + 0x4b8)),
     iVar6 != 0)) {
    pSVar35 = *(ScreenElement **)(unaff_r5 + 0xbc);
    if (pSVar35[0x66] == (ScreenElement)0x0) {
      pSVar35 = (ScreenElement *)FUN_0012fe04();
    }
    iVar6 = ScreenElement::contains(pSVar35,*(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e428));
    if (iVar6 == 0) {
      FUN_0012fe04();
    }
  }
  pGVar28 = unaff_r5 + 0xbc;
  iVar6 = *(int *)pGVar28;
  pFVar36 = *(FurnitureData **)(iVar6 + 0xe4);
  if (pFVar36 == (FurnitureData *)0x0) {
    FUN_0012fe04();
  }
  FVar1 = pFVar36[0x44];
  if (FVar1 == (FurnitureData)0xc) {
LAB_0012e362:
    puts((char *)(DAT_0012e42c + 0x12e368));
    FUN_0012f41e();
LAB_0012e36e:
    if (*(char *)(iVar6 + 0x65) == '\x01') {
      unaff_r5[DAT_0012e404] = (GameStateCafe)0xd;
      piVar7 = *(int **)(unaff_r5 + 0xf8);
      (**(code **)(*piVar7 + 0x20))(piVar7,0);
      String::String((String *)&stack0x00000120,(String *)(*(int *)(*(int *)pGVar28 + 0xe4) + 100));
      GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x00000120);
      String::~String((String *)&stack0x00000120);
      (**(code **)(**(int **)(unaff_r5 + 0xfc) + 0x20))(*(int **)(unaff_r5 + 0xfc),0);
      (**(code **)(**(int **)(unaff_r5 + 0xbc) + 0x20))(*(int **)(unaff_r5 + 0xbc),0);
      (**(code **)(**(int **)(unaff_r5 + 0x100) + 0x20))(*(int **)(unaff_r5 + 0x100),0);
      pFVar36 = *(FurnitureData **)(unaff_r5 + 0xf4);
      pcVar42 = *(code **)(*(int *)pFVar36 + 0x44);
      String::String((String *)&stack0x00000128,(char *)(DAT_0012e430 + 0x12e3dc));
      (*pcVar42)(pFVar36,&stack0x00000128);
      String::~String((String *)&stack0x00000128);
      (**(code **)(**(int **)(unaff_r5 + 0xe8) + 0x20))(*(int **)(unaff_r5 + 0xe8),1);
      pGVar28 = unaff_r5 + 0xf0;
    }
    else {
      unaff_r5[DAT_0012e7c8] = (GameStateCafe)0xd;
      piVar7 = *(int **)(unaff_r5 + 0xf8);
      (**(code **)(*piVar7 + 0x20))(piVar7,0);
      uVar11 = GameStateCafe::createFurnitureFromData(unaff_r5,pFVar36);
      iVar6 = DAT_0012e7cc;
      *(undefined4 *)(unaff_r5 + 0x40) = uVar11;
      unaff_r5[iVar6] = (GameStateCafe)0x0;
      *(undefined2 *)(unaff_r5 + 0x162) = 0;
      unaff_r5[0x164] = (GameStateCafe)0x0;
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e7d0) = 1;
      (**(code **)(**(int **)(unaff_r5 + 0xf0) + 0x20))();
      String::String((String *)&stack0x00000130,(String *)(*(int *)(*(int *)pGVar28 + 0xe4) + 100));
      GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x00000130);
      String::~String((String *)&stack0x00000130);
      (**(code **)(**(int **)(unaff_r5 + 0xfc) + 0x20))(*(int **)(unaff_r5 + 0xfc),0);
      (**(code **)(**(int **)(unaff_r5 + 0xbc) + 0x20))(*(int **)(unaff_r5 + 0xbc),0);
      (**(code **)(**(int **)(unaff_r5 + 0x100) + 0x20))(*(int **)(unaff_r5 + 0x100),0);
      pGVar28 = unaff_r5 + 0xe8;
    }
    (**(code **)(**(int **)pGVar28 + 0x20))(*(int **)pGVar28,0);
    FUN_0012f41e();
  }
  else {
    if (FVar1 == (FurnitureData)0x10) goto LAB_0012e36e;
    if (FVar1 == (FurnitureData)0xa) goto LAB_0012e362;
  }
  (**(code **)(**(int **)(unaff_r5 + 0x100) + 0x20))(*(int **)(unaff_r5 + 0x100),0);
  iVar9 = GameStateCafe::createFurnitureFromData(unaff_r5,pFVar36);
  iVar6 = DAT_0012e7d4;
  *(int *)(unaff_r5 + 0x40) = iVar9;
  iVar9 = *(int *)(*(int *)(iVar9 + 0x38) + 0x24);
  if ((iVar9 == **(int **)(unaff_r7 + iVar6)) || (iVar9 == 0x1fa)) {
    puts((char *)(DAT_0012e7d8 + 0x12e4fa));
    iVar6 = *(int *)(unaff_r5 + 0x40);
    CapcomDate::today((CapcomDate *)&stack0x00000138);
    memcpy((void *)(iVar6 + 0x56),&stack0x00000138,7);
  }
  unaff_r5[DAT_0012e7cc] = (GameStateCafe)0x0;
  *(undefined2 *)(unaff_r5 + 0x162) = 0;
  unaff_r5[0x164] = (GameStateCafe)0x0;
  pGVar28 = unaff_r5 + 0xf8;
  (**(code **)(**(int **)(unaff_r5 + 0xbc) + 0x20))();
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e7d0) = 1;
  unaff_r5[DAT_0012e7c8] = (GameStateCafe)0xa;
  (**(code **)(**(int **)pGVar28 + 0x20))();
  (**(code **)(**(int **)pGVar28 + 0x24))(*(int **)pGVar28,0xffffffff);
  piVar7 = *(int **)pGVar28;
  pcVar42 = *(code **)(*piVar7 + 0x44);
  Vector<String>::elementAt((int)&stack0x00000140);
  (*pcVar42)(piVar7,&stack0x00000140);
  String::~String((String *)&stack0x00000140);
  piVar7 = *(int **)(unaff_r5 + 0xfc);
  pcVar42 = *(code **)(*piVar7 + 0x44);
  String::String((String *)&stack0x00000148,(char *)(DAT_0012e7e0 + 0x12e58e));
  (*pcVar42)(piVar7,&stack0x00000148);
  String::~String((String *)&stack0x00000148);
  piVar7 = *(int **)(unaff_r5 + 0x100);
  pcVar42 = *(code **)(*piVar7 + 0x44);
  String::String((String *)&stack0x00000150,(char *)(DAT_0012e7e4 + 0x12e5ac));
  (*pcVar42)(piVar7,&stack0x00000150);
  String::~String((String *)&stack0x00000150);
  String::String((String *)&stack0x00000158,
                 (String *)(*(int *)(*(int *)(unaff_r5 + 0x40) + 0x38) + 100));
  GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x00000158);
  String::~String((String *)&stack0x00000158);
  piVar7 = *(int **)(unaff_r5 + 0xf4);
  pcVar42 = *(code **)(*piVar7 + 0x44);
  Vector<String>::elementAt((int)&stack0x00000160);
  (*pcVar42)(piVar7,&stack0x00000160);
  String::~String((String *)&stack0x00000160);
  (**(code **)(**(int **)(unaff_r5 + 0xe8) + 0x20))(*(int **)(unaff_r5 + 0xe8),1);
  piVar7 = *(int **)(unaff_r5 + 0x104);
  pcVar42 = *(code **)(*piVar7 + 0x44);
  String::String((String *)&stack0x00000168,(char *)(DAT_0012e7ec + 0x12e620));
  (*pcVar42)(piVar7,&stack0x00000168);
  String::~String((String *)&stack0x00000168);
  (**(code **)(**(int **)(unaff_r5 + 0xf0) + 0x20))(*(int **)(unaff_r5 + 0xf0),1);
  iVar6 = *(int *)(unaff_r5 + 0xc);
  if (*(int *)(iVar6 + 0x4b8) != 0) {
    FUN_0012f41e();
  }
  lVar15 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(iVar6 + 0x14));
  iVar6 = *(int *)(unaff_r5 + 0x40);
  lVar15 = Cafe::worldToDiamondCoords(lVar15);
  lVar15 = Cafe::diamondToStaggeredCoords(lVar15);
  uVar3 = Cafe::staggeredCoordsToIndex(lVar15);
  *(undefined2 *)(iVar6 + 0x2c) = uVar3;
  piVar7 = *(int **)(unaff_r5 + 0x40);
  pcVar42 = *(code **)(*piVar7 + 0xc);
  uVar11 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x14),(int)(short)piVar7[0xb]);
  (*pcVar42)(piVar7,uVar11);
  pZVar43 = *(ZombieCafe **)(unaff_r5 + 0x40);
  iVar6 = Furniture::canRotate((Furniture *)pZVar43);
  if ((iVar6 != 0) && (*(char *)(*(int *)((Furniture *)pZVar43 + 0x38) + 0x44) != '\x06')) {
    iVar6 = *(int *)((Furniture *)pZVar43 + 0x20);
    lVar15 = CFPoint::subtract(*(long *)((Furniture *)pZVar43 + 4),
                               (int)(short)iVar6 >> 1 & 0xffffU | (iVar6 >> 0x11) << 0x10);
    CFPoint::add(lVar15,(iVar6 >> 0x10) << 0x10);
    uVar11 = GameStateCafe::worldToScreenCoords((long)unaff_r5);
    FUN_00118458(*(undefined4 *)(unaff_r5 + 0x170),uVar11);
    pZVar43 = (ZombieCafe *)0x16c;
    *(undefined2 *)(unaff_r5 + 0x16c) = **(undefined2 **)(unaff_r7 + DAT_0012e7f0);
  }
  *(undefined4 *)(unaff_r5 + 0x44) = *(undefined4 *)(unaff_r5 + 0x40);
  FUN_0012f41e();
  if ((int)**(short **)(unaff_r7 + DAT_0012e7f4) < *(int *)(pZVar43 + DAT_0012e7f8)) {
    FUN_0012fe14();
  }
  iVar6 = ZombieCafe::touchWasPinch(pZVar43);
  if (iVar6 != 0) {
    FUN_0012fe14();
  }
  if (*(int *)(pZVar43 + 0x4d0) <= **(int **)(unaff_r7 + DAT_0012e7fc)) {
    FUN_0012fe14();
  }
  iVar6 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(pZVar43 + DAT_0012e800),'!');
  if (iVar6 == 0) {
    FUN_0012fe14();
  }
  GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x4b8));
  pFVar37 = (Furniture *)Cafe::pickCafeObject(*(long *)(unaff_r5 + 0x14));
  if (pFVar37 == (Furniture *)0x0) {
    FUN_0012f41e();
  }
  iVar6 = (**(code **)(*(int *)pFVar37 + 0x14))(pFVar37);
  fVar45 = extraout_s0_00;
  if (iVar6 != 1) {
    fVar45 = (float)FUN_0012fe28();
  }
  FVar2 = pFVar37[0x2e];
  pFVar30 = (Furniture *)(uint)(byte)FVar2;
  if (pFVar30 != (Furniture *)0x0) {
    fVar45 = (float)FUN_0012fe28();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar45);
  iVar9 = DAT_0012e7cc;
  *(Furniture **)(unaff_r5 + 0x40) = pFVar37;
  unaff_r5[iVar9] = SUB41(iVar6,0);
  *(undefined2 *)(unaff_r5 + 0x162) = *(undefined2 *)(pFVar37 + 0x2c);
  *(Furniture *)(unaff_r5 + 0x164) = pFVar37[0x34];
  Cafe::removeFurniture(*(Cafe **)(unaff_r5 + 0x14),pFVar37);
  if (*(int *)(*(int *)(unaff_r5 + 0x18) + 0x88) == *(int *)(unaff_r5 + 0x40)) {
    *(int *)(*(int *)(unaff_r5 + 0x18) + 0x88) = (int)pFVar30;
    pFVar37 = pFVar30;
  }
  for (iVar6 = 0; iVar6 < *(int *)(unaff_r5 + 0x20) + 1; iVar6 = iVar6 + 1) {
    puVar33 = (undefined4 *)(*(int *)(iVar6 * 4 + *(int *)(unaff_r5 + 0x24)) + 0x88);
    pFVar37 = (Furniture *)*puVar33;
    if (pFVar37 == *(Furniture **)(unaff_r5 + 0x40)) {
      *puVar33 = 0;
    }
  }
  for (iVar6 = 0; iVar9 = DAT_0012ebb0, iVar6 < *(int *)(unaff_r5 + 0x2c) + 1; iVar6 = iVar6 + 1) {
    puVar33 = (undefined4 *)(*(int *)(iVar6 * 4 + *(int *)(unaff_r5 + 0x30)) + 0x88);
    pFVar37 = (Furniture *)*puVar33;
    if (pFVar37 == *(Furniture **)(unaff_r5 + 0x40)) {
      *puVar33 = 0;
    }
  }
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebac) = 1;
  unaff_r5[iVar9] = (GameStateCafe)0x2;
  fVar45 = (float)FUN_0012f41e();
  if (*(int *)(pFVar37 + 0x44) == 0) {
    fVar45 = (float)FUN_0012f41e();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar45);
  iVar6 = DAT_0012ebb4;
  piVar7 = *(int **)(pFVar37 + 0x44);
  *(int **)(unaff_r5 + 0x40) = piVar7;
  *(Furniture *)(unaff_r5 + iVar6) = FVar2;
  *(Furniture **)(unaff_r5 + 0x48) = pFVar37;
  pcVar42 = *(code **)(*piVar7 + 0xc);
  uVar11 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x4b8));
  (*pcVar42)(piVar7,uVar11);
  *(undefined4 *)(pFVar37 + 0x44) = 0;
  iVar6 = DAT_0012ebb0;
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebac) = 1;
  *(Furniture *)(unaff_r5 + iVar6) = FVar2;
  uVar46 = FUN_0012f41e();
  pCVar44 = DAT_0012ebb8;
  if (*(short *)(unaff_r5 + 0x16c) == 0) {
    uVar46 = FUN_0012fe3e();
  }
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x170),*(long *)(pCVar44 + iVar6),(float)uVar46,
                     (float)((ulonglong)uVar46 >> 0x20));
  if (iVar6 == 0) {
    FUN_0012fe3e();
  }
  *(undefined2 *)(unaff_r5 + 0x16c) = **(undefined2 **)(unaff_r7 + DAT_0012ebbc);
  pFVar37 = *(Furniture **)(unaff_r5 + 0x44);
  if (*(char *)(*(int *)(pFVar37 + 0x38) + 0x44) == '\x04') {
    bVar23 = (char)pFVar37[0x34] + 1U & 3;
  }
  else {
    bVar23 = (byte)pFVar37[0x34] ^ 1;
  }
  Furniture::setOrientation(pFVar37,bVar23);
  iVar6 = *(int *)(unaff_r5 + 0xc);
  fVar45 = (float)CapcomMath::random(3);
  ZombieCafe::playEffect(iVar6,fVar45);
  FUN_0012f41e();
  iVar6 = (**(code **)(*(int *)pCVar44 + 0x14))(pCVar44);
  if (iVar6 == 3) {
    pCVar16 = (CharacterInstance *)Cafe::getSelectedObject(*(Cafe **)(unaff_r5 + 0x14));
    if (pCVar16 == pCVar44) {
      FUN_0012fe5e();
    }
    if (*(char *)(*(int *)(pCVar44 + 0x8c) + 0x24) != '\0') {
      FUN_0012fe5e();
    }
    iVar6 = (**(code **)(*(int *)pCVar44 + 0x20))(pCVar44);
    if ((iVar6 == 1) &&
       (iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar44 + 0x8c) + 0x40),0), iVar6 != 0)) {
      FUN_0012fe5e();
    }
    GameStateCafe::select(unaff_r5,pCVar44);
    Store::close(*(Store **)(unaff_r5 + 0x84));
    CookCommandBar::close(*(CookCommandBar **)(unaff_r5 + 0xb4));
    pGVar28 = unaff_r5 + 0xac;
    PlantCommandBar::close(*(PlantCommandBar **)(unaff_r5 + 0xb8));
    CharacterCommandBar::open(*(CharacterCommandBar **)pGVar28);
    CharacterCommandBar::resetButtons();
    CharacterCommandBar::setCharacter(*(CharacterCommandBar **)pGVar28,pCVar44);
    Storage::close(*(Storage **)(unaff_r5 + 0xbc));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r5 + 0xc0));
    iVar6 = (**(code **)(*(int *)pCVar44 + 0x20))(pCVar44);
    if (iVar6 == 1) {
      iVar6 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'\x16');
      if (iVar6 != 0) {
        uVar11 = CharacterCommandBar::addInfectButton
                           (*(CharacterCommandBar **)pGVar28,
                            *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebe0),
                            unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x10c) = uVar11;
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'L',true);
      }
      iVar6 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(pCVar44 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar45 = (float)CapcomMath::random(8);
      }
      else {
        fVar45 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar6,fVar45);
      iVar6 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'\n');
      if (iVar6 != 0) {
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)(unaff_r5 + 0xac),
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc4),unaff_r5);
      }
    }
    else {
      if (iVar6 != 0) {
        if (iVar6 != 2) {
          FUN_0012eca0();
          return;
        }
        CharacterInstance::groan(pCVar44);
        if (*(char *)(*(int *)(pCVar44 + 0x8c) + 0x44) == '\x05') {
          if (*(StatusNote **)(pCVar44 + 0x30) != (StatusNote *)0x0) {
            Cafe::removeStatusNote(*(Cafe **)(unaff_r5 + 0x14),*(StatusNote **)(pCVar44 + 0x30));
            if (*(int **)(pCVar44 + 0x30) != (int *)0x0) {
              (**(code **)(**(int **)(pCVar44 + 0x30) + 4))();
              *(undefined4 *)(pCVar44 + 0x30) = 0;
            }
          }
          CharacterInstance::stopTasks(pCVar44);
          TutorialSystem::triggerEvent
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'=',true);
          Quest::runQuest(*(int *)(*(int *)(unaff_r5 + 0xc) + 0x40),0x2e,(int *)0xffffffff);
        }
        pGVar28 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar28,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc4),unaff_r5);
        if (*(char *)(*(int *)(pCVar44 + 0x8c) + 0x44) == '\x06') {
          CharacterCommandBar::addReviveButton
                    (*(CharacterCommandBar **)pGVar28,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc8),unaff_r5);
          FUN_0012eaea();
          return;
        }
        uVar11 = CharacterCommandBar::addHealButton
                           (*(CharacterCommandBar **)pGVar28,
                            *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebcc),
                            unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x114) = uVar11;
        if (*(char *)(*(int *)(pCVar44 + 0x8c) + 0x44) == '\x03') {
          CharacterCommandBar::addWorkButton
                    (*(CharacterCommandBar **)pGVar28,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd0),unaff_r5);
        }
        else {
          uVar11 = CharacterCommandBar::addRestButton
                             (*(CharacterCommandBar **)pGVar28,
                              *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd4),
                              unaff_r5);
          *(undefined4 *)(unaff_r5 + 0x110) = uVar11;
        }
        if (3 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) {
          CharacterCommandBar::addPowerupButton
                    (*(CharacterCommandBar **)(unaff_r5 + 0xac),
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd8),unaff_r5);
        }
        if (3 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) {
          CharacterCommandBar::addLockerButton
                    (*(CharacterCommandBar **)(unaff_r5 + 0xac),
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebdc),unaff_r5);
        }
        iVar6 = *(int *)(unaff_r5 + 0xc);
        if (*(int *)(iVar6 + 0x680) < 4) {
          FUN_0012fe72();
        }
        iVar6 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(iVar6 + DAT_0012ebc0),']');
        if (iVar6 != 0) {
          FUN_0012fe72();
        }
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'^',true);
        CharacterCommandBar::layout(*(CharacterCommandBar **)(unaff_r5 + 0xac));
        if (pCVar44[0xc6] == (CharacterInstance)0x0) {
          FUN_0012eca0();
          return;
        }
        CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
        pCVar44[0xc6] = (CharacterInstance)0x0;
        FUN_0012eca0();
        return;
      }
      iVar6 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(pCVar44 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar45 = (float)CapcomMath::random(8);
      }
      else {
        fVar45 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar6,fVar45);
      iVar6 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef14),'\x16');
      if (iVar6 != 0) {
        pGVar28 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar28,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef18),unaff_r5);
        CharacterCommandBar::addChefButton
                  (*(CharacterCommandBar **)pGVar28,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef1c),unaff_r5);
        if (unaff_r5[0x19a] == (GameStateCafe)0x0) {
          CharacterCommandBar::addScreenshotButton
                    (*(CharacterCommandBar **)pGVar28,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef20),unaff_r5);
        }
      }
      if (pCVar44[0xc6] != (CharacterInstance)0x0) {
        CharacterCommandBar::setChefButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
        pCVar44[0xc6] = (CharacterInstance)0x0;
      }
    }
    CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
    FUN_0012eca0();
    return;
  }
  if (iVar6 == 1) {
    uVar27 = *(byte *)(*(int *)(pCVar44 + 0x38) + 0x44) - 1;
    if (uVar27 < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x0012ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&switchD_0012ecc0::switchdataD_0012ecc4 +
                (uint)(&switchD_0012ecc0::switchdataD_0012ecc4)[uVar27] * 2 + 1))();
      return;
    }
    if (*(short *)(pCVar44 + 0x42) == 0) {
      sVar4 = *(short *)(pCVar44 + 0x44);
      if (0 < sVar4) {
        iVar6 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(unaff_r5 + 0xc));
        fVar45 = extraout_s0_01;
        if (iVar6 == 0) {
          pCVar38 = *(Cafe **)(unaff_r5 + 0x14);
          String::valueOf((int)&stack0x00000198);
          pSVar17 = (StatusNote *)operator_new(0x30);
          in_stack_00000000 = (undefined1 *)**(uint **)(unaff_r7 + DAT_0012f62c);
          in_stack_00000004 = (GameStateCafe *)0xffffffff;
          in_stack_00000008 = 0;
          StatusNote::StatusNote(pSVar17,pCVar44,1,&stack0x00000198);
          Cafe::addStatusNote(pCVar38,pSVar17);
          String::~String((String *)&stack0x00000198);
          fVar45 = (float)ZombieCafe::addXp(*(ZombieCafe **)(unaff_r5 + 0xc),(int)sVar4);
        }
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar45);
        pCVar44 = pCVar44 + 6;
        goto LAB_0012f310;
      }
    }
    else {
      *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) =
           *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) + (int)*(short *)(pCVar44 + 0x42);
      pCVar38 = *(Cafe **)(unaff_r5 + 0x14);
      String::valueOf((int)&stack0x00000190);
      pSVar17 = (StatusNote *)operator_new(0x30);
      in_stack_00000000 = (undefined1 *)**(uint **)(unaff_r7 + DAT_0012f2a4);
      in_stack_00000008 = 0;
      in_stack_00000004 = (GameStateCafe *)0xffffffff;
      StatusNote::StatusNote(pSVar17,pCVar44,0,&stack0x00000190);
      Cafe::addStatusNote(pCVar38,pSVar17);
      fVar45 = (float)String::~String((String *)&stack0x00000190);
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar45);
      pCVar44 = pCVar44 + 4;
LAB_0012f310:
      *(undefined2 *)(pCVar44 + 0x3e) = 0;
    }
    if (*(int *)(unaff_r5 + 0x54) == 0) {
      FUN_0012f41e();
      return;
    }
  }
  else if ((iVar6 == 2) &&
          (iVar9 = Cafe::doorPicked(*(long *)(unaff_r5 + 0x14)), iVar6 = DAT_0012f634, iVar9 != 0))
  {
    iVar9 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f634),'\x16');
    if (iVar9 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),
                        (bool)((byte)(*(Cafe **)(unaff_r5 + 0x14))[100] ^ 1),true);
      FUN_0012f41e();
      return;
    }
    iVar10 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'Q');
    if (iVar10 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),true,false);
      fVar45 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'\x04',true)
      ;
      in_stack_00000000 = (undefined1 *)iVar9;
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,3,fVar45,false);
      FUN_0012f41e();
      return;
    }
  }
  pZVar43 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar6 = ZombieCafe::unhandledTouching(pZVar43);
  if ((iVar6 != 0) ||
     ((unaff_r5[DAT_0012f638] == (GameStateCafe)0x9 && (*(int *)(pZVar43 + 0x4b8) != 0)))) {
    iVar6 = ZombieCafe::touchWasPinch(pZVar43);
    if (iVar6 != 0) {
      uVar31 = *(undefined4 *)(unaff_r5 + 0x1e4);
      __divsf3(*(undefined4 *)(pZVar43 + DAT_0012f63c),*(undefined4 *)(pZVar43 + 0x4c0));
      iVar6 = CapcomApp::getInstance();
      pZVar43 = *(ZombieCafe **)(iVar6 + 4);
      uVar11 = ZombieCafe::getCafeZoomParam(pZVar43,extraout_s0_02,extraout_s1_00);
      *(undefined4 *)(unaff_r5 + 0x1e4) = uVar11;
      iVar6 = __aeabi_fcmpeq(uVar31,uVar11);
      if (iVar6 == 0) {
        lVar15 = *(long *)(unaff_r5 + 0x1e0);
        lVar18 = CFPoint::subtract(*(long *)(pZVar43 + 0x4b8),lVar15);
        lVar19 = CFPoint::multiplyf(lVar18,extraout_s0_03);
        lVar18 = CFPoint::subtract(lVar19,lVar18);
        uVar11 = CFPoint::subtract(lVar15,lVar18);
        *(undefined4 *)(unaff_r5 + 0x1e0) = uVar11;
      }
    }
    iVar6 = *(int *)(unaff_r5 + 0xc);
    if ((int)**(short **)(unaff_r7 + DAT_0012f640) < *(int *)(iVar6 + DAT_0012f644)) {
      uVar11 = __floatsisf((*(int *)(iVar6 + 0x4b8) >> 0x10) -
                           (*(int *)(iVar6 + DAT_0012f648) >> 0x10));
      iVar9 = DAT_0012f648;
      *(undefined4 *)(unaff_r5 + 0x1d8) = uVar11;
      uVar11 = __floatsisf((int)*(short *)(iVar6 + 0x4b8) - (int)*(short *)(iVar6 + iVar9));
      *(undefined4 *)(unaff_r5 + 0x1dc) = uVar11;
    }
    else {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  lVar15 = *(long *)(unaff_r5 + 0x1e0);
  uVar27 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1dc));
  iVar6 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1d8));
  uVar27 = CFPoint::add(lVar15,iVar6 << 0x10 | uVar27 & 0xffff);
  *(uint *)(unaff_r5 + 0x1e0) = uVar27;
  iVar9 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x18);
  iVar6 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x1c);
  uVar39 = *(undefined4 *)(unaff_r5 + 0x1e4);
  uVar11 = __floatsisf(iVar9 >> 0x10);
  uVar11 = __mulsf3(uVar11,uVar39);
  ceilf(__x);
  uVar31 = __floatsisf((int)(short)iVar9);
  uVar31 = __mulsf3(uVar31,uVar39);
  ceilf(__x_00);
  uVar20 = __floatsisf((int)(short)iVar6);
  __mulsf3(uVar20,uVar39);
  sVar4 = __fixsfsi();
  uVar20 = __floatsisf(iVar6 >> 0x10);
  __mulsf3(uVar20,uVar39);
  uVar21 = __fixsfsi();
  sVar5 = __fixsfsi(uVar31);
  uVar22 = __fixsfsi(uVar11);
  iVar6 = -((int)uVar27 >> 0x10);
  if (iVar6 < (short)uVar21) {
    uVar27 = (uVar21 & 0xffff) * -0x10000 | uVar27 & 0xffff;
LAB_0012f5f8:
    *(uint *)(unaff_r5 + 0x1e0) = uVar27;
  }
  else {
    uVar21 = ((uVar21 & 0xffff) + (uVar22 & 0xffff)) - 1;
    iVar9 = (int)(short)uVar21 - (int)(short)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12);
    if (-iVar9 != (int)uVar27 >> 0x10 && iVar9 <= iVar6) {
      uVar27 = ((uint)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12) - (uVar21 & 0xffff)) * 0x10000 |
               uVar27 & 0xffff;
      goto LAB_0012f5f8;
    }
  }
  uVar27 = *(uint *)(unaff_r5 + 0x1e0);
  iVar6 = -(int)(short)uVar27;
  if (iVar6 < sVar4) {
    *(uint *)(unaff_r5 + 0x1e0) = (uint)(ushort)-sVar4 | uVar27 & 0xffff0000;
  }
  else {
    sVar4 = sVar5 + -1 + sVar4;
    iVar9 = (int)sVar4 - (int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    if (-iVar9 != (int)(short)uVar27 && iVar9 <= iVar6) {
      *(uint *)(unaff_r5 + 0x1e0) =
           (uint)(ushort)(*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10) - sVar4) | uVar27 & 0xffff0000
      ;
    }
  }
  uVar20 = *(undefined4 *)(unaff_r5 + 0x1d8);
  puVar33 = *(undefined4 **)(unaff_r7 + DAT_0012f9b0);
  uVar11 = __floatsisf(in_stack_00000020);
  uVar31 = __mulsf3(uVar11,*puVar33);
  iVar6 = __aeabi_fcmplt(uVar31,0x3f800000);
  uVar11 = uVar31;
  if (iVar6 == 0) {
    uVar11 = 0x3f800000;
  }
  uVar11 = __subsf3(0x3f800000,uVar11);
  iVar9 = __mulsf3(uVar20,uVar11);
  *(int *)(unaff_r5 + 0x1d8) = iVar9;
  uVar11 = *(undefined4 *)(unaff_r5 + 0x1dc);
  if (iVar6 == 0) {
    uVar31 = 0x3f800000;
  }
  uVar31 = __subsf3(0x3f800000,uVar31);
  iVar6 = __mulsf3(uVar11,uVar31);
  *(int *)(unaff_r5 + 0x1dc) = iVar6;
  iVar10 = __aeabi_fcmpge(iVar9,0);
  if (iVar10 == 0) {
    iVar9 = iVar9 + -0x80000000;
  }
  uVar11 = **(undefined4 **)(unaff_r7 + DAT_0012f9b4);
  iVar9 = __aeabi_fcmplt(iVar9,uVar11);
  if (iVar9 != 0) {
    iVar9 = __aeabi_fcmpge(iVar6,0);
    if (iVar9 == 0) {
      iVar6 = iVar6 + -0x80000000;
    }
    iVar6 = __aeabi_fcmplt(iVar6,uVar11);
    if (iVar6 != 0) {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  GameStateCafe::tickFiredZombies(unaff_r5);
  GameStateCafe::tickStaff(unaff_r5,in_stack_00000020);
  GameStateCafe::tickZombieWorkInterruptions(unaff_r5,in_stack_00000020);
  GameStateCafe::tickCustomers(unaff_r5,in_stack_00000020);
  GameStateCafe::tickLockerZombies(unaff_r5,in_stack_00000020);
  iVar6 = *(int *)(unaff_r5 + 0x54);
  if (iVar6 != 0) {
    iVar9 = *(int *)(unaff_r5 + 0xc);
    if (iVar6 == *(int *)(unaff_r5 + 0x18)) {
      this_05 = *(TutorialSystem **)(iVar9 + DAT_0012f9b8);
      uVar24 = '\x01';
    }
    else if ((iVar6 == *(int *)(unaff_r5 + 0x5c)) && (*(char *)(*(int *)(iVar6 + 0x8c) + 4) == '\0')
            ) {
      uVar24 = '\r';
      this_05 = *(TutorialSystem **)(iVar9 + DAT_0012f9b8);
    }
    else {
      uVar24 = '\x10';
      this_05 = *(TutorialSystem **)(iVar9 + DAT_0012f9b8);
    }
    TutorialSystem::triggerEvent(this_05,uVar24,true);
  }
  iVar6 = ZombieCafe::IsMusicPlaying();
  if ((iVar6 == 0) &&
     (in_stack_00000020 = *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) - in_stack_00000020,
     *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) = in_stack_00000020, iVar6 = DAT_0012f9c0,
     in_stack_00000020 < 1)) {
    if (unaff_r5[DAT_0012f9c0] == (GameStateCafe)0x0) {
      L_PrintLog((char *)(DAT_0012f9c4 + 0x12f7de),(char *)(DAT_0012f9c8 + 0x12f7e0));
      ZombieCafe::PlayCafeMusic();
      unaff_r5[iVar6] = (GameStateCafe)0x1;
    }
    else {
      ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(unaff_r5 + 0xc));
      unaff_r5[iVar6] = (GameStateCafe)0x0;
    }
    *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) =
         **(undefined4 **)(unaff_r7 + DAT_0012f9cc);
  }
  uVar27 = (uint)(byte)unaff_r5[DAT_0012f9d0];
  if ((uVar27 - 1 < 3) || (uVar27 == 7)) {
    cVar26 = '\0';
  }
  else {
    cVar26 = '\x01' - (uVar27 == 10);
  }
  *(char *)(*(int *)(unaff_r5 + 0x14) + 0xc9) = cVar26;
  iVar6 = DAT_0012f9d8;
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) = 0;
    pcVar25 = (char *)(iVar6 + 0x12f82e);
    L_PrintLog(pcVar25,(char *)(DAT_0012f9dc + 0x12f832));
    if ((((*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x14) == '\0') &&
         (*(char *)(*(int *)(unaff_r5 + 0x7c) + 0x14) == '\0')) &&
        (*(char *)(*(int *)(unaff_r5 + 0x80) + 0x14) == '\0')) &&
       (iVar6 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9b8),'\x01'),
       iVar6 != 0)) {
      L_PrintLog(pcVar25,(char *)(DAT_0012f9e0 + 0x12f876));
      if ((*(int *)(unaff_r5 + 0x130) == 0) ||
         (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) {
        if (((*(char *)(*(int *)(unaff_r5 + 0x124) + 0x14) == '\0') &&
            (*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) == '\0')) &&
           ((*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) == '\0' &&
            (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) == '\0')))) {
          this_06 = *(LotteryDialog **)(unaff_r5 + 0xa4);
          if (this_06 == (LotteryDialog *)0x0) {
            L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
            pCVar29 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001b8);
            Vector<String>::elementAt((int)&stack0x000001c0);
            Vector<String>::elementAt((int)&stack0x000001c8);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            in_stack_00000004 = unaff_r5;
            ConfirmDialog::show(pCVar29,&stack0x000001b8,&stack0x000001c0,&stack0x000001c8);
            String::~String((String *)&stack0x000001c8);
            String::~String((String *)&stack0x000001c0);
            pSVar8 = (String *)&stack0x000001b8;
          }
          else {
            if (this_06[0x14] != (LotteryDialog)0x0) {
              LotteryDialog::backClose(this_06);
              L_PrintLog((char *)(DAT_0012fd4c + 0x12fa14),(char *)(DAT_0012fd50 + 0x12fa16));
              goto LAB_0012fa18;
            }
            L_PrintLog((char *)(DAT_0012f9e8 + 0x12f8e6),(char *)(DAT_0012f9ec + 0x12f8e8));
            pCVar29 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001a0);
            Vector<String>::elementAt((int)&stack0x000001a8);
            Vector<String>::elementAt((int)&stack0x000001b0);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            in_stack_00000004 = unaff_r5;
            ConfirmDialog::show(pCVar29,&stack0x000001a0,&stack0x000001a8,&stack0x000001b0);
            String::~String((String *)&stack0x000001b0);
            String::~String((String *)&stack0x000001a8);
            pSVar8 = (String *)&stack0x000001a0;
          }
          String::~String(pSVar8);
        }
      }
      else {
        L_PrintLog(pcVar25,(char *)(DAT_0012f9e4 + 0x12f892));
        (**(code **)(**(int **)(unaff_r5 + 0x130) + 0x20))(*(int **)(unaff_r5 + 0x130),0);
      }
    }
  }
LAB_0012fa18:
  iVar6 = (byte)unaff_r5[DAT_0012fd54] - 1;
  *(byte *)(*(int *)(unaff_r5 + 0x14) + 0xca) =
       ((char)iVar6 - ((char)unaff_r5[DAT_0012fd54] - 2U)) - (iVar6 == 0);
  if (**(char **)(unaff_r7 + DAT_0012fd58) == '\0') {
    FUN_0012ff22();
    return;
  }
  iVar6 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012fd5c),'*');
  if (iVar6 == 0) {
    FUN_0012ff22();
    return;
  }
  iVar9 = DAT_0012fd60 + 0x12fa4c;
  iVar6 = *(int *)(DAT_0012fd60 + 0x12fac0);
  if (iVar6 != 0) {
    if (iVar6 != 3) {
      if (iVar6 != 2) {
        FUN_0012ff22();
        return;
      }
      puVar33 = *(undefined4 **)(unaff_r7 + DAT_0012fd68);
      in_stack_00000020 = 0;
      piVar7 = *(int **)(unaff_r7 + DAT_0012fd6c);
      puVar40 = puVar33 + 4;
      for (; in_stack_00000020 < *piVar7; in_stack_00000020 = in_stack_00000020 + 1) {
        in_stack_00000000 = (undefined1 *)puVar33[2];
        in_stack_00000004 = (GameStateCafe *)puVar33[3];
        in_stack_00000008 = *puVar40;
        in_stack_0000000c = (char *)puVar40[1];
        sprintf(&stack0x000003fc,(char *)(DAT_0012fd70 + 0x12faac),*puVar33,puVar33[1]);
        if ((puVar33[1] == 2) && (0 < (int)*puVar40)) {
          in_stack_00000000 = (undefined1 *)*piVar7;
          snprintf(&stack0x0000027c,0x80,(char *)(DAT_0012fd74 + 0x12fad0),in_stack_00000020 + 1);
          strcpy(&stack0x000001fc,(char *)puVar40[1]);
          in_stack_00000000 = &stack0x0000027c;
          snprintf((char *)((int)&stack0x00000000 + DAT_0012fd7c),0x400,
                   (char *)(DAT_0012fd78 + 0x12faf0),*puVar40);
          ZombieCafe::addToxinMedia(*(ZombieCafe **)(unaff_r5 + 0xc),*puVar40);
          puVar33[1] = 0;
          puVar33[2] = 0;
          *puVar40 = 0;
          ZombieCafe::save();
          pNVar32 = *(NoticeDialog **)(unaff_r5 + 0xd0);
          String::String((String *)&stack0x000001d8,(char *)((int)&stack0x00000000 + DAT_0012fd7c));
          Vector<String>::elementAt((int)&stack0x000001d0);
          in_stack_00000000 = (undefined1 *)0x0;
          NoticeDialog::show(pNVar32,&stack0x000001d8,&stack0x000001d0);
          String::~String((String *)&stack0x000001d0);
          String::~String((String *)&stack0x000001d8);
        }
        puVar33 = puVar33 + 6;
        puVar40 = puVar40 + 6;
      }
      if (0 < *piVar7) {
        GameStateCafe::gotEventValue
                  (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
      }
      *piVar7 = 0;
      iVar9 = DAT_0012fd84 + 0x12fb80;
    }
    *(undefined4 *)(iVar9 + 0x74) = 4;
    FUN_0012ff22();
    return;
  }
  if (*(int *)(unaff_r5 + 0x1fc) == 0) {
    GameStateCafe::getEventValue
              (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
    uVar11 = 1;
  }
  else {
    if (*(int *)(unaff_r5 + 0x1fc) != 1) {
      FUN_0012ff22();
      return;
    }
    uVar11 = 4;
  }
  *(undefined4 *)(unaff_r5 + 0x1fc) = uVar11;
  FUN_0012ff22();
  return;
}


