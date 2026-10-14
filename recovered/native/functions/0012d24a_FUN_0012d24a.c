/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012d24a FUN_0012d24a */

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

void FUN_0012d24a(void)

{
  FurnitureData FVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  String *pSVar6;
  int iVar7;
  undefined4 uVar8;
  MALTAHoover *this;
  SServer *pSVar9;
  HCOManager *pHVar10;
  GameStateLoading *this_00;
  LotteryFeaturedDialog *this_01;
  UserRankDialog *this_02;
  long lVar11;
  CharacterInstance *pCVar12;
  StatusNote *pSVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  TutorialSystem *this_03;
  LotteryDialog *this_04;
  byte bVar18;
  uchar uVar19;
  uint extraout_r1;
  char cVar20;
  int iVar21;
  uint uVar22;
  GameStateCafe *pGVar23;
  NoticeDialog *pNVar24;
  int *unaff_r4;
  undefined4 *puVar25;
  CapcomGame *this_05;
  int *piVar26;
  ScreenElement *pSVar27;
  FurnitureData *pFVar28;
  Furniture *pFVar29;
  Cafe *this_06;
  undefined4 uVar30;
  uint *puVar31;
  GameStateCafe *unaff_r5;
  int unaff_r6;
  MessageElement *pMVar32;
  char *pcVar33;
  code *pcVar34;
  ZombieCafe *pZVar35;
  CharacterInstance *pCVar36;
  ConfirmDialog *pCVar37;
  int unaff_r7;
  undefined4 in_cr15;
  float extraout_s0;
  float fVar38;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float __x;
  float __x_00;
  undefined8 uVar39;
  float extraout_s1;
  undefined1 *in_stack_00000000;
  GameStateCafe *in_stack_00000004;
  uint in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  GameStateCafe GStack0000001c;
  int in_stack_00000020;
  
  _GStack0000001c = *(GameStateCafe **)(unaff_r5 + 0x14);
  GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r6));
  iVar5 = Cafe::pickCafeObject((long)_GStack0000001c);
  iVar21 = *(int *)(*unaff_r4 + 0x60);
  if (iVar5 == iVar21) {
    FUN_0012fdda();
  }
  if (*(int *)(unaff_r5 + 0x40) == iVar21) {
    FUN_0012fdda();
    iVar5 = TutorialArrow::targetContains
                      ((TutorialArrow *)*unaff_r4,unaff_r5,
                       *(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r6));
    if (iVar5 == 0) goto LAB_0012d286;
  }
  else {
LAB_0012d286:
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012d2f8) = 1;
  }
  (**(code **)(**(int **)(unaff_r5 + 0x8c) + 0x20))(*(int **)(unaff_r5 + 0x8c),0);
  (**(code **)(**(int **)(unaff_r5 + 0xb0) + 0x20))(*(int **)(unaff_r5 + 0xb0),0);
  (**(code **)(**(int **)(unaff_r5 + 0x90) + 0x20))(*(int **)(unaff_r5 + 0x90),0);
  (**(code **)(**(int **)(unaff_r5 + 0xa0) + 0x20))(*(int **)(unaff_r5 + 0xa0),0);
  (**(code **)(**(int **)(unaff_r5 + 0x78) + 8))(*(int **)(unaff_r5 + 0x78),in_stack_00000020);
  if (unaff_r5[0x1a4] == (GameStateCafe)0x0) {
    if (*(char *)(*(int *)(unaff_r5 + 0x8c) + 0x14) != '\0') {
      unaff_r5[0x1a4] = (GameStateCafe)0x1;
    }
  }
  else if (*(char *)(*(int *)(unaff_r5 + 0x8c) + 0x14) == '\0') {
    GameStateCafe::save(SUB41(unaff_r5,0));
    unaff_r5[0x1a4] = (GameStateCafe)0x0;
  }
  uVar22 = *(uint *)(unaff_r5 + 0xa4);
  if (uVar22 != 0) {
    uVar22 = (uint)*(byte *)(uVar22 + 0x14);
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
  iVar5 = *(int *)(unaff_r5 + 0x8c);
  if (*(char *)(iVar5 + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(iVar5 + 0x60) != '\0') {
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
  if (uVar22 != 0) {
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
  pGVar23 = unaff_r5 + 0xfc;
  if ((*(int *)(unaff_r5 + 0x120) != 0) && (*(char *)(*(int *)(unaff_r5 + 0x120) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(pGVar23 + 0x28) != 0) && (*(char *)(*(int *)(pGVar23 + 0x28) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(unaff_r5 + 0xa8) != 0) && (*(char *)(*(int *)(unaff_r5 + 0xa8) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  pGVar23 = unaff_r5 + 0xfc;
  if ((*(int *)(unaff_r5 + 0x128) != 0) && (*(char *)(*(int *)(unaff_r5 + 0x128) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(pGVar23 + 0x3c) != 0) && (*(char *)(*(int *)(pGVar23 + 0x3c) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if (-1 < *(int *)(unaff_r5 + 0x17c)) {
    pSVar6 = (String *)
             Vector<MessageWithToxin*>::removeElementAt
                       ((Vector<MessageWithToxin*> *)(unaff_r5 + 0x178),0);
    ZombieCafe::addToxin(*(ZombieCafe **)(unaff_r5 + 0xc),*(int *)(pSVar6 + 8),false);
    ZombieCafe::addCash(*(ZombieCafe **)(unaff_r5 + 0xc),*(int *)(pSVar6 + 0xc));
    ZombieCafe::addXp(*(ZombieCafe **)(unaff_r5 + 0xc),*(int *)(pSVar6 + 0x10));
    pMVar32 = *(MessageElement **)(unaff_r5 + 0x7c);
    String::String((String *)&stack0x00000038,pSVar6);
    in_stack_00000000 = *(undefined1 **)(pSVar6 + 0x10);
    MessageElement::show
              (pMVar32,&stack0x00000038,*(undefined4 *)(pSVar6 + 8),*(undefined4 *)(pSVar6 + 0xc));
    String::~String((String *)&stack0x00000038);
    String::~String(pSVar6);
    operator_delete(pSVar6);
  }
  if ((5 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) &&
     (iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'S'),
     iVar5 == 0)) {
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'R',false);
    CharacterCommandBar::close(*(CharacterCommandBar **)(unaff_r5 + 0xac));
    CookCommandBar::close(*(CookCommandBar **)(unaff_r5 + 0xb4));
    Store::close(*(Store **)(unaff_r5 + 0x84));
    Storage::close(*(Storage **)(unaff_r5 + 0xbc));
    PlantCommandBar::close(*(PlantCommandBar **)(unaff_r5 + 0xb8));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r5 + 0xc0));
  }
  iVar5 = DAT_0012d768;
  if (((7 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) &&
      (_GStack0000001c =
            (GameStateCafe *)
            TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'U'),
      _GStack0000001c == (GameStateCafe *)0x0)) &&
     (iVar21 = GameStateCafe::checkCanLotteryButton(unaff_r5), iVar21 != 0)) {
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),'V',SUB41(_GStack0000001c,0));
  }
  iVar5 = DAT_0012d768;
  if (((8 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) &&
      (iVar21 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'W'),
      iVar21 == 0)) && (*(int *)(unaff_r5 + 300) == 0)) {
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),'X',true);
  }
  iVar5 = DAT_0012d768;
  if (*(int *)(*(int *)(unaff_r5 + 0xc) + 0x680) == 3) {
    iVar21 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'[');
    if (iVar21 == 0) {
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),'\\',false);
    }
    else {
      TutorialSystem::setTutorialCompleted
                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),'[');
    }
  }
  pGVar23 = unaff_r5 + 0xcc;
  _GStack0000001c =
       (GameStateCafe *)
       ObjectiveSystem::actionRequired
                 (*(ObjectiveSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d76c));
  if (_GStack0000001c == (GameStateCafe *)0x0) {
    iVar5 = PullMenuElement::hasNewIndicator(*(PullMenuElement **)pGVar23,3);
    if (iVar5 != 0) {
      PullMenuElement::setButtonNewIndicator
                (*(PullMenuElement **)pGVar23,3,SUB41(_GStack0000001c,0));
    }
  }
  else {
    iVar5 = PullMenuElement::hasNewIndicator(*(PullMenuElement **)pGVar23,3);
    if (iVar5 == 0) {
      PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)pGVar23,3,true);
      PullMenuElement::ifIsCloseNewIndicatorPull();
    }
  }
  iVar5 = *(int *)(unaff_r5 + 0xc);
  in_stack_00000000 = (undefined1 *)(uint)*(byte *)(iVar5 + DAT_0012d774);
  in_stack_00000004 = (GameStateCafe *)(uint)*(byte *)(iVar5 + DAT_0012d77c);
  in_stack_00000008 = *(uint *)(iVar5 + DAT_0012d780);
  sprintf(&stack0x000002fc,(char *)(DAT_0012d778 + 0x12d5e8),(uint)*(byte *)(iVar5 + DAT_0012d770),
          (uint)*(byte *)(iVar5 + 0x6f8));
  iVar5 = *(int *)(unaff_r5 + 0xc);
  if ((((*(char *)(iVar5 + DAT_0012d770) != '\0') && (*(char *)(iVar5 + 0x6f8) == '\0')) ||
      (*(char *)(iVar5 + DAT_0012d774) != '\0')) && (*(char *)(iVar5 + DAT_0012d77c) == '\0')) {
    *(undefined1 *)(iVar5 + DAT_0012d77c) = 1;
    _GStack0000001c = *(GameStateCafe **)(unaff_r5 + 0x80);
    Vector<String>::elementAt((int)&stack0x00000040);
    Vector<String>::elementAt((int)&stack0x00000048);
    Vector<String>::elementAt((int)&stack0x00000050);
    in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012d790);
    in_stack_00000004 = unaff_r5;
    ConfirmDialog::show((ConfirmDialog *)_GStack0000001c,&stack0x00000040,&stack0x00000048,
                        &stack0x00000050);
    String::~String((String *)&stack0x00000050);
    String::~String((String *)&stack0x00000048);
    String::~String((String *)&stack0x00000040);
  }
  iVar21 = DAT_0012d798;
  iVar5 = DAT_0012d794;
  if ((*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012d794) != '\0') &&
     (iVar7 = *(int *)(unaff_r5 + 0x1b0), *(int *)(unaff_r5 + 0x1b0) = in_stack_00000020 + iVar7,
     **(int **)(unaff_r7 + iVar21) <= in_stack_00000020 + iVar7)) {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + iVar5) = 0;
    *(undefined4 *)(unaff_r5 + 0x1b0) = 0;
    GameStateCafe::showEnemyCafeDialog((int)unaff_r5);
  }
  GameStateCafe::tickColorShift(unaff_r5,in_stack_00000020);
  iVar5 = GameStateCafe::tickEditModes(unaff_r5,in_stack_00000020);
  if (iVar5 == 0) {
    FUN_0012ff22();
  }
  Cafe::tick(*(Cafe **)(unaff_r5 + 0x14),in_stack_00000020);
  if ((*(char *)(*(int *)(unaff_r5 + 0x14) + 100) == '\0') &&
     (iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'\x16'),
     iVar5 != 0)) {
    _GStack0000001c = *(GameStateCafe **)(unaff_r5 + 0xc);
    puVar25 = *(undefined4 **)(unaff_r7 + DAT_0012d79c);
    uVar8 = __floatsisf(in_stack_00000020);
    uVar8 = __mulsf3(uVar8,*puVar25);
    iVar5 = (int)_GStack0000001c;
    uVar8 = __subsf3(*(undefined4 *)((int)_GStack0000001c + 0x688),uVar8);
    *(undefined4 *)(iVar5 + 0x688) = uVar8;
    _GStack0000001c = *(GameStateCafe **)(unaff_r5 + 0xc);
    uVar8 = *(undefined4 *)((ConfirmDialog *)_GStack0000001c + 0x688);
    iVar5 = __aeabi_fcmplt(uVar8,0);
    if (iVar5 == 0) {
      iVar5 = __aeabi_fcmpgt(uVar8,0x3f800000);
      if (iVar5 != 0) {
        uVar8 = 0x3f800000;
      }
    }
    else {
      uVar8 = 0;
    }
    *(undefined4 *)((ConfirmDialog *)_GStack0000001c + 0x688) = uVar8;
  }
  iVar5 = *(int *)(unaff_r5 + 0x1bc);
  *(int *)(unaff_r5 + 0x1bc) = iVar5 - in_stack_00000020;
  if (iVar5 - in_stack_00000020 < 1) {
    iVar5 = GameStateCafe::isDishInTransit(unaff_r5);
    if (iVar5 == 0) {
      GameStateCafe::save(SUB41(unaff_r5,0));
    }
    else {
      *(undefined4 *)(unaff_r5 + 0x1bc) = DAT_0012d7a0;
    }
  }
  iVar5 = *(int *)(unaff_r5 + 0x1c0);
  *(int *)(unaff_r5 + 0x1c0) = iVar5 - in_stack_00000020;
  if (iVar5 - in_stack_00000020 < 1) {
    *(undefined4 *)(unaff_r5 + 0x1c0) = **(undefined4 **)(unaff_r7 + DAT_0012da6c);
    GameStateCafe::saveServerData(unaff_r5);
    ZombieCafe::saveGameState(*(ZombieCafe **)(unaff_r5 + 0xc),false);
  }
  iVar5 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012da70),'\x16');
  if ((iVar5 != 0) &&
     (iVar5 = *(int *)(unaff_r5 + 0x1c4), *(int *)(unaff_r5 + 0x1c4) = iVar5 - in_stack_00000020,
     iVar5 - in_stack_00000020 < 1)) {
    pZVar35 = *(ZombieCafe **)(unaff_r5 + 0xc);
    _GStack0000001c = (GameStateCafe *)(uint)(byte)pZVar35[DAT_0012da74];
    piVar26 = *(int **)(unaff_r7 + DAT_0012da78);
    if (_GStack0000001c == (GameStateCafe *)0x0) {
      ZombieCafe::beginLoadOrders(pZVar35,true);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012da74) = 1;
      uVar8 = __divsi3(*piVar26,100);
      *(undefined4 *)(unaff_r5 + 0x1c4) = uVar8;
      if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012da7c) != '\0') {
        uVar8 = CCServer::GetMyUserID(*(void **)(*(int *)(unaff_r5 + 0xc) + DAT_0012da80));
        pZVar35 = *(ZombieCafe **)(unaff_r5 + 0xc);
        uVar30 = *(undefined4 *)(pZVar35 + 0x680);
        uVar15 = *(undefined4 *)(pZVar35 + DAT_0012da84);
        uVar16 = *(undefined4 *)(pZVar35 + DAT_0012da88);
        in_stack_00000010 = (char *)ZombieCafe::getToxin(pZVar35);
        pcVar33 = (char *)(DAT_0012da8c + 0x12d868);
        in_stack_00000000 = (undefined1 *)uVar8;
        in_stack_00000004 = (GameStateCafe *)uVar30;
        in_stack_00000008 = uVar15;
        in_stack_0000000c = (char *)uVar16;
        snprintf((char *)((int)&stack0x00000000 + DAT_0012da94),0x80,
                 (char *)(DAT_0012da90 + 0x12d86a),pcVar33);
        CCMarketing_RecordAnalyticsEvent
                  (*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012da98),DAT_0012da9c + 0x12d884,
                   (int)&stack0x00000000 + DAT_0012da94);
        this = (MALTAHoover *)MALTAHoover::GetInstance();
        MALTAHoover::GetInstance();
        MALTAHoover::GetInstance();
        MALTAHoover::init(this,(char *)(DAT_0012daa0 + 0x12d8a0),(char *)(DAT_0012daa4 + 0x12d8a2),
                          pcVar33);
        memset(&stack0x0000027c,(int)_GStack0000001c,0x40);
        pSVar9 = (SServer *)MALTAHoover::GetInstance();
        iVar5 = MALTAHoover::getFBID(pSVar9,(char *)**(undefined4 **)(unaff_r7 + DAT_0012daa8));
        if (iVar5 == 0) {
          L_PrintLog((char *)(DAT_0012daac + 0x12d8cc),&stack0x0000027c);
        }
        memset(&stack0x000003fc,0,0x40);
        snprintf(&stack0x000003fc,0x40,(char *)(DAT_0012dab0 + 0x12d8e4),&stack0x0000027c);
        _GStack0000001c = (GameStateCafe *)MALTAHoover::GetInstance();
        uVar17 = *(uint *)(*(ZombieCafe **)(unaff_r5 + 0xc) + 0x680);
        uVar22 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
        iVar5 = *(int *)(unaff_r5 + 0xc);
        in_stack_00000000 = *(undefined1 **)(iVar5 + DAT_0012da88);
        in_stack_00000004 = *(GameStateCafe **)(iVar5 + DAT_0012da84);
        in_stack_00000008 = (uint)*(byte *)(iVar5 + DAT_0012dab8);
        in_stack_00000010 = *(char **)(unaff_r7 + DAT_0012dabc);
        in_stack_0000000c = &stack0x000003fc;
        MALTAHoover::send((MALTAHoover *)_GStack0000001c,(char *)(DAT_0012dab4 + 0x12d906),uVar17,
                          uVar22,(uint)in_stack_00000000,(uint)in_stack_00000004,in_stack_00000008,
                          &stack0x000003fc,in_stack_00000010);
      }
    }
    else {
      ZombieCafe::beginLoadOrders(pZVar35,false);
      puVar25 = *(undefined4 **)(unaff_r7 + DAT_0012daa8);
      GameStateCafe::requestGetEventGift((void *)*puVar25,unaff_r5);
      GameStateCafe::requestGetRankingGift((void *)*puVar25,unaff_r5);
      iVar5 = ZombieCafe::checkInstallGift();
      if (iVar5 != 0) {
        ZombieCafe::setZombie_InstallGift();
      }
      *(int *)(unaff_r5 + 0x1c4) = *piVar26 * 10;
    }
  }
  iVar5 = *(int *)(unaff_r5 + 500);
  *(int *)(unaff_r5 + 500) = iVar5 - in_stack_00000020;
  if (iVar5 - in_stack_00000020 < 1) {
    pHVar10 = (HCOManager *)HCOManager::getInstance();
    iVar5 = HCOManager::getHCOEnable(pHVar10);
    if (iVar5 != 0) {
      pHVar10 = (HCOManager *)HCOManager::getInstance();
      iVar5 = HCOManager::getFirstDisplay(pHVar10);
      if ((((iVar5 == 0) &&
           ((*(int *)(unaff_r5 + 300) == 0 || (*(char *)(*(int *)(unaff_r5 + 300) + 0x14) == '\0')))
           ) && ((*(int *)(unaff_r5 + 0x138) == 0 ||
                 (*(char *)(*(int *)(unaff_r5 + 0x138) + 0x14) == '\0')))) &&
         ((3 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680) &&
          (iVar5 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012da70),'I'),
          iVar5 != 0)))) {
        this_05 = *(CapcomGame **)(unaff_r5 + 0xc);
        _GStack0000001c = (GameStateCafe *)operator_new(DAT_0012dac0);
        GameStateSpecialSale::GameStateSpecialSale((GameStateSpecialSale *)_GStack0000001c);
        this_00 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(this_00,(GameState *)_GStack0000001c);
        CapcomGame::setNextState(this_05,(GameState *)this_00);
      }
    }
    *(undefined4 *)(unaff_r5 + 500) = 1000;
  }
  pHVar10 = (HCOManager *)HCOManager::getInstance();
  HCOManager::tickHCO(pHVar10);
  iVar5 = *(int *)(unaff_r5 + 0x1cc);
  *(int *)(unaff_r5 + 0x1cc) = iVar5 - in_stack_00000020;
  if ((iVar5 - in_stack_00000020 < 1) &&
     (iVar5 = HudElement::isButtonAvailability(*(HudElement **)(unaff_r5 + 200),10), iVar5 != 0)) {
    iVar5 = GameStateCafe::CheckPicGiftBoxAndShowDialog(unaff_r5);
    if (iVar5 == 0) {
      *(undefined4 *)(unaff_r5 + 0x1cc) = DAT_0012dac4;
    }
    else if (iVar5 == 1) {
      *(undefined4 *)(unaff_r5 + 0x1cc) = 200;
    }
    else if (iVar5 == 2) {
      *(undefined4 *)(unaff_r5 + 0x1cc) = DAT_0012dac8;
    }
  }
  iVar5 = HudElement::isButtonAvailability(*(HudElement **)(unaff_r5 + 200),10);
  if ((iVar5 != 0) &&
     (iVar5 = *(int *)(unaff_r5 + 0x1c8), *(int *)(unaff_r5 + 0x1c8) = iVar5 - in_stack_00000020,
     iVar5 - in_stack_00000020 < 1)) {
    iVar5 = GameStateCafe::EventGiftShowDialog(unaff_r5);
    uVar8 = uRam0012de08;
    if (iVar5 != 0) {
      uVar8 = DAT_0012dacc;
    }
    *(undefined4 *)(unaff_r5 + 0x1c8) = uVar8;
  }
  if ((*(short *)(unaff_r5 + 0x16c) != 0) && (*(int *)(unaff_r5 + 0x40) == 0)) {
    iVar5 = *(short *)(unaff_r5 + 0x16c) - in_stack_00000020;
    *(ushort *)(unaff_r5 + 0x16c) = (ushort)iVar5 & (short)~(ushort)((uint)iVar5 >> 0x10) >> 0xf;
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
  iVar5 = iRam0012de0c;
  _GStack0000001c = *(GameStateCafe **)(unaff_r7 + iRam0012de14);
  if ((((((*(ConfirmDialog *)_GStack0000001c != (ConfirmDialog)0x0) &&
         (**(char **)(unaff_r7 + DAT_0012de18) == '\0')) &&
        ((*(int *)(unaff_r5 + 0xd8) == 0 || (*(char *)(*(int *)(unaff_r5 + 0xd8) + 0x14) == '\0'))))
       && ((*(int *)(unaff_r5 + 300) == 0 || (*(char *)(*(int *)(unaff_r5 + 300) + 0x14) == '\0'))))
      && ((*(int *)(unaff_r5 + 0x130) == 0 || (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')
          ))) &&
     ((((*(char *)(*(int *)(unaff_r5 + 0xc4) + 0x14) == '\0' &&
        (iVar21 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iRam0012de0c),'\x16'),
        iVar21 != 0)) && (7 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680))) &&
      (((iVar21 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),'U'),
        iVar21 != 0 &&
        (iVar21 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),'V'),
        iVar21 != 0)) && (*(int *)(unaff_r5 + 0xa8) == 0)))))) {
    L_PrintLog((char *)(DAT_0012de1c + 0x12dbde),(char *)(DAT_0012de20 + 0x12dbe0));
    if ((*(int *)(*(int *)(unaff_r5 + 0xc) + 0x680) < 9) ||
       (iVar5 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),'X'), iVar5 != 0))
    {
      pcVar33 = (char *)(DAT_0012de24 + 0x12dc02);
      L_PrintLog(pcVar33,(char *)(DAT_0012de28 + 0x12dc04));
      *_GStack0000001c = (GameStateCafe)0x0;
      if (**(char **)(unaff_r7 + DAT_0012de2c) != '\0') {
        L_PrintLog(pcVar33,(char *)(DAT_0012de30 + 0x12dc20));
        this_01 = (LotteryFeaturedDialog *)operator_new(0xb8);
        LotteryFeaturedDialog::LotteryFeaturedDialog(this_01,(ZombieCafeGameState *)unaff_r5);
        *(LotteryFeaturedDialog **)(unaff_r5 + 300) = this_01;
        (**(code **)(*(int *)this_01 + 0x1c))(this_01,0x12);
        iVar5 = DAT_0012de34;
        FUN_00118458(*(undefined4 *)(unaff_r5 + 300),
                     *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + 0x14));
        ScreenElement::setOrder
                  (*(ScreenElement **)(unaff_r5 + 300),(int)**(char **)(unaff_r7 + DAT_0012de38));
        (**(code **)(**(int **)(unaff_r5 + 300) + 0x20))(*(int **)(unaff_r5 + 300),0);
        (**(code **)(**(int **)(unaff_r5 + 0x78) + 0x2c))
                  (*(int **)(unaff_r5 + 0x78),*(undefined4 *)(unaff_r5 + 300));
        L_PrintLog((char *)(iVar5 + 0x12dc58),(char *)(DAT_0012de3c + 0x12dc78));
        LotteryFeaturedDialog::show
                  (*(LotteryFeaturedDialog **)(unaff_r5 + 300),**(int **)(unaff_r7 + DAT_0012de40),
                   *(_func_void_void_ptr **)(unaff_r7 + DAT_0012de44),unaff_r5);
        L_PrintLog((char *)(iVar5 + 0x12dc58),(char *)(DAT_0012de48 + 0x12dc94));
      }
    }
  }
  pcVar33 = *(char **)(unaff_r7 + DAT_0012de4c);
  if ((((*pcVar33 != '\0') &&
       ((*(int *)(unaff_r5 + 0xd8) == 0 || (*(char *)(*(int *)(unaff_r5 + 0xd8) + 0x14) == '\0'))))
      && ((*(int *)(unaff_r5 + 300) == 0 || (*(char *)(*(int *)(unaff_r5 + 300) + 0x14) == '\0'))))
     && ((((*(int *)(unaff_r5 + 0x130) == 0 ||
           (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) &&
          (*(char *)(*(int *)(unaff_r5 + 0xc4) + 0x14) == '\0')) &&
         (iVar5 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iRam0012de0c),'.'),
         iVar5 != 0)))) {
    L_PrintLog((char *)(DAT_0012de50 + 0x12dcf0),(char *)(DAT_0012de54 + 0x12dcf2));
    *pcVar33 = '\0';
    this_02 = (UserRankDialog *)operator_new(0xac);
    UserRankDialog::UserRankDialog
              (this_02,(ZombieCafeGameState *)unaff_r5,
               *(bool *)*(undefined4 *)(unaff_r7 + DAT_0012de58));
    *(UserRankDialog **)(unaff_r5 + 0x130) = this_02;
    (**(code **)(*(int *)this_02 + 0x1c))(this_02,0x12);
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
    piVar26 = *(int **)(unaff_r5 + 0xf4);
    pcVar34 = *(code **)(*piVar26 + 0x44);
    Vector<String>::elementAt((int)&stack0x00000058);
    (*pcVar34)(piVar26,&stack0x00000058);
    String::~String((String *)&stack0x00000058);
    (**(code **)(**(int **)(unaff_r5 + 0xf0) + 0x20))(*(int **)(unaff_r5 + 0xf0),0);
  }
  if (unaff_r5[DAT_0012de64] != (GameStateCafe)0x0) {
    if (unaff_r5[DAT_0012de64] != (GameStateCafe)0x5) {
      FUN_0012f41e();
    }
    FUN_0012f418();
  }
  pSVar27 = *(ScreenElement **)(unaff_r5 + 0x84);
  if (1 < (byte)pSVar27[0x80] - 1) {
    FUN_0012fdf0();
  }
  uVar22 = (uint)(byte)pSVar27[100];
  if (uVar22 == 1) {
    GameStateCafe::enterTileEditMode(unaff_r5);
    FUN_0012f41e();
  }
  if (uVar22 == 2) {
    GameStateCafe::enterWallEditMode(unaff_r5);
    FUN_0012f41e();
    coprocessor_loadlong(0xf,in_cr15,extraout_r1 >> 10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar22 != 3) {
    FUN_0012fdf0();
  }
  GameStateCafe::enterExpansionPreviewMode(unaff_r5);
  FUN_0012f41e();
  pZVar35 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar5 = ZombieCafe::unhandledTouching(pZVar35);
  if ((iVar5 == 0) ||
     (iVar5 = ScreenElement::contains(pSVar27,*(long *)(pZVar35 + 0x4b8)), iVar5 != 0)) {
    pSVar27 = *(ScreenElement **)(unaff_r5 + 0x84);
    if (pSVar27[0x65] == (ScreenElement)0x0) {
      pSVar27 = (ScreenElement *)FUN_0012fdfa();
    }
    iVar5 = ScreenElement::contains(pSVar27,*(long *)(*(int *)(unaff_r5 + 0xc) + iRam0012e068));
    if (iVar5 == 0) {
      FUN_0012fdfa();
    }
  }
  pFVar28 = *(FurnitureData **)(*(int *)(unaff_r5 + 0x84) + 0xd0);
  if (pFVar28 == (FurnitureData *)0x0) {
    FUN_0012fdfa();
  }
  if ((pFVar28[0x44] == (FurnitureData)0xa) || (pFVar28[0x44] == (FurnitureData)0xc)) {
    if (pFVar28[0x38] == (FurnitureData)0x0) {
      if (*(int *)(*(ZombieCafe **)(unaff_r5 + 0xc) + DAT_0012e098) < *(int *)(pFVar28 + 0x34)) {
        FUN_0012f41e();
      }
      *(FurnitureData **)(unaff_r5 + 0x60) = pFVar28;
      GameStateCafe::completeStorePurchase(unaff_r5);
      FUN_0012f41e();
      software_interrupt(0x7c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar5 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
    if (iVar5 < *(int *)(pFVar28 + 0x34)) {
      iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012e080),'\x16');
      if (iVar5 != 0) goto LAB_0012dff8;
      pNVar24 = *(NoticeDialog **)(unaff_r5 + 0xd0);
      Vector<String>::elementAt((int)&stack0x00000098);
      Vector<String>::elementAt((int)&stack0x000000a0);
      in_stack_00000000 = (undefined1 *)0x0;
      NoticeDialog::show(pNVar24,&stack0x00000098,&stack0x000000a0);
      String::~String((String *)&stack0x000000a0);
      pSVar6 = (String *)&stack0x00000098;
    }
    else {
      *(FurnitureData **)(unaff_r5 + 0x60) = pFVar28;
      _GStack0000001c = *(GameStateCafe **)(unaff_r5 + 0x80);
      Vector<String>::elementAt((int)&stack0x00000060);
      String::valueOf((int)&stack0x00000068);
      String::operator+((String *)&stack0x00000070,&stack0x00000060,&stack0x00000068);
      Vector<String>::elementAt((int)&stack0x00000078);
      String::operator+((String *)&stack0x00000080,&stack0x00000070,&stack0x00000078);
      Vector<String>::elementAt((int)&stack0x00000088);
      Vector<String>::elementAt((int)&stack0x00000090);
      in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012e07c);
      in_stack_00000004 = unaff_r5;
      ConfirmDialog::show((ConfirmDialog *)_GStack0000001c,&stack0x00000080,&stack0x00000088,
                          &stack0x00000090);
      String::~String((String *)&stack0x00000090);
      String::~String((String *)&stack0x00000088);
      String::~String((String *)&stack0x00000080);
      String::~String((String *)&stack0x00000078);
      String::~String((String *)&stack0x00000070);
      String::~String((String *)&stack0x00000068);
      pSVar6 = (String *)&stack0x00000060;
    }
    do {
      String::~String(pSVar6);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x84) + 0x65) = 0;
      FUN_0012f41e();
LAB_0012dff8:
      pCVar37 = *(ConfirmDialog **)(unaff_r5 + 0x80);
      Vector<String>::elementAt((int)&stack0x000000a8);
      Vector<String>::elementAt((int)&stack0x000000b0);
      Vector<String>::elementAt((int)&stack0x000000b8);
      in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012e094);
      in_stack_00000004 = unaff_r5;
      ConfirmDialog::show(pCVar37,&stack0x000000a8,&stack0x000000b0,&stack0x000000b8);
      String::~String((String *)&stack0x000000b8);
      String::~String((String *)&stack0x000000b0);
      pSVar6 = (String *)&stack0x000000a8;
    } while( true );
  }
  uVar8 = GameStateCafe::createFurnitureFromData(unaff_r5,pFVar28);
  iVar5 = DAT_0012e400;
  *(undefined4 *)(unaff_r5 + 0x40) = uVar8;
  unaff_r5[iVar5] = (GameStateCafe)0x0;
  *(undefined2 *)(unaff_r5 + 0x162) = 0;
  unaff_r5[0x164] = (GameStateCafe)0x0;
  iVar5 = DAT_0012e404;
  (**(code **)(**(int **)(unaff_r5 + 0x84) + 0x20))();
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e408) = 1;
  unaff_r5[iVar5] = (GameStateCafe)0x7;
  pGVar23 = unaff_r5 + 0xf8;
  (**(code **)(**(int **)pGVar23 + 0x20))();
  (**(code **)(**(int **)pGVar23 + 0x24))(*(int **)pGVar23,0xffffffff);
  piVar26 = *(int **)pGVar23;
  _GStack0000001c = *(GameStateCafe **)(*piVar26 + 0x44);
  Vector<String>::elementAt((int)&stack0x000000c0);
  (*(code *)_GStack0000001c)(piVar26,&stack0x000000c0);
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
  piVar26 = *(int **)(unaff_r5 + 0xfc);
  pcVar34 = *(code **)(*piVar26 + 0x44);
  StringBuffer::toString();
  (*pcVar34)(piVar26,&stack0x000000e8);
  String::~String((String *)&stack0x000000e8);
  String::String((String *)&stack0x000000f0,
                 (String *)(*(int *)(*(int *)(unaff_r5 + 0x40) + 0x38) + 100));
  GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x000000f0);
  String::~String((String *)&stack0x000000f0);
  piVar26 = *(int **)(unaff_r5 + 0x100);
  pcVar34 = *(code **)(*piVar26 + 0x44);
  String::String((String *)&stack0x000000f8,(char *)(DAT_0012e41c + 0x12e1f0));
  __fixsfsi(*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x40) + 0x38) + 0x6c));
  String::valueOf((int)&stack0x00000100);
  String::operator+((String *)&stack0x00000108,&stack0x000000f8,&stack0x00000100);
  String::String((String *)&stack0x00000110,(char *)(DAT_0012e420 + 0x12e218));
  String::operator+((String *)&stack0x00000118,&stack0x00000108,&stack0x00000110);
  (*pcVar34)(piVar26,&stack0x00000118);
  String::~String((String *)&stack0x00000118);
  String::~String((String *)&stack0x00000110);
  String::~String((String *)&stack0x00000108);
  String::~String((String *)&stack0x00000100);
  String::~String((String *)&stack0x000000f8);
  (**(code **)(**(int **)(unaff_r5 + 0xe8) + 0x20))(*(int **)(unaff_r5 + 0xe8),1);
  if (*(int *)(*(int *)(unaff_r5 + 0xc) + 0x4b8) == 0) {
    lVar11 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x14))
    ;
    iVar5 = *(int *)(unaff_r5 + 0x40);
    lVar11 = Cafe::worldToDiamondCoords(lVar11);
    lVar11 = Cafe::diamondToStaggeredCoords(lVar11);
    uVar2 = Cafe::staggeredCoordsToIndex(lVar11);
    *(undefined2 *)(iVar5 + 0x2c) = uVar2;
    piVar26 = *(int **)(unaff_r5 + 0x40);
    pcVar34 = *(code **)(*piVar26 + 0xc);
    uVar8 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x14),(int)(short)piVar26[0xb]);
    (*pcVar34)(piVar26,uVar8);
    pFVar29 = *(Furniture **)(unaff_r5 + 0x40);
    iVar5 = Furniture::canRotate(pFVar29);
    if ((iVar5 != 0) && (*(char *)(*(int *)(pFVar29 + 0x38) + 0x44) != '\x06')) {
      iVar5 = *(int *)(pFVar29 + 0x20);
      lVar11 = CFPoint::subtract(*(long *)(pFVar29 + 4),
                                 (int)(short)iVar5 >> 1 & 0xffffU | (iVar5 >> 0x11) << 0x10);
      CFPoint::add(lVar11,(iVar5 >> 0x10) << 0x10);
      uVar8 = GameStateCafe::worldToScreenCoords((long)unaff_r5);
      FUN_00118458(*(undefined4 *)(unaff_r5 + 0x170),uVar8);
      *(undefined2 *)(unaff_r5 + 0x16c) = **(undefined2 **)(unaff_r7 + DAT_0012e424);
    }
    *(undefined4 *)(unaff_r5 + 0x44) = *(undefined4 *)(unaff_r5 + 0x40);
  }
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)&stack0x000001e0);
  FUN_0012f41e();
  pZVar35 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar5 = ZombieCafe::unhandledTouching(pZVar35);
  if ((iVar5 == 0) ||
     (iVar5 = ScreenElement::contains
                        (*(ScreenElement **)(unaff_r5 + 0xbc),*(long *)(pZVar35 + 0x4b8)),
     iVar5 != 0)) {
    pSVar27 = *(ScreenElement **)(unaff_r5 + 0xbc);
    if (pSVar27[0x66] == (ScreenElement)0x0) {
      pSVar27 = (ScreenElement *)FUN_0012fe04();
    }
    iVar5 = ScreenElement::contains(pSVar27,*(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e428));
    if (iVar5 == 0) {
      FUN_0012fe04();
    }
  }
  pGVar23 = unaff_r5 + 0xbc;
  iVar5 = *(int *)pGVar23;
  pFVar28 = *(FurnitureData **)(iVar5 + 0xe4);
  if (pFVar28 == (FurnitureData *)0x0) {
    FUN_0012fe04();
  }
  FVar1 = pFVar28[0x44];
  if (FVar1 == (FurnitureData)0xc) {
LAB_0012e362:
    puts((char *)(DAT_0012e42c + 0x12e368));
    FUN_0012f41e();
LAB_0012e36e:
    if (*(char *)(iVar5 + 0x65) == '\x01') {
      unaff_r5[DAT_0012e404] = (GameStateCafe)0xd;
      piVar26 = *(int **)(unaff_r5 + 0xf8);
      (**(code **)(*piVar26 + 0x20))(piVar26,0);
      String::String((String *)&stack0x00000120,(String *)(*(int *)(*(int *)pGVar23 + 0xe4) + 100));
      GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x00000120);
      String::~String((String *)&stack0x00000120);
      (**(code **)(**(int **)(unaff_r5 + 0xfc) + 0x20))(*(int **)(unaff_r5 + 0xfc),0);
      (**(code **)(**(int **)(unaff_r5 + 0xbc) + 0x20))(*(int **)(unaff_r5 + 0xbc),0);
      (**(code **)(**(int **)(unaff_r5 + 0x100) + 0x20))(*(int **)(unaff_r5 + 0x100),0);
      pFVar28 = *(FurnitureData **)(unaff_r5 + 0xf4);
      pcVar34 = *(code **)(*(int *)pFVar28 + 0x44);
      String::String((String *)&stack0x00000128,(char *)(DAT_0012e430 + 0x12e3dc));
      (*pcVar34)(pFVar28,&stack0x00000128);
      String::~String((String *)&stack0x00000128);
      (**(code **)(**(int **)(unaff_r5 + 0xe8) + 0x20))(*(int **)(unaff_r5 + 0xe8),1);
      pGVar23 = unaff_r5 + 0xf0;
    }
    else {
      unaff_r5[DAT_0012e7c8] = (GameStateCafe)0xd;
      piVar26 = *(int **)(unaff_r5 + 0xf8);
      (**(code **)(*piVar26 + 0x20))(piVar26,0);
      uVar8 = GameStateCafe::createFurnitureFromData(unaff_r5,pFVar28);
      iVar5 = DAT_0012e7cc;
      *(undefined4 *)(unaff_r5 + 0x40) = uVar8;
      unaff_r5[iVar5] = (GameStateCafe)0x0;
      *(undefined2 *)(unaff_r5 + 0x162) = 0;
      unaff_r5[0x164] = (GameStateCafe)0x0;
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e7d0) = 1;
      (**(code **)(**(int **)(unaff_r5 + 0xf0) + 0x20))();
      String::String((String *)&stack0x00000130,(String *)(*(int *)(*(int *)pGVar23 + 0xe4) + 100));
      GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x00000130);
      String::~String((String *)&stack0x00000130);
      (**(code **)(**(int **)(unaff_r5 + 0xfc) + 0x20))(*(int **)(unaff_r5 + 0xfc),0);
      (**(code **)(**(int **)(unaff_r5 + 0xbc) + 0x20))(*(int **)(unaff_r5 + 0xbc),0);
      (**(code **)(**(int **)(unaff_r5 + 0x100) + 0x20))(*(int **)(unaff_r5 + 0x100),0);
      pGVar23 = unaff_r5 + 0xe8;
    }
    (**(code **)(**(int **)pGVar23 + 0x20))(*(int **)pGVar23,0);
    FUN_0012f41e();
  }
  else {
    if (FVar1 == (FurnitureData)0x10) goto LAB_0012e36e;
    if (FVar1 == (FurnitureData)0xa) goto LAB_0012e362;
  }
  (**(code **)(**(int **)(unaff_r5 + 0x100) + 0x20))(*(int **)(unaff_r5 + 0x100),0);
  iVar21 = GameStateCafe::createFurnitureFromData(unaff_r5,pFVar28);
  iVar5 = DAT_0012e7d4;
  *(int *)(unaff_r5 + 0x40) = iVar21;
  iVar21 = *(int *)(*(int *)(iVar21 + 0x38) + 0x24);
  if ((iVar21 == **(int **)(unaff_r7 + iVar5)) || (iVar21 == 0x1fa)) {
    puts((char *)(DAT_0012e7d8 + 0x12e4fa));
    iVar5 = *(int *)(unaff_r5 + 0x40);
    CapcomDate::today((CapcomDate *)&stack0x00000138);
    memcpy((void *)(iVar5 + 0x56),&stack0x00000138,7);
  }
  unaff_r5[DAT_0012e7cc] = (GameStateCafe)0x0;
  *(undefined2 *)(unaff_r5 + 0x162) = 0;
  unaff_r5[0x164] = (GameStateCafe)0x0;
  pGVar23 = unaff_r5 + 0xf8;
  (**(code **)(**(int **)(unaff_r5 + 0xbc) + 0x20))();
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e7d0) = 1;
  unaff_r5[DAT_0012e7c8] = (GameStateCafe)0xa;
  (**(code **)(**(int **)pGVar23 + 0x20))();
  (**(code **)(**(int **)pGVar23 + 0x24))(*(int **)pGVar23,0xffffffff);
  piVar26 = *(int **)pGVar23;
  _GStack0000001c = *(GameStateCafe **)(*piVar26 + 0x44);
  Vector<String>::elementAt((int)&stack0x00000140);
  (*(code *)_GStack0000001c)(piVar26,&stack0x00000140);
  String::~String((String *)&stack0x00000140);
  piVar26 = *(int **)(unaff_r5 + 0xfc);
  pcVar34 = *(code **)(*piVar26 + 0x44);
  _GStack0000001c = unaff_r5 + 0xfc;
  String::String((String *)&stack0x00000148,(char *)(DAT_0012e7e0 + 0x12e58e));
  (*pcVar34)(piVar26,&stack0x00000148);
  String::~String((String *)&stack0x00000148);
  piVar26 = *(int **)(_GStack0000001c + 4);
  pcVar34 = *(code **)(*piVar26 + 0x44);
  String::String((String *)&stack0x00000150,(char *)(DAT_0012e7e4 + 0x12e5ac));
  (*pcVar34)(piVar26,&stack0x00000150);
  String::~String((String *)&stack0x00000150);
  String::String((String *)&stack0x00000158,
                 (String *)(*(int *)(*(int *)(unaff_r5 + 0x40) + 0x38) + 100));
  GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x00000158);
  String::~String((String *)&stack0x00000158);
  piVar26 = *(int **)(unaff_r5 + 0xf4);
  pcVar34 = *(code **)(*piVar26 + 0x44);
  Vector<String>::elementAt((int)&stack0x00000160);
  (*pcVar34)(piVar26,&stack0x00000160);
  String::~String((String *)&stack0x00000160);
  (**(code **)(**(int **)(unaff_r5 + 0xe8) + 0x20))(*(int **)(unaff_r5 + 0xe8),1);
  piVar26 = *(int **)(unaff_r5 + 0x104);
  pcVar34 = *(code **)(*piVar26 + 0x44);
  String::String((String *)&stack0x00000168,(char *)(DAT_0012e7ec + 0x12e620));
  (*pcVar34)(piVar26,&stack0x00000168);
  String::~String((String *)&stack0x00000168);
  (**(code **)(**(int **)(unaff_r5 + 0xf0) + 0x20))(*(int **)(unaff_r5 + 0xf0),1);
  iVar5 = *(int *)(unaff_r5 + 0xc);
  if (*(int *)(iVar5 + 0x4b8) != 0) {
    FUN_0012f41e();
  }
  lVar11 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(iVar5 + 0x14));
  iVar5 = *(int *)(unaff_r5 + 0x40);
  lVar11 = Cafe::worldToDiamondCoords(lVar11);
  lVar11 = Cafe::diamondToStaggeredCoords(lVar11);
  uVar2 = Cafe::staggeredCoordsToIndex(lVar11);
  *(undefined2 *)(iVar5 + 0x2c) = uVar2;
  piVar26 = *(int **)(unaff_r5 + 0x40);
  pcVar34 = *(code **)(*piVar26 + 0xc);
  uVar8 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x14),(int)(short)piVar26[0xb]);
  (*pcVar34)(piVar26,uVar8);
  pZVar35 = *(ZombieCafe **)(unaff_r5 + 0x40);
  iVar5 = Furniture::canRotate((Furniture *)pZVar35);
  if ((iVar5 != 0) && (*(char *)(*(int *)((Furniture *)pZVar35 + 0x38) + 0x44) != '\x06')) {
    iVar5 = *(int *)((Furniture *)pZVar35 + 0x20);
    lVar11 = CFPoint::subtract(*(long *)((Furniture *)pZVar35 + 4),
                               (int)(short)iVar5 >> 1 & 0xffffU | (iVar5 >> 0x11) << 0x10);
    CFPoint::add(lVar11,(iVar5 >> 0x10) << 0x10);
    uVar8 = GameStateCafe::worldToScreenCoords((long)unaff_r5);
    FUN_00118458(*(undefined4 *)(unaff_r5 + 0x170),uVar8);
    pZVar35 = (ZombieCafe *)0x16c;
    *(undefined2 *)(unaff_r5 + 0x16c) = **(undefined2 **)(unaff_r7 + DAT_0012e7f0);
  }
  *(undefined4 *)(unaff_r5 + 0x44) = *(undefined4 *)(unaff_r5 + 0x40);
  FUN_0012f41e();
  if ((int)**(short **)(unaff_r7 + DAT_0012e7f4) < *(int *)(pZVar35 + DAT_0012e7f8)) {
    FUN_0012fe14();
  }
  iVar5 = ZombieCafe::touchWasPinch(pZVar35);
  if (iVar5 != 0) {
    FUN_0012fe14();
  }
  if (*(int *)(pZVar35 + 0x4d0) <= **(int **)(unaff_r7 + DAT_0012e7fc)) {
    FUN_0012fe14();
  }
  iVar5 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(pZVar35 + DAT_0012e800),'!');
  if (iVar5 == 0) {
    FUN_0012fe14();
  }
  GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x4b8));
  pFVar29 = (Furniture *)Cafe::pickCafeObject(*(long *)(unaff_r5 + 0x14));
  if (pFVar29 == (Furniture *)0x0) {
    FUN_0012f41e();
  }
  iVar5 = (**(code **)(*(int *)pFVar29 + 0x14))(pFVar29);
  fVar38 = extraout_s0;
  if (iVar5 != 1) {
    fVar38 = (float)FUN_0012fe28();
  }
  _GStack0000001c = (GameStateCafe *)(uint)(byte)pFVar29[0x2e];
  if (_GStack0000001c != (GameStateCafe *)0x0) {
    fVar38 = (float)FUN_0012fe28();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar38);
  iVar21 = DAT_0012e7cc;
  *(Furniture **)(unaff_r5 + 0x40) = pFVar29;
  unaff_r5[iVar21] = SUB41(iVar5,0);
  *(undefined2 *)(unaff_r5 + 0x162) = *(undefined2 *)(pFVar29 + 0x2c);
  *(Furniture *)(unaff_r5 + 0x164) = pFVar29[0x34];
  Cafe::removeFurniture(*(Cafe **)(unaff_r5 + 0x14),pFVar29);
  if (*(int *)(*(int *)(unaff_r5 + 0x18) + 0x88) == *(int *)(unaff_r5 + 0x40)) {
    *(int *)(*(int *)(unaff_r5 + 0x18) + 0x88) = (int)_GStack0000001c;
    pFVar29 = (Furniture *)_GStack0000001c;
  }
  for (iVar5 = 0; iVar5 < *(int *)(unaff_r5 + 0x20) + 1; iVar5 = iVar5 + 1) {
    puVar25 = (undefined4 *)(*(int *)(iVar5 * 4 + *(int *)(unaff_r5 + 0x24)) + 0x88);
    pFVar29 = (Furniture *)*puVar25;
    if (pFVar29 == *(Furniture **)(unaff_r5 + 0x40)) {
      *puVar25 = 0;
    }
  }
  for (iVar5 = 0; iVar21 = DAT_0012ebb0, iVar5 < *(int *)(unaff_r5 + 0x2c) + 1; iVar5 = iVar5 + 1) {
    puVar25 = (undefined4 *)(*(int *)(iVar5 * 4 + *(int *)(unaff_r5 + 0x30)) + 0x88);
    pFVar29 = (Furniture *)*puVar25;
    if (pFVar29 == *(Furniture **)(unaff_r5 + 0x40)) {
      *puVar25 = 0;
    }
  }
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebac) = 1;
  unaff_r5[iVar21] = (GameStateCafe)0x2;
  fVar38 = (float)FUN_0012f41e();
  if (*(int *)(pFVar29 + 0x44) == 0) {
    fVar38 = (float)FUN_0012f41e();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar38);
  iVar5 = DAT_0012ebb4;
  piVar26 = *(int **)(pFVar29 + 0x44);
  *(int **)(unaff_r5 + 0x40) = piVar26;
  unaff_r5[iVar5] = GStack0000001c;
  *(Furniture **)(unaff_r5 + 0x48) = pFVar29;
  pcVar34 = *(code **)(*piVar26 + 0xc);
  uVar8 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x4b8));
  (*pcVar34)(piVar26,uVar8);
  *(undefined4 *)(pFVar29 + 0x44) = 0;
  iVar5 = DAT_0012ebb0;
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebac) = 1;
  unaff_r5[iVar5] = GStack0000001c;
  uVar39 = FUN_0012f41e();
  pCVar36 = DAT_0012ebb8;
  if (*(short *)(unaff_r5 + 0x16c) == 0) {
    uVar39 = FUN_0012fe3e();
  }
  iVar5 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x170),*(long *)(pCVar36 + iVar5),(float)uVar39,
                     (float)((ulonglong)uVar39 >> 0x20));
  if (iVar5 == 0) {
    FUN_0012fe3e();
  }
  *(undefined2 *)(unaff_r5 + 0x16c) = **(undefined2 **)(unaff_r7 + DAT_0012ebbc);
  pFVar29 = *(Furniture **)(unaff_r5 + 0x44);
  if (*(char *)(*(int *)(pFVar29 + 0x38) + 0x44) == '\x04') {
    bVar18 = (char)pFVar29[0x34] + 1U & 3;
  }
  else {
    bVar18 = (byte)pFVar29[0x34] ^ 1;
  }
  Furniture::setOrientation(pFVar29,bVar18);
  iVar5 = *(int *)(unaff_r5 + 0xc);
  fVar38 = (float)CapcomMath::random(3);
  ZombieCafe::playEffect(iVar5,fVar38);
  FUN_0012f41e();
  iVar5 = (**(code **)(*(int *)pCVar36 + 0x14))(pCVar36);
  if (iVar5 == 3) {
    pCVar12 = (CharacterInstance *)Cafe::getSelectedObject(*(Cafe **)(unaff_r5 + 0x14));
    if (pCVar12 == pCVar36) {
      FUN_0012fe5e();
    }
    if (*(char *)(*(int *)(pCVar36 + 0x8c) + 0x24) != '\0') {
      FUN_0012fe5e();
    }
    iVar5 = (**(code **)(*(int *)pCVar36 + 0x20))(pCVar36);
    if ((iVar5 == 1) &&
       (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar36 + 0x8c) + 0x40),0), iVar5 != 0)) {
      FUN_0012fe5e();
    }
    GameStateCafe::select(unaff_r5,pCVar36);
    Store::close(*(Store **)(unaff_r5 + 0x84));
    CookCommandBar::close(*(CookCommandBar **)(unaff_r5 + 0xb4));
    pGVar23 = unaff_r5 + 0xac;
    PlantCommandBar::close(*(PlantCommandBar **)(unaff_r5 + 0xb8));
    CharacterCommandBar::open(*(CharacterCommandBar **)pGVar23);
    CharacterCommandBar::resetButtons();
    CharacterCommandBar::setCharacter(*(CharacterCommandBar **)pGVar23,pCVar36);
    Storage::close(*(Storage **)(unaff_r5 + 0xbc));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r5 + 0xc0));
    _GStack0000001c = (GameStateCafe *)(**(code **)(*(int *)pCVar36 + 0x20))(pCVar36);
    if (_GStack0000001c == (GameStateCafe *)0x1) {
      iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'\x16');
      if (iVar5 != 0) {
        uVar8 = CharacterCommandBar::addInfectButton
                          (*(CharacterCommandBar **)pGVar23,
                           *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebe0),
                           unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x10c) = uVar8;
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'L',
                   SUB41(_GStack0000001c,0));
      }
      iVar5 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(pCVar36 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar38 = (float)CapcomMath::random(8);
      }
      else {
        fVar38 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar5,fVar38);
      iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'\n');
      if (iVar5 != 0) {
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)(unaff_r5 + 0xac),
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc4),unaff_r5);
      }
    }
    else {
      if (_GStack0000001c != (GameStateCafe *)0x0) {
        if (_GStack0000001c != (GameStateCafe *)0x2) {
          FUN_0012eca0();
          return;
        }
        CharacterInstance::groan(pCVar36);
        if (*(char *)(*(int *)(pCVar36 + 0x8c) + 0x44) == '\x05') {
          if (*(StatusNote **)(pCVar36 + 0x30) != (StatusNote *)0x0) {
            Cafe::removeStatusNote(*(Cafe **)(unaff_r5 + 0x14),*(StatusNote **)(pCVar36 + 0x30));
            if (*(int **)(pCVar36 + 0x30) != (int *)0x0) {
              (**(code **)(**(int **)(pCVar36 + 0x30) + 4))();
              *(undefined4 *)(pCVar36 + 0x30) = 0;
            }
          }
          CharacterInstance::stopTasks(pCVar36);
          TutorialSystem::triggerEvent
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'=',true);
          Quest::runQuest(*(int *)(*(int *)(unaff_r5 + 0xc) + 0x40),0x2e,(int *)0xffffffff);
        }
        pGVar23 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar23,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc4),unaff_r5);
        _GStack0000001c = (GameStateCafe *)(pCVar36 + 0x8c);
        if (*(char *)(*(int *)_GStack0000001c + 0x44) == '\x06') {
          CharacterCommandBar::addReviveButton
                    (*(CharacterCommandBar **)pGVar23,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc8),unaff_r5);
          FUN_0012eaea();
          return;
        }
        uVar8 = CharacterCommandBar::addHealButton
                          (*(CharacterCommandBar **)pGVar23,
                           *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebcc),
                           unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x114) = uVar8;
        if (*(char *)(*(int *)_GStack0000001c + 0x44) == '\x03') {
          CharacterCommandBar::addWorkButton
                    (*(CharacterCommandBar **)pGVar23,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd0),unaff_r5);
        }
        else {
          uVar8 = CharacterCommandBar::addRestButton
                            (*(CharacterCommandBar **)pGVar23,
                             *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd4),
                             unaff_r5);
          *(undefined4 *)(unaff_r5 + 0x110) = uVar8;
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
        iVar5 = *(int *)(unaff_r5 + 0xc);
        if (*(int *)(iVar5 + 0x680) < 4) {
          FUN_0012fe72();
        }
        iVar5 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(iVar5 + DAT_0012ebc0),']');
        if (iVar5 != 0) {
          FUN_0012fe72();
        }
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'^',true);
        CharacterCommandBar::layout(*(CharacterCommandBar **)(unaff_r5 + 0xac));
        if (pCVar36[0xc6] == (CharacterInstance)0x0) {
          FUN_0012eca0();
          return;
        }
        CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
        pCVar36[0xc6] = (CharacterInstance)0x0;
        FUN_0012eca0();
        return;
      }
      iVar5 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(pCVar36 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar38 = (float)CapcomMath::random(8);
      }
      else {
        fVar38 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar5,fVar38);
      iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef14),'\x16');
      if (iVar5 != 0) {
        pGVar23 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar23,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef18),unaff_r5);
        CharacterCommandBar::addChefButton
                  (*(CharacterCommandBar **)pGVar23,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef1c),unaff_r5);
        if (unaff_r5[0x19a] == (GameStateCafe)0x0) {
          CharacterCommandBar::addScreenshotButton
                    (*(CharacterCommandBar **)pGVar23,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef20),unaff_r5);
        }
      }
      if (pCVar36[0xc6] != (CharacterInstance)0x0) {
        CharacterCommandBar::setChefButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
        pCVar36[0xc6] = (CharacterInstance)0x0;
      }
    }
    CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
    FUN_0012eca0();
    return;
  }
  if (iVar5 == 1) {
    uVar22 = *(byte *)(*(int *)(pCVar36 + 0x38) + 0x44) - 1;
    if (uVar22 < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x0012ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&switchD_0012ecc0::switchdataD_0012ecc4 +
                (uint)(&switchD_0012ecc0::switchdataD_0012ecc4)[uVar22] * 2 + 1))();
      return;
    }
    if (*(short *)(pCVar36 + 0x42) == 0) {
      _GStack0000001c = (GameStateCafe *)(int)*(short *)(pCVar36 + 0x44);
      if (0 < (int)_GStack0000001c) {
        iVar5 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(unaff_r5 + 0xc));
        fVar38 = extraout_s0_00;
        if (iVar5 == 0) {
          this_06 = *(Cafe **)(unaff_r5 + 0x14);
          String::valueOf((int)&stack0x00000198);
          pSVar13 = (StatusNote *)operator_new(0x30);
          in_stack_00000000 = (undefined1 *)**(uint **)(unaff_r7 + DAT_0012f62c);
          in_stack_00000004 = (GameStateCafe *)0xffffffff;
          in_stack_00000008 = 0;
          StatusNote::StatusNote(pSVar13,pCVar36,1,&stack0x00000198);
          Cafe::addStatusNote(this_06,pSVar13);
          String::~String((String *)&stack0x00000198);
          fVar38 = (float)ZombieCafe::addXp(*(ZombieCafe **)(unaff_r5 + 0xc),(int)_GStack0000001c);
        }
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar38);
        pCVar36 = pCVar36 + 6;
        goto LAB_0012f310;
      }
    }
    else {
      *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) =
           *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) + (int)*(short *)(pCVar36 + 0x42);
      _GStack0000001c = *(GameStateCafe **)(unaff_r5 + 0x14);
      String::valueOf((int)&stack0x00000190);
      pSVar13 = (StatusNote *)operator_new(0x30);
      in_stack_00000000 = (undefined1 *)**(uint **)(unaff_r7 + DAT_0012f2a4);
      in_stack_00000008 = 0;
      in_stack_00000004 = (GameStateCafe *)0xffffffff;
      StatusNote::StatusNote(pSVar13,pCVar36,0,&stack0x00000190);
      Cafe::addStatusNote((Cafe *)_GStack0000001c,pSVar13);
      fVar38 = (float)String::~String((String *)&stack0x00000190);
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar38);
      pCVar36 = pCVar36 + 4;
LAB_0012f310:
      *(undefined2 *)(pCVar36 + 0x3e) = 0;
    }
    _GStack0000001c = (GameStateCafe *)0x0;
    if (*(int *)(unaff_r5 + 0x54) == 0) {
      FUN_0012f41e();
      return;
    }
  }
  else if ((iVar5 == 2) &&
          (iVar21 = Cafe::doorPicked(*(long *)(unaff_r5 + 0x14)), iVar5 = DAT_0012f634, iVar21 != 0)
          ) {
    iVar21 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f634),'\x16');
    if (iVar21 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),
                        (bool)((byte)(*(Cafe **)(unaff_r5 + 0x14))[100] ^ 1),true);
      FUN_0012f41e();
      return;
    }
    iVar7 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),'Q');
    if (iVar7 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),true,false);
      fVar38 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),'\x04',true)
      ;
      in_stack_00000000 = (undefined1 *)iVar21;
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,3,fVar38,false);
      FUN_0012f41e();
      return;
    }
  }
  pZVar35 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar5 = ZombieCafe::unhandledTouching(pZVar35);
  if ((iVar5 != 0) ||
     ((unaff_r5[DAT_0012f638] == (GameStateCafe)0x9 && (*(int *)(pZVar35 + 0x4b8) != 0)))) {
    iVar5 = ZombieCafe::touchWasPinch(pZVar35);
    if (iVar5 != 0) {
      _GStack0000001c = *(GameStateCafe **)(unaff_r5 + 0x1e4);
      __divsf3(*(undefined4 *)(pZVar35 + DAT_0012f63c),*(undefined4 *)(pZVar35 + 0x4c0));
      iVar5 = CapcomApp::getInstance();
      pZVar35 = *(ZombieCafe **)(iVar5 + 4);
      uVar8 = ZombieCafe::getCafeZoomParam(pZVar35,extraout_s0_01,extraout_s1);
      *(undefined4 *)(unaff_r5 + 0x1e4) = uVar8;
      iVar5 = __aeabi_fcmpeq(_GStack0000001c,uVar8);
      if (iVar5 == 0) {
        _GStack0000001c = *(GameStateCafe **)(unaff_r5 + 0x1e0);
        lVar11 = CFPoint::subtract(*(long *)(pZVar35 + 0x4b8),(long)_GStack0000001c);
        lVar14 = CFPoint::multiplyf(lVar11,extraout_s0_02);
        lVar11 = CFPoint::subtract(lVar14,lVar11);
        uVar8 = CFPoint::subtract((long)_GStack0000001c,lVar11);
        *(undefined4 *)(unaff_r5 + 0x1e0) = uVar8;
      }
    }
    iVar5 = *(int *)(unaff_r5 + 0xc);
    if ((int)**(short **)(unaff_r7 + DAT_0012f640) < *(int *)(iVar5 + DAT_0012f644)) {
      uVar8 = __floatsisf((*(int *)(iVar5 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar5 + DAT_0012f648) >> 0x10));
      iVar21 = DAT_0012f648;
      *(undefined4 *)(unaff_r5 + 0x1d8) = uVar8;
      uVar8 = __floatsisf((int)*(short *)(iVar5 + 0x4b8) - (int)*(short *)(iVar5 + iVar21));
      *(undefined4 *)(unaff_r5 + 0x1dc) = uVar8;
    }
    else {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  _GStack0000001c = *(GameStateCafe **)(unaff_r5 + 0x1e0);
  uVar22 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1dc));
  iVar5 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1d8));
  _GStack0000001c =
       (GameStateCafe *)CFPoint::add((long)_GStack0000001c,iVar5 << 0x10 | uVar22 & 0xffff);
  *(GameStateCafe **)(unaff_r5 + 0x1e0) = _GStack0000001c;
  iVar21 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x18);
  iVar5 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x1c);
  uVar30 = *(undefined4 *)(unaff_r5 + 0x1e4);
  uVar8 = __floatsisf(iVar21 >> 0x10);
  uVar8 = __mulsf3(uVar8,uVar30);
  ceilf(__x);
  uVar15 = __floatsisf((int)(short)iVar21);
  uVar15 = __mulsf3(uVar15,uVar30);
  ceilf(__x_00);
  uVar16 = __floatsisf((int)(short)iVar5);
  __mulsf3(uVar16,uVar30);
  sVar3 = __fixsfsi();
  uVar16 = __floatsisf(iVar5 >> 0x10);
  __mulsf3(uVar16,uVar30);
  uVar22 = __fixsfsi();
  sVar4 = __fixsfsi(uVar15);
  uVar17 = __fixsfsi(uVar8);
  iVar5 = -((int)_GStack0000001c >> 0x10);
  if (iVar5 < (short)uVar22) {
    uVar22 = (uVar22 & 0xffff) * -0x10000 | (uint)_GStack0000001c & 0xffff;
LAB_0012f5f8:
    *(uint *)(unaff_r5 + 0x1e0) = uVar22;
  }
  else {
    uVar22 = ((uVar22 & 0xffff) + (uVar17 & 0xffff)) - 1;
    iVar21 = (int)(short)uVar22 - (int)(short)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12);
    if (-iVar21 != (int)_GStack0000001c >> 0x10 && iVar21 <= iVar5) {
      uVar22 = ((uint)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12) - (uVar22 & 0xffff)) * 0x10000 |
               (uint)_GStack0000001c & 0xffff;
      goto LAB_0012f5f8;
    }
  }
  uVar22 = *(uint *)(unaff_r5 + 0x1e0);
  iVar5 = -(int)(short)uVar22;
  if (iVar5 < sVar3) {
    *(uint *)(unaff_r5 + 0x1e0) = (uint)(ushort)-sVar3 | uVar22 & 0xffff0000;
  }
  else {
    sVar3 = sVar4 + -1 + sVar3;
    iVar21 = (int)sVar3 - (int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    if (-iVar21 != (int)(short)uVar22 && iVar21 <= iVar5) {
      *(uint *)(unaff_r5 + 0x1e0) =
           (uint)(ushort)(*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10) - sVar3) | uVar22 & 0xffff0000
      ;
    }
  }
  uVar16 = *(undefined4 *)(unaff_r5 + 0x1d8);
  puVar25 = *(undefined4 **)(unaff_r7 + DAT_0012f9b0);
  uVar8 = __floatsisf(in_stack_00000020);
  uVar15 = __mulsf3(uVar8,*puVar25);
  iVar5 = __aeabi_fcmplt(uVar15,0x3f800000);
  uVar8 = uVar15;
  if (iVar5 == 0) {
    uVar8 = 0x3f800000;
  }
  _GStack0000001c = (GameStateCafe *)(uint)(iVar5 != 0);
  uVar8 = __subsf3(0x3f800000,uVar8);
  iVar5 = __mulsf3(uVar16,uVar8);
  *(int *)(unaff_r5 + 0x1d8) = iVar5;
  uVar8 = *(undefined4 *)(unaff_r5 + 0x1dc);
  if (_GStack0000001c == (GameStateCafe *)0x0) {
    uVar15 = 0x3f800000;
  }
  uVar15 = __subsf3(0x3f800000,uVar15);
  iVar21 = __mulsf3(uVar8,uVar15);
  *(int *)(unaff_r5 + 0x1dc) = iVar21;
  iVar7 = __aeabi_fcmpge(iVar5,0);
  if (iVar7 == 0) {
    iVar5 = iVar5 + -0x80000000;
  }
  _GStack0000001c = (GameStateCafe *)**(undefined4 **)(unaff_r7 + DAT_0012f9b4);
  iVar5 = __aeabi_fcmplt(iVar5,_GStack0000001c);
  if (iVar5 != 0) {
    iVar5 = __aeabi_fcmpge(iVar21,0);
    if (iVar5 == 0) {
      iVar21 = iVar21 + -0x80000000;
    }
    iVar5 = __aeabi_fcmplt(iVar21,_GStack0000001c);
    if (iVar5 != 0) {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  GameStateCafe::tickFiredZombies(unaff_r5);
  GameStateCafe::tickStaff(unaff_r5,in_stack_00000020);
  GameStateCafe::tickZombieWorkInterruptions(unaff_r5,in_stack_00000020);
  GameStateCafe::tickCustomers(unaff_r5,in_stack_00000020);
  GameStateCafe::tickLockerZombies(unaff_r5,in_stack_00000020);
  iVar5 = *(int *)(unaff_r5 + 0x54);
  if (iVar5 != 0) {
    iVar21 = *(int *)(unaff_r5 + 0xc);
    if (iVar5 == *(int *)(unaff_r5 + 0x18)) {
      this_03 = *(TutorialSystem **)(iVar21 + DAT_0012f9b8);
      uVar19 = '\x01';
    }
    else if ((iVar5 == *(int *)(unaff_r5 + 0x5c)) && (*(char *)(*(int *)(iVar5 + 0x8c) + 4) == '\0')
            ) {
      uVar19 = '\r';
      this_03 = *(TutorialSystem **)(iVar21 + DAT_0012f9b8);
    }
    else {
      uVar19 = '\x10';
      this_03 = *(TutorialSystem **)(iVar21 + DAT_0012f9b8);
    }
    TutorialSystem::triggerEvent(this_03,uVar19,true);
  }
  iVar5 = ZombieCafe::IsMusicPlaying();
  if ((iVar5 == 0) &&
     (in_stack_00000020 = *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) - in_stack_00000020,
     *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) = in_stack_00000020, iVar5 = DAT_0012f9c0,
     in_stack_00000020 < 1)) {
    if (unaff_r5[DAT_0012f9c0] == (GameStateCafe)0x0) {
      L_PrintLog((char *)(DAT_0012f9c4 + 0x12f7de),(char *)(DAT_0012f9c8 + 0x12f7e0));
      ZombieCafe::PlayCafeMusic();
      unaff_r5[iVar5] = (GameStateCafe)0x1;
    }
    else {
      ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(unaff_r5 + 0xc));
      unaff_r5[iVar5] = (GameStateCafe)0x0;
    }
    *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) =
         **(undefined4 **)(unaff_r7 + DAT_0012f9cc);
  }
  uVar22 = (uint)(byte)unaff_r5[DAT_0012f9d0];
  if ((uVar22 - 1 < 3) || (uVar22 == 7)) {
    cVar20 = '\0';
  }
  else {
    cVar20 = '\x01' - (uVar22 == 10);
  }
  *(char *)(*(int *)(unaff_r5 + 0x14) + 0xc9) = cVar20;
  iVar5 = DAT_0012f9d8;
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) = 0;
    pcVar33 = (char *)(iVar5 + 0x12f82e);
    L_PrintLog(pcVar33,(char *)(DAT_0012f9dc + 0x12f832));
    if ((((*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x14) == '\0') &&
         (*(char *)(*(int *)(unaff_r5 + 0x7c) + 0x14) == '\0')) &&
        (*(char *)(*(int *)(unaff_r5 + 0x80) + 0x14) == '\0')) &&
       (iVar5 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9b8),'\x01'),
       iVar5 != 0)) {
      L_PrintLog(pcVar33,(char *)(DAT_0012f9e0 + 0x12f876));
      if ((*(int *)(unaff_r5 + 0x130) == 0) ||
         (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) {
        if (((*(char *)(*(int *)(unaff_r5 + 0x124) + 0x14) == '\0') &&
            (*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) == '\0')) &&
           ((*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) == '\0' &&
            (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) == '\0')))) {
          this_04 = *(LotteryDialog **)(unaff_r5 + 0xa4);
          if (this_04 == (LotteryDialog *)0x0) {
            L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
            pCVar37 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001b8);
            Vector<String>::elementAt((int)&stack0x000001c0);
            Vector<String>::elementAt((int)&stack0x000001c8);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            in_stack_00000004 = unaff_r5;
            ConfirmDialog::show(pCVar37,&stack0x000001b8,&stack0x000001c0,&stack0x000001c8);
            String::~String((String *)&stack0x000001c8);
            String::~String((String *)&stack0x000001c0);
            pSVar6 = (String *)&stack0x000001b8;
          }
          else {
            if (this_04[0x14] != (LotteryDialog)0x0) {
              LotteryDialog::backClose(this_04);
              L_PrintLog((char *)(DAT_0012fd4c + 0x12fa14),(char *)(DAT_0012fd50 + 0x12fa16));
              goto LAB_0012fa18;
            }
            L_PrintLog((char *)(DAT_0012f9e8 + 0x12f8e6),(char *)(DAT_0012f9ec + 0x12f8e8));
            pCVar37 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001a0);
            Vector<String>::elementAt((int)&stack0x000001a8);
            Vector<String>::elementAt((int)&stack0x000001b0);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            in_stack_00000004 = unaff_r5;
            ConfirmDialog::show(pCVar37,&stack0x000001a0,&stack0x000001a8,&stack0x000001b0);
            String::~String((String *)&stack0x000001b0);
            String::~String((String *)&stack0x000001a8);
            pSVar6 = (String *)&stack0x000001a0;
          }
          String::~String(pSVar6);
        }
      }
      else {
        L_PrintLog(pcVar33,(char *)(DAT_0012f9e4 + 0x12f892));
        (**(code **)(**(int **)(unaff_r5 + 0x130) + 0x20))(*(int **)(unaff_r5 + 0x130),0);
      }
    }
  }
LAB_0012fa18:
  iVar5 = (byte)unaff_r5[DAT_0012fd54] - 1;
  *(byte *)(*(int *)(unaff_r5 + 0x14) + 0xca) =
       ((char)iVar5 - ((char)unaff_r5[DAT_0012fd54] - 2U)) - (iVar5 == 0);
  if (**(char **)(unaff_r7 + DAT_0012fd58) == '\0') {
    FUN_0012ff22();
    return;
  }
  iVar5 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012fd5c),'*');
  if (iVar5 == 0) {
    FUN_0012ff22();
    return;
  }
  iVar21 = DAT_0012fd60 + 0x12fa4c;
  iVar5 = *(int *)(DAT_0012fd60 + 0x12fac0);
  if (iVar5 != 0) {
    if (iVar5 != 3) {
      if (iVar5 != 2) {
        FUN_0012ff22();
        return;
      }
      puVar25 = *(undefined4 **)(unaff_r7 + DAT_0012fd68);
      in_stack_00000020 = 0;
      _GStack0000001c = *(GameStateCafe **)(unaff_r7 + DAT_0012fd6c);
      puVar31 = puVar25 + 4;
      for (; piVar26 = (int *)_GStack0000001c, in_stack_00000020 < *(int *)_GStack0000001c;
          in_stack_00000020 = in_stack_00000020 + 1) {
        in_stack_00000000 = (undefined1 *)puVar25[2];
        in_stack_00000004 = (GameStateCafe *)puVar25[3];
        in_stack_00000008 = *puVar31;
        in_stack_0000000c = (char *)puVar31[1];
        sprintf(&stack0x000003fc,(char *)(DAT_0012fd70 + 0x12faac),*puVar25,puVar25[1]);
        if ((puVar25[1] == 2) && (0 < (int)*puVar31)) {
          in_stack_00000000 = *(undefined1 **)_GStack0000001c;
          snprintf(&stack0x0000027c,0x80,(char *)(DAT_0012fd74 + 0x12fad0),in_stack_00000020 + 1);
          strcpy(&stack0x000001fc,(char *)puVar31[1]);
          in_stack_00000000 = &stack0x0000027c;
          snprintf((char *)((int)&stack0x00000000 + DAT_0012fd7c),0x400,
                   (char *)(DAT_0012fd78 + 0x12faf0),*puVar31);
          ZombieCafe::addToxinMedia(*(ZombieCafe **)(unaff_r5 + 0xc),*puVar31);
          puVar25[1] = 0;
          puVar25[2] = 0;
          *puVar31 = 0;
          ZombieCafe::save();
          pNVar24 = *(NoticeDialog **)(unaff_r5 + 0xd0);
          String::String((String *)&stack0x000001d8,(char *)((int)&stack0x00000000 + DAT_0012fd7c));
          Vector<String>::elementAt((int)&stack0x000001d0);
          in_stack_00000000 = (undefined1 *)0x0;
          NoticeDialog::show(pNVar24,&stack0x000001d8,&stack0x000001d0);
          String::~String((String *)&stack0x000001d0);
          String::~String((String *)&stack0x000001d8);
        }
        puVar25 = puVar25 + 6;
        puVar31 = puVar31 + 6;
      }
      if (0 < *(int *)_GStack0000001c) {
        GameStateCafe::gotEventValue
                  (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
      }
      *piVar26 = 0;
      iVar21 = DAT_0012fd84 + 0x12fb80;
    }
    *(undefined4 *)(iVar21 + 0x74) = 4;
    FUN_0012ff22();
    return;
  }
  if (*(int *)(unaff_r5 + 0x1fc) == 0) {
    GameStateCafe::getEventValue
              (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
    uVar8 = 1;
  }
  else {
    if (*(int *)(unaff_r5 + 0x1fc) != 1) {
      FUN_0012ff22();
      return;
    }
    uVar8 = 4;
  }
  *(undefined4 *)(unaff_r5 + 0x1fc) = uVar8;
  FUN_0012ff22();
  return;
}


