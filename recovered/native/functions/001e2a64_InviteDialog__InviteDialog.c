/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e2a64 InviteDialog::InviteDialog */

/* InviteDialog::InviteDialog(float) */

InviteDialog * __thiscall InviteDialog::InviteDialog(InviteDialog *this,float param_1)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CImage *pCVar8;
  ImageElement *this_00;
  PackedImage *pPVar9;
  ZCImageButton *pZVar10;
  ScreenElement *pSVar11;
  BitmapTextElement *pBVar12;
  CImage *pCVar13;
  NoticeDialog *this_01;
  int *piVar14;
  undefined4 in_r1;
  int iVar15;
  int iVar16;
  InviteDialog *pIVar17;
  code *pcVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  undefined8 uVar19;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_001e2dd4 + 0x1e2a7c) + 8;
  String::String((String *)(this + 0x60));
  iVar3 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar7 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = CapcomApp::getInstance();
  iVar16 = *(int *)(iVar3 + 4);
  *(int *)(this + 0xc4) = iVar16;
  iVar3 = DAT_001e2ddc;
  *(int *)(this + 0x6c) = DAT_001e2dd8 + 0x1e2abe;
  iVar15 = *(int *)(iVar16 + iVar3);
  pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar16 + 0x7f0),2,false);
  this_00 = (ImageElement *)operator_new(0x98);
  uVar4 = __mulsf3(uVar4,uVar5);
  uVar5 = __mulsf3(uVar6,uVar7);
  uVar1 = __mulsf3(uVar4,in_r1);
  bVar2 = (bool)__mulsf3(uVar5,in_r1);
  ImageElement::ImageElement(this_00,pCVar8,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 0x88) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  bVar2 = iVar15 == 0;
  if (bVar2) {
    pPVar9 = *(PackedImage **)(*(int *)(this + 0xc4) + DAT_001e2de0);
  }
  else {
    pPVar9 = *(PackedImage **)(*(int *)(this + 0xc4) + iVar3);
  }
  uVar4 = PackedImage::getImage(pPVar9,6,false);
  *(undefined4 *)(this + 0xb8) = uVar4;
  iVar15 = SmDev();
  pIVar17 = this + 0xc4;
  if (iVar15 == 2) {
    if (!bVar2) {
      iVar15 = 0x8d;
      pPVar9 = *(PackedImage **)(*(int *)pIVar17 + iVar3);
      goto LAB_001e2b7c;
    }
  }
  else if (!bVar2) {
    iVar15 = 10;
    pPVar9 = *(PackedImage **)(*(int *)pIVar17 + iVar3);
    goto LAB_001e2b7c;
  }
  iVar15 = 8;
  pPVar9 = *(PackedImage **)(*(int *)pIVar17 + DAT_001e2de0);
  bVar2 = false;
LAB_001e2b7c:
  uVar4 = PackedImage::getImage(pPVar9,iVar15,bVar2);
  *(undefined4 *)(this + 0xbc) = uVar4;
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'!',*(CImage **)(this + 0xb8),(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xa8) = pZVar10;
  uVar19 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xa8),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  String::String(aSStack_28,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc4) + 0x4b0) + 8) +
                 **(int **)(DAT_001e2de4 + 0x1e2bcc) * 8));
  iVar15 = *(int *)(this + 0xc4);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_001e2de8 + 0x1e2be6) + 0x136) * 4 + iVar15);
  pSVar11 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar11,aSStack_28,uVar4,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x8c) = pSVar11;
  ScreenElement::addChild((ScreenElement *)this,pSVar11);
  String::~String(aSStack_28);
  pSVar11 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar11,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xc0) = pSVar11;
  ScreenElement::addChild((ScreenElement *)this,pSVar11);
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\x11',*(CImage **)(this + 0xbc),(CImage *)0x0,0,0,false);
  pIVar17 = this + 0xb4;
  *(ZCImageButton **)pIVar17 = pZVar10;
  uVar19 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale(*(ImageButton **)pIVar17,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  pcVar18 = *(code **)(**(int **)pIVar17 + 0x2c);
  String::String(aSStack_20,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc4) + 0x4b0) + 8) +
                 **(int **)(DAT_001e2dec + 0x1e2c8c) * 8));
  iVar15 = *(int *)(this + 0xc4);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_001e2df0 + iVar3 * 4 + 0x1e2cbe) + 0x136) * 4 + iVar15);
  iVar3 = *(int *)(this + 0xb4);
  uVar5 = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = *(undefined4 *)(iVar3 + 0xc);
  pBVar12 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar12,aSStack_20,uVar4,0xffffffff,0,0,0,uVar6,uVar5,9,0,0);
  *(BitmapTextElement **)(this + 0x9c) = pBVar12;
  (*pcVar18)(iVar3,pBVar12);
  String::~String(aSStack_20);
  *(undefined1 *)(*(int *)(this + 0x9c) + 0x7f) = 0x12;
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc4));
  iVar3 = DAT_001e2de0;
  pCVar8 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc4) + DAT_001e2de0),0x22,false)
  ;
  *(CImage **)(this + 0xcc) = pCVar8;
  pCVar13 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc4) + iVar3),8,false);
  *(CImage **)(this + 0xd0) = pCVar13;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(this_01,pCVar8,pCVar13,extraout_s0_00);
  *(NoticeDialog **)(this + 200) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  piVar14 = *(int **)(this + 200);
  (**(code **)(*piVar14 + 0x1c))(piVar14,0x12);
  layout(this);
  this[0x68] = (InviteDialog)0x0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined1 *)(*(int *)(this + 0xc4) + DAT_001e2df4) = 0;
  this[0x14] = (InviteDialog)0x0;
  return this;
}


