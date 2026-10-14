/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c231c GameStateWeekRaidMenu::init */

/* GameStateWeekRaidMenu::init() */

void __thiscall GameStateWeekRaidMenu::init(GameStateWeekRaidMenu *this)

{
  int iVar1;
  ScreenElement *this_00;
  CImage *pCVar2;
  ImageElement *pIVar3;
  ZCImageButton *pZVar4;
  BitmapTextElement *pBVar5;
  TrueTypeTextElement *pTVar6;
  NoticeDialog *this_01;
  ConfirmDialog *pCVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  Vector<TrueTypeTextElement*> *this_02;
  undefined4 uVar15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  float extraout_s0_13;
  float extraout_s0_14;
  float extraout_s0_15;
  float extraout_s0_16;
  float extraout_s0_17;
  float extraout_s0_18;
  float extraout_s0_19;
  float extraout_s0_20;
  float extraout_s0_21;
  float extraout_s0_22;
  float extraout_s0_23;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar16;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  float extraout_s1_09;
  float extraout_s1_10;
  float extraout_s1_11;
  float extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  float extraout_s1_16;
  float extraout_s1_17;
  float extraout_s1_18;
  float extraout_s1_19;
  float extraout_s1_20;
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar8 = DAT_001c2708 + 0x1c2328;
  local_1c = **(int **)(iVar8 + DAT_001c270c);
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar11 = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 *)(this + 0xb4) = uVar11;
  uVar15 = *(undefined4 *)(this + 0xb0);
  iVar1 = __aeabi_fcmpge(uVar15,uVar11);
  if (iVar1 != 0) {
    uVar15 = uVar11;
  }
  *(undefined4 *)(this + 0xb8) = uVar15;
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadDialogImages(*(ZombieCafe **)(this + 0xc));
  iVar12 = **(int **)(iVar8 + DAT_001c2710);
  iVar1 = SmDev();
  uVar15 = FontManager::addFont
                     (iVar12,SUB41(*(undefined4 *)(DAT_001c2714 + iVar1 * 4 + 0x1c23ec),0));
  *(undefined4 *)(this + 0x9c) = uVar15;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  iVar12 = getBgID(this);
  iVar1 = DAT_001c2718;
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2718),iVar12,false);
  iVar12 = SmDev();
  uVar15 = *(undefined4 *)(DAT_001c271c + iVar12 * 4 + 0x1c2458);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0,extraout_s1,(uchar)uVar15,false);
  *(ImageElement **)(this + 0x18) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  iVar12 = getTitleID(this);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  iVar14 = DAT_001c2720 + 0x1c2420;
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),iVar12,false);
  iVar1 = SmDev();
  uVar15 = *(undefined4 *)(iVar14 + iVar1 * 4 + 0x10);
  iVar1 = SmDev();
  uVar11 = *(undefined4 *)(iVar14 + iVar1 * 4 + 0x10);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar3,pCVar2,extraout_s0_00,extraout_s1_00,(uchar)uVar15,SUB41(uVar11,0));
  *(ImageElement **)(this + 0x1c) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2718),3,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'$',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x48) = pZVar4;
  (*pcVar9)(piVar13,pZVar4);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2724),10,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x06',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x44) = pZVar4;
  (*pcVar9)(piVar13,pZVar4);
  pcVar9 = *(code **)(**(int **)(this + 0x44) + 0x2c);
  String::String(aSStack_134,(char *)(DAT_001c2728 + 0x1c24e8));
  iVar1 = *(int *)(this + 0x44);
  uVar15 = *(undefined4 *)(iVar1 + 0xc);
  uVar11 = *(undefined4 *)(iVar1 + 0x10);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  uVar10 = *(undefined4 *)(*(int *)(this + 0xc) + DAT_001c272c);
  uVar15 = __floatsisf(uVar15);
  __mulsf3(uVar15,DAT_001c2730);
  __fixsfsi();
  uVar15 = __floatsisf(uVar11);
  __mulsf3(uVar15,DAT_001c2730);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_134,uVar10,0xffffffff);
  *(BitmapTextElement **)(this + 0xa8) = pBVar5;
  (*pcVar9)(iVar1,pBVar5);
  String::~String(aSStack_134);
  iVar1 = DAT_001c2724;
  *(undefined1 *)(*(int *)(this + 0xa8) + 0x7f) = 0x12;
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),DAT_001c2734,false)
  ;
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_01,extraout_s1_01,'\0',false);
  *(ImageElement **)(this + 0x8c) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  pIVar3 = *(ImageElement **)(this + 0x8c);
  uVar16 = __mulsf3(*(undefined4 *)(this + 0xb8),DAT_001c2738);
  ImageElement::setScale(pIVar3,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2724),DAT_001c273c,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x90) = pZVar4;
  (*pcVar9)(piVar13,pZVar4);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2724),0x11a,false)
  ;
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x94) = pZVar4;
  (*pcVar9)(piVar13,pZVar4);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2724),0x120,false)
  ;
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x98) = pZVar4;
  uVar16 = (*pcVar9)(piVar13,pZVar4);
  uVar16 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x90),(float)uVar16,
                      (float)((ulonglong)uVar16 >> 0x20));
  uVar16 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x94),(float)uVar16,
                      (float)((ulonglong)uVar16 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0x98),(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  iVar1 = getLvButtomID(this,0);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2718),iVar1,false)
  ;
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x4c) = pZVar4;
  (*pcVar9)(piVar13,pZVar4);
  iVar1 = ZombieCafe::getWeekRaid_toxinflag(*(ZombieCafe **)(this + 0xc),0);
  piVar13 = *(int **)(this + 0x4c);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  if (iVar1 == 0) {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2718),0x4c,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_02,extraout_s1_02,'\0',false);
  }
  else {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2718),0x4d,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_03,extraout_s1_03,'\0',false);
  }
  *(ImageElement **)(this + 0x7c) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x4c);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x44,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_04,extraout_s1_04,'\0',false);
  *(ImageElement **)(this + 100) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  iVar1 = getLvButtomID(this,1);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),iVar1,false)
  ;
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x50) = pZVar4;
  (*pcVar9)(piVar13,pZVar4);
  iVar1 = ZombieCafe::getWeekRaid_toxinflag(*(ZombieCafe **)(this + 0xc),1);
  piVar13 = *(int **)(this + 0x50);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  if (iVar1 == 0) {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x4c,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    uVar15 = 0xc;
    ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_05,extraout_s1_05,'\0',false);
  }
  else {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x4d,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    uVar15 = 0xc;
    iVar1 = 0;
    ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_06,extraout_s1_06,'\0',false);
  }
  *(ImageElement **)(this + 0x80) = pIVar3;
  (*pcVar9)(piVar13,pIVar3,pcVar9,this + 4,uVar15,iVar1);
  piVar13 = *(int **)(this + 0x50);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x44,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_07,extraout_s1_07,'\0',false);
  *(ImageElement **)(this + 0x68) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  iVar1 = getLvButtomID(this,2);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),iVar1,false)
  ;
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x54) = pZVar4;
  (*pcVar9)(piVar13,pZVar4);
  iVar1 = ZombieCafe::getWeekRaid_toxinflag(*(ZombieCafe **)(this + 0xc),2);
  piVar13 = *(int **)(this + 0x54);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  if (iVar1 == 0) {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x4c,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    uVar15 = 0xc;
    ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_08,extraout_s1_08,'\0',false);
  }
  else {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x4d,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    uVar15 = 0xc;
    iVar1 = 0;
    ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_09,extraout_s1_09,'\0',false);
  }
  *(ImageElement **)(this + 0x84) = pIVar3;
  (*pcVar9)(piVar13,pIVar3,pcVar9,this + 8,uVar15,iVar1);
  piVar13 = *(int **)(this + 0x54);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x44,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_10,extraout_s1_10,'\0',false);
  *(ImageElement **)(this + 0x6c) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  iVar1 = getLvButtomID(this,3);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),iVar1,false)
  ;
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x58) = pZVar4;
  (*pcVar9)(piVar13,pZVar4);
  iVar1 = ZombieCafe::getWeekRaid_toxinflag(*(ZombieCafe **)(this + 0xc),3);
  piVar13 = *(int **)(this + 0x58);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  if (iVar1 == 0) {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x4c,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    uVar15 = 0xc;
    ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_11,extraout_s1_11,'\0',false);
  }
  else {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x4d,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    uVar15 = 0xc;
    iVar1 = 0;
    ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_12,extraout_s1_12,'\0',false);
  }
  *(ImageElement **)(this + 0x88) = pIVar3;
  (*pcVar9)(piVar13,pIVar3,pcVar9,this + 0x88,uVar15,iVar1);
  piVar13 = *(int **)(this + 0x58);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x44,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_13,extraout_s1_13,'\0',false);
  *(ImageElement **)(this + 0x70) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x42,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x5c) = pZVar4;
  (*pcVar9)(piVar13,pZVar4);
  piVar13 = *(int **)(this + 0x5c);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  if (*(int *)(this + 0xcc) == 0) {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x45,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_14,extraout_s1_14,'\0',false);
  }
  else {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2b28),0x44,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_15,extraout_s1_15,'\0',false);
  }
  *(ImageElement **)(this + 0x74) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2f40),0x43,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x60) = pZVar4;
  (*pcVar9)(piVar13,pZVar4);
  piVar13 = *(int **)(this + 0x60);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2f40),0x45,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0_16,extraout_s1_16,'\0',false);
  *(ImageElement **)(this + 0x78) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_12c,(char *)(DAT_001c2f44 + 0x1c2be0));
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar5,aSStack_12c,*(undefined4 *)(*(int *)(this + 0xc) + DAT_001c2f48),0xff000000,0,0,
             0,0x200,300,9,0,0);
  *(BitmapTextElement **)(this + 0xac) = pBVar5;
  (*pcVar9)(piVar13,pBVar5);
  String::~String(aSStack_12c);
  piVar13 = *(int **)(this + 0xac);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_124,(char *)(DAT_001c2f4c + 0x1c2c44));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,aSStack_124,*(undefined4 *)(this + 0x9c),DAT_001c2f50,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xa0) = pTVar6;
  (*pcVar9)(piVar13,pTVar6);
  String::~String(aSStack_124);
  piVar13 = *(int **)(iVar8 + DAT_001c2f54);
  this_02 = (Vector<TrueTypeTextElement*> *)*piVar13;
  uVar15 = *(undefined4 *)(this + 0xa0);
  iVar1 = *(int *)(this_02 + 4) + 2;
  if (*(int *)this_02 < iVar1) {
    iVar12 = *(int *)this_02 * 2;
    if (iVar12 < iVar1) {
      iVar12 = iVar1;
    }
    Vector<TrueTypeTextElement*>::resize(this_02,iVar12,-1);
  }
  iVar1 = DAT_001c2f58;
  iVar14 = *(int *)(this_02 + 4);
  *(int *)(this_02 + 4) = iVar14 + 1;
  iVar12 = DAT_001c2f5c;
  *(undefined4 *)((iVar14 + 1) * 4 + *(int *)(this_02 + 8)) = uVar15;
  L_PrintLog((char *)(iVar12 + 0x1c2cbc),(char *)(iVar1 + 0x1c2cc0));
  iVar1 = DAT_001c2f40;
  sprintf(acStack_11c,(char *)(DAT_001c2f60 + 0x1c2cce),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(iVar12 + 0x1c2cbc),acStack_11c);
  iVar14 = DAT_001c2f64 + 0x1c2cec;
  (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),0);
  piVar13 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x3b,false);
  iVar12 = SmDev();
  uVar15 = *(undefined4 *)(iVar14 + iVar12 * 4 + 0x28);
  iVar12 = SmDev();
  uVar11 = *(undefined4 *)(iVar14 + iVar12 * 4 + 0x28);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar3,pCVar2,extraout_s0_17,extraout_s1_17,(uchar)uVar15,SUB41(uVar11,0));
  *(ImageElement **)(this + 0x20) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x20);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  iVar14 = DAT_001c2f68 + 0x1c2d50;
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x3c,false);
  iVar12 = SmDev();
  uVar15 = *(undefined4 *)(iVar14 + iVar12 * 4 + 0x28);
  iVar12 = SmDev();
  uVar11 = *(undefined4 *)(iVar14 + iVar12 * 4 + 0x28);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar3,pCVar2,extraout_s0_18,extraout_s1_18,(uchar)uVar15,SUB41(uVar11,0));
  *(ImageElement **)(this + 0x24) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x20);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  iVar14 = DAT_001c2f6c + 0x1c2da6;
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x3c,false);
  iVar12 = SmDev();
  uVar15 = *(undefined4 *)(iVar14 + iVar12 * 4 + 0x28);
  iVar12 = SmDev();
  uVar11 = *(undefined4 *)(iVar14 + iVar12 * 4 + 0x28);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar3,pCVar2,extraout_s0_19,extraout_s1_19,(uchar)uVar15,SUB41(uVar11,0));
  *(ImageElement **)(this + 0x28) = pIVar3;
  (*pcVar9)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x20);
  pcVar9 = *(code **)(*piVar13 + 0x2c);
  iVar12 = DAT_001c2f70 + 0x1c2dfc;
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x3c,false);
  iVar1 = SmDev();
  uVar15 = *(undefined4 *)(iVar12 + iVar1 * 4 + 0x28);
  iVar1 = SmDev();
  uVar11 = *(undefined4 *)(iVar12 + iVar1 * 4 + 0x28);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar3,pCVar2,extraout_s0_20,extraout_s1_20,(uchar)uVar15,SUB41(uVar11,0));
  *(ImageElement **)(this + 0x2c) = pIVar3;
  uVar16 = (*pcVar9)(piVar13,pIVar3);
  uVar16 = ImageElement::setScale
                     (*(ImageElement **)(this + 0x20),(float)uVar16,
                      (float)((ulonglong)uVar16 >> 0x20));
  uVar16 = ImageElement::setScale
                     (*(ImageElement **)(this + 0x24),(float)uVar16,
                      (float)((ulonglong)uVar16 >> 0x20));
  uVar16 = ImageElement::setScale
                     (*(ImageElement **)(this + 0x28),(float)uVar16,
                      (float)((ulonglong)uVar16 >> 0x20));
  ImageElement::setScale
            (*(ImageElement **)(this + 0x2c),(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  setWeekRaidSoulPosition(this);
  uVar15 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c2f74),false);
  *(undefined4 *)(this + 0x34) = uVar15;
  uVar15 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x30) = uVar15;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_01,*(CImage **)(*(int *)(this + 0x30) + 0x14),
             *(CImage **)(*(int *)(this + 0x34) + 0x28),extraout_s0_21);
  *(NoticeDialog **)(this + 0x38) = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,4);
  (**(code **)(**(int **)(this + 0x38) + 0x1c))(*(int **)(this + 0x38),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x38))
  ;
  pCVar7 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar7,*(CImage **)(*(int *)(this + 0x30) + 0x14),
             *(CImage **)(*(int *)(this + 0x34) + 0x28),*(CImage **)(*(int *)(this + 0x34) + 0x44),0
             ,extraout_s0_22,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x3c) = pCVar7;
  ScreenElement::setOrder((ScreenElement *)pCVar7,99);
  (**(code **)(**(int **)(this + 0x3c) + 0x1c))(*(int **)(this + 0x3c),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x3c))
  ;
  pCVar7 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar7,*(CImage **)(*(int *)(this + 0x30) + 0x14),
             *(CImage **)(*(int *)(this + 0x34) + 0x3d0),*(CImage **)(*(int *)(this + 0x34) + 0x44),
             0,extraout_s0_23,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x40) = pCVar7;
  ScreenElement::setOrder((ScreenElement *)pCVar7,99);
  (**(code **)(**(int **)(this + 0x40) + 0x1c))(*(int **)(this + 0x40),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x40))
  ;
  if (local_1c != **(int **)(iVar8 + DAT_001c3024)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


