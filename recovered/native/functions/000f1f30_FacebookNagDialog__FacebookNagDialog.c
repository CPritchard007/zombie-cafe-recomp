/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f1f30 FacebookNagDialog::FacebookNagDialog */

/* FacebookNagDialog::FacebookNagDialog() */

FacebookNagDialog * __thiscall FacebookNagDialog::FacebookNagDialog(FacebookNagDialog *this)

{
  int iVar1;
  CImage *this_00;
  CImage *this_01;
  undefined4 uVar2;
  undefined4 uVar3;
  ImageElement *this_02;
  int iVar4;
  BitmapTextElement *pBVar5;
  uint uVar6;
  ZCImageButton *pZVar7;
  ScreenElement *pSVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  int iVar23;
  undefined4 *puVar24;
  int *piVar25;
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar23 = DAT_000f2308;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar23 = iVar23 + 0xf1f44;
  *(int *)this = *(int *)(iVar23 + DAT_000f230c) + 8;
  iVar1 = CapcomApp::getInstance();
  iVar4 = DAT_000f2310;
  iVar1 = *(int *)(iVar1 + 4);
  *(int *)(this + 0x60) = iVar1;
  this_00 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar1 + iVar4),0x1f,false);
  this_01 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar4),8,false);
  uVar2 = CImage::getWidth(this_00);
  uVar3 = CImage::getHeight(this_00);
  uVar12 = **(undefined4 **)(iVar23 + DAT_000f2314);
  this_02 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_02,this_00,'\f',true);
  *(ImageElement **)(this + 0x88) = this_02;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_02);
  String::String(aSStack_48,(char *)(DAT_000f2318 + 0xf1fac));
  iVar1 = *(int *)(this + 0x60);
  iVar4 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(iVar4 * 4 + DAT_000f231c + 0xf1fbc) + 0x136) * 4 + iVar1);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  uVar3 = __floatsisf(uVar3);
  uVar3 = __mulsf3(uVar3,0x3f000000);
  uVar12 = __floatsisf(uVar12);
  __addsf3(uVar3,uVar12);
  uVar6 = __fixsfsi();
  uVar2 = __floatsisf(uVar2);
  __mulsf3(uVar2,0x3f000000);
  iVar4 = __fixsfsi();
  uVar6 = uVar6 & 0xffff | iVar4 << 0x10;
  puVar9 = *(undefined4 **)(iVar23 + DAT_000f2320);
  puVar24 = *(undefined4 **)(iVar23 + DAT_000f2324);
  BitmapTextElement::BitmapTextElement
            (pBVar5,aSStack_48,uVar13,*puVar9,0,1,uVar6,*puVar24,0,0x12,0,0);
  *(BitmapTextElement **)(this + 0x70) = pBVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pBVar5);
  String::~String(aSStack_48);
  String::String(aSStack_40,(char *)(DAT_000f2328 + 0xf2052));
  iVar1 = *(int *)(this + 0x60);
  iVar4 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(iVar4 * 4 + DAT_000f232c + 0xf2064) + 0x136) * 4 + iVar1);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar5,aSStack_40,uVar2,*puVar9,0,1,uVar6,*puVar24,0,0x12,0,0);
  *(BitmapTextElement **)(this + 0x74) = pBVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pBVar5);
  String::~String(aSStack_40);
  String::String(aSStack_38,(char *)(DAT_000f2330 + 0xf20bc));
  iVar4 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_000f2334 + 0xf20d0) + 0x136) * 4 + iVar4);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar5,aSStack_38,uVar2,*puVar9,0,1,uVar6,*puVar24,0,0x12,0,0);
  *(BitmapTextElement **)(this + 0x78) = pBVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pBVar5);
  String::~String(aSStack_38);
  (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),0);
  (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),0);
  iVar14 = **(int **)(iVar23 + DAT_000f2338);
  iVar15 = **(int **)(iVar23 + DAT_000f233c);
  iVar16 = **(int **)(iVar23 + DAT_000f2340);
  iVar17 = **(int **)(iVar23 + DAT_000f2344);
  iVar18 = **(int **)(iVar23 + DAT_000f2348);
  iVar19 = **(int **)(iVar23 + DAT_000f234c);
  iVar4 = CImage::getWidth(this_01);
  iVar1 = CImage::getHeight(this_01);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  uVar20 = uVar6 & 0xffff;
  uVar6 = uVar6 >> 0x10;
  uVar21 = (uVar6 + iVar14) * 0x10000 | uVar20 + iVar15 & 0xffff;
  ZCImageButton::ZCImageButton(pZVar7,uVar21,iVar4,iVar1,'\x12',this_01,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 100) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  iVar4 = CImage::getWidth(this_01);
  iVar1 = CImage::getHeight(this_01);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  uVar10 = uVar6 + iVar16;
  uVar11 = uVar10 * 0x10000 | uVar20 + iVar17 & 0xffff;
  ZCImageButton::ZCImageButton(pZVar7,uVar11,iVar4,iVar1,'\x12',this_01,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x68) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  iVar4 = CImage::getWidth(this_01);
  iVar1 = CImage::getHeight(this_01);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  uVar6 = (uVar6 + iVar18) * 0x10000 | uVar20 + iVar19 & 0xffff;
  ZCImageButton::ZCImageButton(pZVar7,uVar6,iVar4,iVar1,'\x12',this_01,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x6c) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  String::String(aSStack_30,(char *)(DAT_000f2350 + 0xf2274));
  piVar25 = *(int **)(iVar23 + DAT_000f2354);
  iVar4 = *piVar25;
  piVar22 = *(int **)(iVar23 + DAT_000f2358);
  iVar1 = *piVar22;
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  puVar9 = *(undefined4 **)(iVar23 + DAT_000f235c);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_30,
             *(undefined4 *)(*(int *)(this + 0x60) + DAT_000f2360),*puVar9,1,1,
             ((uVar21 >> 0x10) + iVar4) * 0x10000 | uVar21 + iVar1 & 0xffff,0,0,0x12,0,0,piVar22,
             uVar6,uVar21 + iVar1);
  *(ScreenElement **)(this + 0x7c) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_30);
  String::String(aSStack_28,(char *)(DAT_000f2364 + 0xf22f2));
  iVar23 = *piVar25;
  iVar4 = *piVar22;
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_28,
             *(undefined4 *)(*(int *)(this + 0x60) + DAT_000f24d8),*puVar9,1,1,
             uVar11 + iVar4 & 0xffff | ((uVar10 & 0xffff) + iVar23) * 0x10000,0,0,0x12,0,0);
  *(ScreenElement **)(this + 0x80) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_28);
  String::String(aSStack_20,(char *)(DAT_000f24dc + 0xf23c4));
  iVar23 = *piVar25;
  iVar4 = *piVar22;
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_20,
             *(undefined4 *)(*(int *)(this + 0x60) + DAT_000f24d8),*puVar9,1,1,
             uVar6 + iVar4 & 0xffff | ((uVar6 >> 0x10) + iVar23) * 0x10000,0,0,0x12,0,0);
  *(ScreenElement **)(this + 0x84) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  iVar23 = *(int *)(this + 0x88);
  ScreenElement::setSize((ScreenElement *)this,*(int *)(iVar23 + 0xc),*(int *)(iVar23 + 0x10));
  piVar22 = *(int **)(this + 0x88);
  (**(code **)(*piVar22 + 0x14))(piVar22,0,*(undefined4 *)(this + 0x10));
  return this;
}


