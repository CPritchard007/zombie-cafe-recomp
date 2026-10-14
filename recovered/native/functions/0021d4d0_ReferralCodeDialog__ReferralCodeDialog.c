/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021d4d0 ReferralCodeDialog::ReferralCodeDialog */

/* ReferralCodeDialog::ReferralCodeDialog() */

ReferralCodeDialog * __thiscall ReferralCodeDialog::ReferralCodeDialog(ReferralCodeDialog *this)

{
  int iVar1;
  int iVar2;
  CImage *pCVar3;
  ImageElement *pIVar4;
  ZCImageButton *pZVar5;
  int iVar6;
  ScreenElement *pSVar7;
  BitmapTextElement *pBVar8;
  CapcomTrueTypeFont *pCVar9;
  int iVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = DAT_0021d874 + 0x21d4de;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar1 + DAT_0021d878) + 8;
  String::String((String *)(this + 0x88));
  iVar2 = CapcomApp::getInstance();
  iVar6 = DAT_0021d87c;
  iVar10 = *(int *)(iVar2 + 4);
  *(int *)(this + 0x60) = iVar10;
  iVar2 = DAT_0021d880;
  if (*(int *)(iVar10 + iVar6) == 0) {
    pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar10 + DAT_0021d880),0x22,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\t',true);
    *(ImageElement **)(this + 100) = pIVar4;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    pCVar3 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),8,false);
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'\f',pCVar3,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x74) = pZVar5;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
    pCVar3 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0x10,false);
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'$',pCVar3,(CImage *)0x0,0,0,true);
  }
  else {
    pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar10 + 0x7f0),5,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\t',true);
    *(ImageElement **)(this + 100) = pIVar4;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    pCVar3 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar6),10,false);
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'\f',pCVar3,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x74) = pZVar5;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
    pCVar3 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar6),0x11,false);
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'$',pCVar3,(CImage *)0x0,0,0,true);
  }
  *(ZCImageButton **)(this + 0x78) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  String::String(aSStack_40,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar1 + DAT_0021d884) * 8));
  iVar2 = *(int *)(this + 0x60);
  iVar6 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(iVar6 * 4 + DAT_0021d888 + 0x21d648) + 0x136) * 4 + iVar2);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,aSStack_40,uVar13,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x68) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_40);
  pcVar11 = *(code **)(**(int **)(this + 0x74) + 0x2c);
  String::String(aSStack_38,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar1 + DAT_0021d88c) * 8));
  iVar2 = *(int *)(this + 0x60);
  iVar6 = SmDev();
  uVar12 = *(undefined4 *)((*(int *)(DAT_0021d890 + iVar6 * 4 + 0x21d6ce) + 0x136) * 4 + iVar2);
  iVar6 = *(int *)(this + 0x74);
  uVar13 = *(undefined4 *)(iVar6 + 0x10);
  uVar14 = *(undefined4 *)(iVar6 + 0xc);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_38,uVar12,0xffffffff,0,0,0,uVar14,uVar13,9,0,0);
  *(BitmapTextElement **)(this + 0x7c) = pBVar8;
  (*pcVar11)(iVar6,pBVar8);
  String::~String(aSStack_38);
  *(undefined1 *)(*(int *)(this + 0x7c) + 0x7f) = 0x12;
  pcVar11 = *(code **)(**(int **)(this + 0x78) + 0x2c);
  String::String(aSStack_30,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar1 + DAT_0021d894) * 8));
  iVar2 = *(int *)(this + 0x60);
  iVar6 = SmDev();
  iVar10 = *(int *)(this + 0x78);
  uVar13 = *(undefined4 *)(iVar10 + 0x10);
  uVar12 = *(undefined4 *)((*(int *)(DAT_0021d898 + iVar6 * 4 + 0x21d758) + 0x136) * 4 + iVar2);
  uVar14 = *(undefined4 *)(iVar10 + 0xc);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_30,uVar12,0xffffffff,0,0,0,uVar14,uVar13,9,0,0);
  *(BitmapTextElement **)(this + 0x80) = pBVar8;
  (*pcVar11)(iVar10,pBVar8);
  String::~String(aSStack_30);
  *(undefined1 *)(*(int *)(this + 0x80) + 0x7f) = 0x12;
  pSVar7 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar7,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x6c) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  (**(code **)(**(int **)(this + 0x6c) + 0x1c))(*(int **)(this + 0x6c),0x14);
  String::String(aSStack_28,*(String **)(iVar1 + DAT_0021d89c));
  iVar6 = SmDev();
  uVar13 = *(undefined4 *)(iVar6 * 4 + *(int *)(iVar1 + DAT_0021d8a0));
  pCVar9 = (CapcomTrueTypeFont *)operator_new(0x160);
  uVar13 = __floatunsisf(uVar13);
  CapcomTrueTypeFont::CapcomTrueTypeFont(pCVar9,aSStack_28,0,uVar13);
  *(CapcomTrueTypeFont **)(this + 0x84) = pCVar9;
  String::~String(aSStack_28);
  String::String(aSStack_20,(char *)(DAT_0021d8a4 + 0x21d804));
  String::operator=((String *)(this + 0x88),aSStack_20);
  String::~String(aSStack_20);
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  this[0x14] = (ReferralCodeDialog)0x0;
  layout();
  return this;
}


