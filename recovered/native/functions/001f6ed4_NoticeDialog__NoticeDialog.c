/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f6ed4 NoticeDialog::NoticeDialog */

/* NoticeDialog::NoticeDialog(CImage*, CImage*, float) */

NoticeDialog * __thiscall
NoticeDialog::NoticeDialog(NoticeDialog *this,CImage *param_1,CImage *param_2,float param_3)

{
  uchar uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ImageElement *this_00;
  ZCImageButton *this_01;
  BitmapTextElement *pBVar6;
  ScreenElement *pSVar7;
  undefined4 in_r3;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar14;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar8 = *(int *)(DAT_001f7114 + 0x1f6ef0);
  *(NoticeDialog **)(this + 0x7c) = this + 0x74;
  *(int *)this = iVar8 + 8;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  iVar8 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar8 + 4);
  iVar8 = CapcomApp::getInstance();
  uVar13 = *(undefined4 *)(iVar8 + 0x40);
  iVar8 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar8 + 0x50);
  iVar8 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar8 + 0x44);
  iVar8 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar8 + 0x50);
  this_00 = (ImageElement *)operator_new(0x98);
  uVar3 = __mulsf3(uVar13,uVar3);
  uVar4 = __mulsf3(uVar4,uVar5);
  uVar1 = __mulsf3(uVar3,in_r3);
  bVar2 = (bool)__mulsf3(uVar4,in_r3);
  ImageElement::ImageElement(this_00,param_1,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 100) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  this_01 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_01,'\x12',param_2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x68) = this_01;
  uVar14 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x68),(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  pcVar9 = *(code **)(**(int **)(this + 0x68) + 0x2c);
  String::String(aSStack_28,0);
  iVar10 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(iVar8 * 4 + DAT_001f7118 + 0x1f6fbe) + 0x136) * 4 + iVar10);
  iVar8 = *(int *)(this + 0x68);
  uVar4 = *(undefined4 *)(iVar8 + 0x10);
  uVar5 = *(undefined4 *)(iVar8 + 0xc);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_28,uVar3,0xffffffff,0,0,0,uVar5,uVar4,9,0,0);
  *(BitmapTextElement **)(this + 0x70) = pBVar6;
  (*pcVar9)(iVar8,pBVar6);
  String::~String(aSStack_28);
  *(undefined1 *)(*(int *)(this + 0x70) + 0x7f) = 0x12;
  String::String(aSStack_20,0);
  iVar10 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(iVar8 * 4 + DAT_001f711c + 0x1f7028) + 0x136) * 4 + iVar10);
  iVar8 = SmDev();
  uVar12 = *(uint *)(DAT_001f7120 + iVar8 * 4 + 0x1f7054);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,aSStack_20,uVar3,0xffffffff,0,0,9,uVar12 & 0xff,1);
  *(ScreenElement **)(this + 0x6c) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_20);
  *(undefined1 *)(*(int *)(this + 0x6c) + 0x7f) = 0x11;
  piVar11 = *(int **)(this + 0x6c);
  pcVar9 = *(code **)(*piVar11 + 0x58);
  iVar8 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar8 * 4 + *(int *)(DAT_001f7124 + 0x1f708e)));
  (*pcVar9)(piVar11,uVar3);
  *(undefined1 *)(*(int *)(this + 0x6c) + 0xb0) = 1;
  this[0x14] = (NoticeDialog)0x0;
  *(undefined4 *)(this + 0x8c) = 0x3f800000;
  return this;
}


