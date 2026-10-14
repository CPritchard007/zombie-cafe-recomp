/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b0e30 GameStateEventRaid2Menu::init */

/* GameStateEventRaid2Menu::init() */

void __thiscall GameStateEventRaid2Menu::init(GameStateEventRaid2Menu *this)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  ScreenElement *this_00;
  CImage *pCVar5;
  ImageElement *pIVar6;
  ZCImageButton *pZVar7;
  BitmapTextElement *pBVar8;
  TrueTypeTextElement *pTVar9;
  NoticeDialog *this_01;
  ConfirmDialog *pCVar10;
  WaitDialog *this_02;
  int iVar11;
  code *pcVar12;
  int *piVar13;
  GameStateEventRaid2Menu *pGVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  ImageButton *this_03;
  int iVar18;
  undefined4 uVar19;
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
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined8 uVar20;
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
  
  iVar11 = DAT_001b1210 + 0x1b0e3c;
  local_1c = **(int **)(iVar11 + DAT_001b1214);
  iVar3 = ZombieCafe::getEventRaid2_Theme();
  *(int *)(this + 0x100) = iVar3;
  *(byte *)(*(int *)(iVar11 + DAT_001b1218) + 0x19) =
       (byte)*(undefined4 *)(DAT_001b121c + iVar3 * 4 + 0x1b0ed4) & 1;
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadDialogImages(*(ZombieCafe **)(this + 0xc));
  iVar17 = **(int **)(iVar11 + DAT_001b1220);
  iVar3 = SmDev();
  uVar4 = FontManager::addFont(iVar17,SUB41(*(undefined4 *)(DAT_001b1224 + iVar3 * 4 + 0x1b0f00),0))
  ;
  *(undefined4 *)(this + 200) = uVar4;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x28) = this_00;
  iVar17 = getBgResoucesID(this);
  iVar3 = DAT_001b1228;
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1228),iVar17,false);
  iVar17 = SmDev();
  uVar4 = *(undefined4 *)(DAT_001b122c + iVar17 * 4 + 0x1b0eec);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0,extraout_s1,(uchar)uVar4,SUB41(DAT_001b1230,0));
  *(ImageElement **)(this + 0x2c) = pIVar6;
  (*pcVar12)(piVar13,pIVar6);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  iVar17 = DAT_001b1234 + 0x1b0f20;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),0x34,false);
  iVar3 = SmDev();
  uVar1 = __mulsf3(*(undefined4 *)(iVar17 + iVar3 * 4 + 0x1c),*(undefined4 *)(this + 0x10c));
  iVar3 = SmDev();
  bVar2 = (bool)__mulsf3(*(undefined4 *)(iVar17 + iVar3 * 4 + 0x1c),*(undefined4 *)(this + 0x10c));
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_00,extraout_s1_00,uVar1,bVar2);
  *(ImageElement **)(this + 0x3c) = pIVar6;
  (*pcVar12)(piVar13,pIVar6);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1228),0x32,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_01,extraout_s1_01,(uchar)DAT_001b1238,
             (bool)(uchar)DAT_001b1238);
  *(ImageElement **)(this + 0x40) = pIVar6;
  (*pcVar12)(piVar13,pIVar6);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b123c),0x22,false);
  iVar3 = SmDev();
  uVar1 = __mulsf3(*(undefined4 *)(DAT_001b1240 + iVar3 * 4 + 0x1b100c),DAT_001b1244);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_02,extraout_s1_02,uVar1,SUB41(DAT_001b1248,0));
  *(ImageElement **)(this + 0x30) = pIVar6;
  (*pcVar12)(piVar13,pIVar6);
  uVar4 = *(undefined4 *)(this + 0x10c);
  pIVar6 = *(ImageElement **)(this + 0x30);
  __mulsf3(uVar4,DAT_001b124c);
  uVar20 = __mulsf3(uVar4,DAT_001b1238);
  ImageElement::setScale(pIVar6,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  iVar3 = getZombieIconResoucesID(this);
  if (iVar3 != 0) {
    piVar13 = *(int **)(this + 0x30);
    pcVar12 = *(code **)(*piVar13 + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1228),iVar3,false);
    pIVar6 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_03,extraout_s1_03,'\0',false);
    pGVar14 = this + 0xc4;
    *(ImageElement **)pGVar14 = pIVar6;
    (*pcVar12)(piVar13,pIVar6);
    uVar20 = __mulsf3(*(undefined4 *)(this + 0x10c),DAT_001b1238);
    ImageElement::setScale
              (*(ImageElement **)pGVar14,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
    (**(code **)(**(int **)pGVar14 + 0x20))(*(int **)pGVar14,0);
  }
  iVar3 = getTitleResoucesID(this);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  iVar17 = DAT_001b1250 + 0x1b10a8;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1228),iVar3,false)
  ;
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)(iVar17 + iVar3 * 4 + 0x4c);
  iVar3 = SmDev();
  uVar19 = *(undefined4 *)(iVar17 + iVar3 * 4 + 0x4c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_04,extraout_s1_04,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x34) = pIVar6;
  uVar20 = (*pcVar12)(piVar13,pIVar6);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x34),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  iVar3 = getTitleResoucesID2(this);
  if (iVar3 != 0) {
    piVar13 = *(int **)(this + 0x28);
    iVar17 = DAT_001b1254 + 0x1b1112;
    pcVar12 = *(code **)(*piVar13 + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1228),iVar3,false);
    iVar3 = SmDev();
    uVar4 = *(undefined4 *)(iVar17 + iVar3 * 4 + 0x4c);
    iVar3 = SmDev();
    uVar19 = *(undefined4 *)(iVar17 + iVar3 * 4 + 0x4c);
    pIVar6 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement
              (pIVar6,pCVar5,extraout_s0_05,extraout_s1_05,(uchar)uVar4,SUB41(uVar19,0));
    *(ImageElement **)(this + 0x38) = pIVar6;
    uVar20 = (*pcVar12)(piVar13,pIVar6);
    ImageElement::setScale
              (*(ImageElement **)(this + 0x38),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  }
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1228),3,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x70) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1258),10,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x06',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x6c) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  uVar4 = *(undefined4 *)(this + 0x10c);
  this_03 = *(ImageButton **)(this + 0x6c);
  __mulsf3(uVar4,DAT_001b1244);
  uVar20 = __mulsf3(uVar4,0x3fc00000);
  ImageButton::setScale(this_03,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  pcVar12 = *(code **)(**(int **)(this + 0x6c) + 0x2c);
  String::String(aSStack_16c,(char *)(DAT_001b125c + 0x1b1264));
  iVar3 = *(int *)(this + 0x6c);
  uVar4 = *(undefined4 *)(iVar3 + 0x10);
  uVar19 = *(undefined4 *)(iVar3 + 0xc);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_16c,*(undefined4 *)(*(int *)(this + 0xc) + DAT_001b163c),0xffffffff,0,0,
             0,uVar19,uVar4,0x12,0,0);
  *(BitmapTextElement **)(this + 0xe8) = pBVar8;
  (*pcVar12)(iVar3,pBVar8);
  String::~String(aSStack_16c);
  iVar3 = DAT_001b1640;
  *(undefined1 *)(*(int *)(this + 0xe8) + 0x7f) = 0x12;
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_164,(char *)(iVar3 + 0x1b12c4));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_164,*(undefined4 *)(this + 200),0xff000000,1,1,6,0);
  *(TrueTypeTextElement **)(this + 0xe4) = pTVar9;
  (*pcVar12)(piVar13,pTVar9);
  String::~String(aSStack_164);
  iVar3 = DAT_001b1648;
  piVar15 = *(int **)(iVar11 + DAT_001b1644);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0xe4));
  L_PrintLog((char *)(iVar3 + 0x1b131e),(char *)(DAT_001b164c + 0x1b1322));
  sprintf(acStack_11c,(char *)(DAT_001b1650 + 0x1b1330),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1b131e),acStack_11c);
  piVar13 = *(int **)(this + 0xe4);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  piVar13 = *(int **)(this + 0x30);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_15c,(char *)(DAT_001b1654 + 0x1b1352));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_15c,*(undefined4 *)(this + 200),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xcc) = pTVar9;
  (*pcVar12)(piVar13,pTVar9);
  String::~String(aSStack_15c);
  iVar3 = DAT_001b1658;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0xcc));
  L_PrintLog((char *)(iVar3 + 0x1b13a6),(char *)(DAT_001b165c + 0x1b13aa));
  sprintf(acStack_11c,(char *)(DAT_001b1660 + 0x1b13b8),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1b13a6),acStack_11c);
  piVar13 = *(int **)(this + 0x30);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_154,(char *)(DAT_001b1664 + 0x1b13d0));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_154,*(undefined4 *)(this + 200),DAT_001b1668,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xd0) = pTVar9;
  (*pcVar12)(piVar13,pTVar9);
  String::~String(aSStack_154);
  iVar3 = DAT_001b166c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0xd0));
  L_PrintLog((char *)(iVar3 + 0x1b1422),(char *)(DAT_001b1670 + 0x1b1426));
  sprintf(acStack_11c,(char *)(DAT_001b1674 + 0x1b1434),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1b1422),acStack_11c);
  piVar13 = *(int **)(this + 0xd0);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  piVar13 = *(int **)(this + 0x30);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_14c,(char *)(DAT_001b1678 + 0x1b1456));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_14c,*(undefined4 *)(this + 200),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xd4) = pTVar9;
  (*pcVar12)(piVar13,pTVar9);
  String::~String(aSStack_14c);
  iVar3 = DAT_001b167c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0xd4));
  L_PrintLog((char *)(iVar3 + 0x1b14aa),(char *)(DAT_001b1680 + 0x1b14ae));
  sprintf(acStack_11c,(char *)(DAT_001b1684 + 0x1b14bc),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1b14aa),acStack_11c);
  piVar13 = *(int **)(this + 0x30);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_144,(char *)(DAT_001b1688 + 0x1b14d4));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_144,*(undefined4 *)(this + 200),DAT_001b168c,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xd8) = pTVar9;
  (*pcVar12)(piVar13,pTVar9);
  String::~String(aSStack_144);
  iVar3 = DAT_001b1690;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0xd8));
  L_PrintLog((char *)(iVar3 + 0x1b1526),(char *)(DAT_001b1694 + 0x1b152a));
  sprintf(acStack_11c,(char *)(DAT_001b1698 + 0x1b1538),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1b1526),acStack_11c);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_13c,(char *)(DAT_001b169c + 0x1b1550));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_13c,*(undefined4 *)(this + 200),DAT_001b168c,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xdc) = pTVar9;
  (*pcVar12)(piVar13,pTVar9);
  String::~String(aSStack_13c);
  iVar3 = DAT_001b16a0;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0xdc));
  L_PrintLog((char *)(iVar3 + 0x1b15a2),(char *)(DAT_001b16a4 + 0x1b15a6));
  sprintf(acStack_11c,(char *)(DAT_001b16a8 + 0x1b15b4),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1b15a2),acStack_11c);
  piVar13 = *(int **)(this + 0xdc);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_134,(char *)(DAT_001b16ac + 0x1b15d6));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_134,*(undefined4 *)(this + 200),DAT_001b168c,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xe0) = pTVar9;
  (*pcVar12)(piVar13,pTVar9);
  String::~String(aSStack_134);
  iVar3 = DAT_001b16b0;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0xe0));
  L_PrintLog((char *)(iVar3 + 0x1b1628),(char *)(DAT_001b16b4 + 0x1b162c));
  sprintf(acStack_11c,&UNK_001b163a + DAT_001b16b8,*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1b1628),acStack_11c);
  piVar13 = *(int **)(this + 0xe0);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  piVar13 = *(int **)(this + 0x30);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1acc),10,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x06',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x78) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  pcVar12 = *(code **)(**(int **)(this + 0x78) + 0x2c);
  String::String(aSStack_12c,(char *)(DAT_001b1ad0 + 0x1b171c));
  iVar17 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  iVar18 = *(int *)(this + 0x78);
  uVar4 = *(undefined4 *)((*(int *)(DAT_001b1ad4 + iVar3 * 4 + 0x1b1796) + 0x136) * 4 + iVar17);
  uVar16 = *(undefined4 *)(iVar18 + 0xc);
  uVar19 = *(undefined4 *)(iVar18 + 0x10);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_12c,uVar4,0xffffffff,0,0,0,uVar16,uVar19,0x12,0,0);
  pGVar14 = this + 0xf0;
  *(BitmapTextElement **)pGVar14 = pBVar8;
  (*pcVar12)(iVar18,pBVar8);
  String::~String(aSStack_12c);
  (**(code **)(**(int **)pGVar14 + 0x14))
            (*(int **)pGVar14,*(int *)(*(int *)(this + 0x78) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x78) + 0x10) / 2);
  *(undefined1 *)(*(int *)pGVar14 + 0x7f) = 0x12;
  (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),0);
  piVar13 = *(int **)(this + 0x30);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1acc),10,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x06',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x7c) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  uVar20 = __mulsf3(*(undefined4 *)(this + 0x10c),DAT_001b1ad8);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x7c),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  pcVar12 = *(code **)(**(int **)(this + 0x7c) + 0x2c);
  String::String(aSStack_124,(char *)(DAT_001b1adc + 0x1b180a));
  iVar17 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  iVar18 = *(int *)(this + 0x7c);
  uVar4 = *(undefined4 *)((*(int *)(DAT_001b1ae0 + iVar3 * 4 + 0x1b1884) + 0x136) * 4 + iVar17);
  uVar16 = *(undefined4 *)(iVar18 + 0xc);
  uVar19 = *(undefined4 *)(iVar18 + 0x10);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_124,uVar4,0xffffffff,0,0,0,uVar16,uVar19,0x12,0,0);
  pGVar14 = this + 0xf4;
  *(BitmapTextElement **)pGVar14 = pBVar8;
  (*pcVar12)(iVar18,pBVar8);
  String::~String(aSStack_124);
  (**(code **)(**(int **)pGVar14 + 0x14))
            (*(int **)pGVar14,*(int *)(*(int *)(this + 0x7c) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x7c) + 0x10) / 2);
  iVar3 = DAT_001b1ae4;
  *(undefined1 *)(*(int *)pGVar14 + 0x7f) = 0x12;
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),0);
  iVar17 = getLv1ButtonResoucesID();
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),iVar17,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x94) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  piVar13 = *(int **)(this + 0x94);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ae4),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_06,extraout_s1_06,'\0',false);
  *(ImageElement **)(this + 0xa8) = pIVar6;
  (*pcVar12)(piVar13,pIVar6);
  piVar13 = *(int **)(this + 0xa8);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  iVar3 = getLv2ButtonResoucesID();
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ae4),iVar3,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x98) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  piVar13 = *(int **)(this + 0x98);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ae4),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_07,extraout_s1_07,'\0',false);
  *(ImageElement **)(this + 0xac) = pIVar6;
  (*pcVar12)(piVar13,pIVar6);
  piVar13 = *(int **)(this + 0xac);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  iVar3 = getLv3ButtonResoucesID();
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ae4),iVar3,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x9c) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  piVar13 = *(int **)(this + 0x9c);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ae4),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_08,extraout_s1_08,'\0',false);
  *(ImageElement **)(this + 0xb0) = pIVar6;
  (*pcVar12)(piVar13,pIVar6);
  piVar13 = *(int **)(this + 0xb0);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  iVar3 = getLv4ButtonResoucesID(this);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ae4),iVar3,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xa0) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  piVar13 = *(int **)(this + 0xa0);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ae4),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_09,extraout_s1_09,'\0',false);
  *(ImageElement **)(this + 0xb4) = pIVar6;
  (*pcVar12)(piVar13,pIVar6);
  piVar13 = *(int **)(this + 0xb4);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  iVar3 = getLv5ButtonResoucesID(this);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ef8),iVar3,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xa4) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  piVar13 = *(int **)(this + 0xa4);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ef8),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_10,extraout_s1_10,'\0',false);
  *(ImageElement **)(this + 0xb8) = pIVar6;
  (*pcVar12)(piVar13,pIVar6);
  piVar13 = *(int **)(this + 0xb8);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ef8),0x4b,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_11,extraout_s1_11,'\0',false);
  *(ImageElement **)(this + 0xbc) = pIVar6;
  uVar20 = (*pcVar12)(piVar13,pIVar6);
  iVar3 = DAT_001b1efc;
  ImageElement::setScale
            (*(ImageElement **)(this + 0xbc),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),DAT_001b1f00,false)
  ;
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_12,extraout_s1_12,'\0',false);
  *(ImageElement **)(this + 0x84) = pIVar6;
  (*pcVar12)(piVar13,pIVar6);
  pIVar6 = *(ImageElement **)(this + 0x84);
  uVar20 = __mulsf3(*(undefined4 *)(this + 0x10c),DAT_001b1f04);
  ImageElement::setScale(pIVar6,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1efc),0x118,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x88) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1efc),DAT_001b1f08,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x8c) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1efc),0x11a,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x90) = pZVar7;
  uVar20 = (*pcVar12)(piVar13,pZVar7);
  uVar20 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x88),(float)uVar20,
                      (float)((ulonglong)uVar20 >> 0x20));
  uVar20 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x8c),(float)uVar20,
                      (float)((ulonglong)uVar20 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0x90),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1efc),DAT_001b1f0c,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x20) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  iVar17 = DAT_001b1f10 + 0x1b1d66;
  (**(code **)(**(int **)(this + 0x20) + 0x20))(*(int **)(this + 0x20),0);
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ef8),0x38,false);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)(iVar17 + iVar3 * 4 + 0x7c);
  iVar3 = SmDev();
  uVar19 = *(undefined4 *)(iVar17 + iVar3 * 4 + 0x7c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_13,extraout_s1_13,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x4c) = pIVar6;
  uVar20 = (*pcVar12)(piVar13,pIVar6);
  iVar3 = DAT_001b1f14;
  ImageElement::setScale
            (*(ImageElement **)(this + 0x4c),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  piVar13 = *(int **)(this + 0x4c);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ef8),0x39,false);
  iVar17 = SmDev();
  uVar4 = *(undefined4 *)(iVar3 + 0x1b1dd6 + iVar17 * 4 + 0x7c);
  iVar17 = SmDev();
  uVar19 = *(undefined4 *)(iVar3 + 0x1b1dd6 + iVar17 * 4 + 0x7c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_14,extraout_s1_14,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x50) = pIVar6;
  uVar20 = (*pcVar12)(piVar13,pIVar6);
  iVar3 = DAT_001b1f18;
  ImageElement::setScale
            (*(ImageElement **)(this + 0x50),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  piVar13 = *(int **)(this + 0x4c);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ef8),0x39,false);
  iVar17 = SmDev();
  uVar4 = *(undefined4 *)(iVar3 + 0x1b1e3a + iVar17 * 4 + 0x7c);
  iVar17 = SmDev();
  uVar19 = *(undefined4 *)(iVar3 + 0x1b1e3a + iVar17 * 4 + 0x7c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_15,extraout_s1_15,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x54) = pIVar6;
  uVar20 = (*pcVar12)(piVar13,pIVar6);
  iVar3 = DAT_001b1f1c;
  ImageElement::setScale
            (*(ImageElement **)(this + 0x54),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  piVar13 = *(int **)(this + 0x4c);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b1ef8),0x39,false);
  iVar17 = SmDev();
  uVar4 = *(undefined4 *)(iVar3 + 0x1b1e9e + iVar17 * 4 + 0x7c);
  iVar17 = SmDev();
  uVar19 = *(undefined4 *)(iVar3 + 0x1b1e9e + iVar17 * 4 + 0x7c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_16,extraout_s1_16,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x58) = pIVar6;
  uVar20 = (*pcVar12)(piVar13,pIVar6);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x58),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b2210),0x31,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_17,extraout_s1_17,'\0',false);
  *(ImageElement **)(this + 0xc0) = pIVar6;
  uVar20 = (*pcVar12)(piVar13,pIVar6);
  ImageElement::setScale
            (*(ImageElement **)(this + 0xc0),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  piVar13 = *(int **)(this + 0x28);
  pcVar12 = *(code **)(*piVar13 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b2210),0x69,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x80) = pZVar7;
  (*pcVar12)(piVar13,pZVar7);
  setEventRaid2SoulPosition(this);
  uVar4 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b2214),false);
  *(undefined4 *)(this + 0x48) = uVar4;
  uVar4 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x44) = uVar4;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_01,*(CImage **)(*(int *)(this + 0x44) + 0x14),
             *(CImage **)(*(int *)(this + 0x48) + 0x28),extraout_s0_18);
  *(NoticeDialog **)(this + 0x5c) = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,4);
  (**(code **)(**(int **)(this + 0x5c) + 0x1c))(*(int **)(this + 0x5c),0x12);
  (**(code **)(**(int **)(this + 0x28) + 0x2c))(*(int **)(this + 0x28),*(undefined4 *)(this + 0x5c))
  ;
  pCVar10 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar10,*(CImage **)(*(int *)(this + 0x44) + 0x14),
             *(CImage **)(*(int *)(this + 0x48) + 0x28),*(CImage **)(*(int *)(this + 0x48) + 0x44),0
             ,extraout_s0_19,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x60) = pCVar10;
  ScreenElement::setOrder((ScreenElement *)pCVar10,99);
  (**(code **)(**(int **)(this + 0x60) + 0x1c))(*(int **)(this + 0x60),0x12);
  (**(code **)(**(int **)(this + 0x28) + 0x2c))(*(int **)(this + 0x28),*(undefined4 *)(this + 0x60))
  ;
  pCVar10 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar10,*(CImage **)(*(int *)(this + 0x44) + 0x14),
             *(CImage **)(*(int *)(this + 0x48) + 0x28),*(CImage **)(*(int *)(this + 0x48) + 0x3d0),
             0,extraout_s0_20,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 100) = pCVar10;
  ScreenElement::setOrder((ScreenElement *)pCVar10,99);
  (**(code **)(**(int **)(this + 100) + 0x1c))(*(int **)(this + 100),0x12);
  (**(code **)(**(int **)(this + 0x28) + 0x2c))(*(int **)(this + 0x28),*(undefined4 *)(this + 100));
  pCVar10 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar10,*(CImage **)(*(int *)(this + 0x44) + 0x14),
             *(CImage **)(*(int *)(this + 0x48) + 0x3d0),*(CImage **)(*(int *)(this + 0x48) + 0x3d0)
             ,0,extraout_s0_21,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x68) = pCVar10;
  ScreenElement::setOrder((ScreenElement *)pCVar10,99);
  (**(code **)(**(int **)(this + 0x68) + 0x1c))(*(int **)(this + 0x68),0x12);
  (**(code **)(**(int **)(this + 0x28) + 0x2c))(*(int **)(this + 0x28),*(undefined4 *)(this + 0x68))
  ;
  this_02 = (WaitDialog *)operator_new(0x8c);
  WaitDialog::WaitDialog
            (this_02,*(CImage **)(*(int *)(this + 0x44) + 0x14),(CImage *)0x0,(CImage *)0x0,false,
             extraout_s0_22,(CImage *)0x40000000);
  *(WaitDialog **)(this + 0x18) = this_02;
  (**(code **)(*(int *)this_02 + 0x1c))(this_02,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x18),99);
  if (local_1c != **(int **)(iVar11 + DAT_001b2218)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


