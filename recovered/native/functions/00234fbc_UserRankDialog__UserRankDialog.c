/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00234fbc UserRankDialog::UserRankDialog */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00235224) */
/* WARNING: Removing unreachable block (ram,0x00235224) */
/* UserRankDialog::UserRankDialog(ZombieCafeGameState*, bool) */

UserRankDialog * __thiscall
UserRankDialog::UserRankDialog(UserRankDialog *this,ZombieCafeGameState *param_1,bool param_2)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CImage *pCVar6;
  ImageElement *pIVar7;
  ZCImageButton *this_00;
  ScreenElement *pSVar8;
  String *pSVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar15;
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
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
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_00235374 + 0x234fd2) + 8;
  iVar3 = CapcomApp::getInstance();
  uVar10 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar10 = __mulsf3(uVar10,*(undefined4 *)(iVar3 + 0x50));
  *(undefined4 *)(this + 0x60) = uVar10;
  iVar3 = CapcomApp::getInstance();
  uVar10 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar10 = __mulsf3(uVar10,*(undefined4 *)(iVar3 + 0x50));
  *(undefined4 *)(this + 100) = uVar10;
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  uVar14 = *(undefined4 *)(this + 0x60);
  uVar10 = __mulsf3(uVar14,DAT_00235378);
  *(undefined4 *)(this + 0x88) = uVar10;
  uVar12 = *(undefined4 *)(this + 100);
  uVar4 = __mulsf3(uVar12,DAT_0023537c);
  uVar10 = DAT_00235380;
  *(undefined4 *)(this + 0x8c) = uVar4;
  uVar4 = __mulsf3(uVar14,uVar10);
  *(undefined4 *)(this + 0x94) = uVar4;
  uVar10 = __mulsf3(uVar12,DAT_00235384);
  *(undefined4 *)(this + 0x90) = uVar10;
  uVar5 = __mulsf3(uVar14,0);
  uVar10 = DAT_00235388;
  *(undefined4 *)(this + 0x98) = uVar5;
  uVar5 = __mulsf3(uVar12,uVar10);
  uVar10 = DAT_0023538c;
  *(undefined4 *)(this + 0x9c) = uVar5;
  uVar5 = __mulsf3(uVar14,uVar10);
  uVar10 = DAT_00235390;
  *(undefined4 *)(this + 0xa0) = uVar5;
  uVar10 = __mulsf3(uVar12,uVar10);
  *(undefined4 *)(this + 0xa4) = uVar10;
  *(undefined4 *)(this + 0xa8) = uVar4;
  iVar3 = CapcomApp::getInstance();
  iVar3 = *(int *)(iVar3 + 4);
  *(ZombieCafeGameState **)(this + 0x6c) = param_1;
  *(int *)(this + 0x68) = iVar3;
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar3 + 0x7f0),2,false);
  pIVar7 = (ImageElement *)operator_new(0x98);
  uVar1 = __addsf3(*(undefined4 *)(this + 0x60));
  bVar2 = (bool)__addsf3(*(undefined4 *)(this + 100));
  ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 0x70) = pIVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  iVar3 = ZombieCafe::calUserRankId
                    (*(ZombieCafe **)(this + 0x68),
                     (uint)(byte)(*(ZombieCafe **)(this + 0x68))[DAT_00235394]);
  *(undefined4 *)(this + 0x74) = 0;
  if (iVar3 != 0) {
    pCVar6 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + 0x7f0),iVar3 + 6,false)
    ;
    pIVar7 = (ImageElement *)operator_new(0x98);
    uVar1 = __mulsf3(*(undefined4 *)(this + 0x60),0x3fc00000);
    bVar2 = (bool)__mulsf3(*(undefined4 *)(this + 100),0x3fc00000);
    ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0_00,extraout_s1_00,uVar1,bVar2);
    *(ImageElement **)(this + 0x74) = pIVar7;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar7);
  }
  pCVar6 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + DAT_00235398),6,false);
  this_00 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_00,'!',pCVar6,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x78) = this_00;
  uVar15 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  uVar15 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x78),(float)uVar15,
                      (float)((ulonglong)uVar15 >> 0x20));
  if (*(char *)(*(int *)(this + 0x68) + DAT_0023539c) != '\0') {
    ImageButton::setScale
              (*(ImageButton **)(this + 0x78),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  }
  String::String(aSStack_b0,0);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_b0,*(undefined4 *)(*(int *)(this + 0x68) + 0x4e0),
             0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x7c) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_b0);
  String::String(aSStack_a8,0);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_a8,
             *(undefined4 *)(*(int *)(this + 0x68) + DAT_002353a0),0xffffffff,1,1,9,0x19,1);
  *(ScreenElement **)(this + 0x80) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_a8);
  pSVar8 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar8,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x84) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  piVar13 = *(int **)(this + 0x7c);
  switch(iVar3) {
  case 1:
    pcVar11 = *(code **)(*piVar13 + 0x44);
    if (param_2) {
      String::String(aSStack_a0,(char *)(DAT_002353a4 + 0x235240));
      (*pcVar11)(piVar13,aSStack_a0);
      pSVar9 = aSStack_a0;
    }
    else {
      String::String(aSStack_98,(char *)(DAT_002353a8 + 0x235254));
      (*pcVar11)(piVar13,aSStack_98);
      pSVar9 = aSStack_98;
    }
    String::~String(pSVar9);
    piVar13 = *(int **)(this + 0x80);
    pcVar11 = *(code **)(*piVar13 + 0x44);
    String::String(aSStack_90,(char *)(DAT_002353ac + 0x235270));
    (*pcVar11)(piVar13,aSStack_90);
    pSVar9 = aSStack_90;
    break;
  case 2:
    if (param_2) {
      pcVar11 = *(code **)(*piVar13 + 0x44);
      String::String(aSStack_88,(char *)(DAT_002353b0 + 0x23528e));
      (*pcVar11)(piVar13,aSStack_88);
      pSVar9 = aSStack_88;
    }
    else {
      pcVar11 = *(code **)(*piVar13 + 0x44);
      String::String(aSStack_80,(char *)(DAT_002353b4 + 0x2352a6));
      (*pcVar11)(piVar13,aSStack_80);
      pSVar9 = aSStack_80;
    }
    String::~String(pSVar9);
    piVar13 = *(int **)(this + 0x80);
    pcVar11 = *(code **)(*piVar13 + 0x44);
    String::String(aSStack_78,(char *)(DAT_002353b8 + 0x2352c4));
    (*pcVar11)(piVar13,aSStack_78);
    pSVar9 = aSStack_78;
    break;
  case 3:
    pcVar11 = *(code **)(*piVar13 + 0x44);
    if (param_2) {
      String::String(aSStack_70,(char *)(DAT_002353bc + 0x2352e4));
      (*pcVar11)(piVar13,aSStack_70);
      pSVar9 = aSStack_70;
    }
    else {
      String::String(aSStack_68,(char *)(DAT_002353c0 + 0x2352f8));
      (*pcVar11)(piVar13,aSStack_68);
      pSVar9 = aSStack_68;
    }
    String::~String(pSVar9);
    piVar13 = *(int **)(this + 0x80);
    pcVar11 = *(code **)(*piVar13 + 0x44);
    String::String(aSStack_60,(char *)(DAT_002353c4 + 0x235314));
    (*pcVar11)(piVar13,aSStack_60);
    pSVar9 = aSStack_60;
    break;
  case 4:
    pcVar11 = *(code **)(*piVar13 + 0x44);
    if (param_2) {
      String::String(aSStack_58,(char *)(DAT_002353c8 + 0x235334));
      (*pcVar11)(piVar13,aSStack_58);
      pSVar9 = aSStack_58;
    }
    else {
      String::String(aSStack_50,(char *)(DAT_002353cc + 0x235348));
      (*pcVar11)(piVar13,aSStack_50);
      pSVar9 = aSStack_50;
    }
    String::~String(pSVar9);
    piVar13 = *(int **)(this + 0x80);
    pcVar11 = *(code **)(*piVar13 + 0x44);
    String::String(aSStack_48,(char *)(DAT_002353d0 + 0x235364));
    (*pcVar11)(piVar13,aSStack_48);
    pSVar9 = aSStack_48;
    break;
  case 5:
    if (param_2) {
      pcVar11 = *(code **)(*piVar13 + 0x44);
      String::String(aSStack_40,(char *)(DAT_00235560 + 0x2353e4));
      (*pcVar11)(piVar13,aSStack_40);
      pSVar9 = aSStack_40;
    }
    else {
      pcVar11 = *(code **)(*piVar13 + 0x44);
      String::String(aSStack_38,(char *)(DAT_00235564 + 0x2353fc));
      (*pcVar11)(piVar13,aSStack_38);
      pSVar9 = aSStack_38;
    }
    String::~String(pSVar9);
    piVar13 = *(int **)(this + 0x80);
    pcVar11 = *(code **)(*piVar13 + 0x44);
    String::String(aSStack_30,(char *)(DAT_00235568 + 0x23541a));
    (*pcVar11)(piVar13,aSStack_30);
    pSVar9 = aSStack_30;
    break;
  default:
    pcVar11 = *(code **)(*piVar13 + 0x44);
    String::String(aSStack_28,(char *)(DAT_0023556c + 0x235432));
    (*pcVar11)(piVar13,aSStack_28);
    String::~String(aSStack_28);
    piVar13 = *(int **)(this + 0x80);
    pcVar11 = *(code **)(*piVar13 + 0x44);
    String::String(aSStack_20,(char *)(DAT_00235570 + 0x235450));
    (*pcVar11)(piVar13,aSStack_20);
    pSVar9 = aSStack_20;
  }
  String::~String(pSVar9);
  uVar10 = __fixsfsi(*(undefined4 *)(this + 0xa8));
  (**(code **)(**(int **)(this + 0x7c) + 0x18))(*(int **)(this + 0x7c),uVar10,1000);
  piVar13 = *(int **)(this + 0x80);
  uVar10 = __fixsfsi(*(undefined4 *)(this + 0xa8));
  (**(code **)(*piVar13 + 0x18))(piVar13,uVar10,1000);
  layout(this);
  return this;
}


