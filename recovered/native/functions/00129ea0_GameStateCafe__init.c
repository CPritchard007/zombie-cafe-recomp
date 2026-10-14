/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00129ea0 GameStateCafe::init */

/* WARNING: Removing unreachable block (ram,0x0012b95a) */
/* GameStateCafe::init() */

void __thiscall GameStateCafe::init(GameStateCafe *this)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  GameStateBackupSelection *this_00;
  InputStream *pIVar5;
  int iVar6;
  undefined4 uVar7;
  ZombieCafe *this_01;
  CapcomOrderableList<Furniture*> *pCVar8;
  Furniture *pFVar9;
  long lVar10;
  ScreenElement *pSVar11;
  NoticeDialog *pNVar12;
  ConfirmDialog *this_02;
  EquipInfoDialog *this_03;
  MessageElement *this_04;
  ZCImageButton *pZVar13;
  HudElement *this_05;
  PullMenuElement *this_06;
  HCOManager *this_07;
  FoodStack *pFVar14;
  MessageWithToxin *pMVar15;
  BuyToxinDialog *this_08;
  FrequentFryerDialog *this_09;
  CharacterCommandBar *this_10;
  CookCommandBar *this_11;
  TombstoneCommandBar *this_12;
  PlantCommandBar *this_13;
  Storage *this_14;
  CharacterDetails *this_15;
  Store *this_16;
  RecipeBook *this_17;
  TutorialArrow *pTVar16;
  FridgeDialog *this_18;
  PendingOrderDialog *this_19;
  ObjectiveCompleteDialog *this_20;
  ObjectiveDialog *this_21;
  undefined4 uVar17;
  size_t sVar18;
  CafeObject *pCVar19;
  undefined4 uVar20;
  ImageElement *this_22;
  BitmapTextElement *pBVar21;
  ScreenshotTaker *this_23;
  int extraout_r1;
  code *pcVar22;
  int iVar23;
  int iVar24;
  char *pcVar25;
  int iVar26;
  int *piVar27;
  Cafe *pCVar28;
  GameStateCafe *pGVar29;
  String *pSVar30;
  char *pcVar31;
  CapcomGame *this_24;
  int iVar32;
  undefined4 *puVar33;
  undefined4 uVar34;
  int *piVar35;
  int iVar36;
  undefined4 uVar37;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s1;
  undefined8 uVar38;
  String aSStack_194 [8];
  String aSStack_18c [8];
  String aSStack_184 [8];
  String aSStack_17c [8];
  String aSStack_174 [8];
  String aSStack_16c [8];
  String aSStack_164 [8];
  String aSStack_15c [8];
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  CapcomDate aCStack_12c [2];
  char cStack_12a;
  CapcomDate aCStack_124 [2];
  undefined1 uStack_122;
  char acStack_11c [256];
  int local_1c;
  
  iVar24 = DAT_0012a15c + 0x129eac;
  piVar35 = *(int **)(iVar24 + DAT_0012a160);
  local_1c = *piVar35;
  pcVar25 = (char *)(DAT_0012a168 + 0x129ec8);
  pcVar31 = (char *)(DAT_0012a16c + 0x129ecc);
  CCOptions::SetBool(*(CCOptions **)(*(uint *)(this + 0xc) + 0xa00),
                     (void *)(DAT_0012a164 + 0x129eca),(char *)0x1,*(uint *)(this + 0xc));
  L_PrintLog(pcVar25,pcVar31);
  L_PrintLog((char *)(DAT_0012a170 + 0x129ede),(char *)(DAT_0012a174 + 0x129ee0));
  L_PrintLog(pcVar25,pcVar31);
  L_PrintLog(pcVar25,pcVar31);
  L_PrintLog(pcVar25,pcVar31);
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_0012a178) = 1;
  iVar6 = DAT_0012a180;
  this_24 = (CapcomGame *)0x0;
  FontManager::dbgPrintFontArr((FontManager *)**(undefined4 **)(iVar24 + DAT_0012a17c));
  *(undefined4 *)(this + 0xcc) = 0;
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  L_PrintLog((char *)(DAT_0012a184 + 0x129f28),(char *)(iVar6 + 0x129f24));
  ZombieCafe::loadRecipeImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadShopImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadFurnitureImages(*(ZombieCafe **)(this + 0xc));
  L_PrintLog((char *)(DAT_0012a188 + 0x129f44),(char *)(iVar6 + 0x129f24));
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 2;
  if (*(char *)(DAT_0012a18c + 0x129fac) == '\0') {
    L_PrintLog((char *)(DAT_0012a190 + 0x129f6a),(char *)(DAT_0012a194 + 0x129f6c));
    this_24 = *(CapcomGame **)(this + 0xc);
    this_00 = (GameStateBackupSelection *)operator_new(0x6c);
    GameStateBackupSelection::GameStateBackupSelection(this_00);
    CapcomGame::setNextState(this_24,(GameState *)this_00);
    FUN_0012b9e6(0);
  }
  *(CapcomGame **)(this + 0x1fc) = this_24;
  if (*(int *)(DAT_0012a198 + 0x12a00a) == 4) {
    *(CapcomGame **)(DAT_0012a198 + 0x12a00a) = this_24;
  }
  iVar6 = DAT_0012a1a4;
  L_PrintLog((char *)(DAT_0012a19c + 0x129fa6),(char *)(DAT_0012a1a0 + 0x129fa8));
  iVar26 = DAT_0012a1ac;
  *(undefined1 *)(DAT_0012a1a8 + 0x12a004) = 0;
  L_PrintLog((char *)(iVar26 + 0x129fbc),(char *)(iVar6 + 0x129fb8));
  String::String(aSStack_194,(char *)(iVar6 + 0x129fb8));
  pIVar5 = (InputStream *)SaveDataInputStream::open(aSStack_194);
  String::~String(aSStack_194);
  if (pIVar5 != (InputStream *)0x0) {
    iVar26 = *(int *)(this + 0xc);
    iVar6 = Cafe::deserialize(pIVar5,false,(ZombieCafe *)0x0);
    *(int *)(this + 0x14) = iVar6;
    *(int *)(iVar26 + 0x7e8) = iVar6;
    if (iVar6 != 0) {
      FUN_0012bb7e();
    }
  }
  pcVar25 = (char *)(DAT_0012a1b0 + 0x129ffe);
  L_PrintLog(pcVar25,pcVar25);
  L_PrintLog((char *)(DAT_0012a1b4 + 0x12a00c),(char *)(DAT_0012a1b8 + 0x12a00e));
  L_PrintLog(pcVar25,pcVar25);
  iVar26 = *(int *)(this + 0xc);
  uVar7 = Cafe::createForNewPlayer();
  iVar6 = DAT_0012a1bc;
  *(undefined4 *)(this + 0x14) = uVar7;
  *(undefined4 *)(iVar26 + 0x7e8) = uVar7;
  iVar36 = **(int **)(iVar24 + iVar6);
  iVar32 = **(int **)(iVar24 + DAT_0012a1c0);
  iVar6 = iVar32 + 1;
  addStove(this,*(Cafe **)(this + 0x14),**(int **)(iVar24 + DAT_0012a1c4),iVar36 + -7,iVar6);
  iVar26 = iVar36 + -5;
  addFurniture(this,*(Cafe **)(this + 0x14),**(int **)(iVar24 + DAT_0012a1c8),iVar26,iVar6);
  addFurniture(this,*(Cafe **)(this + 0x14),**(int **)(iVar24 + DAT_0012a1cc),iVar36 + -4,iVar6);
  addFurniture(this,*(Cafe **)(this + 0x14),**(int **)(iVar24 + DAT_0012a1d0),iVar36 + -7,iVar32 + 6
              );
  piVar27 = *(int **)(iVar24 + DAT_0012a1d4);
  addServingCounter(this,*(Cafe **)(this + 0x14),*piVar27,iVar26,iVar32 + 3);
  addServingCounter(this,*(Cafe **)(this + 0x14),*piVar27,iVar26,iVar32 + 4);
  addFurniture(this,*(Cafe **)(this + 0x14),**(int **)(iVar24 + DAT_0012a1d8),iVar36 + -3,iVar32 + 3
              );
  addFurniture(this,*(Cafe **)(this + 0x14),**(int **)(iVar24 + DAT_0012a1dc),iVar36 + -3,iVar32 + 2
              );
  piVar27 = *(int **)(iVar24 + DAT_0012a1e0);
  addWallDecor(this,*(Cafe **)(this + 0x14),*piVar27,iVar36 + -4,iVar6,'\0');
  addWallDecor(this,*(Cafe **)(this + 0x14),*piVar27,iVar36 + -2,iVar6,'\0');
  if (pIVar5 != (InputStream *)0x0) {
    (**(code **)(*(int *)pIVar5 + 0xc))(pIVar5);
    (**(code **)(*(int *)pIVar5 + 4))(pIVar5);
  }
  this_01 = *(ZombieCafe **)(this + 0xc);
  *(undefined1 *)((int)&DAT_0012a428 + DAT_0012a44c) = 1;
  ZombieCafe::backup(this_01);
  checkForTombstones(this);
  ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(this + 0xc));
  this[DAT_0012a450] = (GameStateCafe)0x1;
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_0012a458) = **(undefined4 **)(iVar24 + DAT_0012a454);
  if ((*(char *)(*(int *)(this + 0xc) + DAT_0012a45c) != '\0') &&
     (*(int *)(*(int *)(this + 0xc) + DAT_0012a460) < 1)) {
    pCVar8 = (CapcomOrderableList<Furniture*> *)
             Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\x0e',0);
    *(undefined4 *)(pCVar8 + 0x10) = *(undefined4 *)(pCVar8 + 8);
    while (pFVar9 = (Furniture *)CapcomOrderableList<Furniture*>::nextItem(pCVar8),
          pFVar9 != (Furniture *)0x0) {
      if (*(int *)(*(int *)(pFVar9 + 0x38) + 0x24) == **(int **)(iVar24 + DAT_0012a834)) {
        Cafe::removeFurniture(*(Cafe **)(this + 0x14),pFVar9);
        (**(code **)(*(int *)pFVar9 + 4))(pFVar9);
      }
    }
    CapcomOrderableList<Furniture*>::removeAll(pCVar8);
    operator_delete(pCVar8);
    checkForTombstones(this);
  }
  ZombieCafe::checkTombstoneDayRecovery();
  pCVar28 = *(Cafe **)(this + 0x14);
  lVar10 = Cafe::diamondToStaggeredCoords
                     (**(int **)(iVar24 + DAT_0012a838) + -3,**(int **)(iVar24 + DAT_0012a83c) + 2);
  iVar6 = Cafe::staggeredCoordsToIndex(lVar10);
  lVar10 = Cafe::indexToWorldCoordsCenter(pCVar28,iVar6);
  lVar10 = CFPoint::multiplyf(lVar10,extraout_s0);
  iVar6 = *(int *)(this + 0xc);
  uVar7 = CFPoint::add(lVar10,*(long *)(iVar6 + 0x14));
  *(undefined4 *)(this + 0x1e0) = uVar7;
  uVar7 = PackedImage::getImages(*(PackedImage **)(iVar6 + DAT_0012a840),false);
  *(undefined4 *)(this + 0x1e8) = uVar7;
  uVar7 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x1ec) = uVar7;
  uVar7 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0012a844),true);
  *(undefined4 *)(this + 0x1f0) = uVar7;
  pSVar11 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar11,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x78) = pSVar11;
  pNVar12 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (pNVar12,*(CImage **)(*(int *)(this + 0x1ec) + 0x14),
             *(CImage **)(*(int *)(this + 0x1e8) + 0x28),extraout_s0_00);
  *(NoticeDialog **)(this + 0xd0) = pNVar12;
  (**(code **)(*(int *)pNVar12 + 0x1c))(pNVar12,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0xd0),0x62);
  *(undefined2 *)(this + 0x174) = 0xffff;
  pNVar12 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (pNVar12,*(CImage **)(*(int *)(this + 0x1ec) + 0x14),
             *(CImage **)(*(int *)(this + 0x1e8) + 0x28),extraout_s0_01);
  *(NoticeDialog **)(this + 0xd4) = pNVar12;
  (**(code **)(*(int *)pNVar12 + 0x1c))(pNVar12,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0xd4),0x62);
  this_02 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_02,*(CImage **)(*(int *)(this + 0x1ec) + 0x14),
             *(CImage **)(*(int *)(this + 0x1e8) + 0x28),*(CImage **)(*(int *)(this + 0x1e8) + 0x44)
             ,0,extraout_s0_02,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x80) = this_02;
  (**(code **)(*(int *)this_02 + 0x1c))(this_02,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x80),99);
  this_03 = (EquipInfoDialog *)operator_new(0xa0);
  EquipInfoDialog::EquipInfoDialog
            (this_03,*(CImage **)(*(int *)(this + 0x1ec) + 0x14),
             *(CImage **)(*(int *)(this + 0x1e8) + 0x28),extraout_s0_03);
  *(EquipInfoDialog **)(this + 0x134) = this_03;
  (**(code **)(*(int *)this_03 + 0x1c))(this_03,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x134),99);
  *(undefined4 *)(this + 0x13c) = 0;
  this_04 = (MessageElement *)operator_new(0x90);
  MessageElement::MessageElement(this_04,*(CImage ***)(this + 0x1e8),'\f');
  *(MessageElement **)(this + 0x7c) = this_04;
  pZVar13 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton
            (pZVar13,'\f',*(CImage **)(*(int *)(this + 0x1e8) + 0x154),(CImage *)0x0,0,0,true);
  iVar26 = DAT_0012a84c;
  iVar6 = DAT_0012a848;
  *(ZCImageButton **)(this + 0x170) = pZVar13;
  *(undefined2 *)(this + 0x16c) = 0;
  L_PrintLog((char *)(iVar6 + 0x12a658),(char *)(iVar26 + 0x12a656));
  piVar27 = *(int **)(this + 0x78);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  this_05 = (HudElement *)operator_new(0x16c);
  HudElement::HudElement(this_05,*(_func_bool_void_ptr_int **)(iVar24 + DAT_0012a850),this,true);
  pGVar29 = this + 200;
  *(HudElement **)pGVar29 = this_05;
  (*pcVar22)(piVar27,this_05);
  ScreenElement::setOrder(*(ScreenElement **)pGVar29,(int)**(char **)(iVar24 + DAT_0012a854));
  HudElement::setButtonAvailability(*(int *)pGVar29,false);
  iVar6 = *(int *)pGVar29;
  TutorialSystem::isTutorialCompleted
            (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012a858),'\"');
  HudElement::setButtonAvailability(iVar6,true);
  piVar27 = *(int **)(this + 0x78);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  this_06 = (PullMenuElement *)operator_new(0xfc);
  PullMenuElement::PullMenuElement
            (this_06,*(_func_bool_void_ptr_int **)(iVar24 + DAT_0012a85c),this);
  *(PullMenuElement **)(this + 0xcc) = this_06;
  (*pcVar22)(piVar27,this_06);
  iVar6 = DAT_0012a858;
  iVar26 = *(int *)(this + 0xcc);
  TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012a858),'S')
  ;
  PullMenuElement::setButtonAvailability(iVar26,true);
  HudElement::setButtonAvailability(*(int *)(this + 200),true);
  HudElement::setButtonAvailability(*(int *)(this + 200),true);
  iVar6 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'U');
  if (iVar6 != 0) {
    checkDisplayLotteryButton(this);
    checkDisplayGatyaButton(this);
  }
  checkDisplayEventButton(this);
  checkDisplayMeetLockerButton(this);
  HCOManager::getInstance();
  HCOManager::init();
  this_07 = (HCOManager *)HCOManager::getInstance();
  HCOManager::checkHCOStart(this_07);
  checkDisplaySpecialOfferButton(this);
  iVar6 = *(int *)(this + 0xcc);
  TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012a858),'#')
  ;
  pGVar29 = this + 200;
  PullMenuElement::setButtonAvailability(iVar6,true);
  HudElement::setButtonAvailability(*(int *)pGVar29,true);
  iVar6 = *(int *)(this + 0xcc);
  TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012a858),'W')
  ;
  PullMenuElement::setButtonAvailability(iVar6,true);
  HudElement::setButtonAvailability(*(int *)pGVar29,true);
  HudElement::setButtonAvailability(*(int *)pGVar29,true);
  HudElement::setButtonAvailability(*(int *)pGVar29,true);
  iVar26 = *(int *)pGVar29;
  iVar6 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012a858),'\x0e');
  if (iVar6 == 0) {
    TutorialSystem::isTutorialCompleted
              (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012a858),'\x0f');
  }
  HudElement::setButtonAvailability(iVar26,true);
  iVar6 = DAT_0012a858;
  iVar26 = *(int *)(this + 0xcc);
  TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012a858),'I')
  ;
  PullMenuElement::setButtonAvailability(iVar26,true);
  HudElement::setButtonAvailability(*(int *)(this + 200),true);
  L_PrintLog((char *)(DAT_0012a860 + 0x12a812),(char *)(DAT_0012a864 + 0x12a814));
  ZombieCafe::prunePendingOrders();
  ZombieCafe::prunePendingRaidNotifications();
  iVar26 = *(int *)(this + 200);
  TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'0');
  HudElement::setButtonAvailability(iVar26,true);
  HudElement::setButtonAvailability(*(int *)(this + 200),true);
  iVar6 = *(int *)(this + 200);
  TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012aa08),'*')
  ;
  HudElement::setButtonAvailability(iVar6,true);
  iVar6 = DAT_0012aa10;
  puVar33 = *(undefined4 **)(iVar24 + DAT_0012aa0c);
  ZombieCafe::loadlottery((void *)*puVar33,*(void **)(this + 0xc),-1);
  ZombieCafe::getGameInfo(*(ZombieCafe **)(this + 0xc));
  iVar26 = DAT_0012aa14;
  *(undefined4 *)(this + 500) = 1000;
  L_PrintLog((char *)(iVar6 + 0x12a8dc),(char *)(iVar26 + 0x12a8e2));
  L_PrintLog((char *)(iVar6 + 0x12a8dc),(char *)(DAT_0012aa18 + 0x12a8ee));
  iVar6 = CCOptions::GetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                            (void *)(DAT_0012aa1c + 0x12a8fc),(char *)0xffffffff,
                            *(int *)(this + 0xc));
  iVar26 = CCOptions::GetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                             (void *)(DAT_0012aa20 + 0x12a90c),(char *)0xffffffff,
                             *(int *)(this + 0xc));
  if ((iVar6 != -1) &&
     (iVar32 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(this + 0xc)), iVar32 != 0)) {
    iVar36 = *(int *)(this + 0xc);
    iVar32 = 0;
    if ((-1 < iVar6) &&
       (iVar23 = *(byte *)(iVar36 + DAT_0012aa24) - 1, iVar32 = iVar6, iVar23 < iVar6)) {
      iVar32 = iVar23;
    }
    if (9 < iVar26) {
      iVar26 = 9;
    }
    pFVar14 = (FoodStack *)operator_new(0x24);
    FoodStack::FoodStack
              (pFVar14,(uchar)iVar32,(char)~(byte)((uint)iVar26 >> 0x18) >> 7 & (byte)iVar26);
    Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar36 + DAT_0012aa28),pFVar14);
    if (*(int *)(*(int *)(this + 0xc) + 0x680) < 8) {
      uVar7 = __floatsisf(*(undefined4 *)(pFVar14 + 4));
      __mulsf3(uVar7,**(undefined4 **)(iVar24 + DAT_0012aa2c));
      uVar7 = __fixsfsi();
      *(undefined4 *)(pFVar14 + 4) = uVar7;
    }
    else {
      uVar7 = arc4random();
      __aeabi_uidivmod(uVar7,0x14);
      *(int *)(pFVar14 + 4) = extraout_r1 + 10;
    }
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012aa08),'#',false);
    pCVar8 = (CapcomOrderableList<Furniture*> *)
             Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\b',0);
    *(undefined4 *)(pCVar8 + 0x10) = *(undefined4 *)(pCVar8 + 8);
    do {
      iVar6 = CapcomOrderableList<Furniture*>::nextItem(pCVar8);
    } while (iVar6 == 0);
    *(undefined1 *)(iVar6 + 0x46) = 1;
    CapcomOrderableList<Furniture*>::removeAll(pCVar8);
    operator_delete(pCVar8);
  }
  CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),(void *)(DAT_0012aa30 + 0x12a9e8),
                    (char *)0xffffffff,*(int *)(this + 0xc));
  CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),(void *)(DAT_0012aa34 + 0x12a9fa),
                    (char *)0xffffffff,*(int *)(this + 0xc));
  while( true ) {
    iVar6 = *(int *)(this + 0xc);
    if (*(int *)((Vector<FoodStack*> *)(iVar6 + DAT_0012adec) + 4) < 0) break;
    pFVar14 = (FoodStack *)
              Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(iVar6 + DAT_0012adec),0);
    if (pFVar14 != (FoodStack *)0x0) {
      FoodStack::~FoodStack(pFVar14);
      operator_delete(pFVar14);
    }
  }
  iVar6 = CCOptions::GetInt(*(CCOptions **)(iVar6 + 0xa00),(void *)(DAT_0012adf0 + 0x12aa68),
                            (char *)0xffffffff,iVar6);
  if (-1 < iVar6) {
    iVar26 = ZombieCafe::addAmpouleToStorage(*(ZombieCafe **)(this + 0xc),iVar6);
    if (8 < iVar26) {
      memset(acStack_11c,0,0x100);
      String::String(aSStack_18c,
                     (String *)(*(int *)(iVar6 * 4 + *(int *)(*(int *)(this + 0x14) + 0x94)) + 0x2c)
                    );
      operator+(aSStack_184,DAT_0012adf4 + 0x12aaa4,aSStack_18c);
      String::operator+(aSStack_17c,(char *)aSStack_184);
      pMVar15 = (MessageWithToxin *)operator_new(0x14);
      MessageWithToxin::MessageWithToxin(pMVar15,aSStack_17c,0,0);
      Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(this + 0x178),pMVar15);
      String::~String(aSStack_17c);
      String::~String(aSStack_184);
      String::~String(aSStack_18c);
    }
    CCOptions::SetInt(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),
                      (void *)(DAT_0012adfc + 0x12aaf4),(char *)0xffffffff,*(int *)(this + 0xc));
  }
  L_PrintLog((char *)(DAT_0012ae00 + 0x12aafe),(char *)(DAT_0012ae04 + 0x12ab00));
  this_08 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_08);
  iVar6 = DAT_0012ae08;
  pGVar29 = this + 0x8c;
  *(BuyToxinDialog **)pGVar29 = this_08;
  ScreenElement::setOrder((ScreenElement *)this_08,(int)**(char **)(iVar24 + iVar6));
  (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)pGVar29);
  (**(code **)(**(int **)pGVar29 + 0x1c))(*(int **)pGVar29,0x12);
  (**(code **)(**(int **)pGVar29 + 0x20))(*(int **)pGVar29,0);
  iVar6 = *(int *)pGVar29;
  *(undefined4 *)(iVar6 + 0xb0) = *(undefined4 *)(iVar24 + DAT_0012ae0c);
  *(GameStateCafe **)(iVar6 + 0xb4) = this;
  this_09 = (FrequentFryerDialog *)operator_new(0x1a0);
  FrequentFryerDialog::FrequentFryerDialog(this_09);
  iVar6 = DAT_0012ae10;
  pGVar29 = this + 0x90;
  *(FrequentFryerDialog **)pGVar29 = this_09;
  ScreenElement::setOrder((ScreenElement *)this_09,(int)**(char **)(iVar24 + iVar6));
  (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)pGVar29);
  (**(code **)(**(int **)pGVar29 + 0x1c))(*(int **)pGVar29,0x12);
  (**(code **)(**(int **)pGVar29 + 0x20))(*(int **)pGVar29,0);
  piVar27 = *(int **)(this + 0x78);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  this_10 = (CharacterCommandBar *)operator_new(0xd8);
  CharacterCommandBar::CharacterCommandBar
            (this_10,*(ConfirmDialog **)(this + 0x80),*(BuyToxinDialog **)(this + 0x8c));
  *(CharacterCommandBar **)(this + 0xac) = this_10;
  (*pcVar22)(piVar27,this_10);
  (**(code **)(**(int **)(this + 0xac) + 0x1c))(*(int **)(this + 0xac),0x11);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0xac),(int)**(char **)(iVar24 + DAT_0012ae14));
  piVar27 = *(int **)(this + 0x78);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  this_11 = (CookCommandBar *)operator_new(0xd4);
  CookCommandBar::CookCommandBar
            (this_11,*(ConfirmDialog **)(this + 0x80),*(NoticeDialog **)(this + 0xd0),
             *(BuyToxinDialog **)(this + 0x8c),
             *(_func_void_void_ptr_Stove_ptr **)(iVar24 + DAT_0012ae18),this,
             *(_func_void_void_ptr_Stove_ptr **)(iVar24 + DAT_0012ae1c),this,
             *(_func_void_void_ptr_Stove_ptr **)(iVar24 + DAT_0012ae20),this);
  pGVar29 = this + 0xb4;
  *(CookCommandBar **)pGVar29 = this_11;
  (*pcVar22)(piVar27,this_11);
  (**(code **)(**(int **)pGVar29 + 0x1c))(*(int **)pGVar29,0x11);
  pcVar25 = *(char **)(iVar24 + DAT_0012ae24);
  ScreenElement::setOrder(*(ScreenElement **)pGVar29,(int)*pcVar25);
  piVar27 = *(int **)(this + 0x78);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  this_12 = (TombstoneCommandBar *)operator_new(0xa0);
  TombstoneCommandBar::TombstoneCommandBar
            (this_12,*(ConfirmDialog **)(this + 0x80),*(BuyToxinDialog **)(this + 0x8c),
             *(NoticeDialog **)(this + 0xd0));
  pGVar29 = this + 0xc0;
  *(TombstoneCommandBar **)pGVar29 = this_12;
  (*pcVar22)(piVar27,this_12);
  (**(code **)(**(int **)pGVar29 + 0x1c))(*(int **)pGVar29,0x11);
  ScreenElement::setOrder(*(ScreenElement **)pGVar29,(int)**(char **)(iVar24 + DAT_0012ae28));
  piVar27 = *(int **)(this + 0x78);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  this_13 = (PlantCommandBar *)operator_new(0xec);
  PlantCommandBar::PlantCommandBar
            (this_13,*(ConfirmDialog **)(this + 0x80),*(NoticeDialog **)(this + 0xd0),
             *(_func_void_void_ptr_int **)(iVar24 + DAT_0012ae2c),this,
             *(_func_void_void_ptr_int **)(iVar24 + DAT_0012ae30),this,
             *(_func_void_void_ptr_Furniture_ptr **)(iVar24 + DAT_0012ae34),this);
  pGVar29 = this + 0xb8;
  *(PlantCommandBar **)pGVar29 = this_13;
  (*pcVar22)(piVar27,this_13);
  (**(code **)(**(int **)pGVar29 + 0x1c))(*(int **)pGVar29,0x11);
  ScreenElement::setOrder(*(ScreenElement **)pGVar29,(int)*pcVar25);
  piVar27 = *(int **)(this + 0x78);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  this_14 = (Storage *)operator_new(0xf4);
  Storage::Storage(this_14,*(CImage ***)(this + 0x1e8),
                   *(FurnitureData ***)(*(int *)(this + 0x14) + 0x94),
                   *(short *)(*(int *)(this + 0x14) + 0x90),*(NoticeDialog **)(this + 0xd0));
  pGVar29 = this + 0xbc;
  *(Storage **)pGVar29 = this_14;
  (*pcVar22)(piVar27,this_14);
  (**(code **)(**(int **)pGVar29 + 0x1c))(*(int **)pGVar29,0x11);
  ScreenElement::setOrder(*(ScreenElement **)pGVar29,(int)**(char **)(iVar24 + DAT_0012ae38));
  this_15 = (CharacterDetails *)operator_new(0x194);
  CharacterDetails::CharacterDetails
            (this_15,(Vector *)(*(int *)(this + 0xc) + DAT_0012ae3c),true,
             *(ConfirmDialog **)(this + 0x80),(NoticeDialog *)0x0,this,'\0',false);
  pGVar29 = this + 0xb0;
  *(CharacterDetails **)pGVar29 = this_15;
  (**(code **)(*(int *)this_15 + 0x1c))(this_15,0x12);
  (**(code **)(**(int **)pGVar29 + 0x20))(*(int **)pGVar29,0);
  ScreenElement::setOrder(*(ScreenElement **)pGVar29,(int)**(char **)(iVar24 + DAT_0012ae40));
  (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)pGVar29);
  piVar27 = *(int **)(this + 0x78);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  this_16 = (Store *)operator_new(0xdc);
  Store::Store(this_16,*(CImage ***)(this + 0x1e8),
               *(FurnitureData ***)(*(int *)(this + 0x14) + 0x94),
               *(short *)(*(int *)(this + 0x14) + 0x90),*(NoticeDialog **)(this + 0xd0),this);
  *(Store **)(this + 0x84) = this_16;
  (*pcVar22)(piVar27,this_16);
  (**(code **)(**(int **)(this + 0x84) + 0x1c))(*(int **)(this + 0x84),0x11);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x84),(int)**(char **)(iVar24 + DAT_0012ae44));
  this_17 = (RecipeBook *)operator_new(0x174);
  RecipeBook::RecipeBook
            (this_17,*(CImage ***)(this + 0x1e8),*(CImage ***)(this + 0x1f0),
             *(NoticeDialog **)(this + 0xd0),*(ConfirmDialog **)(this + 0x80),false,
             *(uchar **)(*(int *)(this + 0xc) + 0x1c),'\x12');
  iVar6 = DAT_0012b1e4;
  *(RecipeBook **)(this + 0x94) = this_17;
  ScreenElement::setOrder((ScreenElement *)this_17,(int)**(char **)(iVar24 + iVar6));
  (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)(this + 0x94))
  ;
  pTVar16 = (TutorialArrow *)operator_new(0x7c);
  TutorialArrow::TutorialArrow(pTVar16);
  iVar6 = DAT_0012b1e8;
  pGVar29 = this + 0xc4;
  *(TutorialArrow **)pGVar29 = pTVar16;
  ScreenElement::setOrder((ScreenElement *)pTVar16,(int)**(char **)(iVar24 + iVar6));
  iVar6 = DAT_0012b1ec;
  (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)pGVar29);
  this_18 = (FridgeDialog *)operator_new(0x104);
  uVar7 = 0x12;
  pTVar16 = *(TutorialArrow **)pGVar29;
  FridgeDialog::FridgeDialog
            (this_18,(Vector *)(*(int *)(this + 0xc) + iVar6),*(CImage ***)(this + 0x1e8),
             *(CImage ***)(this + 0x1f0),'\x12',pTVar16,*(ConfirmDialog **)(this + 0x80),
             *(NoticeDialog **)(this + 0xd0),false);
  iVar6 = DAT_0012b1f0;
  *(FridgeDialog **)(this + 0x9c) = this_18;
  ScreenElement::setOrder((ScreenElement *)this_18,(int)**(char **)(iVar24 + iVar6));
  (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)(this + 0x9c))
  ;
  L_PrintLog((char *)(DAT_0012b1f4 + 0x12af2c),(char *)(DAT_0012b1f8 + 0x12af2e));
  this_19 = (PendingOrderDialog *)operator_new(0xec);
  PendingOrderDialog::PendingOrderDialog(this_19,this);
  pGVar29 = this + 0xa0;
  *(PendingOrderDialog **)pGVar29 = this_19;
  (**(code **)(*(int *)this_19 + 0x1c))(this_19,0x12);
  ScreenElement::setOrder(*(ScreenElement **)pGVar29,(int)**(char **)(iVar24 + DAT_0012b1fc));
  (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)pGVar29);
  *(undefined4 *)(this + 0xa4) = 0;
  this_20 = (ObjectiveCompleteDialog *)operator_new(0xb4);
  ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_20);
  *(ObjectiveCompleteDialog **)(this + 0x128) = this_20;
  (**(code **)(*(int *)this_20 + 0x1c))(this_20,0x12);
  FUN_00118458(*(undefined4 *)(this + 0x128),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x128),(int)**(char **)(iVar24 + DAT_0012b200))
  ;
  (**(code **)(**(int **)(this + 0x128) + 0x20))(*(int **)(this + 0x128),0);
  (**(code **)(**(int **)(this + 0x78) + 0x2c))
            (*(int **)(this + 0x78),*(undefined4 *)(this + 0x128));
  this_21 = (ObjectiveDialog *)operator_new(0x16c);
  ObjectiveDialog::ObjectiveDialog
            (this_21,*(ConfirmDialog **)(this + 0x80),*(ObjectiveCompleteDialog **)(this + 0x128),
             *(BuyToxinDialog **)(this + 0x8c));
  *(ObjectiveDialog **)(this + 0x124) = this_21;
  (**(code **)(*(int *)this_21 + 0x1c))(this_21,0x12);
  FUN_00118458(*(undefined4 *)(this + 0x124),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x124),(int)**(char **)(iVar24 + DAT_0012b204))
  ;
  (**(code **)(**(int **)(this + 0x124) + 0x20))(*(int **)(this + 0x124),0);
  (**(code **)(**(int **)(this + 0x78) + 0x2c))
            (*(int **)(this + 0x78),*(undefined4 *)(this + 0x124));
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  if ((*(int *)(*(int *)(this + 0x14) + 0xe8) != **(int **)(iVar24 + DAT_0012b208)) ||
     (*(int *)(*(int *)(this + 0x14) + 0xec) != **(int **)(iVar24 + DAT_0012b20c))) {
    lVar10 = Cafe::worldToDiamondCoords(*(long *)(*(int *)(*(int *)(this + 0xc) + 0x590) + 0x48));
    lVar10 = Cafe::diamondToStaggeredCoords(lVar10);
    pCVar28 = *(Cafe **)(this + 0x14);
    lVar10 = CFPoint::add(lVar10,CONCAT22(*(undefined2 *)(pCVar28 + 0xf4),
                                          *(undefined2 *)(pCVar28 + 0xf8)));
    iVar6 = Cafe::staggeredCoordsToIndex(lVar10);
    uVar17 = Cafe::indexToWorldCoordsCenter(pCVar28,iVar6);
    *(undefined4 *)(*(int *)(*(int *)(this + 0xc) + 0x590) + 0x48) = uVar17;
  }
  iVar6 = ZombieCafe::checkNickNameEntry((void *)*puVar33);
  pcVar25 = *(char **)(iVar24 + DAT_0012b210);
  if (iVar6 == 0) {
    pcVar31 = (char *)(DAT_0012b230 + 0x12b0f4);
    L_PrintLog(pcVar31,(char *)(DAT_0012b234 + 0x12b0f8));
    sprintf(acStack_11c,(char *)(DAT_0012b238 + 0x12b104),pcVar25);
    L_PrintLog(pcVar31,acStack_11c);
    sVar18 = strlen(pcVar25);
    pSVar30 = (String *)(*(int *)(*(int *)(this + 0xc) + 0x590) + 8);
    if (sVar18 < 4) {
      Vector<String>::elementAt((int)aSStack_164);
      String::operator=(pSVar30,aSStack_164);
      pSVar30 = aSStack_164;
    }
    else {
      String::String(aSStack_16c,pcVar25);
      String::operator=(pSVar30,aSStack_16c);
      pSVar30 = aSStack_16c;
    }
  }
  else {
    L_PrintLog((char *)(DAT_0012b214 + 0x12b094),(char *)(DAT_0012b218 + 0x12b096));
    pcVar31 = *(char **)(iVar24 + DAT_0012b21c);
    strcpy(pcVar25,pcVar31);
    L_PrintLog((char *)(DAT_0012b220 + 0x12b0ae),pcVar31);
    pcVar31 = *(char **)(iVar24 + DAT_0012b228);
    strcpy(*(char **)(iVar24 + DAT_0012b224),pcVar31);
    L_PrintLog((char *)(DAT_0012b22c + 0x12b0c8),pcVar31);
    ZombieCafe::setServerNickName((void *)*puVar33);
    iVar6 = *(int *)(*(int *)(this + 0xc) + 0x590);
    String::String(aSStack_174,pcVar25);
    String::operator=((String *)(iVar6 + 8),aSStack_174);
    pSVar30 = aSStack_174;
  }
  String::~String(pSVar30);
  iVar6 = DAT_0012b248;
  L_PrintLog((char *)(DAT_0012b240 + 0x12b15e),(char *)(DAT_0012b244 + 0x12b160));
  pCVar19 = (CafeObject *)createAvatarInstance(this);
  *(CafeObject **)(this + 0x18) = pCVar19;
  Cafe::addCafeObject(*(Cafe **)(this + 0x14),pCVar19);
  iVar6 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'\x16');
  if (iVar6 == 0) {
    iVar6 = *(int *)(this + 0x18);
    lVar10 = Cafe::diamondToStaggeredCoords
                       (**(int **)(iVar24 + DAT_0012b6a4) + -1,
                        **(int **)(iVar24 + DAT_0012b6a8) + 1 + **(int **)(iVar24 + DAT_0012b6ac));
    uVar4 = Cafe::staggeredCoordsToIndex(lVar10);
    *(undefined2 *)(iVar6 + 0x2c) = uVar4;
    piVar27 = *(int **)(this + 0x18);
    pcVar22 = *(code **)(*piVar27 + 0xc);
    uVar7 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x14),(int)(short)piVar27[0xb]);
    (*pcVar22)(piVar27,uVar7);
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x18),'\x01','\x01',false)
    ;
  }
  else {
    *(undefined4 *)(this + 0x1a0) = 0;
    advanceTime(CONCAT44(pTVar16,uVar7));
    advanceCharacter(this,*(CharacterInstance **)(this + 0x18),CONCAT44(pTVar16,uVar7));
    iVar6 = DAT_0012b24c;
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x14) + 0x20),
               *(CafeObject **)(this + 0x18));
    sprintf(acStack_11c,(char *)(DAT_0012b254 + 0x12b1bc),
            *(int *)(*(int *)(this + 0xc) + DAT_0012b250 + 4) + 1);
    L_PrintLog((char *)(DAT_0012b258 + 0x12b1ca),acStack_11c);
    for (iVar26 = 0; iVar26 < *(int *)(*(int *)(this + 0xc) + DAT_0012b2b8 + 4) + 1;
        iVar26 = iVar26 + 1) {
      pCVar19 = *(CafeObject **)(iVar26 * 4 + *(int *)(this + 0x24));
      if (pCVar19 == (CafeObject *)0x0) {
        pcVar31 = (char *)(DAT_0012b2b0 + 0x12b26c);
        pcVar25 = (char *)(iVar6 + 0x12b1b6);
      }
      else {
        pcVar31 = &UNK_0012b1e2 + DAT_0012b260;
        pcVar25 = (char *)(DAT_0012b25c + 0x12b1e0);
      }
      L_PrintLog(pcVar25,pcVar31);
      advanceCharacter(this,(CharacterInstance *)pCVar19,CONCAT44(pTVar16,uVar7));
      *(undefined4 *)(pCVar19 + 0xac) = **(undefined4 **)(iVar24 + DAT_0012b2b4);
      CapcomOrderableList<CafeObject*>::sort
                ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x14) + 0x20),pCVar19);
    }
    advanceStoves(CONCAT44(pTVar16,uVar7));
  }
  resetCustomerTimer(this);
  iVar6 = *(int *)(*(int *)(this + 0xc) + DAT_0012b6b0);
  uVar7 = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)(iVar6 + DAT_0012b6b4) = *(undefined4 *)(this + 0x7c);
  *(undefined4 *)(iVar6 + 0x788) = uVar7;
  *(undefined4 *)(iVar6 + 0x778) = *(undefined4 *)(iVar24 + DAT_0012b6b8);
  *(GameStateCafe **)(iVar6 + DAT_0012b6bc) = this;
  this[DAT_0012b6c0] = (GameStateCafe)0x1;
  iVar6 = CapcomApp::getInstance();
  uVar7 = *(undefined4 *)(iVar6 + 0x40);
  iVar6 = CapcomApp::getInstance();
  uVar17 = *(undefined4 *)(iVar6 + 0x40);
  iVar6 = CapcomApp::getInstance();
  uVar20 = *(undefined4 *)(iVar6 + 0x50);
  iVar6 = CapcomApp::getInstance();
  uVar34 = *(undefined4 *)(iVar6 + 0x44);
  iVar6 = CapcomApp::getInstance();
  uVar37 = *(undefined4 *)(iVar6 + 0x50);
  pSVar11 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar11,(ScreenElement *)0x0);
  bVar3 = (bool)__mulsf3(uVar34,uVar37);
  *(ScreenElement **)(this + 0xe0) = pSVar11;
  (**(code **)(*(int *)pSVar11 + 0x1c))(pSVar11,0x14);
  piVar27 = *(int **)(this + 0xe0);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  this_22 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (this_22,*(CImage **)(*(int *)(this + 0x1e8) + 0x68),extraout_s0_04,extraout_s1,
             (uchar)uVar7,bVar3);
  *(ImageElement **)(this + 0xe4) = this_22;
  (*pcVar22)(piVar27,this_22);
  piVar27 = *(int **)(this + 0xe0);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  pZVar13 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton
            (pZVar13,'!',*(CImage **)(*(int *)(this + 0x1e8) + 0x2c),(CImage *)0x0,0,0,false);
  __mulsf3(uVar17,uVar20);
  *(ZCImageButton **)(this + 0xe8) = pZVar13;
  uVar38 = (*pcVar22)(piVar27,pZVar13);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xe8),(float)uVar38,(float)((ulonglong)uVar38 >> 0x20));
  piVar27 = *(int **)(this + 0xe0);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  pZVar13 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton
            (pZVar13,'!',*(CImage **)(*(int *)(this + 0x1e8) + 0x48),(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xf0) = pZVar13;
  uVar38 = (*pcVar22)(piVar27,pZVar13);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xf0),(float)uVar38,(float)((ulonglong)uVar38 >> 0x20));
  pcVar22 = *(code **)(**(int **)(this + 0xe8) + 0x2c);
  Vector<String>::elementAt((int)aSStack_15c);
  iVar26 = *(int *)(this + 0xc);
  iVar6 = SmDev();
  uVar7 = *(undefined4 *)((*(int *)(DAT_0012b6c8 + iVar6 * 4 + 0x12b4c8) + 0x136) * 4 + iVar26);
  iVar6 = *(int *)(this + 0xe8);
  uVar20 = *(undefined4 *)(iVar6 + 0x10);
  uVar17 = *(undefined4 *)(iVar6 + 0xc);
  pBVar21 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar21,aSStack_15c,uVar7,0xffffffff,0,0,0,uVar17,uVar20,9,0,0);
  *(BitmapTextElement **)(this + 0xf4) = pBVar21;
  (*pcVar22)(iVar6,pBVar21);
  String::~String(aSStack_15c);
  iVar6 = DAT_0012b6cc;
  *(undefined1 *)(*(int *)(this + 0xf4) + 0x7f) = 0x12;
  pcVar22 = *(code **)(**(int **)(this + 0xf0) + 0x2c);
  String::String(aSStack_154,(char *)(iVar6 + 0x12b4de));
  iVar26 = *(int *)(this + 0xc);
  iVar6 = SmDev();
  uVar7 = *(undefined4 *)((*(int *)(DAT_0012b6d0 + iVar6 * 4 + 0x12b54a) + 0x136) * 4 + iVar26);
  iVar6 = *(int *)(this + 0xf0);
  uVar20 = *(undefined4 *)(iVar6 + 0x10);
  uVar17 = *(undefined4 *)(iVar6 + 0xc);
  pBVar21 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar21,aSStack_154,uVar7,0xffffffff,0,0,0,uVar17,uVar20,9,0,0);
  *(BitmapTextElement **)(this + 0x104) = pBVar21;
  (*pcVar22)(iVar6,pBVar21);
  String::~String(aSStack_154);
  *(undefined1 *)(*(int *)(this + 0x104) + 0x7f) = 0x12;
  piVar27 = *(int **)(this + 0xe0);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  pZVar13 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton
            (pZVar13,'!',*(CImage **)(*(int *)(this + 0x1e8) + 0x18),(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xec) = pZVar13;
  uVar38 = (*pcVar22)(piVar27,pZVar13);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xec),(float)uVar38,(float)((ulonglong)uVar38 >> 0x20));
  piVar27 = *(int **)(this + 0xe0);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  String::String(aSStack_14c,0);
  iVar26 = *(int *)(this + 0xc);
  iVar6 = SmDev();
  uVar7 = *(undefined4 *)((*(int *)(DAT_0012b6d4 + iVar6 * 4 + 0x12b624) + 0x136) * 4 + iVar26);
  pBVar21 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar21,aSStack_14c,uVar7,0xffffffff,0,1,0xc,0,0);
  *(BitmapTextElement **)(this + 0xf8) = pBVar21;
  (*pcVar22)(piVar27,pBVar21);
  String::~String(aSStack_14c);
  piVar27 = *(int **)(this + 0xe0);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  String::String(aSStack_144,0);
  iVar26 = *(int *)(this + 0xc);
  iVar6 = SmDev();
  uVar7 = *(undefined4 *)((*(int *)(DAT_0012b6d8 + iVar6 * 4 + 0x12b688) + 0x136) * 4 + iVar26);
  iVar6 = SmDev();
  uVar1 = *(undefined1 *)(DAT_0012b6dc + iVar6 + 0x12b636);
  pBVar21 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar21,aSStack_144,uVar7,0xffffffff,0,0,9,uVar1,1);
  *(BitmapTextElement **)(this + 0x108) = pBVar21;
  (*pcVar22)(piVar27,pBVar21);
  String::~String(aSStack_144);
  piVar27 = *(int **)(this + 0xe0);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  String::String(aSStack_13c,0);
  iVar26 = *(int *)(this + 0xc);
  iVar6 = SmDev();
  uVar7 = *(undefined4 *)((*(int *)(DAT_0012b6e0 + iVar6 * 4 + 0x12b6f8) + 0x136) * 4 + iVar26);
  pBVar21 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar21,aSStack_13c,uVar7,0xffffffff,0,1,0x21,0,0);
  *(BitmapTextElement **)(this + 0x100) = pBVar21;
  (*pcVar22)(piVar27,pBVar21);
  String::~String(aSStack_13c);
  *(undefined1 *)(*(int *)(this + 0x100) + 0x7f) = 0x21;
  piVar27 = *(int **)(this + 0xe0);
  pcVar22 = *(code **)(*piVar27 + 0x2c);
  String::String(aSStack_134,0);
  iVar26 = *(int *)(this + 0xc);
  iVar6 = SmDev();
  uVar7 = *(undefined4 *)((*(int *)(DAT_0012ba7c + iVar6 * 4 + 0x12b7a8) + 0x136) * 4 + iVar26);
  pBVar21 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar21,aSStack_134,uVar7,0xffffffff,0,1,0x21,0,0);
  *(BitmapTextElement **)(this + 0xfc) = pBVar21;
  (*pcVar22)(piVar27,pBVar21);
  String::~String(aSStack_134);
  iVar26 = DAT_0012ba84;
  iVar6 = DAT_0012ba80;
  *(undefined1 *)(*(int *)(this + 0xfc) + 0x7f) = 0x21;
  L_PrintLog((char *)(iVar6 + 0x12b790),(char *)(iVar26 + 0x12b792));
  *(undefined4 *)(this + 0x10c) = 0;
  Cafe::populateWithCustomers(*(Cafe **)(this + 0x14),this);
  saveServerData(this);
  ZombieCafe::saveGameState(*(ZombieCafe **)(this + 0xc),false);
  iVar6 = DAT_0012ba8c;
  iVar26 = *(int *)(this + 0xc);
  *(undefined4 *)(iVar26 + 0x438) = *(undefined4 *)(iVar24 + DAT_0012ba88);
  *(GameStateCafe **)(iVar26 + DAT_0012ba90) = this;
  iVar26 = *(int *)(this + 0xc);
  *(undefined4 *)(iVar26 + 0x440) = *(undefined4 *)(iVar24 + DAT_0012ba94);
  *(GameStateCafe **)(iVar26 + DAT_0012ba98) = this;
  iVar26 = *(int *)(this + 0xc);
  *(undefined4 *)(iVar26 + 0x448) = *(undefined4 *)(iVar24 + DAT_0012ba9c);
  *(GameStateCafe **)(iVar26 + DAT_0012baa0) = this;
  iVar26 = *(int *)(this + 0xc);
  *(undefined4 *)(iVar26 + 0x450) = *(undefined4 *)(iVar24 + DAT_0012baa4);
  *(GameStateCafe **)(iVar26 + DAT_0012baa8) = this;
  iVar26 = *(int *)(this + 0xc);
  *(undefined4 *)(iVar26 + 0x458) = *(undefined4 *)(iVar24 + DAT_0012baac);
  *(GameStateCafe **)(iVar26 + DAT_0012bab0) = this;
  iVar26 = *(int *)(this + 0xc);
  *(undefined4 *)(iVar26 + 0x460) = *(undefined4 *)(iVar24 + DAT_0012bab4);
  *(GameStateCafe **)(iVar26 + DAT_0012bab8) = this;
  iVar26 = *(int *)(this + 0xc);
  *(undefined4 *)(iVar26 + 0x468) = *(undefined4 *)(iVar24 + DAT_0012babc);
  *(GameStateCafe **)(iVar26 + DAT_0012bac0) = this;
  iVar26 = *(int *)(this + 0xc);
  *(undefined4 *)(iVar26 + 0x470) = *(undefined4 *)(iVar24 + DAT_0012bac4);
  *(GameStateCafe **)(iVar26 + DAT_0012bac8) = this;
  iVar26 = *(int *)(this + 0xc);
  *(undefined4 *)(iVar26 + 0x478) = *(undefined4 *)(iVar24 + DAT_0012bacc);
  *(GameStateCafe **)(iVar26 + DAT_0012bad0) = this;
  iVar32 = *(int *)(this + 0xc);
  *(undefined4 *)(iVar32 + 0x480) = *(undefined4 *)(iVar24 + DAT_0012bad4);
  iVar26 = DAT_0012badc;
  *(GameStateCafe **)(iVar32 + DAT_0012bad8) = this;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  L_PrintLog((char *)(iVar6 + 0x12b7c2),(char *)(iVar26 + 0x12b864));
  *(undefined4 *)(this + 0x1cc) = 0;
  this_23 = (ScreenshotTaker *)operator_new(0x14);
  ScreenshotTaker::ScreenshotTaker(this_23);
  *(ScreenshotTaker **)(this + 0x11c) = this_23;
  *(undefined4 *)(this + 0x194) = 0;
  this[0x19a] = (GameStateCafe)0x0;
  this[DAT_0012bae0] = (GameStateCafe)0x0;
  *(undefined4 *)(this + 0x1b0) = 0;
  cVar2 = *(char *)(*(int *)(this + 0xc) + 0x6e0);
  CapcomDate::now(aCStack_12c);
  if (cStack_12a != cVar2) {
    iVar6 = *(int *)(this + 0xc);
    CapcomDate::now(aCStack_124);
    *(undefined1 *)(iVar6 + 0x6e0) = uStack_122;
    *(undefined4 *)(*(int *)(this + 0xc) + DAT_0012bae4) = 0;
  }
  iVar6 = *(int *)(this + 0xc);
  if (((*(char *)(iVar6 + DAT_0012bae8) == '\0') && (*(char *)(iVar6 + 0x6f0) == '\0')) &&
     (*(char *)(iVar6 + DAT_0012baec) != '\0')) {
    *(undefined1 *)(iVar6 + DAT_0012bae8) = 1;
    iVar6 = DAT_0012baf0;
    *(int *)(*(int *)(this + 0xc) + DAT_0012baf0) =
         *(int *)(*(int *)(this + 0xc) + DAT_0012baf0) + 1;
    if (4 < *(int *)(*(int *)(this + 0xc) + iVar6)) {
      *(undefined1 *)(*(int *)(this + 0xc) + 0x6f0) = 1;
    }
  }
  iVar6 = ZombieCafe::getPurchasingFlag();
  if (iVar6 == 0) {
    L_PrintLog((char *)(DAT_0012baf4 + 0x12b906),(char *)(DAT_0012baf8 + 0x12b908));
    L_PurchaseDBCheck(this);
  }
  else {
    L_PrintLog((char *)(DAT_0012bafc + 0x12b91a),(char *)(DAT_0012bb00 + 0x12b91c));
  }
  checkFriendReward(this);
  checkBeginerBonus(this);
  checkUpdateBonus(this);
  iVar6 = DAT_0012bb04;
  iVar26 = TutorialSystem::isTutorialCompleted
                     (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012bb04),'.');
  if (iVar26 != 0) {
    L_PrintLog((char *)(DAT_0012bb08 + 0x12b94a),(char *)(DAT_0012bb0c + 0x12b94c));
    ZombieCafe::loadGetEntryInfo(*(ZombieCafe **)(this + 0xc));
  }
  checkAndAdjustQuest(this);
  iVar26 = DAT_0012bb04;
  if ((*(int *)(*(int *)(this + 0xc) + 0x680) == 4) &&
     (iVar32 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'I'), iVar32 == 0)) {
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar26),'H');
    TutorialSystem::setTutorialCompleted(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar26),'I');
  }
  if ((**(char **)(iVar24 + DAT_0012bb10) != '\0') &&
     (**(int **)(*(int *)(this + 0xc) + 0xc08) != DAT_0012bb14)) {
    Vector<int>::insertElementAt((Vector<int> *)(*(int *)(this + 0xc) + 0xc00),DAT_0012bb14,0);
  }
  iVar6 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar6),'U');
  if (iVar6 != 0) {
    TutorialSystem::setTutorialCompleted
              (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012bb04),'V');
  }
  javaAsyncQueryInventory();
  if (local_1c != *piVar35) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


