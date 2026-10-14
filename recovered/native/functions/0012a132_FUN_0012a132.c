/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012a132 FUN_0012a132 */

void FUN_0012a132(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  CapcomOrderableList<Furniture*> *pCVar6;
  uint uVar7;
  CharacterInstance *this;
  Furniture *pFVar8;
  long lVar9;
  undefined4 uVar10;
  ScreenElement *pSVar11;
  NoticeDialog *pNVar12;
  ConfirmDialog *this_00;
  EquipInfoDialog *this_01;
  MessageElement *this_02;
  ZCImageButton *pZVar13;
  HudElement *this_03;
  PullMenuElement *this_04;
  HCOManager *this_05;
  int iVar14;
  FoodStack *pFVar15;
  MessageWithToxin *pMVar16;
  BuyToxinDialog *this_06;
  FrequentFryerDialog *this_07;
  CharacterCommandBar *this_08;
  CookCommandBar *this_09;
  TombstoneCommandBar *this_10;
  PlantCommandBar *this_11;
  Storage *this_12;
  CharacterDetails *this_13;
  Store *this_14;
  RecipeBook *this_15;
  TutorialArrow *pTVar17;
  FridgeDialog *this_16;
  PendingOrderDialog *this_17;
  ObjectiveCompleteDialog *this_18;
  ObjectiveDialog *this_19;
  size_t sVar18;
  CafeObject *pCVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ImageElement *this_20;
  BitmapTextElement *pBVar22;
  ScreenshotTaker *this_21;
  int extraout_r1;
  int iVar23;
  uint uVar24;
  CFPathFinder *pCVar25;
  code *pcVar26;
  int iVar27;
  CapcomOrderableList<Furniture*> *unaff_r4;
  Character *pCVar28;
  int *piVar29;
  Cafe *pCVar30;
  GameStateCafe *pGVar31;
  char *pcVar32;
  char *pcVar33;
  String *pSVar34;
  undefined4 *puVar35;
  int iVar36;
  undefined4 uVar37;
  GameStateCafe *unaff_r6;
  undefined1 unaff_r7;
  ZombieCafe *pZVar38;
  undefined4 uVar39;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s1;
  undefined8 uVar40;
  longlong lVar41;
  int in_stack_00000024;
  int *in_stack_00000030;
  int *in_stack_00000044;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000bc;
  int in_stack_000001c4;
  
  while (iVar5 = CapcomOrderableList<Furniture*>::nextItem(unaff_r4), iVar5 != 0) {
    *(undefined1 *)(iVar5 + 0x2e) = unaff_r7;
  }
  CapcomOrderableList<Furniture*>::removeAll(unaff_r4);
  operator_delete(unaff_r4);
  pCVar6 = (CapcomOrderableList<Furniture*> *)
           Cafe::createDistanceSortedFurnitureList(*(Cafe **)(unaff_r6 + 0x14),'\x03',0);
  *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
  while (iVar5 = CapcomOrderableList<Furniture*>::nextItem(pCVar6), iVar5 != 0) {
    *(undefined1 *)(iVar5 + 0x2e) = 0;
  }
  CapcomOrderableList<Furniture*>::removeAll(pCVar6);
  operator_delete(pCVar6);
  uVar40 = Platform::getAppTime();
  uVar40 = __subdf3((int)uVar40,(int)((ulonglong)uVar40 >> 0x20),
                    *(undefined4 *)(*(int *)(unaff_r6 + 0x14) + 0xd8),
                    *(undefined4 *)(*(int *)(unaff_r6 + 0x14) + 0xdc));
  __muldf3((int)uVar40,(int)((ulonglong)uVar40 >> 0x20),DAT_0012a420,DAT_0012a424);
  lVar41 = __fixdfdi();
  iVar5 = (int)((ulonglong)lVar41 >> 0x20);
  uVar7 = (uint)lVar41;
  Platform::getAppTime();
  sprintf(&stack0x000000c4,(char *)(DAT_0012a428 + 0x12a23a),uVar7,iVar5);
  L_PrintLog((char *)(DAT_0012a42c + 0x12a24c),&stack0x000000c4);
  if (lVar41 < 0) {
    uVar24 = -**(int **)(in_stack_00000024 + DAT_0012a430);
    iVar23 = (int)uVar24 >> 0x1f;
    if ((iVar5 < iVar23) ||
       ((iVar23 == iVar5 &&
        (uVar7 <= uVar24 && -uVar7 != **(int **)(in_stack_00000024 + DAT_0012a430))))) {
      iVar23 = *(int *)(unaff_r6 + 0xc);
      uVar24 = *(uint *)(iVar23 + 0x940);
      *(uint *)(iVar23 + 0x940) = uVar24 - uVar7;
      *(uint *)(iVar23 + 0x944) = (*(int *)(iVar23 + 0x944) - iVar5) - (uint)(uVar24 < uVar7);
      iVar23 = *(int *)(unaff_r6 + 0xc);
      uVar7 = *(int *)(iVar23 + 0x944) >> 0x1f;
      iVar5 = (uVar7 - *(int *)(iVar23 + 0x944)) - (uint)(uVar7 < *(uint *)(iVar23 + 0x940));
      *(byte *)(iVar23 + 0x950) = (byte)((uint)iVar5 >> 0x1f);
      if (iVar5 < 0) {
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012a434),'D',false);
      }
    }
  }
  bVar2 = false;
  for (iVar5 = 0; iVar5 < *(int *)(*(int *)(unaff_r6 + 0xc) + DAT_0012a444 + 4) + 1;
      iVar5 = iVar5 + 1) {
    pCVar28 = *(Character **)(iVar5 * 4 + *(int *)(*(int *)(unaff_r6 + 0xc) + DAT_0012a444 + 8));
    if ((*(int *)(*(int *)(unaff_r6 + 0x14) + 0xe8) != **(int **)(in_stack_00000024 + DAT_0012a438))
       || (*(int *)(*(int *)(unaff_r6 + 0x14) + 0xec) !=
           **(int **)(in_stack_00000024 + DAT_0012a43c))) {
      lVar9 = Cafe::worldToDiamondCoords(*(long *)(pCVar28 + 0x48));
      lVar9 = Cafe::diamondToStaggeredCoords(lVar9);
      pCVar30 = *(Cafe **)(unaff_r6 + 0x14);
      lVar9 = CFPoint::add(lVar9,CONCAT22(*(undefined2 *)(pCVar30 + 0xf4),
                                          *(undefined2 *)(pCVar30 + 0xf8)));
      iVar23 = Cafe::staggeredCoordsToIndex(lVar9);
      uVar10 = Cafe::indexToWorldCoordsCenter(pCVar30,iVar23);
      *(undefined4 *)(pCVar28 + 0x48) = uVar10;
    }
    pCVar25 = *(CFPathFinder **)(*(int *)(unaff_r6 + 0x14) + 0x5c);
    this = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this,pCVar28,pCVar25);
    Cafe::addCafeObject(*(Cafe **)(unaff_r6 + 0x14),(CafeObject *)this);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(unaff_r6 + 0x1c),this);
    iVar23 = ZombieCafe::updateZukanUnlock
                       (*(ZombieCafe **)(unaff_r6 + 0xc),
                        (uint)*(ushort *)(*(int *)pCVar28 + DAT_0012a440),'\x03');
    if (iVar23 != 0) {
      bVar2 = true;
    }
  }
  piVar29 = (int *)0x0;
  do {
    pZVar38 = *(ZombieCafe **)(unaff_r6 + 0xc);
    if ((int)(uint)(byte)pZVar38[DAT_0012a448] <= (int)piVar29) {
      (**(code **)(*in_stack_00000030 + 0xc))(in_stack_00000030);
      (**(code **)(*in_stack_00000030 + 4))(in_stack_00000030);
      pZVar38 = *(ZombieCafe **)(unaff_r6 + 0xc);
      *(undefined1 *)((int)&DAT_0012a428 + DAT_0012a44c) = 1;
      ZombieCafe::backup(pZVar38);
      GameStateCafe::checkForTombstones(unaff_r6);
      ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(unaff_r6 + 0xc));
      unaff_r6[DAT_0012a450] = (GameStateCafe)0x1;
      *(undefined4 *)(*(int *)(unaff_r6 + 0xc) + DAT_0012a458) =
           **(undefined4 **)(in_stack_00000024 + DAT_0012a454);
      if ((*(char *)(*(int *)(unaff_r6 + 0xc) + DAT_0012a45c) != '\0') &&
         (*(int *)(*(int *)(unaff_r6 + 0xc) + DAT_0012a460) < 1)) {
        pCVar6 = (CapcomOrderableList<Furniture*> *)
                 Cafe::createDistanceSortedFurnitureList(*(Cafe **)(unaff_r6 + 0x14),'\x0e',0);
        *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
        while (pFVar8 = (Furniture *)CapcomOrderableList<Furniture*>::nextItem(pCVar6),
              pFVar8 != (Furniture *)0x0) {
          if (*(int *)(*(int *)(pFVar8 + 0x38) + 0x24) ==
              **(int **)(in_stack_00000024 + DAT_0012a834)) {
            Cafe::removeFurniture(*(Cafe **)(unaff_r6 + 0x14),pFVar8);
            (**(code **)(*(int *)pFVar8 + 4))(pFVar8);
          }
        }
        CapcomOrderableList<Furniture*>::removeAll(pCVar6);
        operator_delete(pCVar6);
        GameStateCafe::checkForTombstones(unaff_r6);
      }
      ZombieCafe::checkTombstoneDayRecovery();
      pCVar30 = *(Cafe **)(unaff_r6 + 0x14);
      lVar9 = Cafe::diamondToStaggeredCoords
                        (**(int **)(in_stack_00000024 + DAT_0012a838) + -3,
                         **(int **)(in_stack_00000024 + DAT_0012a83c) + 2);
      iVar5 = Cafe::staggeredCoordsToIndex(lVar9);
      lVar9 = Cafe::indexToWorldCoordsCenter(pCVar30,iVar5);
      lVar9 = CFPoint::multiplyf(lVar9,extraout_s0);
      iVar5 = *(int *)(unaff_r6 + 0xc);
      uVar10 = CFPoint::add(lVar9,*(long *)(iVar5 + 0x14));
      *(undefined4 *)(unaff_r6 + 0x1e0) = uVar10;
      uVar10 = PackedImage::getImages(*(PackedImage **)(iVar5 + DAT_0012a840),false);
      *(undefined4 *)(unaff_r6 + 0x1e8) = uVar10;
      uVar10 = PackedImage::getImages(*(PackedImage **)(*(int *)(unaff_r6 + 0xc) + 0x7f0),false);
      *(undefined4 *)(unaff_r6 + 0x1ec) = uVar10;
      uVar10 = PackedImage::getImages
                         (*(PackedImage **)(*(int *)(unaff_r6 + 0xc) + DAT_0012a844),true);
      *(undefined4 *)(unaff_r6 + 0x1f0) = uVar10;
      pSVar11 = (ScreenElement *)operator_new(0x60);
      ScreenElement::ScreenElement(pSVar11,(ScreenElement *)0x0);
      *(ScreenElement **)(unaff_r6 + 0x78) = pSVar11;
      pNVar12 = (NoticeDialog *)operator_new(0x90);
      NoticeDialog::NoticeDialog
                (pNVar12,*(CImage **)(*(int *)(unaff_r6 + 0x1ec) + 0x14),
                 *(CImage **)(*(int *)(unaff_r6 + 0x1e8) + 0x28),extraout_s0_00);
      *(NoticeDialog **)(unaff_r6 + 0xd0) = pNVar12;
      (**(code **)(*(int *)pNVar12 + 0x1c))(pNVar12,0x12);
      ScreenElement::setOrder(*(ScreenElement **)(unaff_r6 + 0xd0),0x62);
      *(undefined2 *)(unaff_r6 + 0x174) = 0xffff;
      pNVar12 = (NoticeDialog *)operator_new(0x90);
      NoticeDialog::NoticeDialog
                (pNVar12,*(CImage **)(*(int *)(unaff_r6 + 0x1ec) + 0x14),
                 *(CImage **)(*(int *)(unaff_r6 + 0x1e8) + 0x28),extraout_s0_01);
      *(NoticeDialog **)(unaff_r6 + 0xd4) = pNVar12;
      (**(code **)(*(int *)pNVar12 + 0x1c))(pNVar12,0x12);
      ScreenElement::setOrder(*(ScreenElement **)(unaff_r6 + 0xd4),0x62);
      this_00 = (ConfirmDialog *)operator_new(0x9c);
      ConfirmDialog::ConfirmDialog
                (this_00,*(CImage **)(*(int *)(unaff_r6 + 0x1ec) + 0x14),
                 *(CImage **)(*(int *)(unaff_r6 + 0x1e8) + 0x28),
                 *(CImage **)(*(int *)(unaff_r6 + 0x1e8) + 0x44),0,extraout_s0_02,
                 (CImage *)0x40000000);
      *(ConfirmDialog **)(unaff_r6 + 0x80) = this_00;
      (**(code **)(*(int *)this_00 + 0x1c))(this_00,0x12);
      ScreenElement::setOrder(*(ScreenElement **)(unaff_r6 + 0x80),99);
      this_01 = (EquipInfoDialog *)operator_new(0xa0);
      EquipInfoDialog::EquipInfoDialog
                (this_01,*(CImage **)(*(int *)(unaff_r6 + 0x1ec) + 0x14),
                 *(CImage **)(*(int *)(unaff_r6 + 0x1e8) + 0x28),extraout_s0_03);
      *(EquipInfoDialog **)(unaff_r6 + 0x134) = this_01;
      (**(code **)(*(int *)this_01 + 0x1c))(this_01,0x12);
      ScreenElement::setOrder(*(ScreenElement **)(unaff_r6 + 0x134),99);
      *(undefined4 *)(unaff_r6 + 0x13c) = 0;
      this_02 = (MessageElement *)operator_new(0x90);
      MessageElement::MessageElement(this_02,*(CImage ***)(unaff_r6 + 0x1e8),'\f');
      *(MessageElement **)(unaff_r6 + 0x7c) = this_02;
      pZVar13 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton
                (pZVar13,'\f',*(CImage **)(*(int *)(unaff_r6 + 0x1e8) + 0x154),(CImage *)0x0,0,0,
                 true);
      iVar23 = DAT_0012a84c;
      iVar5 = DAT_0012a848;
      *(ZCImageButton **)(unaff_r6 + 0x170) = pZVar13;
      *(undefined2 *)(unaff_r6 + 0x16c) = 0;
      L_PrintLog((char *)(iVar5 + 0x12a658),(char *)(iVar23 + 0x12a656));
      piVar29 = *(int **)(unaff_r6 + 0x78);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      this_03 = (HudElement *)operator_new(0x16c);
      HudElement::HudElement
                (this_03,*(_func_bool_void_ptr_int **)(in_stack_00000024 + DAT_0012a850),unaff_r6,
                 true);
      pGVar31 = unaff_r6 + 200;
      *(HudElement **)pGVar31 = this_03;
      (*pcVar26)(piVar29,this_03);
      ScreenElement::setOrder
                (*(ScreenElement **)pGVar31,(int)**(char **)(in_stack_00000024 + DAT_0012a854));
      HudElement::setButtonAvailability(*(int *)pGVar31,false);
      iVar5 = *(int *)pGVar31;
      TutorialSystem::isTutorialCompleted
                (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012a858),'\"');
      HudElement::setButtonAvailability(iVar5,true);
      piVar29 = *(int **)(unaff_r6 + 0x78);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      this_04 = (PullMenuElement *)operator_new(0xfc);
      PullMenuElement::PullMenuElement
                (this_04,*(_func_bool_void_ptr_int **)(in_stack_00000024 + DAT_0012a85c),unaff_r6);
      *(PullMenuElement **)(unaff_r6 + 0xcc) = this_04;
      (*pcVar26)(piVar29,this_04);
      iVar5 = DAT_0012a858;
      iVar23 = *(int *)(unaff_r6 + 0xcc);
      TutorialSystem::isTutorialCompleted
                (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012a858),'S');
      PullMenuElement::setButtonAvailability(iVar23,true);
      HudElement::setButtonAvailability(*(int *)(unaff_r6 + 200),true);
      HudElement::setButtonAvailability(*(int *)(unaff_r6 + 200),true);
      iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + iVar5),'U');
      if (iVar5 != 0) {
        GameStateCafe::checkDisplayLotteryButton(unaff_r6);
        GameStateCafe::checkDisplayGatyaButton(unaff_r6);
      }
      GameStateCafe::checkDisplayEventButton(unaff_r6);
      GameStateCafe::checkDisplayMeetLockerButton(unaff_r6);
      HCOManager::getInstance();
      HCOManager::init();
      this_05 = (HCOManager *)HCOManager::getInstance();
      HCOManager::checkHCOStart(this_05);
      GameStateCafe::checkDisplaySpecialOfferButton(unaff_r6);
      iVar5 = *(int *)(unaff_r6 + 0xcc);
      TutorialSystem::isTutorialCompleted
                (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012a858),'#');
      pGVar31 = unaff_r6 + 200;
      PullMenuElement::setButtonAvailability(iVar5,true);
      HudElement::setButtonAvailability(*(int *)pGVar31,true);
      iVar5 = *(int *)(unaff_r6 + 0xcc);
      TutorialSystem::isTutorialCompleted
                (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012a858),'W');
      PullMenuElement::setButtonAvailability(iVar5,true);
      HudElement::setButtonAvailability(*(int *)pGVar31,true);
      HudElement::setButtonAvailability(*(int *)pGVar31,true);
      HudElement::setButtonAvailability(*(int *)pGVar31,true);
      iVar23 = *(int *)pGVar31;
      iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012a858),'\x0e');
      if (iVar5 == 0) {
        TutorialSystem::isTutorialCompleted
                  (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012a858),'\x0f');
      }
      HudElement::setButtonAvailability(iVar23,true);
      iVar5 = DAT_0012a858;
      iVar23 = *(int *)(unaff_r6 + 0xcc);
      TutorialSystem::isTutorialCompleted
                (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012a858),'I');
      PullMenuElement::setButtonAvailability(iVar23,true);
      HudElement::setButtonAvailability(*(int *)(unaff_r6 + 200),true);
      L_PrintLog((char *)(DAT_0012a860 + 0x12a812),(char *)(DAT_0012a864 + 0x12a814));
      ZombieCafe::prunePendingOrders();
      ZombieCafe::prunePendingRaidNotifications();
      iVar23 = *(int *)(unaff_r6 + 200);
      TutorialSystem::isTutorialCompleted
                (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + iVar5),'0');
      HudElement::setButtonAvailability(iVar23,true);
      HudElement::setButtonAvailability(*(int *)(unaff_r6 + 200),true);
      iVar5 = *(int *)(unaff_r6 + 200);
      TutorialSystem::isTutorialCompleted
                (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012aa08),'*');
      HudElement::setButtonAvailability(iVar5,true);
      iVar5 = DAT_0012aa10;
      puVar35 = *(undefined4 **)(in_stack_00000024 + DAT_0012aa0c);
      ZombieCafe::loadlottery((void *)*puVar35,*(void **)(unaff_r6 + 0xc),-1);
      ZombieCafe::getGameInfo(*(ZombieCafe **)(unaff_r6 + 0xc));
      iVar23 = DAT_0012aa14;
      *(undefined4 *)(unaff_r6 + 500) = 1000;
      L_PrintLog((char *)(iVar5 + 0x12a8dc),(char *)(iVar23 + 0x12a8e2));
      L_PrintLog((char *)(iVar5 + 0x12a8dc),(char *)(DAT_0012aa18 + 0x12a8ee));
      iVar5 = CCOptions::GetInt(*(CCOptions **)(*(int *)(unaff_r6 + 0xc) + 0xa00),
                                (void *)(DAT_0012aa1c + 0x12a8fc),(char *)0xffffffff,
                                *(int *)(unaff_r6 + 0xc));
      iVar23 = CCOptions::GetInt(*(CCOptions **)(*(int *)(unaff_r6 + 0xc) + 0xa00),
                                 (void *)(DAT_0012aa20 + 0x12a90c),(char *)0xffffffff,
                                 *(int *)(unaff_r6 + 0xc));
      if ((iVar5 != -1) &&
         (iVar14 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(unaff_r6 + 0xc)), iVar14 != 0)) {
        iVar36 = *(int *)(unaff_r6 + 0xc);
        iVar14 = 0;
        if ((-1 < iVar5) &&
           (iVar27 = *(byte *)(iVar36 + DAT_0012aa24) - 1, iVar14 = iVar5, iVar27 < iVar5)) {
          iVar14 = iVar27;
        }
        if (9 < iVar23) {
          iVar23 = 9;
        }
        pFVar15 = (FoodStack *)operator_new(0x24);
        FoodStack::FoodStack
                  (pFVar15,(uchar)iVar14,(char)~(byte)((uint)iVar23 >> 0x18) >> 7 & (byte)iVar23);
        Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar36 + DAT_0012aa28),pFVar15);
        if (*(int *)(*(int *)(unaff_r6 + 0xc) + 0x680) < 8) {
          uVar10 = __floatsisf(*(undefined4 *)(pFVar15 + 4));
          __mulsf3(uVar10,**(undefined4 **)(in_stack_00000024 + DAT_0012aa2c));
          uVar10 = __fixsfsi();
          *(undefined4 *)(pFVar15 + 4) = uVar10;
        }
        else {
          uVar10 = arc4random();
          __aeabi_uidivmod(uVar10,0x14);
          *(int *)(pFVar15 + 4) = extraout_r1 + 10;
        }
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012aa08),'#',false);
        pCVar6 = (CapcomOrderableList<Furniture*> *)
                 Cafe::createDistanceSortedFurnitureList(*(Cafe **)(unaff_r6 + 0x14),'\b',0);
        *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
        do {
          iVar5 = CapcomOrderableList<Furniture*>::nextItem(pCVar6);
        } while (iVar5 == 0);
        *(undefined1 *)(iVar5 + 0x46) = 1;
        CapcomOrderableList<Furniture*>::removeAll(pCVar6);
        operator_delete(pCVar6);
      }
      CCOptions::SetInt(*(CCOptions **)(*(int *)(unaff_r6 + 0xc) + 0xa00),
                        (void *)(DAT_0012aa30 + 0x12a9e8),(char *)0xffffffff,
                        *(int *)(unaff_r6 + 0xc));
      CCOptions::SetInt(*(CCOptions **)(*(int *)(unaff_r6 + 0xc) + 0xa00),
                        (void *)(DAT_0012aa34 + 0x12a9fa),(char *)0xffffffff,
                        *(int *)(unaff_r6 + 0xc));
      while( true ) {
        iVar5 = *(int *)(unaff_r6 + 0xc);
        if (*(int *)((Vector<FoodStack*> *)(iVar5 + DAT_0012adec) + 4) < 0) break;
        pFVar15 = (FoodStack *)
                  Vector<FoodStack*>::removeElementAt
                            ((Vector<FoodStack*> *)(iVar5 + DAT_0012adec),0);
        if (pFVar15 != (FoodStack *)0x0) {
          FoodStack::~FoodStack(pFVar15);
          operator_delete(pFVar15);
        }
      }
      iVar5 = CCOptions::GetInt(*(CCOptions **)(iVar5 + 0xa00),(void *)(DAT_0012adf0 + 0x12aa68),
                                (char *)0xffffffff,iVar5);
      if (-1 < iVar5) {
        iVar23 = ZombieCafe::addAmpouleToStorage(*(ZombieCafe **)(unaff_r6 + 0xc),iVar5);
        if (8 < iVar23) {
          memset(&stack0x000000c4,0,0x100);
          String::String((String *)&stack0x00000054,
                         (String *)
                         (*(int *)(iVar5 * 4 + *(int *)(*(int *)(unaff_r6 + 0x14) + 0x94)) + 0x2c));
          operator+(&stack0x0000005c,DAT_0012adf4 + 0x12aaa4,&stack0x00000054);
          String::operator+((String *)&stack0x00000064,&stack0x0000005c);
          pMVar16 = (MessageWithToxin *)operator_new(0x14);
          MessageWithToxin::MessageWithToxin(pMVar16,&stack0x00000064,0,0);
          Vector<MessageWithToxin*>::addElement
                    ((Vector<MessageWithToxin*> *)(unaff_r6 + 0x178),pMVar16);
          String::~String((String *)&stack0x00000064);
          String::~String((String *)&stack0x0000005c);
          String::~String((String *)&stack0x00000054);
        }
        CCOptions::SetInt(*(CCOptions **)(*(int *)(unaff_r6 + 0xc) + 0xa00),
                          (void *)(DAT_0012adfc + 0x12aaf4),(char *)0xffffffff,
                          *(int *)(unaff_r6 + 0xc));
      }
      L_PrintLog((char *)(DAT_0012ae00 + 0x12aafe),(char *)(DAT_0012ae04 + 0x12ab00));
      this_06 = (BuyToxinDialog *)operator_new(0xe4);
      BuyToxinDialog::BuyToxinDialog(this_06);
      iVar5 = DAT_0012ae08;
      pGVar31 = unaff_r6 + 0x8c;
      *(BuyToxinDialog **)pGVar31 = this_06;
      ScreenElement::setOrder((ScreenElement *)this_06,(int)**(char **)(in_stack_00000024 + iVar5));
      (**(code **)(**(int **)(unaff_r6 + 0x78) + 0x2c))(*(int **)(unaff_r6 + 0x78),*(int *)pGVar31);
      (**(code **)(**(int **)pGVar31 + 0x1c))(*(int **)pGVar31,0x12);
      (**(code **)(**(int **)pGVar31 + 0x20))(*(int **)pGVar31,0);
      iVar5 = *(int *)pGVar31;
      *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(in_stack_00000024 + DAT_0012ae0c);
      *(GameStateCafe **)(iVar5 + 0xb4) = unaff_r6;
      this_07 = (FrequentFryerDialog *)operator_new(0x1a0);
      FrequentFryerDialog::FrequentFryerDialog(this_07);
      iVar5 = DAT_0012ae10;
      pGVar31 = unaff_r6 + 0x90;
      *(FrequentFryerDialog **)pGVar31 = this_07;
      ScreenElement::setOrder((ScreenElement *)this_07,(int)**(char **)(in_stack_00000024 + iVar5));
      (**(code **)(**(int **)(unaff_r6 + 0x78) + 0x2c))
                (*(int **)(unaff_r6 + 0x78),*(undefined4 *)pGVar31);
      (**(code **)(**(int **)pGVar31 + 0x1c))(*(int **)pGVar31,0x12);
      (**(code **)(**(int **)pGVar31 + 0x20))(*(int **)pGVar31,0);
      piVar29 = *(int **)(unaff_r6 + 0x78);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      this_08 = (CharacterCommandBar *)operator_new(0xd8);
      CharacterCommandBar::CharacterCommandBar
                (this_08,*(ConfirmDialog **)(unaff_r6 + 0x80),*(BuyToxinDialog **)(unaff_r6 + 0x8c))
      ;
      *(CharacterCommandBar **)(unaff_r6 + 0xac) = this_08;
      (*pcVar26)(piVar29,this_08);
      (**(code **)(**(int **)(unaff_r6 + 0xac) + 0x1c))(*(int **)(unaff_r6 + 0xac),0x11);
      ScreenElement::setOrder
                (*(ScreenElement **)(unaff_r6 + 0xac),
                 (int)**(char **)(in_stack_00000024 + DAT_0012ae14));
      piVar29 = *(int **)(unaff_r6 + 0x78);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      this_09 = (CookCommandBar *)operator_new(0xd4);
      CookCommandBar::CookCommandBar
                (this_09,*(ConfirmDialog **)(unaff_r6 + 0x80),*(NoticeDialog **)(unaff_r6 + 0xd0),
                 *(BuyToxinDialog **)(unaff_r6 + 0x8c),
                 *(_func_void_void_ptr_Stove_ptr **)(in_stack_00000024 + DAT_0012ae18),unaff_r6,
                 *(_func_void_void_ptr_Stove_ptr **)(in_stack_00000024 + DAT_0012ae1c),unaff_r6,
                 *(_func_void_void_ptr_Stove_ptr **)(in_stack_00000024 + DAT_0012ae20),unaff_r6);
      pGVar31 = unaff_r6 + 0xb4;
      *(CookCommandBar **)pGVar31 = this_09;
      (*pcVar26)(piVar29,this_09);
      (**(code **)(**(int **)pGVar31 + 0x1c))(*(int **)pGVar31,0x11);
      pcVar32 = *(char **)(in_stack_00000024 + DAT_0012ae24);
      ScreenElement::setOrder(*(ScreenElement **)pGVar31,(int)*pcVar32);
      piVar29 = *(int **)(unaff_r6 + 0x78);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      this_10 = (TombstoneCommandBar *)operator_new(0xa0);
      TombstoneCommandBar::TombstoneCommandBar
                (this_10,*(ConfirmDialog **)(unaff_r6 + 0x80),*(BuyToxinDialog **)(unaff_r6 + 0x8c),
                 *(NoticeDialog **)(unaff_r6 + 0xd0));
      pGVar31 = unaff_r6 + 0xc0;
      *(TombstoneCommandBar **)pGVar31 = this_10;
      (*pcVar26)(piVar29,this_10);
      (**(code **)(**(int **)pGVar31 + 0x1c))(*(int **)pGVar31,0x11);
      ScreenElement::setOrder
                (*(ScreenElement **)pGVar31,(int)**(char **)(in_stack_00000024 + DAT_0012ae28));
      piVar29 = *(int **)(unaff_r6 + 0x78);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      this_11 = (PlantCommandBar *)operator_new(0xec);
      PlantCommandBar::PlantCommandBar
                (this_11,*(ConfirmDialog **)(unaff_r6 + 0x80),*(NoticeDialog **)(unaff_r6 + 0xd0),
                 *(_func_void_void_ptr_int **)(in_stack_00000024 + DAT_0012ae2c),unaff_r6,
                 *(_func_void_void_ptr_int **)(in_stack_00000024 + DAT_0012ae30),unaff_r6,
                 *(_func_void_void_ptr_Furniture_ptr **)(in_stack_00000024 + DAT_0012ae34),unaff_r6)
      ;
      pGVar31 = unaff_r6 + 0xb8;
      *(PlantCommandBar **)pGVar31 = this_11;
      (*pcVar26)(piVar29,this_11);
      (**(code **)(**(int **)pGVar31 + 0x1c))(*(int **)pGVar31,0x11);
      ScreenElement::setOrder(*(ScreenElement **)pGVar31,(int)*pcVar32);
      piVar29 = *(int **)(unaff_r6 + 0x78);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      this_12 = (Storage *)operator_new(0xf4);
      Storage::Storage(this_12,*(CImage ***)(unaff_r6 + 0x1e8),
                       *(FurnitureData ***)(*(int *)(unaff_r6 + 0x14) + 0x94),
                       *(short *)(*(int *)(unaff_r6 + 0x14) + 0x90),
                       *(NoticeDialog **)(unaff_r6 + 0xd0));
      pGVar31 = unaff_r6 + 0xbc;
      *(Storage **)pGVar31 = this_12;
      (*pcVar26)(piVar29,this_12);
      (**(code **)(**(int **)pGVar31 + 0x1c))(*(int **)pGVar31,0x11);
      ScreenElement::setOrder
                (*(ScreenElement **)pGVar31,(int)**(char **)(in_stack_00000024 + DAT_0012ae38));
      this_13 = (CharacterDetails *)operator_new(0x194);
      CharacterDetails::CharacterDetails
                (this_13,(Vector *)(*(int *)(unaff_r6 + 0xc) + DAT_0012ae3c),true,
                 *(ConfirmDialog **)(unaff_r6 + 0x80),(NoticeDialog *)0x0,unaff_r6,'\0',false);
      pGVar31 = unaff_r6 + 0xb0;
      *(CharacterDetails **)pGVar31 = this_13;
      (**(code **)(*(int *)this_13 + 0x1c))(this_13,0x12);
      (**(code **)(**(int **)pGVar31 + 0x20))(*(int **)pGVar31,0);
      ScreenElement::setOrder
                (*(ScreenElement **)pGVar31,(int)**(char **)(in_stack_00000024 + DAT_0012ae40));
      (**(code **)(**(int **)(unaff_r6 + 0x78) + 0x2c))
                (*(int **)(unaff_r6 + 0x78),*(undefined4 *)pGVar31);
      piVar29 = *(int **)(unaff_r6 + 0x78);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      this_14 = (Store *)operator_new(0xdc);
      Store::Store(this_14,*(CImage ***)(unaff_r6 + 0x1e8),
                   *(FurnitureData ***)(*(int *)(unaff_r6 + 0x14) + 0x94),
                   *(short *)(*(int *)(unaff_r6 + 0x14) + 0x90),*(NoticeDialog **)(unaff_r6 + 0xd0),
                   unaff_r6);
      *(Store **)(unaff_r6 + 0x84) = this_14;
      (*pcVar26)(piVar29,this_14);
      (**(code **)(**(int **)(unaff_r6 + 0x84) + 0x1c))(*(int **)(unaff_r6 + 0x84),0x11);
      ScreenElement::setOrder
                (*(ScreenElement **)(unaff_r6 + 0x84),
                 (int)**(char **)(in_stack_00000024 + DAT_0012ae44));
      this_15 = (RecipeBook *)operator_new(0x174);
      RecipeBook::RecipeBook
                (this_15,*(CImage ***)(unaff_r6 + 0x1e8),*(CImage ***)(unaff_r6 + 0x1f0),
                 *(NoticeDialog **)(unaff_r6 + 0xd0),*(ConfirmDialog **)(unaff_r6 + 0x80),false,
                 *(uchar **)(*(int *)(unaff_r6 + 0xc) + 0x1c),'\x12');
      iVar5 = DAT_0012b1e4;
      *(RecipeBook **)(unaff_r6 + 0x94) = this_15;
      ScreenElement::setOrder((ScreenElement *)this_15,(int)**(char **)(in_stack_00000024 + iVar5));
      (**(code **)(**(int **)(unaff_r6 + 0x78) + 0x2c))
                (*(int **)(unaff_r6 + 0x78),*(undefined4 *)(unaff_r6 + 0x94));
      pTVar17 = (TutorialArrow *)operator_new(0x7c);
      TutorialArrow::TutorialArrow(pTVar17);
      iVar5 = DAT_0012b1e8;
      pGVar31 = unaff_r6 + 0xc4;
      *(TutorialArrow **)pGVar31 = pTVar17;
      ScreenElement::setOrder((ScreenElement *)pTVar17,(int)**(char **)(in_stack_00000024 + iVar5));
      iVar5 = DAT_0012b1ec;
      (**(code **)(**(int **)(unaff_r6 + 0x78) + 0x2c))
                (*(int **)(unaff_r6 + 0x78),*(undefined4 *)pGVar31);
      this_16 = (FridgeDialog *)operator_new(0x104);
      pTVar17 = *(TutorialArrow **)pGVar31;
      FridgeDialog::FridgeDialog
                (this_16,(Vector *)(*(int *)(unaff_r6 + 0xc) + iVar5),
                 *(CImage ***)(unaff_r6 + 0x1e8),*(CImage ***)(unaff_r6 + 0x1f0),'\x12',pTVar17,
                 *(ConfirmDialog **)(unaff_r6 + 0x80),*(NoticeDialog **)(unaff_r6 + 0xd0),false);
      iVar5 = DAT_0012b1f0;
      *(FridgeDialog **)(unaff_r6 + 0x9c) = this_16;
      ScreenElement::setOrder((ScreenElement *)this_16,(int)**(char **)(in_stack_00000024 + iVar5));
      (**(code **)(**(int **)(unaff_r6 + 0x78) + 0x2c))
                (*(int **)(unaff_r6 + 0x78),*(undefined4 *)(unaff_r6 + 0x9c));
      L_PrintLog((char *)(DAT_0012b1f4 + 0x12af2c),(char *)(DAT_0012b1f8 + 0x12af2e));
      this_17 = (PendingOrderDialog *)operator_new(0xec);
      PendingOrderDialog::PendingOrderDialog(this_17,unaff_r6);
      pGVar31 = unaff_r6 + 0xa0;
      *(PendingOrderDialog **)pGVar31 = this_17;
      (**(code **)(*(int *)this_17 + 0x1c))(this_17,0x12);
      ScreenElement::setOrder
                (*(ScreenElement **)pGVar31,(int)**(char **)(in_stack_00000024 + DAT_0012b1fc));
      (**(code **)(**(int **)(unaff_r6 + 0x78) + 0x2c))
                (*(int **)(unaff_r6 + 0x78),*(undefined4 *)pGVar31);
      *(undefined4 *)(unaff_r6 + 0xa4) = 0;
      this_18 = (ObjectiveCompleteDialog *)operator_new(0xb4);
      ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_18);
      *(ObjectiveCompleteDialog **)(unaff_r6 + 0x128) = this_18;
      (**(code **)(*(int *)this_18 + 0x1c))(this_18,0x12);
      FUN_00118458(*(undefined4 *)(unaff_r6 + 0x128),
                   *(undefined4 *)(*(int *)(unaff_r6 + 0xc) + 0x14));
      ScreenElement::setOrder
                (*(ScreenElement **)(unaff_r6 + 0x128),
                 (int)**(char **)(in_stack_00000024 + DAT_0012b200));
      (**(code **)(**(int **)(unaff_r6 + 0x128) + 0x20))(*(int **)(unaff_r6 + 0x128),0);
      (**(code **)(**(int **)(unaff_r6 + 0x78) + 0x2c))
                (*(int **)(unaff_r6 + 0x78),*(undefined4 *)(unaff_r6 + 0x128));
      this_19 = (ObjectiveDialog *)operator_new(0x16c);
      ObjectiveDialog::ObjectiveDialog
                (this_19,*(ConfirmDialog **)(unaff_r6 + 0x80),
                 *(ObjectiveCompleteDialog **)(unaff_r6 + 0x128),
                 *(BuyToxinDialog **)(unaff_r6 + 0x8c));
      *(ObjectiveDialog **)(unaff_r6 + 0x124) = this_19;
      (**(code **)(*(int *)this_19 + 0x1c))(this_19,0x12);
      FUN_00118458(*(undefined4 *)(unaff_r6 + 0x124),
                   *(undefined4 *)(*(int *)(unaff_r6 + 0xc) + 0x14));
      ScreenElement::setOrder
                (*(ScreenElement **)(unaff_r6 + 0x124),
                 (int)**(char **)(in_stack_00000024 + DAT_0012b204));
      (**(code **)(**(int **)(unaff_r6 + 0x124) + 0x20))(*(int **)(unaff_r6 + 0x124),0);
      (**(code **)(**(int **)(unaff_r6 + 0x78) + 0x2c))
                (*(int **)(unaff_r6 + 0x78),*(undefined4 *)(unaff_r6 + 0x124));
      *(undefined4 *)(unaff_r6 + 300) = 0;
      *(undefined4 *)(unaff_r6 + 0x130) = 0;
      *(undefined4 *)(unaff_r6 + 0xa8) = 0;
      *(undefined4 *)(unaff_r6 + 0x138) = 0;
      *(undefined4 *)(unaff_r6 + 0xd8) = 0;
      *(undefined4 *)(unaff_r6 + 0xdc) = 0;
      *(undefined4 *)(unaff_r6 + 0x120) = 0;
      *(undefined4 *)(unaff_r6 + 0x98) = 0;
      if ((*(int *)(*(int *)(unaff_r6 + 0x14) + 0xe8) !=
           **(int **)(in_stack_00000024 + DAT_0012b208)) ||
         (*(int *)(*(int *)(unaff_r6 + 0x14) + 0xec) != **(int **)(in_stack_00000024 + DAT_0012b20c)
         )) {
        lVar9 = Cafe::worldToDiamondCoords
                          (*(long *)(*(int *)(*(int *)(unaff_r6 + 0xc) + 0x590) + 0x48));
        lVar9 = Cafe::diamondToStaggeredCoords(lVar9);
        pCVar30 = *(Cafe **)(unaff_r6 + 0x14);
        lVar9 = CFPoint::add(lVar9,CONCAT22(*(undefined2 *)(pCVar30 + 0xf4),
                                            *(undefined2 *)(pCVar30 + 0xf8)));
        iVar5 = Cafe::staggeredCoordsToIndex(lVar9);
        uVar10 = Cafe::indexToWorldCoordsCenter(pCVar30,iVar5);
        *(undefined4 *)(*(int *)(*(int *)(unaff_r6 + 0xc) + 0x590) + 0x48) = uVar10;
      }
      iVar5 = ZombieCafe::checkNickNameEntry((void *)*puVar35);
      pcVar32 = *(char **)(in_stack_00000024 + DAT_0012b210);
      if (iVar5 == 0) {
        pcVar33 = (char *)(DAT_0012b230 + 0x12b0f4);
        L_PrintLog(pcVar33,(char *)(DAT_0012b234 + 0x12b0f8));
        sprintf(&stack0x000000c4,(char *)(DAT_0012b238 + 0x12b104),pcVar32);
        L_PrintLog(pcVar33,&stack0x000000c4);
        sVar18 = strlen(pcVar32);
        pSVar34 = (String *)(*(int *)(*(int *)(unaff_r6 + 0xc) + 0x590) + 8);
        if (sVar18 < 4) {
          Vector<String>::elementAt((int)&stack0x0000007c);
          String::operator=(pSVar34,&stack0x0000007c);
          pSVar34 = (String *)&stack0x0000007c;
        }
        else {
          String::String((String *)&stack0x00000074,pcVar32);
          String::operator=(pSVar34,&stack0x00000074);
          pSVar34 = (String *)&stack0x00000074;
        }
      }
      else {
        L_PrintLog((char *)(DAT_0012b214 + 0x12b094),(char *)(DAT_0012b218 + 0x12b096));
        pcVar33 = *(char **)(in_stack_00000024 + DAT_0012b21c);
        strcpy(pcVar32,pcVar33);
        L_PrintLog((char *)(DAT_0012b220 + 0x12b0ae),pcVar33);
        pcVar33 = *(char **)(in_stack_00000024 + DAT_0012b228);
        strcpy(*(char **)(in_stack_00000024 + DAT_0012b224),pcVar33);
        L_PrintLog((char *)(DAT_0012b22c + 0x12b0c8),pcVar33);
        ZombieCafe::setServerNickName((void *)*puVar35);
        iVar5 = *(int *)(*(int *)(unaff_r6 + 0xc) + 0x590);
        String::String((String *)&stack0x0000006c,pcVar32);
        String::operator=((String *)(iVar5 + 8),&stack0x0000006c);
        pSVar34 = (String *)&stack0x0000006c;
      }
      String::~String(pSVar34);
      iVar5 = DAT_0012b248;
      L_PrintLog((char *)(DAT_0012b240 + 0x12b15e),(char *)(DAT_0012b244 + 0x12b160));
      pCVar19 = (CafeObject *)GameStateCafe::createAvatarInstance(unaff_r6);
      *(CafeObject **)(unaff_r6 + 0x18) = pCVar19;
      Cafe::addCafeObject(*(Cafe **)(unaff_r6 + 0x14),pCVar19);
      iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + iVar5),'\x16');
      if (iVar5 == 0) {
        iVar5 = *(int *)(unaff_r6 + 0x18);
        lVar9 = Cafe::diamondToStaggeredCoords
                          (**(int **)(in_stack_00000024 + DAT_0012b6a4) + -1,
                           **(int **)(in_stack_00000024 + DAT_0012b6a8) + 1 +
                           **(int **)(in_stack_00000024 + DAT_0012b6ac));
        uVar4 = Cafe::staggeredCoordsToIndex(lVar9);
        *(undefined2 *)(iVar5 + 0x2c) = uVar4;
        piVar29 = *(int **)(unaff_r6 + 0x18);
        pcVar26 = *(code **)(*piVar29 + 0xc);
        uVar10 = Cafe::indexToWorldCoordsCenter
                           (*(Cafe **)(unaff_r6 + 0x14),(int)(short)piVar29[0xb]);
        (*pcVar26)(piVar29,uVar10);
        CharacterInstance::setCurrentAnimation
                  (*(CharacterInstance **)(unaff_r6 + 0x18),'\x01','\x01',false);
      }
      else {
        *(undefined4 *)(unaff_r6 + 0x1a0) = 0;
        GameStateCafe::advanceTime(CONCAT44(pTVar17,0x12));
        GameStateCafe::advanceCharacter
                  (unaff_r6,*(CharacterInstance **)(unaff_r6 + 0x18),CONCAT44(pTVar17,0x12));
        iVar5 = DAT_0012b24c;
        CapcomOrderableList<CafeObject*>::sort
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r6 + 0x14) + 0x20),
                   *(CafeObject **)(unaff_r6 + 0x18));
        sprintf(&stack0x000000c4,(char *)(DAT_0012b254 + 0x12b1bc),
                *(int *)(*(int *)(unaff_r6 + 0xc) + DAT_0012b250 + 4) + 1);
        L_PrintLog((char *)(DAT_0012b258 + 0x12b1ca),&stack0x000000c4);
        for (iVar23 = 0; iVar23 < *(int *)(*(int *)(unaff_r6 + 0xc) + DAT_0012b2b8 + 4) + 1;
            iVar23 = iVar23 + 1) {
          pCVar19 = *(CafeObject **)(iVar23 * 4 + *(int *)(unaff_r6 + 0x24));
          if (pCVar19 == (CafeObject *)0x0) {
            pcVar33 = (char *)(DAT_0012b2b0 + 0x12b26c);
            pcVar32 = (char *)(iVar5 + 0x12b1b6);
          }
          else {
            pcVar33 = &UNK_0012b1e2 + DAT_0012b260;
            pcVar32 = (char *)(DAT_0012b25c + 0x12b1e0);
          }
          L_PrintLog(pcVar32,pcVar33);
          GameStateCafe::advanceCharacter
                    (unaff_r6,(CharacterInstance *)pCVar19,CONCAT44(pTVar17,0x12));
          *(undefined4 *)(pCVar19 + 0xac) = **(undefined4 **)(in_stack_00000024 + DAT_0012b2b4);
          CapcomOrderableList<CafeObject*>::sort
                    ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r6 + 0x14) + 0x20),pCVar19)
          ;
        }
        GameStateCafe::advanceStoves(CONCAT44(pTVar17,0x12));
      }
      GameStateCafe::resetCustomerTimer(unaff_r6);
      iVar5 = *(int *)(*(int *)(unaff_r6 + 0xc) + DAT_0012b6b0);
      uVar10 = *(undefined4 *)(unaff_r6 + 0xc4);
      *(undefined4 *)(iVar5 + DAT_0012b6b4) = *(undefined4 *)(unaff_r6 + 0x7c);
      *(undefined4 *)(iVar5 + 0x788) = uVar10;
      *(undefined4 *)(iVar5 + 0x778) = *(undefined4 *)(in_stack_00000024 + DAT_0012b6b8);
      *(GameStateCafe **)(iVar5 + DAT_0012b6bc) = unaff_r6;
      unaff_r6[DAT_0012b6c0] = (GameStateCafe)0x1;
      iVar5 = CapcomApp::getInstance();
      uVar10 = *(undefined4 *)(iVar5 + 0x40);
      iVar5 = CapcomApp::getInstance();
      uVar20 = *(undefined4 *)(iVar5 + 0x40);
      iVar5 = CapcomApp::getInstance();
      uVar21 = *(undefined4 *)(iVar5 + 0x50);
      iVar5 = CapcomApp::getInstance();
      uVar37 = *(undefined4 *)(iVar5 + 0x44);
      iVar5 = CapcomApp::getInstance();
      uVar39 = *(undefined4 *)(iVar5 + 0x50);
      pSVar11 = (ScreenElement *)operator_new(0x60);
      ScreenElement::ScreenElement(pSVar11,(ScreenElement *)0x0);
      bVar3 = (bool)__mulsf3(uVar37,uVar39);
      *(ScreenElement **)(unaff_r6 + 0xe0) = pSVar11;
      (**(code **)(*(int *)pSVar11 + 0x1c))(pSVar11,0x14);
      piVar29 = *(int **)(unaff_r6 + 0xe0);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      this_20 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement
                (this_20,*(CImage **)(*(int *)(unaff_r6 + 0x1e8) + 0x68),extraout_s0_04,extraout_s1,
                 (uchar)uVar10,bVar3);
      *(ImageElement **)(unaff_r6 + 0xe4) = this_20;
      (*pcVar26)(piVar29,this_20);
      piVar29 = *(int **)(unaff_r6 + 0xe0);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      pZVar13 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton
                (pZVar13,'!',*(CImage **)(*(int *)(unaff_r6 + 0x1e8) + 0x2c),(CImage *)0x0,0,0,false
                );
      __mulsf3(uVar20,uVar21);
      *(ZCImageButton **)(unaff_r6 + 0xe8) = pZVar13;
      uVar40 = (*pcVar26)(piVar29,pZVar13);
      ImageButton::setScale
                (*(ImageButton **)(unaff_r6 + 0xe8),(float)uVar40,(float)((ulonglong)uVar40 >> 0x20)
                );
      piVar29 = *(int **)(unaff_r6 + 0xe0);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      pZVar13 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton
                (pZVar13,'!',*(CImage **)(*(int *)(unaff_r6 + 0x1e8) + 0x48),(CImage *)0x0,0,0,false
                );
      *(ZCImageButton **)(unaff_r6 + 0xf0) = pZVar13;
      uVar40 = (*pcVar26)(piVar29,pZVar13);
      ImageButton::setScale
                (*(ImageButton **)(unaff_r6 + 0xf0),(float)uVar40,(float)((ulonglong)uVar40 >> 0x20)
                );
      pcVar26 = *(code **)(**(int **)(unaff_r6 + 0xe8) + 0x2c);
      Vector<String>::elementAt((int)&stack0x00000084);
      iVar23 = *(int *)(unaff_r6 + 0xc);
      iVar5 = SmDev();
      uVar10 = *(undefined4 *)((*(int *)(DAT_0012b6c8 + iVar5 * 4 + 0x12b4c8) + 0x136) * 4 + iVar23)
      ;
      uVar20 = *(undefined4 *)(unaff_r6 + 0xe8);
      pBVar22 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar22,&stack0x00000084,uVar10,0xffffffff);
      *(BitmapTextElement **)(unaff_r6 + 0xf4) = pBVar22;
      (*pcVar26)(uVar20,pBVar22);
      String::~String((String *)&stack0x00000084);
      iVar5 = DAT_0012b6cc;
      *(undefined1 *)(*(int *)(unaff_r6 + 0xf4) + 0x7f) = 0x12;
      pcVar26 = *(code **)(**(int **)(unaff_r6 + 0xf0) + 0x2c);
      String::String((String *)&stack0x0000008c,(char *)(iVar5 + 0x12b4de));
      iVar23 = *(int *)(unaff_r6 + 0xc);
      iVar5 = SmDev();
      uVar10 = *(undefined4 *)((*(int *)(DAT_0012b6d0 + iVar5 * 4 + 0x12b54a) + 0x136) * 4 + iVar23)
      ;
      uVar20 = *(undefined4 *)(unaff_r6 + 0xf0);
      pBVar22 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar22,&stack0x0000008c,uVar10,0xffffffff);
      *(BitmapTextElement **)(unaff_r6 + 0x104) = pBVar22;
      (*pcVar26)(uVar20,pBVar22);
      String::~String((String *)&stack0x0000008c);
      *(undefined1 *)(*(int *)(unaff_r6 + 0x104) + 0x7f) = 0x12;
      piVar29 = *(int **)(unaff_r6 + 0xe0);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      pZVar13 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton
                (pZVar13,'!',*(CImage **)(*(int *)(unaff_r6 + 0x1e8) + 0x18),(CImage *)0x0,0,0,false
                );
      *(ZCImageButton **)(unaff_r6 + 0xec) = pZVar13;
      uVar40 = (*pcVar26)(piVar29,pZVar13);
      ImageButton::setScale
                (*(ImageButton **)(unaff_r6 + 0xec),(float)uVar40,(float)((ulonglong)uVar40 >> 0x20)
                );
      piVar29 = *(int **)(unaff_r6 + 0xe0);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      String::String((String *)&stack0x00000094,0);
      iVar23 = *(int *)(unaff_r6 + 0xc);
      iVar5 = SmDev();
      uVar10 = *(undefined4 *)((*(int *)(DAT_0012b6d4 + iVar5 * 4 + 0x12b624) + 0x136) * 4 + iVar23)
      ;
      pBVar22 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar22,&stack0x00000094,uVar10,0xffffffff);
      *(BitmapTextElement **)(unaff_r6 + 0xf8) = pBVar22;
      (*pcVar26)(piVar29,pBVar22);
      String::~String((String *)&stack0x00000094);
      piVar29 = *(int **)(unaff_r6 + 0xe0);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      String::String((String *)&stack0x0000009c,0);
      iVar23 = *(int *)(unaff_r6 + 0xc);
      iVar5 = SmDev();
      uVar10 = *(undefined4 *)((*(int *)(DAT_0012b6d8 + iVar5 * 4 + 0x12b688) + 0x136) * 4 + iVar23)
      ;
      SmDev();
      pBVar22 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar22,&stack0x0000009c,uVar10,0xffffffff);
      *(BitmapTextElement **)(unaff_r6 + 0x108) = pBVar22;
      (*pcVar26)(piVar29,pBVar22);
      String::~String((String *)&stack0x0000009c);
      piVar29 = *(int **)(unaff_r6 + 0xe0);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      String::String((String *)&stack0x000000a4,0);
      iVar23 = *(int *)(unaff_r6 + 0xc);
      iVar5 = SmDev();
      uVar10 = *(undefined4 *)((*(int *)(DAT_0012b6e0 + iVar5 * 4 + 0x12b6f8) + 0x136) * 4 + iVar23)
      ;
      pBVar22 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar22,&stack0x000000a4,uVar10,0xffffffff);
      *(BitmapTextElement **)(unaff_r6 + 0x100) = pBVar22;
      (*pcVar26)(piVar29,pBVar22);
      String::~String((String *)&stack0x000000a4);
      *(undefined1 *)(*(int *)(unaff_r6 + 0x100) + 0x7f) = 0x21;
      piVar29 = *(int **)(unaff_r6 + 0xe0);
      pcVar26 = *(code **)(*piVar29 + 0x2c);
      String::String((String *)&stack0x000000ac,0);
      iVar23 = *(int *)(unaff_r6 + 0xc);
      iVar5 = SmDev();
      uVar10 = *(undefined4 *)((*(int *)(DAT_0012ba7c + iVar5 * 4 + 0x12b7a8) + 0x136) * 4 + iVar23)
      ;
      pBVar22 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar22,&stack0x000000ac,uVar10,0xffffffff);
      *(BitmapTextElement **)(unaff_r6 + 0xfc) = pBVar22;
      (*pcVar26)(piVar29,pBVar22);
      String::~String((String *)&stack0x000000ac);
      iVar23 = DAT_0012ba84;
      iVar5 = DAT_0012ba80;
      *(undefined1 *)(*(int *)(unaff_r6 + 0xfc) + 0x7f) = 0x21;
      L_PrintLog((char *)(iVar5 + 0x12b790),(char *)(iVar23 + 0x12b792));
      *(undefined4 *)(unaff_r6 + 0x10c) = 0;
      Cafe::populateWithCustomers(*(Cafe **)(unaff_r6 + 0x14),unaff_r6);
      GameStateCafe::saveServerData(unaff_r6);
      ZombieCafe::saveGameState(*(ZombieCafe **)(unaff_r6 + 0xc),false);
      iVar5 = DAT_0012ba8c;
      iVar23 = *(int *)(unaff_r6 + 0xc);
      *(undefined4 *)(iVar23 + 0x438) = *(undefined4 *)(in_stack_00000024 + DAT_0012ba88);
      *(GameStateCafe **)(iVar23 + DAT_0012ba90) = unaff_r6;
      iVar23 = *(int *)(unaff_r6 + 0xc);
      *(undefined4 *)(iVar23 + 0x440) = *(undefined4 *)(in_stack_00000024 + DAT_0012ba94);
      *(GameStateCafe **)(iVar23 + DAT_0012ba98) = unaff_r6;
      iVar23 = *(int *)(unaff_r6 + 0xc);
      *(undefined4 *)(iVar23 + 0x448) = *(undefined4 *)(in_stack_00000024 + DAT_0012ba9c);
      *(GameStateCafe **)(iVar23 + DAT_0012baa0) = unaff_r6;
      iVar23 = *(int *)(unaff_r6 + 0xc);
      *(undefined4 *)(iVar23 + 0x450) = *(undefined4 *)(in_stack_00000024 + DAT_0012baa4);
      *(GameStateCafe **)(iVar23 + DAT_0012baa8) = unaff_r6;
      iVar23 = *(int *)(unaff_r6 + 0xc);
      *(undefined4 *)(iVar23 + 0x458) = *(undefined4 *)(in_stack_00000024 + DAT_0012baac);
      *(GameStateCafe **)(iVar23 + DAT_0012bab0) = unaff_r6;
      iVar23 = *(int *)(unaff_r6 + 0xc);
      *(undefined4 *)(iVar23 + 0x460) = *(undefined4 *)(in_stack_00000024 + DAT_0012bab4);
      *(GameStateCafe **)(iVar23 + DAT_0012bab8) = unaff_r6;
      iVar23 = *(int *)(unaff_r6 + 0xc);
      *(undefined4 *)(iVar23 + 0x468) = *(undefined4 *)(in_stack_00000024 + DAT_0012babc);
      *(GameStateCafe **)(iVar23 + DAT_0012bac0) = unaff_r6;
      iVar23 = *(int *)(unaff_r6 + 0xc);
      *(undefined4 *)(iVar23 + 0x470) = *(undefined4 *)(in_stack_00000024 + DAT_0012bac4);
      *(GameStateCafe **)(iVar23 + DAT_0012bac8) = unaff_r6;
      iVar23 = *(int *)(unaff_r6 + 0xc);
      *(undefined4 *)(iVar23 + 0x478) = *(undefined4 *)(in_stack_00000024 + DAT_0012bacc);
      *(GameStateCafe **)(iVar23 + DAT_0012bad0) = unaff_r6;
      iVar14 = *(int *)(unaff_r6 + 0xc);
      *(undefined4 *)(iVar14 + 0x480) = *(undefined4 *)(in_stack_00000024 + DAT_0012bad4);
      iVar23 = DAT_0012badc;
      *(GameStateCafe **)(iVar14 + DAT_0012bad8) = unaff_r6;
      *(undefined4 *)(unaff_r6 + 0x1c4) = 0;
      *(undefined4 *)(unaff_r6 + 0x1c8) = 0;
      L_PrintLog((char *)(iVar5 + 0x12b7c2),(char *)(iVar23 + 0x12b864));
      *(undefined4 *)(unaff_r6 + 0x1cc) = 0;
      this_21 = (ScreenshotTaker *)operator_new(0x14);
      ScreenshotTaker::ScreenshotTaker(this_21);
      *(ScreenshotTaker **)(unaff_r6 + 0x11c) = this_21;
      *(undefined4 *)(unaff_r6 + 0x194) = 0;
      unaff_r6[0x19a] = (GameStateCafe)0x0;
      unaff_r6[DAT_0012bae0] = (GameStateCafe)0x0;
      *(undefined4 *)(unaff_r6 + 0x1b0) = 0;
      cVar1 = *(char *)(*(int *)(unaff_r6 + 0xc) + 0x6e0);
      CapcomDate::now((CapcomDate *)&stack0x000000b4);
      if (in_stack_000000b4._2_1_ != cVar1) {
        iVar5 = *(int *)(unaff_r6 + 0xc);
        CapcomDate::now((CapcomDate *)&stack0x000000bc);
        *(undefined1 *)(iVar5 + 0x6e0) = in_stack_000000bc._2_1_;
        *(undefined4 *)(*(int *)(unaff_r6 + 0xc) + DAT_0012bae4) = 0;
      }
      iVar5 = *(int *)(unaff_r6 + 0xc);
      if (((*(char *)(iVar5 + DAT_0012bae8) == '\0') && (*(char *)(iVar5 + 0x6f0) == '\0')) &&
         (*(char *)(iVar5 + DAT_0012baec) != '\0')) {
        *(undefined1 *)(iVar5 + DAT_0012bae8) = 1;
        iVar5 = DAT_0012baf0;
        *(int *)(*(int *)(unaff_r6 + 0xc) + DAT_0012baf0) =
             *(int *)(*(int *)(unaff_r6 + 0xc) + DAT_0012baf0) + 1;
        if (4 < *(int *)(*(int *)(unaff_r6 + 0xc) + iVar5)) {
          *(undefined1 *)(*(int *)(unaff_r6 + 0xc) + 0x6f0) = 1;
        }
      }
      iVar5 = ZombieCafe::getPurchasingFlag();
      if (iVar5 == 0) {
        L_PrintLog((char *)(DAT_0012baf4 + 0x12b906),(char *)(DAT_0012baf8 + 0x12b908));
        GameStateCafe::L_PurchaseDBCheck(unaff_r6);
      }
      else {
        L_PrintLog((char *)(DAT_0012bafc + 0x12b91a),(char *)(DAT_0012bb00 + 0x12b91c));
      }
      GameStateCafe::checkFriendReward(unaff_r6);
      GameStateCafe::checkBeginerBonus(unaff_r6);
      GameStateCafe::checkUpdateBonus(unaff_r6);
      iVar5 = DAT_0012bb04;
      iVar23 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012bb04),'.');
      if (iVar23 != 0) {
        L_PrintLog((char *)(DAT_0012bb08 + 0x12b94a),(char *)(DAT_0012bb0c + 0x12b94c));
        ZombieCafe::loadGetEntryInfo(*(ZombieCafe **)(unaff_r6 + 0xc));
      }
      if (bVar2) {
        PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(unaff_r6 + 0xcc),6,true);
        PullMenuElement::ifIsCloseNewIndicatorPull();
      }
      GameStateCafe::checkAndAdjustQuest(unaff_r6);
      iVar23 = DAT_0012bb04;
      if ((*(int *)(*(int *)(unaff_r6 + 0xc) + 0x680) == 4) &&
         (iVar14 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + iVar5),'I'),
         iVar14 == 0)) {
        TutorialSystem::setTutorialCompleted
                  (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + iVar23),'H');
        TutorialSystem::setTutorialCompleted
                  (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + iVar23),'I');
      }
      if ((**(char **)(in_stack_00000024 + DAT_0012bb10) != '\0') &&
         (**(int **)(*(int *)(unaff_r6 + 0xc) + 0xc08) != DAT_0012bb14)) {
        Vector<int>::insertElementAt
                  ((Vector<int> *)(*(int *)(unaff_r6 + 0xc) + 0xc00),DAT_0012bb14,0);
      }
      iVar5 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + iVar5),'U');
      if (iVar5 != 0) {
        TutorialSystem::setTutorialCompleted
                  (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_0012bb04),'V');
      }
      javaAsyncQueryInventory();
      if (in_stack_000001c4 != *in_stack_00000044) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(1);
      }
      return;
    }
    iVar5 = 0;
    do {
      iVar23 = ZombieCafe::isRecipeUnlocked(pZVar38,(int)piVar29,(uchar)iVar5);
      if (iVar23 != 0) {
        Quest::runQuest(*(int *)(pZVar38 + 0x40),1,piVar29);
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 10);
    piVar29 = (int *)((int)piVar29 + 1);
  } while( true );
}


