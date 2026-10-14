/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00104ddc EquipInfoDialog::EquipInfoDialog */

/* EquipInfoDialog::EquipInfoDialog(CImage*, CImage*, float) */

EquipInfoDialog * __thiscall
EquipInfoDialog::EquipInfoDialog
          (EquipInfoDialog *this,CImage *param_1,CImage *param_2,float param_3)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  CImage *pCVar4;
  ImageElement *this_00;
  ZCImageButton *pZVar5;
  BitmapTextElement *pBVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar13;
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar10 = DAT_00105000;
  iVar3 = DAT_00104ffc;
  *(int *)this = *(int *)(DAT_00104ff8 + 0x104df4) + 8;
  *(undefined4 *)(this + 0x8c) = 0;
  *(EquipInfoDialog **)(this + 0x90) = this + 0x88;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  L_PrintLog((char *)(iVar3 + 0x104e0a),(char *)(iVar10 + 0x104e0c));
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(iVar3 + 4);
  iVar3 = CapcomApp::getInstance();
  uVar9 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar9 = __mulsf3(uVar9,*(undefined4 *)(iVar3 + 0x50));
  *(undefined4 *)(this + 0x60) = uVar9;
  iVar3 = CapcomApp::getInstance();
  uVar9 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar9 = __mulsf3(uVar9,*(undefined4 *)(iVar3 + 0x50));
  *(undefined4 *)(this + 100) = uVar9;
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + 0x7f0),2,false)
  ;
  this_00 = (ImageElement *)operator_new(0x98);
  uVar1 = __addsf3(*(undefined4 *)(this + 0x60));
  bVar2 = (bool)__addsf3(*(undefined4 *)(this + 100));
  ImageElement::ImageElement(this_00,pCVar4,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 0x6c) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x12',param_2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x70) = pZVar5;
  uVar13 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x70),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  L_PrintLog((char *)(DAT_00105004 + 0x104eca),(char *)(DAT_00105008 + 0x104ecc));
  pcVar7 = *(code **)(**(int **)(this + 0x70) + 0x2c);
  String::String(aSStack_20,0);
  iVar10 = *(int *)(this + 0x68);
  iVar3 = SmDev();
  iVar12 = *(int *)(this + 0x70);
  uVar9 = *(undefined4 *)(iVar12 + 0x10);
  uVar8 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_0010500c + 0x104eee) + 0x136) * 4 + iVar10);
  uVar11 = *(undefined4 *)(iVar12 + 0xc);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_20,uVar8,0xffffffff,0,0,0,uVar11,uVar9,9,0,0);
  *(BitmapTextElement **)(this + 0x84) = pBVar6;
  (*pcVar7)(iVar12,pBVar6);
  String::~String(aSStack_20);
  iVar10 = DAT_00105014;
  iVar3 = DAT_00105010;
  *(undefined1 *)(*(int *)(this + 0x84) + 0x7f) = 0x12;
  L_PrintLog((char *)(iVar3 + 0x104f4e),(char *)(iVar10 + 0x104f50));
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + DAT_00105018),6,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'!',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x74) = pZVar5;
  uVar13 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x74),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  L_PrintLog((char *)(DAT_0010501c + 0x104f98),(char *)(DAT_00105020 + 0x104f9a));
  iVar10 = DAT_00105028;
  iVar3 = DAT_00105024;
  this[0x14] = (EquipInfoDialog)0x0;
  L_PrintLog((char *)(iVar3 + 0x104fa8),(char *)(iVar10 + 0x104faa));
  return this;
}


