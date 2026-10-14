/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018395c FUN_0018395c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018395c(void)

{
  short sVar1;
  int iVar2;
  Character *pCVar3;
  CharacterData *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CharacterInstance *pCVar7;
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
  long lVar8;
  undefined4 uVar9;
  TutorialArrow *this_09;
  ImageElement *this_10;
  BitmapTextElement *pBVar10;
  uchar uVar11;
  int iVar12;
  uint uVar13;
  undefined4 unaff_r4;
  char *pcVar14;
  CharacterData *this_11;
  code *pcVar15;
  GameStateRaid *unaff_r5;
  CFPathFinder *pCVar16;
  int *piVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  int in_stack_00000020;
  DataInputStream *in_stack_00000024;
  int *in_stack_0000002c;
  int in_stack_000003cc;
  
  *(undefined4 *)(unaff_r5 + 0xf8) = unaff_r4;
  iVar2 = DataInputStream::readInt(in_stack_00000024);
  if (0 < iVar2) {
    pcVar14 = (char *)(_DAT_00183a3c + 0x183976);
    L_PrintLog(pcVar14,(char *)(_DAT_00183a40 + 0x183978));
    iVar2 = DataInputStream::readBoolean(in_stack_00000024);
    if (iVar2 != 0) {
      FUN_00183ae6();
      return;
    }
    L_PrintLog(pcVar14,(char *)(_DAT_00183a44 + 0x183992));
    pCVar3 = (Character *)
             Character::deserialize
                       (in_stack_00000024,
                        *(CharacterData ***)(*(int *)(unaff_r5 + 0xc) + DAT_00183a14),
                        *(short *)(*(int *)(unaff_r5 + 0xc) + DAT_00183a2c) - 1,true);
    this_11 = *(CharacterData **)pCVar3;
    pCVar4 = (CharacterData *)CharacterData::copy(this_11);
    memcpy(pCVar4 + 0xaf0,this_11 + 0xaf0,0x18);
    iVar2 = DAT_00183a1c;
    iVar5 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + _DAT_00183a48),'&');
    if (iVar5 == 0) {
      *(undefined2 *)(pCVar4 + _DAT_00183a4c) = 1;
      *(undefined2 *)(pCVar4 + _DAT_00183a50) = 1;
      uVar6 = __mulsf3(*(undefined4 *)(pCVar4 + iVar2),0x3f000000);
      *(undefined4 *)(pCVar4 + iVar2) = uVar6;
    }
    else {
      GameStateRaid::setEnemyStatus(unaff_r5,pCVar4,false);
    }
    *(CharacterData **)pCVar3 = pCVar4;
    iVar5 = __fixsfsi(*(undefined4 *)(pCVar4 + iVar2));
    iVar2 = __fixsfsi(*(undefined4 *)(pCVar3 + 0x40));
    if (iVar5 < iVar2) {
      iVar2 = iVar5;
    }
    uVar6 = __floatsisf(iVar2);
    *(undefined4 *)(pCVar3 + 0x40) = uVar6;
    pCVar16 = *(CFPathFinder **)(*(int *)(unaff_r5 + 0x78) + 0x5c);
    pCVar7 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(pCVar7,pCVar3,pCVar16);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(unaff_r5 + 0xc4),pCVar7);
    *(undefined2 *)(pCVar7 + 0x2c) = 0;
    do {
      iVar2 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar7 + 0x2c));
      if ((iVar2 != 0) &&
         (iVar2 = Cafe::getFurniture(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar7 + 0x2c)),
         iVar2 == 0)) {
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
  iVar5 = **(int **)(in_stack_00000020 + DAT_00183d38);
  iVar2 = SmDev();
  *(undefined4 *)(unaff_r5 + 0x98) = *(undefined4 *)(iVar2 * 4 + iVar5);
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
             *(CImage **)(*(int *)(unaff_r5 + 0x7c) + 0x28),extraout_s0);
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
  iVar2 = DAT_00183d40;
  iVar5 = *(int *)(unaff_r5 + 0xc);
  if (((*(char *)(iVar5 + DAT_00183d40) == '\0') || (*(char *)(iVar5 + 0x9e0) != '\0')) &&
     ((*(char *)(iVar5 + DAT_00183d44) == '\0' || (*(char *)(iVar5 + DAT_00183d48) != '\0')))) {
    iVar5 = *(int *)(unaff_r5 + 0x138);
  }
  else {
    iVar5 = *(int *)(unaff_r5 + 0x138);
  }
  HudElement::setButtonAvailability(iVar5,true);
  iVar5 = DAT_00183d4c;
  iVar12 = *(int *)(unaff_r5 + 0xc);
  if (((*(char *)(iVar12 + DAT_00183d4c) == '\0') || (*(char *)(iVar12 + DAT_00183d50) != '\0')) &&
     ((*(char *)(iVar12 + DAT_00183d54) == '\0' || (*(char *)(iVar12 + DAT_00183d58) != '\0')))) {
    iVar12 = *(int *)(unaff_r5 + 0x138);
  }
  else {
    iVar12 = *(int *)(unaff_r5 + 0x138);
  }
  HudElement::setButtonAvailability(iVar12,true);
  if ((*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_00183d5c) == '\0') ||
     (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_00183d60) != '\0')) {
    iVar12 = *(int *)(unaff_r5 + 0x138);
  }
  else {
    iVar12 = *(int *)(unaff_r5 + 0x138);
  }
  HudElement::setButtonAvailability(iVar12,true);
  iVar12 = *(int *)(unaff_r5 + 0xc);
  if (((((*(char *)(iVar12 + iVar2) == '\0') || (*(char *)(iVar12 + 0x9e0) != '\0')) &&
       ((*(char *)(iVar12 + DAT_00183d44) == '\0' || (*(char *)(iVar12 + DAT_00183d48) != '\0'))))
      && ((*(char *)(iVar12 + iVar5) == '\0' || (*(char *)(iVar12 + DAT_00183d50) != '\0')))) &&
     ((*(char *)(iVar12 + DAT_00183d54) == '\0' || (*(char *)(iVar12 + DAT_00183d58) != '\0')))) {
    iVar2 = *(int *)(unaff_r5 + 0x138);
  }
  else {
    iVar2 = *(int *)(unaff_r5 + 0x138);
  }
  HudElement::setButtonAvailability(iVar2,true);
  iVar2 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_001840f8),'&');
  if (iVar2 != 0) {
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
             *(CImage **)(*(int *)(unaff_r5 + 0x7c) + 0x44),0,extraout_s0_00,(CImage *)0x40000000);
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
  iVar2 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
  (**(code **)(**(int **)(unaff_r5 + 0x140) + 0x14))
            (*(int **)(unaff_r5 + 0x140),(iVar2 >> 0x10) - (iVar2 >> 0x1f) >> 1,
             (int)(short)iVar2 / 2);
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
  iVar2 = DAT_00184110;
  *(BuyToxinDialog **)(unaff_r5 + 0x168) = this_07;
  ScreenElement::setOrder((ScreenElement *)this_07,(int)**(char **)(in_stack_00000020 + iVar2));
  (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
            (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x168));
  (**(code **)(**(int **)(unaff_r5 + 0x168) + 0x1c))(*(int **)(unaff_r5 + 0x168),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x168) + 0x20))(*(int **)(unaff_r5 + 0x168),0);
  this_08 = (CharacterCommandBar *)operator_new(0xd8);
  CharacterCommandBar::CharacterCommandBar
            (this_08,*(ConfirmDialog **)(unaff_r5 + 0x164),*(BuyToxinDialog **)(unaff_r5 + 0x168));
  iVar2 = DAT_00184114;
  *(CharacterCommandBar **)(unaff_r5 + 0x13c) = this_08;
  CharacterCommandBar::addInfoButton
            (this_08,*(_func_void_void_ptr_ScreenElement_ptr **)(in_stack_00000020 + iVar2),unaff_r5
            );
  uVar6 = CharacterCommandBar::addAttackButton(*(CharacterCommandBar **)(unaff_r5 + 0x13c));
  iVar2 = DAT_00184118;
  *(undefined4 *)(unaff_r5 + 0x154) = uVar6;
  uVar6 = CharacterCommandBar::addHealButton
                    (*(CharacterCommandBar **)(unaff_r5 + 0x13c),
                     *(_func_void_void_ptr_ScreenElement_ptr **)(in_stack_00000020 + iVar2),unaff_r5
                    );
  *(undefined4 *)(unaff_r5 + 0x144) = uVar6;
  CharacterCommandBar::layout(*(CharacterCommandBar **)(unaff_r5 + 0x13c));
  (**(code **)(**(int **)(unaff_r5 + 0x13c) + 0x1c))(*(int **)(unaff_r5 + 0x13c),0x11);
  iVar2 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
  (**(code **)(**(int **)(unaff_r5 + 0x13c) + 0x14))
            (*(int **)(unaff_r5 + 0x13c),(iVar2 >> 0x10) - (iVar2 >> 0x1f) >> 1,(int)(short)iVar2);
  iVar2 = 0;
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x13c),
             (int)**(char **)(in_stack_00000020 + DAT_0018411c));
  (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
            (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x13c));
  while( true ) {
    iVar12 = *(int *)(unaff_r5 + 0xc);
    iVar5 = iVar12 + DAT_00184100;
    if (*(int *)(iVar5 + 4) + 1 <= iVar2) break;
    pCVar3 = *(Character **)(iVar2 * 4 + *(int *)(iVar5 + 8));
    if (pCVar3[0x44] != (Character)0x6) {
      pCVar16 = *(CFPathFinder **)(*(int *)(unaff_r5 + 0x78) + 0x5c);
      pCVar7 = (CharacterInstance *)operator_new(0xdc);
      CharacterInstance::CharacterInstance(pCVar7,pCVar3,pCVar16);
      Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(unaff_r5 + 0xac),pCVar7)
      ;
      uVar13 = **(int **)(in_stack_00000020 + DAT_00184124) - 5;
      lVar8 = Cafe::diamondToStaggeredCoords
                        ((int)(uVar13 & 0xffff |
                              ((**(int **)(in_stack_00000020 + DAT_00184120) + -4) - iVar2) *
                              0x10000) >> 0x10,(int)(short)uVar13);
      sVar1 = Cafe::staggeredCoordsToIndex(lVar8);
      *(short *)(pCVar7 + 0x2c) = sVar1;
      pcVar15 = *(code **)(*(int *)pCVar7 + 0xc);
      uVar6 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x78),(int)sVar1);
      (*pcVar15)(pCVar7,uVar6);
      CharacterInstance::setCurrentAnimation(pCVar7,'\x01','\0',false);
      Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x78),(CafeObject *)pCVar7);
      pCVar7[0x84] = (CharacterInstance)0x1;
      *(undefined1 *)(*(int *)(pCVar7 + 0x8c) + 0x44) = 0;
      iVar5 = *(int *)(pCVar7 + 0x8c);
      *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
    }
    iVar2 = iVar2 + 1;
  }
  *(undefined4 *)(unaff_r5 + 0x114) = 0;
  if (*(int *)(unaff_r5 + 0xb0) < 0) {
    *(int *)(unaff_r5 + 0x94) = 0;
  }
  else {
    uVar6 = __floatsisf((int)*(short *)(**(int **)(unaff_r5 + 0xb4) + 6));
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(unaff_r5 + 0x98));
    __divsi3((int)*(short *)(iVar12 + 0x12),3);
    uVar9 = __floatsisf();
    iVar2 = __subsf3(uVar6,uVar9);
    iVar2 = __fixsfsi(iVar2 + -0x80000000);
    *(int *)(unaff_r5 + 0x94) = iVar2 << 0x10;
  }
  piVar17 = *(int **)(unaff_r5 + 0x134);
  pcVar15 = *(code **)(*piVar17 + 0x2c);
  this_09 = (TutorialArrow *)operator_new(0x7c);
  TutorialArrow::TutorialArrow(this_09);
  *(TutorialArrow **)(unaff_r5 + 0x150) = this_09;
  (*pcVar15)(piVar17,this_09);
  iVar2 = DAT_00184464;
  ScreenElement::setOrder
            (*(ScreenElement **)(unaff_r5 + 0x150),
             (int)**(char **)(in_stack_00000020 + DAT_00184460));
  iVar5 = *(int *)(*(int *)(unaff_r5 + 0xc) + iVar2);
  uVar6 = *(undefined4 *)(unaff_r5 + 0x150);
  *(undefined4 *)(iVar5 + DAT_00184468) = *(undefined4 *)(unaff_r5 + 0x14c);
  *(undefined4 *)(iVar5 + 0x788) = uVar6;
  *(undefined4 *)(iVar5 + 0x778) = *(undefined4 *)(in_stack_00000020 + DAT_0018446c);
  *(GameStateRaid **)(iVar5 + DAT_00184470) = unaff_r5;
  iVar5 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar2),'&');
  uVar11 = '\x1f';
  if (iVar5 != 0) {
    uVar11 = 'B';
    iVar5 = 0;
  }
  TutorialSystem::triggerEvent
            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar2),uVar11,SUB41(iVar5,0));
  piVar17 = *(int **)(unaff_r5 + 0x134);
  pcVar15 = *(code **)(*piVar17 + 0x2c);
  this_10 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (this_10,*(CImage **)(*(int *)(unaff_r5 + 0x80) + 0x14),extraout_s0_01,extraout_s1,'\0',
             false);
  *(ImageElement **)(unaff_r5 + 0x18) = this_10;
  (*pcVar15)(piVar17,this_10);
  (**(code **)(**(int **)(unaff_r5 + 0x18) + 0x20))(*(int **)(unaff_r5 + 0x18),0);
  piVar17 = *(int **)(unaff_r5 + 0x18);
  pcVar15 = *(code **)(*piVar17 + 0x2c);
  String::String((String *)&stack0x00000098,(char *)(DAT_00184474 + 0x1841e4));
  iVar5 = *(int *)(unaff_r5 + 0xc);
  iVar2 = SmDev();
  uVar6 = *(undefined4 *)((*(int *)(DAT_00184478 + iVar2 * 4 + 0x184238) + 0x136) * 4 + iVar5);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar10,&stack0x00000098,uVar6,0xffffff92);
  *(BitmapTextElement **)(unaff_r5 + 0x1c) = pBVar10;
  (*pcVar15)(piVar17,pBVar10);
  String::~String((String *)&stack0x00000098);
  piVar17 = *(int **)(unaff_r5 + 0x18);
  pcVar15 = *(code **)(*piVar17 + 0x2c);
  String::String((String *)&stack0x000000a0,(char *)(DAT_0018447c + 0x184242));
  iVar5 = *(int *)(unaff_r5 + 0xc);
  iVar2 = SmDev();
  uVar6 = *(undefined4 *)((*(int *)(DAT_00184480 + iVar2 * 4 + 0x184296) + 0x136) * 4 + iVar5);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar10,&stack0x000000a0,uVar6,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0x20) = pBVar10;
  (*pcVar15)(piVar17,pBVar10);
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


