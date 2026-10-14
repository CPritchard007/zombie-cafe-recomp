/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a6bb8 GameStateEventRaidMenu::init */

/* GameStateEventRaidMenu::init() */

void __thiscall GameStateEventRaidMenu::init(GameStateEventRaidMenu *this)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ScreenElement *this_00;
  CImage *pCVar6;
  ImageElement *pIVar7;
  ZCImageButton *pZVar8;
  BitmapTextElement *pBVar9;
  TrueTypeTextElement *pTVar10;
  NoticeDialog *this_01;
  ConfirmDialog *pCVar11;
  int iVar12;
  code *pcVar13;
  undefined4 uVar14;
  char *pcVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  ImageButton *this_02;
  undefined4 uVar19;
  int *piVar20;
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
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined8 uVar21;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  float extraout_s1_09;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  String aSStack_174 [8];
  String aSStack_16c [8];
  String aSStack_164 [8];
  String aSStack_15c [8];
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar3 = DAT_001a6d64 + 0x1a6bc6;
  local_1c = **(int **)(iVar3 + DAT_001a6d68);
  pcVar15 = (char *)(DAT_001a6d6c + 0x1a6bd2);
  L_PrintLog(pcVar15,(char *)(DAT_001a6d70 + 0x1a6bd4));
  iVar4 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(iVar4 + 0x40);
  iVar4 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(iVar4 + 0x44);
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadDialogImages(*(ZombieCafe **)(this + 0xc));
  L_PrintLog(pcVar15,(char *)(DAT_001a6d74 + 0x1a6c12));
  iVar16 = **(int **)(iVar3 + DAT_001a6d78);
  iVar4 = SmDev();
  uVar5 = FontManager::addFont(iVar16,SUB41(*(undefined4 *)(DAT_001a6d7c + iVar4 * 4 + 0x1a6c62),0))
  ;
  *(undefined4 *)(this + 100) = uVar5;
  uVar5 = ZombieCafe::getEventRaid_Theme(*(ZombieCafe **)(this + 0xc));
  *(undefined4 *)(this + 0xa8) = uVar5;
  this[0xac] = (GameStateEventRaidMenu)0x0;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  iVar16 = getBgID(this);
  iVar4 = DAT_001a6d80;
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001a6d80),iVar16,false);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x18) = pIVar7;
  (*pcVar13)(piVar17,pIVar7);
  iVar16 = getObjectResoucesID();
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  iVar18 = DAT_001a6d84 + 0x1a6cba;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),iVar16,false);
  iVar4 = SmDev();
  uVar5 = *(undefined4 *)(iVar18 + iVar4 * 4 + 0x50);
  iVar4 = SmDev();
  uVar19 = *(undefined4 *)(iVar18 + iVar4 * 4 + 0x50);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_00,extraout_s1_00,(uchar)uVar5,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x24) = pIVar7;
  (*pcVar13)(piVar17,pIVar7);
  if (*(int *)(this + 0xa8) == 0x14) {
    (**(code **)(**(int **)(this + 0x24) + 0x20))(*(int **)(this + 0x24),0);
  }
  iVar16 = SmDev();
  iVar4 = DAT_001a6d88;
  if ((iVar16 != 4) && (iVar16 = SmDev(), iVar16 != 3)) {
    FUN_001a7b34();
  }
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x22,false);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_01,extraout_s1_01,(uchar)DAT_001a6d8c,
             (bool)(uchar)DAT_001a6d8c);
  *(ImageElement **)(this + 0x1c) = pIVar7;
  (*pcVar13)(piVar17,pIVar7);
  iVar4 = getTitleResoucesID(this);
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  iVar16 = DAT_001a7184 + 0x1a6db0;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001a7180),iVar4,false)
  ;
  iVar4 = SmDev();
  uVar1 = __addsf3(*(undefined4 *)(iVar16 + iVar4 * 4 + 0x68));
  iVar4 = SmDev();
  bVar2 = (bool)__addsf3(*(undefined4 *)(iVar16 + iVar4 * 4 + 0x68));
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0_02,extraout_s1_02,uVar1,bVar2);
  *(ImageElement **)(this + 0x20) = pIVar7;
  (*pcVar13)(piVar17,pIVar7);
  pIVar7 = *(ImageElement **)(this + 0x20);
  iVar4 = SmDev();
  iVar16 = DAT_001a7188 + 0x1a6e14;
  __mulsf3(*(undefined4 *)(iVar16 + iVar4 * 4 + 0x68),*(undefined4 *)(this + 0xb4));
  iVar4 = SmDev();
  uVar21 = __mulsf3(*(undefined4 *)(iVar16 + iVar4 * 4 + 0x68),*(undefined4 *)(this + 0xb4));
  ImageElement::setScale(pIVar7,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001a7180),3,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'$',pCVar6,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x58) = pZVar8;
  (*pcVar13)(piVar17,pZVar8);
  iVar4 = DAT_001a7194;
  L_PrintLog((char *)(DAT_001a718c + 0x1a6e80),(char *)(DAT_001a7190 + 0x1a6e82));
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),10,false)
  ;
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x06',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x54) = pZVar8;
  (*pcVar13)(piVar17,pZVar8);
  uVar5 = *(undefined4 *)(this + 0xb4);
  this_02 = *(ImageButton **)(this + 0x54);
  __mulsf3(uVar5,DAT_001a7198);
  uVar21 = __mulsf3(uVar5,0x3fc00000);
  ImageButton::setScale(this_02,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  pcVar13 = *(code **)(**(int **)(this + 0x54) + 0x2c);
  String::String(aSStack_174,(char *)(DAT_001a719c + 0x1a6eee));
  iVar4 = *(int *)(this + 0x54);
  uVar5 = *(undefined4 *)(iVar4 + 0x10);
  uVar19 = *(undefined4 *)(iVar4 + 0xc);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar9,aSStack_174,*(undefined4 *)(*(int *)(this + 0xc) + DAT_001a71a0),0xffffffff,0,0,
             0,uVar19,uVar5,0x12,0,0);
  *(BitmapTextElement **)(this + 0x98) = pBVar9;
  (*pcVar13)(iVar4,pBVar9);
  String::~String(aSStack_174);
  iVar4 = DAT_001a7194;
  *(undefined1 *)(*(int *)(this + 0x98) + 0x7f) = 0x12;
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),10,false)
  ;
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x12',pCVar6,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x5c) = pZVar8;
  (*pcVar13)(piVar17,pZVar8);
  pcVar13 = *(code **)(**(int **)(this + 0x5c) + 0x2c);
  String::String(aSStack_16c,(char *)(DAT_001a71a4 + 0x1a6f90));
  iVar4 = *(int *)(this + 0x5c);
  uVar5 = *(undefined4 *)(iVar4 + 0xc);
  uVar19 = *(undefined4 *)(iVar4 + 0x10);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  uVar14 = *(undefined4 *)(*(int *)(this + 0xc) + DAT_001a71a0);
  uVar5 = __floatsisf(uVar5);
  __mulsf3(uVar5,DAT_001a71a8);
  __fixsfsi();
  uVar5 = __floatsisf(uVar19);
  __mulsf3(uVar5,DAT_001a71a8);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar9,aSStack_16c,uVar14,0xffffffff);
  *(BitmapTextElement **)(this + 0xa0) = pBVar9;
  (*pcVar13)(iVar4,pBVar9);
  String::~String(aSStack_16c);
  iVar4 = DAT_001a7194;
  *(undefined1 *)(*(int *)(this + 0xa0) + 0x7f) = 0x12;
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),10,false)
  ;
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x12',pCVar6,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x60) = pZVar8;
  uVar21 = (*pcVar13)(piVar17,pZVar8);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x60),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  pcVar13 = *(code **)(**(int **)(this + 0x60) + 0x2c);
  String::String(aSStack_164,(char *)(DAT_001a71ac + 0x1a7062));
  iVar4 = *(int *)(this + 0x60);
  uVar5 = *(undefined4 *)(iVar4 + 0xc);
  uVar19 = *(undefined4 *)(iVar4 + 0x10);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  uVar14 = *(undefined4 *)(*(int *)(this + 0xc) + DAT_001a71a0);
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar19 = __floatsisf(uVar19);
  __mulsf3(uVar19,DAT_001a71a8);
  uVar19 = __fixsfsi();
  BitmapTextElement::BitmapTextElement
            (pBVar9,aSStack_164,uVar14,0xffffffff,uVar22,uVar23,uVar24,uVar5,uVar19,9,0,0);
  *(BitmapTextElement **)(this + 0x9c) = pBVar9;
  (*pcVar13)(iVar4,pBVar9);
  String::~String(aSStack_164);
  iVar4 = DAT_001a71b0;
  *(undefined1 *)(*(int *)(this + 0x9c) + 0x7f) = 0x12;
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_15c,(char *)(iVar4 + 0x1a70da));
  pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar10,aSStack_15c,*(undefined4 *)(this + 100),0xff000000,1,1,6,0);
  *(TrueTypeTextElement **)(this + 0x84) = pTVar10;
  (*pcVar13)(piVar17,pTVar10);
  String::~String(aSStack_15c);
  iVar4 = DAT_001a71b8;
  piVar17 = *(int **)(iVar3 + DAT_001a71b4);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x84));
  L_PrintLog((char *)(iVar4 + 0x1a7130),(char *)(DAT_001a71bc + 0x1a7134));
  sprintf(acStack_11c,(char *)(DAT_001a71c0 + 0x1a7142),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x1a7130),acStack_11c);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  L_PrintLog((char *)(DAT_001a71c4 + 0x1a7160),(char *)(DAT_001a71c8 + 0x1a7162));
  piVar20 = *(int **)(this + 0x1c);
  pcVar13 = *(code **)(*piVar20 + 0x2c);
  String::String(aSStack_154,(char *)(DAT_001a71cc + 0x1a7170));
  pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar10,aSStack_154,*(undefined4 *)(this + 100),0xffffffff,1,1,0x21,0);
  *(TrueTypeTextElement **)(this + 0x68) = pTVar10;
  (*pcVar13)(piVar20,pTVar10);
  String::~String(aSStack_154);
  iVar4 = DAT_001a75bc;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x68));
  L_PrintLog((char *)(iVar4 + 0x1a720a),(char *)(DAT_001a75c0 + 0x1a720e));
  sprintf(acStack_11c,(char *)(DAT_001a75c4 + 0x1a721c),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x1a720a),acStack_11c);
  piVar20 = *(int **)(this + 0x1c);
  pcVar13 = *(code **)(*piVar20 + 0x2c);
  String::String(aSStack_14c,(char *)(DAT_001a75c8 + 0x1a7234));
  pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar10,aSStack_14c,*(undefined4 *)(this + 100),0xffffffff,1,1,9,0);
  *(TrueTypeTextElement **)(this + 0x6c) = pTVar10;
  (*pcVar13)(piVar20,pTVar10);
  String::~String(aSStack_14c);
  iVar4 = DAT_001a75cc;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x6c));
  L_PrintLog((char *)(iVar4 + 0x1a727c),(char *)(DAT_001a75d0 + 0x1a7280));
  sprintf(acStack_11c,(char *)(DAT_001a75d4 + 0x1a728e),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x1a727c),acStack_11c);
  piVar20 = *(int **)(this + 0x1c);
  pcVar13 = *(code **)(*piVar20 + 0x2c);
  String::String(aSStack_144,(char *)(DAT_001a75d8 + 0x1a72a6));
  pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar10,aSStack_144,*(undefined4 *)(this + 100),0xffffffff,1,1,0x21,0);
  *(TrueTypeTextElement **)(this + 0x70) = pTVar10;
  (*pcVar13)(piVar20,pTVar10);
  String::~String(aSStack_144);
  iVar4 = DAT_001a75dc;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x70));
  L_PrintLog((char *)(iVar4 + 0x1a72ee),(char *)(DAT_001a75e0 + 0x1a72f2));
  sprintf(acStack_11c,(char *)(DAT_001a75e4 + 0x1a7300),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x1a72ee),acStack_11c);
  piVar20 = *(int **)(this + 0x1c);
  pcVar13 = *(code **)(*piVar20 + 0x2c);
  String::String(aSStack_13c,(char *)(DAT_001a75e8 + 0x1a7318));
  pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar10,aSStack_13c,*(undefined4 *)(this + 100),0xffffffff,1,1,9,0);
  *(TrueTypeTextElement **)(this + 0x74) = pTVar10;
  (*pcVar13)(piVar20,pTVar10);
  String::~String(aSStack_13c);
  iVar4 = DAT_001a75ec;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x74));
  L_PrintLog((char *)(iVar4 + 0x1a7360),(char *)(DAT_001a75f0 + 0x1a7364));
  sprintf(acStack_11c,(char *)(DAT_001a75f4 + 0x1a7372),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x1a7360),acStack_11c);
  piVar20 = *(int **)(this + 0x1c);
  pcVar13 = *(code **)(*piVar20 + 0x2c);
  String::String(aSStack_134,(char *)(DAT_001a75f8 + 0x1a738a));
  pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar10,aSStack_134,*(undefined4 *)(this + 100),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x78) = pTVar10;
  (*pcVar13)(piVar20,pTVar10);
  String::~String(aSStack_134);
  iVar4 = DAT_001a75fc;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x78));
  L_PrintLog((char *)(iVar4 + 0x1a73d2),(char *)(DAT_001a7600 + 0x1a73d6));
  sprintf(acStack_11c,(char *)(DAT_001a7604 + 0x1a73e4),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x1a73d2),acStack_11c);
  piVar20 = *(int **)(this + 0x1c);
  pcVar13 = *(code **)(*piVar20 + 0x2c);
  String::String(aSStack_12c,(char *)(DAT_001a7608 + 0x1a73fc));
  pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar10,aSStack_12c,*(undefined4 *)(this + 100),DAT_001a760c,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x7c) = pTVar10;
  (*pcVar13)(piVar20,pTVar10);
  String::~String(aSStack_12c);
  iVar4 = DAT_001a7610;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x7c));
  L_PrintLog((char *)(iVar4 + 0x1a7442),(char *)(DAT_001a7614 + 0x1a7446));
  sprintf(acStack_11c,(char *)(DAT_001a7618 + 0x1a7454),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x1a7442),acStack_11c);
  L_PrintLog((char *)(DAT_001a761c + 0x1a7468),(char *)(DAT_001a7620 + 0x1a746a));
  piVar20 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar20 + 0x2c);
  String::String(aSStack_124,(char *)(DAT_001a7624 + 0x1a7478));
  pTVar10 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar10,aSStack_124,*(undefined4 *)(this + 100),DAT_001a760c,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x80) = pTVar10;
  (*pcVar13)(piVar20,pTVar10);
  String::~String(aSStack_124);
  iVar4 = DAT_001a7628;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x80));
  L_PrintLog((char *)(iVar4 + 0x1a74c2),(char *)(DAT_001a762c + 0x1a74c6));
  iVar16 = DAT_001a7634;
  sprintf(acStack_11c,(char *)(DAT_001a7630 + 0x1a74d4),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x1a74c2),acStack_11c);
  iVar4 = DAT_001a7638;
  (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),0);
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x38,false);
  iVar18 = SmDev();
  uVar5 = *(undefined4 *)(iVar18 * 4 + iVar16 + 0x1a74ee);
  iVar18 = SmDev();
  uVar19 = *(undefined4 *)(iVar18 * 4 + iVar16 + 0x1a74ee);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_03,extraout_s1_03,(uchar)uVar5,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x28) = pIVar7;
  uVar21 = (*pcVar13)(piVar17,pIVar7);
  iVar16 = DAT_001a763c;
  ImageElement::setScale
            (*(ImageElement **)(this + 0x28),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  piVar17 = *(int **)(this + 0x28);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x39,false);
  iVar18 = SmDev();
  uVar5 = *(undefined4 *)(iVar18 * 4 + iVar16 + 0x1a755a);
  iVar18 = SmDev();
  uVar19 = *(undefined4 *)(iVar18 * 4 + iVar16 + 0x1a755a);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_04,extraout_s1_04,(uchar)uVar5,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x2c) = pIVar7;
  (*pcVar13)(piVar17,pIVar7);
  piVar17 = *(int **)(this + 0x28);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  iVar18 = DAT_001a7640 + 0x1a75ae;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x39,false);
  iVar16 = SmDev();
  uVar5 = *(undefined4 *)(iVar16 * 4 + iVar18);
  iVar16 = SmDev();
  uVar19 = *(undefined4 *)(iVar16 * 4 + iVar18);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_05,extraout_s1_05,(uchar)uVar5,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x30) = pIVar7;
  (*pcVar13)(piVar17,pIVar7);
  piVar17 = *(int **)(this + 0x28);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  iVar18 = DAT_001a7a44 + 0x1a768c;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x39,false);
  iVar16 = SmDev();
  uVar5 = *(undefined4 *)(iVar16 * 4 + iVar18);
  iVar16 = SmDev();
  uVar19 = *(undefined4 *)(iVar16 * 4 + iVar18);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_06,extraout_s1_06,(uchar)uVar5,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x34) = pIVar7;
  uVar21 = (*pcVar13)(piVar17,pIVar7);
  uVar21 = ImageElement::setScale
                     (*(ImageElement **)(this + 0x2c),(float)uVar21,
                      (float)((ulonglong)uVar21 >> 0x20));
  uVar21 = ImageElement::setScale
                     (*(ImageElement **)(this + 0x30),(float)uVar21,
                      (float)((ulonglong)uVar21 >> 0x20));
  ImageElement::setScale
            (*(ImageElement **)(this + 0x34),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x31,false);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0_07,extraout_s1_07,'\0',false);
  *(ImageElement **)(this + 0x38) = pIVar7;
  uVar21 = (*pcVar13)(piVar17,pIVar7);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x38),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  setEventRaidSoulPosition(this);
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x60,false);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0_08,extraout_s1_08,'\0',false);
  *(ImageElement **)(this + 0x3c) = pIVar7;
  uVar21 = (*pcVar13)(piVar17,pIVar7);
  iVar4 = DAT_001a7a48;
  ImageElement::setScale
            (*(ImageElement **)(this + 0x3c),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),DAT_001a7a4c,false)
  ;
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0_09,extraout_s1_09,'\0',false);
  *(ImageElement **)(this + 0x88) = pIVar7;
  (*pcVar13)(piVar17,pIVar7);
  pIVar7 = *(ImageElement **)(this + 0x88);
  uVar21 = __mulsf3(*(undefined4 *)(this + 0xb4),DAT_001a7a50);
  ImageElement::setScale(pIVar7,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001a7a48),0x118,false)
  ;
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x12',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x8c) = pZVar8;
  (*pcVar13)(piVar17,pZVar8);
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001a7a48),DAT_001a7a54,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x12',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x90) = pZVar8;
  (*pcVar13)(piVar17,pZVar8);
  piVar17 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001a7a48),0x120,false)
  ;
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x12',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x94) = pZVar8;
  uVar21 = (*pcVar13)(piVar17,pZVar8);
  uVar21 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x8c),(float)uVar21,
                      (float)((ulonglong)uVar21 >> 0x20));
  uVar21 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x90),(float)uVar21,
                      (float)((ulonglong)uVar21 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0x94),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  uVar5 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001a7a48),false);
  *(undefined4 *)(this + 0x44) = uVar5;
  uVar5 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x40) = uVar5;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_01,*(CImage **)(*(int *)(this + 0x40) + 0x14),
             *(CImage **)(*(int *)(this + 0x44) + 0x28),extraout_s0_10);
  *(NoticeDialog **)(this + 0x48) = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,4);
  (**(code **)(**(int **)(this + 0x48) + 0x1c))(*(int **)(this + 0x48),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x48))
  ;
  L_PrintLog((char *)(DAT_001a7a58 + 0x1a7938),(char *)(DAT_001a7a5c + 0x1a793a));
  pCVar11 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar11,*(CImage **)(*(int *)(this + 0x40) + 0x14),
             *(CImage **)(*(int *)(this + 0x44) + 0x28),*(CImage **)(*(int *)(this + 0x44) + 0x44),0
             ,extraout_s0_11,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x4c) = pCVar11;
  ScreenElement::setOrder((ScreenElement *)pCVar11,99);
  (**(code **)(**(int **)(this + 0x4c) + 0x1c))(*(int **)(this + 0x4c),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x4c))
  ;
  pCVar11 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar11,*(CImage **)(*(int *)(this + 0x40) + 0x14),
             *(CImage **)(*(int *)(this + 0x44) + 0x3d0),*(CImage **)(*(int *)(this + 0x44) + 0x3d0)
             ,0,extraout_s0_12,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x50) = pCVar11;
  ScreenElement::setOrder((ScreenElement *)pCVar11,99);
  (**(code **)(**(int **)(this + 0x50) + 0x1c))(*(int **)(this + 0x50),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x50))
  ;
  iVar4 = ZombieCafe::getEventRaid_cafeLevel(*(ZombieCafe **)(this + 0xc));
  iVar16 = ZombieCafe::getEventRaid_cafeLevelNext(*(ZombieCafe **)(this + 0xc));
  iVar18 = ZombieCafe::getEventRaid_cafeLevelMax(*(ZombieCafe **)(this + 0xc));
  if (((iVar4 < iVar16) &&
      (((iVar12 = ZombieCafe::getEventRaid_status(*(ZombieCafe **)(this + 0xc)), iVar12 == 2 ||
        (iVar12 == 0)) && (iVar12 = getEventRaidMenu_MiddleLevel(this), iVar4 == iVar12 + -1)))) &&
     ((iVar16 == iVar12 && (iVar16 < iVar18)))) {
    ZombieCafe::addEventRaid_cafeLevel(*(ZombieCafe **)(this + 0xc));
  }
  L_PrintLog((char *)(DAT_001a7a60 + 0x1a7a0a),(char *)(DAT_001a7a64 + 0x1a7a0c));
  if (local_1c == **(int **)(iVar3 + DAT_001a7a68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


