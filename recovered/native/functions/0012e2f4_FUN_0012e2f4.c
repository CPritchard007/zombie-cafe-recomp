/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012e2f4 FUN_0012e2f4 */

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

void FUN_0012e2f4(void)

{
  FurnitureData FVar1;
  Furniture FVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  ScreenElement *this;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  Furniture *pFVar10;
  CharacterInstance *pCVar11;
  StatusNote *pSVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  TutorialSystem *this_00;
  LotteryDialog *this_01;
  String *this_02;
  byte bVar20;
  uchar uVar21;
  char cVar22;
  code *pcVar23;
  Furniture *pFVar24;
  undefined4 uVar25;
  NoticeDialog *pNVar26;
  ZombieCafe *pZVar27;
  GameStateCafe *pGVar28;
  int *piVar29;
  Cafe *pCVar30;
  undefined4 uVar31;
  undefined4 *puVar32;
  char *pcVar33;
  int *piVar34;
  GameStateCafe *unaff_r5;
  FurnitureData *pFVar35;
  CharacterInstance *pCVar36;
  ConfirmDialog *pCVar37;
  int unaff_r7;
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
  int in_stack_00000020;
  
  pZVar27 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar6 = ZombieCafe::unhandledTouching(pZVar27);
  if ((iVar6 == 0) ||
     (iVar6 = ScreenElement::contains
                        (*(ScreenElement **)(unaff_r5 + 0xbc),*(long *)(pZVar27 + 0x4b8)),
     iVar6 != 0)) {
    this = *(ScreenElement **)(unaff_r5 + 0xbc);
    if (this[0x66] == (ScreenElement)0x0) {
      this = (ScreenElement *)FUN_0012fe04();
    }
    iVar6 = ScreenElement::contains(this,*(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0012e428));
    if (iVar6 == 0) {
      FUN_0012fe04();
    }
  }
  pGVar28 = unaff_r5 + 0xbc;
  iVar6 = *(int *)pGVar28;
  pFVar35 = *(FurnitureData **)(iVar6 + 0xe4);
  if (pFVar35 == (FurnitureData *)0x0) {
    FUN_0012fe04();
  }
  FVar1 = pFVar35[0x44];
  if (FVar1 == (FurnitureData)0xc) {
LAB_0012e362:
    puts((char *)(DAT_0012e42c + 0x12e368));
    FUN_0012f41e();
LAB_0012e36e:
    if (*(char *)(iVar6 + 0x65) == '\x01') {
      unaff_r5[DAT_0012e404] = (GameStateCafe)0xd;
      piVar29 = *(int **)(unaff_r5 + 0xf8);
      (**(code **)(*piVar29 + 0x20))(piVar29,0);
      String::String((String *)&stack0x00000120,(String *)(*(int *)(*(int *)pGVar28 + 0xe4) + 100));
      GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x00000120);
      String::~String((String *)&stack0x00000120);
      (**(code **)(**(int **)(unaff_r5 + 0xfc) + 0x20))(*(int **)(unaff_r5 + 0xfc),0);
      (**(code **)(**(int **)(unaff_r5 + 0xbc) + 0x20))(*(int **)(unaff_r5 + 0xbc),0);
      (**(code **)(**(int **)(unaff_r5 + 0x100) + 0x20))(*(int **)(unaff_r5 + 0x100),0);
      pFVar35 = *(FurnitureData **)(unaff_r5 + 0xf4);
      pcVar23 = *(code **)(*(int *)pFVar35 + 0x44);
      String::String((String *)&stack0x00000128,(char *)(DAT_0012e430 + 0x12e3dc));
      (*pcVar23)(pFVar35,&stack0x00000128);
      String::~String((String *)&stack0x00000128);
      (**(code **)(**(int **)(unaff_r5 + 0xe8) + 0x20))(*(int **)(unaff_r5 + 0xe8),1);
      pGVar28 = unaff_r5 + 0xf0;
    }
    else {
      unaff_r5[DAT_0012e7c8] = (GameStateCafe)0xd;
      piVar29 = *(int **)(unaff_r5 + 0xf8);
      (**(code **)(*piVar29 + 0x20))(piVar29,0);
      uVar9 = GameStateCafe::createFurnitureFromData(unaff_r5,pFVar35);
      iVar6 = DAT_0012e7cc;
      *(undefined4 *)(unaff_r5 + 0x40) = uVar9;
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
  iVar7 = GameStateCafe::createFurnitureFromData(unaff_r5,pFVar35);
  iVar6 = DAT_0012e7d4;
  *(int *)(unaff_r5 + 0x40) = iVar7;
  iVar7 = *(int *)(*(int *)(iVar7 + 0x38) + 0x24);
  if ((iVar7 == **(int **)(unaff_r7 + iVar6)) || (iVar7 == 0x1fa)) {
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
  piVar29 = *(int **)pGVar28;
  pcVar23 = *(code **)(*piVar29 + 0x44);
  Vector<String>::elementAt((int)&stack0x00000140);
  (*pcVar23)(piVar29,&stack0x00000140);
  String::~String((String *)&stack0x00000140);
  piVar29 = *(int **)(unaff_r5 + 0xfc);
  pcVar23 = *(code **)(*piVar29 + 0x44);
  String::String((String *)&stack0x00000148,(char *)(DAT_0012e7e0 + 0x12e58e));
  (*pcVar23)(piVar29,&stack0x00000148);
  String::~String((String *)&stack0x00000148);
  piVar29 = *(int **)(unaff_r5 + 0x100);
  pcVar23 = *(code **)(*piVar29 + 0x44);
  String::String((String *)&stack0x00000150,(char *)(DAT_0012e7e4 + 0x12e5ac));
  (*pcVar23)(piVar29,&stack0x00000150);
  String::~String((String *)&stack0x00000150);
  String::String((String *)&stack0x00000158,
                 (String *)(*(int *)(*(int *)(unaff_r5 + 0x40) + 0x38) + 100));
  GameStateCafe::setItemDescriptionText(unaff_r5,&stack0x00000158);
  String::~String((String *)&stack0x00000158);
  piVar29 = *(int **)(unaff_r5 + 0xf4);
  pcVar23 = *(code **)(*piVar29 + 0x44);
  Vector<String>::elementAt((int)&stack0x00000160);
  (*pcVar23)(piVar29,&stack0x00000160);
  String::~String((String *)&stack0x00000160);
  (**(code **)(**(int **)(unaff_r5 + 0xe8) + 0x20))(*(int **)(unaff_r5 + 0xe8),1);
  piVar29 = *(int **)(unaff_r5 + 0x104);
  pcVar23 = *(code **)(*piVar29 + 0x44);
  String::String((String *)&stack0x00000168,(char *)(DAT_0012e7ec + 0x12e620));
  (*pcVar23)(piVar29,&stack0x00000168);
  String::~String((String *)&stack0x00000168);
  (**(code **)(**(int **)(unaff_r5 + 0xf0) + 0x20))(*(int **)(unaff_r5 + 0xf0),1);
  iVar6 = *(int *)(unaff_r5 + 0xc);
  if (*(int *)(iVar6 + 0x4b8) != 0) {
    FUN_0012f41e();
  }
  lVar8 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(iVar6 + 0x14));
  iVar6 = *(int *)(unaff_r5 + 0x40);
  lVar8 = Cafe::worldToDiamondCoords(lVar8);
  lVar8 = Cafe::diamondToStaggeredCoords(lVar8);
  uVar3 = Cafe::staggeredCoordsToIndex(lVar8);
  *(undefined2 *)(iVar6 + 0x2c) = uVar3;
  piVar29 = *(int **)(unaff_r5 + 0x40);
  pcVar23 = *(code **)(*piVar29 + 0xc);
  uVar9 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x14),(int)(short)piVar29[0xb]);
  (*pcVar23)(piVar29,uVar9);
  pZVar27 = *(ZombieCafe **)(unaff_r5 + 0x40);
  iVar6 = Furniture::canRotate((Furniture *)pZVar27);
  if ((iVar6 != 0) && (*(char *)(*(int *)((Furniture *)pZVar27 + 0x38) + 0x44) != '\x06')) {
    iVar6 = *(int *)((Furniture *)pZVar27 + 0x20);
    lVar8 = CFPoint::subtract(*(long *)((Furniture *)pZVar27 + 4),
                              (int)(short)iVar6 >> 1 & 0xffffU | (iVar6 >> 0x11) << 0x10);
    CFPoint::add(lVar8,(iVar6 >> 0x10) << 0x10);
    uVar9 = GameStateCafe::worldToScreenCoords((long)unaff_r5);
    FUN_00118458(*(undefined4 *)(unaff_r5 + 0x170),uVar9);
    pZVar27 = (ZombieCafe *)0x16c;
    *(undefined2 *)(unaff_r5 + 0x16c) = **(undefined2 **)(unaff_r7 + DAT_0012e7f0);
  }
  *(undefined4 *)(unaff_r5 + 0x44) = *(undefined4 *)(unaff_r5 + 0x40);
  FUN_0012f41e();
  if ((int)**(short **)(unaff_r7 + DAT_0012e7f4) < *(int *)(pZVar27 + DAT_0012e7f8)) {
    FUN_0012fe14();
  }
  iVar6 = ZombieCafe::touchWasPinch(pZVar27);
  if (iVar6 != 0) {
    FUN_0012fe14();
  }
  if (*(int *)(pZVar27 + 0x4d0) <= **(int **)(unaff_r7 + DAT_0012e7fc)) {
    FUN_0012fe14();
  }
  iVar6 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(pZVar27 + DAT_0012e800),'!');
  if (iVar6 == 0) {
    FUN_0012fe14();
  }
  GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x4b8));
  pFVar10 = (Furniture *)Cafe::pickCafeObject(*(long *)(unaff_r5 + 0x14));
  if (pFVar10 == (Furniture *)0x0) {
    FUN_0012f41e();
  }
  iVar6 = (**(code **)(*(int *)pFVar10 + 0x14))(pFVar10);
  fVar38 = extraout_s0;
  if (iVar6 != 1) {
    fVar38 = (float)FUN_0012fe28();
  }
  FVar2 = pFVar10[0x2e];
  pFVar24 = (Furniture *)(uint)(byte)FVar2;
  if (pFVar24 != (Furniture *)0x0) {
    fVar38 = (float)FUN_0012fe28();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar38);
  iVar7 = DAT_0012e7cc;
  *(Furniture **)(unaff_r5 + 0x40) = pFVar10;
  unaff_r5[iVar7] = SUB41(iVar6,0);
  *(undefined2 *)(unaff_r5 + 0x162) = *(undefined2 *)(pFVar10 + 0x2c);
  *(Furniture *)(unaff_r5 + 0x164) = pFVar10[0x34];
  Cafe::removeFurniture(*(Cafe **)(unaff_r5 + 0x14),pFVar10);
  if (*(int *)(*(int *)(unaff_r5 + 0x18) + 0x88) == *(int *)(unaff_r5 + 0x40)) {
    *(int *)(*(int *)(unaff_r5 + 0x18) + 0x88) = (int)pFVar24;
    pFVar10 = pFVar24;
  }
  for (iVar6 = 0; iVar6 < *(int *)(unaff_r5 + 0x20) + 1; iVar6 = iVar6 + 1) {
    puVar32 = (undefined4 *)(*(int *)(iVar6 * 4 + *(int *)(unaff_r5 + 0x24)) + 0x88);
    pFVar10 = (Furniture *)*puVar32;
    if (pFVar10 == *(Furniture **)(unaff_r5 + 0x40)) {
      *puVar32 = 0;
    }
  }
  for (iVar6 = 0; iVar7 = DAT_0012ebb0, iVar6 < *(int *)(unaff_r5 + 0x2c) + 1; iVar6 = iVar6 + 1) {
    puVar32 = (undefined4 *)(*(int *)(iVar6 * 4 + *(int *)(unaff_r5 + 0x30)) + 0x88);
    pFVar10 = (Furniture *)*puVar32;
    if (pFVar10 == *(Furniture **)(unaff_r5 + 0x40)) {
      *puVar32 = 0;
    }
  }
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebac) = 1;
  unaff_r5[iVar7] = (GameStateCafe)0x2;
  fVar38 = (float)FUN_0012f41e();
  if (*(int *)(pFVar10 + 0x44) == 0) {
    fVar38 = (float)FUN_0012f41e();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar38);
  iVar6 = DAT_0012ebb4;
  piVar29 = *(int **)(pFVar10 + 0x44);
  *(int **)(unaff_r5 + 0x40) = piVar29;
  *(Furniture *)(unaff_r5 + iVar6) = FVar2;
  *(Furniture **)(unaff_r5 + 0x48) = pFVar10;
  pcVar23 = *(code **)(*piVar29 + 0xc);
  uVar9 = GameStateCafe::screenToWorldCoords(unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + 0x4b8));
  (*pcVar23)(piVar29,uVar9);
  *(undefined4 *)(pFVar10 + 0x44) = 0;
  iVar6 = DAT_0012ebb0;
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebac) = 1;
  *(Furniture *)(unaff_r5 + iVar6) = FVar2;
  uVar39 = FUN_0012f41e();
  pCVar36 = DAT_0012ebb8;
  if (*(short *)(unaff_r5 + 0x16c) == 0) {
    uVar39 = FUN_0012fe3e();
  }
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x170),*(long *)(pCVar36 + iVar6),(float)uVar39,
                     (float)((ulonglong)uVar39 >> 0x20));
  if (iVar6 == 0) {
    FUN_0012fe3e();
  }
  *(undefined2 *)(unaff_r5 + 0x16c) = **(undefined2 **)(unaff_r7 + DAT_0012ebbc);
  pFVar10 = *(Furniture **)(unaff_r5 + 0x44);
  if (*(char *)(*(int *)(pFVar10 + 0x38) + 0x44) == '\x04') {
    bVar20 = (char)pFVar10[0x34] + 1U & 3;
  }
  else {
    bVar20 = (byte)pFVar10[0x34] ^ 1;
  }
  Furniture::setOrientation(pFVar10,bVar20);
  iVar6 = *(int *)(unaff_r5 + 0xc);
  fVar38 = (float)CapcomMath::random(3);
  ZombieCafe::playEffect(iVar6,fVar38);
  FUN_0012f41e();
  iVar6 = (**(code **)(*(int *)pCVar36 + 0x14))(pCVar36);
  if (iVar6 == 3) {
    pCVar11 = (CharacterInstance *)Cafe::getSelectedObject(*(Cafe **)(unaff_r5 + 0x14));
    if (pCVar11 == pCVar36) {
      FUN_0012fe5e();
    }
    if (*(char *)(*(int *)(pCVar36 + 0x8c) + 0x24) != '\0') {
      FUN_0012fe5e();
    }
    iVar6 = (**(code **)(*(int *)pCVar36 + 0x20))(pCVar36);
    if ((iVar6 == 1) &&
       (iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar36 + 0x8c) + 0x40),0), iVar6 != 0)) {
      FUN_0012fe5e();
    }
    GameStateCafe::select(unaff_r5,pCVar36);
    Store::close(*(Store **)(unaff_r5 + 0x84));
    CookCommandBar::close(*(CookCommandBar **)(unaff_r5 + 0xb4));
    pGVar28 = unaff_r5 + 0xac;
    PlantCommandBar::close(*(PlantCommandBar **)(unaff_r5 + 0xb8));
    CharacterCommandBar::open(*(CharacterCommandBar **)pGVar28);
    CharacterCommandBar::resetButtons();
    CharacterCommandBar::setCharacter(*(CharacterCommandBar **)pGVar28,pCVar36);
    Storage::close(*(Storage **)(unaff_r5 + 0xbc));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r5 + 0xc0));
    iVar6 = (**(code **)(*(int *)pCVar36 + 0x20))(pCVar36);
    if (iVar6 == 1) {
      iVar6 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'\x16');
      if (iVar6 != 0) {
        uVar9 = CharacterCommandBar::addInfectButton
                          (*(CharacterCommandBar **)pGVar28,
                           *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebe0),
                           unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x10c) = uVar9;
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ebc0),'L',true);
      }
      iVar6 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(pCVar36 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar38 = (float)CapcomMath::random(8);
      }
      else {
        fVar38 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar6,fVar38);
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
        pGVar28 = unaff_r5 + 0xac;
        CharacterCommandBar::addInfoButton
                  (*(CharacterCommandBar **)pGVar28,
                   *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc4),unaff_r5);
        if (*(char *)(*(int *)(pCVar36 + 0x8c) + 0x44) == '\x06') {
          CharacterCommandBar::addReviveButton
                    (*(CharacterCommandBar **)pGVar28,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebc8),unaff_r5);
          FUN_0012eaea();
          return;
        }
        uVar9 = CharacterCommandBar::addHealButton
                          (*(CharacterCommandBar **)pGVar28,
                           *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebcc),
                           unaff_r5);
        *(undefined4 *)(unaff_r5 + 0x114) = uVar9;
        if (*(char *)(*(int *)(pCVar36 + 0x8c) + 0x44) == '\x03') {
          CharacterCommandBar::addWorkButton
                    (*(CharacterCommandBar **)pGVar28,
                     *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd0),unaff_r5);
        }
        else {
          uVar9 = CharacterCommandBar::addRestButton
                            (*(CharacterCommandBar **)pGVar28,
                             *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ebd4),
                             unaff_r5);
          *(undefined4 *)(unaff_r5 + 0x110) = uVar9;
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
        if (pCVar36[0xc6] == (CharacterInstance)0x0) {
          FUN_0012eca0();
          return;
        }
        CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
        pCVar36[0xc6] = (CharacterInstance)0x0;
        FUN_0012eca0();
        return;
      }
      iVar6 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(pCVar36 + 0x8c) + DAT_0012ebe4) == '\0') {
        fVar38 = (float)CapcomMath::random(8);
      }
      else {
        fVar38 = (float)CapcomMath::random(5);
      }
      ZombieCafe::playEffect(iVar6,fVar38);
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
      if (pCVar36[0xc6] != (CharacterInstance)0x0) {
        CharacterCommandBar::setChefButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
        pCVar36[0xc6] = (CharacterInstance)0x0;
      }
    }
    CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
    FUN_0012eca0();
    return;
  }
  if (iVar6 == 1) {
    uVar16 = *(byte *)(*(int *)(pCVar36 + 0x38) + 0x44) - 1;
    if (uVar16 < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x0012ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&switchD_0012ecc0::switchdataD_0012ecc4 +
                (uint)(&switchD_0012ecc0::switchdataD_0012ecc4)[uVar16] * 2 + 1))();
      return;
    }
    if (*(short *)(pCVar36 + 0x42) == 0) {
      sVar4 = *(short *)(pCVar36 + 0x44);
      if (0 < sVar4) {
        iVar6 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(unaff_r5 + 0xc));
        fVar38 = extraout_s0_00;
        if (iVar6 == 0) {
          pCVar30 = *(Cafe **)(unaff_r5 + 0x14);
          String::valueOf((int)&stack0x00000198);
          pSVar12 = (StatusNote *)operator_new(0x30);
          in_stack_00000000 = (undefined1 *)**(undefined4 **)(unaff_r7 + DAT_0012f62c);
          StatusNote::StatusNote(pSVar12,pCVar36,1,&stack0x00000198);
          Cafe::addStatusNote(pCVar30,pSVar12);
          String::~String((String *)&stack0x00000198);
          fVar38 = (float)ZombieCafe::addXp(*(ZombieCafe **)(unaff_r5 + 0xc),(int)sVar4);
        }
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar38);
        pCVar36 = pCVar36 + 6;
        goto LAB_0012f310;
      }
    }
    else {
      *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) =
           *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f2a0) + (int)*(short *)(pCVar36 + 0x42);
      pCVar30 = *(Cafe **)(unaff_r5 + 0x14);
      String::valueOf((int)&stack0x00000190);
      pSVar12 = (StatusNote *)operator_new(0x30);
      in_stack_00000000 = (undefined1 *)**(undefined4 **)(unaff_r7 + DAT_0012f2a4);
      StatusNote::StatusNote(pSVar12,pCVar36,0,&stack0x00000190);
      Cafe::addStatusNote(pCVar30,pSVar12);
      fVar38 = (float)String::~String((String *)&stack0x00000190);
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar38);
      pCVar36 = pCVar36 + 4;
LAB_0012f310:
      *(undefined2 *)(pCVar36 + 0x3e) = 0;
    }
    if (*(int *)(unaff_r5 + 0x54) == 0) {
      FUN_0012f41e();
      return;
    }
  }
  else if ((iVar6 == 2) &&
          (iVar7 = Cafe::doorPicked(*(long *)(unaff_r5 + 0x14)), iVar6 = DAT_0012f634, iVar7 != 0))
  {
    iVar7 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f634),'\x16');
    if (iVar7 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),
                        (bool)((byte)(*(Cafe **)(unaff_r5 + 0x14))[100] ^ 1),true);
      FUN_0012f41e();
      return;
    }
    iVar13 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'Q');
    if (iVar13 != 0) {
      Cafe::setDoorOpen(*(Cafe **)(unaff_r5 + 0x14),true,false);
      fVar38 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'\x04',true)
      ;
      in_stack_00000000 = (undefined1 *)iVar7;
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,3,fVar38,false);
      FUN_0012f41e();
      return;
    }
  }
  pZVar27 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar6 = ZombieCafe::unhandledTouching(pZVar27);
  if ((iVar6 != 0) ||
     ((unaff_r5[DAT_0012f638] == (GameStateCafe)0x9 && (*(int *)(pZVar27 + 0x4b8) != 0)))) {
    iVar6 = ZombieCafe::touchWasPinch(pZVar27);
    if (iVar6 != 0) {
      uVar25 = *(undefined4 *)(unaff_r5 + 0x1e4);
      __divsf3(*(undefined4 *)(pZVar27 + DAT_0012f63c),*(undefined4 *)(pZVar27 + 0x4c0));
      iVar6 = CapcomApp::getInstance();
      pZVar27 = *(ZombieCafe **)(iVar6 + 4);
      uVar9 = ZombieCafe::getCafeZoomParam(pZVar27,extraout_s0_01,extraout_s1);
      *(undefined4 *)(unaff_r5 + 0x1e4) = uVar9;
      iVar6 = __aeabi_fcmpeq(uVar25,uVar9);
      if (iVar6 == 0) {
        lVar8 = *(long *)(unaff_r5 + 0x1e0);
        lVar14 = CFPoint::subtract(*(long *)(pZVar27 + 0x4b8),lVar8);
        lVar15 = CFPoint::multiplyf(lVar14,extraout_s0_02);
        lVar14 = CFPoint::subtract(lVar15,lVar14);
        uVar9 = CFPoint::subtract(lVar8,lVar14);
        *(undefined4 *)(unaff_r5 + 0x1e0) = uVar9;
      }
    }
    iVar6 = *(int *)(unaff_r5 + 0xc);
    if ((int)**(short **)(unaff_r7 + DAT_0012f640) < *(int *)(iVar6 + DAT_0012f644)) {
      uVar9 = __floatsisf((*(int *)(iVar6 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar6 + DAT_0012f648) >> 0x10));
      iVar7 = DAT_0012f648;
      *(undefined4 *)(unaff_r5 + 0x1d8) = uVar9;
      uVar9 = __floatsisf((int)*(short *)(iVar6 + 0x4b8) - (int)*(short *)(iVar6 + iVar7));
      *(undefined4 *)(unaff_r5 + 0x1dc) = uVar9;
    }
    else {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  lVar8 = *(long *)(unaff_r5 + 0x1e0);
  uVar16 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1dc));
  iVar6 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1d8));
  uVar16 = CFPoint::add(lVar8,iVar6 << 0x10 | uVar16 & 0xffff);
  *(uint *)(unaff_r5 + 0x1e0) = uVar16;
  iVar7 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x18);
  iVar6 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x1c);
  uVar31 = *(undefined4 *)(unaff_r5 + 0x1e4);
  uVar9 = __floatsisf(iVar7 >> 0x10);
  uVar9 = __mulsf3(uVar9,uVar31);
  ceilf(__x);
  uVar25 = __floatsisf((int)(short)iVar7);
  uVar25 = __mulsf3(uVar25,uVar31);
  ceilf(__x_00);
  uVar17 = __floatsisf((int)(short)iVar6);
  __mulsf3(uVar17,uVar31);
  sVar4 = __fixsfsi();
  uVar17 = __floatsisf(iVar6 >> 0x10);
  __mulsf3(uVar17,uVar31);
  uVar18 = __fixsfsi();
  sVar5 = __fixsfsi(uVar25);
  uVar19 = __fixsfsi(uVar9);
  iVar6 = -((int)uVar16 >> 0x10);
  if (iVar6 < (short)uVar18) {
    uVar16 = (uVar18 & 0xffff) * -0x10000 | uVar16 & 0xffff;
LAB_0012f5f8:
    *(uint *)(unaff_r5 + 0x1e0) = uVar16;
  }
  else {
    uVar18 = ((uVar18 & 0xffff) + (uVar19 & 0xffff)) - 1;
    iVar7 = (int)(short)uVar18 - (int)(short)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12);
    if (-iVar7 != (int)uVar16 >> 0x10 && iVar7 <= iVar6) {
      uVar16 = ((uint)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12) - (uVar18 & 0xffff)) * 0x10000 |
               uVar16 & 0xffff;
      goto LAB_0012f5f8;
    }
  }
  uVar16 = *(uint *)(unaff_r5 + 0x1e0);
  iVar6 = -(int)(short)uVar16;
  if (iVar6 < sVar4) {
    *(uint *)(unaff_r5 + 0x1e0) = (uint)(ushort)-sVar4 | uVar16 & 0xffff0000;
  }
  else {
    sVar4 = sVar5 + -1 + sVar4;
    iVar7 = (int)sVar4 - (int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    if (-iVar7 != (int)(short)uVar16 && iVar7 <= iVar6) {
      *(uint *)(unaff_r5 + 0x1e0) =
           (uint)(ushort)(*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10) - sVar4) | uVar16 & 0xffff0000
      ;
    }
  }
  uVar17 = *(undefined4 *)(unaff_r5 + 0x1d8);
  puVar32 = *(undefined4 **)(unaff_r7 + DAT_0012f9b0);
  uVar9 = __floatsisf(in_stack_00000020);
  uVar25 = __mulsf3(uVar9,*puVar32);
  iVar6 = __aeabi_fcmplt(uVar25,0x3f800000);
  uVar9 = uVar25;
  if (iVar6 == 0) {
    uVar9 = 0x3f800000;
  }
  uVar9 = __subsf3(0x3f800000,uVar9);
  iVar7 = __mulsf3(uVar17,uVar9);
  *(int *)(unaff_r5 + 0x1d8) = iVar7;
  uVar9 = *(undefined4 *)(unaff_r5 + 0x1dc);
  if (iVar6 == 0) {
    uVar25 = 0x3f800000;
  }
  uVar25 = __subsf3(0x3f800000,uVar25);
  iVar6 = __mulsf3(uVar9,uVar25);
  *(int *)(unaff_r5 + 0x1dc) = iVar6;
  iVar13 = __aeabi_fcmpge(iVar7,0);
  if (iVar13 == 0) {
    iVar7 = iVar7 + -0x80000000;
  }
  uVar9 = **(undefined4 **)(unaff_r7 + DAT_0012f9b4);
  iVar7 = __aeabi_fcmplt(iVar7,uVar9);
  if (iVar7 != 0) {
    iVar7 = __aeabi_fcmpge(iVar6,0);
    if (iVar7 == 0) {
      iVar6 = iVar6 + -0x80000000;
    }
    iVar6 = __aeabi_fcmplt(iVar6,uVar9);
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
    iVar7 = *(int *)(unaff_r5 + 0xc);
    if (iVar6 == *(int *)(unaff_r5 + 0x18)) {
      this_00 = *(TutorialSystem **)(iVar7 + DAT_0012f9b8);
      uVar21 = '\x01';
    }
    else if ((iVar6 == *(int *)(unaff_r5 + 0x5c)) && (*(char *)(*(int *)(iVar6 + 0x8c) + 4) == '\0')
            ) {
      uVar21 = '\r';
      this_00 = *(TutorialSystem **)(iVar7 + DAT_0012f9b8);
    }
    else {
      uVar21 = '\x10';
      this_00 = *(TutorialSystem **)(iVar7 + DAT_0012f9b8);
    }
    TutorialSystem::triggerEvent(this_00,uVar21,true);
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
  uVar16 = (uint)(byte)unaff_r5[DAT_0012f9d0];
  if ((uVar16 - 1 < 3) || (uVar16 == 7)) {
    cVar22 = '\0';
  }
  else {
    cVar22 = '\x01' - (uVar16 == 10);
  }
  *(char *)(*(int *)(unaff_r5 + 0x14) + 0xc9) = cVar22;
  iVar6 = DAT_0012f9d8;
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) = 0;
    pcVar33 = (char *)(iVar6 + 0x12f82e);
    L_PrintLog(pcVar33,(char *)(DAT_0012f9dc + 0x12f832));
    if ((((*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x14) == '\0') &&
         (*(char *)(*(int *)(unaff_r5 + 0x7c) + 0x14) == '\0')) &&
        (*(char *)(*(int *)(unaff_r5 + 0x80) + 0x14) == '\0')) &&
       (iVar6 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9b8),'\x01'),
       iVar6 != 0)) {
      L_PrintLog(pcVar33,(char *)(DAT_0012f9e0 + 0x12f876));
      if ((*(int *)(unaff_r5 + 0x130) == 0) ||
         (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) {
        if (((*(char *)(*(int *)(unaff_r5 + 0x124) + 0x14) == '\0') &&
            (*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) == '\0')) &&
           ((*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) == '\0' &&
            (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) == '\0')))) {
          this_01 = *(LotteryDialog **)(unaff_r5 + 0xa4);
          if (this_01 == (LotteryDialog *)0x0) {
            L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
            pCVar37 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001b8);
            Vector<String>::elementAt((int)&stack0x000001c0);
            Vector<String>::elementAt((int)&stack0x000001c8);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            ConfirmDialog::show(pCVar37,&stack0x000001b8,&stack0x000001c0,&stack0x000001c8);
            String::~String((String *)&stack0x000001c8);
            String::~String((String *)&stack0x000001c0);
            this_02 = (String *)&stack0x000001b8;
          }
          else {
            if (this_01[0x14] != (LotteryDialog)0x0) {
              LotteryDialog::backClose(this_01);
              L_PrintLog((char *)(DAT_0012fd4c + 0x12fa14),(char *)(DAT_0012fd50 + 0x12fa16));
              goto LAB_0012fa18;
            }
            L_PrintLog((char *)(DAT_0012f9e8 + 0x12f8e6),(char *)(DAT_0012f9ec + 0x12f8e8));
            pCVar37 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001a0);
            Vector<String>::elementAt((int)&stack0x000001a8);
            Vector<String>::elementAt((int)&stack0x000001b0);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            ConfirmDialog::show(pCVar37,&stack0x000001a0,&stack0x000001a8,&stack0x000001b0);
            String::~String((String *)&stack0x000001b0);
            String::~String((String *)&stack0x000001a8);
            this_02 = (String *)&stack0x000001a0;
          }
          String::~String(this_02);
        }
      }
      else {
        L_PrintLog(pcVar33,(char *)(DAT_0012f9e4 + 0x12f892));
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
  iVar7 = DAT_0012fd60 + 0x12fa4c;
  iVar6 = *(int *)(DAT_0012fd60 + 0x12fac0);
  if (iVar6 != 0) {
    if (iVar6 != 3) {
      if (iVar6 != 2) {
        FUN_0012ff22();
        return;
      }
      puVar32 = *(undefined4 **)(unaff_r7 + DAT_0012fd68);
      in_stack_00000020 = 0;
      piVar29 = *(int **)(unaff_r7 + DAT_0012fd6c);
      piVar34 = puVar32 + 4;
      for (; in_stack_00000020 < *piVar29; in_stack_00000020 = in_stack_00000020 + 1) {
        in_stack_00000000 = (undefined1 *)puVar32[2];
        sprintf(&stack0x000003fc,(char *)(DAT_0012fd70 + 0x12faac),*puVar32,puVar32[1]);
        if ((puVar32[1] == 2) && (0 < *piVar34)) {
          in_stack_00000000 = (undefined1 *)*piVar29;
          snprintf(&stack0x0000027c,0x80,(char *)(DAT_0012fd74 + 0x12fad0),in_stack_00000020 + 1);
          strcpy(&stack0x000001fc,(char *)piVar34[1]);
          in_stack_00000000 = &stack0x0000027c;
          snprintf((char *)((int)&stack0x00000000 + DAT_0012fd7c),0x400,
                   (char *)(DAT_0012fd78 + 0x12faf0),*piVar34);
          ZombieCafe::addToxinMedia(*(ZombieCafe **)(unaff_r5 + 0xc),*piVar34);
          puVar32[1] = 0;
          puVar32[2] = 0;
          *piVar34 = 0;
          ZombieCafe::save();
          pNVar26 = *(NoticeDialog **)(unaff_r5 + 0xd0);
          String::String((String *)&stack0x000001d8,(char *)((int)&stack0x00000000 + DAT_0012fd7c));
          Vector<String>::elementAt((int)&stack0x000001d0);
          in_stack_00000000 = (undefined1 *)0x0;
          NoticeDialog::show(pNVar26,&stack0x000001d8,&stack0x000001d0);
          String::~String((String *)&stack0x000001d0);
          String::~String((String *)&stack0x000001d8);
        }
        puVar32 = puVar32 + 6;
        piVar34 = piVar34 + 6;
      }
      if (0 < *piVar29) {
        GameStateCafe::gotEventValue
                  (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
      }
      *piVar29 = 0;
      iVar7 = DAT_0012fd84 + 0x12fb80;
    }
    *(undefined4 *)(iVar7 + 0x74) = 4;
    FUN_0012ff22();
    return;
  }
  if (*(int *)(unaff_r5 + 0x1fc) == 0) {
    GameStateCafe::getEventValue
              (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
    uVar9 = 1;
  }
  else {
    if (*(int *)(unaff_r5 + 0x1fc) != 1) {
      FUN_0012ff22();
      return;
    }
    uVar9 = 4;
  }
  *(undefined4 *)(unaff_r5 + 0x1fc) = uVar9;
  FUN_0012ff22();
  return;
}


