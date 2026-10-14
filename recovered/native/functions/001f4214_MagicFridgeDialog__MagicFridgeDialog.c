/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f4214 MagicFridgeDialog::MagicFridgeDialog */

/* MagicFridgeDialog::MagicFridgeDialog(int, int, int) */

MagicFridgeDialog * __thiscall
MagicFridgeDialog::MagicFridgeDialog(MagicFridgeDialog *this,int param_1,int param_2,int param_3)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CImage *pCVar7;
  ImageElement *pIVar8;
  ScreenElement *pSVar9;
  String *this_00;
  ZCImageButton *this_01;
  BitmapTextElement *pBVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  MagicFridgeDialog *pMVar17;
  int *piVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar24;
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar23 = DAT_001f4394;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar23 = iVar23 + 0x1f422e;
  *(int *)this = *(int *)(iVar23 + DAT_001f4398) + 8;
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(iVar3 + 4);
  iVar3 = CapcomApp::getInstance();
  uVar20 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar3 + 0x50);
  *(int *)(this + 0x60) = param_1;
  *(int *)(this + 100) = param_2;
  *(int *)(this + 0x68) = param_3;
  pCVar7 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x98) + 0x7f0),2,false)
  ;
  pIVar8 = (ImageElement *)operator_new(0x98);
  uVar4 = __mulsf3(uVar20,uVar4);
  uVar5 = __mulsf3(uVar5,uVar6);
  uVar1 = __addsf3(uVar4,uVar4);
  bVar2 = (bool)__addsf3(uVar5,uVar5);
  ImageElement::ImageElement(pIVar8,pCVar7,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 0x6c) = pIVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar8);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x6c) + 0xc),
             *(int *)(*(int *)(this + 0x6c) + 0x10));
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x98) + DAT_001f439c),0x4c,false)
  ;
  pIVar8 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar8,pCVar7,extraout_s0_00,extraout_s1_00,(uchar)uVar4,SUB41(uVar5,0));
  *(ImageElement **)(this + 0x74) = pIVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar8);
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x98) + DAT_001f439c),0x28,false)
  ;
  pIVar8 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar8,pCVar7,extraout_s0_01,extraout_s1_01,(uchar)uVar4,SUB41(uVar5,0));
  *(ImageElement **)(this + 0x70) = pIVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar8);
  pSVar9 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar9,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x7c) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::String(aSStack_58);
  if (*(int *)(this + 0x68) == 0) {
    String::String(aSStack_50,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0x98) + 0x4b0) + 8) +
                   **(int **)(iVar23 + DAT_001f43a0) * 8));
    String::operator=(aSStack_58,aSStack_50);
    this_00 = aSStack_50;
  }
  else {
    String::String(aSStack_48,(char *)(DAT_001f4788 + 0x1f43ac));
    String::operator=(aSStack_58,aSStack_48);
    this_00 = aSStack_48;
  }
  String::~String(this_00);
  String::String(aSStack_40,aSStack_58);
  iVar16 = *(int *)(this + 0x98);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_001f478c + 0x1f43d6) + 0x136) * 4 + iVar16);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_40,uVar5,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x80) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_40);
  String::String(aSStack_38,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x98) + 0x4b0) + 8) +
                 **(int **)(iVar23 + DAT_001f4790) * 8));
  iVar16 = *(int *)(this + 0x98);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_001f4794 + iVar3 * 4 + 0x1f4458) + 0x136) * 4 + iVar16);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  puVar12 = *(undefined4 **)(iVar23 + DAT_001f4798);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_38,uVar5,*puVar12,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x84) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_38);
  Recipe::getFullName((char)&stack0xffffffec + 0xe4);
  iVar16 = *(int *)(this + 0x98);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_001f479c + 0x1f44b4) + 0x136) * 4 + iVar16);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_30,uVar5,0xffffffff,0,0,9,9,1);
  *(ScreenElement **)(this + 0x88) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_30);
  String::String(aSStack_28,0);
  iVar16 = *(int *)(this + 0x98);
  iVar3 = SmDev();
  iVar21 = *(int *)(this + 0xc);
  uVar13 = *(undefined4 *)((*(int *)(DAT_001f47a0 + iVar3 * 4 + 0x1f4526) + 0x136) * 4 + iVar16);
  iVar3 = *(int *)(*(int *)(this + 0x74) + 0xc);
  uVar6 = **(undefined4 **)(iVar23 + DAT_001f47a4);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  uVar20 = *puVar12;
  uVar5 = __floatsisf(iVar21 - iVar3);
  uVar6 = __floatsisf(uVar6);
  uVar4 = __mulsf3(uVar6,uVar4);
  __subsf3(uVar5,uVar4);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement((BitmapTextElement *)pSVar9,aSStack_28,uVar13,uVar20);
  *(ScreenElement **)(this + 0x90) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_28);
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x98) + DAT_001f47a8),10,false);
  this_01 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_01,'\x12',pCVar7,(CImage *)0x0,0,0,false);
  pMVar17 = this + 0x94;
  *(ZCImageButton **)pMVar17 = this_01;
  uVar24 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  ImageButton::setScale(*(ImageButton **)pMVar17,(float)uVar24,(float)((ulonglong)uVar24 >> 0x20));
  pcVar14 = *(code **)(**(int **)pMVar17 + 0x2c);
  String::String(aSStack_20,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x98) + 0x4b0) + 8) +
                 **(int **)(iVar23 + DAT_001f47ac) * 8));
  iVar16 = *(int *)(this + 0x98);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_001f47b0 + iVar3 * 4 + 0x1f4638) + 0x136) * 4 + iVar16);
  iVar3 = *(int *)(this + 0x94);
  uVar4 = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = *(undefined4 *)(iVar3 + 0xc);
  pBVar10 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar10,aSStack_20,uVar5,0xffffffff,0,0,0,uVar6,uVar4,9,0,0);
  *(BitmapTextElement **)(this + 0x8c) = pBVar10;
  (*pcVar14)(iVar3,pBVar10);
  String::~String(aSStack_20);
  *(undefined1 *)(*(int *)(this + 0x8c) + 0x7f) = 0x12;
  (**(code **)(**(int **)(this + 0x6c) + 0x14))(*(int **)(this + 0x6c),0,0);
  piVar18 = *(int **)(this + 0x80);
  iVar21 = *(int *)(this + 0xc);
  pcVar14 = *(code **)(*piVar18 + 0x14);
  iVar16 = **(int **)(iVar23 + DAT_001f47b4);
  iVar3 = SmDev();
  (*pcVar14)(piVar18,iVar21 / 2,*(undefined4 *)(iVar3 * 4 + iVar16));
  (**(code **)(**(int **)(this + 0x7c) + 0x18))
            (*(int **)(this + 0x7c),*(undefined4 *)(*(int *)(this + 0x80) + 0xc),3);
  (**(code **)(**(int **)(this + 0x7c) + 0x1c))(*(int **)(this + 0x7c),0x11);
  *(undefined4 *)(*(int *)(this + 0x7c) + 0x18) = 0xffffffff;
  (**(code **)(**(int **)(this + 0x7c) + 0x14))
            (*(int **)(this + 0x7c),*(int *)(this + 0xc) / 2,
             *(int *)(*(int *)(this + 0x80) + 8) + *(int *)(*(int *)(this + 0x80) + 0x10));
  piVar18 = *(int **)(this + 0x84);
  iVar16 = *(int *)(this + 0xc);
  pcVar14 = *(code **)(*piVar18 + 0x14);
  uVar4 = *(undefined4 *)(*(int *)(this + 0x80) + 8);
  iVar3 = SmDev();
  uVar4 = __floatsisf(uVar4);
  __addsf3(uVar4,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar23 + DAT_001f47b8)));
  uVar4 = __fixsfsi();
  (*pcVar14)(piVar18,iVar16 / 2,uVar4);
  piVar18 = *(int **)(this + 0x74);
  iVar3 = (*(int *)(*(int *)(this + 0x6c) + 0x10) -
          (*(int *)(*(int *)(this + 0x80) + 8) + *(int *)(*(int *)(this + 0x80) + 0x10))) -
          piVar18[4] >> 1;
  (**(code **)(*piVar18 + 0x14))(piVar18,iVar3,*(int *)(*(int *)(this + 0x6c) + 0x10) - iVar3);
  pcVar14 = *(code **)(**(int **)(this + 0x70) + 0x14);
  iVar22 = *(int *)(*(int *)(this + 0x74) + 4);
  iVar3 = SmDev();
  iVar3 = *(int *)(iVar3 * 4 + *(int *)(iVar23 + DAT_001f47bc));
  iVar16 = SmDev();
  iVar19 = *(int *)(iVar16 * 4 + *(int *)(iVar23 + DAT_001f47c0));
  iVar11 = *(int *)(*(int *)(this + 0x74) + 8);
  iVar15 = *(int *)(*(int *)(this + 0x74) + 0x10);
  iVar16 = SmDev();
  iVar21 = *(int *)(*(int *)(this + 0x70) + 0x10);
  (*pcVar14)(*(int *)(this + 0x70),iVar22 + iVar3 + iVar19 / 2,
             ((iVar11 - iVar15) + *(int *)(iVar16 * 4 + *(int *)(iVar23 + DAT_001f4984))) -
             ((int)(((uint)(iVar21 >> 0x1f) >> 0x1e) + iVar21) >> 2));
  pSVar9 = *(ScreenElement **)(this + 0x74);
  iVar16 = *(int *)(pSVar9 + 0xc);
  piVar18 = *(int **)(this + 0x88);
  iVar3 = __divsi3(*(undefined4 *)(pSVar9 + 0x10),3);
  iVar3 = ScreenElement::localToParentCoords(pSVar9,iVar16,iVar3);
  (**(code **)(*piVar18 + 0x14))(piVar18,iVar3 >> 0x10,(int)(short)iVar3);
  (**(code **)(**(int **)(this + 0x88) + 0x18))(*(int **)(this + 0x88),900,500);
  piVar18 = *(int **)(this + 0x90);
  pcVar14 = *(code **)(*piVar18 + 0x14);
  iVar3 = *(int *)(this + 0x88);
  uVar5 = *(undefined4 *)(iVar3 + 4);
  iVar11 = *(int *)(iVar3 + 8);
  iVar16 = *(int *)(iVar3 + 0x10);
  iVar21 = **(int **)(iVar23 + DAT_001f4988);
  iVar3 = SmDev();
  uVar4 = __floatsisf(iVar11 + iVar16 + (iVar21 >> 1));
  __addsf3(uVar4,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar23 + DAT_001f498c)));
  uVar4 = __fixsfsi();
  (*pcVar14)(piVar18,uVar5,uVar4);
  *(undefined1 *)(*(int *)(this + 0x90) + 0x7f) = 0x11;
  setRecipeImage(this,param_1);
  iVar23 = SmDev();
  if ((iVar23 == 0) || (iVar23 = SmDev(), iVar23 == 5)) {
    piVar18 = *(int **)(this + 0x94);
    (**(code **)(*piVar18 + 0x14))(piVar18,*(int *)(this + 0xc) / 2,*(undefined4 *)(this + 0x10));
    iVar23 = *(int *)(*(int *)(this + 0x6c) + 0xc);
    iVar3 = *(int *)(*(int *)(this + 0x94) + 0x10) / 2 + *(int *)(*(int *)(this + 0x6c) + 0x10);
  }
  else {
    piVar18 = *(int **)(this + 0x94);
    (**(code **)(*piVar18 + 0x14))
              (piVar18,*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) - piVar18[4] / 2);
    iVar23 = *(int *)(*(int *)(this + 0x6c) + 0xc);
    iVar3 = *(int *)(*(int *)(this + 0x6c) + 0x10);
  }
  ScreenElement::setSize((ScreenElement *)this,iVar23,iVar3);
  String::~String(aSStack_58);
  return this;
}


