/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e35e4 LevelUpDialog::LevelUpDialog */

/* LevelUpDialog::LevelUpDialog(int, int, int) */

LevelUpDialog * __thiscall
LevelUpDialog::LevelUpDialog(LevelUpDialog *this,int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uchar uVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  CImage *pCVar13;
  ImageElement *pIVar14;
  ScreenElement *pSVar15;
  int iVar16;
  ZCImageButton *pZVar17;
  BitmapTextElement *pBVar18;
  undefined4 *puVar19;
  int iVar20;
  code *pcVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  LevelUpDialog *pLVar28;
  int *piVar29;
  int iVar30;
  int iVar31;
  undefined4 uVar32;
  int iVar33;
  undefined4 uVar34;
  int iVar35;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined8 uVar36;
  float extraout_s1_03;
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar26 = DAT_001e3758 + 0x1e35f0;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar26 + DAT_001e375c) + 8;
  iVar10 = CapcomApp::getInstance();
  uVar32 = *(undefined4 *)(iVar10 + 0x40);
  iVar10 = CapcomApp::getInstance();
  uVar34 = *(undefined4 *)(iVar10 + 0x50);
  iVar10 = CapcomApp::getInstance();
  uVar11 = *(undefined4 *)(iVar10 + 0x44);
  iVar10 = CapcomApp::getInstance();
  uVar12 = *(undefined4 *)(iVar10 + 0x50);
  iVar10 = CapcomApp::getInstance();
  iVar10 = *(int *)(iVar10 + 4);
  *(int *)(this + 0xa8) = iVar10;
  *(int *)(this + 0x68) = param_1;
  *(int *)(this + 0x60) = param_2;
  *(int *)(this + 100) = param_3;
  pCVar13 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar10 + 0x7f0),2,false);
  pIVar14 = (ImageElement *)operator_new(0x98);
  uVar32 = __mulsf3(uVar32,uVar34);
  uVar11 = __mulsf3(uVar11,uVar12);
  uVar8 = __addsf3(uVar32,uVar32);
  bVar9 = (bool)__addsf3(uVar11,uVar11);
  ImageElement::ImageElement(pIVar14,pCVar13,extraout_s0,extraout_s1,uVar8,bVar9);
  *(ImageElement **)(this + 0x6c) = pIVar14;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar14);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x6c) + 0xc),
             *(int *)(*(int *)(this + 0x6c) + 0x10));
  iVar10 = DAT_001e3760;
  pCVar13 = (CImage *)
            PackedImage::getImage
                      (*(PackedImage **)(*(int *)(this + 0xa8) + DAT_001e3760),0x4c,false);
  pIVar14 = (ImageElement *)operator_new(0x98);
  uVar8 = (uchar)uVar32;
  bVar9 = SUB41(uVar11,0);
  ImageElement::ImageElement(pIVar14,pCVar13,extraout_s0_00,extraout_s1_00,uVar8,bVar9);
  *(ImageElement **)(this + 0x74) = pIVar14;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar14);
  pCVar13 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xa8) + iVar10),0x28,false);
  pIVar14 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar14,pCVar13,extraout_s0_01,extraout_s1_01,uVar8,bVar9);
  *(ImageElement **)(this + 0x70) = pIVar14;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar14);
  pSVar15 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar15,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x80) = pSVar15;
  ScreenElement::addChild((ScreenElement *)this,pSVar15);
  iVar16 = SmDev();
  if (iVar16 == 2) {
    pCVar13 = (CImage *)
              PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xa8) + iVar10),0x85,false);
    pIVar14 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar14,pCVar13,'\t',true);
  }
  else {
    pCVar13 = (CImage *)
              PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xa8) + iVar10),0x45,false);
    pIVar14 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar14,pCVar13,extraout_s0_02,extraout_s1_02,uVar8,bVar9);
  }
  *(ImageElement **)(this + 0x78) = pIVar14;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar14);
  String::String(aSStack_60,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xa8) + 0x4b0) + 8) +
                 **(int **)(iVar26 + DAT_001e3b78) * 8));
  iVar16 = *(int *)(this + 0xa8);
  iVar10 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(iVar10 * 4 + DAT_001e3b7c + 0x1e37c2) + 0x136) * 4 + iVar16);
  pSVar15 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar15,aSStack_60,uVar11,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x84) = pSVar15;
  ScreenElement::addChild((ScreenElement *)this,pSVar15);
  String::~String(aSStack_60);
  String::String(aSStack_58,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xa8) + 0x4b0) + 8) +
                 **(int **)(iVar26 + DAT_001e3b80) * 8));
  iVar16 = *(int *)(this + 0xa8);
  iVar10 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_001e3b84 + iVar10 * 4 + 0x1e3844) + 0x136) * 4 + iVar16);
  pSVar15 = (ScreenElement *)operator_new(0xc0);
  puVar19 = *(undefined4 **)(iVar26 + DAT_001e3b88);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar15,aSStack_58,uVar11,*puVar19,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x88) = pSVar15;
  ScreenElement::addChild((ScreenElement *)this,pSVar15);
  String::~String(aSStack_58);
  String::String(aSStack_48,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xa8) + 0x4b0) + 8) +
                 **(int **)(iVar26 + DAT_001e3b8c) * 8));
  String::valueOf((int)aSStack_40);
  String::operator+(aSStack_50,aSStack_48,aSStack_40);
  iVar16 = *(int *)(this + 0xa8);
  iVar10 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_001e3b90 + iVar10 * 4 + 0x1e38e4) + 0x136) * 4 + iVar16);
  pSVar15 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar15,aSStack_50,uVar11,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x8c) = pSVar15;
  ScreenElement::addChild((ScreenElement *)this,pSVar15);
  String::~String(aSStack_50);
  String::~String(aSStack_40);
  String::~String(aSStack_48);
  String::String(aSStack_38,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xa8) + 0x4b0) + 8) +
                 **(int **)(iVar26 + DAT_001e3b94) * 8));
  iVar16 = *(int *)(this + 0xa8);
  iVar10 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_001e3b98 + iVar10 * 4 + 0x1e3944) + 0x136) * 4 + iVar16);
  iVar27 = *(int *)(this + 0xc);
  iVar16 = *(int *)(*(int *)(this + 0x74) + 0xc);
  iVar20 = **(int **)(iVar26 + DAT_001e3b9c);
  iVar10 = SmDev();
  uVar1 = *(undefined1 *)(DAT_001e3ba0 + 0x1e399a + iVar10);
  pSVar15 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar15,aSStack_38,uVar11,*puVar19,0,0,0,
             (iVar27 - iVar16) + iVar20 * -2,*(undefined4 *)(this + 0x10),0x11,uVar1,1);
  *(ScreenElement **)(this + 0x90) = pSVar15;
  ScreenElement::addChild((ScreenElement *)this,pSVar15);
  String::~String(aSStack_38);
  *(undefined1 *)(*(int *)(this + 0x90) + 0x7f) = 0x11;
  String::String(aSStack_30,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xa8) + 0x4b0) + 8) +
                 **(int **)(iVar26 + DAT_001e3ba4) * 8));
  iVar16 = *(int *)(this + 0xa8);
  iVar10 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_001e3ba8 + iVar10 * 4 + 0x1e3a22) + 0x136) * 4 + iVar16);
  pSVar15 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar15,aSStack_30,uVar11,0xff000000,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x94) = pSVar15;
  ScreenElement::addChild((ScreenElement *)this,pSVar15);
  String::~String(aSStack_30);
  *(undefined1 *)(*(int *)(this + 0x94) + 0x7f) = 0x11;
  Recipe::getFullName((char)&stack0xffffffec + 0xec);
  iVar16 = *(int *)(this + 0xa8);
  iVar10 = SmDev();
  uVar12 = *(undefined4 *)((*(int *)(DAT_001e3bac + iVar10 * 4 + 0x1e3ab8) + 0x136) * 4 + iVar16);
  iVar10 = SmDev();
  uVar11 = *(undefined4 *)(iVar10 * 4 + *(int *)(iVar26 + DAT_001e3bb0));
  pSVar15 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar15,aSStack_28,uVar12,0xff000000,0,1,0,uVar11,0,0x14,0,0);
  *(ScreenElement **)(this + 0x98) = pSVar15;
  ScreenElement::addChild((ScreenElement *)this,pSVar15);
  String::~String(aSStack_28);
  *(undefined1 *)(*(int *)(this + 0x98) + 0x7f) = 0x11;
  pCVar13 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xa8) + DAT_001e3bb4),10,false);
  pZVar17 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar17,'\x12',pCVar13,(CImage *)0x0,0,0,false);
  pLVar28 = this + 0xa0;
  *(ZCImageButton **)pLVar28 = pZVar17;
  uVar36 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar17);
  ImageButton::setScale(*(ImageButton **)pLVar28,(float)uVar36,(float)((ulonglong)uVar36 >> 0x20));
  pcVar21 = *(code **)(**(int **)pLVar28 + 0x2c);
  String::String(aSStack_20,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xa8) + 0x4b0) + 8) +
                 **(int **)(iVar26 + DAT_001e3bb8) * 8));
  iVar16 = *(int *)(this + 0xa8);
  iVar10 = SmDev();
  uVar12 = *(undefined4 *)((*(int *)(iVar10 * 4 + DAT_001e3bbc + 0x1e3b26) + 0x136) * 4 + iVar16);
  iVar10 = *(int *)(this + 0xa0);
  uVar11 = *(undefined4 *)(iVar10 + 0x10);
  uVar32 = *(undefined4 *)(iVar10 + 0xc);
  pBVar18 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar18,aSStack_20,uVar12,0xffffffff,0,0,0,uVar32,uVar11,9,0,0);
  *(BitmapTextElement **)(this + 0x9c) = pBVar18;
  (*pcVar21)(iVar10,pBVar18);
  String::~String(aSStack_20);
  iVar10 = DAT_001e3fa4;
  *(undefined1 *)(*(int *)(this + 0x9c) + 0x7f) = 0x12;
  pCVar13 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xa8) + iVar10),0x7f,false);
  pZVar17 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar17,'$',pCVar13,(CImage *)0x0,0,0,false);
  pLVar28 = this + 0xa4;
  *(ZCImageButton **)pLVar28 = pZVar17;
  uVar36 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar17);
  ImageButton::setScale(*(ImageButton **)pLVar28,(float)uVar36,(float)((ulonglong)uVar36 >> 0x20));
  (**(code **)(**(int **)pLVar28 + 0x20))(*(int **)pLVar28,0);
  (**(code **)(**(int **)(this + 0x6c) + 0x14))(*(int **)(this + 0x6c),0,0);
  piVar29 = *(int **)(this + 0x78);
  pcVar21 = *(code **)(*piVar29 + 0x14);
  iVar10 = SmDev();
  uVar11 = *(undefined4 *)(iVar10 * 4 + *(int *)(iVar26 + DAT_001e3fa8));
  piVar22 = *(int **)(iVar26 + DAT_001e3fac);
  iVar16 = *piVar22;
  iVar10 = SmDev();
  (*pcVar21)(piVar29,uVar11,*(undefined4 *)(iVar10 * 4 + iVar16));
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),*(int *)(this + 0xc) / 2,
             *(undefined4 *)(*(int *)(this + 0x78) + 8));
  (**(code **)(**(int **)(this + 0x80) + 0x18))
            (*(int **)(this + 0x80),*(undefined4 *)(*(int *)(this + 0x88) + 0xc),3);
  (**(code **)(**(int **)(this + 0x80) + 0x1c))(*(int **)(this + 0x80),0x11);
  *(undefined4 *)(*(int *)(this + 0x80) + 0x18) = 0xffffffff;
  (**(code **)(**(int **)(this + 0x80) + 0x14))
            (*(int **)(this + 0x80),*(int *)(this + 0xc) / 2,
             *(int *)(*(int *)(this + 0x84) + 8) + *(int *)(*(int *)(this + 0x84) + 0x10));
  piVar29 = *(int **)(this + 0x88);
  iVar27 = *(int *)(this + 0xc);
  iVar20 = (*(int **)(this + 0x84))[2];
  pcVar21 = *(code **)(*piVar29 + 0x14);
  iVar10 = (**(code **)(**(int **)(this + 0x84) + 0x4c))();
  iVar16 = SmDev();
  uVar11 = __floatsisf(iVar20 + iVar10);
  __addsf3(uVar11,*(undefined4 *)(iVar16 * 4 + *(int *)(iVar26 + DAT_001e3fb0)));
  uVar11 = __fixsfsi();
  (*pcVar21)(piVar29,iVar27 / 2,uVar11);
  piVar29 = *(int **)(this + 0x74);
  iVar20 = *(int *)(this + 0x10);
  iVar16 = *piVar22;
  pcVar21 = *(code **)(*piVar29 + 0x14);
  uVar11 = *(undefined4 *)(*(int *)(this + 0x78) + 4);
  iVar10 = SmDev();
  (*pcVar21)(piVar29,uVar11,iVar20 - *(int *)(iVar10 * 4 + iVar16));
  iVar23 = *(int *)(*(int *)(this + 0x74) + 4);
  iVar10 = SmDev();
  iVar24 = *(int *)(iVar26 + DAT_001e3fb4);
  pcVar21 = *(code **)(**(int **)(this + 0x70) + 0x14);
  iVar10 = *(int *)(iVar10 * 4 + iVar24);
  iVar33 = *(int *)(*(int *)(this + 0x74) + 4);
  iVar16 = SmDev();
  iVar35 = *(int *)(iVar16 * 4 + *(int *)(iVar26 + DAT_001e3fb8));
  iVar16 = SmDev();
  iVar27 = *(int *)(*(int *)(this + 0x74) + 8);
  iVar25 = *(int *)(*(int *)(this + 0x74) + 0x10);
  iVar30 = *(int *)(iVar24 + iVar16 * 4);
  iVar16 = SmDev();
  iVar31 = *(int *)(iVar26 + DAT_001e3fbc);
  iVar20 = *(int *)(*(int *)(this + 0x70) + 0x10);
  (*pcVar21)(*(int *)(this + 0x70),iVar33 + iVar35 + iVar30 / 2,
             ((iVar27 - iVar25) + *(int *)(iVar16 * 4 + iVar31)) -
             ((int)(((uint)(iVar20 >> 0x1f) >> 0x1e) + iVar20) >> 2));
  piVar22 = *(int **)(this + 0x8c);
  iVar27 = *(int *)(this + 0xc);
  pcVar21 = *(code **)(*piVar22 + 0x14);
  iVar25 = *(int *)(*(int *)(this + 0x74) + 8);
  iVar20 = *(int *)(*(int *)(this + 0x74) + 0x10);
  iVar16 = SmDev();
  iVar23 = iVar23 + iVar10;
  (*pcVar21)(piVar22,iVar23 + (iVar27 - iVar23) / 2,
             (iVar25 - iVar20) + *(int *)(iVar31 + iVar16 * 4));
  piVar22 = *(int **)(this + 0x90);
  pcVar21 = *(code **)(*piVar22 + 0x14);
  iVar10 = *(int *)(this + 0x8c);
  uVar34 = *(undefined4 *)(iVar10 + 4);
  iVar27 = *(int *)(iVar10 + 0x10);
  iVar20 = *(int *)(iVar10 + 8);
  iVar16 = **(int **)(iVar26 + DAT_001e3fc0);
  iVar10 = CapcomApp::getInstance();
  uVar11 = *(undefined4 *)(iVar10 + 0x50);
  iVar10 = SmDev();
  uVar12 = __floatsisf(iVar20 + iVar27);
  uVar32 = __floatsisf(iVar16 >> 1);
  uVar11 = __mulsf3(uVar32,uVar11);
  uVar11 = __addsf3(uVar12,uVar11);
  __addsf3(uVar11,*(undefined4 *)(iVar10 * 4 + *(int *)(iVar26 + DAT_001e3fc4)));
  uVar11 = __fixsfsi();
  (*pcVar21)(piVar22,uVar34,uVar11);
  piVar22 = *(int **)(this + 0x94);
  pcVar21 = *(code **)(*piVar22 + 0x14);
  uVar11 = *(undefined4 *)(*(int *)(this + 0x70) + 4);
  iVar16 = *(int *)(*(int *)(this + 0x70) + 8);
  iVar10 = SmDev();
  (*pcVar21)(piVar22,uVar11,iVar16 + *(int *)(iVar10 * 4 + *(int *)(iVar26 + DAT_001e3fc8)));
  piVar22 = *(int **)(this + 0x98);
  pcVar21 = *(code **)(*piVar22 + 0x14);
  uVar11 = *(undefined4 *)(*(int *)(this + 0x94) + 4);
  iVar20 = *(int *)(*(int *)(this + 0x74) + 8);
  iVar27 = *(int *)(*(int *)(this + 0x74) + 0x10);
  iVar10 = SmDev();
  iVar10 = *(int *)(iVar31 + iVar10 * 4);
  iVar16 = SmDev();
  (*pcVar21)(piVar22,uVar11,
             (iVar20 - iVar27) + iVar10 + *(int *)(iVar16 * 4 + *(int *)(iVar26 + DAT_001e3fcc)) +
             -10);
  iVar20 = *(int *)(*(int *)(this + 0x98) + 8);
  iVar27 = *(int *)(*(int *)(this + 0x98) + 0x10);
  iVar25 = *(int *)(*(int *)(this + 0x94) + 8);
  iVar16 = *(int *)(*(int *)(this + 0x94) + 0x10);
  iVar10 = SmDev();
  uVar12 = __floatsisf(((iVar20 - iVar27) - iVar25) - iVar16);
  uVar11 = __floatsisf(*(undefined4 *)(iVar24 + iVar10 * 4));
  iVar10 = __aeabi_fcmplt(uVar12,uVar11);
  if (iVar10 != 0) {
    uVar11 = uVar12;
  }
  pCVar13 = (CImage *)
            PackedImage::getImage
                      (*(PackedImage **)(*(int *)(this + 0xa8) + DAT_001e3fd0),
                       (int)*(short *)(*(int *)(*(int *)(this + 0xa8) + 0x4e8) + param_2 * 0x1c +
                                      0x14),true);
  uVar34 = *(undefined4 *)(pCVar13 + 0x2c);
  iVar20 = *(int *)(*(int *)(this + 0x70) + 4);
  iVar27 = *(int *)(*(int *)(this + 0x98) + 8);
  sVar2 = *(short *)(pCVar13 + 0x20);
  iVar24 = *(int *)(*(int *)(this + 0x98) + 0x10);
  sVar3 = *(short *)(pCVar13 + 0x2a);
  sVar4 = *(short *)(pCVar13 + 0x26);
  sVar5 = *(short *)(pCVar13 + 0x22);
  sVar6 = *(short *)(pCVar13 + 0x24);
  sVar7 = *(short *)(pCVar13 + 0x28);
  pIVar14 = (ImageElement *)operator_new(0x98);
  iVar16 = __fixsfsi(uVar11);
  iVar10 = iVar16;
  uVar12 = __floatsisf((int)sVar2);
  uVar12 = __mulsf3(uVar12,uVar34);
  uVar32 = __floatsisf((int)sVar3);
  uVar12 = __addsf3(uVar12,uVar32);
  uVar32 = __floatsisf((int)sVar4);
  __addsf3(uVar12,uVar32);
  __fixsfsi();
  uVar12 = __floatsisf();
  uVar8 = __divsf3(uVar11,uVar12);
  uVar12 = __floatsisf((int)sVar5);
  uVar12 = __mulsf3(uVar12,uVar34);
  uVar32 = __floatsisf((int)sVar6);
  uVar12 = __addsf3(uVar12,uVar32);
  uVar32 = __floatsisf((int)sVar7);
  __addsf3(uVar12,uVar32);
  __fixsfsi();
  uVar12 = __floatsisf();
  bVar9 = (bool)__divsf3(uVar11,uVar12);
  ImageElement::ImageElement
            (pIVar14,pCVar13,iVar27 - iVar24 & 0xffffU | iVar20 << 0x10,iVar16,iVar10,extraout_s0_03
             ,extraout_s1_03,uVar8,bVar9);
  *(ImageElement **)(this + 0x7c) = pIVar14;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar14);
  piVar22 = *(int **)(this + 0xa4);
  iVar27 = *(int *)(this + 0xc);
  pcVar21 = *(code **)(*piVar22 + 0x14);
  iVar10 = SmDev();
  iVar20 = *(int *)(this + 0x10);
  iVar10 = *(int *)(iVar10 * 4 + *(int *)(iVar26 + DAT_001e41b0));
  iVar26 = **(int **)(iVar26 + DAT_001e41b4);
  iVar16 = SmDev();
  (*pcVar21)(piVar22,iVar27 - iVar10,iVar20 - *(int *)(iVar16 * 4 + iVar26));
  iVar10 = SmDev();
  if ((iVar10 == 0) || (iVar10 = SmDev(), iVar10 == 5)) {
    piVar22 = *(int **)(this + 0xa0);
    (**(code **)(*piVar22 + 0x14))(piVar22,*(int *)(this + 0xc) / 2,*(undefined4 *)(this + 0x10));
    iVar10 = *(int *)(*(int *)(this + 0x6c) + 0xc);
    iVar16 = *(int *)(*(int *)(this + 0xa0) + 0x10) / 2 + *(int *)(*(int *)(this + 0x6c) + 0x10);
  }
  else {
    piVar22 = *(int **)(this + 0xa0);
    (**(code **)(*piVar22 + 0x14))
              (piVar22,*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) - piVar22[4] / 2);
    iVar10 = *(int *)(*(int *)(this + 0x6c) + 0xc);
    iVar16 = *(int *)(*(int *)(this + 0x6c) + 0x10);
  }
  ScreenElement::setSize((ScreenElement *)this,iVar10,iVar16);
  return this;
}


