/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00200140 PendingOrderDialog::PendingOrderDialog */

/* PendingOrderDialog::PendingOrderDialog(GameStateCafe*) */

PendingOrderDialog * __thiscall
PendingOrderDialog::PendingOrderDialog(PendingOrderDialog *this,GameStateCafe *param_1)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CImage *pCVar6;
  ImageElement *pIVar7;
  ScreenElement *pSVar8;
  BitmapTextElement *pBVar9;
  ZCImageButton *pZVar10;
  int iVar11;
  PendingOrderDialog *pPVar12;
  code *pcVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar19;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar3 = DAT_0020053c + 0x20014e;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar3 + DAT_00200540) + 8;
  *(undefined4 *)(this + 0xc0) = 0;
  *(PendingOrderDialog **)(this + 0xc4) = this + 0xbc;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 200) = 0;
  iVar3 = CapcomApp::getInstance();
  uVar14 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar18 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar3 + 0x50);
  *(GameStateCafe **)(this + 100) = param_1;
  iVar3 = CapcomApp::getInstance();
  iVar3 = *(int *)(iVar3 + 4);
  *(int *)(this + 0x60) = iVar3;
  this[0xd0] = (PendingOrderDialog)0x0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0xffffffff;
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar3 + 0x7f0),2,false);
  pIVar7 = (ImageElement *)operator_new(0x98);
  uVar14 = __mulsf3(uVar14,uVar18);
  uVar4 = __mulsf3(uVar4,uVar5);
  uVar1 = __addsf3(uVar14,uVar14);
  bVar2 = (bool)__addsf3(uVar4,uVar4);
  uVar5 = 9;
  uVar18 = 0;
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 0x68) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  (**(code **)(*(int *)this + 0x18))
            (this,(int)*(short *)(*(int *)(this + 0x68) + 0xc),
             (int)*(short *)(*(int *)(this + 0x68) + 0x10),*(code **)(*(int *)this + 0x18),uVar5,
             uVar18);
  pSVar8 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar8,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x98) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  iVar15 = *(int *)(this + 0xc);
  String::String(aSStack_40,(char *)(DAT_00200544 + 0x200246));
  iVar11 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_00200548 + 0x200256) + 0x136) * 4 + iVar11);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar9,aSStack_40,uVar5,0xffffffff,1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0xd8) = pBVar9;
  String::~String(aSStack_40);
  updateWinTally(this);
  iVar3 = iVar15 * 7 >> 3;
  pPVar12 = this + 0x98;
  iVar11 = iVar15 - iVar3 >> 1;
  (**(code **)(**(int **)pPVar12 + 0x14))
            (*(int **)pPVar12,iVar11,iVar11 + *(int *)(*(int *)(this + 0xd8) + 0x10) / 2);
  (**(code **)(**(int **)pPVar12 + 0x18))
            (*(int **)pPVar12,iVar3,
             (*(int *)(this + 0x10) + iVar11 * -2) - *(int *)(*(int *)(this + 0xd8) + 0x10));
  piVar16 = *(int **)pPVar12;
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pSVar8 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar8,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x9c) = pSVar8;
  (*pcVar13)(piVar16,pSVar8);
  piVar16 = *(int **)(this + 0x98);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pSVar8 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar8,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xb0) = pSVar8;
  (*pcVar13)(piVar16,pSVar8);
  piVar16 = *(int **)(this + 0x98);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pSVar8 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar8,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xb4) = pSVar8;
  (*pcVar13)(piVar16,pSVar8);
  piVar16 = *(int **)(this + 0x98);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pSVar8 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar8,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xb8) = pSVar8;
  (*pcVar13)(piVar16,pSVar8);
  (**(code **)(**(int **)(this + 0x9c) + 0x18))(*(int **)(this + 0x9c),iVar3,0);
  (**(code **)(**(int **)(this + 0xb0) + 0x18))(*(int **)(this + 0xb0),iVar3,0);
  (**(code **)(**(int **)(this + 0xb4) + 0x18))(*(int **)(this + 0xb4),iVar3,0);
  (**(code **)(**(int **)(this + 0xb8) + 0x18))(*(int **)(this + 0xb8),iVar3,0);
  iVar3 = DAT_0020054c;
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_0020054c),0xb,false);
  *(undefined4 *)(this + 0xa0) = uVar5;
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0x12,false);
  *(undefined4 *)(this + 0xa4) = uVar5;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0x1e,false);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_00,extraout_s1_00,(uchar)uVar14,SUB41(uVar4,0));
  *(ImageElement **)(this + 0xac) = pIVar7;
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0x1e,false);
  pIVar7 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar7,pCVar6,extraout_s0_01,extraout_s1_01,(uchar)uVar14,SUB41(uVar4,0));
  *(ImageElement **)(this + 0xa8) = pIVar7;
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),6,false)
  ;
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'!',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x6c) = pZVar10;
  uVar19 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x6c),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  (**(code **)(**(int **)(this + 0x6c) + 0x14))
            (*(int **)(this + 0x6c),*(undefined4 *)(this + 0xc),0);
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\x12',*(CImage **)(this + 0xa0),(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x78) = pZVar10;
  uVar19 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x78),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  uVar5 = __divsi3(*(int *)(this + 0xc) * 6,10);
  piVar16 = *(int **)(this + 0x78);
  (**(code **)(*piVar16 + 0x14))(piVar16,uVar5,*(int *)(this + 0x10) - piVar16[4]);
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\x12',*(CImage **)(this + 0xa0),(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x74) = pZVar10;
  uVar19 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x74),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  piVar16 = *(int **)(this + 0x74);
  uVar5 = __divsi3(*(int *)(this + 0xc) << 2,10);
  (**(code **)(*piVar16 + 0x14))(piVar16,uVar5,*(int *)(this + 0x10) - piVar16[4]);
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\x12',*(CImage **)(this + 0xa0),(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x70) = pZVar10;
  uVar19 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x70),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  uVar5 = __divsi3(*(undefined4 *)(this + 0xc),5);
  piVar16 = *(int **)(this + 0x70);
  (**(code **)(*piVar16 + 0x14))(piVar16,uVar5,*(int *)(this + 0x10) - piVar16[4]);
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\x12',*(CImage **)(this + 0xa0),(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x7c) = pZVar10;
  uVar19 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x7c),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  piVar16 = *(int **)(this + 0x7c);
  uVar5 = __divsi3(*(int *)(this + 0xc) << 3,10);
  (**(code **)(*piVar16 + 0x14))(piVar16,uVar5,*(int *)(this + 0x10) - piVar16[4]);
  Vector<String>::elementAt((int)aSStack_38);
  iVar11 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_00200964 + iVar3 * 4 + 0x200620) + 0x136) * 4 + iVar11);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_38,uVar5,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x88) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_38);
  piVar16 = *(int **)(this + 0x88);
  (**(code **)(*piVar16 + 0x14))
            (piVar16,*(undefined4 *)(*(int *)(this + 0x78) + 4),
             *(undefined4 *)(*(int *)(this + 0x78) + 8));
  Vector<String>::elementAt((int)aSStack_30);
  iVar11 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_0020096c + iVar3 * 4 + 0x200690) + 0x136) * 4 + iVar11);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_30,uVar5,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x84) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_30);
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),*(undefined4 *)(*(int *)(this + 0x74) + 4),
             *(undefined4 *)(*(int *)(this + 0x74) + 8));
  Vector<String>::elementAt((int)aSStack_28);
  iVar11 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_00200974 + iVar3 * 4 + 0x200700) + 0x136) * 4 + iVar11);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_28,uVar5,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x80) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_28);
  (**(code **)(**(int **)(this + 0x80) + 0x14))
            (*(int **)(this + 0x80),*(undefined4 *)(*(int *)(this + 0x70) + 4),
             *(undefined4 *)(*(int *)(this + 0x70) + 8));
  Vector<String>::elementAt((int)aSStack_20);
  iVar11 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_0020097c + iVar3 * 4 + 0x20076e) + 0x136) * 4 + iVar11);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_20,uVar5,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x8c) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_20);
  piVar16 = *(int **)(this + 0x8c);
  (**(code **)(*piVar16 + 0x14))
            (piVar16,*(undefined4 *)(*(int *)(this + 0x7c) + 4),
             *(undefined4 *)(*(int *)(this + 0x7c) + 8));
  ScreenElement::addChild((ScreenElement *)this,*(ScreenElement **)(this + 0xac));
  ScreenElement::addChild((ScreenElement *)this,*(ScreenElement **)(this + 0xa8));
  piVar16 = *(int **)(this + 0xac);
  iVar11 = *(int *)(this + 0x70);
  iVar15 = *piVar16;
  iVar17 = *(int *)(iVar11 + 0x10);
  iVar3 = __divsi3(*(undefined4 *)(this + 0xc),5);
  iVar11 = __divsi3(*(undefined4 *)(iVar11 + 0xc),3);
  (**(code **)(iVar15 + 0x14))(piVar16,iVar3 + iVar11,(*(int *)(this + 0x10) - iVar17) - iVar17 / 2)
  ;
  piVar16 = *(int **)(this + 0xa8);
  iVar15 = *(int *)(*(int *)(this + 0x78) + 0x10);
  iVar3 = __divsi3(*(int *)(this + 0xc) * 6,10);
  iVar11 = __divsi3(*(undefined4 *)(*(int *)(this + 0x70) + 0xc),3);
  (**(code **)(*piVar16 + 0x14))
            (piVar16,iVar3 + iVar11,(*(int *)(this + 0x10) - iVar15) - iVar15 / 2);
  (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),0);
  (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),0);
  *(undefined4 *)(this + 0xd4) = 0;
  iVar3 = DAT_00200980;
  this[0x14] = (PendingOrderDialog)0x0;
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),3,false)
  ;
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\x12',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x90) = pZVar10;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0,false)
  ;
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\x12',pCVar6,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x94) = pZVar10;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  iVar3 = *(int *)(this + 0x98);
  (**(code **)(**(int **)(this + 0x90) + 0x14))
            (*(int **)(this + 0x90),*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
  iVar3 = *(int *)(this + 0x98);
  (**(code **)(**(int **)(this + 0x94) + 0x14))
            (*(int **)(this + 0x94),*(undefined4 *)(iVar3 + 4),
             *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x10));
  __mulsf3(uVar14,0x3f000000);
  uVar19 = __mulsf3(uVar4,0x3f000000);
  uVar19 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x90),(float)uVar19,
                      (float)((ulonglong)uVar19 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0x94),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),1);
  (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),0);
  (**(code **)(**(int **)(this + 0xb4) + 0x20))(*(int **)(this + 0xb4),0);
  (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),0);
  buttonCleanUp(this,*(ZCImageButton **)(this + 0x70));
  return this;
}


