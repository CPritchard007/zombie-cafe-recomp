/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f1100 EnemyCafeDialog::EnemyCafeDialog */

/* EnemyCafeDialog::EnemyCafeDialog(int) */

EnemyCafeDialog * __thiscall EnemyCafeDialog::EnemyCafeDialog(EnemyCafeDialog *this,int param_1)

{
  uchar uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CImage *pCVar6;
  ImageElement *pIVar7;
  ZCImageButton *pZVar8;
  ScreenElement *pSVar9;
  BitmapTextElement *pBVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar18;
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar17 = DAT_000f14f0;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar17 = iVar17 + 0xf1116;
  iVar11 = *(int *)(iVar17 + DAT_000f14f4);
  *(int *)(this + 0x60) = param_1;
  *(int *)this = iVar11 + 8;
  iVar11 = CapcomApp::getInstance();
  uVar14 = *(undefined4 *)(iVar11 + 0x40);
  iVar11 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar11 + 0x50);
  iVar11 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar11 + 0x44);
  iVar11 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar11 + 0x50);
  iVar11 = CapcomApp::getInstance();
  iVar11 = *(int *)(iVar11 + 4);
  *(int *)(this + 0x88) = iVar11;
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar11 + 0x7f0),2,false);
  pIVar7 = (ImageElement *)operator_new(0x98);
  uVar3 = __mulsf3(uVar14,uVar3);
  uVar4 = __mulsf3(uVar4,uVar5);
  uVar1 = __addsf3(uVar3,uVar3);
  bVar2 = (bool)__addsf3(uVar4,uVar4);
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 100) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 100) + 0xc),
             *(int *)(*(int *)(this + 100) + 0x10));
  iVar11 = DAT_000f14f8;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x88) + DAT_000f14f8),0x4c,false)
  ;
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_00,extraout_s1_00,(uchar)uVar3,SUB41(uVar4,0));
  *(ImageElement **)(this + 0x6c) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x88) + iVar11),0x28,false);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_01,extraout_s1_01,(uchar)uVar3,SUB41(uVar4,0));
  *(ImageElement **)(this + 0x68) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x88) + iVar11),6,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'!',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x80) = pZVar8;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x80),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  String::String(aSStack_48,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x88) + 0x4b0) + 8) +
                 **(int **)(iVar17 + DAT_000f14fc) * 8));
  iVar13 = *(int *)(this + 0x88);
  iVar11 = SmDev();
  iVar15 = *(int *)(this + 0xc);
  uVar3 = *(undefined4 *)((*(int *)(iVar11 * 4 + DAT_000f1500 + 0xf128a) + 0x136) * 4 + iVar13);
  iVar11 = *(int *)(*(int *)(this + 0x80) + 0xc);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_48,uVar3,0xffffffff,0,1,0,(iVar15 + -0x14) - iVar11
             ,0,0x11,0,0);
  *(ScreenElement **)(this + 0x74) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_48);
  ZombieCafe::getEnemyCafeName((int)aSStack_30);
  String::operator+(aSStack_38,(char *)aSStack_30);
  String::String(aSStack_28,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x88) + 0x4b0) + 8) +
                 **(int **)(iVar17 + DAT_000f1508) * 8));
  String::operator+(aSStack_40,aSStack_38,aSStack_28);
  iVar13 = *(int *)(this + 0x88);
  iVar11 = SmDev();
  iVar15 = *(int *)(this + 0xc);
  uVar3 = *(undefined4 *)((*(int *)(DAT_000f150c + iVar11 * 4 + 0xf134a) + 0x136) * 4 + iVar13);
  iVar11 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar13 = **(int **)(iVar17 + DAT_000f1510);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_40,uVar3,0xffffffff,0,1,0,
             (iVar15 - iVar11) - iVar13,0,10,0,0);
  *(ScreenElement **)(this + 0x78) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_40);
  String::~String(aSStack_28);
  String::~String(aSStack_38);
  String::~String(aSStack_30);
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x88) + DAT_000f14f8),10,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x14',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x84) = pZVar8;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x84),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  piVar16 = *(int **)(this + 0x84);
  pcVar12 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_20,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x88) + 0x4b0) + 8) +
                 **(int **)(iVar17 + DAT_000f1514) * 8));
  iVar13 = *(int *)(this + 0x88);
  iVar11 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_000f1518 + iVar11 * 4 + 0xf142e) + 0x136) * 4 + iVar13);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar10,aSStack_20,uVar3,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0x7c) = pBVar10;
  (*pcVar12)(piVar16,pBVar10);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x7c) + 0x14))
            (*(int **)(this + 0x7c),*(int *)(*(int *)(this + 0x84) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x84) + 0x10) / 2);
  (**(code **)(**(int **)(this + 100) + 0x14))(*(int **)(this + 100),0,0);
  piVar16 = *(int **)(this + 0x74);
  iVar11 = *(int *)(this + 0xc);
  pcVar12 = *(code **)(*piVar16 + 0x14);
  iVar13 = **(int **)(iVar17 + DAT_000f151c);
  iVar17 = SmDev();
  (*pcVar12)(piVar16,iVar11 / 2,*(undefined4 *)(iVar17 * 4 + iVar13));
  *(undefined1 *)(*(int *)(this + 0x74) + 0x7f) = 0x11;
  (**(code **)(**(int **)(this + 0x80) + 0x14))
            (*(int **)(this + 0x80),*(undefined4 *)(this + 0xc),0);
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) + -10);
  (**(code **)(**(int **)(this + 0x6c) + 0x14))
            (*(int **)(this + 0x6c),10,
             *(int *)(*(int *)(this + 0x74) + 8) + *(int *)(*(int *)(this + 0x74) + 0x10));
  piVar16 = *(int **)(this + 0x68);
  iVar17 = ScreenElement::localToParentCoords
                     (*(ScreenElement **)(this + 0x6c),
                      *(int *)(*(ScreenElement **)(this + 0x6c) + 0xc) >> 1,0);
  (**(code **)(*piVar16 + 0x14))(piVar16,iVar17 >> 0x10,(int)(short)iVar17);
  pSVar9 = *(ScreenElement **)(this + 0x6c);
  piVar16 = *(int **)(this + 0x78);
  iVar17 = ScreenElement::localToParentCoords
                     (pSVar9,*(int *)(pSVar9 + 0xc),*(int *)(pSVar9 + 0x10) >> 1);
  (**(code **)(*piVar16 + 0x14))(piVar16,iVar17 >> 0x10,(int)(short)iVar17);
  *(undefined1 *)(*(int *)(this + 0x78) + 0x7f) = 0x11;
  setEnemyImage(this,param_1);
  return this;
}


