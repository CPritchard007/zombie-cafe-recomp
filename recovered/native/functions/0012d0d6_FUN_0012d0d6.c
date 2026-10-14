/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012d0d6 FUN_0012d0d6 */

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

void FUN_0012d0d6(undefined4 param_1,ScreenElement *param_2,undefined4 param_3,
                 ScreenElement *param_4,undefined1 *param_5,GameStateCafe *param_6,uint param_7,
                 char *param_8,char *param_9)

{
  FurnitureData FVar1;
  Furniture FVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  String *pSVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  MALTAHoover *pMVar11;
  SServer *pSVar12;
  HCOManager *pHVar13;
  GameStateSpecialSale *this;
  GameStateLoading *this_00;
  LotteryFeaturedDialog *this_01;
  UserRankDialog *this_02;
  long lVar14;
  CharacterInstance *pCVar15;
  StatusNote *pSVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  TutorialSystem *this_03;
  LotteryDialog *this_04;
  byte bVar22;
  uchar uVar23;
  uint extraout_r1;
  char *pcVar24;
  char cVar25;
  uint uVar26;
  GameStateCafe *pGVar27;
  ConfirmDialog *pCVar28;
  Furniture *pFVar29;
  undefined4 uVar30;
  NoticeDialog *pNVar31;
  undefined4 *puVar32;
  CapcomGame *this_05;
  char *pcVar33;
  int *piVar34;
  ScreenElement *pSVar35;
  FurnitureData *pFVar36;
  Furniture *pFVar37;
  Cafe *pCVar38;
  undefined4 uVar39;
  uint *puVar40;
  GameStateCafe *unaff_r5;
  MessageElement *pMVar41;
  code *pcVar42;
  ZombieCafe *pZVar43;
  CharacterInstance *pCVar44;
  int unaff_r7;
  undefined4 in_cr15;
  float extraout_s0;
  float fVar45;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float __x;
  float __x_00;
  undefined8 uVar46;
  float extraout_s1;
  int in_stack_00000020;
  
  if (((param_4 != (ScreenElement *)0x0) &&
      (iVar6 = ScreenElement::isChildOf(param_4,param_2), iVar6 != 0)) &&
     (iVar6 = TutorialArrow::targetContains
                        (*(TutorialArrow **)(unaff_r5 + 0xc4),unaff_r5,
                         *(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0012d124)), iVar6 == 0)) {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012d14c) = 1;
  }
  (**(code **)(**(int **)(unaff_r5 + 0x94) + 8))(*(int **)(unaff_r5 + 0x94),in_stack_00000020);
  if (unaff_r5[0x1a4] == (GameStateCafe)0x0) {
    if (*(char *)(*(int *)(unaff_r5 + 0x8c) + 0x14) != '\0') {
      unaff_r5[0x1a4] = (GameStateCafe)0x1;
    }
  }
  else if (*(char *)(*(int *)(unaff_r5 + 0x8c) + 0x14) == '\0') {
    GameStateCafe::save(SUB41(unaff_r5,0));
    unaff_r5[0x1a4] = (GameStateCafe)0x0;
  }
  uVar26 = *(uint *)(unaff_r5 + 0xa4);
  if (uVar26 != 0) {
    uVar26 = (uint)*(byte *)(uVar26 + 0x14);
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
  if (uVar26 != 0) {
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
  pGVar27 = unaff_r5 + 0xfc;
  if ((*(int *)(unaff_r5 + 0x120) != 0) && (*(char *)(*(int *)(unaff_r5 + 0x120) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(pGVar27 + 0x28) != 0) && (*(char *)(*(int *)(pGVar27 + 0x28) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(unaff_r5 + 0xa8) != 0) && (*(char *)(*(int *)(unaff_r5 + 0xa8) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  pGVar27 = unaff_r5 + 0xfc;
  if ((*(int *)(unaff_r5 + 0x128) != 0) && (*(char *)(*(int *)(unaff_r5 + 0x128) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(pGVar27 + 0x3c) != 0) && (*(char *)(*(int *)(pGVar27 + 0x3c) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if (-1 < *(int *)(unaff_r5 + 0x17c)) {
    pSVar7 = (String *)
             Vector<MessageWithToxin*>::removeElementAt
                       ((Vector<MessageWithToxin*> *)(unaff_r5 + 0x178),0);
    ZombieCafe::addToxin(*(ZombieCafe **)(unaff_r5 + 0xc),*(int *)(pSVar7 + 8),false);
    ZombieCafe::addCash(*(ZombieCafe **)(unaff_r5 + 0xc),*(int *)(pSVar7 + 0xc));
    ZombieCafe::addXp(*(ZombieCafe **)(unaff_r5 + 0xc),*(int *)(pSVar7 + 0x10));
    pMVar41 = *(MessageElement **)(unaff_r5 + 0x7c);
    String::String((String *)&stack0x00000038,pSVar7);
    param_5 = *(undefined1 **)(pSVar7 + 0x10);
    MessageElement::show
              (pMVar41,&stack0x00000038,*(undefined4 *)(pSVar7 + 8),*(undefined4 *)(pSVar7 + 0xc));
    String::~String((String *)&stack0x00000038);
    String::~String(pSVar7);
    operator_delete(pSVar7);
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
      (iVar8 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'U'),
      iVar8 == 0)) && (iVar8 = GameStateCafe::checkCanLotteryButton(unaff_r5), iVar8 != 0)) {
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'V',false);
  }
  iVar6 = DAT_0012d768;
  if (((8 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680)) &&
      (iVar8 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'W'),
      iVar8 == 0)) && (*(int *)(unaff_r5 + 300) == 0)) {
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'X',true);
  }
  iVar6 = DAT_0012d768;
  if (*(int *)(*(int *)(unaff_r5 + 0xc) + 0x680) == 3) {
    iVar8 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d768),'[');
    if (iVar8 == 0) {
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'\\',false);
    }
    else {
      TutorialSystem::setTutorialCompleted
                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'[');
    }
  }
  pGVar27 = unaff_r5 + 0xcc;
  iVar6 = ObjectiveSystem::actionRequired
                    (*(ObjectiveSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012d76c));
  if (iVar6 == 0) {
    iVar6 = PullMenuElement::hasNewIndicator(*(PullMenuElement **)pGVar27,3);
    if (iVar6 != 0) {
      PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)pGVar27,3,false);
    }
  }
  else {
    iVar6 = PullMenuElement::hasNewIndicator(*(PullMenuElement **)pGVar27,3);
    if (iVar6 == 0) {
      PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)pGVar27,3,true);
      PullMenuElement::ifIsCloseNewIndicatorPull();
    }
  }
  iVar6 = *(int *)(unaff_r5 + 0xc);
  param_5 = (undefined1 *)(uint)*(byte *)(iVar6 + DAT_0012d774);
  param_6 = (GameStateCafe *)(uint)*(byte *)(iVar6 + DAT_0012d77c);
  param_7 = *(uint *)(iVar6 + DAT_0012d780);
  sprintf(&stack0x000002fc,(char *)(DAT_0012d778 + 0x12d5e8),(uint)*(byte *)(iVar6 + DAT_0012d770),
          (uint)*(byte *)(iVar6 + 0x6f8));
  iVar6 = *(int *)(unaff_r5 + 0xc);
  if ((((*(char *)(iVar6 + DAT_0012d770) != '\0') && (*(char *)(iVar6 + 0x6f8) == '\0')) ||
      (*(char *)(iVar6 + DAT_0012d774) != '\0')) && (*(char *)(iVar6 + DAT_0012d77c) == '\0')) {
    *(undefined1 *)(iVar6 + DAT_0012d77c) = 1;
    pCVar28 = *(ConfirmDialog **)(unaff_r5 + 0x80);
    Vector<String>::elementAt((int)&stack0x00000040);
    Vector<String>::elementAt((int)&stack0x00000048);
    Vector<String>::elementAt((int)&stack0x00000050);
    param_5 = *(undefined1 **)(unaff_r7 + DAT_0012d790);
    param_6 = unaff_r5;
    ConfirmDialog::show(pCVar28,&stack0x00000040,&stack0x00000048,&stack0x00000050);
    String::~String((String *)&stack0x00000050);
    String::~String((String *)&stack0x00000048);
    String::~String((String *)&stack0x00000040);
  }
  iVar8 = DAT_0012d798;
  iVar6 = DAT_0012d794;
  if ((*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012d794) != '\0') &&
     (iVar9 = *(int *)(unaff_r5 + 0x1b0), *(int *)(unaff_r5 + 0x1b0) = in_stack_00000020 + iVar9,
     **(int **)(unaff_r7 + iVar8) <= in_stack_00000020 + iVar9)) {
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
    puVar32 = *(undefined4 **)(unaff_r7 + DAT_0012d79c);
    uVar10 = __floatsisf(in_stack_00000020);
    uVar10 = __mulsf3(uVar10,*puVar32);
    uVar10 = __subsf3(*(undefined4 *)(iVar6 + 0x688),uVar10);
    *(undefined4 *)(iVar6 + 0x688) = uVar10;
    iVar8 = *(int *)(unaff_r5 + 0xc);
    uVar10 = *(undefined4 *)(iVar8 + 0x688);
    iVar6 = __aeabi_fcmplt(uVar10,0);
    if (iVar6 == 0) {
      iVar6 = __aeabi_fcmpgt(uVar10,0x3f800000);
      if (iVar6 != 0) {
        uVar10 = 0x3f800000;
      }
    }
    else {
      uVar10 = 0;
    }
    *(undefined4 *)(iVar8 + 0x688) = uVar10;
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
    piVar34 = *(int **)(unaff_r7 + DAT_0012da78);
    if (pZVar43[DAT_0012da74] == (ZombieCafe)0x0) {
      ZombieCafe::beginLoadOrders(pZVar43,true);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012da74) = 1;
      uVar10 = __divsi3(*piVar34,100);
      *(undefined4 *)(unaff_r5 + 0x1c4) = uVar10;
      if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012da7c) != '\0') {
        uVar10 = CCServer::GetMyUserID(*(void **)(*(int *)(unaff_r5 + 0xc) + DAT_0012da80));
        pZVar43 = *(ZombieCafe **)(unaff_r5 + 0xc);
        uVar39 = *(undefined4 *)(pZVar43 + 0x680);
        uVar30 = *(undefined4 *)(pZVar43 + DAT_0012da84);
        uVar19 = *(undefined4 *)(pZVar43 + DAT_0012da88);
        param_9 = (char *)ZombieCafe::getToxin(pZVar43);
        pcVar24 = (char *)(DAT_0012da8c + 0x12d868);
        param_5 = (undefined1 *)uVar10;
        param_6 = (GameStateCafe *)uVar39;
        param_7 = uVar30;
        param_8 = (char *)uVar19;
        snprintf((char *)((int)&stack0x00000000 + DAT_0012da94),0x80,
                 (char *)(DAT_0012da90 + 0x12d86a),pcVar24);
        CCMarketing_RecordAnalyticsEvent
                  (*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012da98),DAT_0012da9c + 0x12d884,
                   (int)&stack0x00000000 + DAT_0012da94);
        pMVar11 = (MALTAHoover *)MALTAHoover::GetInstance();
        MALTAHoover::GetInstance();
        MALTAHoover::GetInstance();
        MALTAHoover::init(pMVar11,(char *)(DAT_0012daa0 + 0x12d8a0),
                          (char *)(DAT_0012daa4 + 0x12d8a2),pcVar24);
        memset(&stack0x0000027c,0,0x40);
        pSVar12 = (SServer *)MALTAHoover::GetInstance();
        iVar6 = MALTAHoover::getFBID(pSVar12,(char *)**(undefined4 **)(unaff_r7 + DAT_0012daa8));
        if (iVar6 == 0) {
          L_PrintLog((char *)(DAT_0012daac + 0x12d8cc),&stack0x0000027c);
        }
        memset(&stack0x000003fc,0,0x40);
        snprintf(&stack0x000003fc,0x40,(char *)(DAT_0012dab0 + 0x12d8e4),&stack0x0000027c);
        pMVar11 = (MALTAHoover *)MALTAHoover::GetInstance();
        uVar20 = *(uint *)(*(ZombieCafe **)(unaff_r5 + 0xc) + 0x680);
        uVar26 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
        iVar6 = *(int *)(unaff_r5 + 0xc);
        param_5 = *(undefined1 **)(iVar6 + DAT_0012da88);
        param_6 = *(GameStateCafe **)(iVar6 + DAT_0012da84);
        param_7 = (uint)*(byte *)(iVar6 + DAT_0012dab8);
        param_9 = *(char **)(unaff_r7 + DAT_0012dabc);
        param_8 = &stack0x000003fc;
        MALTAHoover::send(pMVar11,(char *)(DAT_0012dab4 + 0x12d906),uVar20,uVar26,(uint)param_5,
                          (uint)param_6,param_7,&stack0x000003fc,param_9);
      }
    }
    else {
      ZombieCafe::beginLoadOrders(pZVar43,false);
      puVar32 = *(undefined4 **)(unaff_r7 + DAT_0012daa8);
      GameStateCafe::requestGetEventGift((void *)*puVar32,unaff_r5);
      GameStateCafe::requestGetRankingGift((void *)*puVar32,unaff_r5);
      iVar6 = ZombieCafe::checkInstallGift();
      if (iVar6 != 0) {
        ZombieCafe::setZombie_InstallGift();
      }
      *(int *)(unaff_r5 + 0x1c4) = *piVar34 * 10;
    }
  }
  iVar6 = *(int *)(unaff_r5 + 500);
  *(int *)(unaff_r5 + 500) = iVar6 - in_stack_00000020;
  if (iVar6 - in_stack_00000020 < 1) {
    pHVar13 = (HCOManager *)HCOManager::getInstance();
    iVar6 = HCOManager::getHCOEnable(pHVar13);
    if (iVar6 != 0) {
      pHVar13 = (HCOManager *)HCOManager::getInstance();
      iVar6 = HCOManager::getFirstDisplay(pHVar13);
      if ((((iVar6 == 0) &&
           ((*(int *)(unaff_r5 + 300) == 0 || (*(char *)(*(int *)(unaff_r5 + 300) + 0x14) == '\0')))
           ) && ((*(int *)(unaff_r5 + 0x138) == 0 ||
                 (*(char *)(*(int *)(unaff_r5 + 0x138) + 0x14) == '\0')))) &&
         ((3 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680) &&
          (iVar6 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012da70),'I'),
          iVar6 != 0)))) {
        this_05 = *(CapcomGame **)(unaff_r5 + 0xc);
        this = (GameStateSpecialSale *)operator_new(DAT_0012dac0);
        GameStateSpecialSale::GameStateSpecialSale(this);
        this_00 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(this_00,(GameState *)this);
        CapcomGame::setNextState(this_05,(GameState *)this_00);
      }
    }
    *(undefined4 *)(unaff_r5 + 500) = 1000;
  }
  pHVar13 = (HCOManager *)HCOManager::getInstance();
  HCOManager::tickHCO(pHVar13);
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
    uVar10 = uRam0012de08;
    if (iVar6 != 0) {
      uVar10 = DAT_0012dacc;
    }
    *(undefined4 *)(unaff_r5 + 0x1c8) = uVar10;
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
  pcVar24 = *(char **)(unaff_r7 + iRam0012de14);
  if ((((((*pcVar24 != '\0') && (**(char **)(unaff_r7 + DAT_0012de18) == '\0')) &&
        ((*(int *)(unaff_r5 + 0xd8) == 0 || (*(char *)(*(int *)(unaff_r5 + 0xd8) + 0x14) == '\0'))))
       && ((*(int *)(unaff_r5 + 300) == 0 || (*(char *)(*(int *)(unaff_r5 + 300) + 0x14) == '\0'))))
      && ((*(int *)(unaff_r5 + 0x130) == 0 || (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')
          ))) &&
     ((((*(char *)(*(int *)(unaff_r5 + 0xc4) + 0x14) == '\0' &&
        (iVar8 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iRam0012de0c),'\x16'),
        iVar8 != 0)) && (7 < *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680))) &&
      (((iVar8 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'U'), iVar8 != 0
        && (iVar8 = TutorialSystem::isTutorialCompleted
                              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'V'),
           iVar8 != 0)) && (*(int *)(unaff_r5 + 0xa8) == 0)))))) {
    L_PrintLog((char *)(DAT_0012de1c + 0x12dbde),(char *)(DAT_0012de20 + 0x12dbe0));
    if ((*(int *)(*(int *)(unaff_r5 + 0xc) + 0x680) < 9) ||
       (iVar6 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'X'), iVar6 != 0))
    {
      pcVar33 = (char *)(DAT_0012de24 + 0x12dc02);
      L_PrintLog(pcVar33,(char *)(DAT_0012de28 + 0x12dc04));
      *pcVar24 = '\0';
      if (**(char **)(unaff_r7 + DAT_0012de2c) != '\0') {
        L_PrintLog(pcVar33,(char *)(DAT_0012de30 + 0x12dc20));
        this_01 = (LotteryFeaturedDialog *)operator_new(0xb8);
        LotteryFeaturedDialog::LotteryFeaturedDialog(this_01,(ZombieCafeGameState *)unaff_r5);
        *(LotteryFeaturedDialog **)(unaff_r5 + 300) = this_01;
        (**(code **)(*(int *)this_01 + 0x1c))(this_01,0x12);
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
  pcVar24 = *(char **)(unaff_r7 + DAT_0012de4c);
  if ((((*pcVar24 != '\0') &&
       ((*(int *)(unaff_r5 + 0xd8) == 0 || (*(char *)(*(int *)(unaff_r5 + 0xd8) + 0x14) == '\0'))))
      && ((*(int *)(unaff_r5 + 300) == 0 || (*(char *)(*(int *)(unaff_r5 + 300) + 0x14) == '\0'))))
     && ((((*(int *)(unaff_r5 + 0x130) == 0 ||
           (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) &&
          (*(char *)(*(int *)(unaff_r5 + 0xc4) + 0x14) == '\0')) &&
         (iVar6 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iRam0012de0c),'.'),
         iVar6 != 0)))) {
    L_PrintLog((char *)(DAT_0012de50 + 0x12dcf0),(char *)(DAT_0012de54 + 0x12dcf2));
    *pcVar24 = '\0';
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
    piVar34 = *(int **)(unaff_r5 + 0xf4);
    pcVar42 = *(code **)(*piVar34 + 0x44);
    Vector<String>::elementAt((int)&stack0x00000058);
    (*pcVar42)(piVar34,&stack0x00000058);
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
  uVar26 = (uint)(byte)pSVar35[100];
  if (uVar26 == 1) {
    GameStateCafe::enterTileEditMode(unaff_r5);
    FUN_0012f41e();
  }
  if (uVar26 == 2) {
    GameStateCafe::enterWallEditMode(unaff_r5);
    FUN_0012f41e();
    coprocessor_loadlong(0xf,in_cr15,extraout_r1 >> 10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar26 != 3) {
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
      pNVar31 = *(NoticeDialog **)(unaff_r5 + 0xd0);
      Vector<String>::elementAt((int)&stack0x00000098);
      Vector<String>::elementAt((int)&stack0x000000a0);
      param_5 = (undefined1 *)0x0;
      NoticeDialog::show(pNVar31,&stack0x00000098,&stack0x000000a0);
      String::~String((String *)&stack0x000000a0);
      pSVar7 = (String *)&stack0x00000098;
    }
    else {
      *(FurnitureData **)(unaff_r5 + 0x60) = pFVar36;
      pCVar28 = *(ConfirmDialog **)(unaff_r5 + 0x80);
      Vector<String>::elementAt((int)&stack0x00000060);
      String::valueOf((int)&stack0x00000068);
      String::operator+((String *)&stack0x00000070,&stack0x00000060,&stack0x00000068);
      Vector<String>::elementAt((int)&stack0x00000078);
      String::operator+((String *)&stack0x00000080,&stack0x00000070,&stack0x00000078);
      Vector<String>::elementAt((int)&stack0x00000088);
      Vector<String>::elementAt((int)&stack0x00000090);
      param_5 = *(undefined1 **)(unaff_r7 + DAT_0012e07c);
      param_6 = unaff_r5;
      ConfirmDialog::show(pCVar28,&stack0x00000080,&stack0x00000088,&stack0x00000090);
      String::~String((String *)&stack0x00000090);
      String::~String((String *)&stack0x00000088);
      String::~String((String *)&stack0x00000080);
      String::~String((String *)&stack0x00000078);
      String::~String((String *)&stack0x00000070);
      String::~String((String *)&stack0x00000068);
      pSVar7 = (String *)&stack0x00000060;
    }
    do {
      String::~String(pSVar7);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x84) + 0x65) = 0;
      FUN_0012f41e();
LAB_0012dff8:
      pCVar28 = *(ConfirmDialog **)(unaff_r5 + 0x80);
      Vector<String>::elementAt((int)&stack0x000000a8);
      Vector<String>::elementAt((int)&stack0x000000b0);
      Vector<String>::elementAt((int)&stack0x000000b8);
      param_5 = *(undefined1 **)(unaff_r7 + DAT_0012e094);
      param_6 = unaff_r5;
      ConfirmDialog::show(pCVar28,&stack0x000000a8,&stack0x000000b0,&stack0x000000b8);
      String::~String((String *)&stack0x000000b8);
      String::~String((String *)&stack0x000000b0);
      pSVar7 = (String *)&stack0x000000a8;
    } while( true );
  }
  uVar10 = GameStateCafe::createFurnitureFromData(unaff_r5,pFVar36);
  iVar6 = DAT_0012e400;
  *(undefined4 *)(unaff_r5 + 0x40) = uVar10;
  unaff_r5[iVar6] = (GameStateCafe)0x0;
  *(undefined2 *)(unaff_r5 + 0x162) = 0;
  unaff_r5[0x164] = (GameStateCafe)0x0;
  iVar6 = DAT_0012e404;
  (**(code **)(**(int **)(unaff_r5 + 0x84) + 0x20))();
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e408) = 1;
  unaff_r5[iVar6] = (GameStateCafe)0x7;
  pGVar27 = unaff_r5 + 0xf8;
  (**(code **)(**(int **)pGVar27 + 0x20))();
  (**(code **)(**(int **)pGVar27 + 0x24))(*(int **)pGVar27,0xffffffff);
  piVar34 = *(int **)pGVar27;
  pcVar42 = *(code **)(*piVar34 + 0x44);
  Vector<String>::elementAt((int)&stack0x000000c0);
  (*pcVar42)(piVar34,&stack0x000000c0);
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
  piVar34 = *(int **)(unaff_r5 + 0xfc);
  pcVar42 = *(code **)(*piVar34 + 0x44);
  StringBuffer::toString();
  (*pcVar42)(piVar34,&stack0x000000e8);
  String::~String((String *)&stack0x000000e8);
  String::String((String *)&stack0x000000f0,
                 (String *)(*(int *)(*(int *)(unaff_r5 + 0x40) + 0x38) + 100));
  GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x000000f0);
  String::~String((String *)&stack0x000000f0);
  piVar34 = *(int **)(unaff_r5 + 0x100);
  pcVar42 = *(code **)(*piVar34 + 0x44);
  String::String((String *)&stack0x000000f8,(char *)(DAT_0012e41c + 0x12e1f0));
  __fixsfsi(*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x40) + 0x38) + 0x6c));
  String::valueOf((int)&stack0x00000100);
  String::operator+((String *)&stack0x00000108,&stack0x000000f8,&stack0x00000100);
  String::String((String *)&stack0x00000110,(char *)(DAT_0012e420 + 0x12e218));
  String::operator+((String *)&stack0x00000118,&stack0x00000108,&stack0x00000110);
  (*pcVar42)(piVar34,&stack0x00000118);
  String::~String((String *)&stack0x00000118);
  String::~String((String *)&stack0x00000110);
  String::~String((String *)&stack0x00000108);
  String::~String((String *)&stack0x00000100);
  String::~String((String *)&stack0x000000f8);
  (**(code **)(**(int **)(unaff_r5 + 0xe8) + 0x20))(*(int **)(unaff_r5 + 0xe8),1);
  if (*(int *)(*(int *)(unaff_r5 + 0xc) + 0x4b8) == 0) {
    lVar14 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x14))
    ;
    iVar6 = *(int *)(unaff_r5 + 0x40);
    lVar14 = Cafe::worldToDiamondCoords(lVar14);
    lVar14 = Cafe::diamondToStaggeredCoords(lVar14);
    uVar3 = Cafe::staggeredCoordsToIndex(lVar14);
    *(undefined2 *)(iVar6 + 0x2c) = uVar3;
    piVar34 = *(int **)(unaff_r5 + 0x40);
    pcVar42 = *(code **)(*piVar34 + 0xc);
    uVar10 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x14),(int)(short)piVar34[0xb]);
    (*pcVar42)(piVar34,uVar10);
    pFVar37 = *(Furniture **)(unaff_r5 + 0x40);
    iVar6 = Furniture::canRotate(pFVar37);
    if ((iVar6 != 0) && (*(char *)(*(int *)(pFVar37 + 0x38) + 0x44) != '\x06')) {
      iVar6 = *(int *)(pFVar37 + 0x20);
      lVar14 = CFPoint::subtract(*(long *)(pFVar37 + 4),
                                 (int)(short)iVar6 >> 1 & 0xffffU | (iVar6 >> 0x11) << 0x10);
      CFPoint::add(lVar14,(iVar6 >> 0x10) << 0x10);
      uVar10 = GameStateCafe::worldToScreenCoords((long)unaff_r5);
      FUN_00118458(*(undefined4 *)(unaff_r5 + 0x170),uVar10);
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
  pGVar27 = unaff_r5 + 0xbc;
  iVar6 = *(int *)pGVar27;
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
      piVar34 = *(int **)(unaff_r5 + 0xf8);
      (**(code **)(*piVar34 + 0x20))(piVar34,0);
      String::String((String *)&stack0x00000120,(String *)(*(int *)(*(int *)pGVar27 + 0xe4) + 100));
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
      pGVar27 = unaff_r5 + 0xf0;
    }
    else {
      unaff_r5[DAT_0012e7c8] = (GameStateCafe)0xd;
      piVar34 = *(int **)(unaff_r5 + 0xf8);
      (**(code **)(*piVar34 + 0x20))(piVar34,0);
      uVar10 = GameStateCafe::createFurnitureFromData(unaff_r5,pFVar36);
      iVar6 = DAT_0012e7cc;
      *(undefined4 *)(unaff_r5 + 0x40) = uVar10;
      unaff_r5[iVar6] = (GameStateCafe)0x0;
      *(undefined2 *)(unaff_r5 + 0x162) = 0;
      unaff_r5[0x164] = (GameStateCafe)0x0;
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e7d0) = 1;
      (**(code **)(**(int **)(unaff_r5 + 0xf0) + 0x20))();
      String::String((String *)&stack0x00000130,(String *)(*(int *)(*(int *)pGVar27 + 0xe4) + 100));
      GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x00000130);
      String::~String((String *)&stack0x00000130);
      (**(code **)(**(int **)(unaff_r5 + 0xfc) + 0x20))(*(int **)(unaff_r5 + 0xfc),0);
      (**(code **)(**(int **)(unaff_r5 + 0xbc) + 0x20))(*(int **)(unaff_r5 + 0xbc),0);
      (**(code **)(**(int **)(unaff_r5 + 0x100) + 0x20))(*(int **)(unaff_r5 + 0x100),0);
      pGVar27 = unaff_r5 + 0xe8;
    }
    (**(code **)(**(int **)pGVar27 + 0x20))(*(int **)pGVar27,0);
    FUN_0012f41e();
  }
  else {
    if (FVar1 == (FurnitureData)0x10) goto LAB_0012e36e;
    if (FVar1 == (FurnitureData)0xa) goto LAB_0012e362;
  }
  (**(code **)(**(int **)(unaff_r5 + 0x100) + 0x20))(*(int **)(unaff_r5 + 0x100),0);
  iVar8 = GameStateCafe::createFurnitureFromData(unaff_r5,pFVar36);
  iVar6 = DAT_0012e7d4;
  *(int *)(unaff_r5 + 0x40) = iVar8;
  iVar8 = *(int *)(*(int *)(iVar8 + 0x38) + 0x24);
  if ((iVar8 == **(int **)(unaff_r7 + iVar6)) || (iVar8 == 0x1fa)) {
    puts((char *)(DAT_0012e7d8 + 0x12e4fa));
    iVar6 = *(int *)(unaff_r5 + 0x40);
    CapcomDate::today((CapcomDate *)&stack0x00000138);
    memcpy((void *)(iVar6 + 0x56),&stack0x00000138,7);
  }
  unaff_r5[DAT_0012e7cc] = (GameStateCafe)0x0;
  *(undefined2 *)(unaff_r5 + 0x162) = 0;
  unaff_r5[0x164] = (GameStateCafe)0x0;
  pGVar27 = unaff_r5 + 0xf8;
  (**(code **)(**(int **)(unaff_r5 + 0xbc) + 0x20))();
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e7d0) = 1;
  unaff_r5[DAT_0012e7c8] = (GameStateCafe)0xa;
  (**(code **)(**(int **)pGVar27 + 0x20))();
  (**(code **)(**(int **)pGVar27 + 0x24))(*(int **)pGVar27,0xffffffff);
  piVar34 = *(int **)pGVar27;
  pcVar42 = *(code **)(*piVar34 + 0x44);
  Vector<String>::elementAt((int)&stack0x00000140);
  (*pcVar42)(piVar34,&stack0x00000140);
  String::~String((String *)&stack0x00000140);
  piVar34 = *(int **)(unaff_r5 + 0xfc);
  pcVar42 = *(code **)(*piVar34 + 0x44);
  String::String((String *)&stack0x00000148,(char *)(DAT_0012e7e0 + 0x12e58e));
  (*pcVar42)(piVar34,&stack0x00000148);
  String::~String((String *)&stack0x00000148);
  piVar34 = *(int **)(unaff_r5 + 0x100);
  pcVar42 = *(code **)(*piVar34 + 0x44);
  String::String((String *)&stack0x00000150,(char *)(DAT_0012e7e4 + 0x12e5ac));
  (*pcVar42)(piVar34,&stack0x00000150);
  String::~String((String *)&stack0x00000150);
  String::String((String *)&stack0x00000158,
                 (String *)(*(int *)(*(int *)(unaff_r5 + 0x40) + 0x38) + 100));
  GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x00000158);
  String::~String((String *)&stack0x00000158);
  piVar34 = *(int **)(unaff_r5 + 0xf4);
  pcVar42 = *(code **)(*piVar34 + 0x44);
  Vector<String>::elementAt((int)&stack0x00000160);
  (*pcVar42)(piVar34,&stack0x00000160);
  String::~String((String *)&stack0x00000160);
  (**(code **)(**(int **)(unaff_r5 + 0xe8) + 0x20))(*(int **)(unaff_r5 + 0xe8),1);
  piVar34 = *(int **)(unaff_r5 + 0x104);
  pcVar42 = *(code **)(*piVar34 + 0x44);
  String::String((String *)&stack0x00000168,(char *)(DAT_0012e7ec + 0x12e620));
  (*pcVar42)(piVar34,&stack0x00000168);
  String::~String((String *)&stack0x00000168);
  (**(code **)(**(int **)(unaff_r5 + 0xf0) + 0x20))(*(int **)(unaff_r5 + 0xf0),1);
  iVar6 = *(int *)(unaff_r5 + 0xc);
  if (*(int *)(iVar6 + 0x4b8) != 0) {
    FUN_0012f41e();
  }
  lVar14 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(iVar6 + 0x14));
  iVar6 = *(int *)(unaff_r5 + 0x40);
  lVar14 = Cafe::worldToDiamondCoords(lVar14);
  lVar14 = Cafe::diamondToStaggeredCoords(lVar14);
  uVar3 = Cafe::staggeredCoordsToIndex(lVar14);
  *(undefined2 *)(iVar6 + 0x2c) = uVar3;
  piVar34 = *(int **)(unaff_r5 + 0x40);
  pcVar42 = *(code **)(*piVar34 + 0xc);
  uVar10 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x14),(int)(short)piVar34[0xb]);
  (*pcVar42)(piVar34,uVar10);
  pZVar43 = *(ZombieCafe **)(unaff_r5 + 0x40);
  iVar6 = Furniture::canRotate((Furniture *)pZVar43);
  if ((iVar6 != 0) && (*(char *)(*(int *)((Furniture *)pZVar43 + 0x38) + 0x44) != '\x06')) {
    iVar6 = *(int *)((Furniture *)pZVar43 + 0x20);
    lVar14 = CFPoint::subtract(*(long *)((Furniture *)pZVar43 + 4),
                               (int)(short)iVar6 >> 1 & 0xffffU | (iVar6 >> 0x11) << 0x10);
    CFPoint::add(lVar14,(iVar6 >> 0x10) << 0x10);
    uVar10 = GameStateCafe::worldToScreenCoords((long)unaff_r5);
    FUN_00118458(*(undefined4 *)(unaff_r5 + 0x170),uVar10);
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
  fVar45 = extraout_s0;
  if (iVar6 != 1) {
    fVar45 = (float)FUN_0012fe28();
  }
  FVar2 = pFVar37[0x2e];
  pFVar29 = (Furniture *)(uint)(byte)FVar2;
  if (pFVar29 != (Furniture *)0x0) {
    fVar45 = (float)FUN_0012fe28();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar45);
  iVar8 = DAT_0012e7cc;
  *(Furniture **)(unaff_r5 + 0x40) = pFVar37;
  unaff_r5[iVar8] = SUB41(iVar6,0);
  *(undefined2 *)(unaff_r5 + 0x162) = *(undefined2 *)(pFVar37 + 0x2c);
  *(Furniture *)(unaff_r5 + 0x164) = pFVar37[0x34];
  Cafe::removeFurniture(*(Cafe **)(unaff_r5 + 0x14),pFVar37);
  if (*(int *)(*(int *)(unaff_r5 + 0x18) + 0x88) == *(int *)(unaff_r5 + 0x40)) {
    *(int *)(*(int *)(unaff_r5 + 0x18) + 0x88) = (int)pFVar29;
    pFVar37 = pFVar29;
  }
  for (iVar6 = 0; iVar6 < *(int *)(unaff_r5 + 0x20) + 1; iVar6 = iVar6 + 1) {
    puVar32 = (undefined4 *)(*(int *)(iVar6 * 4 + *(int *)(unaff_r5 + 0x24)) + 0x88);
    pFVar37 = (Furniture *)*puVar32;
    if (pFVar37 == *(Furniture **)(unaff_r5 + 0x40)) {
      *puVar32 = 0;
    }
  }
  for (iVar6 = 0; iVar8 = DAT_0012ebb0, iVar6 < *(int *)(unaff_r5 + 0x2c) + 1; iVar6 = iVar6 + 1) {
    puVar32 = (undefined4 *)(*(int *)(iVar6 * 4 + *(int *)(unaff_r5 + 0x30)) + 0x88);
    pFVar37 = (Furniture *)*puVar32;
    if (pFVar37 == *(Furniture **)(unaff_r5 + 0x40)) {
      *puVar32 = 0;
    }
  }
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebac) = 1;
  unaff_r5[iVar8] = (GameStateCafe)0x2;
  fVar45 = (float)FUN_0012f41e();
  if (*(int *)(pFVar37 + 0x44) == 0) {
    fVar45 = (float)FUN_0012f41e();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar45);
  iVar6 = DAT_0012ebb4;
  piVar34 = *(int **)(pFVar37 + 0x44);
  *(int **)(unaff_r5 + 0x40) = piVar34;
  *(Furniture *)(unaff_r5 + iVar6) = FVar2;
  *(Furniture **)(unaff_r5 + 0x48) = pFVar37;
  pcVar42 = *(code **)(*piVar34 + 0xc);
  uVar10 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x4b8));
  (*pcVar42)(piVar34,uVar10);
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
    bVar22 = (char)pFVar37[0x34] + 1U & 3;
  }
  else {
    bVar22 = (byte)pFVar37[0x34] ^ 1;
  }
  Furniture::setOrientation(pFVar37,bVar22);
  iVar6 = *(int *)(unaff_r5 + 0xc);
  fVar45 = (float)CapcomMath::random(3);
  ZombieCafe::playEffect(iVar6,fVar45);
  FUN_0012f41e();
  iVar6 = (**(code **)(*(int *)pCVar44 + 0x14))(pCVar44);
  if (iVar6 == 3) {
    pCVar15 = (CharacterInstance *)Cafe::getSelectedObject(*(Cafe **)(unaff_r5 + 0x14));
    if (pCVar15 == pCVar44) {
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
    pGVar27 = unaff_r5 + 0xac;
    PlantCommandBar::close(*(PlantCommandBar **)(unaff_r5 + 0xb8));
    CharacterCommandBar::open(*(CharacterCommandBar **)pGVar27);
    CharacterCommandBar::resetButtons();
    CharacterCommandBar::setCharacter(*(CharacterCommandBar **)pGVar27,pCVar44);
    Storage::close(*(Storage **)(unaff_r5 + 0xbc));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r5 + 0xc0));
    iVar6 = (**(code **)(*(int *)pCVar44 + 0x20))(pCVar44);
    if (iVar6 == 1) {
      iVar6 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'\x16');
      if (iVar6 != 0) {
        uVar10 = CharacterCommandBar::addInfectButton
                           (*(CharacterCommandBar **)pGVar27,
                            *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebe0),
                            unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x10c) = uVar10;
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
        pGVar27 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar27,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc4),unaff_r5);
        if (*(char *)(*(int *)(pCVar44 + 0x8c) + 0x44) == '\x06') {
          CharacterCommandBar::addReviveButton
                    (*(CharacterCommandBar **)pGVar27,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc8),unaff_r5);
          FUN_0012eaea();
          return;
        }
        uVar10 = CharacterCommandBar::addHealButton
                           (*(CharacterCommandBar **)pGVar27,
                            *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebcc),
                            unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x114) = uVar10;
        if (*(char *)(*(int *)(pCVar44 + 0x8c) + 0x44) == '\x03') {
          CharacterCommandBar::addWorkButton
                    (*(CharacterCommandBar **)pGVar27,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd0),unaff_r5);
        }
        else {
          uVar10 = CharacterCommandBar::addRestButton
                             (*(CharacterCommandBar **)pGVar27,
                              *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd4),
                              unaff_r5);
          *(undefined4 *)(unaff_r5 + 0x110) = uVar10;
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
        pGVar27 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar27,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef18),unaff_r5);
        CharacterCommandBar::addChefButton
                  (*(CharacterCommandBar **)pGVar27,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef1c),unaff_r5);
        if (unaff_r5[0x19a] == (GameStateCafe)0x0) {
          CharacterCommandBar::addScreenshotButton
                    (*(CharacterCommandBar **)pGVar27,
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
    uVar26 = *(byte *)(*(int *)(pCVar44 + 0x38) + 0x44) - 1;
    if (uVar26 < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x0012ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&switchD_0012ecc0::switchdataD_0012ecc4 +
                (uint)(&switchD_0012ecc0::switchdataD_0012ecc4)[uVar26] * 2 + 1))();
      return;
    }
    if (*(short *)(pCVar44 + 0x42) == 0) {
      sVar4 = *(short *)(pCVar44 + 0x44);
      if (0 < sVar4) {
        iVar6 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(unaff_r5 + 0xc));
        fVar45 = extraout_s0_00;
        if (iVar6 == 0) {
          pCVar38 = *(Cafe **)(unaff_r5 + 0x14);
          String::valueOf((int)&stack0x00000198);
          pSVar16 = (StatusNote *)operator_new(0x30);
          param_5 = (undefined1 *)**(uint **)(unaff_r7 + DAT_0012f62c);
          param_6 = (GameStateCafe *)0xffffffff;
          param_7 = 0;
          StatusNote::StatusNote(pSVar16,pCVar44,1,&stack0x00000198);
          Cafe::addStatusNote(pCVar38,pSVar16);
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
      pSVar16 = (StatusNote *)operator_new(0x30);
      param_5 = (undefined1 *)**(uint **)(unaff_r7 + DAT_0012f2a4);
      param_7 = 0;
      param_6 = (GameStateCafe *)0xffffffff;
      StatusNote::StatusNote(pSVar16,pCVar44,0,&stack0x00000190);
      Cafe::addStatusNote(pCVar38,pSVar16);
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
          (iVar8 = Cafe::doorPicked(*(long *)(unaff_r5 + 0x14)), iVar6 = DAT_0012f634, iVar8 != 0))
  {
    iVar8 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f634),'\x16');
    if (iVar8 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),
                        (bool)((byte)(*(Cafe **)(unaff_r5 + 0x14))[100] ^ 1),true);
      FUN_0012f41e();
      return;
    }
    iVar9 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'Q');
    if (iVar9 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),true,false);
      fVar45 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'\x04',true)
      ;
      param_5 = (undefined1 *)iVar8;
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
      uVar30 = *(undefined4 *)(unaff_r5 + 0x1e4);
      __divsf3(*(undefined4 *)(pZVar43 + DAT_0012f63c),*(undefined4 *)(pZVar43 + 0x4c0));
      iVar6 = CapcomApp::getInstance();
      pZVar43 = *(ZombieCafe **)(iVar6 + 4);
      uVar10 = ZombieCafe::getCafeZoomParam(pZVar43,extraout_s0_01,extraout_s1);
      *(undefined4 *)(unaff_r5 + 0x1e4) = uVar10;
      iVar6 = __aeabi_fcmpeq(uVar30,uVar10);
      if (iVar6 == 0) {
        lVar14 = *(long *)(unaff_r5 + 0x1e0);
        lVar17 = CFPoint::subtract(*(long *)(pZVar43 + 0x4b8),lVar14);
        lVar18 = CFPoint::multiplyf(lVar17,extraout_s0_02);
        lVar17 = CFPoint::subtract(lVar18,lVar17);
        uVar10 = CFPoint::subtract(lVar14,lVar17);
        *(undefined4 *)(unaff_r5 + 0x1e0) = uVar10;
      }
    }
    iVar6 = *(int *)(unaff_r5 + 0xc);
    if ((int)**(short **)(unaff_r7 + DAT_0012f640) < *(int *)(iVar6 + DAT_0012f644)) {
      uVar10 = __floatsisf((*(int *)(iVar6 + 0x4b8) >> 0x10) -
                           (*(int *)(iVar6 + DAT_0012f648) >> 0x10));
      iVar8 = DAT_0012f648;
      *(undefined4 *)(unaff_r5 + 0x1d8) = uVar10;
      uVar10 = __floatsisf((int)*(short *)(iVar6 + 0x4b8) - (int)*(short *)(iVar6 + iVar8));
      *(undefined4 *)(unaff_r5 + 0x1dc) = uVar10;
    }
    else {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  lVar14 = *(long *)(unaff_r5 + 0x1e0);
  uVar26 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1dc));
  iVar6 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1d8));
  uVar26 = CFPoint::add(lVar14,iVar6 << 0x10 | uVar26 & 0xffff);
  *(uint *)(unaff_r5 + 0x1e0) = uVar26;
  iVar8 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x18);
  iVar6 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x1c);
  uVar39 = *(undefined4 *)(unaff_r5 + 0x1e4);
  uVar10 = __floatsisf(iVar8 >> 0x10);
  uVar10 = __mulsf3(uVar10,uVar39);
  ceilf(__x);
  uVar30 = __floatsisf((int)(short)iVar8);
  uVar30 = __mulsf3(uVar30,uVar39);
  ceilf(__x_00);
  uVar19 = __floatsisf((int)(short)iVar6);
  __mulsf3(uVar19,uVar39);
  sVar4 = __fixsfsi();
  uVar19 = __floatsisf(iVar6 >> 0x10);
  __mulsf3(uVar19,uVar39);
  uVar20 = __fixsfsi();
  sVar5 = __fixsfsi(uVar30);
  uVar21 = __fixsfsi(uVar10);
  iVar6 = -((int)uVar26 >> 0x10);
  if (iVar6 < (short)uVar20) {
    uVar26 = (uVar20 & 0xffff) * -0x10000 | uVar26 & 0xffff;
LAB_0012f5f8:
    *(uint *)(unaff_r5 + 0x1e0) = uVar26;
  }
  else {
    uVar20 = ((uVar20 & 0xffff) + (uVar21 & 0xffff)) - 1;
    iVar8 = (int)(short)uVar20 - (int)(short)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12);
    if (-iVar8 != (int)uVar26 >> 0x10 && iVar8 <= iVar6) {
      uVar26 = ((uint)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12) - (uVar20 & 0xffff)) * 0x10000 |
               uVar26 & 0xffff;
      goto LAB_0012f5f8;
    }
  }
  uVar26 = *(uint *)(unaff_r5 + 0x1e0);
  iVar6 = -(int)(short)uVar26;
  if (iVar6 < sVar4) {
    *(uint *)(unaff_r5 + 0x1e0) = (uint)(ushort)-sVar4 | uVar26 & 0xffff0000;
  }
  else {
    sVar4 = sVar5 + -1 + sVar4;
    iVar8 = (int)sVar4 - (int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    if (-iVar8 != (int)(short)uVar26 && iVar8 <= iVar6) {
      *(uint *)(unaff_r5 + 0x1e0) =
           (uint)(ushort)(*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10) - sVar4) | uVar26 & 0xffff0000
      ;
    }
  }
  uVar19 = *(undefined4 *)(unaff_r5 + 0x1d8);
  puVar32 = *(undefined4 **)(unaff_r7 + DAT_0012f9b0);
  uVar10 = __floatsisf(in_stack_00000020);
  uVar30 = __mulsf3(uVar10,*puVar32);
  iVar6 = __aeabi_fcmplt(uVar30,0x3f800000);
  uVar10 = uVar30;
  if (iVar6 == 0) {
    uVar10 = 0x3f800000;
  }
  uVar10 = __subsf3(0x3f800000,uVar10);
  iVar8 = __mulsf3(uVar19,uVar10);
  *(int *)(unaff_r5 + 0x1d8) = iVar8;
  uVar10 = *(undefined4 *)(unaff_r5 + 0x1dc);
  if (iVar6 == 0) {
    uVar30 = 0x3f800000;
  }
  uVar30 = __subsf3(0x3f800000,uVar30);
  iVar6 = __mulsf3(uVar10,uVar30);
  *(int *)(unaff_r5 + 0x1dc) = iVar6;
  iVar9 = __aeabi_fcmpge(iVar8,0);
  if (iVar9 == 0) {
    iVar8 = iVar8 + -0x80000000;
  }
  uVar10 = **(undefined4 **)(unaff_r7 + DAT_0012f9b4);
  iVar8 = __aeabi_fcmplt(iVar8,uVar10);
  if (iVar8 != 0) {
    iVar8 = __aeabi_fcmpge(iVar6,0);
    if (iVar8 == 0) {
      iVar6 = iVar6 + -0x80000000;
    }
    iVar6 = __aeabi_fcmplt(iVar6,uVar10);
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
    iVar8 = *(int *)(unaff_r5 + 0xc);
    if (iVar6 == *(int *)(unaff_r5 + 0x18)) {
      this_03 = *(TutorialSystem **)(iVar8 + DAT_0012f9b8);
      uVar23 = '\x01';
    }
    else if ((iVar6 == *(int *)(unaff_r5 + 0x5c)) && (*(char *)(*(int *)(iVar6 + 0x8c) + 4) == '\0')
            ) {
      uVar23 = '\r';
      this_03 = *(TutorialSystem **)(iVar8 + DAT_0012f9b8);
    }
    else {
      uVar23 = '\x10';
      this_03 = *(TutorialSystem **)(iVar8 + DAT_0012f9b8);
    }
    TutorialSystem::triggerEvent(this_03,uVar23,true);
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
  uVar26 = (uint)(byte)unaff_r5[DAT_0012f9d0];
  if ((uVar26 - 1 < 3) || (uVar26 == 7)) {
    cVar25 = '\0';
  }
  else {
    cVar25 = '\x01' - (uVar26 == 10);
  }
  *(char *)(*(int *)(unaff_r5 + 0x14) + 0xc9) = cVar25;
  iVar6 = DAT_0012f9d8;
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) = 0;
    pcVar24 = (char *)(iVar6 + 0x12f82e);
    L_PrintLog(pcVar24,(char *)(DAT_0012f9dc + 0x12f832));
    if ((((*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x14) == '\0') &&
         (*(char *)(*(int *)(unaff_r5 + 0x7c) + 0x14) == '\0')) &&
        (*(char *)(*(int *)(unaff_r5 + 0x80) + 0x14) == '\0')) &&
       (iVar6 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9b8),'\x01'),
       iVar6 != 0)) {
      L_PrintLog(pcVar24,(char *)(DAT_0012f9e0 + 0x12f876));
      if ((*(int *)(unaff_r5 + 0x130) == 0) ||
         (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) {
        if (((*(char *)(*(int *)(unaff_r5 + 0x124) + 0x14) == '\0') &&
            (*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) == '\0')) &&
           ((*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) == '\0' &&
            (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) == '\0')))) {
          this_04 = *(LotteryDialog **)(unaff_r5 + 0xa4);
          if (this_04 == (LotteryDialog *)0x0) {
            L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
            pCVar28 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001b8);
            Vector<String>::elementAt((int)&stack0x000001c0);
            Vector<String>::elementAt((int)&stack0x000001c8);
            param_5 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            param_6 = unaff_r5;
            ConfirmDialog::show(pCVar28,&stack0x000001b8,&stack0x000001c0,&stack0x000001c8);
            String::~String((String *)&stack0x000001c8);
            String::~String((String *)&stack0x000001c0);
            pSVar7 = (String *)&stack0x000001b8;
          }
          else {
            if (this_04[0x14] != (LotteryDialog)0x0) {
              LotteryDialog::backClose(this_04);
              L_PrintLog((char *)(DAT_0012fd4c + 0x12fa14),(char *)(DAT_0012fd50 + 0x12fa16));
              goto LAB_0012fa18;
            }
            L_PrintLog((char *)(DAT_0012f9e8 + 0x12f8e6),(char *)(DAT_0012f9ec + 0x12f8e8));
            pCVar28 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001a0);
            Vector<String>::elementAt((int)&stack0x000001a8);
            Vector<String>::elementAt((int)&stack0x000001b0);
            param_5 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            param_6 = unaff_r5;
            ConfirmDialog::show(pCVar28,&stack0x000001a0,&stack0x000001a8,&stack0x000001b0);
            String::~String((String *)&stack0x000001b0);
            String::~String((String *)&stack0x000001a8);
            pSVar7 = (String *)&stack0x000001a0;
          }
          String::~String(pSVar7);
        }
      }
      else {
        L_PrintLog(pcVar24,(char *)(DAT_0012f9e4 + 0x12f892));
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
  iVar8 = DAT_0012fd60 + 0x12fa4c;
  iVar6 = *(int *)(DAT_0012fd60 + 0x12fac0);
  if (iVar6 != 0) {
    if (iVar6 != 3) {
      if (iVar6 != 2) {
        FUN_0012ff22();
        return;
      }
      puVar32 = *(undefined4 **)(unaff_r7 + DAT_0012fd68);
      in_stack_00000020 = 0;
      piVar34 = *(int **)(unaff_r7 + DAT_0012fd6c);
      puVar40 = puVar32 + 4;
      for (; in_stack_00000020 < *piVar34; in_stack_00000020 = in_stack_00000020 + 1) {
        param_5 = (undefined1 *)puVar32[2];
        param_6 = (GameStateCafe *)puVar32[3];
        param_7 = *puVar40;
        param_8 = (char *)puVar40[1];
        sprintf(&stack0x000003fc,(char *)(DAT_0012fd70 + 0x12faac),*puVar32,puVar32[1]);
        if ((puVar32[1] == 2) && (0 < (int)*puVar40)) {
          param_5 = (undefined1 *)*piVar34;
          snprintf(&stack0x0000027c,0x80,(char *)(DAT_0012fd74 + 0x12fad0),in_stack_00000020 + 1);
          strcpy(&stack0x000001fc,(char *)puVar40[1]);
          param_5 = &stack0x0000027c;
          snprintf((char *)((int)&stack0x00000000 + DAT_0012fd7c),0x400,
                   (char *)(DAT_0012fd78 + 0x12faf0),*puVar40);
          ZombieCafe::addToxinMedia(*(ZombieCafe **)(unaff_r5 + 0xc),*puVar40);
          puVar32[1] = 0;
          puVar32[2] = 0;
          *puVar40 = 0;
          ZombieCafe::save();
          pNVar31 = *(NoticeDialog **)(unaff_r5 + 0xd0);
          String::String((String *)&stack0x000001d8,(char *)((int)&stack0x00000000 + DAT_0012fd7c));
          Vector<String>::elementAt((int)&stack0x000001d0);
          param_5 = (undefined1 *)0x0;
          NoticeDialog::show(pNVar31,&stack0x000001d8,&stack0x000001d0);
          String::~String((String *)&stack0x000001d0);
          String::~String((String *)&stack0x000001d8);
        }
        puVar32 = puVar32 + 6;
        puVar40 = puVar40 + 6;
      }
      if (0 < *piVar34) {
        GameStateCafe::gotEventValue
                  (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
      }
      *piVar34 = 0;
      iVar8 = DAT_0012fd84 + 0x12fb80;
    }
    *(undefined4 *)(iVar8 + 0x74) = 4;
    FUN_0012ff22();
    return;
  }
  if (*(int *)(unaff_r5 + 0x1fc) == 0) {
    GameStateCafe::getEventValue
              (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
    uVar10 = 1;
  }
  else {
    if (*(int *)(unaff_r5 + 0x1fc) != 1) {
      FUN_0012ff22();
      return;
    }
    uVar10 = 4;
  }
  *(undefined4 *)(unaff_r5 + 0x1fc) = uVar10;
  FUN_0012ff22();
  return;
}


