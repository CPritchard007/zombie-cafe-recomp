/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025537c TombstoneCommandBar::TombstoneCommandBar */

/* TombstoneCommandBar::TombstoneCommandBar(ConfirmDialog*, BuyToxinDialog*, NoticeDialog*) */

TombstoneCommandBar * __thiscall
TombstoneCommandBar::TombstoneCommandBar
          (TombstoneCommandBar *this,ConfirmDialog *param_1,BuyToxinDialog *param_2,
          NoticeDialog *param_3)

{
  CImage *pCVar1;
  ImageElement *pIVar2;
  undefined4 uVar3;
  ScreenElement *pSVar4;
  int *piVar5;
  ZCImageButton *pZVar6;
  BitmapTextElement *pBVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  TombstoneCommandBar *pTVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar16 = DAT_0025572c;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar16 = iVar16 + 0x255396;
  iVar8 = *(int *)(iVar16 + DAT_00255730);
  *(ConfirmDialog **)(this + 0x6c) = param_1;
  *(BuyToxinDialog **)(this + 0x70) = param_2;
  *(int *)this = iVar8 + 8;
  *(NoticeDialog **)(this + 0x74) = param_3;
  iVar8 = CapcomApp::getInstance();
  iVar8 = *(int *)(iVar8 + 4);
  *(int *)(this + 0x68) = iVar8;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  this[0x9c] = (TombstoneCommandBar)0x0;
  *(undefined4 *)(this + 0x80) = 0;
  pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar8 + DAT_00255734),0x1a,false);
  pIVar2 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar2,pCVar1,'\f',true);
  *(ImageElement **)(this + 0x7c) = pIVar2;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar2);
  String::String(aSStack_30,0);
  iVar12 = *(int *)(this + 0x68);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(iVar8 * 4 + DAT_00255738 + 0x2553f8) + 0x136) * 4 + iVar12);
  iVar8 = SmDev();
  uVar3 = *(undefined4 *)(iVar8 * 4 + *(int *)(iVar16 + DAT_0025573c));
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  uVar18 = 1;
  uVar17 = 0;
  uVar19 = 0;
  uVar3 = __fixsfsi(uVar3);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_30,uVar9,0xffffffff,uVar17,uVar18,uVar19,uVar3,0,9,
             0,0);
  *(ScreenElement **)(this + 0x84) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_30);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),1);
  String::String(aSStack_28,0);
  iVar12 = *(int *)(this + 0x68);
  iVar8 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_00255740 + iVar8 * 4 + 0x25548e) + 0x136) * 4 + iVar12);
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_28,uVar3,DAT_00255744,0,1,9,0,0);
  *(ScreenElement **)(this + 0x88) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_28);
  piVar5 = *(int **)(this + 0x88);
  (**(code **)(*piVar5 + 0x20))(piVar5,1);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + DAT_00255734),6,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'!',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x60) = pZVar6;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar6);
  iVar8 = SmDev();
  if ((iVar8 == 0) || (iVar8 = SmDev(), iVar8 == 5)) {
    ScreenElement::setSize
              ((ScreenElement *)this,
               (*(int *)(*(int *)(this + 0x60) + 0xc) >> 1) + *(int *)(*(int *)(this + 0x7c) + 0xc),
               (*(int *)(*(int *)(this + 0x60) + 0x10) >> 1) +
               *(int *)(*(int *)(this + 0x7c) + 0x10));
    (**(code **)(**(int **)(this + 0x60) + 0x14))
              (*(int **)(this + 0x60),*(undefined4 *)(this + 0xc),0);
    iVar12 = *(int *)(this + 0x7c);
    *(int *)(this + 0xc) = *(int *)(iVar12 + 0xc) + (*(int *)(*(int *)(this + 0x60) + 0xc) >> 1);
    iVar8 = *(int *)(*(int *)(this + 0x60) + 0x10);
  }
  else {
    ScreenElement::setSize
              ((ScreenElement *)this,*(int *)(*(int *)(this + 0x7c) + 0xc),
               *(int *)(*(int *)(this + 0x7c) + 0x10));
    (**(code **)(**(int **)(this + 0x60) + 0x14))
              (*(int **)(this + 0x60),*(undefined4 *)(this + 0xc),0);
    iVar12 = *(int *)(this + 0x7c);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(iVar12 + 0xc);
    iVar8 = *(int *)(*(int *)(this + 0x60) + 0xc);
  }
  *(int *)(this + 0x10) = *(int *)(iVar12 + 0x10) + (iVar8 >> 1);
  (**(code **)(**(int **)(this + 0x7c) + 0x14))
            (*(int **)(this + 0x7c),0,*(undefined4 *)(this + 0x10));
  iVar12 = *(int *)(this + 0xc);
  iVar10 = *(int *)(*(int *)(this + 0x60) + 0xc);
  iVar8 = SmDev();
  uVar3 = *(undefined4 *)(iVar8 * 4 + *(int *)(iVar16 + DAT_00255748));
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + DAT_00255734),0xd4,false)
  ;
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'!',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 100) = pZVar6;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar6);
  pcVar11 = *(code **)(**(int **)(this + 100) + 0x14);
  iVar13 = **(int **)(iVar16 + DAT_0025574c);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)(iVar8 * 4 + iVar13);
  iVar8 = SmDev();
  uVar9 = __floatsisf(uVar9);
  __addsf3(uVar9,*(undefined4 *)(iVar8 * 4 + *(int *)(iVar16 + DAT_00255750)));
  iVar8 = __fixsfsi();
  iVar13 = *(int *)(this + 100);
  iVar15 = *(int *)(this + 0x10) - *(int *)(iVar13 + 0x10);
  uVar9 = __floatsisf(iVar12 - iVar10);
  __subsf3(uVar9,uVar3);
  uVar3 = __fixsfsi();
  if (iVar15 < iVar8) {
    iVar8 = iVar15;
  }
  (*pcVar11)(iVar13,uVar3,iVar8);
  piVar5 = *(int **)(this + 100);
  pcVar11 = *(code **)(*piVar5 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + DAT_00255734),0x24,false)
  ;
  pIVar2 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar2,pCVar1,0,'\t',false);
  *(ImageElement **)(this + 0x8c) = pIVar2;
  (*pcVar11)(piVar5,pIVar2);
  piVar5 = *(int **)(this + 100);
  pcVar11 = *(code **)(*piVar5 + 0x2c);
  String::String(aSStack_20,0);
  iVar12 = *(int *)(this + 0x68);
  iVar8 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_00255754 + iVar8 * 4 + 0x25569c) + 0x136) * 4 + iVar12);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar7,aSStack_20,uVar3,0xff000000,0xffffffff,1,1,0xc,0,0);
  pTVar14 = this + 0x90;
  *(BitmapTextElement **)pTVar14 = pBVar7;
  (*pcVar11)(piVar5,pBVar7);
  String::~String(aSStack_20);
  (**(code **)(**(int **)pTVar14 + 0x20))(*(int **)pTVar14,1);
  piVar5 = *(int **)pTVar14;
  iVar8 = *(int *)(iVar16 + DAT_0025575c);
  if (*(char *)(*(int *)(this + 0x68) + DAT_00255758) == '\0') {
    pcVar11 = *(code **)(*piVar5 + 0x14);
    iVar12 = SmDev();
    uVar3 = *(undefined4 *)(iVar8 + iVar12 * 4);
    iVar8 = SmDev();
    uVar3 = __fixsfsi(uVar3);
    uVar9 = __fixsfsi(*(undefined4 *)(iVar8 * 4 + *(int *)(iVar16 + DAT_00255760)));
    (*pcVar11)(piVar5,uVar3,uVar9);
  }
  else {
    pcVar11 = *(code **)(*piVar5 + 0x14);
    iVar16 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar8 + iVar16 * 4));
    (*pcVar11)(piVar5,uVar3,0x5a);
  }
  this[0x94] = (TombstoneCommandBar)0x64;
  return this;
}


