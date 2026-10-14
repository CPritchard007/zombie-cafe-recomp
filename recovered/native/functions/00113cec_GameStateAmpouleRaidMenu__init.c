/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00113cec GameStateAmpouleRaidMenu::init */

/* GameStateAmpouleRaidMenu::init() */

void __thiscall GameStateAmpouleRaidMenu::init(GameStateAmpouleRaidMenu *this)

{
  uchar uVar1;
  int iVar2;
  undefined4 uVar3;
  ScreenElement *this_00;
  CImage *pCVar4;
  ImageElement *pIVar5;
  ZCImageButton *pZVar6;
  BitmapTextElement *pBVar7;
  TrueTypeTextElement *pTVar8;
  NoticeDialog *this_01;
  ConfirmDialog *this_02;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *piVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  undefined8 uVar18;
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
  
  iVar9 = DAT_001140d4 + 0x113cf8;
  local_1c = **(int **)(iVar9 + DAT_001140d8);
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadDialogImages(*(ZombieCafe **)(this + 0xc));
  iVar11 = **(int **)(iVar9 + DAT_001140dc);
  iVar2 = SmDev();
  uVar3 = FontManager::addFont(iVar11,SUB41(*(undefined4 *)(DAT_001140e0 + iVar2 * 4 + 0x113d7e),0))
  ;
  *(undefined4 *)(this + 0x58) = uVar3;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  iVar2 = DAT_001140e4;
  pcVar10 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001140e4),2,false);
  iVar11 = SmDev();
  uVar3 = *(undefined4 *)(DAT_001140e8 + iVar11 * 4 + 0x113dde);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0,extraout_s1,(uchar)uVar3,false);
  *(ImageElement **)(this + 0x18) = pIVar5;
  (*pcVar10)(this_00,pIVar5);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  iVar11 = DAT_001140ec + 0x113db0;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar2),0x34,false);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)(iVar2 * 4 + iVar11);
  iVar2 = SmDev();
  uVar15 = *(undefined4 *)(iVar2 * 4 + iVar11);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0_00,extraout_s1_00,(uchar)uVar3,SUB41(uVar15,0));
  *(ImageElement **)(this + 0x24) = pIVar5;
  (*pcVar10)(piVar12,pIVar5);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001140f0),0x22,false);
  iVar2 = SmDev();
  uVar1 = __mulsf3(*(undefined4 *)(DAT_001140f4 + iVar2 * 4 + 0x113e2e),DAT_001140f8);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0_01,extraout_s1_01,uVar1,SUB41(DAT_001140f8,0));
  *(ImageElement **)(this + 0x1c) = pIVar5;
  (*pcVar10)(piVar12,pIVar5);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  iVar11 = DAT_001140fc + 0x113e52;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001140e4),0x37,false);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)(iVar11 + iVar2 * 4 + 0x30);
  iVar2 = SmDev();
  uVar15 = *(undefined4 *)(iVar11 + iVar2 * 4 + 0x30);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0_02,extraout_s1_02,(uchar)uVar3,SUB41(uVar15,0));
  *(ImageElement **)(this + 0x20) = pIVar5;
  (*pcVar10)(piVar12,pIVar5);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001140e4),3,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x3c) = pZVar6;
  (*pcVar10)(piVar12,pZVar6);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00114100),10,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x06',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x38) = pZVar6;
  (*pcVar10)(piVar12,pZVar6);
  pcVar10 = *(code **)(**(int **)(this + 0x38) + 0x2c);
  String::String(aSStack_174,(char *)(DAT_00114104 + 0x113f1c));
  iVar11 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_00114108 + iVar2 * 4 + 0x113f78) + 0x136) * 4 + iVar11);
  iVar2 = *(int *)(this + 0x38);
  uVar15 = *(undefined4 *)(iVar2 + 0x10);
  uVar16 = *(undefined4 *)(iVar2 + 0xc);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar7,aSStack_174,uVar3,0xffffffff,0,0,0,uVar16,uVar15,9,0,0);
  *(BitmapTextElement **)(this + 0x7c) = pBVar7;
  (*pcVar10)(iVar2,pBVar7);
  String::~String(aSStack_174);
  *(undefined1 *)(*(int *)(this + 0x7c) + 0x7f) = 0x12;
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00114100),10,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x14',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x40) = pZVar6;
  (*pcVar10)(piVar12,pZVar6);
  pcVar10 = *(code **)(**(int **)(this + 0x40) + 0x2c);
  String::String(aSStack_16c,(char *)(DAT_0011410c + 0x113fce));
  iVar11 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  iVar13 = *(int *)(this + 0x40);
  uVar3 = *(undefined4 *)(iVar13 + 0x10);
  uVar15 = *(undefined4 *)((*(int *)(DAT_00114110 + iVar2 * 4 + 0x11402c) + 0x136) * 4 + iVar11);
  uVar16 = *(undefined4 *)(iVar13 + 0xc);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar7,aSStack_16c,uVar15,0xffffffff,0,0,0,uVar16,uVar3,0x12,0,0);
  *(BitmapTextElement **)(this + 0x84) = pBVar7;
  (*pcVar10)(iVar13,pBVar7);
  String::~String(aSStack_16c);
  *(undefined1 *)(*(int *)(this + 0x84) + 0x7f) = 0x12;
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00114100),10,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x14',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x44) = pZVar6;
  (*pcVar10)(piVar12,pZVar6);
  pcVar10 = *(code **)(**(int **)(this + 0x44) + 0x2c);
  String::String(aSStack_164,(char *)(DAT_00114114 + 0x114084));
  iVar11 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  iVar13 = *(int *)(this + 0x44);
  uVar3 = *(undefined4 *)(iVar13 + 0x10);
  uVar15 = *(undefined4 *)
            ((*(int *)((int)&DAT_001140e0 + DAT_00114118 + iVar2 * 4 + 2) + 0x136) * 4 + iVar11);
  uVar16 = *(undefined4 *)(iVar13 + 0xc);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar7,aSStack_164,uVar15,0xffffffff,0,0,0,uVar16,uVar3,0x12,0,0);
  *(BitmapTextElement **)(this + 0x80) = pBVar7;
  (*pcVar10)(iVar13,pBVar7);
  String::~String(aSStack_164);
  iVar2 = DAT_001144f8;
  *(undefined1 *)(*(int *)(this + 0x80) + 0x7f) = 0x12;
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_15c,(char *)(iVar2 + 0x114144));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,aSStack_15c,*(undefined4 *)(this + 0x58),0xff000000,1,1,6,0);
  *(TrueTypeTextElement **)(this + 0x78) = pTVar8;
  (*pcVar10)(piVar12,pTVar8);
  String::~String(aSStack_15c);
  piVar12 = *(int **)(iVar9 + DAT_001144fc);
  pcVar14 = (char *)(DAT_00114500 + 0x11418a);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x78));
  L_PrintLog(pcVar14,(char *)(DAT_00114504 + 0x114196));
  sprintf(acStack_11c,(char *)(DAT_00114508 + 0x1141a4),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog(pcVar14,acStack_11c);
  (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),0);
  piVar17 = *(int **)(this + 0x1c);
  pcVar10 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_154,(char *)(DAT_0011450c + 0x1141c6));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,aSStack_154,*(undefined4 *)(this + 0x58),0xffffffff,1,1,0x21,0);
  *(TrueTypeTextElement **)(this + 0x5c) = pTVar8;
  (*pcVar10)(piVar17,pTVar8);
  String::~String(aSStack_154);
  iVar2 = DAT_00114510;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x5c));
  L_PrintLog((char *)(iVar2 + 0x11420e),(char *)(DAT_00114514 + 0x114212));
  sprintf(acStack_11c,(char *)(DAT_00114518 + 0x114220),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar2 + 0x11420e),acStack_11c);
  piVar17 = *(int **)(this + 0x1c);
  pcVar10 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_14c,(char *)(DAT_0011451c + 0x114238));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,aSStack_14c,*(undefined4 *)(this + 0x58),0xffffffff,1,1,9,0);
  *(TrueTypeTextElement **)(this + 0x60) = pTVar8;
  (*pcVar10)(piVar17,pTVar8);
  String::~String(aSStack_14c);
  iVar2 = DAT_00114520;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x60));
  L_PrintLog((char *)(iVar2 + 0x114280),(char *)(DAT_00114524 + 0x114284));
  sprintf(acStack_11c,(char *)(DAT_00114528 + 0x114292),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar2 + 0x114280),acStack_11c);
  piVar17 = *(int **)(this + 0x1c);
  pcVar10 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_144,(char *)(DAT_0011452c + 0x1142aa));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,aSStack_144,*(undefined4 *)(this + 0x58),0xffffffff,1,1,0x21,0);
  *(TrueTypeTextElement **)(this + 100) = pTVar8;
  (*pcVar10)(piVar17,pTVar8);
  String::~String(aSStack_144);
  iVar2 = DAT_00114530;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 100));
  L_PrintLog((char *)(iVar2 + 0x1142f2),(char *)(DAT_00114534 + 0x1142f6));
  sprintf(acStack_11c,(char *)(DAT_00114538 + 0x114304),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar2 + 0x1142f2),acStack_11c);
  piVar17 = *(int **)(this + 0x1c);
  pcVar10 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_13c,(char *)(DAT_0011453c + 0x11431c));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,aSStack_13c,*(undefined4 *)(this + 0x58),0xffffffff,1,1,9,0);
  *(TrueTypeTextElement **)(this + 0x68) = pTVar8;
  (*pcVar10)(piVar17,pTVar8);
  String::~String(aSStack_13c);
  iVar2 = DAT_00114540;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x68));
  L_PrintLog((char *)(iVar2 + 0x114364),(char *)(DAT_00114544 + 0x114368));
  sprintf(acStack_11c,(char *)(DAT_00114548 + 0x114376),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar2 + 0x114364),acStack_11c);
  piVar17 = *(int **)(this + 0x1c);
  pcVar10 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_134,(char *)(DAT_0011454c + 0x11438e));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,aSStack_134,*(undefined4 *)(this + 0x58),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x6c) = pTVar8;
  (*pcVar10)(piVar17,pTVar8);
  String::~String(aSStack_134);
  iVar2 = DAT_00114550;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x6c));
  L_PrintLog((char *)(iVar2 + 0x1143d6),(char *)(DAT_00114554 + 0x1143da));
  sprintf(acStack_11c,(char *)(DAT_00114558 + 0x1143e8),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar2 + 0x1143d6),acStack_11c);
  piVar17 = *(int **)(this + 0x1c);
  pcVar10 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_12c,(char *)(DAT_0011455c + 0x114400));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,aSStack_12c,*(undefined4 *)(this + 0x58),DAT_00114560,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x70) = pTVar8;
  (*pcVar10)(piVar17,pTVar8);
  String::~String(aSStack_12c);
  iVar2 = DAT_00114564;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x70));
  L_PrintLog((char *)(iVar2 + 0x114446),(char *)(DAT_00114568 + 0x11444a));
  sprintf(acStack_11c,(char *)(DAT_0011456c + 0x114458),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar2 + 0x114446),acStack_11c);
  piVar17 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_124,(char *)(DAT_00114570 + 0x114470));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,aSStack_124,*(undefined4 *)(this + 0x58),DAT_00114560,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x74) = pTVar8;
  (*pcVar10)(piVar17,pTVar8);
  String::~String(aSStack_124);
  iVar2 = DAT_00114574;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(this + 0x74));
  L_PrintLog((char *)(iVar2 + 0x1144b6),(char *)(DAT_00114578 + 0x1144ba));
  iVar11 = DAT_00114580;
  sprintf(acStack_11c,(char *)(DAT_0011457c + 0x1144c8),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar2 + 0x1144b6),acStack_11c);
  (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),0);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xc) + iVar11),DAT_00114584,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0_03,extraout_s1_03,'\0',false);
  *(ImageElement **)(this + 0x48) = pIVar5;
  (*pcVar10)(piVar12,pIVar5);
  pIVar5 = *(ImageElement **)(this + 0x48);
  uVar18 = __mulsf3(*(undefined4 *)(this + 0x94),DAT_00114820);
  ImageElement::setScale(pIVar5,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar11),0x118,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x4c) = pZVar6;
  (*pcVar10)(piVar12,pZVar6);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar11),0x11a,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x50) = pZVar6;
  (*pcVar10)(piVar12,pZVar6);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar11),0x120,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x54) = pZVar6;
  uVar18 = (*pcVar10)(piVar12,pZVar6);
  uVar18 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x4c),(float)uVar18,
                      (float)((ulonglong)uVar18 >> 0x20));
  uVar18 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x50),(float)uVar18,
                      (float)((ulonglong)uVar18 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0x54),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  uVar3 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + iVar11),false);
  *(undefined4 *)(this + 0x2c) = uVar3;
  uVar3 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x28) = uVar3;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_01,*(CImage **)(*(int *)(this + 0x28) + 0x14),
             *(CImage **)(*(int *)(this + 0x2c) + 0x28),extraout_s0_04);
  *(NoticeDialog **)(this + 0x30) = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,4);
  (**(code **)(**(int **)(this + 0x30) + 0x1c))(*(int **)(this + 0x30),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x30))
  ;
  this_02 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_02,*(CImage **)(*(int *)(this + 0x28) + 0x14),
             *(CImage **)(*(int *)(this + 0x2c) + 0x28),*(CImage **)(*(int *)(this + 0x2c) + 0x44),0
             ,extraout_s0_05,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x34) = this_02;
  ScreenElement::setOrder((ScreenElement *)this_02,99);
  (**(code **)(**(int **)(this + 0x34) + 0x1c))(*(int **)(this + 0x34),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x34))
  ;
  if (local_1c != **(int **)(iVar9 + DAT_00114824)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


