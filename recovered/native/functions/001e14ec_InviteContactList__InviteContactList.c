/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e14ec InviteContactList::InviteContactList */

/* InviteContactList::InviteContactList() */

InviteContactList * __thiscall InviteContactList::InviteContactList(InviteContactList *this)

{
  void *__s;
  int iVar1;
  CImage *pCVar2;
  ImageElement *this_00;
  int iVar3;
  ScreenElement *pSVar4;
  ZCImageButton *pZVar5;
  BitmapTextElement *pBVar6;
  PackedImage *this_01;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  float extraout_s0;
  float extraout_s1;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_001e18ac + 0x1e1502) + 8;
  *(undefined4 *)(this + 0xa4) = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 0xac) = __s;
  memset(__s,0,*(int *)(this + 0xa4) << 2);
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  iVar1 = CapcomApp::getInstance();
  iVar3 = DAT_001e18b0;
  iVar1 = *(int *)(iVar1 + 4);
  *(int *)(this + 100) = iVar1;
  *(undefined4 *)(this + 0x60) = 0;
  iVar11 = *(int *)(iVar1 + iVar3);
  pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar1 + 0x7f0),2,false);
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar2,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x74) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  String::String(aSStack_28,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 100) + 0x4b0) + 8) +
                 **(int **)(DAT_001e18b4 + 0x1e1574) * 8));
  iVar1 = *(int *)(this + 100);
  iVar3 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_001e18b8 + 0x1e1590) + 0x136) * 4 + iVar1);
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_28,uVar9,**(undefined4 **)(DAT_001e18bc + 0x1e15a8)
             ,1,1,0,0,0,0x11,0,0);
  *(ScreenElement **)(this + 0x78) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_28);
  iVar3 = DAT_001e18c0;
  bVar13 = iVar11 == 0;
  if (bVar13) {
    pCVar2 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + DAT_001e18c0),8,false);
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'\x14',pCVar2,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x8c) = pZVar5;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
    pCVar2 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + iVar3),6,false);
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'!',pCVar2,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x80) = pZVar5;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
    pCVar2 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + iVar3),1,false);
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'\x11',pCVar2,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x84) = pZVar5;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
    pCVar2 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + iVar3),2,false);
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'\x11',pCVar2,(CImage *)0x0,0,0,true);
  }
  else {
    pCVar2 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + DAT_001e18b0),10,bVar13)
    ;
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'\x14',pCVar2,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x8c) = pZVar5;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
    pCVar2 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + DAT_001e18b0),6,false);
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'!',pCVar2,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x80) = pZVar5;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
    pCVar2 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + DAT_001e18b0),3,false);
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'\x11',pCVar2,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x84) = pZVar5;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
    pCVar2 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + DAT_001e18b0),0,false);
    pZVar5 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar5,'\x11',pCVar2,(CImage *)0x0,0,0,true);
  }
  *(ZCImageButton **)(this + 0x88) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  pcVar7 = *(code **)(**(int **)(this + 0x8c) + 0x2c);
  String::String(aSStack_20,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 100) + 0x4b0) + 8) +
                 **(int **)(DAT_001e18c4 + 0x1e17a4) * 8));
  iVar1 = *(int *)(this + 100);
  iVar3 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001e18c8 + iVar3 * 4 + 0x1e17d6) + 0x136) * 4 + iVar1);
  iVar3 = *(int *)(this + 0x8c);
  uVar9 = *(undefined4 *)(iVar3 + 0x10);
  uVar12 = *(undefined4 *)(iVar3 + 0xc);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_20,uVar8,0xffffffff,0,0,0,uVar12,uVar9,9,0,0);
  *(BitmapTextElement **)(this + 0x7c) = pBVar6;
  (*pcVar7)(iVar3,pBVar6);
  String::~String(aSStack_20);
  *(undefined1 *)(*(int *)(this + 0x7c) + 0x7f) = 0x12;
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x90) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  piVar10 = *(int **)(this + 0x90);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x94) = pSVar4;
  (*pcVar7)(piVar10,pSVar4);
  iVar3 = DAT_001e18c0;
  if (bVar13) {
    uVar9 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + DAT_001e18c0),7,false);
    *(undefined4 *)(this + 0x70) = uVar9;
    iVar1 = 0x21;
    this_01 = *(PackedImage **)(*(int *)(this + 100) + iVar3);
  }
  else {
    uVar9 = PackedImage::getImage
                      (*(PackedImage **)(*(int *)(this + 100) + DAT_001e18b0),0x8b,bVar13);
    iVar3 = DAT_001e18b0;
    *(undefined4 *)(this + 0x70) = uVar9;
    this_01 = *(PackedImage **)(*(int *)(this + 100) + iVar3);
    iVar1 = 0x8c;
  }
  uVar9 = PackedImage::getImage(this_01,iVar1,false);
  *(undefined4 *)(this + 0x6c) = uVar9;
  layout(this);
  this[0x14] = (InviteContactList)0x0;
  return this;
}


