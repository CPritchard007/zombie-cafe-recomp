/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021b4f8 RecipeUnlockedDialog::RecipeUnlockedDialog */

/* RecipeUnlockedDialog::RecipeUnlockedDialog(int, int) */

RecipeUnlockedDialog * __thiscall
RecipeUnlockedDialog::RecipeUnlockedDialog(RecipeUnlockedDialog *this,int param_1,int param_2)

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
  ZCImageButton *pZVar10;
  BitmapTextElement *pBVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  code *pcVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  RecipeUnlockedDialog *pRVar19;
  int *piVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar27;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar26 = DAT_0021b8e0;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar26 = iVar26 + 0x21b510;
  *(int *)this = *(int *)(iVar26 + DAT_0021b8e4) + 8;
  iVar3 = CapcomApp::getInstance();
  uVar22 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = CapcomApp::getInstance();
  iVar3 = *(int *)(iVar3 + 4);
  *(int *)(this + 0x98) = iVar3;
  *(int *)(this + 0x60) = param_1;
  *(int *)(this + 100) = param_2;
  pCVar7 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar3 + 0x7f0),2,false);
  pIVar8 = (ImageElement *)operator_new(0x98);
  uVar4 = __mulsf3(uVar22,uVar4);
  uVar5 = __mulsf3(uVar5,uVar6);
  uVar1 = __addsf3(uVar4,uVar4);
  bVar2 = (bool)__addsf3(uVar5,uVar5);
  ImageElement::ImageElement(pIVar8,pCVar7,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 0x68) = pIVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar8);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x68) + 0xc),
             *(int *)(*(int *)(this + 0x68) + 0x10));
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x98) + DAT_0021b8e8),0x4c,false)
  ;
  pIVar8 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar8,pCVar7,extraout_s0_00,extraout_s1_00,(uchar)uVar4,SUB41(uVar5,0));
  *(ImageElement **)(this + 0x70) = pIVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar8);
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x98) + DAT_0021b8e8),0x28,false)
  ;
  pIVar8 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar8,pCVar7,extraout_s0_01,extraout_s1_01,(uchar)uVar4,SUB41(uVar5,0));
  *(ImageElement **)(this + 0x6c) = pIVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar8);
  pSVar9 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar9,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x78) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  Vector<String>::elementAt((int)aSStack_40);
  iVar18 = *(int *)(this + 0x98);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_0021b8f0 + 0x21b65c) + 0x136) * 4 + iVar18);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_40,uVar5,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x7c) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_40);
  Vector<String>::elementAt((int)aSStack_38);
  iVar18 = *(int *)(this + 0x98);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_0021b8f8 + iVar3 * 4 + 0x21b6d6) + 0x136) * 4 + iVar18);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  puVar13 = *(undefined4 **)(iVar26 + DAT_0021b8fc);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_38,uVar5,*puVar13,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x80) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_38);
  Recipe::getFullName((char)&stack0xffffffec + 0xe4);
  iVar18 = *(int *)(this + 0x98);
  iVar3 = SmDev();
  uVar22 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_0021b900 + 0x21b730) + 0x136) * 4 + iVar18);
  iVar18 = *(int *)(this + 0xc);
  iVar3 = *(int *)(*(int *)(this + 0x70) + 0xc);
  puVar14 = *(undefined4 **)(iVar26 + DAT_0021b904);
  uVar6 = *puVar14;
  SmDev();
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  uVar5 = __floatsisf(iVar18 - iVar3);
  uVar6 = __floatsisf(uVar6);
  uVar6 = __mulsf3(uVar6,uVar4);
  __subsf3(uVar5,uVar6);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement((BitmapTextElement *)pSVar9,aSStack_30,uVar22,0xffffffff);
  *(ScreenElement **)(this + 0x84) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_30);
  String::String(aSStack_28,0);
  iVar18 = *(int *)(this + 0x98);
  iVar3 = SmDev();
  uVar6 = *puVar14;
  uVar22 = *(undefined4 *)((*(int *)(DAT_0021b90c + iVar3 * 4 + 0x21b7f8) + 0x136) * 4 + iVar18);
  iVar18 = *(int *)(this + 0xc);
  iVar3 = *(int *)(*(int *)(this + 0x70) + 0xc);
  SmDev();
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  uVar23 = *puVar13;
  uVar5 = __floatsisf(iVar18 - iVar3);
  uVar6 = __floatsisf(uVar6);
  uVar4 = __mulsf3(uVar6,uVar4);
  __subsf3(uVar5,uVar4);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement((BitmapTextElement *)pSVar9,aSStack_28,uVar22,uVar23);
  *(ScreenElement **)(this + 0x8c) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_28);
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x98) + DAT_0021b8e8),10,false);
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\x12',pCVar7,(CImage *)0x0,0,0,false);
  pRVar19 = this + 0x90;
  *(ZCImageButton **)pRVar19 = pZVar10;
  uVar27 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale(*(ImageButton **)pRVar19,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
  pcVar15 = *(code **)(**(int **)pRVar19 + 0x2c);
  Vector<String>::elementAt((int)aSStack_20);
  iVar18 = *(int *)(this + 0x98);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_0021bc94 + iVar3 * 4 + 0x21b95c) + 0x136) * 4 + iVar18);
  iVar3 = *(int *)(this + 0x90);
  uVar4 = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = *(undefined4 *)(iVar3 + 0xc);
  pBVar11 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar11,aSStack_20,uVar5,0xffffffff,0,0,0,uVar6,uVar4,9,0,0);
  *(BitmapTextElement **)(this + 0x88) = pBVar11;
  (*pcVar15)(iVar3);
  String::~String(aSStack_20);
  *(undefined1 *)(*(int *)(this + 0x88) + 0x7f) = 0x12;
  calculateUnlockReward(this);
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x98) + DAT_0021bc98),0x7f,false)
  ;
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'$',pCVar7,(CImage *)0x0,0,0,false);
  pRVar19 = this + 0x94;
  *(ZCImageButton **)pRVar19 = pZVar10;
  uVar27 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale(*(ImageButton **)pRVar19,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
  (**(code **)(**(int **)pRVar19 + 0x20))(*(int **)pRVar19,0);
  (**(code **)(**(int **)(this + 0x68) + 0x14))(*(int **)(this + 0x68),0,0);
  piVar20 = *(int **)(this + 0x7c);
  iVar24 = *(int *)(this + 0xc);
  pcVar15 = *(code **)(*piVar20 + 0x14);
  piVar16 = *(int **)(iVar26 + DAT_0021bc9c);
  iVar18 = *piVar16;
  iVar3 = SmDev();
  (*pcVar15)(piVar20,iVar24 / 2,*(undefined4 *)(iVar3 * 4 + iVar18));
  (**(code **)(**(int **)(this + 0x78) + 0x18))(*(int **)(this + 0x78),300,3);
  (**(code **)(**(int **)(this + 0x78) + 0x1c))(*(int **)(this + 0x78),0x11);
  *(undefined4 *)(*(int *)(this + 0x78) + 0x18) = 0xffffffff;
  (**(code **)(**(int **)(this + 0x78) + 0x14))
            (*(int **)(this + 0x78),*(int *)(this + 0xc) / 2,
             *(int *)(*(int *)(this + 0x7c) + 8) + *(int *)(*(int *)(this + 0x7c) + 0x10));
  piVar20 = *(int **)(this + 0x80);
  iVar18 = *(int *)(this + 0xc);
  pcVar15 = *(code **)(*piVar20 + 0x14);
  uVar4 = *(undefined4 *)(*(int *)(this + 0x7c) + 8);
  iVar3 = SmDev();
  uVar4 = __floatsisf(uVar4);
  __addsf3(uVar4,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar26 + DAT_0021bca0)));
  uVar4 = __fixsfsi();
  (*pcVar15)(piVar20,iVar18 / 2,uVar4);
  piVar20 = *(int **)(this + 0x70);
  iVar3 = (*(int *)(*(int *)(this + 0x68) + 0x10) -
          (*(int *)(*(int *)(this + 0x80) + 8) + *(int *)(*(int *)(this + 0x80) + 0x10))) -
          piVar20[4] >> 1;
  (**(code **)(*piVar20 + 0x14))(piVar20,iVar3,*(int *)(*(int *)(this + 0x68) + 0x10) - iVar3);
  pcVar15 = *(code **)(**(int **)(this + 0x6c) + 0x14);
  iVar25 = *(int *)(*(int *)(this + 0x70) + 4);
  iVar3 = SmDev();
  iVar3 = *(int *)(iVar3 * 4 + *(int *)(iVar26 + DAT_0021bca4));
  iVar18 = SmDev();
  iVar21 = *(int *)(iVar18 * 4 + *(int *)(iVar26 + DAT_0021bca8));
  iVar12 = *(int *)(*(int *)(this + 0x70) + 8);
  iVar17 = *(int *)(*(int *)(this + 0x70) + 0x10);
  iVar18 = SmDev();
  iVar24 = *(int *)(*(int *)(this + 0x6c) + 0x10);
  (*pcVar15)(*(int *)(this + 0x6c),iVar25 + iVar3 + iVar21 / 2,
             ((iVar12 - iVar17) + *(int *)(iVar18 * 4 + *(int *)(iVar26 + DAT_0021bcac))) -
             ((int)(((uint)(iVar24 >> 0x1f) >> 0x1e) + iVar24) >> 2));
  piVar20 = *(int **)(this + 0x84);
  iVar3 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x70),
                     *(int *)(*(ScreenElement **)(this + 0x70) + 0xc),0);
  (**(code **)(*piVar20 + 0x14))(piVar20,iVar3 >> 0x10,(int)(short)iVar3);
  *(undefined1 *)(*(int *)(this + 0x84) + 0x7f) = 0x11;
  iVar3 = *(int *)(this + 0x84);
  piVar20 = *(int **)(this + 0x8c);
  uVar5 = *(undefined4 *)(iVar3 + 4);
  iVar12 = *(int *)(iVar3 + 8);
  iVar18 = *(int *)(iVar3 + 0x10);
  pcVar15 = *(code **)(*piVar20 + 0x14);
  iVar24 = **(int **)(iVar26 + DAT_0021bcb0);
  iVar3 = SmDev();
  uVar4 = __floatsisf(iVar12 + iVar18 + (iVar24 >> 1));
  __addsf3(uVar4,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar26 + DAT_0021bcb4)));
  uVar4 = __fixsfsi();
  (*pcVar15)(piVar20,uVar5,uVar4);
  *(undefined1 *)(*(int *)(this + 0x8c) + 0x7f) = 0x11;
  setRecipeImage(this,param_1);
  piVar20 = *(int **)(this + 0x94);
  iVar24 = *(int *)(this + 0xc);
  pcVar15 = *(code **)(*piVar20 + 0x14);
  iVar3 = SmDev();
  iVar18 = *(int *)(this + 0x10);
  iVar3 = *(int *)(iVar3 * 4 + *(int *)(iVar26 + DAT_0021bcb8));
  iVar12 = *piVar16;
  iVar26 = SmDev();
  (*pcVar15)(piVar20,iVar24 - iVar3,iVar18 - *(int *)(iVar26 * 4 + iVar12));
  iVar26 = SmDev();
  if ((iVar26 == 0) || (iVar26 = SmDev(), iVar26 == 5)) {
    piVar20 = *(int **)(this + 0x90);
    (**(code **)(*piVar20 + 0x14))(piVar20,*(int *)(this + 0xc) / 2,*(undefined4 *)(this + 0x10));
    iVar26 = *(int *)(*(int *)(this + 0x68) + 0xc);
    iVar3 = *(int *)(*(int *)(this + 0x90) + 0x10) / 2 + *(int *)(*(int *)(this + 0x68) + 0x10);
  }
  else {
    piVar20 = *(int **)(this + 0x90);
    (**(code **)(*piVar20 + 0x14))
              (piVar20,*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) - piVar20[4] / 2);
    iVar26 = *(int *)(*(int *)(this + 0x68) + 0xc);
    iVar3 = *(int *)(*(int *)(this + 0x68) + 0x10);
  }
  ScreenElement::setSize((ScreenElement *)this,iVar26,iVar3);
  *(undefined4 *)(this + 0x9c) = 0;
  return this;
}


