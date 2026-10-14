/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012cdb4 GameStateCafe::tick */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0012ecc0) */
/* WARNING: Removing unreachable block (ram,0x0012ecc0) */
/* GameStateCafe::tick(long) */

void __thiscall GameStateCafe::tick(GameStateCafe *this,long param_1)

{
  FurnitureData FVar1;
  Furniture FVar2;
  byte bVar3;
  short sVar4;
  undefined1 *puVar5;
  undefined2 uVar6;
  int iVar7;
  TutorialArrow *this_00;
  String *pSVar8;
  ConfirmDialog *pCVar9;
  int iVar10;
  SServer *pSVar11;
  HCOManager *pHVar12;
  GameStateSpecialSale *this_01;
  LotteryFeaturedDialog *this_02;
  UserRankDialog *this_03;
  CharacterInstance *pCVar13;
  StatusNote *pSVar14;
  long lVar15;
  uint uVar16;
  TutorialSystem *this_04;
  LotteryDialog *this_05;
  NoticeDialog *pNVar17;
  byte bVar18;
  uchar uVar19;
  uint uVar20;
  uint extraout_r1;
  long lVar21;
  uint extraout_r1_00;
  GameStateCafe GVar22;
  undefined4 uVar23;
  char cVar24;
  undefined4 *puVar25;
  int iVar26;
  GameStateCafe *pGVar27;
  undefined4 uVar28;
  uint uVar29;
  GameStateLoading *pGVar30;
  int iVar31;
  int *piVar32;
  ScreenElement *pSVar33;
  FurnitureData *pFVar34;
  Furniture *pFVar35;
  int iVar36;
  CapcomGame *this_06;
  MessageElement *pMVar37;
  char *pcVar38;
  code *pcVar39;
  ZombieCafe *pZVar40;
  CharacterInstance *pCVar41;
  int iVar42;
  undefined4 *puVar43;
  undefined4 in_cr15;
  float extraout_s0;
  float fVar61;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float __x;
  float __x_00;
  undefined8 uVar62;
  float extraout_s1;
  undefined4 uStack_4;
  uint *puVar44;
  undefined4 *puVar45;
  undefined4 *puVar46;
  undefined4 *puVar47;
  uint *puVar48;
  undefined4 *puVar49;
  undefined4 *puVar50;
  undefined4 *puVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  undefined4 *puVar54;
  undefined4 *puVar55;
  undefined4 *puVar56;
  undefined4 *puVar57;
  undefined4 *puVar58;
  int *piVar59;
  undefined4 *puVar60;
  
  iVar36 = DAT_0012d108;
  puVar43 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar44 = (uint *)(&stack0xffffffec + DAT_0012d108);
  puVar45 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar46 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar47 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar48 = (uint *)(&stack0xffffffec + DAT_0012d108);
  puVar49 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar50 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar51 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar52 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar53 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar54 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar55 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar56 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar57 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  puVar58 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  piVar59 = (int *)(&stack0xffffffec + DAT_0012d108);
  puVar60 = (undefined4 *)(&stack0xffffffec + DAT_0012d108);
  *(long *)(&stack0x0000000c + DAT_0012d108) = param_1;
  iVar42 = DAT_0012d10c + 0x12cdc4;
  puVar25 = *(undefined4 **)(iVar42 + DAT_0012d110);
  this_06 = *(CapcomGame **)(this + 0xc);
  *(undefined4 *)(&stack0xffffffec + DAT_0012d114 + DAT_0012d108) = *puVar25;
  pGVar30 = (GameStateLoading *)(uint)(byte)this_06[0xba0];
  *(undefined4 **)(&stack0x00000020 + DAT_0012d108) = puVar25;
  if (pGVar30 != (GameStateLoading *)0x0) {
    this[0x11] = (GameStateCafe)0x1;
    this = (GameStateCafe *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu((GameStateMainMenu *)this);
    pGVar30 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar30,(GameState *)this);
    CapcomGame::setNextState(this_06,(GameState *)pGVar30);
    FUN_0012ff22();
  }
  ZombieCafe::tickPlaySecAnalysis_cafe((ZombieCafe *)this_06,*(long *)(&stack0x0000000c + iVar36));
  ZombieCafeGameState::tick((long)this);
  if (*(char *)(*(int *)(this + 0xc) + DAT_0012d118) != '\0') {
    *(char *)(*(int *)(this + 0xc) + DAT_0012d118) = (char)pGVar30;
    javaAsyncConsume();
  }
  setflowerPlantTime(this);
  if (**(char **)(iVar42 + DAT_0012d11c) != '\0') {
    **(char **)(iVar42 + DAT_0012d11c) = '\0';
    iVar7 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012d120),'U');
    if (iVar7 != 0) {
      checkDisplayLotteryButton(this);
      checkDisplayGatyaButton(this);
      checkDisplayMeetLockerButton(this);
      checkDisplayEventButton(this);
      checkDisplayCameraButton();
    }
    iVar7 = ZombieCafe::isToxinCheat(*(ZombieCafe **)(this + 0xc));
    if (iVar7 != 0) {
      ZombieCafe::sendToxinCheat(*(ZombieCafe **)(this + 0xc));
    }
    setFlowerPlant(this);
    iVar7 = ZombieCafe::checkZombieFlowerEventTime();
    if (iVar7 == 0) {
      deleteCookBaidPan(this);
    }
  }
  if ((*(char *)(*(int *)(this + 200) + 0x14) != '\0') &&
     (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x40) + 0x3c) == 1)) {
    *(undefined4 *)(*(int *)(*(int *)(this + 0xc) + 0x40) + 0x3c) = 0;
    PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(this + 0xcc),4,true);
    PullMenuElement::ifIsCloseNewIndicatorPull();
  }
  iVar7 = *(int *)(this + 0xc);
  uVar20 = *(uint *)(iVar7 + 0x4a8) | *(uint *)(iVar7 + 0x4ac);
  if (uVar20 != 0) {
    FUN_0012ff22();
    uVar20 = extraout_r1;
  }
  TutorialSystem::triggerEvent(*(TutorialSystem **)(iVar7 + DAT_0012d120),(uchar)uVar20,true);
  uVar62 = (**(code **)(**(int **)(this + 0x7c) + 8))
                     (*(int **)(this + 0x7c),*(undefined4 *)(&stack0x0000000c + iVar36));
  fVar61 = (float)uVar62;
  if (*(short *)(this + 0x16c) != 0) {
    lVar21 = *(long *)(*(int *)(this + 0xc) + 0x4b8);
    if (((lVar21 != 0) && (*(int *)(*(int *)(this + 0xc) + DAT_0012d124) == 0)) &&
       (iVar7 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x170),lVar21,fVar61,
                           (float)((ulonglong)uVar62 >> 0x20)), fVar61 = extraout_s0, iVar7 == 0)) {
      *(undefined2 *)(this + 0x16c) = 0;
    }
  }
  if (*(int *)(this + 0x40) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(this + 0xc) + DAT_0012d120) + 0x770) = 0;
  }
  if ((*(int *)(this + 0x1d0) < (int)(uint)**(byte **)(iVar42 + DAT_0012d128)) &&
     (this[DAT_0012d12c] == (GameStateCafe)0x0)) {
    *(int *)(this + 0x1d0) = *(int *)(this + 0x1d0) + 1;
  }
  else {
    iVar26 = *(int *)(this + 8);
    iVar7 = (int)**(uint **)(iVar42 + DAT_0012d130) >> 0x1f;
    if (((iVar7 < *(int *)(iVar26 + 0x34)) ||
        ((*(int *)(iVar26 + 0x34) == iVar7 &&
         (**(uint **)(iVar42 + DAT_0012d130) < *(uint *)(iVar26 + 0x30))))) ||
       (this[DAT_0012d12c] != (GameStateCafe)0x0)) {
      this[DAT_0012d12c] = (GameStateCafe)0x0;
      *(undefined4 *)(this + 0x1d0) = 0;
      iVar7 = *(int *)(this + 0xc);
      uVar16 = *(uint *)(iVar7 + 0x4a8);
      iVar42 = *(int *)(iVar7 + 0x4ac);
      uVar20 = *(uint *)(iVar26 + 0x30);
      iVar26 = *(int *)(iVar26 + 0x34);
      *(uint *)(iVar7 + 0x4a8) = uVar20 + uVar16;
      *(uint *)(iVar7 + 0x4ac) = iVar26 + iVar42 + (uint)CARRY4(uVar20,uVar16);
      CCServer::GetServerTime
                (*(void **)((int)*(void **)(this + 0xc) + DAT_0012d134),*(void **)(this + 0xc),-1);
      fVar61 = (float)FUN_0012ff22();
    }
  }
  iVar7 = DAT_0012d138;
  if (this[DAT_0012d138] == (GameStateCafe)0x8) {
    iVar26 = 0x198;
    GVar22 = this[0x198];
    if (1 < (byte)GVar22) {
      fVar61 = (float)L_PrintLog((char *)(DAT_0012d13c + 0x12cfb6),(char *)(DAT_0012d140 + 0x12cfb8)
                                );
      ZombieCafe::playEffect(*(int *)(this + 0xc),fVar61);
      ScreenshotTaker::takeScreenshot
                (*(ScreenshotTaker **)(this + 0x11c),
                 *(_func_void_void_ptr **)(iVar42 + DAT_0012d144),this);
      (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),1);
      HudElement::setButtonsVisible(*(HudElement **)(this + 200),true);
      select(this,*(CharacterInstance **)(this + 0x18));
      GVar22 = (GameStateCafe)0xff;
      this[iVar7] = this[DAT_0012d148];
      iVar26 = 0x194;
      *(undefined4 *)(this + 0x194) = 0xff;
      FUN_0012ff22();
    }
    this[iVar26] = (GameStateCafe)((char)GVar22 + 1);
    fVar61 = (float)FUN_0012ff22();
  }
  if ((*(int *)(this + 0x13c) != 0) && (*(char *)(*(int *)(this + 0x13c) + 0x14) != '\0')) {
    fVar61 = (float)FUN_0012ff22();
  }
  TutorialArrow::tick(*(TutorialArrow **)(this + 0xc4),*(long *)(&stack0x0000000c + iVar36),
                      *(long *)(this + 0x1e0),fVar61);
  this_00 = *(TutorialArrow **)(this + 0xc4);
  if (this_00[0x14] != (TutorialArrow)0x0) {
    TutorialArrow::attachedToScreenElement(this_00);
  }
  if (*(char *)(*(int *)(this + 0x8c) + 0x60) == '\0') {
    piVar32 = *(int **)(this + 0x80);
    if ((((char)piVar32[5] == '\0') && (piVar32 = *(int **)(this + 0xd0), (char)piVar32[5] == '\0'))
       && (piVar32 = *(int **)(this + 0xd4), (char)piVar32[5] == '\0')) {
      piVar32 = *(int **)(this + 0xd8);
      if (piVar32 == (int *)0x0) {
        piVar32 = (int *)FUN_0012fd98();
      }
      if ((char)piVar32[5] == '\0') {
        piVar32 = (int *)FUN_0012fd98();
      }
    }
    (**(code **)(*piVar32 + 8))(piVar32,*(undefined4 *)(&stack0x0000000c + iVar36));
  }
  else {
    iVar7 = ZombieCafe::getPurchasingFlag();
    if (iVar7 == 0) {
      *(undefined1 *)(*(int *)(this + 0x8c) + 0x60) = 0;
      (**(code **)(*(int *)this + 0x28))(this,8);
    }
  }
  if (this[0x1a4] == (GameStateCafe)0x0) {
    if (*(char *)(*(int *)(this + 0x8c) + 0x14) != '\0') {
      this[0x1a4] = (GameStateCafe)0x1;
    }
  }
  else if (*(char *)(*(int *)(this + 0x8c) + 0x14) == '\0') {
    save(SUB41(this,0));
    this[0x1a4] = (GameStateCafe)0x0;
  }
  uVar20 = *(uint *)(this + 0xa4);
  if (uVar20 != 0) {
    uVar20 = (uint)*(byte *)(uVar20 + 0x14);
  }
  if (*(char *)(*(int *)(this + 0x7c) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(this + 0x80) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(this + 0xd0) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  iVar7 = *(int *)(this + 0x8c);
  if (*(char *)(iVar7 + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(iVar7 + 0x60) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(this + 0x90) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(this + 0x94) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(this + 0x9c) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(this + 0xa0) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if (uVar20 != 0) {
    FUN_0012ff22();
  }
  if (*(char *)(*(int *)(this + 0x134) + 0x14) != '\0') {
    FUN_0012ff22();
  }
  if ((*(int *)(this + 0x98) != 0) && (*(char *)(*(int *)(this + 0x98) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(this + 0xd8) != 0) && (*(char *)(*(int *)(this + 0xd8) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(this + 0xdc) != 0) && (*(char *)(*(int *)(this + 0xdc) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  pGVar27 = this + 0xfc;
  if ((*(int *)(this + 0x120) != 0) && (*(char *)(*(int *)(this + 0x120) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(pGVar27 + 0x28) != 0) && (*(char *)(*(int *)(pGVar27 + 0x28) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(this + 0xa8) != 0) && (*(char *)(*(int *)(this + 0xa8) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  pGVar27 = this + 0xfc;
  if ((*(int *)(this + 0x128) != 0) && (*(char *)(*(int *)(this + 0x128) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if ((*(int *)(pGVar27 + 0x3c) != 0) && (*(char *)(*(int *)(pGVar27 + 0x3c) + 0x14) != '\0')) {
    FUN_0012ff22();
  }
  if (-1 < *(int *)(this + 0x17c)) {
    pSVar8 = (String *)
             Vector<MessageWithToxin*>::removeElementAt
                       ((Vector<MessageWithToxin*> *)(this + 0x178),0);
    ZombieCafe::addToxin(*(ZombieCafe **)(this + 0xc),*(int *)(pSVar8 + 8),false);
    ZombieCafe::addCash(*(ZombieCafe **)(this + 0xc),*(int *)(pSVar8 + 0xc));
    ZombieCafe::addXp(*(ZombieCafe **)(this + 0xc),*(int *)(pSVar8 + 0x10));
    pMVar37 = *(MessageElement **)(this + 0x7c);
    String::String((String *)(&stack0x00000024 + iVar36),pSVar8);
    uVar23 = *(undefined4 *)(pSVar8 + 8);
    uVar28 = *(undefined4 *)(pSVar8 + 0xc);
    *puVar43 = *(undefined4 *)(pSVar8 + 0x10);
    MessageElement::show(pMVar37,&stack0x00000024 + iVar36,uVar23,uVar28);
    String::~String((String *)(&stack0x00000024 + iVar36));
    String::~String(pSVar8);
    operator_delete(pSVar8);
  }
  if ((5 < *(int *)(*(int *)(this + 0xc) + 0x680)) &&
     (iVar7 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012d768),'S'), iVar7 == 0)
     ) {
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012d768),'R',false);
    CharacterCommandBar::close(*(CharacterCommandBar **)(this + 0xac));
    CookCommandBar::close(*(CookCommandBar **)(this + 0xb4));
    Store::close(*(Store **)(this + 0x84));
    Storage::close(*(Storage **)(this + 0xbc));
    PlantCommandBar::close(*(PlantCommandBar **)(this + 0xb8));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(this + 0xc0));
  }
  iVar7 = DAT_0012d768;
  if (7 < *(int *)(*(int *)(this + 0xc) + 0x680)) {
    iVar26 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012d768),'U');
    *(int *)(&stack0x00000008 + iVar36) = iVar26;
    if ((iVar26 == 0) && (iVar26 = checkCanLotteryButton(this), iVar26 != 0)) {
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar7),'V',
                 SUB41(*(undefined4 *)(&stack0x00000008 + iVar36),0));
    }
  }
  iVar7 = DAT_0012d768;
  if (((8 < *(int *)(*(int *)(this + 0xc) + 0x680)) &&
      (iVar26 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012d768),'W'),
      iVar26 == 0)) && (*(int *)(this + 300) == 0)) {
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar7),'X',true);
  }
  iVar7 = DAT_0012d768;
  if (*(int *)(*(int *)(this + 0xc) + 0x680) == 3) {
    iVar26 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012d768),'[');
    if (iVar26 == 0) {
      TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar7),'\\',false);
    }
    else {
      TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar7),'[');
    }
  }
  pGVar27 = this + 0xcc;
  iVar7 = ObjectiveSystem::actionRequired
                    (*(ObjectiveSystem **)(*(int *)(this + 0xc) + DAT_0012d76c));
  *(int *)(&stack0x00000008 + iVar36) = iVar7;
  if (iVar7 == 0) {
    iVar7 = PullMenuElement::hasNewIndicator(*(PullMenuElement **)pGVar27,3);
    if (iVar7 != 0) {
      PullMenuElement::setButtonNewIndicator
                (*(PullMenuElement **)pGVar27,3,SUB41(*(undefined4 *)(&stack0x00000008 + iVar36),0))
      ;
    }
  }
  else {
    iVar7 = PullMenuElement::hasNewIndicator(*(PullMenuElement **)pGVar27,3);
    if (iVar7 == 0) {
      PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)pGVar27,3,true);
      PullMenuElement::ifIsCloseNewIndicatorPull();
    }
  }
  iVar7 = *(int *)(this + 0xc);
  bVar18 = *(byte *)(iVar7 + DAT_0012d770);
  bVar3 = *(byte *)(iVar7 + 0x6f8);
  *puVar44 = (uint)*(byte *)(iVar7 + DAT_0012d774);
  *(uint *)(&stack0xfffffff0 + iVar36) = (uint)*(byte *)(iVar7 + DAT_0012d77c);
  *(undefined4 *)(&stack0xfffffff4 + iVar36) = *(undefined4 *)(iVar7 + DAT_0012d780);
  sprintf(&stack0x000002e8 + iVar36,(char *)(DAT_0012d778 + 0x12d5e8),(uint)bVar18,(uint)bVar3);
  iVar7 = *(int *)(this + 0xc);
  if ((((*(char *)(iVar7 + DAT_0012d770) != '\0') && (*(char *)(iVar7 + 0x6f8) == '\0')) ||
      (*(char *)(iVar7 + DAT_0012d774) != '\0')) && (*(char *)(iVar7 + DAT_0012d77c) == '\0')) {
    *(undefined1 *)(iVar7 + DAT_0012d77c) = 1;
    *(undefined4 *)(&stack0x00000008 + iVar36) = *(undefined4 *)(this + 0x80);
    Vector<String>::elementAt((int)(&stack0x0000002c + iVar36));
    Vector<String>::elementAt((int)(&stack0x00000034 + iVar36));
    Vector<String>::elementAt((int)(&stack0x0000003c + iVar36));
    pCVar9 = *(ConfirmDialog **)(&stack0x00000008 + iVar36);
    uVar23 = *(undefined4 *)(iVar42 + DAT_0012d790);
    *(GameStateCafe **)(&stack0xfffffff0 + iVar36) = this;
    *puVar45 = uVar23;
    ConfirmDialog::show(pCVar9,&stack0x0000002c + iVar36,&stack0x00000034 + iVar36,
                        &stack0x0000003c + iVar36);
    String::~String((String *)(&stack0x0000003c + iVar36));
    String::~String((String *)(&stack0x00000034 + iVar36));
    String::~String((String *)(&stack0x0000002c + iVar36));
  }
  iVar26 = DAT_0012d798;
  iVar7 = DAT_0012d794;
  if ((*(char *)(*(int *)(this + 0xc) + DAT_0012d794) != '\0') &&
     (iVar10 = *(int *)(this + 0x1b0), iVar31 = *(int *)(&stack0x0000000c + iVar36),
     *(int *)(this + 0x1b0) = iVar31 + iVar10, **(int **)(iVar42 + iVar26) <= iVar31 + iVar10)) {
    *(undefined1 *)(*(int *)(this + 0xc) + iVar7) = 0;
    *(undefined4 *)(this + 0x1b0) = 0;
    showEnemyCafeDialog((int)this);
  }
  tickColorShift(this,*(long *)(&stack0x0000000c + iVar36));
  iVar7 = tickEditModes(this,*(long *)(&stack0x0000000c + iVar36));
  if (iVar7 == 0) {
    FUN_0012ff22();
  }
  Cafe::tick(*(Cafe **)(this + 0x14),*(long *)(&stack0x0000000c + iVar36));
  if ((*(char *)(*(int *)(this + 0x14) + 100) == '\0') &&
     (iVar7 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012d768),'\x16'),
     iVar7 != 0)) {
    *(undefined4 *)(&stack0x00000008 + iVar36) = *(undefined4 *)(this + 0xc);
    puVar25 = *(undefined4 **)(iVar42 + DAT_0012d79c);
    uVar23 = __floatsisf(*(undefined4 *)(&stack0x0000000c + iVar36));
    uVar23 = __mulsf3(uVar23,*puVar25);
    iVar7 = *(int *)(&stack0x00000008 + iVar36);
    uVar23 = __subsf3(*(undefined4 *)(iVar7 + 0x688),uVar23);
    *(undefined4 *)(iVar7 + 0x688) = uVar23;
    iVar7 = *(int *)(this + 0xc);
    *(int *)(&stack0x00000008 + iVar36) = iVar7;
    uVar23 = *(undefined4 *)(iVar7 + 0x688);
    iVar7 = __aeabi_fcmplt(uVar23,0);
    if (iVar7 == 0) {
      iVar7 = __aeabi_fcmpgt(uVar23,0x3f800000);
      if (iVar7 != 0) {
        uVar23 = 0x3f800000;
      }
    }
    else {
      uVar23 = 0;
    }
    *(undefined4 *)(*(int *)(&stack0x00000008 + iVar36) + 0x688) = uVar23;
  }
  iVar26 = *(int *)(this + 0x1bc);
  iVar7 = *(int *)(&stack0x0000000c + iVar36);
  *(int *)(this + 0x1bc) = iVar26 - iVar7;
  if (iVar26 - iVar7 < 1) {
    iVar7 = isDishInTransit(this);
    if (iVar7 == 0) {
      save(SUB41(this,0));
    }
    else {
      *(undefined4 *)(this + 0x1bc) = DAT_0012d7a0;
    }
  }
  iVar7 = *(int *)(this + 0x1c0);
  iVar26 = *(int *)(&stack0x0000000c + iVar36);
  *(int *)(this + 0x1c0) = iVar7 - iVar26;
  if (iVar7 - iVar26 < 1) {
    *(undefined4 *)(this + 0x1c0) = **(undefined4 **)(iVar42 + DAT_0012da6c);
    saveServerData(this);
    ZombieCafe::saveGameState(*(ZombieCafe **)(this + 0xc),false);
  }
  iVar7 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012da70),'\x16');
  if ((iVar7 != 0) &&
     (iVar26 = *(int *)(this + 0x1c4), iVar7 = *(int *)(&stack0x0000000c + iVar36),
     *(int *)(this + 0x1c4) = iVar26 - iVar7, iVar26 - iVar7 < 1)) {
    pZVar40 = *(ZombieCafe **)(this + 0xc);
    *(uint *)(&stack0x00000008 + iVar36) = (uint)(byte)pZVar40[DAT_0012da74];
    *(undefined4 *)(&stack0x00000010 + iVar36) = *(undefined4 *)(iVar42 + DAT_0012da78);
    if (*(int *)(&stack0x00000008 + iVar36) == 0) {
      ZombieCafe::beginLoadOrders(pZVar40,true);
      puVar25 = *(undefined4 **)(&stack0x00000010 + iVar36);
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012da74) = 1;
      uVar23 = __divsi3(*puVar25,100);
      *(undefined4 *)(this + 0x1c4) = uVar23;
      if (*(char *)(*(int *)(this + 0xc) + DAT_0012da7c) != '\0') {
        uVar23 = CCServer::GetMyUserID(*(void **)(*(int *)(this + 0xc) + DAT_0012da80));
        *(undefined4 *)(&stack0x00000010 + iVar36) = uVar23;
        pZVar40 = *(ZombieCafe **)(this + 0xc);
        uVar23 = *(undefined4 *)(pZVar40 + DAT_0012da84);
        uVar28 = *(undefined4 *)(pZVar40 + DAT_0012da88);
        *(undefined4 *)(&stack0x00000014 + iVar36) = *(undefined4 *)(pZVar40 + 0x680);
        *(undefined4 *)(&stack0x00000018 + iVar36) = uVar23;
        *(undefined4 *)(&stack0x0000001c + iVar36) = uVar28;
        uVar23 = ZombieCafe::getToxin(pZVar40);
        uVar28 = *(undefined4 *)(&stack0x00000014 + iVar36);
        *puVar46 = *(undefined4 *)(&stack0x00000010 + iVar36);
        *(undefined4 *)(&stack0xfffffff0 + iVar36) = uVar28;
        *(undefined4 *)((int)&uStack_4 + iVar36) = uVar23;
        pcVar38 = (char *)(DAT_0012da8c + 0x12d868);
        *(undefined4 *)(&stack0xfffffff4 + iVar36) = *(undefined4 *)(&stack0x00000018 + iVar36);
        *(undefined4 *)(&stack0xfffffff8 + iVar36) = *(undefined4 *)(&stack0x0000001c + iVar36);
        snprintf(&stack0xffffffec + DAT_0012da94 + iVar36,0x80,(char *)(DAT_0012da90 + 0x12d86a),
                 pcVar38);
        CCMarketing_RecordAnalyticsEvent
                  (*(undefined4 *)(*(int *)(this + 0xc) + DAT_0012da98),DAT_0012da9c + 0x12d884,
                   &stack0xffffffec + DAT_0012da94 + iVar36);
        uVar23 = MALTAHoover::GetInstance();
        *(undefined4 *)(&stack0x00000010 + iVar36) = uVar23;
        MALTAHoover::GetInstance();
        MALTAHoover::GetInstance();
        MALTAHoover::init(*(MALTAHoover **)(&stack0x00000010 + iVar36),
                          (char *)(DAT_0012daa0 + 0x12d8a0),(char *)(DAT_0012daa4 + 0x12d8a2),
                          pcVar38);
        memset(&stack0x00000268 + iVar36,*(int *)(&stack0x00000008 + iVar36),0x40);
        pSVar11 = (SServer *)MALTAHoover::GetInstance();
        iVar7 = MALTAHoover::getFBID(pSVar11,(char *)**(undefined4 **)(iVar42 + DAT_0012daa8));
        if (iVar7 == 0) {
          L_PrintLog((char *)(DAT_0012daac + 0x12d8cc),&stack0x00000268 + iVar36);
        }
        pcVar38 = &stack0x000003e8 + iVar36;
        memset(pcVar38,0,0x40);
        snprintf(pcVar38,0x40,(char *)(DAT_0012dab0 + 0x12d8e4),&stack0x00000268 + iVar36);
        uVar23 = MALTAHoover::GetInstance();
        *(undefined4 *)(&stack0x00000008 + iVar36) = uVar23;
        pZVar40 = *(ZombieCafe **)(this + 0xc);
        *(undefined4 *)(&stack0x00000010 + iVar36) = *(undefined4 *)(pZVar40 + 0x680);
        uVar20 = ZombieCafe::getToxin(pZVar40);
        iVar7 = *(int *)(this + 0xc);
        *puVar47 = *(undefined4 *)(iVar7 + DAT_0012da88);
        *(undefined4 *)(&stack0xfffffff0 + iVar36) = *(undefined4 *)(iVar7 + DAT_0012da84);
        bVar18 = *(byte *)(iVar7 + DAT_0012dab8);
        *(char **)(&stack0xfffffff8 + iVar36) = pcVar38;
        *(uint *)(&stack0xfffffff4 + iVar36) = (uint)bVar18;
        *(undefined4 *)((int)&uStack_4 + iVar36) = *(undefined4 *)(iVar42 + DAT_0012dabc);
        MALTAHoover::send(*(MALTAHoover **)(&stack0x00000008 + iVar36),
                          (char *)(DAT_0012dab4 + 0x12d906),*(uint *)(&stack0x00000010 + iVar36),
                          uVar20,*puVar48,*(uint *)(&stack0xfffffff0 + iVar36),
                          *(int *)(&stack0xfffffff4 + iVar36),*(char **)(&stack0xfffffff8 + iVar36),
                          *(char **)((int)&uStack_4 + iVar36));
      }
    }
    else {
      ZombieCafe::beginLoadOrders(pZVar40,false);
      puVar25 = *(undefined4 **)(iVar42 + DAT_0012daa8);
      requestGetEventGift((void *)*puVar25,this);
      requestGetRankingGift((void *)*puVar25,this);
      iVar7 = ZombieCafe::checkInstallGift();
      if (iVar7 != 0) {
        ZombieCafe::setZombie_InstallGift();
      }
      *(int *)(this + 0x1c4) = **(int **)(&stack0x00000010 + iVar36) * 10;
    }
  }
  iVar7 = *(int *)(this + 500);
  iVar26 = *(int *)(&stack0x0000000c + iVar36);
  *(int *)(this + 500) = iVar7 - iVar26;
  if (iVar7 - iVar26 < 1) {
    pHVar12 = (HCOManager *)HCOManager::getInstance();
    iVar7 = HCOManager::getHCOEnable(pHVar12);
    if (iVar7 != 0) {
      pHVar12 = (HCOManager *)HCOManager::getInstance();
      iVar7 = HCOManager::getFirstDisplay(pHVar12);
      if ((((iVar7 == 0) &&
           ((*(int *)(this + 300) == 0 || (*(char *)(*(int *)(this + 300) + 0x14) == '\0')))) &&
          ((*(int *)(this + 0x138) == 0 || (*(char *)(*(int *)(this + 0x138) + 0x14) == '\0')))) &&
         ((3 < *(int *)(*(int *)(this + 0xc) + 0x680) &&
          (iVar7 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012da70),'I'),
          iVar7 != 0)))) {
        *(undefined4 *)(&stack0x00000010 + iVar36) = *(undefined4 *)(this + 0xc);
        this_01 = (GameStateSpecialSale *)operator_new(DAT_0012dac0);
        *(GameStateSpecialSale **)(&stack0x00000008 + iVar36) = this_01;
        GameStateSpecialSale::GameStateSpecialSale(this_01);
        pGVar30 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar30,*(GameState **)(&stack0x00000008 + iVar36));
        CapcomGame::setNextState(*(CapcomGame **)(&stack0x00000010 + iVar36),(GameState *)pGVar30);
      }
    }
    *(undefined4 *)(this + 500) = 1000;
  }
  pHVar12 = (HCOManager *)HCOManager::getInstance();
  HCOManager::tickHCO(pHVar12);
  iVar7 = *(int *)(this + 0x1cc);
  iVar26 = *(int *)(&stack0x0000000c + iVar36);
  *(int *)(this + 0x1cc) = iVar7 - iVar26;
  if ((iVar7 - iVar26 < 1) &&
     (iVar7 = HudElement::isButtonAvailability(*(HudElement **)(this + 200),10), iVar7 != 0)) {
    iVar7 = CheckPicGiftBoxAndShowDialog(this);
    if (iVar7 == 0) {
      *(undefined4 *)(this + 0x1cc) = DAT_0012dac4;
    }
    else if (iVar7 == 1) {
      *(undefined4 *)(this + 0x1cc) = 200;
    }
    else if (iVar7 == 2) {
      *(undefined4 *)(this + 0x1cc) = DAT_0012dac8;
    }
  }
  iVar7 = HudElement::isButtonAvailability(*(HudElement **)(this + 200),10);
  if ((iVar7 != 0) &&
     (iVar26 = *(int *)(this + 0x1c8), iVar7 = *(int *)(&stack0x0000000c + iVar36),
     *(int *)(this + 0x1c8) = iVar26 - iVar7, iVar26 - iVar7 < 1)) {
    iVar7 = EventGiftShowDialog(this);
    uVar23 = uRam0012de08;
    if (iVar7 != 0) {
      uVar23 = DAT_0012dacc;
    }
    *(undefined4 *)(this + 0x1c8) = uVar23;
  }
  if ((*(short *)(this + 0x16c) != 0) && (*(int *)(this + 0x40) == 0)) {
    iVar7 = (int)*(short *)(this + 0x16c) - *(int *)(&stack0x0000000c + iVar36);
    *(ushort *)(this + 0x16c) = (ushort)iVar7 & (short)~(ushort)((uint)iVar7 >> 0x10) >> 0xf;
  }
  if (*(char *)(*(int *)(this + 0x14) + 200) != '\0') {
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(this + 0xc) + iRam0012de0c),'\x18',true);
  }
  checkForLevelUp(this);
  if ((((*(int *)(this + 0xd8) == 0) || (*(char *)(*(int *)(this + 0xd8) + 0x14) == '\0')) &&
      (*(char *)(*(int *)(this + 0xc) + iRam0012de10) != '\0')) &&
     (*(char *)(*(int *)(this + 0xc4) + 0x14) == '\0')) {
    *(undefined1 *)(*(int *)(this + 0xc) + iRam0012de10) = 0;
  }
  iVar7 = iRam0012de0c;
  cVar24 = **(char **)(iVar42 + iRam0012de14);
  *(char **)(&stack0x00000008 + iVar36) = *(char **)(iVar42 + iRam0012de14);
  if (((((cVar24 != '\0') && (**(char **)(iVar42 + DAT_0012de18) == '\0')) &&
       ((*(int *)(this + 0xd8) == 0 || (*(char *)(*(int *)(this + 0xd8) + 0x14) == '\0')))) &&
      (((*(int *)(this + 300) == 0 || (*(char *)(*(int *)(this + 300) + 0x14) == '\0')) &&
       ((*(int *)(this + 0x130) == 0 || (*(char *)(*(int *)(this + 0x130) + 0x14) == '\0')))))) &&
     ((((*(char *)(*(int *)(this + 0xc4) + 0x14) == '\0' &&
        (iVar26 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(this + 0xc) + iRam0012de0c),'\x16'),
        iVar26 != 0)) && (7 < *(int *)(*(int *)(this + 0xc) + 0x680))) &&
      (((iVar26 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar7),'U'), iVar26 != 0 &&
        (iVar26 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar7),'V'), iVar26 != 0))
       && (*(int *)(this + 0xa8) == 0)))))) {
    L_PrintLog((char *)(DAT_0012de1c + 0x12dbde),(char *)(DAT_0012de20 + 0x12dbe0));
    if ((*(int *)(*(int *)(this + 0xc) + 0x680) < 9) ||
       (iVar7 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar7),'X'), iVar7 != 0)) {
      pcVar38 = (char *)(DAT_0012de24 + 0x12dc02);
      L_PrintLog(pcVar38,(char *)(DAT_0012de28 + 0x12dc04));
      **(undefined1 **)(&stack0x00000008 + iVar36) = 0;
      if (**(char **)(iVar42 + DAT_0012de2c) != '\0') {
        L_PrintLog(pcVar38,(char *)(DAT_0012de30 + 0x12dc20));
        this_02 = (LotteryFeaturedDialog *)operator_new(0xb8);
        LotteryFeaturedDialog::LotteryFeaturedDialog(this_02,(ZombieCafeGameState *)this);
        *(LotteryFeaturedDialog **)(this + 300) = this_02;
        (**(code **)(*(int *)this_02 + 0x1c))(this_02,0x12);
        iVar7 = DAT_0012de34;
        FUN_00118458(*(undefined4 *)(this + 300),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
        ScreenElement::setOrder
                  (*(ScreenElement **)(this + 300),(int)**(char **)(iVar42 + DAT_0012de38));
        (**(code **)(**(int **)(this + 300) + 0x20))(*(int **)(this + 300),0);
        (**(code **)(**(int **)(this + 0x78) + 0x2c))
                  (*(int **)(this + 0x78),*(undefined4 *)(this + 300));
        L_PrintLog((char *)(iVar7 + 0x12dc58),(char *)(DAT_0012de3c + 0x12dc78));
        LotteryFeaturedDialog::show
                  (*(LotteryFeaturedDialog **)(this + 300),**(int **)(iVar42 + DAT_0012de40),
                   *(_func_void_void_ptr **)(iVar42 + DAT_0012de44),this);
        L_PrintLog((char *)(iVar7 + 0x12dc58),(char *)(DAT_0012de48 + 0x12dc94));
      }
    }
  }
  pcVar38 = *(char **)(iVar42 + DAT_0012de4c);
  if (((*pcVar38 != '\0') &&
      ((*(int *)(this + 0xd8) == 0 || (*(char *)(*(int *)(this + 0xd8) + 0x14) == '\0')))) &&
     (((*(int *)(this + 300) == 0 || (*(char *)(*(int *)(this + 300) + 0x14) == '\0')) &&
      ((((*(int *)(this + 0x130) == 0 || (*(char *)(*(int *)(this + 0x130) + 0x14) == '\0')) &&
        (*(char *)(*(int *)(this + 0xc4) + 0x14) == '\0')) &&
       (iVar7 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(this + 0xc) + iRam0012de0c),'.'),
       iVar7 != 0)))))) {
    L_PrintLog((char *)(DAT_0012de50 + 0x12dcf0),(char *)(DAT_0012de54 + 0x12dcf2));
    *pcVar38 = '\0';
    this_03 = (UserRankDialog *)operator_new(0xac);
    UserRankDialog::UserRankDialog
              (this_03,(ZombieCafeGameState *)this,*(bool *)*(undefined4 *)(iVar42 + DAT_0012de58));
    *(UserRankDialog **)(this + 0x130) = this_03;
    (**(code **)(*(int *)this_03 + 0x1c))(this_03,0x12);
    FUN_00118458(*(undefined4 *)(this + 0x130),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    ScreenElement::setOrder
              (*(ScreenElement **)(this + 0x130),(int)**(char **)(iVar42 + DAT_0012de38));
    (**(code **)(**(int **)(this + 0x130) + 0x20))(*(int **)(this + 0x130),0);
    (**(code **)(**(int **)(this + 0x78) + 0x2c))
              (*(int **)(this + 0x78),*(undefined4 *)(this + 0x130));
    UserRankDialog::show(*(UserRankDialog **)(this + 0x130));
    HudElement::updateCardButton(*(HudElement **)(this + 200));
    HudElement::setButtonAvailability(*(int *)(this + 200),true);
  }
  if (*(char *)(*(int *)(this + 0xc) + DAT_0012de5c) != '\0') {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012de5c) = 0;
    *(undefined1 *)(*(int *)(this + 0x18) + 0xc6) = 1;
  }
  if (*(byte *)(*(int *)(this + 0x84) + 0x80) - 1 < 2) {
    piVar32 = *(int **)(this + 0xf4);
    pcVar39 = *(code **)(*piVar32 + 0x44);
    Vector<String>::elementAt((int)(&stack0x00000044 + iVar36));
    (*pcVar39)(piVar32,&stack0x00000044 + iVar36);
    String::~String((String *)(&stack0x00000044 + iVar36));
    (**(code **)(**(int **)(this + 0xf0) + 0x20))(*(int **)(this + 0xf0),0);
  }
  if (this[DAT_0012de64] != (GameStateCafe)0x0) {
    if (this[DAT_0012de64] != (GameStateCafe)0x5) {
      FUN_0012f41e();
    }
    FUN_0012f418();
  }
  pSVar33 = *(ScreenElement **)(this + 0x84);
  if (1 < (byte)pSVar33[0x80] - 1) {
    FUN_0012fdf0();
  }
  uVar20 = (uint)(byte)pSVar33[100];
  if (uVar20 == 1) {
    enterTileEditMode(this);
    FUN_0012f41e();
  }
  if (uVar20 == 2) {
    enterWallEditMode(this);
    FUN_0012f41e();
    coprocessor_loadlong(0xf,in_cr15,extraout_r1_00 >> 10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar20 != 3) {
    FUN_0012fdf0();
  }
  enterExpansionPreviewMode(this);
  FUN_0012f41e();
  pZVar40 = *(ZombieCafe **)(this + 0xc);
  iVar7 = ZombieCafe::unhandledTouching(pZVar40);
  if ((iVar7 == 0) ||
     (iVar7 = ScreenElement::contains(pSVar33,*(long *)(pZVar40 + 0x4b8)), iVar7 != 0)) {
    pSVar33 = *(ScreenElement **)(this + 0x84);
    if (pSVar33[0x65] == (ScreenElement)0x0) {
      pSVar33 = (ScreenElement *)FUN_0012fdfa();
    }
    iVar7 = ScreenElement::contains(pSVar33,*(long *)(*(int *)(this + 0xc) + iRam0012e068));
    if (iVar7 == 0) {
      FUN_0012fdfa();
    }
  }
  pFVar34 = *(FurnitureData **)(*(int *)(this + 0x84) + 0xd0);
  if (pFVar34 == (FurnitureData *)0x0) {
    FUN_0012fdfa();
  }
  if ((pFVar34[0x44] == (FurnitureData)0xa) || (pFVar34[0x44] == (FurnitureData)0xc)) {
    if (pFVar34[0x38] != (FurnitureData)0x0) {
      iVar7 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
      if (iVar7 < *(int *)(pFVar34 + 0x34)) {
        iVar7 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012e080),'\x16');
        if (iVar7 != 0) goto LAB_0012dff8;
        pNVar17 = *(NoticeDialog **)(this + 0xd0);
        Vector<String>::elementAt((int)(&stack0x00000084 + iVar36));
        Vector<String>::elementAt((int)(&stack0x0000008c + iVar36));
        *puVar50 = 0;
        NoticeDialog::show(pNVar17,&stack0x00000084 + iVar36,&stack0x0000008c + iVar36);
        String::~String((String *)(&stack0x0000008c + iVar36));
        pSVar8 = (String *)(&stack0x00000084 + iVar36);
      }
      else {
        *(FurnitureData **)(this + 0x60) = pFVar34;
        *(undefined4 *)(&stack0x00000008 + iVar36) = *(undefined4 *)(this + 0x80);
        Vector<String>::elementAt((int)(&stack0x0000004c + iVar36));
        String::valueOf((int)(&stack0x00000054 + iVar36));
        String::operator+((String *)(&stack0x0000005c + iVar36),&stack0x0000004c + iVar36,
                          &stack0x00000054 + iVar36);
        Vector<String>::elementAt((int)(&stack0x00000064 + iVar36));
        String::operator+((String *)(&stack0x0000006c + iVar36),&stack0x0000005c + iVar36,
                          &stack0x00000064 + iVar36);
        Vector<String>::elementAt((int)(&stack0x00000074 + iVar36));
        Vector<String>::elementAt((int)(&stack0x0000007c + iVar36));
        pCVar9 = *(ConfirmDialog **)(&stack0x00000008 + iVar36);
        uVar23 = *(undefined4 *)(iVar42 + DAT_0012e07c);
        *(GameStateCafe **)(&stack0xfffffff0 + iVar36) = this;
        *puVar49 = uVar23;
        ConfirmDialog::show(pCVar9,&stack0x0000006c + iVar36,&stack0x00000074 + iVar36,
                            &stack0x0000007c + iVar36);
        String::~String((String *)(&stack0x0000007c + iVar36));
        String::~String((String *)(&stack0x00000074 + iVar36));
        String::~String((String *)(&stack0x0000006c + iVar36));
        String::~String((String *)(&stack0x00000064 + iVar36));
        String::~String((String *)(&stack0x0000005c + iVar36));
        String::~String((String *)(&stack0x00000054 + iVar36));
        pSVar8 = (String *)(&stack0x0000004c + iVar36);
      }
      do {
        String::~String(pSVar8);
        *(undefined1 *)(*(int *)(this + 0x84) + 0x65) = 0;
        FUN_0012f41e();
LAB_0012dff8:
        pCVar9 = *(ConfirmDialog **)(this + 0x80);
        Vector<String>::elementAt((int)(&stack0x00000094 + iVar36));
        Vector<String>::elementAt((int)(&stack0x0000009c + iVar36));
        Vector<String>::elementAt((int)(&stack0x000000a4 + iVar36));
        uVar23 = *(undefined4 *)(iVar42 + DAT_0012e094);
        *(GameStateCafe **)(&stack0xfffffff0 + iVar36) = this;
        *puVar51 = uVar23;
        ConfirmDialog::show(pCVar9,&stack0x00000094 + iVar36,&stack0x0000009c + iVar36,
                            &stack0x000000a4 + iVar36);
        String::~String((String *)(&stack0x000000a4 + iVar36));
        String::~String((String *)(&stack0x0000009c + iVar36));
        pSVar8 = (String *)(&stack0x00000094 + iVar36);
      } while( true );
    }
    if (*(int *)(*(ZombieCafe **)(this + 0xc) + DAT_0012e098) < *(int *)(pFVar34 + 0x34)) {
      FUN_0012f41e();
    }
    *(FurnitureData **)(this + 0x60) = pFVar34;
    completeStorePurchase(this);
    FUN_0012f41e();
    software_interrupt(0x7c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar23 = createFurnitureFromData(this,pFVar34);
  iVar7 = DAT_0012e400;
  *(undefined4 *)(this + 0x40) = uVar23;
  this[iVar7] = (GameStateCafe)0x0;
  *(undefined2 *)(this + 0x162) = 0;
  this[0x164] = (GameStateCafe)0x0;
  iVar7 = DAT_0012e404;
  (**(code **)(**(int **)(this + 0x84) + 0x20))();
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012e408) = 1;
  this[iVar7] = (GameStateCafe)0x7;
  pGVar27 = this + 0xf8;
  (**(code **)(**(int **)pGVar27 + 0x20))();
  (**(code **)(**(int **)pGVar27 + 0x24))(*(int **)pGVar27,0xffffffff);
  piVar32 = *(int **)pGVar27;
  *(undefined4 *)(&stack0x00000008 + iVar36) = *(undefined4 *)(*piVar32 + 0x44);
  Vector<String>::elementAt((int)(&stack0x000000ac + iVar36));
  (**(code **)(&stack0x00000008 + iVar36))(piVar32,&stack0x000000ac + iVar36);
  String::~String((String *)(&stack0x000000ac + iVar36));
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001cc + iVar36));
  Vector<String>::elementAt((int)(&stack0x000000b4 + iVar36));
  StringBuffer::append(&stack0x000001cc + iVar36,&stack0x000000b4 + iVar36);
  String::~String((String *)(&stack0x000000b4 + iVar36));
  if (*(char *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x38) == '\0') {
    String::String((String *)(&stack0x000000bc + iVar36),(char *)(DAT_0012e414 + 0x12e14e));
    StringBuffer::append(&stack0x000001cc + iVar36,&stack0x000000bc + iVar36);
    String::~String((String *)(&stack0x000000bc + iVar36));
  }
  String::valueOf((int)(&stack0x000000c4 + iVar36));
  StringBuffer::append(&stack0x000001cc + iVar36,&stack0x000000c4 + iVar36);
  String::~String((String *)(&stack0x000000c4 + iVar36));
  if (*(char *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x38) != '\0') {
    Vector<String>::elementAt((int)(&stack0x000000cc + iVar36));
    StringBuffer::append(&stack0x000001cc + iVar36,&stack0x000000cc + iVar36);
    String::~String((String *)(&stack0x000000cc + iVar36));
  }
  piVar32 = *(int **)(this + 0xfc);
  pcVar39 = *(code **)(*piVar32 + 0x44);
  StringBuffer::toString();
  (*pcVar39)(piVar32,&stack0x000000d4 + iVar36);
  String::~String((String *)(&stack0x000000d4 + iVar36));
  String::String((String *)(&stack0x000000dc + iVar36),
                 (String *)(*(int *)(*(int *)(this + 0x40) + 0x38) + 100));
  setItemDescriptionText(this,&stack0x000000dc + iVar36);
  String::~String((String *)(&stack0x000000dc + iVar36));
  piVar32 = *(int **)(this + 0x100);
  pcVar39 = *(code **)(*piVar32 + 0x44);
  String::String((String *)(&stack0x000000e4 + iVar36),(char *)(DAT_0012e41c + 0x12e1f0));
  __fixsfsi(*(undefined4 *)(*(int *)(*(int *)(this + 0x40) + 0x38) + 0x6c));
  String::valueOf((int)(&stack0x000000ec + iVar36));
  String::operator+((String *)(&stack0x000000f4 + iVar36),&stack0x000000e4 + iVar36,
                    &stack0x000000ec + iVar36);
  String::String((String *)(&stack0x000000fc + iVar36),(char *)(DAT_0012e420 + 0x12e218));
  String::operator+((String *)(&stack0x00000104 + iVar36),&stack0x000000f4 + iVar36,
                    &stack0x000000fc + iVar36);
  (*pcVar39)(piVar32,&stack0x00000104 + iVar36);
  String::~String((String *)(&stack0x00000104 + iVar36));
  String::~String((String *)(&stack0x000000fc + iVar36));
  String::~String((String *)(&stack0x000000f4 + iVar36));
  String::~String((String *)(&stack0x000000ec + iVar36));
  String::~String((String *)(&stack0x000000e4 + iVar36));
  (**(code **)(**(int **)(this + 0xe8) + 0x20))(*(int **)(this + 0xe8),1);
  if (*(int *)(*(int *)(this + 0xc) + 0x4b8) == 0) {
    lVar21 = screenToWorldCoords(this,*(long *)(*(int *)(this + 0xc) + 0x14));
    iVar7 = *(int *)(this + 0x40);
    lVar21 = Cafe::worldToDiamondCoords(lVar21);
    lVar21 = Cafe::diamondToStaggeredCoords(lVar21);
    uVar6 = Cafe::staggeredCoordsToIndex(lVar21);
    *(undefined2 *)(iVar7 + 0x2c) = uVar6;
    piVar32 = *(int **)(this + 0x40);
    pcVar39 = *(code **)(*piVar32 + 0xc);
    uVar23 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x14),(int)(short)piVar32[0xb]);
    (*pcVar39)(piVar32,uVar23);
    pFVar35 = *(Furniture **)(this + 0x40);
    iVar7 = Furniture::canRotate(pFVar35);
    if ((iVar7 != 0) && (*(char *)(*(int *)(pFVar35 + 0x38) + 0x44) != '\x06')) {
      iVar7 = *(int *)(pFVar35 + 0x20);
      lVar21 = CFPoint::subtract(*(long *)(pFVar35 + 4),
                                 (int)(short)iVar7 >> 1 & 0xffffU | (iVar7 >> 0x11) << 0x10);
      CFPoint::add(lVar21,(iVar7 >> 0x10) << 0x10);
      uVar23 = worldToScreenCoords((long)this);
      FUN_00118458(*(undefined4 *)(this + 0x170),uVar23);
      *(undefined2 *)(this + 0x16c) = **(undefined2 **)(iVar42 + DAT_0012e424);
    }
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x40);
  }
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x000001cc + iVar36));
  FUN_0012f41e();
  pZVar40 = *(ZombieCafe **)(this + 0xc);
  iVar7 = ZombieCafe::unhandledTouching(pZVar40);
  if ((iVar7 == 0) ||
     (iVar7 = ScreenElement::contains(*(ScreenElement **)(this + 0xbc),*(long *)(pZVar40 + 0x4b8)),
     iVar7 != 0)) {
    pSVar33 = *(ScreenElement **)(this + 0xbc);
    if (pSVar33[0x66] == (ScreenElement)0x0) {
      pSVar33 = (ScreenElement *)FUN_0012fe04();
    }
    iVar7 = ScreenElement::contains(pSVar33,*(long *)(*(int *)(this + 0xc) + DAT_0012e428));
    if (iVar7 == 0) {
      FUN_0012fe04();
    }
  }
  pGVar27 = this + 0xbc;
  iVar7 = *(int *)pGVar27;
  pFVar34 = *(FurnitureData **)(iVar7 + 0xe4);
  if (pFVar34 == (FurnitureData *)0x0) {
    FUN_0012fe04();
  }
  FVar1 = pFVar34[0x44];
  if (FVar1 == (FurnitureData)0xc) {
LAB_0012e362:
    puts((char *)(DAT_0012e42c + 0x12e368));
    FUN_0012f41e();
LAB_0012e36e:
    if (*(char *)(iVar7 + 0x65) == '\x01') {
      this[DAT_0012e404] = (GameStateCafe)0xd;
      piVar32 = *(int **)(this + 0xf8);
      (**(code **)(*piVar32 + 0x20))(piVar32,0);
      String::String((String *)(&stack0x0000010c + iVar36),
                     (String *)(*(int *)(*(int *)pGVar27 + 0xe4) + 100));
      setItemDescriptionText(this,&stack0x0000010c + iVar36);
      String::~String((String *)(&stack0x0000010c + iVar36));
      (**(code **)(**(int **)(this + 0xfc) + 0x20))(*(int **)(this + 0xfc),0);
      (**(code **)(**(int **)(this + 0xbc) + 0x20))(*(int **)(this + 0xbc),0);
      (**(code **)(**(int **)(this + 0x100) + 0x20))(*(int **)(this + 0x100),0);
      pFVar34 = *(FurnitureData **)(this + 0xf4);
      pcVar39 = *(code **)(*(int *)pFVar34 + 0x44);
      String::String((String *)(&stack0x00000114 + iVar36),(char *)(DAT_0012e430 + 0x12e3dc));
      (*pcVar39)(pFVar34,&stack0x00000114 + iVar36);
      String::~String((String *)(&stack0x00000114 + iVar36));
      (**(code **)(**(int **)(this + 0xe8) + 0x20))(*(int **)(this + 0xe8),1);
      pGVar27 = this + 0xf0;
    }
    else {
      this[DAT_0012e7c8] = (GameStateCafe)0xd;
      piVar32 = *(int **)(this + 0xf8);
      (**(code **)(*piVar32 + 0x20))(piVar32,0);
      uVar23 = createFurnitureFromData(this,pFVar34);
      iVar7 = DAT_0012e7cc;
      *(undefined4 *)(this + 0x40) = uVar23;
      this[iVar7] = (GameStateCafe)0x0;
      *(undefined2 *)(this + 0x162) = 0;
      this[0x164] = (GameStateCafe)0x0;
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012e7d0) = 1;
      (**(code **)(**(int **)(this + 0xf0) + 0x20))();
      String::String((String *)(&stack0x0000011c + iVar36),
                     (String *)(*(int *)(*(int *)pGVar27 + 0xe4) + 100));
      setItemDescriptionText(this,&stack0x0000011c + iVar36);
      String::~String((String *)(&stack0x0000011c + iVar36));
      (**(code **)(**(int **)(this + 0xfc) + 0x20))(*(int **)(this + 0xfc),0);
      (**(code **)(**(int **)(this + 0xbc) + 0x20))(*(int **)(this + 0xbc),0);
      (**(code **)(**(int **)(this + 0x100) + 0x20))(*(int **)(this + 0x100),0);
      pGVar27 = this + 0xe8;
    }
    (**(code **)(**(int **)pGVar27 + 0x20))(*(int **)pGVar27,0);
    FUN_0012f41e();
  }
  else {
    if (FVar1 == (FurnitureData)0x10) goto LAB_0012e36e;
    if (FVar1 == (FurnitureData)0xa) goto LAB_0012e362;
  }
  (**(code **)(**(int **)(this + 0x100) + 0x20))(*(int **)(this + 0x100),0);
  iVar26 = createFurnitureFromData(this,pFVar34);
  iVar7 = DAT_0012e7d4;
  *(int *)(this + 0x40) = iVar26;
  iVar26 = *(int *)(*(int *)(iVar26 + 0x38) + 0x24);
  if ((iVar26 == **(int **)(iVar42 + iVar7)) || (iVar26 == 0x1fa)) {
    puts((char *)(DAT_0012e7d8 + 0x12e4fa));
    iVar7 = *(int *)(this + 0x40);
    CapcomDate::today((CapcomDate *)(&stack0x00000124 + iVar36));
    memcpy((void *)(iVar7 + 0x56),&stack0x00000124 + iVar36,7);
  }
  this[DAT_0012e7cc] = (GameStateCafe)0x0;
  *(undefined2 *)(this + 0x162) = 0;
  this[0x164] = (GameStateCafe)0x0;
  pGVar27 = this + 0xf8;
  (**(code **)(**(int **)(this + 0xbc) + 0x20))();
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012e7d0) = 1;
  this[DAT_0012e7c8] = (GameStateCafe)0xa;
  (**(code **)(**(int **)pGVar27 + 0x20))();
  (**(code **)(**(int **)pGVar27 + 0x24))(*(int **)pGVar27,0xffffffff);
  piVar32 = *(int **)pGVar27;
  *(undefined4 *)(&stack0x00000008 + iVar36) = *(undefined4 *)(*piVar32 + 0x44);
  Vector<String>::elementAt((int)(&stack0x0000012c + iVar36));
  (**(code **)(&stack0x00000008 + iVar36))(piVar32,&stack0x0000012c + iVar36);
  String::~String((String *)(&stack0x0000012c + iVar36));
  piVar32 = *(int **)(this + 0xfc);
  iVar7 = *piVar32;
  *(GameStateCafe **)(&stack0x00000008 + iVar36) = this + 0xfc;
  pcVar39 = *(code **)(iVar7 + 0x44);
  String::String((String *)(&stack0x00000134 + iVar36),(char *)(DAT_0012e7e0 + 0x12e58e));
  (*pcVar39)(piVar32,&stack0x00000134 + iVar36);
  String::~String((String *)(&stack0x00000134 + iVar36));
  piVar32 = *(int **)(*(int *)(&stack0x00000008 + iVar36) + 4);
  pcVar39 = *(code **)(*piVar32 + 0x44);
  String::String((String *)(&stack0x0000013c + iVar36),(char *)(DAT_0012e7e4 + 0x12e5ac));
  (*pcVar39)(piVar32,&stack0x0000013c + iVar36);
  String::~String((String *)(&stack0x0000013c + iVar36));
  String::String((String *)(&stack0x00000144 + iVar36),
                 (String *)(*(int *)(*(int *)(this + 0x40) + 0x38) + 100));
  setItemDescriptionText(this,&stack0x00000144 + iVar36);
  String::~String((String *)(&stack0x00000144 + iVar36));
  piVar32 = *(int **)(this + 0xf4);
  pcVar39 = *(code **)(*piVar32 + 0x44);
  Vector<String>::elementAt((int)(&stack0x0000014c + iVar36));
  (*pcVar39)(piVar32,&stack0x0000014c + iVar36);
  String::~String((String *)(&stack0x0000014c + iVar36));
  (**(code **)(**(int **)(this + 0xe8) + 0x20))(*(int **)(this + 0xe8),1);
  piVar32 = *(int **)(this + 0x104);
  pcVar39 = *(code **)(*piVar32 + 0x44);
  String::String((String *)(&stack0x00000154 + iVar36),(char *)(DAT_0012e7ec + 0x12e620));
  (*pcVar39)(piVar32,&stack0x00000154 + iVar36);
  String::~String((String *)(&stack0x00000154 + iVar36));
  (**(code **)(**(int **)(this + 0xf0) + 0x20))(*(int **)(this + 0xf0),1);
  iVar7 = *(int *)(this + 0xc);
  if (*(int *)(iVar7 + 0x4b8) != 0) {
    FUN_0012f41e();
  }
  lVar21 = screenToWorldCoords(this,*(long *)(iVar7 + 0x14));
  iVar7 = *(int *)(this + 0x40);
  lVar21 = Cafe::worldToDiamondCoords(lVar21);
  lVar21 = Cafe::diamondToStaggeredCoords(lVar21);
  uVar6 = Cafe::staggeredCoordsToIndex(lVar21);
  *(undefined2 *)(iVar7 + 0x2c) = uVar6;
  piVar32 = *(int **)(this + 0x40);
  pcVar39 = *(code **)(*piVar32 + 0xc);
  uVar23 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x14),(int)(short)piVar32[0xb]);
  (*pcVar39)(piVar32,uVar23);
  pZVar40 = *(ZombieCafe **)(this + 0x40);
  iVar7 = Furniture::canRotate((Furniture *)pZVar40);
  if ((iVar7 != 0) && (*(char *)(*(int *)((Furniture *)pZVar40 + 0x38) + 0x44) != '\x06')) {
    iVar7 = *(int *)((Furniture *)pZVar40 + 0x20);
    lVar21 = CFPoint::subtract(*(long *)((Furniture *)pZVar40 + 4),
                               (int)(short)iVar7 >> 1 & 0xffffU | (iVar7 >> 0x11) << 0x10);
    CFPoint::add(lVar21,(iVar7 >> 0x10) << 0x10);
    uVar23 = worldToScreenCoords((long)this);
    FUN_00118458(*(undefined4 *)(this + 0x170),uVar23);
    pZVar40 = (ZombieCafe *)0x16c;
    *(undefined2 *)(this + 0x16c) = **(undefined2 **)(iVar42 + DAT_0012e7f0);
  }
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x40);
  FUN_0012f41e();
  if ((int)**(short **)(iVar42 + DAT_0012e7f4) < *(int *)(pZVar40 + DAT_0012e7f8)) {
    FUN_0012fe14();
  }
  iVar7 = ZombieCafe::touchWasPinch(pZVar40);
  if (iVar7 != 0) {
    FUN_0012fe14();
  }
  if (*(int *)(pZVar40 + 0x4d0) <= **(int **)(iVar42 + DAT_0012e7fc)) {
    FUN_0012fe14();
  }
  iVar7 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(pZVar40 + DAT_0012e800),'!');
  if (iVar7 == 0) {
    FUN_0012fe14();
  }
  screenToWorldCoords(this,*(long *)(*(int *)(this + 0xc) + 0x4b8));
  pFVar35 = (Furniture *)Cafe::pickCafeObject(*(long *)(this + 0x14));
  if (pFVar35 == (Furniture *)0x0) {
    FUN_0012f41e();
  }
  iVar7 = (**(code **)(*(int *)pFVar35 + 0x14))(pFVar35);
  fVar61 = extraout_s0_00;
  if (iVar7 != 1) {
    fVar61 = (float)FUN_0012fe28();
  }
  FVar2 = pFVar35[0x2e];
  *(uint *)(&stack0x00000008 + iVar36) = (uint)(byte)FVar2;
  if ((byte)FVar2 != 0) {
    fVar61 = (float)FUN_0012fe28();
  }
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar61);
  iVar26 = DAT_0012e7cc;
  *(Furniture **)(this + 0x40) = pFVar35;
  this[iVar26] = SUB41(iVar7,0);
  *(undefined2 *)(this + 0x162) = *(undefined2 *)(pFVar35 + 0x2c);
  *(Furniture *)(this + 0x164) = pFVar35[0x34];
  Cafe::removeFurniture(*(Cafe **)(this + 0x14),pFVar35);
  if (*(int *)(*(int *)(this + 0x18) + 0x88) == *(int *)(this + 0x40)) {
    pFVar35 = *(Furniture **)(&stack0x00000008 + iVar36);
    *(int *)(*(int *)(this + 0x18) + 0x88) = (int)pFVar35;
  }
  for (iVar7 = 0; iVar7 < *(int *)(this + 0x20) + 1; iVar7 = iVar7 + 1) {
    puVar25 = (undefined4 *)(*(int *)(iVar7 * 4 + *(int *)(this + 0x24)) + 0x88);
    pFVar35 = (Furniture *)*puVar25;
    if (pFVar35 == *(Furniture **)(this + 0x40)) {
      *puVar25 = 0;
    }
  }
  for (iVar7 = 0; iVar26 = DAT_0012ebb0, iVar7 < *(int *)(this + 0x2c) + 1; iVar7 = iVar7 + 1) {
    puVar25 = (undefined4 *)(*(int *)(iVar7 * 4 + *(int *)(this + 0x30)) + 0x88);
    pFVar35 = (Furniture *)*puVar25;
    if (pFVar35 == *(Furniture **)(this + 0x40)) {
      *puVar25 = 0;
    }
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012ebac) = 1;
  this[iVar26] = (GameStateCafe)0x2;
  fVar61 = (float)FUN_0012f41e();
  if (*(int *)(pFVar35 + 0x44) == 0) {
    fVar61 = (float)FUN_0012f41e();
  }
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar61);
  iVar7 = DAT_0012ebb4;
  piVar32 = *(int **)(pFVar35 + 0x44);
  GVar22 = *(GameStateCafe *)(&stack0x00000008 + iVar36);
  *(int **)(this + 0x40) = piVar32;
  this[iVar7] = GVar22;
  *(Furniture **)(this + 0x48) = pFVar35;
  *(undefined4 *)(&stack0x00000010 + iVar36) = *(undefined4 *)(*piVar32 + 0xc);
  uVar23 = screenToWorldCoords(this,*(long *)(*(int *)(this + 0xc) + 0x4b8));
  (**(code **)(&stack0x00000010 + iVar36))(piVar32,uVar23);
  *(undefined4 *)(pFVar35 + 0x44) = 0;
  iVar7 = DAT_0012ebb0;
  GVar22 = *(GameStateCafe *)(&stack0x00000008 + iVar36);
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012ebac) = 1;
  this[iVar7] = GVar22;
  uVar62 = FUN_0012f41e();
  pCVar41 = DAT_0012ebb8;
  if (*(short *)(this + 0x16c) == 0) {
    uVar62 = FUN_0012fe3e();
  }
  iVar7 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0x170),*(long *)(pCVar41 + iVar7),(float)uVar62,
                     (float)((ulonglong)uVar62 >> 0x20));
  if (iVar7 == 0) {
    FUN_0012fe3e();
  }
  *(undefined2 *)(this + 0x16c) = **(undefined2 **)(iVar42 + DAT_0012ebbc);
  pFVar35 = *(Furniture **)(this + 0x44);
  if (*(char *)(*(int *)(pFVar35 + 0x38) + 0x44) == '\x04') {
    bVar18 = (char)pFVar35[0x34] + 1U & 3;
  }
  else {
    bVar18 = (byte)pFVar35[0x34] ^ 1;
  }
  Furniture::setOrientation(pFVar35,bVar18);
  iVar7 = *(int *)(this + 0xc);
  fVar61 = (float)CapcomMath::random(3);
  ZombieCafe::playEffect(iVar7,fVar61);
  FUN_0012f41e();
  iVar7 = (**(code **)(*(int *)pCVar41 + 0x14))(pCVar41);
  if (iVar7 == 3) {
    pCVar13 = (CharacterInstance *)Cafe::getSelectedObject(*(Cafe **)(this + 0x14));
    if (pCVar13 == pCVar41) {
      FUN_0012fe5e();
    }
    if (*(char *)(*(int *)(pCVar41 + 0x8c) + 0x24) != '\0') {
      FUN_0012fe5e();
    }
    iVar7 = (**(code **)(*(int *)pCVar41 + 0x20))(pCVar41);
    if ((iVar7 == 1) &&
       (iVar7 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar41 + 0x8c) + 0x40),0), iVar7 != 0)) {
      FUN_0012fe5e();
    }
    select(this,pCVar41);
    Store::close(*(Store **)(this + 0x84));
    CookCommandBar::close(*(CookCommandBar **)(this + 0xb4));
    pGVar27 = this + 0xac;
    PlantCommandBar::close(*(PlantCommandBar **)(this + 0xb8));
    CharacterCommandBar::open(*(CharacterCommandBar **)pGVar27);
    CharacterCommandBar::resetButtons();
    CharacterCommandBar::setCharacter(*(CharacterCommandBar **)pGVar27,pCVar41);
    Storage::close(*(Storage **)(this + 0xbc));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(this + 0xc0));
    iVar7 = (**(code **)(*(int *)pCVar41 + 0x20))(pCVar41);
    *(int *)(&stack0x00000008 + iVar36) = iVar7;
    if (iVar7 == 1) {
      iVar7 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012ebc0),'\x16');
      if (iVar7 != 0) {
        uVar23 = CharacterCommandBar::addInfectButton
                           (*(CharacterCommandBar **)pGVar27,
                            *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ebe0),this)
        ;
        *(undefined4 *)(this + 0x10c) = uVar23;
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012ebc0),'L',
                   SUB41(*(undefined4 *)(&stack0x00000008 + iVar36),0));
      }
      iVar36 = *(int *)(this + 0xc);
      if (*(char *)(**(int **)(pCVar41 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar61 = (float)CapcomMath::random(8);
      }
      else {
        fVar61 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar36,fVar61);
      iVar36 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012ebc0),'\n');
      if (iVar36 != 0) {
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)(this + 0xac),
                   *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ebc4),this);
      }
    }
    else {
      if (iVar7 != 0) {
        if (iVar7 != 2) {
          FUN_0012eca0();
          return;
        }
        CharacterInstance::groan(pCVar41);
        if (*(char *)(*(int *)(pCVar41 + 0x8c) + 0x44) == '\x05') {
          if (*(StatusNote **)(pCVar41 + 0x30) != (StatusNote *)0x0) {
            Cafe::removeStatusNote(*(Cafe **)(this + 0x14),*(StatusNote **)(pCVar41 + 0x30));
            if (*(int **)(pCVar41 + 0x30) != (int *)0x0) {
              (**(code **)(**(int **)(pCVar41 + 0x30) + 4))();
              *(undefined4 *)(pCVar41 + 0x30) = 0;
            }
          }
          CharacterInstance::stopTasks(pCVar41);
          TutorialSystem::triggerEvent
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012ebc0),'=',true);
          Quest::runQuest(*(int *)(*(int *)(this + 0xc) + 0x40),0x2e,(int *)0xffffffff);
        }
        pGVar27 = this + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar27,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ebc4),this);
        iVar7 = *(int *)(pCVar41 + 0x8c);
        *(CharacterInstance **)(&stack0x00000008 + iVar36) = pCVar41 + 0x8c;
        if (*(char *)(iVar7 + 0x44) != '\x06') {
          uVar23 = CharacterCommandBar::addHealButton
                             (*(CharacterCommandBar **)pGVar27,
                              *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ebcc),
                              this);
          *(undefined4 *)(this + 0x114) = uVar23;
          *(GameStateCafe **)(&stack0x00000010 + iVar36) = this + 0xfc;
          if (*(char *)(**(int **)(&stack0x00000008 + iVar36) + 0x44) == '\x03') {
            CharacterCommandBar::addWorkButton
                      (*(CharacterCommandBar **)pGVar27,
                       *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ebd0),this);
          }
          else {
            uVar23 = CharacterCommandBar::addRestButton
                               (*(CharacterCommandBar **)pGVar27,
                                *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ebd4),
                                this);
            *(undefined4 *)(*(int *)(&stack0x00000010 + iVar36) + 0x14) = uVar23;
          }
          if (3 < *(int *)(*(int *)(this + 0xc) + 0x680)) {
            CharacterCommandBar::addPowerupButton
                      (*(CharacterCommandBar **)(this + 0xac),
                       *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ebd8),this);
          }
          if (3 < *(int *)(*(int *)(this + 0xc) + 0x680)) {
            CharacterCommandBar::addLockerButton
                      (*(CharacterCommandBar **)(this + 0xac),
                       *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ebdc),this);
          }
          iVar36 = *(int *)(this + 0xc);
          if (*(int *)(iVar36 + 0x680) < 4) {
            FUN_0012fe72();
          }
          iVar36 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(iVar36 + DAT_0012ebc0),']');
          if (iVar36 != 0) {
            FUN_0012fe72();
          }
          TutorialSystem::triggerEvent
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012ebc0),'^',true);
          CharacterCommandBar::layout(*(CharacterCommandBar **)(this + 0xac));
          if (pCVar41[0xc6] != (CharacterInstance)0x0) {
            CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(this + 0xac),0));
            pCVar41[0xc6] = (CharacterInstance)0x0;
            FUN_0012eca0();
            return;
          }
          FUN_0012eca0();
          return;
        }
        CharacterCommandBar::addReviveButton
                  (*(CharacterCommandBar **)pGVar27,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ebc8),this);
        FUN_0012eaea();
        return;
      }
      iVar36 = *(int *)(this + 0xc);
      if (*(char *)(**(int **)(pCVar41 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar61 = (float)CapcomMath::random(8);
      }
      else {
        fVar61 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar36,fVar61);
      iVar36 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012ef14),'\x16');
      if (iVar36 != 0) {
        pGVar27 = this + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar27,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ef18),this);
        CharacterCommandBar::addChefButton
                  (*(CharacterCommandBar **)pGVar27,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ef1c),this);
        if (this[0x19a] == (GameStateCafe)0x0) {
          CharacterCommandBar::addScreenshotButton
                    (*(CharacterCommandBar **)pGVar27,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(iVar42 + DAT_0012ef20),this);
        }
      }
      if (pCVar41[0xc6] != (CharacterInstance)0x0) {
        CharacterCommandBar::setChefButtonNewIndicator(SUB41(*(undefined4 *)(this + 0xac),0));
        pCVar41[0xc6] = (CharacterInstance)0x0;
      }
    }
    CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(this + 0xac),0));
    FUN_0012eca0();
    return;
  }
  if (iVar7 == 1) {
    uVar20 = *(byte *)(*(int *)(pCVar41 + 0x38) + 0x44) - 1;
    if (uVar20 < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x0012ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&switchD_0012ecc0::switchdataD_0012ecc4 +
                (uint)(&switchD_0012ecc0::switchdataD_0012ecc4)[uVar20] * 2 + 1))();
      return;
    }
    if (*(short *)(pCVar41 + 0x42) == 0) {
      sVar4 = *(short *)(pCVar41 + 0x44);
      *(int *)(&stack0x00000008 + iVar36) = (int)sVar4;
      if (0 < sVar4) {
        iVar7 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(this + 0xc));
        fVar61 = extraout_s0_01;
        if (iVar7 == 0) {
          *(undefined4 *)(&stack0x00000010 + iVar36) = *(undefined4 *)(this + 0x14);
          String::valueOf((int)(&stack0x00000184 + iVar36));
          pSVar14 = (StatusNote *)operator_new(0x30);
          *puVar53 = **(undefined4 **)(iVar42 + DAT_0012f62c);
          *(undefined4 *)(&stack0xfffffff0 + iVar36) = 0xffffffff;
          *(undefined4 *)(&stack0xfffffff4 + iVar36) = 0;
          StatusNote::StatusNote(pSVar14,pCVar41,1,&stack0x00000184 + iVar36);
          Cafe::addStatusNote(*(Cafe **)(&stack0x00000010 + iVar36),pSVar14);
          String::~String((String *)(&stack0x00000184 + iVar36));
          fVar61 = (float)ZombieCafe::addXp(*(ZombieCafe **)(this + 0xc),
                                            *(int *)(&stack0x00000008 + iVar36));
        }
        ZombieCafe::playEffect(*(int *)(this + 0xc),fVar61);
        pCVar41 = pCVar41 + 6;
        goto LAB_0012f310;
      }
    }
    else {
      *(int *)(*(int *)(this + 0xc) + DAT_0012f2a0) =
           *(int *)(*(int *)(this + 0xc) + DAT_0012f2a0) + (int)*(short *)(pCVar41 + 0x42);
      *(undefined4 *)(&stack0x00000008 + iVar36) = *(undefined4 *)(this + 0x14);
      String::valueOf((int)(&stack0x0000017c + iVar36));
      pSVar14 = (StatusNote *)operator_new(0x30);
      uVar23 = **(undefined4 **)(iVar42 + DAT_0012f2a4);
      *(undefined4 *)(&stack0xfffffff4 + iVar36) = 0;
      *puVar52 = uVar23;
      *(undefined4 *)(&stack0xfffffff0 + iVar36) = 0xffffffff;
      StatusNote::StatusNote(pSVar14,pCVar41,0,&stack0x0000017c + iVar36);
      Cafe::addStatusNote(*(Cafe **)(&stack0x00000008 + iVar36),pSVar14);
      fVar61 = (float)String::~String((String *)(&stack0x0000017c + iVar36));
      ZombieCafe::playEffect(*(int *)(this + 0xc),fVar61);
      pCVar41 = pCVar41 + 4;
LAB_0012f310:
      *(undefined2 *)(pCVar41 + 0x3e) = 0;
    }
    *(undefined4 *)(&stack0x00000008 + iVar36) = 0;
    piVar32 = *(int **)(this + 0x54);
    if (piVar32 == (int *)0x0) {
      FUN_0012f41e();
      return;
    }
    if ((*(int *)(&stack0x00000008 + iVar36) != 0) &&
       ((piVar32 == *(int **)(this + 0x18) || (iVar7 = (**(code **)(*piVar32 + 0x20))(), iVar7 == 2)
        ))) {
      pCVar41 = *(CharacterInstance **)(this + 0x54);
      if (pCVar41 == *(CharacterInstance **)(this + 0x18)) {
        iVar36 = *(int *)(this + 0xc);
        if (*(char *)(**(int **)(pCVar41 + 0x8c) + DAT_0012f630) == '\0') {
          fVar61 = (float)CapcomMath::random(3);
        }
        else {
          fVar61 = (float)CapcomMath::random(3);
        }
        ZombieCafe::playEffect(iVar36,fVar61);
      }
      else {
        CharacterInstance::groan(pCVar41);
      }
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012f634),'\x1c',false);
      FUN_0012f41e();
      return;
    }
  }
  else if ((iVar7 == 2) &&
          (iVar26 = Cafe::doorPicked(*(long *)(this + 0x14)), iVar7 = DAT_0012f634, iVar26 != 0)) {
    iVar26 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012f634),'\x16');
    if (iVar26 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(this + 0x14),(bool)((byte)(*(Cafe **)(this + 0x14))[100] ^ 1),
                        true);
      FUN_0012f41e();
      return;
    }
    iVar26 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar7),'Q');
    if (iVar26 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(this + 0x14),true,false);
      fVar61 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar7),'\x04',true);
      pZVar40 = *(ZombieCafe **)(this + 0xc);
      *puVar54 = 0;
      ZombieCafe::loadAndPlayMusic(pZVar40,0,3,fVar61,false);
      FUN_0012f41e();
      return;
    }
  }
  pZVar40 = *(ZombieCafe **)(this + 0xc);
  iVar7 = ZombieCafe::unhandledTouching(pZVar40);
  if ((iVar7 != 0) ||
     ((this[DAT_0012f638] == (GameStateCafe)0x9 && (*(int *)(pZVar40 + 0x4b8) != 0)))) {
    iVar7 = ZombieCafe::touchWasPinch(pZVar40);
    if (iVar7 != 0) {
      *(undefined4 *)(&stack0x00000008 + iVar36) = *(undefined4 *)(this + 0x1e4);
      uVar23 = __divsf3(*(undefined4 *)(pZVar40 + DAT_0012f63c),*(undefined4 *)(pZVar40 + 0x4c0));
      *(undefined4 *)(&stack0x00000010 + iVar36) = uVar23;
      iVar7 = CapcomApp::getInstance();
      pZVar40 = *(ZombieCafe **)(iVar7 + 4);
      uVar23 = ZombieCafe::getCafeZoomParam(pZVar40,extraout_s0_02,extraout_s1);
      *(undefined4 *)(this + 0x1e4) = uVar23;
      iVar7 = __aeabi_fcmpeq(*(undefined4 *)(&stack0x00000008 + iVar36),uVar23);
      if (iVar7 == 0) {
        *(undefined4 *)(&stack0x00000008 + iVar36) = *(undefined4 *)(this + 0x1e0);
        lVar21 = CFPoint::subtract(*(long *)(pZVar40 + 0x4b8),*(long *)(&stack0x00000008 + iVar36));
        lVar15 = CFPoint::multiplyf(lVar21,extraout_s0_03);
        lVar21 = CFPoint::subtract(lVar15,lVar21);
        uVar23 = CFPoint::subtract(*(long *)(&stack0x00000008 + iVar36),lVar21);
        *(undefined4 *)(this + 0x1e0) = uVar23;
      }
    }
    iVar7 = *(int *)(this + 0xc);
    if ((int)**(short **)(iVar42 + DAT_0012f640) < *(int *)(iVar7 + DAT_0012f644)) {
      uVar23 = __floatsisf((*(int *)(iVar7 + 0x4b8) >> 0x10) -
                           (*(int *)(iVar7 + DAT_0012f648) >> 0x10));
      iVar26 = DAT_0012f648;
      *(undefined4 *)(this + 0x1d8) = uVar23;
      uVar23 = __floatsisf((int)*(short *)(iVar7 + 0x4b8) - (int)*(short *)(iVar7 + iVar26));
      *(undefined4 *)(this + 0x1dc) = uVar23;
    }
    else {
      *(undefined4 *)(this + 0x1dc) = 0;
      *(undefined4 *)(this + 0x1d8) = 0;
    }
  }
  uVar23 = *(undefined4 *)(this + 0x1dc);
  *(undefined4 *)(&stack0x00000008 + iVar36) = *(undefined4 *)(this + 0x1e0);
  uVar20 = __fixsfsi(uVar23);
  iVar7 = __fixsfsi(*(undefined4 *)(this + 0x1d8));
  uVar23 = CFPoint::add(*(long *)(&stack0x00000008 + iVar36),iVar7 << 0x10 | uVar20 & 0xffff);
  *(undefined4 *)(this + 0x1e0) = uVar23;
  iVar7 = *(int *)(this + 0x14);
  *(undefined4 *)(&stack0x00000008 + iVar36) = uVar23;
  uVar23 = *(undefined4 *)(iVar7 + 0x1c);
  *(undefined4 *)(&stack0x00000010 + iVar36) = *(undefined4 *)(iVar7 + 0x18);
  uVar28 = *(undefined4 *)(this + 0x1e4);
  *(undefined4 *)(&stack0x00000014 + iVar36) = uVar23;
  uVar23 = __floatsisf(*(int *)(&stack0x00000010 + iVar36) >> 0x10);
  uVar23 = __mulsf3(uVar23,uVar28);
  ceilf(__x);
  *(undefined4 *)(&stack0x00000018 + iVar36) = uVar23;
  uVar23 = __floatsisf((int)(short)*(undefined4 *)(&stack0x00000010 + iVar36));
  uVar23 = __mulsf3(uVar23,uVar28);
  ceilf(__x_00);
  *(undefined4 *)(&stack0x0000001c + iVar36) = uVar23;
  uVar23 = __floatsisf((int)(short)*(undefined4 *)(&stack0x00000014 + iVar36));
  __mulsf3(uVar23,uVar28);
  uVar20 = __fixsfsi();
  uVar23 = __floatsisf(*(int *)(&stack0x00000014 + iVar36) >> 0x10);
  __mulsf3(uVar23,uVar28);
  iVar7 = __fixsfsi();
  *(uint *)(&stack0x00000010 + iVar36) = uVar20 & 0xffff | iVar7 << 0x10;
  uVar20 = __fixsfsi(*(undefined4 *)(&stack0x0000001c + iVar36));
  uVar16 = __fixsfsi(*(undefined4 *)(&stack0x00000018 + iVar36));
  iVar7 = -(*(int *)(&stack0x00000008 + iVar36) >> 0x10);
  uVar29 = *(uint *)(&stack0x00000010 + iVar36) >> 0x10;
  if (iVar7 < (short)(*(uint *)(&stack0x00000010 + iVar36) >> 0x10)) {
    uVar16 = uVar29 * -0x10000 | *(uint *)(&stack0x00000008 + iVar36) & 0xffff;
LAB_0012f5f8:
    *(uint *)(this + 0x1e0) = uVar16;
  }
  else {
    uVar16 = (uVar29 + (uVar16 & 0xffff)) - 1;
    iVar26 = (int)(short)uVar16 - (int)(short)*(ushort *)(*(int *)(this + 0xc) + 0x12);
    if (-iVar26 != *(int *)(&stack0x00000008 + iVar36) >> 0x10 && iVar26 <= iVar7) {
      uVar16 = ((uint)*(ushort *)(*(int *)(this + 0xc) + 0x12) - (uVar16 & 0xffff)) * 0x10000 |
               *(uint *)(&stack0x00000008 + iVar36) & 0xffff;
      goto LAB_0012f5f8;
    }
  }
  uVar16 = *(uint *)(this + 0x1e0);
  uVar29 = *(uint *)(&stack0x00000010 + iVar36) & 0xffff;
  iVar7 = -(int)(short)uVar16;
  if (iVar7 < (short)*(uint *)(&stack0x00000010 + iVar36)) {
    *(uint *)(this + 0x1e0) = -uVar29 & 0xffff | uVar16 & 0xffff0000;
  }
  else {
    uVar29 = ((uVar20 & 0xffff) - 1) + uVar29;
    iVar26 = (int)(short)uVar29 - (int)(short)*(ushort *)(*(int *)(this + 0xc) + 0x10);
    if (-iVar26 != (int)(short)uVar16 && iVar26 <= iVar7) {
      *(uint *)(this + 0x1e0) =
           (uint)*(ushort *)(*(int *)(this + 0xc) + 0x10) - (uVar29 & 0xffff) & 0xffff |
           uVar16 & 0xffff0000;
    }
  }
  *(undefined4 *)(&stack0x00000010 + iVar36) = *(undefined4 *)(this + 0x1d8);
  puVar25 = *(undefined4 **)(iVar42 + DAT_0012f9b0);
  uVar23 = __floatsisf(*(undefined4 *)(&stack0x0000000c + iVar36));
  uVar23 = __mulsf3(uVar23,*puVar25);
  iVar7 = __aeabi_fcmplt(uVar23,0x3f800000);
  if (iVar7 == 0) {
    *(undefined4 *)(&stack0x00000008 + iVar36) = 0;
    uVar28 = 0x3f800000;
  }
  else {
    *(undefined4 *)(&stack0x00000008 + iVar36) = 1;
    uVar28 = uVar23;
  }
  uVar28 = __subsf3(0x3f800000,uVar28);
  iVar7 = __mulsf3(*(undefined4 *)(&stack0x00000010 + iVar36),uVar28);
  *(int *)(this + 0x1d8) = iVar7;
  *(undefined4 *)(&stack0x00000010 + iVar36) = *(undefined4 *)(this + 0x1dc);
  if (*(int *)(&stack0x00000008 + iVar36) == 0) {
    uVar23 = 0x3f800000;
  }
  uVar23 = __subsf3(0x3f800000,uVar23);
  iVar26 = __mulsf3(*(undefined4 *)(&stack0x00000010 + iVar36),uVar23);
  *(int *)(this + 0x1dc) = iVar26;
  iVar10 = __aeabi_fcmpge(iVar7,0);
  if (iVar10 == 0) {
    iVar7 = iVar7 + -0x80000000;
  }
  uVar23 = **(undefined4 **)(iVar42 + DAT_0012f9b4);
  *(undefined4 *)(&stack0x00000008 + iVar36) = uVar23;
  iVar7 = __aeabi_fcmplt(iVar7,uVar23);
  if (iVar7 != 0) {
    iVar7 = __aeabi_fcmpge(iVar26,0);
    if (iVar7 == 0) {
      iVar26 = iVar26 + -0x80000000;
    }
    iVar7 = __aeabi_fcmplt(iVar26,*(undefined4 *)(&stack0x00000008 + iVar36));
    if (iVar7 != 0) {
      *(undefined4 *)(this + 0x1dc) = 0;
      *(undefined4 *)(this + 0x1d8) = 0;
    }
  }
  tickFiredZombies(this);
  tickStaff(this,*(long *)(&stack0x0000000c + iVar36));
  tickZombieWorkInterruptions(this,*(long *)(&stack0x0000000c + iVar36));
  tickCustomers(this,*(long *)(&stack0x0000000c + iVar36));
  tickLockerZombies(this,*(long *)(&stack0x0000000c + iVar36));
  iVar7 = *(int *)(this + 0x54);
  if (iVar7 != 0) {
    iVar26 = *(int *)(this + 0xc);
    if (iVar7 == *(int *)(this + 0x18)) {
      this_04 = *(TutorialSystem **)(iVar26 + DAT_0012f9b8);
      uVar19 = '\x01';
    }
    else if ((iVar7 == *(int *)(this + 0x5c)) && (*(char *)(*(int *)(iVar7 + 0x8c) + 4) == '\0')) {
      uVar19 = '\r';
      this_04 = *(TutorialSystem **)(iVar26 + DAT_0012f9b8);
    }
    else {
      uVar19 = '\x10';
      this_04 = *(TutorialSystem **)(iVar26 + DAT_0012f9b8);
    }
    TutorialSystem::triggerEvent(this_04,uVar19,true);
  }
  iVar7 = ZombieCafe::IsMusicPlaying();
  if ((iVar7 == 0) &&
     (iVar26 = *(int *)(*(int *)(this + 0xc) + DAT_0012f9bc) - *(int *)(&stack0x0000000c + iVar36),
     *(int *)(*(int *)(this + 0xc) + DAT_0012f9bc) = iVar26, iVar7 = DAT_0012f9c0, iVar26 < 1)) {
    if (this[DAT_0012f9c0] == (GameStateCafe)0x0) {
      L_PrintLog((char *)(DAT_0012f9c4 + 0x12f7de),(char *)(DAT_0012f9c8 + 0x12f7e0));
      ZombieCafe::PlayCafeMusic();
      this[iVar7] = (GameStateCafe)0x1;
    }
    else {
      ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(this + 0xc));
      this[iVar7] = (GameStateCafe)0x0;
    }
    *(undefined4 *)(*(int *)(this + 0xc) + DAT_0012f9bc) = **(undefined4 **)(iVar42 + DAT_0012f9cc);
  }
  uVar20 = (uint)(byte)this[DAT_0012f9d0];
  if ((uVar20 - 1 < 3) || (uVar20 == 7)) {
    cVar24 = '\0';
  }
  else {
    cVar24 = '\x01' - (uVar20 == 10);
  }
  *(char *)(*(int *)(this + 0x14) + 0xc9) = cVar24;
  iVar7 = DAT_0012f9d8;
  if (*(char *)(*(int *)(this + 0xc) + DAT_0012f9d4) != '\0') {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012f9d4) = 0;
    pcVar38 = (char *)(iVar7 + 0x12f82e);
    L_PrintLog(pcVar38,(char *)(DAT_0012f9dc + 0x12f832));
    if ((((*(char *)(*(int *)(this + 0xd0) + 0x14) == '\0') &&
         (*(char *)(*(int *)(this + 0x7c) + 0x14) == '\0')) &&
        (bVar18 = *(byte *)(*(int *)(this + 0x80) + 0x14),
        *(uint *)(&stack0x0000000c + iVar36) = (uint)bVar18, bVar18 == 0)) &&
       (iVar7 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012f9b8),'\x01'),
       iVar7 != 0)) {
      L_PrintLog(pcVar38,(char *)(DAT_0012f9e0 + 0x12f876));
      if ((*(int *)(this + 0x130) == 0) || (*(char *)(*(int *)(this + 0x130) + 0x14) == '\0')) {
        if (((*(char *)(*(int *)(this + 0x124) + 0x14) == '\0') &&
            (*(char *)(*(int *)(this + 0xa0) + 0x14) == '\0')) &&
           ((*(char *)(*(int *)(this + 0x9c) + 0x14) == '\0' &&
            (*(char *)(*(int *)(this + 0x94) + 0x14) == '\0')))) {
          this_05 = *(LotteryDialog **)(this + 0xa4);
          if (this_05 == (LotteryDialog *)0x0) {
            L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
            pCVar9 = *(ConfirmDialog **)(this + 0x80);
            Vector<String>::elementAt((int)(&stack0x000001a4 + iVar36));
            Vector<String>::elementAt((int)(&stack0x000001ac + iVar36));
            Vector<String>::elementAt((int)(&stack0x000001b4 + iVar36));
            uVar23 = *(undefined4 *)(iVar42 + DAT_0012f9fc);
            *(GameStateCafe **)(&stack0xfffffff0 + iVar36) = this;
            *puVar56 = uVar23;
            ConfirmDialog::show(pCVar9,&stack0x000001a4 + iVar36,&stack0x000001ac + iVar36,
                                &stack0x000001b4 + iVar36);
            String::~String((String *)(&stack0x000001b4 + iVar36));
            String::~String((String *)(&stack0x000001ac + iVar36));
            puVar5 = &stack0x000001a4;
          }
          else {
            if (this_05[0x14] != (LotteryDialog)0x0) {
              LotteryDialog::backClose(this_05);
              L_PrintLog((char *)(DAT_0012fd4c + 0x12fa14),(char *)(DAT_0012fd50 + 0x12fa16));
              goto LAB_0012fa18;
            }
            L_PrintLog((char *)(DAT_0012f9e8 + 0x12f8e6),(char *)(DAT_0012f9ec + 0x12f8e8));
            pCVar9 = *(ConfirmDialog **)(this + 0x80);
            Vector<String>::elementAt((int)(&stack0x0000018c + iVar36));
            Vector<String>::elementAt((int)(&stack0x00000194 + iVar36));
            Vector<String>::elementAt((int)(&stack0x0000019c + iVar36));
            uVar23 = *(undefined4 *)(iVar42 + DAT_0012f9fc);
            *(GameStateCafe **)(&stack0xfffffff0 + iVar36) = this;
            *puVar55 = uVar23;
            ConfirmDialog::show(pCVar9,&stack0x0000018c + iVar36,&stack0x00000194 + iVar36,
                                &stack0x0000019c + iVar36);
            String::~String((String *)(&stack0x0000019c + iVar36));
            String::~String((String *)(&stack0x00000194 + iVar36));
            puVar5 = &stack0x0000018c;
          }
          String::~String((String *)(puVar5 + iVar36));
        }
      }
      else {
        L_PrintLog(pcVar38,(char *)(DAT_0012f9e4 + 0x12f892));
        (**(code **)(**(int **)(this + 0x130) + 0x20))
                  (*(int **)(this + 0x130),*(undefined4 *)(&stack0x0000000c + iVar36));
      }
    }
  }
LAB_0012fa18:
  iVar7 = (byte)this[DAT_0012fd54] - 1;
  *(byte *)(*(int *)(this + 0x14) + 0xca) =
       ((char)iVar7 - ((char)this[DAT_0012fd54] - 2U)) - (iVar7 == 0);
  if (**(char **)(iVar42 + DAT_0012fd58) == '\0') {
    FUN_0012ff22();
    return;
  }
  iVar7 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012fd5c),'*');
  if (iVar7 != 0) {
    iVar26 = DAT_0012fd60 + 0x12fa4c;
    iVar7 = *(int *)(DAT_0012fd60 + 0x12fac0);
    if (iVar7 != 0) {
      if (iVar7 != 3) {
        if (iVar7 != 2) {
          FUN_0012ff22();
          return;
        }
        puVar25 = *(undefined4 **)(iVar42 + DAT_0012fd68);
        *(undefined4 *)(&stack0x0000000c + iVar36) = 0;
        piVar32 = puVar25 + 4;
        *(undefined4 *)(&stack0x00000008 + iVar36) = *(undefined4 *)(iVar42 + DAT_0012fd6c);
        while( true ) {
          iVar7 = **(int **)(&stack0x00000008 + iVar36);
          *(int **)(&stack0x00000010 + iVar36) = *(int **)(&stack0x00000008 + iVar36);
          if (iVar7 <= *(int *)(&stack0x0000000c + iVar36)) break;
          uVar28 = puVar25[1];
          uVar23 = *puVar25;
          *puVar57 = puVar25[2];
          *(undefined4 *)(&stack0xfffffff0 + iVar36) = puVar25[3];
          *(int *)(&stack0xfffffff4 + iVar36) = *piVar32;
          *(int *)(&stack0xfffffff8 + iVar36) = piVar32[1];
          sprintf(&stack0x000003e8 + iVar36,(char *)(DAT_0012fd70 + 0x12faac),uVar23,uVar28);
          if ((puVar25[1] == 2) && (0 < *piVar32)) {
            iVar7 = *(int *)(&stack0x0000000c + iVar36);
            *puVar58 = **(undefined4 **)(&stack0x00000008 + iVar36);
            snprintf(&stack0x00000268 + iVar36,0x80,(char *)(DAT_0012fd74 + 0x12fad0),iVar7 + 1);
            strcpy(&stack0x000001e8 + iVar36,(char *)piVar32[1]);
            iVar7 = *piVar32;
            *piVar59 = (int)(&stack0x00000268 + iVar36);
            snprintf(&stack0xffffffec + DAT_0012fd7c + iVar36,0x400,
                     (char *)(DAT_0012fd78 + 0x12faf0),iVar7);
            ZombieCafe::addToxinMedia(*(ZombieCafe **)(this + 0xc),*piVar32);
            puVar25[1] = 0;
            puVar25[2] = 0;
            *piVar32 = 0;
            ZombieCafe::save();
            *(undefined4 *)(&stack0x00000010 + iVar36) = *(undefined4 *)(this + 0xd0);
            String::String((String *)(&stack0x000001c4 + iVar36),
                           &stack0xffffffec + DAT_0012fd7c + iVar36);
            Vector<String>::elementAt((int)(&stack0x000001bc + iVar36));
            pNVar17 = *(NoticeDialog **)(&stack0x00000010 + iVar36);
            *puVar60 = 0;
            NoticeDialog::show(pNVar17,&stack0x000001c4 + iVar36,&stack0x000001bc + iVar36);
            String::~String((String *)(&stack0x000001bc + iVar36));
            String::~String((String *)(&stack0x000001c4 + iVar36));
          }
          puVar25 = puVar25 + 6;
          piVar32 = piVar32 + 6;
          *(int *)(&stack0x0000000c + iVar36) = *(int *)(&stack0x0000000c + iVar36) + 1;
        }
        if (0 < iVar7) {
          gotEventValue(this,(void *)**(undefined4 **)(iVar42 + DAT_0012fd64),this);
        }
        **(undefined4 **)(&stack0x00000010 + iVar36) = 0;
        iVar26 = DAT_0012fd84 + 0x12fb80;
      }
      *(undefined4 *)(iVar26 + 0x74) = 4;
      FUN_0012ff22();
      return;
    }
    if (*(int *)(this + 0x1fc) == 0) {
      getEventValue(this,(void *)**(undefined4 **)(iVar42 + DAT_0012fd64),this);
      uVar23 = 1;
    }
    else {
      if (*(int *)(this + 0x1fc) != 1) {
        FUN_0012ff22();
        return;
      }
      uVar23 = 4;
    }
    *(undefined4 *)(this + 0x1fc) = uVar23;
    FUN_0012ff22();
    return;
  }
  FUN_0012ff22();
  return;
}


