/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00183820 FUN_00183820 */

void FUN_00183820(void)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  CharacterData *pCVar5;
  Character *pCVar6;
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
  undefined4 uVar8;
  long lVar9;
  undefined4 uVar10;
  TutorialArrow *this_09;
  ImageElement *this_10;
  BitmapTextElement *pBVar11;
  uchar uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  CFPathFinder *pCVar16;
  code *pcVar17;
  GameStateRaid *unaff_r5;
  int unaff_r6;
  int iVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  int in_stack_0000001c;
  int in_stack_00000020;
  int *in_stack_00000024;
  int in_stack_00000028;
  int *in_stack_0000002c;
  byte *in_stack_00000034;
  int in_stack_000003cc;
  
  uVar13 = in_stack_00000028 + 1;
  if (in_stack_0000001c <= (int)uVar13) {
    Cafe::populateWithCustomers(*(Cafe **)(unaff_r5 + 0x78),unaff_r5);
    if (in_stack_00000024 != (int *)0x0) {
      (**(code **)(*in_stack_00000024 + 4))(in_stack_00000024);
    }
    if (in_stack_0000002c != (int *)0x0) {
      (**(code **)(*in_stack_0000002c + 0xc))(in_stack_0000002c);
      (**(code **)(*in_stack_0000002c + 4))(in_stack_0000002c);
    }
    *(undefined4 *)(unaff_r5 + 0x94) = 0;
    iVar18 = **(int **)(in_stack_00000020 + DAT_00183d38);
    iVar4 = SmDev();
    *(undefined4 *)(unaff_r5 + 0x98) = *(undefined4 *)(iVar4 * 4 + iVar18);
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
              (this_01,*(_func_bool_void_ptr_int **)(in_stack_00000020 + DAT_00183d3c),unaff_r5,
               false);
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
    iVar4 = DAT_00183d40;
    iVar18 = *(int *)(unaff_r5 + 0xc);
    if (((*(char *)(iVar18 + DAT_00183d40) == '\0') || (*(char *)(iVar18 + 0x9e0) != '\0')) &&
       ((*(char *)(iVar18 + DAT_00183d44) == '\0' || (*(char *)(iVar18 + DAT_00183d48) != '\0')))) {
      iVar18 = *(int *)(unaff_r5 + 0x138);
    }
    else {
      iVar18 = *(int *)(unaff_r5 + 0x138);
    }
    HudElement::setButtonAvailability(iVar18,true);
    iVar18 = DAT_00183d4c;
    iVar15 = *(int *)(unaff_r5 + 0xc);
    if (((*(char *)(iVar15 + DAT_00183d4c) == '\0') || (*(char *)(iVar15 + DAT_00183d50) != '\0'))
       && ((*(char *)(iVar15 + DAT_00183d54) == '\0' || (*(char *)(iVar15 + DAT_00183d58) != '\0')))
       ) {
      iVar15 = *(int *)(unaff_r5 + 0x138);
    }
    else {
      iVar15 = *(int *)(unaff_r5 + 0x138);
    }
    HudElement::setButtonAvailability(iVar15,true);
    if ((*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_00183d5c) == '\0') ||
       (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_00183d60) != '\0')) {
      iVar15 = *(int *)(unaff_r5 + 0x138);
    }
    else {
      iVar15 = *(int *)(unaff_r5 + 0x138);
    }
    HudElement::setButtonAvailability(iVar15,true);
    iVar15 = *(int *)(unaff_r5 + 0xc);
    if (((((*(char *)(iVar15 + iVar4) == '\0') || (*(char *)(iVar15 + 0x9e0) != '\0')) &&
         ((*(char *)(iVar15 + DAT_00183d44) == '\0' || (*(char *)(iVar15 + DAT_00183d48) != '\0'))))
        && ((*(char *)(iVar15 + iVar18) == '\0' || (*(char *)(iVar15 + DAT_00183d50) != '\0')))) &&
       ((*(char *)(iVar15 + DAT_00183d54) == '\0' || (*(char *)(iVar15 + DAT_00183d58) != '\0')))) {
      iVar4 = *(int *)(unaff_r5 + 0x138);
    }
    else {
      iVar4 = *(int *)(unaff_r5 + 0x138);
    }
    HudElement::setButtonAvailability(iVar4,true);
    iVar4 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_001840f8),'&');
    if (iVar4 != 0) {
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
               *(CImage **)(*(int *)(unaff_r5 + 0x7c) + 0x44),0,extraout_s0_00,(CImage *)0x40000000)
    ;
    *(ConfirmDialog **)(unaff_r5 + 0x164) = this_02;
    ScreenElement::setOrder((ScreenElement *)this_02,99);
    (**(code **)(**(int **)(unaff_r5 + 0x164) + 0x1c))(*(int **)(unaff_r5 + 0x164),0x12);
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x164));
    this_03 = (CharacterDetails *)operator_new(0x194);
    CharacterDetails::CharacterDetails
              (this_03,(Vector *)(*(int *)(unaff_r5 + 0xc) + DAT_00184100),false,
               *(ConfirmDialog **)(unaff_r5 + 0x164),(NoticeDialog *)0x0,(GameStateCafe *)0x0,'\x02'
               ,false);
    *(CharacterDetails **)(unaff_r5 + 0x140) = this_03;
    (**(code **)(*(int *)this_03 + 0x1c))(this_03,0x12);
    iVar4 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    (**(code **)(**(int **)(unaff_r5 + 0x140) + 0x14))
              (*(int **)(unaff_r5 + 0x140),(iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1,
               (int)(short)iVar4 / 2);
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
               *(ObjectiveCompleteDialog **)(unaff_r5 + 0x16c),
               *(BuyToxinDialog **)(unaff_r5 + 0x168));
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
    iVar4 = DAT_00184110;
    *(BuyToxinDialog **)(unaff_r5 + 0x168) = this_07;
    ScreenElement::setOrder((ScreenElement *)this_07,(int)**(char **)(in_stack_00000020 + iVar4));
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x168));
    (**(code **)(**(int **)(unaff_r5 + 0x168) + 0x1c))(*(int **)(unaff_r5 + 0x168),0x12);
    (**(code **)(**(int **)(unaff_r5 + 0x168) + 0x20))(*(int **)(unaff_r5 + 0x168),0);
    this_08 = (CharacterCommandBar *)operator_new(0xd8);
    CharacterCommandBar::CharacterCommandBar
              (this_08,*(ConfirmDialog **)(unaff_r5 + 0x164),*(BuyToxinDialog **)(unaff_r5 + 0x168))
    ;
    iVar4 = DAT_00184114;
    *(CharacterCommandBar **)(unaff_r5 + 0x13c) = this_08;
    CharacterCommandBar::addInfoButton
              (this_08,*(_func_void_void_ptr_ScreenElement_ptr **)(in_stack_00000020 + iVar4),
               unaff_r5);
    uVar8 = CharacterCommandBar::addAttackButton(*(CharacterCommandBar **)(unaff_r5 + 0x13c));
    iVar4 = DAT_00184118;
    *(undefined4 *)(unaff_r5 + 0x154) = uVar8;
    uVar8 = CharacterCommandBar::addHealButton
                      (*(CharacterCommandBar **)(unaff_r5 + 0x13c),
                       *(_func_void_void_ptr_ScreenElement_ptr **)(in_stack_00000020 + iVar4),
                       unaff_r5);
    *(undefined4 *)(unaff_r5 + 0x144) = uVar8;
    CharacterCommandBar::layout(*(CharacterCommandBar **)(unaff_r5 + 0x13c));
    (**(code **)(**(int **)(unaff_r5 + 0x13c) + 0x1c))(*(int **)(unaff_r5 + 0x13c),0x11);
    iVar4 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    (**(code **)(**(int **)(unaff_r5 + 0x13c) + 0x14))
              (*(int **)(unaff_r5 + 0x13c),(iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1,(int)(short)iVar4)
    ;
    iVar4 = 0;
    ScreenElement::setOrder
              (*(ScreenElement **)(unaff_r5 + 0x13c),
               (int)**(char **)(in_stack_00000020 + DAT_0018411c));
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x13c));
    while( true ) {
      iVar15 = *(int *)(unaff_r5 + 0xc);
      iVar18 = iVar15 + DAT_00184100;
      if (*(int *)(iVar18 + 4) + 1 <= iVar4) break;
      pCVar6 = *(Character **)(iVar4 * 4 + *(int *)(iVar18 + 8));
      if (pCVar6[0x44] != (Character)0x6) {
        pCVar16 = *(CFPathFinder **)(*(int *)(unaff_r5 + 0x78) + 0x5c);
        pCVar7 = (CharacterInstance *)operator_new(0xdc);
        CharacterInstance::CharacterInstance(pCVar7,pCVar6,pCVar16);
        Vector<CharacterInstance*>::addElement
                  ((Vector<CharacterInstance*> *)(unaff_r5 + 0xac),pCVar7);
        uVar13 = **(int **)(in_stack_00000020 + DAT_00184124) - 5;
        lVar9 = Cafe::diamondToStaggeredCoords
                          ((int)(uVar13 & 0xffff |
                                ((**(int **)(in_stack_00000020 + DAT_00184120) + -4) - iVar4) *
                                0x10000) >> 0x10,(int)(short)uVar13);
        sVar3 = Cafe::staggeredCoordsToIndex(lVar9);
        *(short *)(pCVar7 + 0x2c) = sVar3;
        pcVar17 = *(code **)(*(int *)pCVar7 + 0xc);
        uVar8 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x78),(int)sVar3);
        (*pcVar17)(pCVar7,uVar8);
        CharacterInstance::setCurrentAnimation(pCVar7,'\x01','\0',false);
        Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x78),(CafeObject *)pCVar7);
        pCVar7[0x84] = (CharacterInstance)0x1;
        *(undefined1 *)(*(int *)(pCVar7 + 0x8c) + 0x44) = 0;
        iVar18 = *(int *)(pCVar7 + 0x8c);
        *(int *)(iVar18 + 0x18) = *(int *)(iVar18 + 0x18) + 1;
      }
      iVar4 = iVar4 + 1;
    }
    *(undefined4 *)(unaff_r5 + 0x114) = 0;
    if (*(int *)(unaff_r5 + 0xb0) < 0) {
      *(int *)(unaff_r5 + 0x94) = 0;
    }
    else {
      uVar8 = __floatsisf((int)*(short *)(**(int **)(unaff_r5 + 0xb4) + 6));
      uVar8 = __mulsf3(uVar8,*(undefined4 *)(unaff_r5 + 0x98));
      __divsi3((int)*(short *)(iVar15 + 0x12),3);
      uVar10 = __floatsisf();
      iVar4 = __subsf3(uVar8,uVar10);
      iVar4 = __fixsfsi(iVar4 + -0x80000000);
      *(int *)(unaff_r5 + 0x94) = iVar4 << 0x10;
    }
    piVar14 = *(int **)(unaff_r5 + 0x134);
    pcVar17 = *(code **)(*piVar14 + 0x2c);
    this_09 = (TutorialArrow *)operator_new(0x7c);
    TutorialArrow::TutorialArrow(this_09);
    *(TutorialArrow **)(unaff_r5 + 0x150) = this_09;
    (*pcVar17)(piVar14,this_09);
    iVar4 = DAT_00184464;
    ScreenElement::setOrder
              (*(ScreenElement **)(unaff_r5 + 0x150),
               (int)**(char **)(in_stack_00000020 + DAT_00184460));
    iVar18 = *(int *)(*(int *)(unaff_r5 + 0xc) + iVar4);
    uVar8 = *(undefined4 *)(unaff_r5 + 0x150);
    *(undefined4 *)(iVar18 + DAT_00184468) = *(undefined4 *)(unaff_r5 + 0x14c);
    *(undefined4 *)(iVar18 + 0x788) = uVar8;
    *(undefined4 *)(iVar18 + 0x778) = *(undefined4 *)(in_stack_00000020 + DAT_0018446c);
    *(GameStateRaid **)(iVar18 + DAT_00184470) = unaff_r5;
    iVar18 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar4),'&');
    uVar12 = '\x1f';
    if (iVar18 != 0) {
      uVar12 = 'B';
      iVar18 = 0;
    }
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar4),uVar12,SUB41(iVar18,0));
    piVar14 = *(int **)(unaff_r5 + 0x134);
    pcVar17 = *(code **)(*piVar14 + 0x2c);
    this_10 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement
              (this_10,*(CImage **)(*(int *)(unaff_r5 + 0x80) + 0x14),extraout_s0_01,extraout_s1,
               '\0',false);
    *(ImageElement **)(unaff_r5 + 0x18) = this_10;
    (*pcVar17)(piVar14,this_10);
    (**(code **)(**(int **)(unaff_r5 + 0x18) + 0x20))(*(int **)(unaff_r5 + 0x18),0);
    piVar14 = *(int **)(unaff_r5 + 0x18);
    pcVar17 = *(code **)(*piVar14 + 0x2c);
    String::String((String *)&stack0x00000098,(char *)(DAT_00184474 + 0x1841e4));
    iVar18 = *(int *)(unaff_r5 + 0xc);
    iVar4 = SmDev();
    uVar8 = *(undefined4 *)((*(int *)(DAT_00184478 + iVar4 * 4 + 0x184238) + 0x136) * 4 + iVar18);
    pBVar11 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement(pBVar11,&stack0x00000098,uVar8,0xffffff92);
    *(BitmapTextElement **)(unaff_r5 + 0x1c) = pBVar11;
    (*pcVar17)(piVar14,pBVar11);
    String::~String((String *)&stack0x00000098);
    piVar14 = *(int **)(unaff_r5 + 0x18);
    pcVar17 = *(code **)(*piVar14 + 0x2c);
    String::String((String *)&stack0x000000a0,(char *)(DAT_0018447c + 0x184242));
    iVar18 = *(int *)(unaff_r5 + 0xc);
    iVar4 = SmDev();
    uVar8 = *(undefined4 *)((*(int *)(DAT_00184480 + iVar4 * 4 + 0x184296) + 0x136) * 4 + iVar18);
    pBVar11 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement(pBVar11,&stack0x000000a0,uVar8,0xffffffff);
    *(BitmapTextElement **)(unaff_r5 + 0x20) = pBVar11;
    (*pcVar17)(piVar14,pBVar11);
    String::~String((String *)&stack0x000000a0);
    (**(code **)(**(int **)(unaff_r5 + 0x1c) + 0x20))(*(int **)(unaff_r5 + 0x1c),0);
    (**(code **)(**(int **)(unaff_r5 + 0x20) + 0x20))(*(int **)(unaff_r5 + 0x20),0);
    unaff_r5[DAT_00184484] = (GameStateRaid)0x0;
    unaff_r5[0x15e] = (GameStateRaid)0x0;
    unaff_r5[0x38] = (GameStateRaid)0x0;
    *(undefined4 *)(unaff_r5 + 0x74) = 0;
    GameStateRaid::saveData(unaff_r5);
    uVar8 = CCSecondsSince1970();
    *(undefined4 *)(unaff_r5 + 0x178) = uVar8;
    *(undefined4 *)(unaff_r5 + 0x184) = 0;
    *(undefined4 *)(unaff_r5 + 0x188) = 0;
    *(undefined4 *)(unaff_r5 + 0x17c) = 0;
    if (in_stack_000003cc != **(int **)(in_stack_00000020 + DAT_00184488)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(1);
    }
    return;
  }
  iVar18 = *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_00183688);
  bVar1 = *in_stack_00000034;
  iVar4 = CapcomMath::random(9);
  pCVar5 = (CharacterData *)
           CharacterData::copy(*(CharacterData **)((bVar1 + 1 + iVar4) * 4 + iVar18));
  if (unaff_r5[0x16] == (GameStateRaid)0x0) {
    if ((((unaff_r5[0x12] == (GameStateRaid)0x0) && (unaff_r5[0x13] == (GameStateRaid)0x0)) &&
        (unaff_r5[0x14] == (GameStateRaid)0x0)) && (unaff_r5[0x15] == (GameStateRaid)0x0))
    goto LAB_00183742;
    iVar4 = CapcomMath::random(5);
    iVar18 = *(int *)(unaff_r5 + 0x24);
    if (iVar18 == 0x76) {
      if ((1 < *(int *)(unaff_r5 + 0x48) - 3U) || (iVar15 = DAT_00183a08, iVar4 < 2))
      goto LAB_0018371c;
      goto LAB_00183732;
    }
    if (0x76 < iVar18) {
      if (iVar18 < 0x87) {
        if (iVar18 < 0x84) {
          if (iVar18 == 0x7b) goto LAB_0018371c;
          if ((0x7a < iVar18) && (iVar15 = DAT_00183a00, 0x82 < iVar18)) goto LAB_00183732;
        }
      }
      else if (iVar18 < 0x95) {
        if (iVar18 < 0x89) {
          if (iVar18 == 0x87) {
            iVar15 = DAT_00183a0c;
            if ((*(int *)(unaff_r5 + 0x48) == 4) && (1 < iVar4)) {
              iVar15 = 0x588;
            }
            goto LAB_00183732;
          }
          if (iVar18 != 0x88) goto LAB_00183700;
LAB_0018371c:
          iVar18 = 0x81;
LAB_0018371e:
          iVar15 = iVar18 << 1;
          goto LAB_00183732;
        }
      }
      else {
        if (iVar18 == 0x95) goto LAB_0018371c;
        if (0xab < iVar18) {
LAB_00183700:
          iVar18 = **(int **)(in_stack_00000020 + DAT_001839fc);
          iVar4 = CapcomMath::random(4);
          iVar15 = iVar18 + 1 + iVar4;
          goto LAB_00183732;
        }
      }
      goto LAB_001836aa;
    }
    if (iVar18 < 0x18) {
      if (6 < iVar18) goto LAB_001836aa;
      if (iVar18 == 3) {
        iVar18 = **(int **)(in_stack_00000020 + DAT_00183690);
        iVar4 = CapcomMath::random(**(int **)(in_stack_00000020 + DAT_00183694) + -1);
        iVar15 = *(int *)(iVar4 * 4 + iVar18);
      }
      else if (iVar18 < 4) {
        if (iVar18 == 1) {
          iVar15 = 0x8c - (uint)(iVar4 != 0);
        }
        else {
          if (iVar18 != 2) goto LAB_00183700;
          iVar15 = 0xdb - (uint)(iVar4 == 0);
        }
      }
      else if (iVar18 == 5) {
        iVar15 = 0xf7;
        if (iVar4 < 2) {
          iVar15 = 0xfa;
        }
      }
      else if (iVar18 < 6) {
        iVar15 = 0xf0;
        if (iVar4 < 2) {
          iVar15 = 0xf1;
        }
      }
      else {
        iVar18 = 0x96;
        iVar15 = DAT_00183a04;
        if (iVar4 < 2) goto LAB_0018371e;
      }
    }
    else if (iVar18 < 0x39) {
      if (iVar18 < 0x19) {
        iVar15 = *(int *)(&stack0x000000b4 + uVar13 * 4);
      }
      else {
LAB_001836aa:
        if (unaff_r5[0x15] == (GameStateRaid)0x0) {
          if (iVar4 < 2) {
            iVar15 = **(int **)(in_stack_00000020 + DAT_001839f4);
          }
          else {
            iVar15 = (*(int **)(in_stack_00000020 + DAT_001839f4))[1];
          }
        }
        else if (iVar4 < 2) {
          iVar15 = *(int *)(*(int *)(in_stack_00000020 + DAT_001839f0) + 0x10);
        }
        else {
          iVar15 = *(int *)(*(int *)(in_stack_00000020 + DAT_001839f0) + 0x14);
        }
      }
    }
    else {
      if (iVar18 != 0x39) goto LAB_001836aa;
      iVar15 = DAT_00183a10;
      if (iVar4 < 2) {
        iVar15 = DAT_001839f8;
      }
    }
LAB_00183732:
    pCVar5 = *(CharacterData **)(iVar15 * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_00183a14));
  }
  else {
    pCVar5 = *(CharacterData **)
              (((uint)((uVar13 & 1) == 0) + DAT_0018368c) * 4 +
              *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_00183688));
  }
  pCVar5 = (CharacterData *)CharacterData::copy(pCVar5);
LAB_00183742:
  GameStateRaid::setEnemyStatus(unaff_r5,pCVar5,false);
  String::String((String *)&stack0x00000088,(char *)(DAT_00183a18 + 0x183756));
  pCVar6 = (Character *)operator_new(0x6c);
  Character::Character(pCVar6,pCVar5,3,0);
  pCVar16 = *(CFPathFinder **)(*(int *)(unaff_r5 + 0x78) + 0x5c);
  pCVar7 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(pCVar7,pCVar6,pCVar16);
  Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(unaff_r5 + 0xc4),pCVar7);
  String::~String((String *)&stack0x00000088);
  piVar14 = *(int **)(pCVar7 + 0x8c);
  iVar18 = __fixsfsi(*(undefined4 *)(*piVar14 + DAT_00183a1c));
  iVar4 = __fixsfsi(piVar14[0x10]);
  if (iVar18 < iVar4) {
    iVar4 = iVar18;
  }
  iVar4 = __floatsisf(iVar4);
  piVar14[0x10] = iVar4;
  iVar4 = *(int *)(pCVar7 + 0x8c);
  CharacterData::getRandomName
            ((CharacterData *)&stack0x00000090,*(bool *)(unaff_r6 + DAT_00183a20),0);
  String::operator=((String *)(iVar4 + 8),&stack0x00000090);
  String::~String((String *)&stack0x00000090);
  *(undefined2 *)(pCVar7 + 0x2c) = 0;
  do {
    iVar4 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar7 + 0x2c));
    if ((iVar4 != 0) &&
       (iVar4 = Cafe::getFurniture(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar7 + 0x2c)),
       iVar4 == 0)) {
      FUN_001843e0();
    }
    uVar2 = CapcomMath::random(**(int **)(in_stack_00000020 + DAT_00183a24) *
                               **(int **)(in_stack_00000020 + DAT_00183a28));
    *(undefined2 *)(pCVar7 + 0x2c) = uVar2;
  } while( true );
}


