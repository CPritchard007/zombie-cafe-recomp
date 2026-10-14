/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018383a FUN_0018383a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018383a(void)

{
  short sVar1;
  Character *pCVar2;
  CharacterData *pCVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  CharacterInstance *pCVar7;
  undefined4 uVar8;
  ScreenElement *this;
  NoticeDialog *this_00;
  HudElement *this_01;
  ConfirmDialog *this_02;
  CharacterDetails *this_03;
  ObjectiveCompleteDialog *this_04;
  ObjectiveDialog *this_05;
  MessageElement *this_06;
  BuyToxinDialog *this_07;
  CharacterCommandBar *this_08;
  long lVar9;
  TutorialArrow *this_09;
  ImageElement *this_10;
  BitmapTextElement *pBVar10;
  uchar uVar11;
  code *pcVar12;
  int iVar13;
  uint uVar14;
  CharacterData *pCVar15;
  CFPathFinder *pCVar16;
  GameStateRaid *pGVar17;
  char *pcVar18;
  GameStateRaid *unaff_r5;
  int *piVar19;
  undefined4 uVar20;
  float fVar21;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  int in_stack_00000020;
  DataInputStream *in_stack_00000024;
  int *in_stack_0000002c;
  int in_stack_000003cc;
  
  iVar5 = DAT_00183a14;
  pCVar2 = (Character *)
           Character::deserialize
                     (in_stack_00000024,
                      *(CharacterData ***)(*(int *)(unaff_r5 + 0xc) + DAT_00183a14),
                      *(short *)(*(int *)(unaff_r5 + 0xc) + DAT_00183a2c) - 1,true);
  pCVar15 = *(CharacterData **)pCVar2;
  if (pCVar15 ==
      *(CharacterData **)
       ((uint)**(byte **)(in_stack_00000020 + DAT_00183a30) * 4 +
       *(int *)(*(int *)(unaff_r5 + 0xc) + iVar5))) {
    pCVar15 = *(CharacterData **)
               (((uint)**(byte **)(in_stack_00000020 + DAT_00183a30) + *(int *)(unaff_r5 + 0x50) +
                10) * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + iVar5));
  }
  pCVar3 = (CharacterData *)CharacterData::copy(pCVar15);
  memcpy(pCVar3 + 0xaf0,pCVar15 + 0xaf0,0x18);
  GameStateRaid::setEnemyStatus(unaff_r5,pCVar3,true);
  iVar5 = DAT_00183a1c;
  *(CharacterData **)pCVar2 = pCVar3;
  iVar4 = __fixsfsi(*(undefined4 *)(pCVar3 + iVar5));
  iVar5 = __fixsfsi(*(undefined4 *)(pCVar2 + 0x40));
  if (iVar4 < iVar5) {
    iVar5 = iVar4;
  }
  uVar6 = __floatsisf(iVar5);
  *(undefined4 *)(pCVar2 + 0x40) = uVar6;
  pCVar16 = *(CFPathFinder **)(*(int *)(unaff_r5 + 0x78) + 0x5c);
  pCVar7 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(pCVar7,pCVar2,pCVar16);
  pGVar17 = unaff_r5 + 0xf8;
  *(CharacterInstance **)pGVar17 = pCVar7;
  *(short *)(pCVar7 + 0x2c) = (short)*(undefined4 *)(unaff_r5 + 0x44);
  piVar19 = *(int **)pGVar17;
  pcVar12 = *(code **)(*piVar19 + 0xc);
  uVar6 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x78),(int)(short)piVar19[0xb]);
  (*pcVar12)(piVar19,uVar6);
  *(undefined1 *)(*(int *)pGVar17 + 0x84) = 1;
  if (unaff_r5[0x13] != (GameStateRaid)0x0) {
    pCVar7 = *(CharacterInstance **)pGVar17;
    uVar20 = **(undefined4 **)(in_stack_00000020 + DAT_00183a34);
    uVar6 = __mulsf3(uVar20,DAT_00183a38);
    __divsi3(*(byte *)(*(int *)(unaff_r5 + 0xc) + 0x48) + 1,5);
    uVar8 = __floatsisf();
    uVar6 = __mulsf3(uVar6,uVar8);
    fVar21 = (float)__addsf3(uVar20,uVar6);
    CharacterInstance::setScale(pCVar7,fVar21);
  }
  Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x78),*(CafeObject **)(unaff_r5 + 0xf8));
  iVar5 = __aeabi_fcmpgt(*(undefined4 *)(pCVar2 + 0x40),0);
  if (iVar5 != 0) {
    GameStateRaid::addDefenderTotalHp(extraout_s0);
  }
  iVar5 = DataInputStream::readInt(in_stack_00000024);
  if (0 < iVar5) {
    pcVar18 = (char *)(_DAT_00183a3c + 0x183976);
    L_PrintLog(pcVar18,(char *)(_DAT_00183a40 + 0x183978));
    iVar5 = DataInputStream::readBoolean(in_stack_00000024);
    if (iVar5 != 0) {
      FUN_00183ae6();
      return;
    }
    L_PrintLog(pcVar18,(char *)(_DAT_00183a44 + 0x183992));
    pCVar2 = (Character *)
             Character::deserialize
                       (in_stack_00000024,
                        *(CharacterData ***)(*(int *)(unaff_r5 + 0xc) + DAT_00183a14),
                        *(short *)(*(int *)(unaff_r5 + 0xc) + DAT_00183a2c) - 1,true);
    pCVar3 = *(CharacterData **)pCVar2;
    pCVar15 = (CharacterData *)CharacterData::copy(pCVar3);
    memcpy(pCVar15 + 0xaf0,pCVar3 + 0xaf0,0x18);
    iVar5 = DAT_00183a1c;
    iVar4 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + _DAT_00183a48),'&');
    if (iVar4 == 0) {
      *(undefined2 *)(pCVar15 + _DAT_00183a4c) = 1;
      *(undefined2 *)(pCVar15 + _DAT_00183a50) = 1;
      uVar6 = __mulsf3(*(undefined4 *)(pCVar15 + iVar5),0x3f000000);
      *(undefined4 *)(pCVar15 + iVar5) = uVar6;
    }
    else {
      GameStateRaid::setEnemyStatus(unaff_r5,pCVar15,false);
    }
    *(CharacterData **)pCVar2 = pCVar15;
    iVar4 = __fixsfsi(*(undefined4 *)(pCVar15 + iVar5));
    iVar5 = __fixsfsi(*(undefined4 *)(pCVar2 + 0x40));
    if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
    uVar6 = __floatsisf(iVar5);
    *(undefined4 *)(pCVar2 + 0x40) = uVar6;
    pCVar16 = *(CFPathFinder **)(*(int *)(unaff_r5 + 0x78) + 0x5c);
    pCVar7 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(pCVar7,pCVar2,pCVar16);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(unaff_r5 + 0xc4),pCVar7);
    *(undefined2 *)(pCVar7 + 0x2c) = 0;
    do {
      iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar7 + 0x2c));
      if ((iVar5 != 0) &&
         (iVar5 = Cafe::getFurniture(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar7 + 0x2c)),
         iVar5 == 0)) {
        FUN_00184424();
      }
      sVar1 = CapcomMath::random(**(int **)(in_stack_00000020 + _DAT_00183d30) *
                                 **(int **)(in_stack_00000020 + _DAT_00183d34));
      CafeObject::setTileIndex((CafeObject *)pCVar7,sVar1,*(Cafe **)(unaff_r5 + 0x78));
    } while( true );
  }
  Cafe::populateWithCustomers(*(Cafe **)(unaff_r5 + 0x78),unaff_r5);
  uVar6 = DataInputStream::readInt(in_stack_00000024);
  *(undefined4 *)(unaff_r5 + 0x5c) = uVar6;
  uVar6 = DataInputStream::readInt(in_stack_00000024);
  *(undefined4 *)(unaff_r5 + 0x60) = uVar6;
  if (in_stack_00000024 != (DataInputStream *)0x0) {
    (**(code **)(*(int *)in_stack_00000024 + 4))(in_stack_00000024);
  }
  if (in_stack_0000002c != (int *)0x0) {
    (**(code **)(*in_stack_0000002c + 0xc))(in_stack_0000002c);
    (**(code **)(*in_stack_0000002c + 4))(in_stack_0000002c);
  }
  *(undefined4 *)(unaff_r5 + 0x94) = 0;
  iVar4 = **(int **)(in_stack_00000020 + DAT_00183d38);
  iVar5 = SmDev();
  *(undefined4 *)(unaff_r5 + 0x98) = *(undefined4 *)(iVar5 * 4 + iVar4);
  *(undefined4 *)(unaff_r5 + 0x90) = 0;
  *(undefined4 *)(unaff_r5 + 0x8c) = 0;
  *(undefined4 *)(unaff_r5 + 0x118) = 0;
  *(undefined4 *)(unaff_r5 + 0x11c) = 0;
  unaff_r5[0x130] = (GameStateRaid)0x0;
  unaff_r5[0x15c] = (GameStateRaid)0x0;
  this = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this,(ScreenElement *)0x0);
  *(ScreenElement **)(unaff_r5 + 0x134) = this;
  this_00 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_00,*(CImage **)(*(int *)(unaff_r5 + 0x80) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x7c) + 0x28),extraout_s0_00);
  *(NoticeDialog **)(unaff_r5 + 0x30) = this_00;
  ScreenElement::setOrder((ScreenElement *)this_00,0x62);
  (**(code **)(**(int **)(unaff_r5 + 0x30) + 0x1c))(*(int **)(unaff_r5 + 0x30),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
            (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x30));
  this_01 = (HudElement *)operator_new(0x16c);
  HudElement::HudElement
            (this_01,*(_func_bool_void_ptr_int **)(in_stack_00000020 + DAT_00183d3c),unaff_r5,false)
  ;
  *(HudElement **)(unaff_r5 + 0x138) = this_01;
  HudElement::setButtonAvailability((int)this_01,false);
  HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  iVar5 = DAT_00183d40;
  iVar4 = *(int *)(unaff_r5 + 0xc);
  if (((*(char *)(iVar4 + DAT_00183d40) == '\0') || (*(char *)(iVar4 + 0x9e0) != '\0')) &&
     ((*(char *)(iVar4 + DAT_00183d44) == '\0' || (*(char *)(iVar4 + DAT_00183d48) != '\0')))) {
    iVar4 = *(int *)(unaff_r5 + 0x138);
  }
  else {
    iVar4 = *(int *)(unaff_r5 + 0x138);
  }
  HudElement::setButtonAvailability(iVar4,true);
  iVar4 = DAT_00183d4c;
  iVar13 = *(int *)(unaff_r5 + 0xc);
  if (((*(char *)(iVar13 + DAT_00183d4c) == '\0') || (*(char *)(iVar13 + DAT_00183d50) != '\0')) &&
     ((*(char *)(iVar13 + DAT_00183d54) == '\0' || (*(char *)(iVar13 + DAT_00183d58) != '\0')))) {
    iVar13 = *(int *)(unaff_r5 + 0x138);
  }
  else {
    iVar13 = *(int *)(unaff_r5 + 0x138);
  }
  HudElement::setButtonAvailability(iVar13,true);
  if ((*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_00183d5c) == '\0') ||
     (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_00183d60) != '\0')) {
    iVar13 = *(int *)(unaff_r5 + 0x138);
  }
  else {
    iVar13 = *(int *)(unaff_r5 + 0x138);
  }
  HudElement::setButtonAvailability(iVar13,true);
  iVar13 = *(int *)(unaff_r5 + 0xc);
  if (((((*(char *)(iVar13 + iVar5) == '\0') || (*(char *)(iVar13 + 0x9e0) != '\0')) &&
       ((*(char *)(iVar13 + DAT_00183d44) == '\0' || (*(char *)(iVar13 + DAT_00183d48) != '\0'))))
      && ((*(char *)(iVar13 + iVar4) == '\0' || (*(char *)(iVar13 + DAT_00183d50) != '\0')))) &&
     ((*(char *)(iVar13 + DAT_00183d54) == '\0' || (*(char *)(iVar13 + DAT_00183d58) != '\0')))) {
    iVar5 = *(int *)(unaff_r5 + 0x138);
  }
  else {
    iVar5 = *(int *)(unaff_r5 + 0x138);
  }
  HudElement::setButtonAvailability(iVar5,true);
  iVar5 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_001840f8),'&');
  if (iVar5 != 0) {
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  }
  (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
            (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x138));
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x138),
             (int)**(char **)(in_stack_00000020 + DAT_001840fc));
  HudElement::invisibleAddToxinButton(*(HudElement **)(unaff_r5 + 0x138));
  this_02 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_02,*(CImage **)(*(int *)(unaff_r5 + 0x80) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x7c) + 0x28),
             *(CImage **)(*(int *)(unaff_r5 + 0x7c) + 0x44),0,extraout_s0_01,(CImage *)0x40000000);
  *(ConfirmDialog **)(unaff_r5 + 0x164) = this_02;
  ScreenElement::setOrder((ScreenElement *)this_02,99);
  (**(code **)(**(int **)(unaff_r5 + 0x164) + 0x1c))(*(int **)(unaff_r5 + 0x164),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
            (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x164));
  this_03 = (CharacterDetails *)operator_new(0x194);
  CharacterDetails::CharacterDetails
            (this_03,(Vector *)(*(int *)(unaff_r5 + 0xc) + DAT_00184100),false,
             *(ConfirmDialog **)(unaff_r5 + 0x164),(NoticeDialog *)0x0,(GameStateCafe *)0x0,'\x02',
             false);
  *(CharacterDetails **)(unaff_r5 + 0x140) = this_03;
  (**(code **)(*(int *)this_03 + 0x1c))(this_03,0x12);
  iVar5 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
  (**(code **)(**(int **)(unaff_r5 + 0x140) + 0x14))
            (*(int **)(unaff_r5 + 0x140),(iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1,
             (int)(short)iVar5 / 2);
  (**(code **)(**(int **)(unaff_r5 + 0x140) + 0x20))(*(int **)(unaff_r5 + 0x140),0);
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x140),
             (int)**(char **)(in_stack_00000020 + DAT_00184104));
  (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
            (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x140));
  this_04 = (ObjectiveCompleteDialog *)operator_new(0xb4);
  ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_04);
  *(ObjectiveCompleteDialog **)(unaff_r5 + 0x16c) = this_04;
  (**(code **)(*(int *)this_04 + 0x1c))(this_04,0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x16c) + 0x14))
            (*(int **)(unaff_r5 + 0x16c),*(int *)(*(int *)(unaff_r5 + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(unaff_r5 + 0xc) + 0x14));
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x16c),
             (int)**(char **)(in_stack_00000020 + DAT_00184108));
  (**(code **)(**(int **)(unaff_r5 + 0x16c) + 0x20))(*(int **)(unaff_r5 + 0x16c),0);
  (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
            (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x16c));
  this_05 = (ObjectiveDialog *)operator_new(0x16c);
  ObjectiveDialog::ObjectiveDialog
            (this_05,*(ConfirmDialog **)(unaff_r5 + 0x164),
             *(ObjectiveCompleteDialog **)(unaff_r5 + 0x16c),*(BuyToxinDialog **)(unaff_r5 + 0x168))
  ;
  *(ObjectiveDialog **)(unaff_r5 + 0x170) = this_05;
  (**(code **)(*(int *)this_05 + 0x1c))(this_05,0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x170) + 0x14))
            (*(int **)(unaff_r5 + 0x170),*(int *)(*(int *)(unaff_r5 + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(unaff_r5 + 0xc) + 0x14));
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x170),
             (int)**(char **)(in_stack_00000020 + DAT_0018410c));
  (**(code **)(**(int **)(unaff_r5 + 0x170) + 0x20))(*(int **)(unaff_r5 + 0x170),0);
  (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
            (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x170));
  this_06 = (MessageElement *)operator_new(0x90);
  MessageElement::MessageElement(this_06,*(CImage ***)(unaff_r5 + 0x7c),'\f');
  *(MessageElement **)(unaff_r5 + 0x14c) = this_06;
  ScreenElement::setOrder((ScreenElement *)this_06,100);
  (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
            (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x14c));
  this_07 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_07);
  iVar5 = DAT_00184110;
  *(BuyToxinDialog **)(unaff_r5 + 0x168) = this_07;
  ScreenElement::setOrder((ScreenElement *)this_07,(int)**(char **)(in_stack_00000020 + iVar5));
  (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
            (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x168));
  (**(code **)(**(int **)(unaff_r5 + 0x168) + 0x1c))(*(int **)(unaff_r5 + 0x168),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x168) + 0x20))(*(int **)(unaff_r5 + 0x168),0);
  this_08 = (CharacterCommandBar *)operator_new(0xd8);
  CharacterCommandBar::CharacterCommandBar
            (this_08,*(ConfirmDialog **)(unaff_r5 + 0x164),*(BuyToxinDialog **)(unaff_r5 + 0x168));
  iVar5 = DAT_00184114;
  *(CharacterCommandBar **)(unaff_r5 + 0x13c) = this_08;
  CharacterCommandBar::addInfoButton
            (this_08,*(_func_void_void_ptr_ScreenElement_ptr **)(in_stack_00000020 + iVar5),unaff_r5
            );
  uVar6 = CharacterCommandBar::addAttackButton(*(CharacterCommandBar **)(unaff_r5 + 0x13c));
  iVar5 = DAT_00184118;
  *(undefined4 *)(unaff_r5 + 0x154) = uVar6;
  uVar6 = CharacterCommandBar::addHealButton
                    (*(CharacterCommandBar **)(unaff_r5 + 0x13c),
                     *(_func_void_void_ptr_ScreenElement_ptr **)(in_stack_00000020 + iVar5),unaff_r5
                    );
  *(undefined4 *)(unaff_r5 + 0x144) = uVar6;
  CharacterCommandBar::layout(*(CharacterCommandBar **)(unaff_r5 + 0x13c));
  (**(code **)(**(int **)(unaff_r5 + 0x13c) + 0x1c))(*(int **)(unaff_r5 + 0x13c),0x11);
  iVar5 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
  (**(code **)(**(int **)(unaff_r5 + 0x13c) + 0x14))
            (*(int **)(unaff_r5 + 0x13c),(iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1,(int)(short)iVar5);
  iVar5 = 0;
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x13c),
             (int)**(char **)(in_stack_00000020 + DAT_0018411c));
  (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
            (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x13c));
  while( true ) {
    iVar13 = *(int *)(unaff_r5 + 0xc);
    iVar4 = iVar13 + DAT_00184100;
    if (*(int *)(iVar4 + 4) + 1 <= iVar5) break;
    pCVar2 = *(Character **)(iVar5 * 4 + *(int *)(iVar4 + 8));
    if (pCVar2[0x44] != (Character)0x6) {
      pCVar16 = *(CFPathFinder **)(*(int *)(unaff_r5 + 0x78) + 0x5c);
      pCVar7 = (CharacterInstance *)operator_new(0xdc);
      CharacterInstance::CharacterInstance(pCVar7,pCVar2,pCVar16);
      Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(unaff_r5 + 0xac),pCVar7)
      ;
      uVar14 = **(int **)(in_stack_00000020 + DAT_00184124) - 5;
      lVar9 = Cafe::diamondToStaggeredCoords
                        ((int)(uVar14 & 0xffff |
                              ((**(int **)(in_stack_00000020 + DAT_00184120) + -4) - iVar5) *
                              0x10000) >> 0x10,(int)(short)uVar14);
      sVar1 = Cafe::staggeredCoordsToIndex(lVar9);
      *(short *)(pCVar7 + 0x2c) = sVar1;
      pcVar12 = *(code **)(*(int *)pCVar7 + 0xc);
      uVar6 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x78),(int)sVar1);
      (*pcVar12)(pCVar7,uVar6);
      CharacterInstance::setCurrentAnimation(pCVar7,'\x01','\0',false);
      Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x78),(CafeObject *)pCVar7);
      pCVar7[0x84] = (CharacterInstance)0x1;
      *(undefined1 *)(*(int *)(pCVar7 + 0x8c) + 0x44) = 0;
      iVar4 = *(int *)(pCVar7 + 0x8c);
      *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
    }
    iVar5 = iVar5 + 1;
  }
  *(undefined4 *)(unaff_r5 + 0x114) = 0;
  if (*(int *)(unaff_r5 + 0xb0) < 0) {
    *(int *)(unaff_r5 + 0x94) = 0;
  }
  else {
    uVar6 = __floatsisf((int)*(short *)(**(int **)(unaff_r5 + 0xb4) + 6));
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(unaff_r5 + 0x98));
    __divsi3((int)*(short *)(iVar13 + 0x12),3);
    uVar8 = __floatsisf();
    iVar5 = __subsf3(uVar6,uVar8);
    iVar5 = __fixsfsi(iVar5 + -0x80000000);
    *(int *)(unaff_r5 + 0x94) = iVar5 << 0x10;
  }
  piVar19 = *(int **)(unaff_r5 + 0x134);
  pcVar12 = *(code **)(*piVar19 + 0x2c);
  this_09 = (TutorialArrow *)operator_new(0x7c);
  TutorialArrow::TutorialArrow(this_09);
  *(TutorialArrow **)(unaff_r5 + 0x150) = this_09;
  (*pcVar12)(piVar19,this_09);
  iVar5 = DAT_00184464;
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x150),
             (int)**(char **)(in_stack_00000020 + DAT_00184460));
  iVar4 = *(int *)(*(int *)(unaff_r5 + 0xc) + iVar5);
  uVar6 = *(undefined4 *)(unaff_r5 + 0x150);
  *(undefined4 *)(iVar4 + DAT_00184468) = *(undefined4 *)(unaff_r5 + 0x14c);
  *(undefined4 *)(iVar4 + 0x788) = uVar6;
  *(undefined4 *)(iVar4 + 0x778) = *(undefined4 *)(in_stack_00000020 + DAT_0018446c);
  *(GameStateRaid **)(iVar4 + DAT_00184470) = unaff_r5;
  iVar4 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),'&');
  uVar11 = '\x1f';
  if (iVar4 != 0) {
    uVar11 = 'B';
    iVar4 = 0;
  }
  TutorialSystem::triggerEvent
            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),uVar11,SUB41(iVar4,0));
  piVar19 = *(int **)(unaff_r5 + 0x134);
  pcVar12 = *(code **)(*piVar19 + 0x2c);
  this_10 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (this_10,*(CImage **)(*(int *)(unaff_r5 + 0x80) + 0x14),extraout_s0_02,extraout_s1,'\0',
             false);
  *(ImageElement **)(unaff_r5 + 0x18) = this_10;
  (*pcVar12)(piVar19,this_10);
  (**(code **)(**(int **)(unaff_r5 + 0x18) + 0x20))(*(int **)(unaff_r5 + 0x18),0);
  piVar19 = *(int **)(unaff_r5 + 0x18);
  pcVar12 = *(code **)(*piVar19 + 0x2c);
  String::String((String *)&stack0x00000098,(char *)(DAT_00184474 + 0x1841e4));
  iVar4 = *(int *)(unaff_r5 + 0xc);
  iVar5 = SmDev();
  uVar6 = *(undefined4 *)((*(int *)(DAT_00184478 + iVar5 * 4 + 0x184238) + 0x136) * 4 + iVar4);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar10,&stack0x00000098,uVar6,0xffffff92);
  *(BitmapTextElement **)(unaff_r5 + 0x1c) = pBVar10;
  (*pcVar12)(piVar19,pBVar10);
  String::~String((String *)&stack0x00000098);
  piVar19 = *(int **)(unaff_r5 + 0x18);
  pcVar12 = *(code **)(*piVar19 + 0x2c);
  String::String((String *)&stack0x000000a0,(char *)(DAT_0018447c + 0x184242));
  iVar4 = *(int *)(unaff_r5 + 0xc);
  iVar5 = SmDev();
  uVar6 = *(undefined4 *)((*(int *)(DAT_00184480 + iVar5 * 4 + 0x184296) + 0x136) * 4 + iVar4);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar10,&stack0x000000a0,uVar6,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0x20) = pBVar10;
  (*pcVar12)(piVar19,pBVar10);
  String::~String((String *)&stack0x000000a0);
  (**(code **)(**(int **)(unaff_r5 + 0x1c) + 0x20))(*(int **)(unaff_r5 + 0x1c),0);
  (**(code **)(**(int **)(unaff_r5 + 0x20) + 0x20))(*(int **)(unaff_r5 + 0x20),0);
  unaff_r5[DAT_00184484] = (GameStateRaid)0x0;
  unaff_r5[0x15e] = (GameStateRaid)0x0;
  unaff_r5[0x38] = (GameStateRaid)0x0;
  *(undefined4 *)(unaff_r5 + 0x74) = 0;
  GameStateRaid::saveData(unaff_r5);
  uVar6 = CCSecondsSince1970();
  *(undefined4 *)(unaff_r5 + 0x178) = uVar6;
  *(undefined4 *)(unaff_r5 + 0x184) = 0;
  *(undefined4 *)(unaff_r5 + 0x188) = 0;
  *(undefined4 *)(unaff_r5 + 0x17c) = 0;
  if (in_stack_000003cc == **(int **)(in_stack_00000020 + DAT_00184488)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


