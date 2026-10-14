/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ddff0 HudElement::HudElement */

/* HudElement::HudElement(bool (*)(void*, int), void*, bool) */

HudElement * __thiscall
HudElement::HudElement(HudElement *this,_func_bool_void_ptr_int *param_1,void *param_2,bool param_3)

{
  uchar uVar1;
  void *__s;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  CImage *pCVar5;
  ImageElement *pIVar6;
  ZCImageButton *pZVar7;
  undefined4 uVar8;
  BitmapTextElement *pBVar9;
  RatingBar *this_00;
  ProgressBar *this_01;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  int *piVar22;
  undefined4 *puVar23;
  HudElement *pHVar24;
  ScreenElement *pSVar25;
  int iVar26;
  undefined4 uVar27;
  int *piVar28;
  Vector<ZCImageButton*> *this_02;
  undefined4 uVar29;
  int iVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float extraout_s0;
  float fVar33;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar34;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar35;
  code *local_e4;
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  String aSStack_34 [8];
  String aSStack_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  ImageElement *local_1c;
  
  iVar26 = DAT_001de3dc + 0x1ddffc;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar26 + DAT_001de3e0) + 8;
  *(undefined4 *)(this + 0x6c) = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 0x74) = __s;
  memset(__s,0,*(int *)(this + 0x6c) << 2);
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  Vector<HudElement::NewIndicator>::Vector((Vector<HudElement::NewIndicator> *)(this + 0x7c));
  L_PrintLog((char *)(DAT_001de3e4 + 0x1de03e),(char *)(DAT_001de3e8 + 0x1de040));
  iVar2 = CapcomApp::getInstance();
  uVar13 = *(undefined4 *)(iVar2 + 4);
  *(_func_bool_void_ptr_int **)(this + 100) = param_1;
  *(undefined4 *)(this + 0x60) = uVar13;
  *(void **)(this + 0x68) = param_2;
  this[0x16a] = (HudElement)param_3;
  *(undefined4 *)(this + 0x124) = 0x40000000;
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  *(undefined4 *)(this + 0x11c) = 0xffffffff;
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  uVar13 = ObjectiveSystem::getRatingBonus();
  iVar2 = 0;
  *(undefined4 *)(this + 0x128) = uVar13;
  *(undefined4 *)(this + 300) = 0xffffffff;
  do {
    iVar3 = iVar2 + 0x130;
    iVar2 = iVar2 + 1;
    this[iVar3] = (HudElement)0x0;
  } while (iVar2 != 0x1d);
  iVar2 = CapcomApp::getInstance();
  uVar13 = *(undefined4 *)(iVar2 + 0x40);
  iVar3 = CapcomApp::getInstance();
  iVar2 = DAT_001de3f0;
  uVar4 = *(undefined4 *)(iVar3 + 0x44);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001de3f0),4,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,'!',true);
  *(ImageElement **)(this + 0xb4) = pIVar6;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar6);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0x18,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x88) = pZVar7;
  (*pcVar14)(piVar22,pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xf5,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xa0) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xfc,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xa4) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xf1,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xb0) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x60) + iVar2),DAT_001de3f4,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xa8) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x60) + iVar2),DAT_001de3f8,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xac) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  piVar22 = *(int **)(this + 0xac);
  (**(code **)(*piVar22 + 0x20))(piVar22,0);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xbc,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x90) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  piVar22 = *(int **)(this + 0x90);
  (**(code **)(*piVar22 + 0x20))(piVar22,0);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xbb,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x94) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  piVar22 = *(int **)(this + 0x94);
  (**(code **)(*piVar22 + 0x20))(piVar22,0);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xd9,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xec) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  piVar22 = *(int **)(this + 0xec);
  (**(code **)(*piVar22 + 0x20))(piVar22,0);
  puVar23 = *(undefined4 **)(iVar26 + DAT_001de3fc);
  uVar8 = __floatsisf(*puVar23);
  __mulsf3(uVar8,uVar13);
  uVar8 = __fixsfsi();
  piVar22 = *(int **)(this + 0xb4);
  puVar23[5] = uVar8;
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xf2,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar5,(CImage *)0x0,0,0,false);
  pHVar24 = this + 0xf0;
  *(ZCImageButton **)pHVar24 = pZVar7;
  (*pcVar14)(piVar22,pZVar7);
  (**(code **)(**(int **)pHVar24 + 0x20))(*(int **)pHVar24,0);
  uVar34 = __addsf3(uVar4,uVar4);
  ImageButton::setScale(*(ImageButton **)pHVar24,(float)uVar34,(float)((ulonglong)uVar34 >> 0x20));
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001de3f0),10,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x98) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  uVar34 = __mulsf3(uVar4,DAT_001de400);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x98),(float)uVar34,(float)((ulonglong)uVar34 >> 0x20));
  pcVar14 = *(code **)(**(int **)(this + 0x98) + 0x2c);
  String::String(aSStack_94,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar26 + DAT_001de404) * 8));
  iVar3 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001de408 + iVar2 * 4 + 0x1de438) + 0x136) * 4 + iVar3);
  iVar2 = *(int *)(this + 0x98);
  uVar27 = *(undefined4 *)(iVar2 + 0x10);
  uVar29 = *(undefined4 *)(iVar2 + 0xc);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar9,aSStack_94,uVar8,0xffffffff,0,1,0,uVar29,uVar27,0x12,0,0);
  *(BitmapTextElement **)(this + 0xe4) = pBVar9;
  (*pcVar14)(iVar2,pBVar9);
  String::~String(aSStack_94);
  (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),0);
  iVar2 = DAT_001de854;
  *(undefined1 *)(*(int *)(this + 0xe4) + 0x7f) = 0x11;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),10,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x8c) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  piVar22 = *(int **)(this + 0x8c);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  String::String(aSStack_8c,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar26 + DAT_001de858) * 8));
  iVar3 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001de85c + iVar2 * 4 + 0x1de548) + 0x136) * 4 + iVar3);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar9,aSStack_8c,uVar8,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xd4) = pBVar9;
  (*pcVar14)(piVar22,pBVar9);
  String::~String(aSStack_8c);
  (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),0);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001de854),0x23,false)
  ;
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,'!',true);
  *(ImageElement **)(this + 0xb8) = pIVar6;
  (*pcVar14)(piVar22,pIVar6);
  piVar22 = *(int **)(this + 0xb8);
  (**(code **)(*piVar22 + 0x20))(piVar22,0);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001de854),0x1c,false)
  ;
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,'!',true);
  *(ImageElement **)(this + 0xbc) = pIVar6;
  (*pcVar14)(piVar22,pIVar6);
  L_PrintLog((char *)(DAT_001de860 + 0x1de5b6),(char *)(DAT_001de864 + 0x1de5b8));
  iVar2 = ZombieCafe::calUserRankId
                    (*(ZombieCafe **)(this + 0x60),
                     (uint)(byte)(*(ZombieCafe **)(this + 0x60))[DAT_001de868]);
  *(undefined4 *)(this + 0xe8) = 0;
  if (iVar2 != 0) {
    piVar22 = *(int **)(this + 0xb4);
    pcVar14 = *(code **)(*piVar22 + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + 0x7f0),iVar2 + 6,false)
    ;
    pZVar7 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar7,'!',pCVar5,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0xe8) = pZVar7;
    (*pcVar14)(piVar22,pZVar7);
  }
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  String::String(aSStack_84,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                 **(int **)(iVar26 + DAT_001de86c) * 8));
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar9,aSStack_84,*(undefined4 *)(*(int *)(this + 0x60) + DAT_001de870),0xffffffff,1,1,
             9,0,0);
  *(BitmapTextElement **)(this + 0xc0) = pBVar9;
  (*pcVar14)(piVar22,pBVar9);
  String::~String(aSStack_84);
  L_PrintLog((char *)(DAT_001de874 + 0x1de67c),(char *)(DAT_001de878 + 0x1de67e));
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001de854),0x20,false);
  *(undefined4 *)(this + 0xfc) = uVar8;
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001de854),0x36,false);
  *(undefined4 *)(this + 0x100) = uVar8;
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001de854),0xb8,false);
  *(undefined4 *)(this + 0x104) = uVar8;
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  this_00 = (RatingBar *)operator_new(0x9c);
  RatingBar::RatingBar
            (this_00,extraout_s0,*(CImage **)(*(int *)(this + 0x60) + 0x688),
             *(CImage **)(this + 0xfc),*(CImage **)(this + 0x100),
             SUB41(*(undefined4 *)(this + 0x104),0));
  *(RatingBar **)(this + 0x108) = this_00;
  (*pcVar14)(piVar22,this_00);
  fVar33 = (float)ObjectiveSystem::getRatingBonus();
  RatingBar::setBonusValue(fVar33);
  (**(code **)(**(int **)(this + 0x108) + 0x1c))(*(int **)(this + 0x108),0x11);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001de854),0xef,false)
  ;
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,'\t',true);
  *(ImageElement **)(this + 0x10c) = pIVar6;
  (*pcVar14)(piVar22,pIVar6);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001de854),0xef,false)
  ;
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_00,extraout_s1,(uchar)uVar4,(bool)(uchar)uVar4);
  *(ImageElement **)(this + 0x110) = pIVar6;
  (*pcVar14)(piVar22,pIVar6);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x60) + DAT_001de854),DAT_001de880,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  uVar1 = __mulsf3(uVar4,DAT_001de884);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_01,extraout_s1_00,uVar1,(bool)uVar1);
  *(ImageElement **)(this + 0x114) = pIVar6;
  (*pcVar14)(piVar22,pIVar6);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  String::String(aSStack_7c,0);
  iVar3 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001de888 + iVar2 * 4 + 0x1de802) + 0x136) * 4 + iVar3);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar9,aSStack_7c,uVar8,0xffffffff,1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0xc4) = pBVar9;
  (*pcVar14)(piVar22,pBVar9);
  String::~String(aSStack_7c);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  String::String(aSStack_74,0);
  iVar3 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001dec74 + iVar2 * 4 + 0x1de90a) + 0x136) * 4 + iVar3);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar9,aSStack_74,uVar8,0xffffffff,1,1,0x21,0,0);
  *(BitmapTextElement **)(this + 200) = pBVar9;
  (*pcVar14)(piVar22,pBVar9);
  String::~String(aSStack_74);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  String::String(aSStack_6c,0);
  iVar3 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001dec78 + iVar2 * 4 + 0x1de91e) + 0x136) * 4 + iVar3);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar9,aSStack_6c,uVar8,0xffffffff,1,1,10,0,0);
  *(BitmapTextElement **)(this + 0xcc) = pBVar9;
  (*pcVar14)(piVar22,pBVar9);
  String::~String(aSStack_6c);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  String::String(aSStack_64,0);
  iVar3 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001dec7c + iVar2 * 4 + 0x1de982) + 0x136) * 4 + iVar3);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar9,aSStack_64,uVar8,0xffffffff,1,1,10,0,0);
  *(BitmapTextElement **)(this + 0xd0) = pBVar9;
  (*pcVar14)(piVar22,pBVar9);
  String::~String(aSStack_64);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  this_01 = (ProgressBar *)operator_new(0x84);
  ProgressBar::ProgressBar
            (this_01,*(int *)(*(int *)(this + 0x60) + DAT_001dec80),
             *(int *)(*(int *)(*(int *)(this + 0x60) + 0x680) * 4 +
                     **(int **)(iVar26 + DAT_001dec84)),'&','7',-1,-1);
  *(ProgressBar **)(this + 0xf8) = this_01;
  (*pcVar14)(piVar22,this_01);
  piVar22 = *(int **)(this + 0xf8);
  (**(code **)(*piVar22 + 0x1c))(piVar22,0x21);
  iVar30 = *(int *)(*(int *)(this + 0xb4) + 0x10);
  piVar22 = *(int **)(this + 0xc4);
  pcVar14 = *(code **)(*piVar22 + 0x44);
  String::String(aSStack_5c,(char *)(DAT_001dec88 + 0x1dea16));
  (*pcVar14)(piVar22,aSStack_5c);
  String::~String(aSStack_5c);
  piVar22 = *(int **)(this + 0xd0);
  pcVar14 = *(code **)(*piVar22 + 0x44);
  String::String(aSStack_54,(char *)(DAT_001dec8c + 0x1dea38));
  (*pcVar14)(piVar22,aSStack_54);
  String::~String(aSStack_54);
  piVar22 = *(int **)(this + 0xcc);
  pcVar14 = *(code **)(*piVar22 + 0x44);
  String::String(aSStack_4c,(char *)(DAT_001dec90 + 0x1dea58));
  (*pcVar14)(piVar22,aSStack_4c);
  String::~String(aSStack_4c);
  iVar2 = (**(code **)(**(int **)(this + 0xc4) + 0x5c))();
  iVar3 = (**(code **)(**(int **)(this + 0xd0) + 0x5c))();
  iVar10 = (**(code **)(**(int **)(this + 0xcc) + 0x5c))();
  iVar15 = *(int *)(*(int *)(this + 0xb4) + 0xc);
  iVar16 = *(int *)(*(int *)(this + 0x108) + 0xc);
  iVar17 = *(int *)(*(int *)(this + 0xf8) + 0xc);
  iVar18 = *(int *)(*(int *)(this + 0xbc) + 0xc);
  iVar19 = *(int *)(*(int *)(this + 0xb8) + 0xc);
  iVar20 = *(int *)(*(int *)(this + 0x88) + 0xc);
  layout(this);
  uVar21 = *(undefined4 *)(*(int *)(this + 0xb4) + 0xc);
  iVar11 = SmDev();
  uVar8 = *(undefined4 *)(iVar11 * 4 + DAT_001dec94 + 0x1deae8);
  iVar30 = iVar30 >> 4;
  piVar22 = *(int **)(this + 0x98);
  (**(code **)(*piVar22 + 0x14))
            (piVar22,*(int *)(*(int *)(this + 0x60) + 0x10) >> 0x10,
             (short)*(int *)(*(int *)(this + 0x60) + 0x10) - iVar30);
  iVar11 = *(int *)(this + 0x98);
  (**(code **)(**(int **)(this + 0xe4) + 0x14))
            (*(int **)(this + 0xe4),*(int *)(iVar11 + 0xc) / 2,*(int *)(iVar11 + 0x10) / 2);
  piVar22 = *(int **)(this + 0x8c);
  (**(code **)(*piVar22 + 0x14))
            (piVar22,*(int *)(*(int *)(this + 0x60) + 0x10) >> 0x10,
             (short)*(int *)(*(int *)(this + 0x60) + 0x10) - iVar30);
  iVar11 = *(int *)(this + 0x8c);
  (**(code **)(**(int **)(this + 0xd4) + 0x14))
            (*(int **)(this + 0xd4),*(int *)(iVar11 + 0xc) / 2,*(int *)(iVar11 + 0x10) / 2);
  L_PrintLog((char *)(DAT_001dec98 + 0x1deb60),(char *)(DAT_001dec9c + 0x1deb62));
  uVar31 = *(undefined4 *)(this + 0xc);
  uVar29 = *(undefined4 *)(*(int *)(this + 0xb4) + 0x10);
  piVar22 = *(int **)(this + 0xa0);
  pcVar14 = *(code **)(*piVar22 + 0x14);
  iVar11 = SmDev();
  uVar27 = *(undefined4 *)(iVar11 * 4 + DAT_001deca0 + 0x1deb86);
  iVar11 = SmDev();
  uVar29 = __floatsisf(uVar29);
  uVar31 = __floatsisf(uVar31);
  uVar27 = __subsf3(uVar31,uVar27);
  __addsf3(uVar27,*(undefined4 *)(DAT_001deca4 + iVar11 * 4 + 0x1debe0));
  uVar27 = __fixsfsi();
  uVar31 = __fixsfsi(uVar29);
  (*pcVar14)(piVar22,uVar27,uVar31);
  uVar27 = *(undefined4 *)(this + 0xc);
  uVar32 = *(undefined4 *)(*(int *)(this + 0xa0) + 0x10);
  piVar22 = *(int **)(this + 0xa4);
  pcVar14 = *(code **)(*piVar22 + 0x14);
  iVar11 = SmDev();
  uVar31 = *(undefined4 *)(iVar11 * 4 + DAT_001deca8 + 0x1debec);
  iVar11 = SmDev();
  uVar12 = __mulsf3(uVar4,DAT_001decac);
  uVar32 = __floatsisf(uVar32);
  uVar32 = __addsf3(uVar32,uVar12);
  uVar29 = __addsf3(uVar29,uVar32);
  uVar27 = __floatsisf(uVar27);
  uVar27 = __subsf3(uVar27,uVar31);
  __addsf3(uVar27,*(undefined4 *)((int)&DAT_001dec74 + DAT_001decb0 + iVar11 * 4 + 2));
  uVar27 = __fixsfsi();
  uVar31 = __fixsfsi(uVar29);
  (*pcVar14)(piVar22,uVar27,uVar31);
  uVar27 = *(undefined4 *)(this + 0xc);
  uVar32 = *(undefined4 *)(*(int *)(this + 0xa4) + 0x10);
  piVar22 = *(int **)(this + 0xb0);
  pcVar14 = *(code **)(*piVar22 + 0x14);
  iVar11 = SmDev();
  uVar31 = *(undefined4 *)(iVar11 * 4 + DAT_001decb4 + 0x1dec6a);
  iVar11 = SmDev();
  uVar32 = __floatsisf(uVar32);
  uVar32 = __addsf3(uVar32,uVar12);
  uVar29 = __addsf3(uVar29,uVar32);
  uVar27 = __floatsisf(uVar27);
  uVar27 = __subsf3(uVar27,uVar31);
  __addsf3(uVar27,*(undefined4 *)(DAT_001def28 + iVar11 * 4 + 0x1ded48));
  uVar27 = __fixsfsi();
  uVar31 = __fixsfsi(uVar29);
  (*pcVar14)(piVar22,uVar27,uVar31);
  uVar31 = *(undefined4 *)(this + 0xc);
  uVar32 = *(undefined4 *)(*(int *)(this + 0xb0) + 0x10);
  piVar22 = *(int **)(this + 0xa8);
  pcVar14 = *(code **)(*piVar22 + 0x14);
  iVar11 = SmDev();
  uVar27 = *(undefined4 *)(iVar11 * 4 + DAT_001def2c + 0x1ded24);
  iVar11 = SmDev();
  uVar31 = __floatsisf(uVar31);
  uVar27 = __subsf3(uVar31,uVar27);
  __addsf3(uVar27,*(undefined4 *)(DAT_001def30 + iVar11 * 4 + 0x1dedbe));
  uVar27 = __fixsfsi();
  uVar31 = __floatsisf(uVar32);
  uVar31 = __addsf3(uVar31,uVar12);
  __addsf3(uVar29,uVar31);
  uVar29 = __fixsfsi();
  uVar34 = (*pcVar14)(piVar22,uVar27,uVar29);
  uVar34 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x90),(float)uVar34,
                      (float)((ulonglong)uVar34 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0x94),(float)uVar34,(float)((ulonglong)uVar34 >> 0x20));
  iVar2 = __divsi3(((((((((iVar15 - iVar16) + iVar30 * -4) - iVar2) - iVar17) - iVar18) - iVar3) -
                    iVar19) - iVar10) - iVar20,7);
  uVar27 = __floatsisf();
  iVar11 = *(int *)(this + 0x60);
  if ((*(char *)(iVar11 + DAT_001def34) == '\0') && (*(char *)(iVar11 + DAT_001def38) == '\0')) {
    if ((*(char *)(iVar11 + DAT_001df320) == '\0') && (*(char *)(iVar11 + DAT_001df324) == '\0'))
    goto LAB_001defce;
    uVar29 = *(undefined4 *)(this + 0xc);
    local_e4 = *(code **)(**(int **)(this + 0x94) + 0x14);
    iVar11 = SmDev();
    uVar29 = __floatsisf(uVar29);
    uVar31 = __addsf3(uVar27,*(undefined4 *)(iVar11 * 4 + DAT_001df328 + 0x1def80));
    uVar29 = __subsf3(uVar29,uVar31);
    iVar15 = *(int *)(this + 0x94);
    __divsi3(*(undefined4 *)(iVar15 + 0xc),3);
    uVar31 = __floatsisf();
    __subsf3(uVar29,uVar31);
    uVar29 = __fixsfsi();
    uVar34 = __floatsidf(*(undefined4 *)(*(int *)(this + 0xb4) + 0x10));
    __muldf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),DAT_001df318,DAT_001df31c);
    uVar31 = __fixdfsi();
  }
  else {
    uVar29 = *(undefined4 *)(this + 0xc);
    pcVar14 = *(code **)(**(int **)(this + 0x90) + 0x14);
    iVar11 = SmDev();
    uVar29 = __floatsisf(uVar29);
    uVar31 = __addsf3(uVar27,*(undefined4 *)(iVar11 * 4 + DAT_001def3c + 0x1dedfa));
    uVar29 = __subsf3(uVar29,uVar31);
    iVar11 = *(int *)(this + 0x90);
    __divsi3(*(undefined4 *)(iVar11 + 0xc),3);
    uVar31 = __floatsisf();
    __subsf3(uVar29,uVar31);
    uVar29 = __fixsfsi();
    uVar34 = __floatsidf(*(undefined4 *)(*(int *)(this + 0xb4) + 0x10));
    __muldf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),DAT_001def20,DAT_001def24);
    uVar31 = __fixdfsi();
    (*pcVar14)(iVar11,uVar29,uVar31);
    if ((*(char *)(*(int *)(this + 0x60) + DAT_001def40) == '\0') &&
       (*(char *)(*(int *)(this + 0x60) + DAT_001def44) == '\0')) goto LAB_001defce;
    uVar29 = *(undefined4 *)(this + 0xc);
    local_e4 = *(code **)(**(int **)(this + 0x94) + 0x14);
    iVar11 = SmDev();
    uVar29 = __floatsisf(uVar29);
    iVar15 = *(int *)(this + 0x94);
    uVar31 = __addsf3(uVar27,*(undefined4 *)(iVar11 * 4 + DAT_001def48 + 0x1dee82));
    uVar29 = __subsf3(uVar29,uVar31);
    __divsi3(*(undefined4 *)(iVar15 + 0xc),3);
    uVar31 = __floatsisf();
    __subsf3(uVar29,uVar31);
    uVar29 = __fixsfsi();
    uVar34 = __floatsidf(*(undefined4 *)(*(int *)(this + 0xb4) + 0x10));
    uVar34 = __muldf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),DAT_001def20,DAT_001def24);
    uVar35 = __floatsidf(*(undefined4 *)(*(int *)(this + 0x90) + 0x10));
    uVar34 = __adddf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),(int)uVar35,
                      (int)((ulonglong)uVar35 >> 0x20));
    __mulsf3(uVar4,0x42000000);
    uVar35 = __extendsfdf2();
    uVar34 = __adddf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),(int)uVar35,
                      (int)((ulonglong)uVar35 >> 0x20));
    uVar35 = __floatsidf(iVar30);
    __adddf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),(int)uVar35,
             (int)((ulonglong)uVar35 >> 0x20));
    uVar31 = __fixdfsi();
  }
  (*local_e4)(iVar15,uVar29,uVar31);
LAB_001defce:
  if (*(char *)(*(int *)(this + 0x60) + DAT_001df32c) != '\0') {
    piVar22 = *(int **)(this + 0xec);
    uVar29 = *(undefined4 *)(this + 0xc);
    pcVar14 = *(code **)(*piVar22 + 0x14);
    iVar11 = SmDev();
    iVar15 = *(int *)(this + 0x94);
    uVar29 = __floatsisf(uVar29);
    uVar31 = __addsf3(uVar27,*(undefined4 *)(iVar11 * 4 + DAT_001df330 + 0x1df004));
    uVar29 = __subsf3(uVar29,uVar31);
    __divsi3(*(undefined4 *)(iVar15 + 0xc),3);
    uVar31 = __floatsisf();
    __subsf3(uVar29,uVar31);
    uVar29 = __fixsfsi();
    uVar34 = __floatsidf(*(undefined4 *)(*(int *)(this + 0xb4) + 0x10));
    uVar34 = __muldf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),DAT_001df318,DAT_001df31c);
    uVar35 = __floatsidf(*(undefined4 *)(*(int *)(this + 0x90) + 0x10));
    uVar34 = __adddf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),(int)uVar35,
                      (int)((ulonglong)uVar35 >> 0x20));
    uVar35 = __floatsidf(*(undefined4 *)(iVar15 + 0x10));
    uVar34 = __adddf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),(int)uVar35,
                      (int)((ulonglong)uVar35 >> 0x20));
    uVar35 = __floatsidf(iVar30);
    uVar34 = __adddf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),(int)uVar35,
                      (int)((ulonglong)uVar35 >> 0x20));
    __mulsf3(uVar4,0x42800000);
    uVar35 = __extendsfdf2();
    __adddf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),(int)uVar35,
             (int)((ulonglong)uVar35 >> 0x20));
    uVar31 = __fixdfsi();
    (*pcVar14)(piVar22,uVar29,uVar31);
  }
  iVar11 = SmDev();
  uVar29 = *(undefined4 *)(DAT_001df334 + iVar11 * 4 + 0x1df0d6);
  piVar22 = *(int **)(this + 0x110);
  pcVar14 = *(code **)(*piVar22 + 0x14);
  iVar15 = *(int *)(*(int *)(this + 0xbc) + 0x10);
  iVar11 = SmDev();
  uVar29 = __floatsisf(uVar29);
  __mulsf3(uVar29,uVar13);
  uVar13 = __fixsfsi();
  uVar29 = __floatsisf(iVar30 + iVar15);
  uVar31 = __floatsisf(*(undefined4 *)(DAT_001df338 + iVar11 * 4 + 0x1df12e));
  uVar4 = __mulsf3(uVar31,uVar4);
  __addsf3(uVar29,uVar4);
  uVar4 = __fixsfsi();
  (*pcVar14)(piVar22,uVar13,uVar4);
  (**(code **)(**(int **)(this + 0x114) + 0x14))
            (*(int **)(this + 0x114),*(undefined4 *)(*(int *)(this + 0x110) + 4),
             *(undefined4 *)(*(int *)(this + 0x110) + 8));
  L_PrintLog((char *)(DAT_001df33c + 0x1df140),(char *)(DAT_001df340 + 0x1df142));
  iVar15 = *(int *)(*(int *)(this + 0x88) + 0xc);
  iVar11 = SmDev();
  uVar13 = *(undefined4 *)(iVar11 * 4 + *(int *)(iVar26 + DAT_001df344));
  piVar22 = *(int **)(this + 0xb8);
  pcVar14 = *(code **)(*piVar22 + 0x14);
  iVar11 = SmDev();
  uVar4 = __floatsisf(uVar21);
  uVar8 = __addsf3(uVar27,uVar8);
  __subsf3(uVar4,uVar8);
  __fixsfsi();
  uVar4 = __floatsisf();
  uVar8 = __floatsisf(iVar15 + iVar2 + iVar10);
  uVar13 = __addsf3(uVar8,uVar13);
  uVar13 = __subsf3(uVar13,DAT_001df348);
  __subsf3(uVar4,uVar13);
  iVar10 = __fixsfsi();
  uVar13 = __floatsisf();
  __addsf3(uVar13,*(undefined4 *)(iVar11 * 4 + *(int *)(iVar26 + DAT_001df34c)));
  uVar4 = __fixsfsi();
  (*pcVar14)(piVar22,uVar4,iVar30);
  piVar22 = *(int **)(this + 0xcc);
  uVar4 = *(undefined4 *)(*(int *)(this + 0xb8) + 0xc);
  iVar11 = SmDev();
  uVar4 = __floatsisf(uVar4);
  pSVar25 = *(ScreenElement **)(this + 0xb8);
  __addsf3(uVar4,*(undefined4 *)(iVar11 * 4 + *(int *)(iVar26 + DAT_001df350)));
  iVar11 = __fixsfsi();
  iVar11 = ScreenElement::localToParentCoords(pSVar25,iVar11,*(int *)(pSVar25 + 0x10) >> 1);
  (**(code **)(*piVar22 + 0x14))(piVar22,iVar11 >> 0x10,(int)(short)iVar11);
  piVar22 = *(int **)(this + 0x88);
  pcVar14 = *(code **)(*piVar22 + 0x14);
  iVar11 = SmDev();
  __addsf3(uVar13,*(undefined4 *)(iVar11 * 4 + *(int *)(iVar26 + DAT_001df354)));
  uVar13 = __fixsfsi();
  uVar34 = (*pcVar14)(piVar22,uVar13,iVar30);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x88),(float)uVar34,(float)((ulonglong)uVar34 >> 0x20));
  iVar10 = iVar10 - (iVar2 + *(int *)(*(int *)(this + 0xb8) + 0xc) + iVar3);
  (**(code **)(**(int **)(this + 0x10c) + 0x14))
            (*(int **)(this + 0x10c),iVar10,iVar30 + *(int *)(*(int *)(this + 0xbc) + 0x10));
  piVar22 = *(int **)(this + 0xf0);
  pcVar14 = *(code **)(*piVar22 + 0x14);
  iVar3 = SmDev();
  (*pcVar14)(piVar22,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar26 + DAT_001df358)),
             iVar30 + *(int *)(*(int *)(this + 0xbc) + 0x10));
  piVar22 = *(int **)(this + 0xbc);
  (**(code **)(*piVar22 + 0x14))(piVar22,iVar10,iVar30);
  piVar22 = *(int **)(this + 0xd0);
  pSVar25 = *(ScreenElement **)(this + 0xbc);
  iVar3 = ScreenElement::localToParentCoords
                    (pSVar25,*(int *)(pSVar25 + 0xc) + (*(int *)(pSVar25 + 0xc) >> 3),
                     *(int *)(pSVar25 + 0x10) >> 1);
  (**(code **)(*piVar22 + 0x14))(piVar22,iVar3 >> 0x10,(int)(short)iVar3);
  iVar11 = *(int *)(*(int *)(this + 0xbc) + 0xc);
  iVar3 = SmDev();
  uVar13 = __floatsisf(iVar10);
  uVar4 = __floatsisf(iVar11 + iVar2);
  uVar4 = __addsf3(uVar4,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar26 + DAT_001df35c)));
  __subsf3(uVar13,uVar4);
  uVar13 = __fixsfsi();
  piVar22 = *(int **)(this + 0xf8);
  (**(code **)(*piVar22 + 0x14))(piVar22,uVar13,iVar30 + 10);
  pSVar25 = *(ScreenElement **)(this + 0xf8);
  piVar22 = *(int **)(this + 200);
  iVar2 = ScreenElement::localToParentCoords
                    (pSVar25,*(int *)(pSVar25 + 0xc),*(int *)(pSVar25 + 0x10));
  (**(code **)(*piVar22 + 0x14))(piVar22,iVar2 >> 0x10,(int)(short)iVar2);
  iVar2 = SmDev();
  __addsf3(uVar27,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar26 + DAT_001df6e4)));
  iVar2 = __fixsfsi();
  piVar22 = *(int **)(this + 0xc0);
  (**(code **)(*piVar22 + 0x14))(piVar22,iVar2,iVar30);
  iVar3 = (**(code **)(**(int **)(this + 0xc0) + 0x5c))();
  piVar22 = *(int **)(this + 0xc4);
  pcVar14 = *(code **)(*piVar22 + 0x14);
  iVar10 = *(int *)(*(int *)(this + 0xf8) + 4);
  iVar15 = *(int *)(*(int *)(this + 0xf8) + 0xc);
  iVar11 = SmDev();
  uVar13 = __floatsisf(iVar30);
  __addsf3(uVar13,*(undefined4 *)(iVar11 * 4 + *(int *)(iVar26 + DAT_001df6e8)));
  uVar13 = __fixsfsi();
  (*pcVar14)(piVar22,(iVar10 - iVar15) + iVar2 + iVar3 >> 1,uVar13);
  piVar28 = *(int **)(this + 0x108);
  piVar22 = *(int **)(this + 0xc0);
  pcVar14 = *(code **)(*piVar28 + 0x14);
  iVar10 = piVar22[1];
  iVar2 = (**(code **)(*piVar22 + 0x5c))();
  iVar3 = *(int *)(this + 0xc0);
  (*pcVar14)(piVar28,iVar10 + iVar2 / 2,*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x10));
  piVar22 = *(int **)(this + 0xe8);
  if (piVar22 != (int *)0x0) {
    iVar2 = *(int *)(this + 0x108);
    iVar3 = *piVar22;
    uVar13 = __floatsisf(*(undefined4 *)(iVar2 + 4));
    __addsf3(uVar13,**(undefined4 **)(iVar26 + DAT_001df6ec));
    uVar13 = __fixsfsi();
    uVar4 = __floatsisf(*(undefined4 *)(iVar2 + 8));
    __addsf3(uVar4,**(undefined4 **)(iVar26 + DAT_001df6f0));
    uVar4 = __fixsfsi();
    (**(code **)(iVar3 + 0x14))(piVar22,uVar13,uVar4);
  }
  L_PrintLog((char *)(DAT_001df6f4 + 0x1df4a4),(char *)(DAT_001df6f8 + 0x1df4a6));
  iVar2 = DAT_001df6fc;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001df6fc),7,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar5,(CImage *)0x0,0,0,true);
  this_02 = (Vector<ZCImageButton*> *)(this + 0x6c);
  Vector<ZCImageButton*>::addElement(this_02,pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xf8,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  Vector<ZCImageButton*>::addElement(this_02,pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0x102,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  Vector<ZCImageButton*>::addElement(this_02,pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xfa,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  Vector<ZCImageButton*>::addElement(this_02,pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xf6,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  Vector<ZCImageButton*>::addElement(this_02,pZVar7);
  pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),9,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  Vector<ZCImageButton*>::addElement(this_02,pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xf7,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  Vector<ZCImageButton*>::addElement(this_02,pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xf9,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  Vector<ZCImageButton*>::addElement(this_02,pZVar7);
  iVar2 = DAT_001df6fc;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001df6fc),0xd,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  Vector<ZCImageButton*>::addElement(this_02,pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0xff,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  Vector<ZCImageButton*>::addElement(this_02,pZVar7);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0x100,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  Vector<ZCImageButton*>::addElement(this_02,pZVar7);
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x70) + 1; iVar2 = iVar2 + 1) {
    pSVar25 = *(ScreenElement **)(iVar2 * 4 + *(int *)(this + 0x74));
    ScreenElement::addChild((ScreenElement *)this,pSVar25);
    (**(code **)(*(int *)pSVar25 + 0x20))(pSVar25,0);
  }
  String::String(aSStack_44,0);
  iVar26 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(DAT_001dfa54 + iVar2 * 4 + 0x1df764) + 0x136) * 4 + iVar26);
  pSVar25 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar25,aSStack_44,uVar13,0xffffffff,0xff000000,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0xd8) = pSVar25;
  ScreenElement::addChild((ScreenElement *)this,pSVar25);
  String::~String(aSStack_44);
  piVar22 = *(int **)(this + 0xd8);
  (**(code **)(*piVar22 + 0x20))(piVar22,0);
  String::String(aSStack_3c,0);
  iVar26 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(DAT_001dfa58 + iVar2 * 4 + 0x1df7cc) + 0x136) * 4 + iVar26);
  pSVar25 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar25,aSStack_3c,uVar13,0xffffffff,0xff000000,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0xdc) = pSVar25;
  ScreenElement::addChild((ScreenElement *)this,pSVar25);
  String::~String(aSStack_3c);
  piVar22 = *(int **)(this + 0xdc);
  (**(code **)(*piVar22 + 0x20))(piVar22,0);
  String::String(aSStack_34,0);
  iVar26 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(DAT_001dfa5c + iVar2 * 4 + 0x1df834) + 0x136) * 4 + iVar26);
  pSVar25 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar25,aSStack_34,uVar13,0xffffffff,0xff000000,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0xe0) = pSVar25;
  ScreenElement::addChild((ScreenElement *)this,pSVar25);
  String::~String(aSStack_34);
  piVar22 = *(int **)(this + 0xe0);
  (**(code **)(*piVar22 + 0x20))(piVar22,0);
  piVar22 = *(int **)(this + 0xb4);
  pcVar14 = *(code **)(*piVar22 + 0x2c);
  String::String(aSStack_2c,0);
  iVar26 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(DAT_001dfa60 + iVar2 * 4 + 0x1df8aa) + 0x136) * 4 + iVar26);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar9,aSStack_2c,uVar13,0xffffffff,0xff000000,1,1,9,0,0);
  *(BitmapTextElement **)(this + 0xf4) = pBVar9;
  (*pcVar14)(piVar22,pBVar9);
  String::~String(aSStack_2c);
  piVar22 = *(int **)(this + 0xf4);
  (**(code **)(*piVar22 + 0x20))(piVar22,0);
  uVar13 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001dfa64),0x1e,false)
  ;
  *(undefined4 *)(this + 0x78) = uVar13;
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x70) + 1; iVar2 = iVar2 + 1) {
    local_24 = 0;
    local_20 = 0;
    pIVar6 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar6,*(CImage **)(this + 0x78),0,'\x12',true);
    local_1c = pIVar6;
    Vector<HudElement::NewIndicator>::addElement
              ((Vector<HudElement::NewIndicator> *)(this + 0x7c),local_24,local_20,pIVar6);
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar6);
    (**(code **)(*(int *)pIVar6 + 0x20))(pIVar6,0);
  }
  L_PrintLog((char *)(DAT_001dfa68 + 0x1df91a),(char *)(DAT_001dfa6c + 0x1df91c));
  return this;
}


