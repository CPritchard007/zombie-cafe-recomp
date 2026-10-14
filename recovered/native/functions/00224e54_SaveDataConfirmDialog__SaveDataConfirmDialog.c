/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00224e54 SaveDataConfirmDialog::SaveDataConfirmDialog */

/* SaveDataConfirmDialog::SaveDataConfirmDialog() */

SaveDataConfirmDialog * __thiscall
SaveDataConfirmDialog::SaveDataConfirmDialog(SaveDataConfirmDialog *this)

{
  int iVar1;
  undefined4 uVar2;
  ScreenElement *pSVar3;
  ImageElement *this_00;
  ZCImageButton *pZVar4;
  BitmapTextElement *pBVar5;
  SaveDataInfo *pSVar6;
  CImage *pCVar7;
  CImage *pCVar8;
  CImage *pCVar9;
  ConfirmDialog *this_01;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  undefined8 uVar18;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar14 = DAT_00225230;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar14 = iVar14 + 0x224e68;
  *(int *)this = *(int *)(iVar14 + DAT_00225234) + 8;
  String::String((String *)(this + 0x90));
  String::String((String *)(this + 0x98));
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  iVar1 = CapcomApp::getInstance();
  uVar15 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  puVar12 = *(undefined4 **)(iVar14 + DAT_00225238);
  uVar15 = __mulsf3(uVar15,*(undefined4 *)(iVar1 + 0x50));
  *puVar12 = uVar15;
  iVar1 = CapcomApp::getInstance();
  uVar15 = *(undefined4 *)(iVar1 + 0x44);
  iVar1 = CapcomApp::getInstance();
  uVar15 = __mulsf3(uVar15,*(undefined4 *)(iVar1 + 0x50));
  **(undefined4 **)(iVar14 + DAT_0022523c) = uVar15;
  (*(undefined4 **)(iVar14 + DAT_00225240))[5] = **(undefined4 **)(iVar14 + DAT_00225240);
  (*(undefined4 **)(iVar14 + DAT_00225244))[5] = **(undefined4 **)(iVar14 + DAT_00225244);
  (*(undefined4 **)(iVar14 + DAT_00225248))[5] = **(undefined4 **)(iVar14 + DAT_00225248);
  puVar13 = *(undefined4 **)(iVar14 + DAT_0022524c);
  uVar2 = __mulsf3(*puVar13,uVar15);
  iVar1 = DAT_00225250;
  puVar13[5] = uVar2;
  uVar10 = *puVar12;
  puVar12 = *(undefined4 **)(iVar14 + iVar1);
  uVar2 = __mulsf3(*puVar12,uVar10);
  iVar1 = DAT_00225254;
  puVar12[5] = uVar2;
  puVar12 = *(undefined4 **)(iVar14 + iVar1);
  uVar2 = __mulsf3(*puVar12,uVar15);
  iVar1 = DAT_00225258;
  puVar12[5] = uVar2;
  puVar12 = *(undefined4 **)(iVar14 + iVar1);
  uVar2 = __mulsf3(*puVar12,uVar10);
  iVar1 = DAT_0022525c;
  puVar12[5] = uVar2;
  puVar12 = *(undefined4 **)(iVar14 + iVar1);
  uVar2 = __mulsf3(*puVar12,uVar15);
  iVar1 = DAT_00225260;
  puVar12[5] = uVar2;
  puVar13 = *(undefined4 **)(iVar14 + iVar1);
  uVar2 = __mulsf3(*puVar13,uVar10);
  iVar1 = DAT_00225264;
  puVar13[5] = uVar2;
  puVar12 = *(undefined4 **)(iVar14 + iVar1);
  uVar15 = __mulsf3(*puVar12,uVar15);
  puVar12[5] = uVar15;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0x18) = 0xff000000;
  Vector<String>::elementAt((int)aSStack_38);
  iVar1 = *(int *)(this + 0x60);
  iVar14 = SmDev();
  uVar15 = *(undefined4 *)((*(int *)(DAT_0022526c + iVar14 * 4 + 0x224fc6) + 0x136) * 4 + iVar1);
  pSVar3 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar3,aSStack_38,uVar15,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x68) = pSVar3;
  ScreenElement::addChild((ScreenElement *)this,pSVar3);
  String::~String(aSStack_38);
  uVar15 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_00225270),0x11,false)
  ;
  *(undefined4 *)(this + 0x70) = uVar15;
  iVar14 = SmDev();
  uVar2 = puVar13[iVar14];
  iVar14 = SmDev();
  uVar15 = puVar12[iVar14];
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (this_00,*(CImage **)(this + 0x70),extraout_s0,extraout_s1,(uchar)uVar2,SUB41(uVar15,0))
  ;
  *(ImageElement **)(this + 0x6c) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  uVar15 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_00225270),8,false);
  *(undefined4 *)(this + 0x80) = uVar15;
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\f',*(CImage **)(this + 0x80),(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x78) = pZVar4;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar4);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x78),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  pcVar11 = *(code **)(**(int **)(this + 0x78) + 0x2c);
  Vector<String>::elementAt((int)aSStack_30);
  iVar1 = *(int *)(this + 0x60);
  iVar14 = SmDev();
  iVar16 = *(int *)(this + 0x78);
  uVar15 = *(undefined4 *)((*(int *)(DAT_00225278 + iVar14 * 4 + 0x2250d8) + 0x136) * 4 + iVar1);
  uVar10 = *(undefined4 *)(iVar16 + 0xc);
  uVar2 = *(undefined4 *)(iVar16 + 0x10);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_30,uVar15,0xffffffff,0,0,0,uVar10,uVar2,9,0,0)
  ;
  *(BitmapTextElement **)(this + 0x88) = pBVar5;
  (*pcVar11)(iVar16,pBVar5);
  String::~String(aSStack_30);
  *(undefined1 *)(*(int *)(this + 0x88) + 0x7f) = 0x12;
  uVar15 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_00225270),8,false);
  *(undefined4 *)(this + 0x84) = uVar15;
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'$',*(CImage **)(this + 0x84),(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x7c) = pZVar4;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar4);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x7c),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  pcVar11 = *(code **)(**(int **)(this + 0x7c) + 0x2c);
  Vector<String>::elementAt((int)aSStack_28);
  iVar1 = *(int *)(this + 0x60);
  iVar14 = SmDev();
  iVar16 = *(int *)(this + 0x7c);
  uVar15 = *(undefined4 *)((*(int *)(DAT_0022527c + iVar14 * 4 + 0x22519c) + 0x136) * 4 + iVar1);
  uVar10 = *(undefined4 *)(iVar16 + 0xc);
  uVar2 = *(undefined4 *)(iVar16 + 0x10);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_28,uVar15,0xffffffff,0,0,0,uVar10,uVar2,9,0,0)
  ;
  *(BitmapTextElement **)(this + 0x8c) = pBVar5;
  (*pcVar11)(iVar16,pBVar5);
  String::~String(aSStack_28);
  *(undefined1 *)(*(int *)(this + 0x8c) + 0x7f) = 0x12;
  piVar17 = *(int **)(this + 0x6c);
  pcVar11 = *(code **)(*piVar17 + 0x2c);
  Vector<String>::elementAt((int)aSStack_20);
  iVar1 = *(int *)(this + 0x60);
  iVar14 = SmDev();
  uVar15 = *(undefined4 *)((*(int *)(iVar14 * 4 + DAT_00225284 + 0x2251f0) + 0x136) * 4 + iVar1);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_20,uVar15,DAT_00225288,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0x74) = pBVar5;
  (*pcVar11)(piVar17,pBVar5);
  String::~String(aSStack_20);
  *(undefined1 *)(*(int *)(this + 0x74) + 0x7f) = 0x12;
  pSVar6 = (SaveDataInfo *)operator_new(0xa4);
  SaveDataInfo::SaveDataInfo(pSVar6,'\f');
  *(SaveDataInfo **)(this + 0xa0) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pSVar6);
  pSVar6 = (SaveDataInfo *)operator_new(0xa4);
  SaveDataInfo::SaveDataInfo(pSVar6,'$');
  *(SaveDataInfo **)(this + 0xa4) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pSVar6);
  iVar14 = DAT_002253b8;
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_002253b8),0x22,false)
  ;
  *(CImage **)(this + 0xb4) = pCVar7;
  pCVar8 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar14),8,false);
  *(CImage **)(this + 0xb8) = pCVar8;
  pCVar9 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar14),0x10,false);
  *(CImage **)(this + 0xbc) = pCVar9;
  this_01 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog(this_01,pCVar7,pCVar8,pCVar9,0,extraout_s0_00,(CImage *)0x3f800000);
  *(ConfirmDialog **)(this + 0xb0) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  piVar17 = *(int **)(this + 0xb0);
  (**(code **)(*piVar17 + 0x1c))(piVar17,0x12);
  this[0x14] = (SaveDataConfirmDialog)0x0;
  return this;
}


