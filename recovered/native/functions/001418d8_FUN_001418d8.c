/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001418d8 FUN_001418d8 */

void FUN_001418d8(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  CapcomOrderableList<Furniture*> *this;
  CharacterInstance *this_00;
  long lVar4;
  undefined4 uVar5;
  Stove *pSVar6;
  CookTask *this_01;
  ReanimateTask *this_02;
  RestTask *this_03;
  ScreenElement *this_04;
  MessageElement *this_05;
  ConfirmDialog *this_06;
  NoticeDialog *this_07;
  int *piVar7;
  FriendCafeHudElement *pFVar8;
  BuyToxinDialog *this_08;
  CharacterCommandBar *this_09;
  CharacterDetails *this_10;
  RecipeBook *this_11;
  ObjectiveCompleteDialog *this_12;
  ObjectiveDialog *this_13;
  Vector<FoodStack*> *this_14;
  FridgeDialog *this_15;
  CafeObject *pCVar9;
  TutorialArrow *this_16;
  void *__ptr;
  uint uVar10;
  char *pcVar11;
  undefined1 uVar12;
  Cafe *pCVar13;
  FoodStack *pFVar14;
  String *pSVar15;
  CFPathFinder *pCVar16;
  code *pcVar17;
  TutorialArrow *pTVar18;
  int iVar19;
  CapcomOrderableList<Furniture*> *unaff_r4;
  Character *pCVar20;
  GameStateFriendCafe *unaff_r5;
  int *unaff_r6;
  int unaff_r7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  int iStack00000018;
  int *in_stack_00000024;
  int in_stack_000000dc;
  
  while (iVar3 = CapcomOrderableList<Furniture*>::nextItem(unaff_r4), iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x2e) = 0;
  }
  CapcomOrderableList<Furniture*>::removeAll(unaff_r4);
  operator_delete(unaff_r4);
  this = (CapcomOrderableList<Furniture*> *)
         Cafe::createDistanceSortedFurnitureList(*(Cafe **)(unaff_r5 + 0x34),'\x03',0);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
  while (iVar3 = CapcomOrderableList<Furniture*>::nextItem(this), iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x2e) = 0;
  }
  CapcomOrderableList<Furniture*>::removeAll(this);
  operator_delete(this);
  *(undefined4 *)(unaff_r5 + 0x188) = 0;
  *(undefined4 *)(unaff_r5 + 0x18c) = 0;
  for (iStack00000018 = 0; iStack00000018 < *(int *)(unaff_r5 + 0x28) + 1;
      iStack00000018 = iStack00000018 + 1) {
    pCVar20 = *(Character **)(iStack00000018 * 4 + *(int *)(unaff_r5 + 0x2c));
    pCVar16 = *(CFPathFinder **)(*(int *)(unaff_r5 + 0x34) + 0x5c);
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,pCVar20,pCVar16);
    Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x34),(CafeObject *)this_00);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(unaff_r5 + 300),this_00);
    if ((*(int *)(*(int *)(unaff_r5 + 0x34) + 0xe8) != **(int **)(unaff_r7 + DAT_00141afc)) ||
       (*(int *)(*(int *)(unaff_r5 + 0x34) + 0xec) != **(int **)(unaff_r7 + DAT_00141b00))) {
      lVar4 = Cafe::worldToDiamondCoords
                        (*(int *)(pCVar20 + 0x48) >> 0x10,(int)(short)*(int *)(pCVar20 + 0x48));
      lVar4 = Cafe::diamondToStaggeredCoords(lVar4);
      pCVar13 = *(Cafe **)(unaff_r5 + 0x34);
      lVar4 = CFPoint::add(lVar4,CONCAT22(*(undefined2 *)(pCVar13 + 0xf4),
                                          *(undefined2 *)(pCVar13 + 0xf8)));
      iVar3 = Cafe::staggeredCoordsToIndex(lVar4);
      uVar5 = Cafe::indexToWorldCoordsCenter(pCVar13,iVar3);
      *(undefined4 *)(pCVar20 + 0x48) = uVar5;
    }
    (**(code **)(*(int *)this_00 + 0xc))(this_00,*(undefined4 *)(pCVar20 + 0x48));
    lVar4 = Cafe::worldToDiamondCoords
                      (*(int *)(pCVar20 + 0x48) >> 0x10,(int)(short)*(int *)(pCVar20 + 0x48));
    lVar4 = Cafe::diamondToStaggeredCoords(lVar4);
    sVar2 = Cafe::staggeredCoordsToIndex(lVar4);
    CafeObject::setTileIndex((CafeObject *)this_00,sVar2,*(Cafe **)(unaff_r5 + 0x34));
    if (pCVar20[0x44] == (Character)0x2) {
      iVar3 = Cafe::getNextTile((int)*(short *)(this_00 + 0x2c),(uint)(byte)pCVar20[0x4c]);
      pSVar6 = (Stove *)Cafe::getFurniture(*(Cafe **)(unaff_r5 + 0x34),iVar3);
      if ((pSVar6 != (Stove *)0x0) && (*(char *)(*(int *)(pSVar6 + 0x38) + 0x44) == '\x01')) {
        this_01 = (CookTask *)operator_new(0x34);
        CookTask::CookTask(this_01,this_00,pSVar6,*(Cafe **)(unaff_r5 + 0x34));
        CharacterInstance::addTask(this_00,(Task *)this_01);
      }
    }
    iVar3 = DAT_00141b04;
    if ((*(int *)(pCVar20 + 0x50) < 1) || (pCVar20[5] != (Character)0x2)) {
      if (pCVar20[0x44] == (Character)0x3) {
        pCVar20[0x4c] = (Character)0x0;
        lVar4 = Cafe::diamondToStaggeredCoords
                          (**(int **)(unaff_r7 + DAT_00141ef0) + -1,
                           (uint)*(byte *)(*(int *)(unaff_r5 + 0x34) + 0xa1) +
                           **(int **)(unaff_r7 + DAT_00141ef4) + 1);
        sVar2 = Cafe::staggeredCoordsToIndex(lVar4);
        CafeObject::setTileIndex((CafeObject *)this_00,sVar2,*(Cafe **)(unaff_r5 + 0x34));
        this_03 = (RestTask *)operator_new(0x40);
        RestTask::RestTask(this_03,this_00,*(Cafe **)(unaff_r5 + 0x34));
        CharacterInstance::addTask(this_00,(Task *)this_03);
      }
    }
    else {
      pCVar20[0x4c] = (Character)0x0;
      if (**(int **)(unaff_r7 + iVar3) <= *(int *)(unaff_r5 + 0x188)) {
        *(undefined4 *)(unaff_r5 + 0x188) = 0;
        *(int *)(unaff_r5 + 0x18c) = *(int *)(unaff_r5 + 0x18c) + 1;
      }
      lVar4 = Cafe::diamondToStaggeredCoords
                        ((**(int **)(unaff_r7 + DAT_00141b08) + -1) - *(int *)(unaff_r5 + 0x188),
                         (uint)*(byte *)(*(int *)(unaff_r5 + 0x34) + 0xa1) +
                         **(int **)(unaff_r7 + DAT_00141b0c) + 1 + *(int *)(unaff_r5 + 0x18c));
      sVar2 = Cafe::staggeredCoordsToIndex(lVar4);
      CafeObject::setTileIndex((CafeObject *)this_00,sVar2,*(Cafe **)(unaff_r5 + 0x34));
      this_02 = (ReanimateTask *)operator_new(0x28);
      ReanimateTask::ReanimateTask(this_02,this_00,*(Cafe **)(unaff_r5 + 0x34));
      CharacterInstance::addTask(this_00,(Task *)this_02);
      *(int *)(unaff_r5 + 0x188) = *(int *)(unaff_r5 + 0x188) + 1;
    }
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),
               (CafeObject *)this_00);
  }
  (**(code **)(*unaff_r6 + 0xc))(unaff_r6);
  (**(code **)(*unaff_r6 + 4))(unaff_r6);
  pCVar13 = *(Cafe **)(unaff_r5 + 0x34);
  lVar4 = Cafe::diamondToStaggeredCoords
                    (**(int **)(unaff_r7 + DAT_00141ef0) + -3,
                     **(int **)(unaff_r7 + DAT_00141ef4) + 2);
  iVar3 = Cafe::staggeredCoordsToIndex(lVar4);
  lVar4 = Cafe::indexToWorldCoordsCenter(pCVar13,iVar3);
  lVar4 = CFPoint::multiplyf(lVar4,extraout_s0);
  uVar5 = CFPoint::add(lVar4,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x14));
  *(undefined4 *)(unaff_r5 + 0xa8) = uVar5;
  this_04 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_04,(ScreenElement *)0x0);
  *(ScreenElement **)(unaff_r5 + 0x1d8) = this_04;
  (**(code **)(*(int *)this_04 + 0x18))
            (this_04,*(int *)(*(int *)(unaff_r5 + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(unaff_r5 + 0xc) + 0x10));
  this_05 = (MessageElement *)operator_new(0x90);
  MessageElement::MessageElement(this_05,*(CImage ***)(unaff_r5 + 400),'\f');
  *(MessageElement **)(unaff_r5 + 0x1ac) = this_05;
  ScreenElement::setOrder((ScreenElement *)this_05,100);
  (**(code **)(**(int **)(unaff_r5 + 0x1d8) + 0x2c))
            (*(int **)(unaff_r5 + 0x1d8),*(undefined4 *)(unaff_r5 + 0x1ac));
  this_06 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_06,*(CImage **)(*(int *)(unaff_r5 + 0x194) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 400) + 0x28),
             *(CImage **)(*(int *)(unaff_r5 + 400) + 0x44),0,extraout_s0_00,(CImage *)0x40000000);
  *(ConfirmDialog **)(unaff_r5 + 0x1c8) = this_06;
  ScreenElement::setOrder((ScreenElement *)this_06,99);
  (**(code **)(**(int **)(unaff_r5 + 0x1c8) + 0x1c))(*(int **)(unaff_r5 + 0x1c8),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x1d8) + 0x2c))
            (*(int **)(unaff_r5 + 0x1d8),*(undefined4 *)(unaff_r5 + 0x1c8));
  this_07 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_07,*(CImage **)(*(int *)(unaff_r5 + 0x194) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 400) + 0x28),extraout_s0_01);
  *(NoticeDialog **)(unaff_r5 + 0x1b0) = this_07;
  ScreenElement::setOrder((ScreenElement *)this_07,0x62);
  (**(code **)(**(int **)(unaff_r5 + 0x1b0) + 0x1c))(*(int **)(unaff_r5 + 0x1b0),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x1d8) + 0x2c))
            (*(int **)(unaff_r5 + 0x1d8),*(undefined4 *)(unaff_r5 + 0x1b0));
  piVar7 = *(int **)(unaff_r5 + 0x1d8);
  pcVar17 = *(code **)(*piVar7 + 0x2c);
  pFVar8 = (FriendCafeHudElement *)operator_new(0x104);
  FriendCafeHudElement::FriendCafeHudElement
            (pFVar8,*(_func_void_void_ptr_int **)(unaff_r7 + DAT_00141ef8),unaff_r5);
  *(FriendCafeHudElement **)(unaff_r5 + 0x19c) = pFVar8;
  (*pcVar17)(piVar7);
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x19c),(int)**(char **)(unaff_r7 + DAT_00141efc));
  FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(unaff_r5 + 0x19c),0,true);
  FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(unaff_r5 + 0x19c),3,true);
  FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(unaff_r5 + 0x19c),10,false)
  ;
  FriendCafeHudElement::invisibleAddToxinButton();
  this_08 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_08);
  *(BuyToxinDialog **)(unaff_r5 + 0x1c0) = this_08;
  ScreenElement::setOrder((ScreenElement *)this_08,(int)**(char **)(unaff_r7 + DAT_00141f00));
  (**(code **)(**(int **)(unaff_r5 + 0x1d8) + 0x2c))
            (*(int **)(unaff_r5 + 0x1d8),*(undefined4 *)(unaff_r5 + 0x1c0));
  (**(code **)(**(int **)(unaff_r5 + 0x1c0) + 0x1c))(*(int **)(unaff_r5 + 0x1c0),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x1c0) + 0x20))(*(int **)(unaff_r5 + 0x1c0),0);
  piVar7 = *(int **)(unaff_r5 + 0x1d8);
  pcVar17 = *(code **)(*piVar7 + 0x2c);
  this_09 = (CharacterCommandBar *)operator_new(0xd8);
  CharacterCommandBar::CharacterCommandBar
            (this_09,(ConfirmDialog *)0x0,*(BuyToxinDialog **)(unaff_r5 + 0x1c0));
  *(CharacterCommandBar **)(unaff_r5 + 0x1a4) = this_09;
  (*pcVar17)(piVar7);
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x1a4),(int)**(char **)(unaff_r7 + DAT_00141f04));
  (**(code **)(**(int **)(unaff_r5 + 0x1a4) + 0x1c))(*(int **)(unaff_r5 + 0x1a4),0x11);
  this_10 = (CharacterDetails *)operator_new(0x194);
  CharacterDetails::CharacterDetails
            (this_10,(Vector *)(unaff_r5 + 0x24),false,*(ConfirmDialog **)(unaff_r5 + 0x1c8),
             (NoticeDialog *)0x0,(GameStateCafe *)0x0,'\x01',false);
  *(CharacterDetails **)(unaff_r5 + 0x1a8) = this_10;
  (**(code **)(*(int *)this_10 + 0x1c))(this_10,0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x1a8) + 0x20))(*(int **)(unaff_r5 + 0x1a8),0);
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x1a8),(int)**(char **)(unaff_r7 + DAT_00141f08));
  (**(code **)(**(int **)(unaff_r5 + 0x1d8) + 0x2c))
            (*(int **)(unaff_r5 + 0x1d8),*(undefined4 *)(unaff_r5 + 0x1a8));
  this_11 = (RecipeBook *)operator_new(0x174);
  RecipeBook::RecipeBook
            (this_11,*(CImage ***)(unaff_r5 + 400),*(CImage ***)(unaff_r5 + 0x198),
             *(NoticeDialog **)(unaff_r5 + 0x1b0),*(ConfirmDialog **)(unaff_r5 + 0x1c8),true,
             *(uchar **)(unaff_r5 + 0x20c),'\x12');
  iVar3 = DAT_00141f0c;
  *(RecipeBook **)(unaff_r5 + 0x1b4) = this_11;
  ScreenElement::setOrder((ScreenElement *)this_11,(int)**(char **)(unaff_r7 + iVar3));
  (**(code **)(**(int **)(unaff_r5 + 0x1d8) + 0x2c))
            (*(int **)(unaff_r5 + 0x1d8),*(undefined4 *)(unaff_r5 + 0x1b4));
  this_12 = (ObjectiveCompleteDialog *)operator_new(0xb4);
  ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_12);
  *(ObjectiveCompleteDialog **)(unaff_r5 + 0x1d0) = this_12;
  (**(code **)(*(int *)this_12 + 0x1c))(this_12,0x12);
  FUN_0013bed8(*(undefined4 *)(unaff_r5 + 0x1d0),*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + 0x14));
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x1d0),(int)**(char **)(unaff_r7 + DAT_00141f10));
  (**(code **)(**(int **)(unaff_r5 + 0x1d0) + 0x20))(*(int **)(unaff_r5 + 0x1d0),0);
  (**(code **)(**(int **)(unaff_r5 + 0x1d8) + 0x2c))
            (*(int **)(unaff_r5 + 0x1d8),*(undefined4 *)(unaff_r5 + 0x1d0));
  this_13 = (ObjectiveDialog *)operator_new(0x16c);
  ObjectiveDialog::ObjectiveDialog
            (this_13,*(ConfirmDialog **)(unaff_r5 + 0x1c8),
             *(ObjectiveCompleteDialog **)(unaff_r5 + 0x1d0),*(BuyToxinDialog **)(unaff_r5 + 0x1c0))
  ;
  *(ObjectiveDialog **)(unaff_r5 + 0x1cc) = this_13;
  (**(code **)(*(int *)this_13 + 0x1c))(this_13,0x12);
  FUN_0013bed8(*(undefined4 *)(unaff_r5 + 0x1cc),*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + 0x14));
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x1cc),(int)**(char **)(unaff_r7 + DAT_0014222c));
  (**(code **)(**(int **)(unaff_r5 + 0x1cc) + 0x20))(*(int **)(unaff_r5 + 0x1cc),0);
  (**(code **)(**(int **)(unaff_r5 + 0x1d8) + 0x2c))
            (*(int **)(unaff_r5 + 0x1d8),*(undefined4 *)(unaff_r5 + 0x1cc));
  this_14 = (Vector<FoodStack*> *)operator_new(0xc);
  Vector<FoodStack*>::Vector(this_14);
  *(Vector<FoodStack*> **)(unaff_r5 + 0x1b8) = this_14;
  for (iStack00000018 = 0;
      iStack00000018 < *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_00142230 + 4) + 1;
      iStack00000018 = iStack00000018 + 1) {
    pFVar14 = *(FoodStack **)
               (iStack00000018 * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_00142230 + 8));
    pSVar15 = (String *)(pFVar14 + 0xc);
    String::String((String *)&stack0x0000003c,pSVar15);
    iVar3 = operator==(&stack0x0000003c,0);
    String::~String((String *)&stack0x0000003c);
    if (iVar3 == 0) {
      String::String((String *)&stack0x00000044,(String *)(unaff_r5 + 0x68));
      iVar3 = String::equals(pSVar15,&stack0x00000044);
      iVar19 = 1;
      if (iVar3 == 0) {
        String::String((String *)&stack0x0000004c,(String *)(unaff_r5 + 0x70));
        iVar19 = String::equals(pSVar15,&stack0x0000004c);
        String::~String((String *)&stack0x0000004c);
      }
      String::~String((String *)&stack0x00000044);
      if (iVar19 != 0) {
        Vector<FoodStack*>::addElement(*(Vector<FoodStack*> **)(unaff_r5 + 0x1b8),pFVar14);
        FriendCafeHudElement::setButtonNewIndicator
                  (*(FriendCafeHudElement **)(unaff_r5 + 0x19c),1,true);
      }
    }
    else {
      Vector<FoodStack*>::addElement(*(Vector<FoodStack*> **)(unaff_r5 + 0x1b8),pFVar14);
    }
  }
  this_15 = (FridgeDialog *)operator_new(0x104);
  pTVar18 = *(TutorialArrow **)(unaff_r5 + 0x1c4);
  FridgeDialog::FridgeDialog
            (this_15,*(Vector **)(unaff_r5 + 0x1b8),*(CImage ***)(unaff_r5 + 400),
             *(CImage ***)(unaff_r5 + 0x198),'\x12',pTVar18,*(ConfirmDialog **)(unaff_r5 + 0x1c8),
             *(NoticeDialog **)(unaff_r5 + 0x1b0),true);
  iVar3 = DAT_00142234;
  *(FridgeDialog **)(unaff_r5 + 0x1bc) = this_15;
  ScreenElement::setOrder((ScreenElement *)this_15,(int)**(char **)(unaff_r7 + iVar3));
  (**(code **)(**(int **)(unaff_r5 + 0x1d8) + 0x2c))
            (*(int **)(unaff_r5 + 0x1d8),*(undefined4 *)(unaff_r5 + 0x1bc));
  L_PrintLog((char *)(DAT_00142238 + 0x142088),(char *)(DAT_0014223c + 0x14208a));
  pCVar9 = (CafeObject *)GameStateFriendCafe::createAvatarInstance(unaff_r5);
  *(CafeObject **)(unaff_r5 + 0x128) = pCVar9;
  Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x34),pCVar9);
  if ((*(int *)(*(int *)(unaff_r5 + 0x34) + 0xe8) != **(int **)(unaff_r7 + DAT_00142240)) ||
     (*(int *)(*(int *)(unaff_r5 + 0x34) + 0xec) != **(int **)(unaff_r7 + DAT_00142244))) {
    iVar3 = *(int *)(*(int *)(unaff_r5 + 0xbc) + 0x48);
    lVar4 = Cafe::worldToDiamondCoords(iVar3 >> 0x10,(int)(short)iVar3);
    lVar4 = Cafe::diamondToStaggeredCoords(lVar4);
    pCVar13 = *(Cafe **)(unaff_r5 + 0x34);
    lVar4 = CFPoint::add(lVar4,CONCAT22(*(undefined2 *)(pCVar13 + 0xf4),
                                        *(undefined2 *)(pCVar13 + 0xf8)));
    iVar3 = Cafe::staggeredCoordsToIndex(lVar4);
    uVar5 = Cafe::indexToWorldCoordsCenter(pCVar13,iVar3);
    *(undefined4 *)(*(int *)(unaff_r5 + 0xbc) + 0x48) = uVar5;
  }
  (**(code **)(**(int **)(unaff_r5 + 0x128) + 0xc))
            (*(int **)(unaff_r5 + 0x128),*(undefined4 *)(*(int *)(unaff_r5 + 0xbc) + 0x48));
  pCVar9 = *(CafeObject **)(unaff_r5 + 0x128);
  iVar3 = *(int *)(*(int *)(unaff_r5 + 0xbc) + 0x48);
  lVar4 = Cafe::worldToDiamondCoords(iVar3 >> 0x10,(int)(short)iVar3);
  lVar4 = Cafe::diamondToStaggeredCoords(lVar4);
  sVar2 = Cafe::staggeredCoordsToIndex(lVar4);
  CafeObject::setTileIndex(pCVar9,sVar2,*(Cafe **)(unaff_r5 + 0x34));
  CapcomOrderableList<CafeObject*>::sort
            ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),
             *(CafeObject **)(unaff_r5 + 0x128));
  GameStateFriendCafe::resetCustomerTimer(unaff_r5);
  L_PrintLog((char *)(DAT_00142248 + 0x142158),(char *)(DAT_0014224c + 0x14215a));
  this_16 = (TutorialArrow *)operator_new(0x7c);
  TutorialArrow::TutorialArrow(this_16);
  iVar3 = DAT_00142250;
  *(TutorialArrow **)(unaff_r5 + 0x1c4) = this_16;
  ScreenElement::setOrder((ScreenElement *)this_16,(int)**(char **)(unaff_r7 + iVar3));
  (**(code **)(**(int **)(unaff_r5 + 0x1d8) + 0x2c))
            (*(int **)(unaff_r5 + 0x1d8),*(undefined4 *)(unaff_r5 + 0x1c4));
  iVar3 = *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_00142254);
  uVar5 = *(undefined4 *)(unaff_r5 + 0x1c4);
  *(undefined4 *)(iVar3 + DAT_00142258) = *(undefined4 *)(unaff_r5 + 0x1ac);
  *(undefined4 *)(iVar3 + 0x788) = uVar5;
  *(undefined4 *)(iVar3 + 0x778) = *(undefined4 *)(unaff_r7 + DAT_0014225c);
  *(GameStateFriendCafe **)(iVar3 + DAT_00142260) = unaff_r5;
  uVar5 = CafeObject::createDummyCafeObject();
  *(undefined4 *)(unaff_r5 + 0x98) = uVar5;
  *(undefined4 *)(unaff_r5 + 0x9c) = 0;
  Cafe::populateWithCustomers(*(Cafe **)(unaff_r5 + 0x34),unaff_r5);
  L_PrintLog((char *)(DAT_00142264 + 0x1421d2),(char *)(DAT_00142268 + 0x1421d4));
  unaff_r5[DAT_0014226c] = (GameStateFriendCafe)0x0;
  if (unaff_r5[0xc1] == (GameStateFriendCafe)0x0) {
    StringUtil::getEncodingString((StringUtil *)&stack0x00000054,'\x01');
    __ptr = (void *)String::getBytes((String *)(unaff_r5 + 0x3c),&stack0x00000054,0,0);
    String::~String((String *)&stack0x00000054);
    iVar19 = DAT_001423f4 + 0x14229a;
    snprintf(&stack0x0000005c,0x80,(char *)(DAT_001423f8 + 0x14229c),__ptr);
    iVar3 = CCOptions::GetInt(*(CCOptions **)(*(int *)(unaff_r5 + 0xc) + 0xa00),&stack0x0000005c,
                              (char *)0x0,*(int *)(unaff_r5 + 0xc));
    lVar4 = CCOptions::GetUInt64
                      (*(CCOptions **)(*(int *)(unaff_r5 + 0xc) + 0xa00),__ptr,(char *)0x0,
                       CONCAT44(pTVar18,iVar19));
    free(__ptr);
    pFVar8 = *(FriendCafeHudElement **)(unaff_r5 + 0x19c);
    bVar1 = (bool)ZombieCafe::canCollectFranchiseFees
                            (*(ZombieCafe **)(unaff_r5 + 0xc),(FriendData *)(unaff_r5 + 0x3c));
    FriendCafeHudElement::setCollectFeesEnabled(pFVar8,bVar1);
    iVar19 = GameStateFriendCafe::canAttack(unaff_r5,lVar4);
    if ((iVar19 == 0) &&
       (iVar3 = GameStateFriendCafe::canAttackNumberLimit(unaff_r5,iVar3), iVar3 == 0)) {
      pFVar8 = *(FriendCafeHudElement **)(unaff_r5 + 0x19c);
      uVar12 = false;
    }
    else {
      pFVar8 = *(FriendCafeHudElement **)(unaff_r5 + 0x19c);
      uVar10 = ZombieCafe::haveZombies(*(ZombieCafe **)(unaff_r5 + 0xc));
      if (uVar10 != 0) {
        iVar3 = GameStateFriendCafe::cafeIsBlockedOrClosed(unaff_r5);
        uVar10 = (uint)(iVar3 == 0);
      }
      uVar12 = (undefined1)uVar10;
    }
    FriendCafeHudElement::setAttackEnabled(pFVar8,(bool)uVar12);
    FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(unaff_r5 + 0x19c),2,true)
    ;
    FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(unaff_r5 + 0x19c),1,true)
    ;
    (**(code **)(**(int **)(*(int *)(unaff_r5 + 0x19c) + 0x6c) + 0x20))
              (*(int **)(*(int *)(unaff_r5 + 0x19c) + 0x6c),0);
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_001423fc),'\'',true);
  }
  else {
    FriendCafeHudElement::setNextRandomCafeEnabled
              (*(FriendCafeHudElement **)(unaff_r5 + 0x19c),true);
    FriendCafeHudElement::setCollectFeesEnabled(*(FriendCafeHudElement **)(unaff_r5 + 0x19c),false);
    FriendCafeHudElement::setAttackEnabled(*(FriendCafeHudElement **)(unaff_r5 + 0x19c),false);
    (**(code **)(**(int **)(*(int *)(unaff_r5 + 0x19c) + 0x60) + 0x20))
              (*(int **)(*(int *)(unaff_r5 + 0x19c) + 0x60),0);
    (**(code **)(**(int **)(*(int *)(unaff_r5 + 0x19c) + 100) + 0x20))
              (*(int **)(*(int *)(unaff_r5 + 0x19c) + 100),0);
  }
  ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(unaff_r5 + 0xc));
  unaff_r5[0x1d4] = (GameStateFriendCafe)0x0;
  pcVar11 = (char *)(DAT_00142404 + 0x142370);
  *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_00142408) =
       **(undefined4 **)(unaff_r7 + DAT_00142400);
  L_PrintLog(pcVar11,(char *)(FUN_00142378 + DAT_0014240c + 2));
  if (in_stack_000000dc != *in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


