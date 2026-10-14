/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bca38 GameStateEventRaid3Menu::init */

/* GameStateEventRaid3Menu::init() */

void __thiscall GameStateEventRaid3Menu::init(GameStateEventRaid3Menu *this)

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
  int iVar11;
  code *pcVar12;
  int iVar13;
  int *piVar14;
  GameStateEventRaid3Menu *pGVar15;
  int *piVar16;
  int iVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined4 uVar20;
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
  float extraout_s1_10;
  float extraout_s1_11;
  float extraout_s1_12;
  float extraout_s1_13;
  String aSStack_17c [16];
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
  
  iVar11 = DAT_001bcddc + 0x1bca44;
  local_1c = **(int **)(iVar11 + DAT_001bcde0);
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadDialogImages(*(ZombieCafe **)(this + 0xc));
  iVar13 = **(int **)(iVar11 + DAT_001bcde4);
  iVar3 = SmDev();
  uVar4 = FontManager::addFont(iVar13,SUB41(*(undefined4 *)(DAT_001bcde8 + iVar3 * 4 + 0x1bcabe),0))
  ;
  *(undefined4 *)(this + 0x8c) = uVar4;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  iVar3 = DAT_001bcdec;
  pcVar12 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bcdec),2,false);
  iVar13 = SmDev();
  uVar4 = *(undefined4 *)(DAT_001bcdf0 + iVar13 * 4 + 0x1bcb22);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0,extraout_s1,(uchar)uVar4,false);
  *(ImageElement **)(this + 0x18) = pIVar6;
  (*pcVar12)(this_00,pIVar6);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  iVar13 = DAT_001bcdf4 + 0x1bcb00;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),0x34,false);
  iVar3 = SmDev();
  uVar1 = __addsf3(*(undefined4 *)(iVar13 + iVar3 * 4 + 0x74));
  iVar3 = SmDev();
  bVar2 = (bool)__addsf3(*(undefined4 *)(iVar13 + iVar3 * 4 + 0x74));
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_00,extraout_s1_00,uVar1,bVar2);
  *(ImageElement **)(this + 0x28) = pIVar6;
  (*pcVar12)(piVar16,pIVar6);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  iVar13 = DAT_001bcdf8 + 0x1bcb62;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bcdec),0x32,false);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)(iVar13 + iVar3 * 4 + 0x74);
  iVar3 = SmDev();
  uVar19 = *(undefined4 *)(iVar13 + iVar3 * 4 + 0x74);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_01,extraout_s1_01,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x2c) = pIVar6;
  (*pcVar12)(piVar16,pIVar6);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bcdfc),0x22,false);
  iVar3 = SmDev();
  uVar1 = __mulsf3(*(undefined4 *)(DAT_001bce00 + iVar3 * 4 + 0x1bcbda),DAT_001bce04);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_02,extraout_s1_02,uVar1,SUB41(DAT_001bce08,0));
  *(ImageElement **)(this + 0x1c) = pIVar6;
  (*pcVar12)(piVar16,pIVar6);
  uVar4 = *(undefined4 *)(this + 0xe8);
  pIVar6 = *(ImageElement **)(this + 0x1c);
  __mulsf3(uVar4,DAT_001bce0c);
  uVar21 = __mulsf3(uVar4,DAT_001bce10);
  ImageElement::setScale(pIVar6,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bcdfc),0x22,false);
  iVar3 = SmDev();
  uVar1 = __mulsf3(*(undefined4 *)(DAT_001bce14 + iVar3 * 4 + 0x1bcc50),DAT_001bce04);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_03,extraout_s1_03,uVar1,false);
  *(ImageElement **)(this + 0x20) = pIVar6;
  (*pcVar12)(piVar16,pIVar6);
  iVar13 = DAT_001bce18 + 0x1bcc7e;
  (**(code **)(**(int **)(this + 0x20) + 0x20))(*(int **)(this + 0x20),0);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bcdec),0x33,false);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)(iVar13 + iVar3 * 4 + 0x24);
  iVar3 = SmDev();
  uVar19 = *(undefined4 *)(iVar13 + iVar3 * 4 + 0x24);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_04,extraout_s1_04,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x24) = pIVar6;
  uVar21 = (*pcVar12)(piVar16,pIVar6);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x24),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bcdec),3,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x5c) = pZVar7;
  (*pcVar12)(piVar16,pZVar7);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bce1c),10,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x06',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x54) = pZVar7;
  (*pcVar12)(piVar16,pZVar7);
  iVar3 = SmDev();
  if ((iVar3 != 4) && (iVar3 = SmDev(), iVar3 != 3)) {
    FUN_001bdb04();
  }
  pcVar12 = *(code **)(**(int **)(this + 0x54) + 0x2c);
  String::String(aSStack_17c,(char *)(DAT_001bce20 + 0x1bcd78));
  iVar13 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_001bce24 + iVar3 * 4 + 0x1bcdc8) + 0x136) * 4 + iVar13);
  iVar3 = *(int *)(this + 0x54);
  uVar19 = *(undefined4 *)(iVar3 + 0x10);
  uVar20 = *(undefined4 *)(iVar3 + 0xc);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_17c,uVar4,0xffffffff,0,0,0,uVar20,uVar19,9,0,0);
  *(BitmapTextElement **)(this + 0xb4) = pBVar8;
  (*pcVar12)(iVar3,pBVar8);
  String::~String(aSStack_17c);
  *(undefined1 *)(*(int *)(this + 0xb4) + 0x7f) = 0x12;
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bd238),10,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x06',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x58) = pZVar7;
  (*pcVar12)(piVar16,pZVar7);
  pcVar12 = *(code **)(**(int **)(this + 0x58) + 0x2c);
  String::String(aSStack_16c,(char *)(DAT_001bd23c + 0x1bceb4));
  iVar13 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  iVar17 = *(int *)(this + 0x58);
  uVar4 = *(undefined4 *)(iVar17 + 0x10);
  uVar19 = *(undefined4 *)((*(int *)(DAT_001bd240 + iVar3 * 4 + 0x1bcf06) + 0x136) * 4 + iVar13);
  uVar20 = *(undefined4 *)(iVar17 + 0xc);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_16c,uVar19,0xffffffff,0,0,0,uVar20,uVar4,9,0,0);
  *(BitmapTextElement **)(this + 0xb8) = pBVar8;
  (*pcVar12)(iVar17,pBVar8);
  String::~String(aSStack_16c);
  iVar3 = DAT_001bd244;
  *(undefined1 *)(*(int *)(this + 0xb8) + 0x7f) = 0x12;
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_164,(char *)(iVar3 + 0x1bcf2a));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_164,*(undefined4 *)(this + 0x8c),0xff000000,1,1,6,0);
  *(TrueTypeTextElement **)(this + 0xb0) = pTVar9;
  (*pcVar12)(piVar16,pTVar9);
  String::~String(aSStack_164);
  iVar3 = DAT_001bd24c;
  piVar14 = *(int **)(iVar11 + DAT_001bd248);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0xb0));
  L_PrintLog((char *)(iVar3 + 0x1bcf84),(char *)(DAT_001bd250 + 0x1bcf88));
  sprintf(acStack_11c,(char *)(DAT_001bd254 + 0x1bcf96),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bcf84),acStack_11c);
  piVar16 = *(int **)(this + 0xb0);
  (**(code **)(*piVar16 + 0x20))(piVar16,0);
  piVar16 = *(int **)(this + 0x1c);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_15c,(char *)(DAT_001bd258 + 0x1bcfb8));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_15c,*(undefined4 *)(this + 0x8c),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x90) = pTVar9;
  (*pcVar12)(piVar16,pTVar9);
  String::~String(aSStack_15c);
  iVar3 = DAT_001bd25c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x90));
  L_PrintLog((char *)(iVar3 + 0x1bd00c),(char *)(DAT_001bd260 + 0x1bd010));
  sprintf(acStack_11c,(char *)(DAT_001bd264 + 0x1bd01e),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd00c),acStack_11c);
  piVar16 = *(int **)(this + 0x1c);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_154,(char *)(DAT_001bd268 + 0x1bd036));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_154,*(undefined4 *)(this + 0x8c),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x94) = pTVar9;
  (*pcVar12)(piVar16,pTVar9);
  String::~String(aSStack_154);
  iVar3 = DAT_001bd26c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x94));
  L_PrintLog((char *)(iVar3 + 0x1bd08a),(char *)(DAT_001bd270 + 0x1bd08e));
  sprintf(acStack_11c,(char *)(DAT_001bd274 + 0x1bd09c),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd08a),acStack_11c);
  piVar16 = *(int **)(this + 0x1c);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_14c,(char *)(DAT_001bd278 + 0x1bd0b4));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_14c,*(undefined4 *)(this + 0x8c),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x98) = pTVar9;
  (*pcVar12)(piVar16,pTVar9);
  String::~String(aSStack_14c);
  iVar3 = DAT_001bd27c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x98));
  L_PrintLog((char *)(iVar3 + 0x1bd108),(char *)(DAT_001bd280 + 0x1bd10c));
  sprintf(acStack_11c,(char *)(DAT_001bd284 + 0x1bd11a),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd108),acStack_11c);
  piVar16 = *(int **)(this + 0x1c);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_144,(char *)(DAT_001bd288 + 0x1bd132));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_144,*(undefined4 *)(this + 0x8c),DAT_001bd28c,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x9c) = pTVar9;
  (*pcVar12)(piVar16,pTVar9);
  String::~String(aSStack_144);
  iVar3 = DAT_001bd290;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x9c));
  L_PrintLog((char *)(iVar3 + 0x1bd184),(char *)(DAT_001bd294 + 0x1bd188));
  sprintf(acStack_11c,(char *)(DAT_001bd298 + 0x1bd196),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd184),acStack_11c);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_13c,(char *)(DAT_001bd29c + 0x1bd1ae));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_13c,*(undefined4 *)(this + 0x8c),DAT_001bd28c,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xa0) = pTVar9;
  (*pcVar12)(piVar16,pTVar9);
  String::~String(aSStack_13c);
  iVar3 = DAT_001bd2a0;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0xa0));
  L_PrintLog((char *)(iVar3 + 0x1bd200),(char *)(DAT_001bd2a4 + 0x1bd204));
  sprintf(acStack_11c,(char *)(DAT_001bd2a8 + 0x1bd212),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd200),acStack_11c);
  piVar16 = *(int **)(this + 0xa0);
  (**(code **)(*piVar16 + 0x20))(piVar16,0);
  piVar16 = *(int **)(this + 0x1c);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bd238),10,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x06',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 100) = pZVar7;
  (*pcVar12)(piVar16,pZVar7);
  pcVar12 = *(code **)(**(int **)(this + 100) + 0x2c);
  String::String(aSStack_134,(char *)(DAT_001bd6cc + 0x1bd2e8));
  iVar13 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  iVar17 = *(int *)(this + 100);
  uVar4 = *(undefined4 *)(iVar17 + 0x10);
  uVar19 = *(undefined4 *)((*(int *)(DAT_001bd6d0 + iVar3 * 4 + 0x1bd33a) + 0x136) * 4 + iVar13);
  uVar20 = *(undefined4 *)(iVar17 + 0xc);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_134,uVar19,0xffffffff,0,0,0,uVar20,uVar4,0x12,0,0);
  pGVar15 = this + 0xc0;
  *(BitmapTextElement **)pGVar15 = pBVar8;
  (*pcVar12)(iVar17,pBVar8);
  String::~String(aSStack_134);
  iVar3 = DAT_001bd6d4;
  (**(code **)(**(int **)pGVar15 + 0x14))
            (*(int **)pGVar15,*(int *)(*(int *)(this + 100) + 0xc) / 2,
             *(int *)(*(int *)(this + 100) + 0x10) / 2);
  *(undefined1 *)(*(int *)pGVar15 + 0x7f) = 0x12;
  (**(code **)(**(int **)(this + 100) + 0x20))(*(int **)(this + 100),0);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),0x47,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x68) = pZVar7;
  (*pcVar12)(piVar16,pZVar7);
  piVar16 = *(int **)(this + 0x68);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_05,extraout_s1_05,'\0',false);
  *(ImageElement **)(this + 0x78) = pIVar6;
  (*pcVar12)(piVar16,pIVar6);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
  (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),0);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bd6d4),0x48,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x6c) = pZVar7;
  (*pcVar12)(piVar16,pZVar7);
  piVar16 = *(int **)(this + 0x6c);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bd6d4),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_06,extraout_s1_06,'\0',false);
  *(ImageElement **)(this + 0x7c) = pIVar6;
  (*pcVar12)(piVar16,pIVar6);
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),0);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bd6d4),0x49,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x70) = pZVar7;
  (*pcVar12)(piVar16,pZVar7);
  piVar16 = *(int **)(this + 0x70);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bd6d4),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_07,extraout_s1_07,'\0',false);
  *(ImageElement **)(this + 0x80) = pIVar6;
  (*pcVar12)(piVar16,pIVar6);
  (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),0);
  (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),0);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bd6d4),0x4a,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x12',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x74) = pZVar7;
  (*pcVar12)(piVar16,pZVar7);
  piVar16 = *(int **)(this + 0x74);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bd6d4),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_08,extraout_s1_08,'\0',false);
  *(ImageElement **)(this + 0x84) = pIVar6;
  (*pcVar12)(piVar16,pIVar6);
  iVar13 = DAT_001bd6d8 + 0x1bd5a6;
  (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),0);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bd6d4),0x4b,false);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)(iVar13 + iVar3 * 4 + 0x54);
  iVar3 = SmDev();
  uVar19 = *(undefined4 *)(iVar13 + iVar3 * 4 + 0x54);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_09,extraout_s1_09,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x88) = pIVar6;
  (*pcVar12)(piVar16,pIVar6);
  piVar16 = *(int **)(this + 0x88);
  (**(code **)(*piVar16 + 0x20))(piVar16,0);
  piVar16 = *(int **)(this + 0x20);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_12c,(char *)(DAT_001bd6dc + 0x1bd61e));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_12c,*(undefined4 *)(this + 0x8c),0xffffffff,1,1,0x11,0);
  pGVar15 = this + 0xa8;
  *(TrueTypeTextElement **)pGVar15 = pTVar9;
  (*pcVar12)(piVar16,pTVar9);
  String::~String(aSStack_12c);
  (**(code **)(**(int **)pGVar15 + 0x20))(*(int **)pGVar15,0);
  piVar14 = *(int **)(iVar11 + DAT_001bd6e0);
  pcVar18 = (char *)(DAT_001bd6e4 + 0x1bd676);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)pGVar15);
  L_PrintLog(pcVar18,(char *)(DAT_001bd6e8 + 0x1bd682));
  sprintf(acStack_11c,(char *)(DAT_001bd6ec + 0x1bd690),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog(pcVar18,acStack_11c);
  piVar16 = *(int **)(this + 0x20);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_124,(char *)(DAT_001bd6f0 + 0x1bd6aa));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_124,*(undefined4 *)(this + 0x8c),DAT_001bda9c,1,1,0x11,0);
  pGVar15 = this + 0xac;
  *(TrueTypeTextElement **)pGVar15 = pTVar9;
  (*pcVar12)(piVar16,pTVar9);
  String::~String(aSStack_124);
  (**(code **)(**(int **)pGVar15 + 0x20))(*(int **)pGVar15,0);
  iVar3 = DAT_001bdaa0;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)pGVar15);
  L_PrintLog((char *)(iVar3 + 0x1bd72e),(char *)(DAT_001bdaa4 + 0x1bd732));
  sprintf(acStack_11c,(char *)(DAT_001bdaa8 + 0x1bd740),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd72e),acStack_11c);
  piVar16 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  iVar13 = DAT_001bdab0 + 0x1bd75c;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bdaac),0x38,false);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)(iVar13 + iVar3 * 4 + 0x6c);
  iVar3 = SmDev();
  uVar19 = *(undefined4 *)(iVar13 + iVar3 * 4 + 0x6c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_10,extraout_s1_10,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x38) = pIVar6;
  uVar21 = (*pcVar12)(piVar16,pIVar6);
  iVar3 = DAT_001bdab4;
  ImageElement::setScale
            (*(ImageElement **)(this + 0x38),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  piVar16 = *(int **)(this + 0x38);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bdaac),0x39,false);
  iVar13 = SmDev();
  uVar4 = *(undefined4 *)(iVar3 + 0x1bd7be + iVar13 * 4 + 0x6c);
  iVar13 = SmDev();
  uVar19 = *(undefined4 *)(iVar3 + 0x1bd7be + iVar13 * 4 + 0x6c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_11,extraout_s1_11,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x3c) = pIVar6;
  uVar21 = (*pcVar12)(piVar16,pIVar6);
  iVar3 = DAT_001bdab8;
  ImageElement::setScale
            (*(ImageElement **)(this + 0x3c),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  piVar16 = *(int **)(this + 0x38);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bdaac),0x39,false);
  iVar13 = SmDev();
  uVar4 = *(undefined4 *)(iVar3 + 0x1bd822 + iVar13 * 4 + 0x6c);
  iVar13 = SmDev();
  uVar19 = *(undefined4 *)(iVar3 + 0x1bd822 + iVar13 * 4 + 0x6c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_12,extraout_s1_12,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x40) = pIVar6;
  uVar21 = (*pcVar12)(piVar16,pIVar6);
  iVar3 = DAT_001bdabc;
  ImageElement::setScale
            (*(ImageElement **)(this + 0x40),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  piVar16 = *(int **)(this + 0x38);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bdaac),0x39,false);
  iVar13 = SmDev();
  uVar4 = *(undefined4 *)(iVar3 + 0x1bd886 + iVar13 * 4 + 0x6c);
  iVar13 = SmDev();
  uVar19 = *(undefined4 *)(iVar3 + 0x1bd886 + iVar13 * 4 + 0x6c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_13,extraout_s1_13,(uchar)uVar4,SUB41(uVar19,0));
  *(ImageElement **)(this + 0x44) = pIVar6;
  uVar21 = (*pcVar12)(piVar16,pIVar6);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x44),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  setEventRaid3SoulPosition(this);
  SoulVisible(SUB41(this,0));
  uVar4 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001bdac0),false);
  *(undefined4 *)(this + 0x34) = uVar4;
  uVar4 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x30) = uVar4;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_01,*(CImage **)(*(int *)(this + 0x30) + 0x14),
             *(CImage **)(*(int *)(this + 0x34) + 0x28),extraout_s0_14);
  *(NoticeDialog **)(this + 0x48) = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,4);
  (**(code **)(**(int **)(this + 0x48) + 0x1c))(*(int **)(this + 0x48),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x48))
  ;
  pCVar10 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar10,*(CImage **)(*(int *)(this + 0x30) + 0x14),
             *(CImage **)(*(int *)(this + 0x34) + 0x28),*(CImage **)(*(int *)(this + 0x34) + 0x44),0
             ,extraout_s0_15,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x4c) = pCVar10;
  ScreenElement::setOrder((ScreenElement *)pCVar10,99);
  (**(code **)(**(int **)(this + 0x4c) + 0x1c))(*(int **)(this + 0x4c),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x4c))
  ;
  pCVar10 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar10,*(CImage **)(*(int *)(this + 0x30) + 0x14),
             *(CImage **)(*(int *)(this + 0x34) + 0x3d0),*(CImage **)(*(int *)(this + 0x34) + 0x48),
             0,extraout_s0_16,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x50) = pCVar10;
  ScreenElement::setOrder((ScreenElement *)pCVar10,99);
  (**(code **)(**(int **)(this + 0x50) + 0x1c))(*(int **)(this + 0x50),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x50))
  ;
  if (local_1c == **(int **)(iVar11 + DAT_001bdac4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


