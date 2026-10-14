/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f8314 NotificationOptions::NotificationOptions */

/* NotificationOptions::NotificationOptions() */

NotificationOptions * __thiscall NotificationOptions::NotificationOptions(NotificationOptions *this)

{
  int iVar1;
  CImage *pCVar2;
  ImageElement *this_00;
  ZCImageButton *pZVar3;
  ScreenElement *pSVar4;
  undefined4 uVar5;
  BitmapTextElement *pBVar6;
  char cVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  float extraout_s0;
  float extraout_s1;
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar8 = DAT_001f8694 + 0x1f8320;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar8 + DAT_001f8698) + 8;
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  *(int *)(this + 0x60) = iVar1;
  pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar1 + 0x7f0),2,false);
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar2,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x7c) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001f869c),6,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar3,'!',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x78) = pZVar3;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar3);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001f869c),1,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar3,'\x11',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x70) = pZVar3;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar3);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001f869c),2,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar3,'\x14',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x74) = pZVar3;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar3);
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x80) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  piVar10 = *(int **)(this + 0x80);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x84) = pSVar4;
  (*pcVar9)(piVar10,pSVar4);
  iVar1 = DAT_001f869c;
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001f869c),7,false);
  *(undefined4 *)(this + 0x68) = uVar5;
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar1),0x21,false);
  *(undefined4 *)(this + 100) = uVar5;
  uVar5 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar1),0x2c,false);
  *(undefined4 *)(this + 0x6c) = uVar5;
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_70,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_001f86a0) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_001f86a4 + 0x1f84a4) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  puVar12 = *(undefined4 **)(iVar8 + DAT_001f86a8);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_70,uVar5,*puVar12,1,1,0,0,0,9,0,0);
  *(BitmapTextElement **)(this + 0x88) = pBVar6;
  (*pcVar9)(piVar10,pBVar6);
  String::~String(aSStack_70);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  if (*(char *)(*(int *)(this + 0x60) + DAT_001f86ac) == '\0') {
    pCVar2 = *(CImage **)(this + 100);
  }
  else {
    pCVar2 = *(CImage **)(this + 0x68);
  }
  ZCImageButton::ZCImageButton(pZVar3,'!',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x8c) = pZVar3;
  (*pcVar9)(piVar10,pZVar3);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_68,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_001f86b0) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_001f86b4 + 0x1f856a) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_68,uVar5,*puVar12,1,1,0,0,0,9,0,0);
  *(BitmapTextElement **)(this + 0x90) = pBVar6;
  (*pcVar9)(piVar10,pBVar6);
  String::~String(aSStack_68);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  if (*(char *)(*(int *)(this + 0x60) + DAT_001f86b8) == '\0') {
    pCVar2 = *(CImage **)(this + 100);
  }
  else {
    pCVar2 = *(CImage **)(this + 0x68);
  }
  ZCImageButton::ZCImageButton(pZVar3,'!',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x94) = pZVar3;
  (*pcVar9)(piVar10,pZVar3);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_60,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_001f86bc) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_001f86c0 + 0x1f862a) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_60,uVar5,*puVar12,1,1,0,0,0,9,0,0);
  *(BitmapTextElement **)(this + 0x98) = pBVar6;
  (*pcVar9)(piVar10,pBVar6);
  String::~String(aSStack_60);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  if (*(char *)(*(int *)(this + 0x60) + DAT_001f86c4) == '\0') {
    pCVar2 = *(CImage **)(this + 100);
  }
  else {
    pCVar2 = *(CImage **)(this + 0x68);
  }
  ZCImageButton::ZCImageButton(pZVar3,'!',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x9c) = pZVar3;
  (*pcVar9)(piVar10,pZVar3);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_58,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_001f8a88) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_001f8a8c + 0x1f8720) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_58,uVar5,*puVar12,1,1,0,0,0,9,0,0);
  *(BitmapTextElement **)(this + 0xa0) = pBVar6;
  (*pcVar9)(piVar10,pBVar6);
  String::~String(aSStack_58);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  if (*(char *)(*(int *)(this + 0x60) + DAT_001f8a90) == '\0') {
    pCVar2 = *(CImage **)(this + 100);
  }
  else {
    pCVar2 = *(CImage **)(this + 0x68);
  }
  ZCImageButton::ZCImageButton(pZVar3,'!',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xa4) = pZVar3;
  (*pcVar9)(piVar10,pZVar3);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_50,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_001f8a94) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_001f8a98 + 0x1f87dc) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  puVar12 = *(undefined4 **)(iVar8 + DAT_001f8a9c);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_50,uVar5,*puVar12,1,1,0,0,0,9,0,0);
  *(BitmapTextElement **)(this + 0xa8) = pBVar6;
  (*pcVar9)(piVar10,pBVar6);
  String::~String(aSStack_50);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  if (*(char *)(*(int *)(this + 0x60) + DAT_001f8aa0) == '\0') {
    pCVar2 = *(CImage **)(this + 100);
  }
  else {
    pCVar2 = *(CImage **)(this + 0x68);
  }
  ZCImageButton::ZCImageButton(pZVar3,'!',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xac) = pZVar3;
  (*pcVar9)(piVar10,pZVar3);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_48,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_001f8aa4) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_001f8aa8 + 0x1f88a2) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_48,uVar5,*puVar12,1,1,0,0,0,9,0,0);
  *(BitmapTextElement **)(this + 0xb0) = pBVar6;
  (*pcVar9)(piVar10,pBVar6);
  String::~String(aSStack_48);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  if (*(char *)(*(int *)(this + 0x60) + DAT_001f8aac) == '\0') {
    pCVar2 = *(CImage **)(this + 100);
  }
  else {
    pCVar2 = *(CImage **)(this + 0x68);
  }
  ZCImageButton::ZCImageButton(pZVar3,'!',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xb4) = pZVar3;
  (*pcVar9)(piVar10,pZVar3);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_40,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_001f8ab0) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_001f8ab4 + 0x1f8962) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_40,uVar5,*puVar12,1,1,0,0,0,9,0,0);
  *(BitmapTextElement **)(this + 0xb8) = pBVar6;
  (*pcVar9)(piVar10,pBVar6);
  String::~String(aSStack_40);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  if (*(char *)(*(int *)(this + 0x60) + DAT_001f8ab8) == '\0') {
    pCVar2 = *(CImage **)(this + 100);
  }
  else {
    pCVar2 = *(CImage **)(this + 0x68);
  }
  ZCImageButton::ZCImageButton(pZVar3,'!',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xbc) = pZVar3;
  (*pcVar9)(piVar10,pZVar3);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_38,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_001f8abc) * 8));
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_001f8ac0 + 0x1f8a22) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_38,uVar5,*puVar12,1,1,0,0,0,9,0,0);
  *(BitmapTextElement **)(this + 0xc0) = pBVar6;
  (*pcVar9)(piVar10,pBVar6);
  String::~String(aSStack_38);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  if (*(char *)(*(int *)(this + 0x60) + DAT_001f8ac4) == '\0') {
    pCVar2 = *(CImage **)(this + 100);
  }
  else {
    pCVar2 = *(CImage **)(this + 0x68);
  }
  ZCImageButton::ZCImageButton(pZVar3,'!',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xc4) = pZVar3;
  (*pcVar9)(piVar10,pZVar3);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar3,'\t',*(CImage **)(this + 0x6c),(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 200) = pZVar3;
  (*pcVar9)(piVar10,pZVar3);
  piVar10 = *(int **)(this + 200);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  getTimeString((int)aSStack_30);
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_001f8e2c + 0x1f8b42) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  puVar12 = *(undefined4 **)(iVar8 + DAT_001f8e30);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_30,uVar5,*puVar12,1,1,0,0,0,0x12,0,0);
  *(BitmapTextElement **)(this + 0xcc) = pBVar6;
  (*pcVar9)(piVar10,pBVar6);
  String::~String(aSStack_30);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar3,'\t',*(CImage **)(this + 0x6c),(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xd4) = pZVar3;
  (*pcVar9)(piVar10,pZVar3);
  piVar10 = *(int **)(this + 0xd4);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  getTimeString((int)aSStack_28);
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_001f8e38 + 0x1f8be8) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_28,uVar5,*puVar12,1,1,0,0,0,0x12,0,0);
  *(BitmapTextElement **)(this + 0xd8) = pBVar6;
  (*pcVar9)(piVar10,pBVar6);
  String::~String(aSStack_28);
  piVar10 = *(int **)(this + 0x84);
  pcVar9 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_20,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_001f8e3c) * 8));
  iVar8 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_001f8e40 + 0x1f8c66) + 0x136) * 4 + iVar8);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_20,uVar5,*puVar12,1,1,0,0,0,9,0,0);
  *(BitmapTextElement **)(this + 0xd0) = pBVar6;
  (*pcVar9)(piVar10,pBVar6);
  String::~String(aSStack_20);
  iVar1 = DAT_001f8e44;
  *(undefined1 *)(*(int *)(this + 0x9c) + 0x86) =
       *(undefined1 *)(*(int *)(this + 0x60) + DAT_001f8e44);
  *(undefined1 *)(*(int *)(this + 0xa4) + 0x86) = *(undefined1 *)(*(int *)(this + 0x60) + iVar1);
  *(undefined1 *)(*(int *)(this + 0xac) + 0x86) = *(undefined1 *)(*(int *)(this + 0x60) + iVar1);
  *(undefined1 *)(*(int *)(this + 0xb4) + 0x86) = *(undefined1 *)(*(int *)(this + 0x60) + iVar1);
  *(undefined1 *)(*(int *)(this + 0xbc) + 0x86) = *(undefined1 *)(*(int *)(this + 0x60) + iVar1);
  *(undefined1 *)(*(int *)(this + 0xc4) + 0x86) = *(undefined1 *)(*(int *)(this + 0x60) + iVar1);
  cVar7 = *(char *)(*(int *)(this + 0x60) + iVar1);
  if (cVar7 != '\0') {
    cVar7 = *(char *)(*(int *)(this + 0x60) + DAT_001f8e48);
  }
  *(char *)(*(int *)(this + 200) + 0x86) = cVar7;
  cVar7 = *(char *)(*(int *)(this + 0x60) + iVar1);
  if (cVar7 != '\0') {
    cVar7 = *(char *)(*(int *)(this + 0x60) + DAT_001f8e48);
  }
  *(char *)(*(int *)(this + 0xd4) + 0x86) = cVar7;
  *(undefined4 *)(this + 0xdc) = 0;
  layout(this);
  return this;
}


