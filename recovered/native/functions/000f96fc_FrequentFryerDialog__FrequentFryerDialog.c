/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f96fc FrequentFryerDialog::FrequentFryerDialog */

/* FrequentFryerDialog::FrequentFryerDialog() */

FrequentFryerDialog * __thiscall FrequentFryerDialog::FrequentFryerDialog(FrequentFryerDialog *this)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CImage *pCVar6;
  ImageElement *pIVar7;
  ZCImageButton *pZVar8;
  ScreenElement *pSVar9;
  BitmapTextElement *pBVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  FrequentFryerDialog *pFVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  FrequentFryerDialog *pFVar24;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  undefined8 uVar25;
  float extraout_s1_00;
  float extraout_s1_01;
  ImageElement *local_94;
  int local_8c;
  code *local_7c;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar19 = DAT_000f9ae8 + 0xf9708;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar19 + DAT_000f9aec) + 8;
  String::String((String *)(this + 0x198));
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar3 + 4);
  iVar3 = CapcomApp::getInstance();
  uVar20 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar22 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar3 + 0x50);
  *(undefined4 *)(this + 0x188) = 0;
  this[0x194] = (FrequentFryerDialog)0x0;
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + 0x7f0),2,false)
  ;
  pIVar7 = (ImageElement *)operator_new(0x98);
  uVar20 = __mulsf3(uVar20,uVar22);
  uVar4 = __mulsf3(uVar4,uVar5);
  uVar1 = __addsf3(uVar20,uVar20);
  bVar2 = (bool)__addsf3(uVar4,uVar4);
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 100) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 100) + 0xc),
             *(int *)(*(int *)(this + 100) + 0x10));
  iVar3 = DAT_000f9af0;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_000f9af0),6,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'!',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x178) = pZVar8;
  uVar25 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x178),(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0x73,false);
  *(undefined4 *)(this + 0x130) = uVar5;
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0x28,false);
  *(undefined4 *)(this + 0x134) = uVar5;
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0x75,false);
  *(undefined4 *)(this + 0x138) = uVar5;
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0x74,false);
  *(undefined4 *)(this + 0x13c) = uVar5;
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0x22,false);
  *(undefined4 *)(this + 0x140) = uVar5;
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0x45,false);
  *(undefined4 *)(this + 0x144) = uVar5;
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0x4d,false);
  *(undefined4 *)(this + 0x148) = uVar5;
  iVar21 = *(int *)(this + 0xc);
  iVar12 = *(int *)(*(int *)(this + 0x178) + 0xc);
  Vector<String>::elementAt((int)aSStack_50);
  iVar16 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_000f9af8 + iVar3 * 4 + 0xf98b0) + 0x136) * 4 + iVar16);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_50,uVar5,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x15c) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_50);
  Vector<String>::elementAt((int)aSStack_48);
  iVar16 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_000f9b00 + iVar3 * 4 + 0xf98fa) + 0x136) * 4 + iVar16);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  iVar12 = iVar12 >> 1;
  iVar16 = (iVar21 + iVar12 * -3) / 2;
  puVar23 = *(undefined4 **)(iVar19 + DAT_000f9b04);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_48,uVar5,*puVar23,0,1,0,iVar16,0,9,0,0);
  *(ScreenElement **)(this + 0x160) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_48);
  *(undefined1 *)(*(int *)(this + 0x160) + 0x7f) = 0x11;
  String::valueOf((int)aSStack_40);
  iVar21 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_000f9b08 + iVar3 * 4 + 0xf99ae) + 0x136) * 4 + iVar21);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_40,uVar5,**(undefined4 **)(iVar19 + DAT_000f9b0c),1
             ,1,9,0,0);
  *(ScreenElement **)(this + 0x164) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_40);
  String::String(aSStack_38,0);
  iVar21 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_000f9b10 + iVar3 * 4 + 0xf99da) + 0x136) * 4 + iVar21);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_38,uVar5,0xffffffff,1,1,10,0,0);
  *(ScreenElement **)(this + 0x168) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_38);
  String::String(aSStack_30,0);
  iVar21 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_000f9b14 + iVar3 * 4 + 0xf9a32) + 0x136) * 4 + iVar21);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_30,uVar5,*puVar23,0,1,0,iVar16,0,9,0,0);
  *(ScreenElement **)(this + 0x16c) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_30);
  *(undefined1 *)(*(int *)(this + 0x16c) + 0x7f) = 0x11;
  String::String(aSStack_28,0);
  iVar16 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_000f9b18 + iVar3 * 4 + 0xf9a9a) + 0x136) * 4 + iVar16);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_28,uVar5,0xffffffff,0,1,0,0,0,10,0,0);
  *(ScreenElement **)(this + 0x170) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_28);
  *(undefined1 *)(*(int *)(this + 0x170) + 0x7f) = 0x12;
  iVar3 = *(int *)(this + 0x130);
  *(undefined4 *)(iVar3 + 0x2c) = uVar4;
  uVar5 = __divsf3(0x3f800000,uVar4);
  *(undefined4 *)(iVar3 + 0x30) = uVar5;
  pCVar6 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x60) + DAT_000f9cf4),
                      (int)*(short *)(*(int *)(*(int *)(this + 0x60) + 0x4e8) + 0x14),true);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_00,extraout_s1_00,(uchar)uVar20,SUB41(uVar4,0));
  *(ImageElement **)(this + 0x14c) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  iVar3 = *(int *)(this + 0x138);
  *(undefined4 *)(iVar3 + 0x30) = uVar5;
  *(undefined4 *)(iVar3 + 0x2c) = uVar4;
  iVar3 = *(int *)(this + 0x13c);
  *(undefined4 *)(iVar3 + 0x2c) = uVar4;
  *(undefined4 *)(iVar3 + 0x30) = uVar5;
  iVar3 = *(int *)(this + 0x140);
  *(undefined4 *)(iVar3 + 0x2c) = uVar4;
  *(undefined4 *)(iVar3 + 0x30) = uVar5;
  iVar3 = *(int *)(this + 0x144);
  *(undefined4 *)(iVar3 + 0x2c) = uVar4;
  *(undefined4 *)(iVar3 + 0x30) = uVar5;
  pSVar9 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar9,0,0,0,0,'\x11',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x150) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  *(undefined4 *)(*(int *)(this + 0x150) + 0x18) = 0xffffffff;
  pSVar9 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar9,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x154) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  piVar17 = *(int **)(this + 0x154);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pSVar9 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar9,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x158) = pSVar9;
  (*pcVar13)(piVar17,pSVar9);
  local_8c = iVar12 + 100;
  uVar14 = *(uint *)(*(int *)(this + 0x158) + 0x10);
  pFVar18 = this + 0x90;
  do {
    piVar17 = *(int **)(this + 0x158);
    if (*(char *)(*(int *)(this + 0x60) + DAT_000f9cf8) == '\0') {
      pCVar6 = *(CImage **)(this + 0x130);
      pcVar13 = *(code **)(*piVar17 + 0x2c);
      iVar3 = CImage::getWidth(pCVar6);
      iVar16 = CImage::getHeight(pCVar6);
      pIVar7 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement
                (pIVar7,*(CImage **)(this + 0x130),(int)(short)local_8c << 0x10 | uVar14 & 0xffff,
                 iVar3,iVar16,extraout_s0_01,extraout_s1_01,(uchar)uVar20,SUB41(uVar4,0));
      *(ImageElement **)pFVar18 = pIVar7;
      (*pcVar13)(piVar17,pIVar7);
      piVar17 = *(int **)(this + 0x158);
      pCVar6 = *(CImage **)(this + 0x130);
      local_7c = *(code **)(*piVar17 + 0x2c);
      iVar3 = CImage::getWidth(pCVar6);
      iVar16 = CImage::getHeight(pCVar6);
      pCVar6 = *(CImage **)(this + 0x134);
      iVar21 = CImage::getWidth(pCVar6);
      iVar19 = CImage::getHeight(pCVar6);
      local_94 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement
                (local_94,*(CImage **)(this + 0x134),
                 (uVar14 - iVar16 & 0xffff | (iVar3 / 2 + local_8c) * 0x10000) - 10,iVar21,iVar19,
                 '\n',false);
    }
    else {
      pCVar6 = *(CImage **)(this + 0x130);
      pcVar13 = *(code **)(*piVar17 + 0x2c);
      iVar3 = CImage::getWidth(pCVar6);
      iVar16 = CImage::getHeight(pCVar6);
      pIVar7 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement
                (pIVar7,*(CImage **)(this + 0x130),(int)(short)local_8c << 0x10 | uVar14 & 0xffff,
                 iVar3,iVar16,'\f',false);
      *(ImageElement **)pFVar18 = pIVar7;
      (*pcVar13)(piVar17,pIVar7);
      piVar17 = *(int **)(this + 0x158);
      pCVar6 = *(CImage **)(this + 0x130);
      local_7c = *(code **)(*piVar17 + 0x2c);
      iVar3 = CImage::getWidth(pCVar6);
      iVar16 = CImage::getHeight(pCVar6);
      pCVar6 = *(CImage **)(this + 0x134);
      iVar21 = CImage::getWidth(pCVar6);
      iVar19 = CImage::getHeight(pCVar6);
      local_94 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement
                (local_94,*(CImage **)(this + 0x134),
                 (uVar14 - iVar16 & 0xffff | (iVar3 / 2 + local_8c) * 0x10000) - 10,iVar21,iVar19,
                 '\n',false);
    }
    *(ImageElement **)(pFVar18 + -0x28) = local_94;
    (*local_7c)(piVar17,local_94);
    ScreenElement::setOrder(*(ScreenElement **)(pFVar18 + -0x28),1);
    iVar3 = CImage::getWidth(*(CImage **)(this + 0x130));
    piVar17 = *(int **)(this + 0x158);
    local_8c = local_8c + iVar3 + iVar12;
    pcVar13 = *(code **)(*piVar17 + 0x2c);
    pCVar6 = *(CImage **)(this + 0x144);
    iVar21 = *(int *)pFVar18;
    pFVar24 = pFVar18 + 4;
    iVar16 = *(int *)(iVar21 + 4);
    iVar11 = *(int *)(iVar21 + 8);
    iVar15 = *(int *)(iVar21 + 0x10);
    iVar21 = CImage::getWidth(pCVar6);
    iVar19 = CImage::getHeight(pCVar6);
    pIVar7 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement
              (pIVar7,*(CImage **)(this + 0x144),
               iVar11 - iVar15 / 2 & 0xffffU | (iVar3 / 2 + iVar16) * 0x10000,iVar21,iVar19,'\x12',
               false);
    *(ImageElement **)(pFVar18 + 0x78) = pIVar7;
    (*pcVar13)(piVar17,pIVar7);
    pFVar18 = pFVar24;
  } while (pFVar24 != this + 0xb8);
  makeDescroptions(this);
  (**(code **)(**(int **)(this + 0x158) + 0x18))
            (*(int **)(this + 0x158),
             *(int *)(*(int *)(this + 0xb4) + 4) + *(int *)(*(int *)(this + 0xb4) + 0xc) + 10,
             *(undefined4 *)(*(int *)(this + 0x154) + 0x10));
  iVar3 = DAT_000fa0e4;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_000fa0e4),1,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\n',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x17c) = pZVar8;
  uVar25 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x17c),(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),2,false)
  ;
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\"',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x180) = pZVar8;
  uVar25 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x180),(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),10,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x12',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x184) = pZVar8;
  uVar25 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x184),(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  pcVar13 = *(code **)(**(int **)(this + 0x184) + 0x2c);
  Vector<String>::elementAt((int)aSStack_20);
  iVar12 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  iVar16 = *(int *)(this + 0x184);
  uVar4 = *(undefined4 *)(iVar16 + 0x10);
  uVar5 = *(undefined4 *)((*(int *)(DAT_000fa0ec + iVar3 * 4 + 0xf9fc8) + 0x136) * 4 + iVar12);
  uVar20 = *(undefined4 *)(iVar16 + 0xc);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar10,aSStack_20,uVar5,0xffffffff,0,0,0,uVar20,uVar4,9,0,0)
  ;
  *(BitmapTextElement **)(this + 0x174) = pBVar10;
  (*pcVar13)(iVar16,pBVar10);
  String::~String(aSStack_20);
  *(undefined1 *)(*(int *)(this + 0x174) + 0x7f) = 0x12;
  iVar3 = SmDev();
  if ((iVar3 == 0) || (iVar3 = SmDev(), iVar3 == 5)) {
    (**(code **)(**(int **)(this + 0x184) + 0x14))
              (*(int **)(this + 0x184),*(int *)(this + 0xc) / 2,*(undefined4 *)(this + 0x10));
    iVar3 = *(int *)(*(int *)(this + 100) + 0xc);
    iVar12 = *(int *)(*(int *)(this + 0x184) + 0x10) / 2 + *(int *)(*(int *)(this + 100) + 0x10);
  }
  else {
    piVar17 = *(int **)(this + 0x184);
    (**(code **)(*piVar17 + 0x14))
              (piVar17,*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) - piVar17[4] / 2);
    iVar3 = *(int *)(*(int *)(this + 100) + 0xc);
    iVar12 = *(int *)(*(int *)(this + 100) + 0x10);
  }
  ScreenElement::setSize((ScreenElement *)this,iVar3,iVar12);
  return this;
}


