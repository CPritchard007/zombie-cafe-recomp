/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00218ccc RecipeSortDialog::RecipeSortDialog */

/* RecipeSortDialog::RecipeSortDialog(RecipeBook*) */

RecipeSortDialog * __thiscall
RecipeSortDialog::RecipeSortDialog(RecipeSortDialog *this,RecipeBook *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CImage *pCVar3;
  ImageElement *this_00;
  ZCImageButton *pZVar4;
  ScreenElement *pSVar5;
  int iVar6;
  uchar uVar7;
  uchar uVar8;
  int *piVar9;
  code *pcVar10;
  float extraout_s0;
  float extraout_s1;
  undefined4 uVar11;
  undefined4 uVar12;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_00218d14 + 0x218ce0) + 8;
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  *(RecipeBook **)(this + 0x60) = param_1;
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 100) = *(undefined4 *)(iVar1 + 4);
  iVar1 = SmDev();
  if ((iVar1 == 0) || (iVar1 = SmDev(), iVar1 == 1)) {
    uVar7 = (uchar)DAT_00218d18;
    uVar8 = uVar7;
  }
  else {
    uVar8 = (uchar)DAT_002190fc;
    uVar7 = (uchar)DAT_00219100;
  }
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + 0x7f0),2,false);
  this_00 = (ImageElement *)operator_new(0x98);
  uVar11 = 9;
  uVar12 = 1;
  ImageElement::ImageElement(this_00,pCVar3,extraout_s0,extraout_s1,uVar7,(bool)uVar8);
  *(ImageElement **)(this + 0x68) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  (**(code **)(*(int *)this + 0x18))
            (this,(int)*(short *)(*(int *)(this + 0x68) + 0xc),
             (int)*(short *)(*(int *)(this + 0x68) + 0x10),*(code **)(*(int *)this + 0x18),uVar11,
             uVar12);
  iVar6 = *(int *)(*(int *)(this + 100) + 0x14);
  iVar1 = SmDev();
  uVar11 = __floatsisf(*(undefined4 *)(iVar1 * 4 + DAT_00219104 + 0x218d82));
  __mulsf3(uVar11,uVar2);
  iVar1 = __fixsfsi();
  ScreenElement::setPosition((ScreenElement *)this,iVar6 >> 0x10,iVar1);
  iVar1 = DAT_00219108;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + DAT_00219108),6,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'!',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x70) = pZVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar4);
  (**(code **)(**(int **)(this + 0x70) + 0x14))
            (*(int **)(this + 0x70),*(undefined4 *)(this + 0xc),0);
  uVar11 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + iVar1),10,false);
  *(undefined4 *)(this + 0x9c) = uVar11;
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',*(CImage **)(this + 0x9c),(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x74) = pZVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar4);
  piVar9 = *(int **)(this + 0x74);
  pcVar10 = *(code **)(*piVar9 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x68) + 0xc);
  iVar1 = SmDev();
  uVar11 = __floatsisf(*(undefined4 *)(DAT_0021910c + iVar1 * 4 + 0x218e44));
  __mulsf3(uVar11,uVar2);
  uVar11 = __fixsfsi();
  (*pcVar10)(piVar9,iVar6 / 2,uVar11);
  String::String(aSStack_40,(char *)(DAT_00219110 + 0x218e4c));
  iVar6 = *(int *)(this + 100);
  iVar1 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_00219114 + iVar1 * 4 + 0x218e8c) + 0x136) * 4 + iVar6);
  pSVar5 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar5,aSStack_40,uVar11,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x88) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String(aSStack_40);
  piVar9 = *(int **)(this + 0x88);
  (**(code **)(*piVar9 + 0x14))
            (piVar9,*(undefined4 *)(*(int *)(this + 0x74) + 4),
             *(undefined4 *)(*(int *)(this + 0x74) + 8));
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',*(CImage **)(this + 0x9c),(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x78) = pZVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar4);
  piVar9 = *(int **)(this + 0x78);
  pcVar10 = *(code **)(*piVar9 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x68) + 0xc);
  iVar1 = SmDev();
  uVar11 = __floatsisf(*(undefined4 *)(DAT_00219118 + iVar1 * 4 + 0x218f38));
  __mulsf3(uVar11,uVar2);
  uVar11 = __fixsfsi();
  (*pcVar10)(piVar9,iVar6 / 2,uVar11);
  String::String(aSStack_38,(char *)(DAT_0021911c + 0x218f10));
  iVar6 = *(int *)(this + 100);
  iVar1 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_00219120 + iVar1 * 4 + 0x218f50) + 0x136) * 4 + iVar6);
  pSVar5 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar5,aSStack_38,uVar11,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x8c) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String(aSStack_38);
  piVar9 = *(int **)(this + 0x8c);
  (**(code **)(*piVar9 + 0x14))
            (piVar9,*(undefined4 *)(*(int *)(this + 0x78) + 4),
             *(undefined4 *)(*(int *)(this + 0x78) + 8));
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',*(CImage **)(this + 0x9c),(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x7c) = pZVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar4);
  piVar9 = *(int **)(this + 0x7c);
  pcVar10 = *(code **)(*piVar9 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x68) + 0xc);
  iVar1 = SmDev();
  uVar11 = __floatsisf(*(undefined4 *)(DAT_00219124 + iVar1 * 4 + 0x219014));
  __mulsf3(uVar11,uVar2);
  uVar11 = __fixsfsi();
  (*pcVar10)(piVar9,iVar6 / 2,uVar11);
  String::String(aSStack_30,(char *)(DAT_00219128 + 0x218fd4));
  iVar6 = *(int *)(this + 100);
  iVar1 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_0021912c + iVar1 * 4 + 0x219014) + 0x136) * 4 + iVar6);
  pSVar5 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar5,aSStack_30,uVar11,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x90) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String(aSStack_30);
  piVar9 = *(int **)(this + 0x90);
  (**(code **)(*piVar9 + 0x14))
            (piVar9,*(undefined4 *)(*(int *)(this + 0x7c) + 4),
             *(undefined4 *)(*(int *)(this + 0x7c) + 8));
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',*(CImage **)(this + 0x9c),(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x80) = pZVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar4);
  piVar9 = *(int **)(this + 0x80);
  pcVar10 = *(code **)(*piVar9 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x68) + 0xc);
  iVar1 = SmDev();
  uVar11 = __floatsisf(*(undefined4 *)(DAT_00219130 + iVar1 * 4 + 0x2190f2));
  __mulsf3(uVar11,uVar2);
  uVar11 = __fixsfsi();
  (*pcVar10)(piVar9,iVar6 / 2,uVar11);
  String::String(aSStack_28,(char *)(DAT_00219134 + 0x21909a));
  iVar6 = *(int *)(this + 100);
  iVar1 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_00219138 + iVar1 * 4 + 0x2190da) + 0x136) * 4 + iVar6);
  pSVar5 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar5,aSStack_28,uVar11,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x94) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String(aSStack_28);
  piVar9 = *(int **)(this + 0x94);
  (**(code **)(*piVar9 + 0x14))
            (piVar9,*(undefined4 *)(*(int *)(this + 0x80) + 4),
             *(undefined4 *)(*(int *)(this + 0x80) + 8));
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',*(CImage **)(this + 0x9c),(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x84) = pZVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar4);
  piVar9 = *(int **)(this + 0x84);
  pcVar10 = *(code **)(*piVar9 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x68) + 0xc);
  iVar1 = SmDev();
  uVar11 = __floatsisf(*(undefined4 *)(DAT_002192c8 + iVar1 * 4 + 0x219198));
  __mulsf3(uVar11,uVar2);
  uVar2 = __fixsfsi();
  (*pcVar10)(piVar9,iVar6 / 2,uVar2);
  String::String(aSStack_20,(char *)(DAT_002192cc + 0x2191a8));
  iVar6 = *(int *)(this + 100);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_002192d0 + iVar1 * 4 + 0x2191e8) + 0x136) * 4 + iVar6);
  pSVar5 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar5,aSStack_20,uVar2,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x98) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String(aSStack_20);
  piVar9 = *(int **)(this + 0x98);
  (**(code **)(*piVar9 + 0x14))
            (piVar9,*(undefined4 *)(*(int *)(this + 0x84) + 4),
             *(undefined4 *)(*(int *)(this + 0x84) + 8));
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + DAT_002192d4),2,false);
  *(undefined4 *)(this + 0xa0) = uVar2;
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',*(CImage **)(this + 0xa0),(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x6c) = pZVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar4);
  setArrowPosition(this,*(undefined4 *)(*(int *)(this + 0x60) + 0x16c));
  return this;
}


