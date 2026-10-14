/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e20d8 ConfirmDialog::ConfirmDialog */

/* ConfirmDialog::ConfirmDialog(CImage*, CImage*, CImage*, int, float, CImage*) */

ConfirmDialog * __thiscall
ConfirmDialog::ConfirmDialog
          (ConfirmDialog *this,CImage *param_1,CImage *param_2,CImage *param_3,int param_4,
          float param_5,CImage *param_6)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ImageElement *this_00;
  ZCImageButton *pZVar7;
  BitmapTextElement *pBVar8;
  ScreenElement *pSVar9;
  code *pcVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar15;
  CImage *in_stack_00000008;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_000e2420 + 0xe20f4) + 8;
  *(undefined4 *)(this + 0x84) = 0;
  *(ConfirmDialog **)(this + 0x88) = this + 0x80;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(int *)(this + 0x98) = param_4;
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar3 + 4);
  iVar3 = CapcomApp::getInstance();
  uVar12 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar14 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar3 + 0x50);
  CapcomApp::getInstance();
  iVar3 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar3 + 0x44);
  this_00 = (ImageElement *)operator_new(0x98);
  uVar12 = __mulsf3(uVar12,uVar14);
  uVar4 = __mulsf3(uVar4,uVar5);
  uVar1 = __mulsf3(uVar12,param_6);
  bVar2 = (bool)__mulsf3(uVar4,param_6);
  ImageElement::ImageElement(this_00,param_1,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 100) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\f',param_2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x68) = pZVar7;
  uVar15 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x68),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  if (*(char *)(*(int *)(this + 0x60) + DAT_000e2424) != '\0') {
    uVar15 = __mulsf3(uVar6,DAT_000e2428);
    ImageButton::setScale
              (*(ImageButton **)(this + 0x68),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  }
  pcVar10 = *(code **)(**(int **)(this + 0x68) + 0x2c);
  String::String(aSStack_30,0);
  iVar11 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_000e242c + 0xe21f6) + 0x136) * 4 + iVar11);
  iVar3 = *(int *)(this + 0x68);
  uVar4 = *(undefined4 *)(iVar3 + 0xc);
  uVar12 = *(undefined4 *)(iVar3 + 0x10);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_30,uVar5,0xffffffff,0,0,0,uVar4,uVar12,9,0,0);
  *(BitmapTextElement **)(this + 0x78) = pBVar8;
  (*pcVar10)(iVar3,pBVar8);
  String::~String(aSStack_30);
  *(undefined1 *)(*(int *)(this + 0x78) + 0x7f) = 0x12;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',param_3,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x6c) = pZVar7;
  uVar15 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x6c),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  if (*(char *)(*(int *)(this + 0x60) + DAT_000e2424) != '\0') {
    uVar15 = __mulsf3(uVar6,DAT_000e2428);
    ImageButton::setScale
              (*(ImageButton **)(this + 0x6c),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  }
  pcVar10 = *(code **)(**(int **)(this + 0x6c) + 0x2c);
  String::String(aSStack_28,0);
  iVar11 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_000e2430 + 0xe22b4) + 0x136) * 4 + iVar11);
  iVar3 = *(int *)(this + 0x6c);
  uVar4 = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = *(undefined4 *)(iVar3 + 0xc);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_28,uVar5,0xffffffff,0,0,0,uVar6,uVar4,9,0,0);
  *(BitmapTextElement **)(this + 0x7c) = pBVar8;
  (*pcVar10)(iVar3,pBVar8);
  String::~String(aSStack_28);
  *(undefined1 *)(*(int *)(this + 0x7c) + 0x7f) = 0x12;
  *(undefined4 *)(this + 0x70) = 0;
  if (in_stack_00000008 != (CImage *)0x0) {
    pZVar7 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar7,'!',in_stack_00000008,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x70) = pZVar7;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  }
  String::String(aSStack_20,0);
  iVar11 = *(int *)(this + 0x60);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_000e2434 + iVar3 * 4 + 0xe2364) + 0x136) * 4 + iVar11);
  iVar3 = SmDev();
  uVar13 = *(uint *)(DAT_000e2438 + iVar3 * 4 + 0xe2392);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_20,uVar4,0xffffffff,0,0,9,uVar13 & 0xff,1);
  *(ScreenElement **)(this + 0x74) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_20);
  *(undefined1 *)(*(int *)(this + 0x74) + 0x7f) = 0x11;
  this[0x14] = (ConfirmDialog)0x0;
  return this;
}


