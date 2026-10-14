/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f93e0 ObjectiveCompleteDialog::ObjectiveCompleteDialog */

/* ObjectiveCompleteDialog::ObjectiveCompleteDialog() */

ObjectiveCompleteDialog * __thiscall
ObjectiveCompleteDialog::ObjectiveCompleteDialog(ObjectiveCompleteDialog *this)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CImage *pCVar6;
  ImageElement *pIVar7;
  ZCImageButton *this_00;
  BitmapTextElement *pBVar8;
  ScreenElement *pSVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  undefined4 uVar13;
  ObjectiveCompleteDialog *pOVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  undefined8 uVar18;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  ObjectiveCompleteDialog *local_5c;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar3 = DAT_001f97c8 + 0x1f93ee;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar3 + DAT_001f97cc) + 8;
  iVar4 = CapcomApp::getInstance();
  iVar11 = DAT_001f97d4;
  iVar5 = DAT_001f97d0;
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar4 + 4);
  L_PrintLog((char *)(iVar11 + 0x1f9410),(char *)(iVar5 + 0x1f940e));
  iVar5 = CapcomApp::getInstance();
  uVar13 = *(undefined4 *)(iVar5 + 0x40);
  iVar5 = CapcomApp::getInstance();
  uVar16 = *(undefined4 *)(iVar5 + 0x50);
  iVar5 = CapcomApp::getInstance();
  uVar17 = *(undefined4 *)(iVar5 + 0x44);
  iVar5 = CapcomApp::getInstance();
  uVar13 = __mulsf3(uVar13,uVar16);
  uVar16 = __mulsf3(uVar17,*(undefined4 *)(iVar5 + 0x50));
  iVar5 = DAT_001f97d8;
  uVar17 = __floatsisf(*(undefined4 *)(DAT_001f97d8 + 0x1f9446));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f945a) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f945e));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f9472) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f9476));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f948a) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f948e));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f94a2) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f94a6));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f94ba) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f94be));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  iVar11 = DAT_001f97dc;
  *(undefined4 *)(iVar5 + 0x1f94d2) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar11 + 0x1f94cc));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar11 + 0x1f94e0) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar11 + 0x1f94e4));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar11 + 0x1f94f8) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar11 + 0x1f94fc));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar11 + 0x1f9510) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar11 + 0x1f9514));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar11 + 0x1f9528) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar11 + 0x1f952c));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  iVar5 = DAT_001f97e0;
  *(undefined4 *)(iVar11 + 0x1f9540) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f952a));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f953e) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f9542));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f9556) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f955a));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f956e) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f9572));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f9586) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f958a));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f959e) = uVar17;
  iVar5 = DAT_001f97e4;
  uVar17 = __floatsisf(*(undefined4 *)(DAT_001f97e4 + 0x1f9582));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f9596) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f959a));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f95ae) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f95b2));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f95c6) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f95ca));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f95de) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f95e2));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1f95f6) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar5 + 0x1f95fa));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  iVar11 = DAT_001f97e8;
  *(undefined4 *)(iVar5 + 0x1f960e) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar11 + 0x1f9608));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar11 + 0x1f961c) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar11 + 0x1f9620));
  __mulsf3(uVar17,uVar13);
  uVar17 = __fixsfsi();
  *(undefined4 *)(iVar11 + 0x1f9634) = uVar17;
  uVar17 = __floatsisf(*(undefined4 *)(iVar11 + 0x1f9638));
  __mulsf3(uVar17,uVar16);
  uVar17 = __fixsfsi();
  iVar5 = DAT_001f97ec;
  *(undefined4 *)(DAT_001f97ec + 0x1f9652) = 1;
  *(undefined4 *)(iVar5 + 0x1f966a) = 2;
  *(undefined4 *)(iVar5 + 0x1f9682) = 1;
  *(undefined4 *)(iVar5 + 0x1f969a) = 1;
  iVar5 = DAT_001f97f0;
  *(undefined4 *)(iVar11 + 0x1f9664) = 1;
  *(undefined4 *)(iVar11 + 0x1f964c) = uVar17;
  *(undefined4 *)(iVar5 + 0x1f965a) = 1;
  iVar5 = DAT_001f97f4;
  iVar4 = *(int *)(this + 0x60);
  *(undefined4 *)(iVar11 + 0x1f967c) = 2;
  uVar17 = PackedImage::getImage(*(PackedImage **)(iVar4 + iVar5),0x28,false);
  *(undefined4 *)(this + 100) = uVar17;
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + 0x7f0),2,false)
  ;
  pIVar7 = (ImageElement *)operator_new(0x98);
  uVar1 = __addsf3(uVar13,uVar13);
  bVar2 = (bool)__addsf3(uVar16,uVar16);
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 0x6c) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001f97f4),10,false);
  this_00 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_00,'\x14',pCVar6,(CImage *)0x0,0,0,false);
  pOVar14 = this + 0x90;
  *(ZCImageButton **)pOVar14 = this_00;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  ImageButton::setScale(*(ImageButton **)pOVar14,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  piVar15 = *(int **)pOVar14;
  pcVar12 = *(code **)(*piVar15 + 0x2c);
  String::String(aSStack_50,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar3 + DAT_001f97f8) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar5 = SmDev();
  uVar17 = *(undefined4 *)((*(int *)(DAT_001f97fc + iVar5 * 4 + 0x1f9774) + 0x136) * 4 + iVar11);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_50,uVar17,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xac) = pBVar8;
  (*pcVar12)(piVar15,pBVar8);
  String::~String(aSStack_50);
  String::String(aSStack_48,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar3 + DAT_001f9800) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar5 = SmDev();
  uVar17 = *(undefined4 *)
            ((*(int *)((int)&DAT_001f97fc + DAT_001f9804 + iVar5 * 4) + 0x136) * 4 + iVar11);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_48,uVar17,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x94) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_48);
  pSVar9 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar9,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xb0) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  L_PrintLog((char *)(DAT_001f9bd8 + 0x1f9838),(char *)(DAT_001f9bdc + 0x1f983a));
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001f9be0),0x73,false)
  ;
  pIVar7 = (ImageElement *)operator_new(0x98);
  uVar1 = __mulsf3(uVar13,0x3fc00000);
  bVar2 = (bool)__mulsf3(uVar16,0x3fc00000);
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0_00,extraout_s1_00,uVar1,bVar2);
  *(ImageElement **)(this + 0x70) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  piVar15 = *(int **)(this + 0x70);
  pcVar12 = *(code **)(*piVar15 + 0x2c);
  String::String(aSStack_40,(char *)(DAT_001f9be4 + 0x1f9894));
  iVar11 = *(int *)(this + 0x60);
  iVar5 = SmDev();
  uVar17 = *(undefined4 *)((*(int *)(DAT_001f9be8 + iVar5 * 4 + 0x1f98b2) + 0x136) * 4 + iVar11);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_40,uVar17,0xff000000,0,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0x98) = pBVar8;
  (*pcVar12)(piVar15);
  String::~String(aSStack_40);
  uVar17 = ObjectiveSystem::getBonusTimeRemaining
                     (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001f9bec));
  piVar15 = *(int **)(this + 0x70);
  pcVar12 = *(code **)(*piVar15 + 0x2c);
  __divsi3(uVar17,DAT_001f9bf0);
  String::valueOf((int)aSStack_38);
  iVar11 = *(int *)(this + 0x60);
  iVar5 = SmDev();
  uVar17 = *(undefined4 *)((*(int *)(DAT_001f9bf4 + iVar5 * 4 + 0x1f9940) + 0x136) * 4 + iVar11);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_38,uVar17,DAT_001f9bf8,1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0x9c) = pBVar8;
  (*pcVar12)(piVar15);
  String::~String(aSStack_38);
  piVar15 = *(int **)(this + 0x70);
  pcVar12 = *(code **)(*piVar15 + 0x2c);
  String::String(aSStack_30,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar3 + DAT_001f9bfc) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar5 = SmDev();
  uVar17 = *(undefined4 *)((*(int *)(DAT_001f9c00 + iVar5 * 4 + 0x1f99d2) + 0x136) * 4 + iVar11);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_30,uVar17,DAT_001f9bf8,1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0xa0) = pBVar8;
  (*pcVar12)(piVar15,pBVar8);
  String::~String(aSStack_30);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001f9be0),0xaa,false)
  ;
  pIVar7 = (ImageElement *)operator_new(0x98);
  uVar1 = (uchar)uVar13;
  bVar2 = SUB41(uVar16,0);
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0_01,extraout_s1_01,uVar1,bVar2);
  *(ImageElement **)(this + 0x74) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  piVar15 = *(int **)(this + 0x74);
  pcVar12 = *(code **)(*piVar15 + 0x2c);
  iVar5 = *(int *)(*(int *)(this + 0x60) + 0x4b0);
  iVar4 = **(int **)(iVar3 + DAT_001f9c04);
  iVar11 = ObjectiveSystem::getBonusStreak
                     (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001f9bec));
  uVar10 = iVar11 - 1;
  if (2 < (int)uVar10) {
    uVar10 = 2;
  }
  String::String(aSStack_28,
                 (String *)(*(int *)(iVar5 + 8) + (iVar4 + (uVar10 & (int)~uVar10 >> 0x1f)) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar5 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(DAT_001f9c08 + iVar5 * 4 + 0x1f9ab6) + 0x136) * 4 + iVar11);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_28,uVar13,0xff000000,0,1,0x21,0,0);
  *(BitmapTextElement **)(this + 0xa4) = pBVar8;
  (*pcVar12)(piVar15);
  String::~String(aSStack_28);
  piVar15 = *(int **)(this + 0x74);
  pcVar12 = *(code **)(*piVar15 + 0x2c);
  iVar5 = *(int *)(*(int *)(this + 0x60) + 0x4b0);
  iVar3 = **(int **)(iVar3 + DAT_001f9c0c);
  iVar11 = ObjectiveSystem::getBonusStreak
                     (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001f9bec));
  uVar10 = iVar11 - 1;
  if (2 < (int)uVar10) {
    uVar10 = 2;
  }
  String::String(aSStack_20,
                 (String *)(*(int *)(iVar5 + 8) + (iVar3 + (uVar10 & (int)~uVar10 >> 0x1f)) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar5 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(iVar5 * 4 + DAT_001f9c10 + 0x1f9b00) + 0x136) * 4 + iVar11);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_20,uVar13,0xff000000,1,1,0x21,0,0);
  *(BitmapTextElement **)(this + 0xa8) = pBVar8;
  (*pcVar12)(piVar15);
  String::~String(aSStack_20);
  L_PrintLog((char *)(DAT_001f9c14 + 0x1f9b4c),(char *)(DAT_001f9c18 + 0x1f9b4e));
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,*(CImage **)(this + 100),extraout_s0_02,extraout_s1_02,uVar1,bVar2);
  *(ImageElement **)(this + 0x78) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,*(CImage **)(this + 100),extraout_s0_03,extraout_s1_03,uVar1,bVar2);
  *(ImageElement **)(this + 0x7c) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,*(CImage **)(this + 100),extraout_s0_04,extraout_s1_04,uVar1,bVar2);
  *(ImageElement **)(this + 0x80) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  uVar13 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001f9be0),0xab,false)
  ;
  *(undefined4 *)(this + 0x68) = uVar13;
  local_5c = this;
  do {
    pIVar7 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement
              (pIVar7,*(CImage **)(this + 0x68),extraout_s0_05,extraout_s1_05,uVar1,bVar2);
    *(ImageElement **)(local_5c + 0x84) = pIVar7;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
    local_5c = local_5c + 4;
  } while (local_5c != this + 0xc);
  layout(this);
  L_PrintLog((char *)(DAT_001f9d00 + 0x1f9c60),(char *)(DAT_001f9d04 + 0x1f9c62));
  return this;
}


