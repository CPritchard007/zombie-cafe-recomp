/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0014174c GameStateFriendCafe::init */

/* GameStateFriendCafe::init() */

void __thiscall GameStateFriendCafe::init(GameStateFriendCafe *this)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  ByteArrayInputStream *this_00;
  CharacterInstance *this_01;
  long lVar7;
  Stove *pSVar8;
  CookTask *this_02;
  ReanimateTask *this_03;
  RestTask *this_04;
  ScreenElement *this_05;
  MessageElement *this_06;
  ConfirmDialog *this_07;
  NoticeDialog *this_08;
  int *piVar9;
  FriendCafeHudElement *pFVar10;
  BuyToxinDialog *this_09;
  CharacterCommandBar *this_10;
  CharacterDetails *this_11;
  RecipeBook *this_12;
  ObjectiveCompleteDialog *this_13;
  ObjectiveDialog *this_14;
  Vector<FoodStack*> *this_15;
  FridgeDialog *this_16;
  CafeObject *pCVar11;
  TutorialArrow *this_17;
  char *pcVar12;
  undefined1 uVar13;
  Cafe *pCVar14;
  FoodStack *pFVar15;
  String *pSVar16;
  CFPathFinder *pCVar17;
  code *pcVar18;
  TutorialArrow *pTVar19;
  int iVar20;
  int *piVar21;
  CapcomOrderableList<Furniture*> *pCVar22;
  Character *pCVar23;
  GameStateFriendCafe *this_18;
  int iVar24;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  int iStack_e0;
  undefined4 local_c4;
  undefined4 local_c0;
  String aSStack_bc [8];
  String aSStack_b4 [8];
  String aSStack_ac [8];
  StringUtil aSStack_a4 [8];
  char acStack_9c [128];
  int local_1c;
  
  iVar24 = DAT_00141acc + 0x141758;
  piVar21 = *(int **)(iVar24 + DAT_00141ad0);
  local_1c = *piVar21;
  L_PrintLog((char *)(DAT_00141ad4 + 0x141766),(char *)(DAT_00141ad8 + 0x141764));
  this[0xb0] = (GameStateFriendCafe)0x0;
  CapcomDate::today((CapcomDate *)&local_c4);
  iVar3 = CapcomDate::daysBetween
                    (*(undefined4 *)(*(int *)(this + 0xc) + 0x8d0),
                     *(undefined4 *)(*(int *)(this + 0xc) + 0x8d4),local_c4,local_c0);
  if (0 < iVar3) {
    *(undefined4 *)(*(int *)(this + 0xc) + DAT_00141adc + 4) = 0xffffffff;
    memcpy((void *)(*(int *)(this + 0xc) + 0x8d0),&local_c4,7);
  }
  iVar3 = CapcomDate::daysBetween
                    (*(undefined4 *)(*(int *)(this + 0xc) + DAT_00141ae0),
                     *(undefined4 *)(*(int *)(this + 0xc) + DAT_00141ae0 + 4),local_c4,local_c0);
  if (0 < iVar3) {
    *(undefined4 *)(*(int *)(this + 0xc) + DAT_00141ae4 + 4) = 0xffffffff;
    memcpy((void *)(*(int *)(this + 0xc) + DAT_00141ae0),&local_c4,7);
  }
  pCVar22 = (CapcomOrderableList<Furniture*> *)0x0;
  this[0xc0] = (GameStateFriendCafe)0x0;
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadRecipeImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadFurnitureImages(*(ZombieCafe **)(this + 0xc));
  uVar4 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00141ae8),false);
  *(undefined4 *)(this + 400) = uVar4;
  uVar4 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x194) = uVar4;
  uVar4 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00141aec),true);
  *(undefined4 *)(this + 0x198) = uVar4;
  uVar5 = (int)((uint)*(byte *)(*(int *)(this + 0xc) + DAT_00141af0) * 10 + 7) >> 3;
  *(uint *)(this + 0x208) = uVar5;
  pvVar6 = operator_new__(uVar5);
  *(void **)(this + 0x20c) = pvVar6;
  memset(pvVar6,0,*(size_t *)(this + 0x208));
  this_00 = (ByteArrayInputStream *)operator_new(0x18);
  ByteArrayInputStream::ByteArrayInputStream
            (this_00,*(uchar **)(this + 0x1e4),*(int *)(this + 0x1e8),false);
  if (this_00 != (ByteArrayInputStream *)0x0) {
    iVar3 = deserializeGame(this,(InputStream *)this_00);
    if ((iVar3 != 0) &&
       ((this[0xc1] != (GameStateFriendCafe)0x0 || (this[0xc2] == (GameStateFriendCafe)0x0)))) {
      pCVar22 = *(CapcomOrderableList<Furniture*> **)(this + 0xc);
      iVar3 = Cafe::deserialize((InputStream *)this_00,false,(ZombieCafe *)0x0);
      *(int *)(this + 0x34) = iVar3;
      *(int *)(pCVar22 + 0x7e8) = iVar3;
      if (iVar3 != 0) {
        FUN_001423d8();
      }
    }
    (**(code **)(*(int *)this_00 + 0xc))(this_00);
    (**(code **)(*(int *)this_00 + 4))(this_00);
  }
  iVar20 = DAT_00141af8;
  iVar3 = DAT_00141af4;
  this_18 = this + 0xc0;
  *this_18 = (GameStateFriendCafe)0x1;
  iVar3 = FUN_00142378(iVar3 + 0x1418ce,iVar20 + 0x1418d0);
  do {
    *(undefined1 *)(iVar3 + 0x2e) = 0;
    iVar3 = CapcomOrderableList<Furniture*>::nextItem(pCVar22);
  } while (iVar3 != 0);
  CapcomOrderableList<Furniture*>::removeAll(pCVar22);
  operator_delete(pCVar22);
  pCVar22 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0xf4),'\x03',0);
  *(undefined4 *)(pCVar22 + 0x10) = *(undefined4 *)(pCVar22 + 8);
  while (iVar3 = CapcomOrderableList<Furniture*>::nextItem(pCVar22), iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x2e) = 0;
  }
  CapcomOrderableList<Furniture*>::removeAll(pCVar22);
  operator_delete(pCVar22);
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  for (iStack_e0 = 0; iStack_e0 < *(int *)(this + 0xe8) + 1; iStack_e0 = iStack_e0 + 1) {
    pCVar23 = *(Character **)(iStack_e0 * 4 + *(int *)(this + 0xec));
    pCVar17 = *(CFPathFinder **)(*(int *)(this + 0xf4) + 0x5c);
    this_01 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_01,pCVar23,pCVar17);
    Cafe::addCafeObject(*(Cafe **)(this + 0xf4),(CafeObject *)this_01);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x1ec),this_01);
    if ((*(int *)(*(int *)(this + 0xf4) + 0xe8) != **(int **)(iVar24 + DAT_00141afc)) ||
       (*(int *)(*(int *)(this + 0xf4) + 0xec) != **(int **)(iVar24 + DAT_00141b00))) {
      lVar7 = Cafe::worldToDiamondCoords
                        (*(int *)(pCVar23 + 0x48) >> 0x10,(int)(short)*(int *)(pCVar23 + 0x48));
      lVar7 = Cafe::diamondToStaggeredCoords(lVar7);
      pCVar14 = *(Cafe **)(this + 0xf4);
      lVar7 = CFPoint::add(lVar7,CONCAT22(*(undefined2 *)(pCVar14 + 0xf4),
                                          *(undefined2 *)(pCVar14 + 0xf8)));
      iVar3 = Cafe::staggeredCoordsToIndex(lVar7);
      uVar4 = Cafe::indexToWorldCoordsCenter(pCVar14,iVar3);
      *(undefined4 *)(pCVar23 + 0x48) = uVar4;
    }
    (**(code **)(*(int *)this_01 + 0xc))(this_01,*(undefined4 *)(pCVar23 + 0x48));
    lVar7 = Cafe::worldToDiamondCoords
                      (*(int *)(pCVar23 + 0x48) >> 0x10,(int)(short)*(int *)(pCVar23 + 0x48));
    lVar7 = Cafe::diamondToStaggeredCoords(lVar7);
    sVar2 = Cafe::staggeredCoordsToIndex(lVar7);
    CafeObject::setTileIndex((CafeObject *)this_01,sVar2,*(Cafe **)(this + 0xf4));
    if (pCVar23[0x44] == (Character)0x2) {
      iVar3 = Cafe::getNextTile((int)*(short *)(this_01 + 0x2c),(uint)(byte)pCVar23[0x4c]);
      pSVar8 = (Stove *)Cafe::getFurniture(*(Cafe **)(this + 0xf4),iVar3);
      if ((pSVar8 != (Stove *)0x0) && (*(char *)(*(int *)(pSVar8 + 0x38) + 0x44) == '\x01')) {
        this_02 = (CookTask *)operator_new(0x34);
        CookTask::CookTask(this_02,this_01,pSVar8,*(Cafe **)(this + 0xf4));
        CharacterInstance::addTask(this_01,(Task *)this_02);
      }
    }
    iVar3 = DAT_00141b04;
    if ((*(int *)(pCVar23 + 0x50) < 1) || (pCVar23[5] != (Character)0x2)) {
      if (pCVar23[0x44] == (Character)0x3) {
        pCVar23[0x4c] = (Character)0x0;
        lVar7 = Cafe::diamondToStaggeredCoords
                          (**(int **)(iVar24 + DAT_00141ef0) + -1,
                           (uint)*(byte *)(*(int *)(this + 0xf4) + 0xa1) +
                           **(int **)(iVar24 + DAT_00141ef4) + 1);
        sVar2 = Cafe::staggeredCoordsToIndex(lVar7);
        CafeObject::setTileIndex((CafeObject *)this_01,sVar2,*(Cafe **)(this + 0xf4));
        this_04 = (RestTask *)operator_new(0x40);
        RestTask::RestTask(this_04,this_01,*(Cafe **)(this + 0xf4));
        CharacterInstance::addTask(this_01,(Task *)this_04);
      }
    }
    else {
      pCVar23[0x4c] = (Character)0x0;
      if (**(int **)(iVar24 + iVar3) <= *(int *)(this + 0x248)) {
        *(undefined4 *)(this + 0x248) = 0;
        *(int *)(this + 0x24c) = *(int *)(this + 0x24c) + 1;
      }
      lVar7 = Cafe::diamondToStaggeredCoords
                        ((**(int **)(iVar24 + DAT_00141b08) + -1) - *(int *)(this + 0x248),
                         (uint)*(byte *)(*(int *)(this + 0xf4) + 0xa1) +
                         **(int **)(iVar24 + DAT_00141b0c) + 1 + *(int *)(this + 0x24c));
      sVar2 = Cafe::staggeredCoordsToIndex(lVar7);
      CafeObject::setTileIndex((CafeObject *)this_01,sVar2,*(Cafe **)(this + 0xf4));
      this_03 = (ReanimateTask *)operator_new(0x28);
      ReanimateTask::ReanimateTask(this_03,this_01,*(Cafe **)(this + 0xf4));
      CharacterInstance::addTask(this_01,(Task *)this_03);
      *(int *)(this + 0x248) = *(int *)(this + 0x248) + 1;
    }
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0xf4) + 0x20),
               (CafeObject *)this_01);
  }
  (**(code **)(*(int *)this_00 + 0xc))(this_00);
  (**(code **)(*(int *)this_00 + 4))(this_00);
  pCVar14 = *(Cafe **)(this + 0xf4);
  lVar7 = Cafe::diamondToStaggeredCoords
                    (**(int **)(iVar24 + DAT_00141ef0) + -3,**(int **)(iVar24 + DAT_00141ef4) + 2);
  iVar3 = Cafe::staggeredCoordsToIndex(lVar7);
  lVar7 = Cafe::indexToWorldCoordsCenter(pCVar14,iVar3);
  lVar7 = CFPoint::multiplyf(lVar7,extraout_s0);
  uVar4 = CFPoint::add(lVar7,*(long *)(*(int *)(this + 0xcc) + 0x14));
  *(undefined4 *)(this + 0x168) = uVar4;
  this_05 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_05,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x298) = this_05;
  (**(code **)(*(int *)this_05 + 0x18))
            (this_05,*(int *)(*(int *)(this + 0xcc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xcc) + 0x10));
  this_06 = (MessageElement *)operator_new(0x90);
  MessageElement::MessageElement(this_06,*(CImage ***)(this + 0x250),'\f');
  *(MessageElement **)(this + 0x26c) = this_06;
  ScreenElement::setOrder((ScreenElement *)this_06,100);
  (**(code **)(**(int **)(this + 0x298) + 0x2c))
            (*(int **)(this + 0x298),*(undefined4 *)(this + 0x26c));
  this_07 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_07,*(CImage **)(*(int *)(this + 0x254) + 0x14),
             *(CImage **)(*(int *)(this + 0x250) + 0x28),*(CImage **)(*(int *)(this + 0x250) + 0x44)
             ,0,extraout_s0_00,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x288) = this_07;
  ScreenElement::setOrder((ScreenElement *)this_07,99);
  (**(code **)(**(int **)(this + 0x288) + 0x1c))(*(int **)(this + 0x288),0x12);
  (**(code **)(**(int **)(this + 0x298) + 0x2c))
            (*(int **)(this + 0x298),*(undefined4 *)(this + 0x288));
  this_08 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_08,*(CImage **)(*(int *)(this + 0x254) + 0x14),
             *(CImage **)(*(int *)(this + 0x250) + 0x28),extraout_s0_01);
  *(NoticeDialog **)(this + 0x270) = this_08;
  ScreenElement::setOrder((ScreenElement *)this_08,0x62);
  (**(code **)(**(int **)(this + 0x270) + 0x1c))(*(int **)(this + 0x270),0x12);
  (**(code **)(**(int **)(this + 0x298) + 0x2c))
            (*(int **)(this + 0x298),*(undefined4 *)(this + 0x270));
  piVar9 = *(int **)(this + 0x298);
  pcVar18 = *(code **)(*piVar9 + 0x2c);
  pFVar10 = (FriendCafeHudElement *)operator_new(0x104);
  FriendCafeHudElement::FriendCafeHudElement
            (pFVar10,*(_func_void_void_ptr_int **)(iVar24 + DAT_00141ef8),this_18);
  *(FriendCafeHudElement **)(this + 0x25c) = pFVar10;
  (*pcVar18)(piVar9);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x25c),(int)**(char **)(iVar24 + DAT_00141efc))
  ;
  FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(this + 0x25c),0,true);
  FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(this + 0x25c),3,true);
  FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(this + 0x25c),10,false);
  FriendCafeHudElement::invisibleAddToxinButton();
  this_09 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_09);
  *(BuyToxinDialog **)(this + 0x280) = this_09;
  ScreenElement::setOrder((ScreenElement *)this_09,(int)**(char **)(iVar24 + DAT_00141f00));
  (**(code **)(**(int **)(this + 0x298) + 0x2c))
            (*(int **)(this + 0x298),*(undefined4 *)(this + 0x280));
  (**(code **)(**(int **)(this + 0x280) + 0x1c))(*(int **)(this + 0x280),0x12);
  (**(code **)(**(int **)(this + 0x280) + 0x20))(*(int **)(this + 0x280),0);
  piVar9 = *(int **)(this + 0x298);
  pcVar18 = *(code **)(*piVar9 + 0x2c);
  this_10 = (CharacterCommandBar *)operator_new(0xd8);
  CharacterCommandBar::CharacterCommandBar
            (this_10,(ConfirmDialog *)0x0,*(BuyToxinDialog **)(this + 0x280));
  *(CharacterCommandBar **)(this + 0x264) = this_10;
  (*pcVar18)(piVar9);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x264),(int)**(char **)(iVar24 + DAT_00141f04))
  ;
  (**(code **)(**(int **)(this + 0x264) + 0x1c))(*(int **)(this + 0x264),0x11);
  this_11 = (CharacterDetails *)operator_new(0x194);
  CharacterDetails::CharacterDetails
            (this_11,(Vector *)(this + 0xe4),false,*(ConfirmDialog **)(this + 0x288),
             (NoticeDialog *)0x0,(GameStateCafe *)0x0,'\x01',false);
  *(CharacterDetails **)(this + 0x268) = this_11;
  (**(code **)(*(int *)this_11 + 0x1c))(this_11,0x12);
  (**(code **)(**(int **)(this + 0x268) + 0x20))(*(int **)(this + 0x268),0);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x268),(int)**(char **)(iVar24 + DAT_00141f08))
  ;
  (**(code **)(**(int **)(this + 0x298) + 0x2c))
            (*(int **)(this + 0x298),*(undefined4 *)(this + 0x268));
  this_12 = (RecipeBook *)operator_new(0x174);
  RecipeBook::RecipeBook
            (this_12,*(CImage ***)(this + 0x250),*(CImage ***)(this + 600),
             *(NoticeDialog **)(this + 0x270),*(ConfirmDialog **)(this + 0x288),true,
             *(uchar **)(this + 0x2cc),'\x12');
  iVar3 = DAT_00141f0c;
  *(RecipeBook **)(this + 0x274) = this_12;
  ScreenElement::setOrder((ScreenElement *)this_12,(int)**(char **)(iVar24 + iVar3));
  (**(code **)(**(int **)(this + 0x298) + 0x2c))
            (*(int **)(this + 0x298),*(undefined4 *)(this + 0x274));
  this_13 = (ObjectiveCompleteDialog *)operator_new(0xb4);
  ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_13);
  *(ObjectiveCompleteDialog **)(this + 0x290) = this_13;
  (**(code **)(*(int *)this_13 + 0x1c))(this_13,0x12);
  FUN_0013bed8(*(undefined4 *)(this + 0x290),*(undefined4 *)(*(int *)(this + 0xcc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x290),(int)**(char **)(iVar24 + DAT_00141f10))
  ;
  (**(code **)(**(int **)(this + 0x290) + 0x20))(*(int **)(this + 0x290),0);
  (**(code **)(**(int **)(this + 0x298) + 0x2c))
            (*(int **)(this + 0x298),*(undefined4 *)(this + 0x290));
  this_14 = (ObjectiveDialog *)operator_new(0x16c);
  ObjectiveDialog::ObjectiveDialog
            (this_14,*(ConfirmDialog **)(this + 0x288),*(ObjectiveCompleteDialog **)(this + 0x290),
             *(BuyToxinDialog **)(this + 0x280));
  *(ObjectiveDialog **)(this + 0x28c) = this_14;
  (**(code **)(*(int *)this_14 + 0x1c))(this_14,0x12);
  FUN_0013bed8(*(undefined4 *)(this + 0x28c),*(undefined4 *)(*(int *)(this + 0xcc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x28c),(int)**(char **)(iVar24 + DAT_0014222c))
  ;
  (**(code **)(**(int **)(this + 0x28c) + 0x20))(*(int **)(this + 0x28c),0);
  (**(code **)(**(int **)(this + 0x298) + 0x2c))
            (*(int **)(this + 0x298),*(undefined4 *)(this + 0x28c));
  this_15 = (Vector<FoodStack*> *)operator_new(0xc);
  Vector<FoodStack*>::Vector(this_15);
  *(Vector<FoodStack*> **)(this + 0x278) = this_15;
  for (iStack_e0 = 0; iStack_e0 < *(int *)(*(int *)(this + 0xcc) + DAT_00142230 + 4) + 1;
      iStack_e0 = iStack_e0 + 1) {
    pFVar15 = *(FoodStack **)(iStack_e0 * 4 + *(int *)(*(int *)(this + 0xcc) + DAT_00142230 + 8));
    pSVar16 = (String *)(pFVar15 + 0xc);
    String::String(aSStack_bc,pSVar16);
    iVar3 = operator==(aSStack_bc,0);
    String::~String(aSStack_bc);
    if (iVar3 == 0) {
      String::String(aSStack_b4,(String *)(this + 0x128));
      iVar3 = String::equals(pSVar16,aSStack_b4);
      iVar20 = 1;
      if (iVar3 == 0) {
        String::String(aSStack_ac,(String *)(this + 0x130));
        iVar20 = String::equals(pSVar16,aSStack_ac);
        String::~String(aSStack_ac);
      }
      String::~String(aSStack_b4);
      if (iVar20 != 0) {
        Vector<FoodStack*>::addElement(*(Vector<FoodStack*> **)(this + 0x278),pFVar15);
        FriendCafeHudElement::setButtonNewIndicator(*(FriendCafeHudElement **)(this + 0x25c),1,true)
        ;
      }
    }
    else {
      Vector<FoodStack*>::addElement(*(Vector<FoodStack*> **)(this + 0x278),pFVar15);
    }
  }
  this_16 = (FridgeDialog *)operator_new(0x104);
  pTVar19 = *(TutorialArrow **)(this + 0x284);
  FridgeDialog::FridgeDialog
            (this_16,*(Vector **)(this + 0x278),*(CImage ***)(this + 0x250),
             *(CImage ***)(this + 600),'\x12',pTVar19,*(ConfirmDialog **)(this + 0x288),
             *(NoticeDialog **)(this + 0x270),true);
  iVar3 = DAT_00142234;
  *(FridgeDialog **)(this + 0x27c) = this_16;
  ScreenElement::setOrder((ScreenElement *)this_16,(int)**(char **)(iVar24 + iVar3));
  (**(code **)(**(int **)(this + 0x298) + 0x2c))
            (*(int **)(this + 0x298),*(undefined4 *)(this + 0x27c));
  L_PrintLog((char *)(DAT_00142238 + 0x142088),(char *)(DAT_0014223c + 0x14208a));
  pCVar11 = (CafeObject *)createAvatarInstance(this_18);
  *(CafeObject **)(this + 0x1e8) = pCVar11;
  Cafe::addCafeObject(*(Cafe **)(this + 0xf4),pCVar11);
  if ((*(int *)(*(int *)(this + 0xf4) + 0xe8) != **(int **)(iVar24 + DAT_00142240)) ||
     (*(int *)(*(int *)(this + 0xf4) + 0xec) != **(int **)(iVar24 + DAT_00142244))) {
    iVar3 = *(int *)(*(int *)(this + 0x17c) + 0x48);
    lVar7 = Cafe::worldToDiamondCoords(iVar3 >> 0x10,(int)(short)iVar3);
    lVar7 = Cafe::diamondToStaggeredCoords(lVar7);
    pCVar14 = *(Cafe **)(this + 0xf4);
    lVar7 = CFPoint::add(lVar7,CONCAT22(*(undefined2 *)(pCVar14 + 0xf4),
                                        *(undefined2 *)(pCVar14 + 0xf8)));
    iVar3 = Cafe::staggeredCoordsToIndex(lVar7);
    uVar4 = Cafe::indexToWorldCoordsCenter(pCVar14,iVar3);
    *(undefined4 *)(*(int *)(this + 0x17c) + 0x48) = uVar4;
  }
  (**(code **)(**(int **)(this + 0x1e8) + 0xc))
            (*(int **)(this + 0x1e8),*(undefined4 *)(*(int *)(this + 0x17c) + 0x48));
  pCVar11 = *(CafeObject **)(this + 0x1e8);
  iVar3 = *(int *)(*(int *)(this + 0x17c) + 0x48);
  lVar7 = Cafe::worldToDiamondCoords(iVar3 >> 0x10,(int)(short)iVar3);
  lVar7 = Cafe::diamondToStaggeredCoords(lVar7);
  sVar2 = Cafe::staggeredCoordsToIndex(lVar7);
  CafeObject::setTileIndex(pCVar11,sVar2,*(Cafe **)(this + 0xf4));
  CapcomOrderableList<CafeObject*>::sort
            ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0xf4) + 0x20),
             *(CafeObject **)(this + 0x1e8));
  resetCustomerTimer(this_18);
  L_PrintLog((char *)(DAT_00142248 + 0x142158),(char *)(DAT_0014224c + 0x14215a));
  this_17 = (TutorialArrow *)operator_new(0x7c);
  TutorialArrow::TutorialArrow(this_17);
  iVar3 = DAT_00142250;
  *(TutorialArrow **)(this + 0x284) = this_17;
  ScreenElement::setOrder((ScreenElement *)this_17,(int)**(char **)(iVar24 + iVar3));
  (**(code **)(**(int **)(this + 0x298) + 0x2c))
            (*(int **)(this + 0x298),*(undefined4 *)(this + 0x284));
  iVar3 = *(int *)(*(int *)(this + 0xcc) + DAT_00142254);
  uVar4 = *(undefined4 *)(this + 0x284);
  *(undefined4 *)(iVar3 + DAT_00142258) = *(undefined4 *)(this + 0x26c);
  *(undefined4 *)(iVar3 + 0x788) = uVar4;
  *(undefined4 *)(iVar3 + 0x778) = *(undefined4 *)(iVar24 + DAT_0014225c);
  *(GameStateFriendCafe **)(iVar3 + DAT_00142260) = this_18;
  uVar4 = CafeObject::createDummyCafeObject();
  *(undefined4 *)(this + 0x158) = uVar4;
  *(undefined4 *)(this + 0x15c) = 0;
  Cafe::populateWithCustomers(*(Cafe **)(this + 0xf4),this_18);
  L_PrintLog((char *)(DAT_00142264 + 0x1421d2),(char *)(DAT_00142268 + 0x1421d4));
  this_18[DAT_0014226c] = (GameStateFriendCafe)0x0;
  if (this[0x181] == (GameStateFriendCafe)0x0) {
    StringUtil::getEncodingString(aSStack_a4,'\x01');
    pvVar6 = (void *)String::getBytes((String *)(this + 0xfc),aSStack_a4,0,0,0);
    String::~String((String *)aSStack_a4);
    iVar20 = DAT_001423f4 + 0x14229a;
    snprintf(acStack_9c,0x80,(char *)(DAT_001423f8 + 0x14229c),pvVar6);
    iVar3 = CCOptions::GetInt(*(CCOptions **)(*(int *)(this + 0xcc) + 0xa00),acStack_9c,(char *)0x0,
                              *(int *)(this + 0xcc));
    lVar7 = CCOptions::GetUInt64
                      (*(CCOptions **)(*(int *)(this + 0xcc) + 0xa00),pvVar6,(char *)0x0,
                       CONCAT44(pTVar19,iVar20));
    free(pvVar6);
    pFVar10 = *(FriendCafeHudElement **)(this + 0x25c);
    bVar1 = (bool)ZombieCafe::canCollectFranchiseFees
                            (*(ZombieCafe **)(this + 0xcc),(FriendData *)(this + 0xfc));
    FriendCafeHudElement::setCollectFeesEnabled(pFVar10,bVar1);
    iVar20 = canAttack(this_18,lVar7);
    if ((iVar20 == 0) && (iVar3 = canAttackNumberLimit(this_18,iVar3), iVar3 == 0)) {
      pFVar10 = *(FriendCafeHudElement **)(this + 0x25c);
      uVar13 = false;
    }
    else {
      pFVar10 = *(FriendCafeHudElement **)(this + 0x25c);
      uVar5 = ZombieCafe::haveZombies(*(ZombieCafe **)(this + 0xcc));
      if (uVar5 != 0) {
        iVar3 = cafeIsBlockedOrClosed(this_18);
        uVar5 = (uint)(iVar3 == 0);
      }
      uVar13 = (undefined1)uVar5;
    }
    FriendCafeHudElement::setAttackEnabled(pFVar10,(bool)uVar13);
    FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(this + 0x25c),2,true);
    FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(this + 0x25c),1,true);
    (**(code **)(**(int **)(*(int *)(this + 0x25c) + 0x6c) + 0x20))
              (*(int **)(*(int *)(this + 0x25c) + 0x6c),0);
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(this + 0xcc) + DAT_001423fc),'\'',true);
  }
  else {
    FriendCafeHudElement::setNextRandomCafeEnabled(*(FriendCafeHudElement **)(this + 0x25c),true);
    FriendCafeHudElement::setCollectFeesEnabled(*(FriendCafeHudElement **)(this + 0x25c),false);
    FriendCafeHudElement::setAttackEnabled(*(FriendCafeHudElement **)(this + 0x25c),false);
    (**(code **)(**(int **)(*(int *)(this + 0x25c) + 0x60) + 0x20))
              (*(int **)(*(int *)(this + 0x25c) + 0x60),0);
    (**(code **)(**(int **)(*(int *)(this + 0x25c) + 100) + 0x20))
              (*(int **)(*(int *)(this + 0x25c) + 100),0);
  }
  ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(this + 0xcc));
  this[0x294] = (GameStateFriendCafe)0x0;
  pcVar12 = (char *)(DAT_00142404 + 0x142370);
  *(undefined4 *)(*(int *)(this + 0xcc) + DAT_00142408) = **(undefined4 **)(iVar24 + DAT_00142400);
  L_PrintLog(pcVar12,(char *)(DAT_0014240c + 0x14237a));
  if (local_1c != *piVar21) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


