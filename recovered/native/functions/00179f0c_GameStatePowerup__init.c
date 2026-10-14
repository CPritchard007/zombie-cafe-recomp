/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00179f0c GameStatePowerup::init */

/* GameStatePowerup::init() */

void __thiscall GameStatePowerup::init(GameStatePowerup *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ScreenElement *this_00;
  CImage *pCVar4;
  ColorModBg *this_01;
  ImageElement *pIVar5;
  TrueTypeTextElement *pTVar6;
  ZCImageButton *pZVar7;
  BitmapTextElement *pBVar8;
  CImage *pCVar9;
  CImage *pCVar10;
  ConfirmDialog *this_02;
  NoticeDialog *this_03;
  PUResultDialog *this_04;
  CharacterInstance *this_05;
  int iVar11;
  code *pcVar12;
  int iVar13;
  int *piVar14;
  ImageButton *pIVar15;
  int iVar16;
  int *piVar17;
  GameStatePowerup *pGVar18;
  int iVar19;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar20;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  undefined8 uVar21;
  undefined4 uVar22;
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_0017a2e0 + 0x179f1a;
  local_1c = **(int **)(iVar1 + DAT_0017a2e4);
  L_PrintLog((char *)(DAT_0017a2ec + 0x179f28),(char *)(DAT_0017a2e8 + 0x179f26));
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadRecipeImages(*(ZombieCafe **)(this + 0xc));
  piVar14 = *(int **)(iVar1 + DAT_0017a2f0);
  iVar16 = *piVar14;
  iVar2 = SmDev();
  uVar3 = FontManager::addFont(iVar16,SUB41(*(undefined4 *)(DAT_0017a2f4 + iVar2 * 4 + 0x179fc2),0))
  ;
  *(undefined4 *)(this + 0x18) = uVar3;
  iVar16 = *piVar14;
  iVar2 = SmDev();
  uVar3 = FontManager::addFont(iVar16,SUB41(*(undefined4 *)(iVar2 * 4 + DAT_0017a2f8 + 0x179f74),0))
  ;
  *(undefined4 *)(this + 0x1c) = uVar3;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  pcVar12 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a2fc),2,false);
  this_01 = (ColorModBg *)operator_new(0x9c);
  uVar22 = 0x12;
  uVar3 = DAT_0017a300;
  ColorModBg::ColorModBg(this_01,pCVar4,extraout_s0,extraout_s1,0x40000000,'\0');
  *(ColorModBg **)(this + 0x98) = this_01;
  (*pcVar12)(this_00,this_01,pcVar12,this + 0x98,uVar3,uVar22);
  piVar14 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar14 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a304),0x22,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0_00,extraout_s1_00,(uchar)DAT_0017a308,SUB41(DAT_0017a30c,0));
  *(ImageElement **)(this + 0xa4) = pIVar5;
  (*pcVar12)(piVar14,pIVar5);
  piVar14 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar14 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a2fc),10,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  uVar3 = 0x12;
  uVar22 = 1;
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0_01,extraout_s1_01,'\0',false);
  *(ImageElement **)(this + 0x9c) = pIVar5;
  (*pcVar12)(piVar14,pIVar5,pcVar12,this + 0x9c,uVar3,uVar22);
  piVar14 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar14 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a2fc),0x2d,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
  *(ImageElement **)(this + 0xa0) = pIVar5;
  (*pcVar12)(piVar14,pIVar5);
  piVar14 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar14 + 0x2c);
  iVar16 = DAT_0017a310 + 0x17a0a2;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a314),0xef,false);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)(iVar16 + iVar2 * 4 + 0x18);
  iVar2 = SmDev();
  uVar22 = *(undefined4 *)(iVar16 + iVar2 * 4 + 0x18);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0_02,extraout_s1_02,(uchar)uVar3,SUB41(uVar22,0));
  *(ImageElement **)(this + 0xec) = pIVar5;
  (*pcVar12)(piVar14,pIVar5);
  piVar14 = *(int **)(this + 0xec);
  iVar16 = DAT_0017a318 + 0x17a0f6;
  pcVar12 = *(code **)(*piVar14 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar16 + iVar2 * 4 + 0x30));
  __mulsf3(uVar3,*(undefined4 *)(this + 0x530));
  uVar3 = __fixsfsi();
  iVar2 = SmDev();
  (*pcVar12)(piVar14,uVar3,*(undefined4 *)(iVar16 + iVar2 * 4 + 0x48));
  L_PrintLog((char *)(DAT_0017a31c + 0x17a130),(char *)(DAT_0017a320 + 0x17a132));
  piVar14 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar14 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a304),0x17,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
  *(ImageElement **)(this + 0xb0) = pIVar5;
  (*pcVar12)(piVar14,pIVar5);
  String::String(aSStack_144,(char *)(DAT_0017a324 + 0x17a174));
  piVar14 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar14 + 0x2c);
  String::String(aSStack_13c,aSStack_144);
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,aSStack_13c,*(undefined4 *)(this + 0x18),DAT_0017a328,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xf8) = pTVar6;
  (*pcVar12)(piVar14,pTVar6);
  String::~String(aSStack_13c);
  piVar14 = *(int **)(iVar1 + DAT_0017a32c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0xf8));
  L_PrintLog((char *)(DAT_0017a330 + 0x17a1d0),(char *)(DAT_0017a334 + 0x17a1d2));
  sprintf(acStack_11c,(char *)(DAT_0017a338 + 0x17a1e0),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(DAT_0017a33c + 0x17a1ec),acStack_11c);
  String::String(aSStack_134,(char *)(DAT_0017a340 + 0x17a1f6));
  String::operator=(aSStack_144,aSStack_134);
  String::~String(aSStack_134);
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_12c,aSStack_144);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)(DAT_0017a344 + iVar2 * 4 + 0x17a282);
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,aSStack_12c,*(undefined4 *)(this + 0x1c),uVar3,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x104) = pTVar6;
  (*pcVar12)(piVar17,pTVar6);
  String::~String(aSStack_12c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x104));
  L_PrintLog((char *)(DAT_0017a348 + 0x17a26e),(char *)(DAT_0017a34c + 0x17a270));
  sprintf(acStack_11c,(char *)(DAT_0017a350 + 0x17a27e),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(DAT_0017a354 + 0x17a28a),acStack_11c);
  L_PrintLog((char *)(DAT_0017a358 + 0x17a294),(char *)(DAT_0017a35c + 0x17a296));
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a2fc),0x1f,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0_03,extraout_s1_03,'\0',false);
  *(ImageElement **)(this + 0xa8) = pIVar5;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a2fc),0x1f,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0_04,extraout_s1_04,'\0',false);
  *(ImageElement **)(this + 0xac) = pIVar5;
  pIVar5[0x60] = (ImageElement)0x1;
  pGVar18 = this;
  do {
    piVar14 = *(int **)(this + 0x14);
    pcVar12 = *(code **)(*piVar14 + 0x2c);
    pCVar4 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a700),0xc,false)
    ;
    pIVar5 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
    *(ImageElement **)(pGVar18 + 0xb4) = pIVar5;
    (*pcVar12)(piVar14,pIVar5);
    pGVar18 = pGVar18 + 4;
  } while (pGVar18 != this + 0x28);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a700),0x2f,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
  *(ImageElement **)(this + 0x500) = pIVar5;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a700),0x3a,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
  iVar2 = DAT_0017a700;
  *(ImageElement **)(this + DAT_0017a704) = pIVar5;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar2),0x62,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
  iVar16 = DAT_0017a70c;
  iVar2 = DAT_0017a708;
  *(ImageElement **)(this + 0x508) = pIVar5;
  L_PrintLog((char *)(iVar2 + 0x17a448),(char *)(iVar16 + 0x17a44a));
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a700),0x2e,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x14',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xf4) = pZVar7;
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),pZVar7);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a700),8,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x14',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xfc) = pZVar7;
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),pZVar7);
  piVar14 = *(int **)(this + 0xfc);
  pcVar12 = *(code **)(*piVar14 + 0x2c);
  String::String(aSStack_124,(char *)(DAT_0017a710 + 0x17a4cc));
  iVar16 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_0017a714 + iVar2 * 4 + 0x17a558) + 0x136) * 4 + iVar16);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_124,uVar3,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0x100) = pBVar8;
  (*pcVar12)(piVar14,pBVar8);
  String::~String(aSStack_124);
  FUN_00177ad2(*(undefined4 *)(this + 0x100),
               ((int)*(short *)(*(int *)(this + 0xfc) + 0xc) >> 1) << 0x10 |
               (int)*(short *)(*(int *)(this + 0xfc) + 0x10) >> 1 & 0xffffU);
  piVar14 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar14 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a700),3,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xf0) = pZVar7;
  (*pcVar12)(piVar14,pZVar7);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a718),0x33,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
  *(ImageElement **)(this + 0xe4) = pIVar5;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a718),0x11c,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x14',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x108) = pZVar7;
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),pZVar7);
  (**(code **)(**(int **)(this + 0x108) + 0x20))(*(int **)(this + 0x108),0);
  L_PrintLog((char *)(DAT_0017a71c + 0x17a5f8),(char *)(DAT_0017a720 + 0x17a5fa));
  piVar14 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar14 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a718),0x116,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x10c) = pZVar7;
  (*pcVar12)(piVar14,pZVar7);
  pIVar15 = *(ImageButton **)(this + 0x10c);
  SmDev();
  uVar21 = SmDev();
  ImageButton::setScale(pIVar15,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  (**(code **)(**(int **)(this + 0x10c) + 0x14))(*(int **)(this + 0x10c),10,10);
  piVar14 = *(int **)(this + 0x14);
  iVar2 = *(int *)(*(int *)(this + 0x10c) + 0xc);
  pcVar12 = *(code **)(*piVar14 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017a718),DAT_0017a72c,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x110) = pZVar7;
  (*pcVar12)(piVar14,pZVar7);
  pIVar15 = *(ImageButton **)(this + 0x110);
  SmDev();
  uVar21 = SmDev();
  ImageButton::setScale(pIVar15,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  (**(code **)(**(int **)(this + 0x110) + 0x14))(*(int **)(this + 0x110),iVar2 + 10,10);
  (**(code **)(**(int **)(this + 0x110) + 0x20))(*(int **)(this + 0x110),1);
  for (iVar2 = 0; iVar2 < *(int *)(*(int *)(this + 0xc) + DAT_0017a924 + 4) + 1; iVar2 = iVar2 + 1)
  {
    iVar19 = iVar2 * 4;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0x3c),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0017a924 + 8) + iVar19)
                              + 0x44));
    uVar3 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0017a924 + 8) + iVar19) + 0x48);
    iVar16 = *(int *)(this + 0x4c) + 2;
    if (*(int *)(this + 0x48) < iVar16) {
      iVar13 = *(int *)(this + 0x48) * 2;
      if (iVar13 < iVar16) {
        iVar13 = iVar16;
      }
      Vector<long>::resize((Vector<long> *)(this + 0x48),iVar13,-1);
    }
    iVar16 = DAT_0017a924;
    iVar13 = *(int *)(this + 0x4c);
    *(int *)(this + 0x4c) = iVar13 + 1;
    *(undefined4 *)((iVar13 + 1) * 4 + *(int *)(this + 0x50)) = uVar3;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0x54),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + iVar16 + 8) + iVar19) + 0x4c
                              ));
    uVar3 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0017a924 + 8) + iVar19) + 0x40);
    iVar16 = *(int *)(this + 100) + 2;
    if (*(int *)(this + 0x60) < iVar16) {
      iVar13 = *(int *)(this + 0x60) * 2;
      if (iVar13 < iVar16) {
        iVar13 = iVar16;
      }
      Vector<float>::resize((Vector<float> *)(this + 0x60),iVar13,-1);
    }
    iVar16 = DAT_0017a924;
    iVar13 = *(int *)(this + 100);
    *(int *)(this + 100) = iVar13 + 1;
    *(undefined4 *)((iVar13 + 1) * 4 + *(int *)(this + 0x68)) = uVar3;
    uVar3 = *(undefined4 *)(*(int *)(*(int *)(this + 0xc) + iVar16 + 8) + iVar19);
    iVar16 = *(int *)(this + 0x70) + 2;
    if (*(int *)(this + 0x6c) < iVar16) {
      iVar19 = *(int *)(this + 0x6c) * 2;
      if (iVar19 < iVar16) {
        iVar19 = iVar16;
      }
      Vector<Character*>::resize((Vector<Character*> *)(this + 0x6c),iVar19,-1);
    }
    iVar16 = *(int *)(this + 0x70);
    *(int *)(this + 0x70) = iVar16 + 1;
    *(undefined4 *)((iVar16 + 1) * 4 + *(int *)(this + 0x74)) = uVar3;
  }
  iVar2 = 0;
  do {
    iVar16 = iVar2 + 0x114;
    iVar2 = iVar2 + 4;
    *(undefined4 *)(this + iVar16) = 0;
  } while (iVar2 != 0x378);
  iVar2 = 0;
  do {
    iVar16 = iVar2 + 0x4d0;
    iVar2 = iVar2 + 4;
    iVar19 = 0;
    *(undefined4 *)(this + iVar16) = 0;
  } while (iVar2 != 0x28);
  *(undefined4 *)(this + 0x4f8) = 0;
  iVar16 = DAT_0017a930;
  iVar2 = DAT_0017a928;
  *(undefined4 *)(this + DAT_0017a92c) = 0;
  *(undefined4 *)(this + iVar2) = 0;
  while( true ) {
    iVar13 = *(int *)(this + 0xc) + DAT_0017a924;
    if (*(int *)(iVar13 + 4) + 1 <= iVar19) break;
    if (*(int *)(*(int *)(this + 0xc) + DAT_0017a934) != *(int *)(iVar19 * 4 + *(int *)(iVar13 + 8))
       ) {
      iVar11 = *(int *)(this + iVar2);
      iVar13 = SmDev();
      fVar20 = (float)__mulsf3(*(undefined4 *)(iVar16 + iVar13 * 4 + 0x17a88e),
                               *(undefined4 *)(this + DAT_0017a938));
      uVar3 = createCharacterInstance((Character *)this,fVar20);
      *(undefined4 *)(this + (iVar11 + 0x44) * 4 + 4) = uVar3;
      CharacterInstance::setCurrentAnimation
                (*(CharacterInstance **)(this + (*(int *)(this + iVar2) + 0x44) * 4 + 4),'\x1c',
                 '\x01',true);
      *(int *)(this + iVar2) = *(int *)(this + iVar2) + 1;
    }
    iVar19 = iVar19 + 1;
  }
  L_PrintLog((char *)(DAT_0017a93c + 0x17a8c6),(char *)(DAT_0017a940 + 0x17a8c8));
  iVar16 = DAT_0017aba0;
  for (iVar19 = 0; iVar13 = *(int *)(this + 0xc), iVar19 < *(int *)(iVar13 + 0x5a4) + 1;
      iVar19 = iVar19 + 1) {
    if (*(int *)(iVar13 + DAT_0017a934) != *(int *)(iVar19 * 4 + *(int *)(iVar13 + 0x5a8))) {
      iVar11 = *(int *)(this + iVar2);
      iVar13 = SmDev();
      fVar20 = (float)__mulsf3(*(undefined4 *)(iVar16 + iVar13 * 4 + 0x17a984),
                               *(undefined4 *)(this + DAT_0017a938));
      uVar3 = createCharacterInstance((Character *)this,fVar20);
      *(undefined4 *)(this + (iVar11 + 0x44) * 4 + 4) = uVar3;
      CharacterInstance::setCurrentAnimation
                (*(CharacterInstance **)(this + (*(int *)(this + iVar2) + 0x44) * 4 + 4),'\x1c',
                 '\x01',true);
      *(int *)(this + iVar2) = *(int *)(this + iVar2) + 1;
    }
  }
  iVar2 = ZombieCafe::checkPowerUpBoost();
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  (**(code **)(**(int **)(this + 0xec) + 0x20))(*(int **)(this + 0xec),iVar2);
  this[DAT_0017aba4] = (GameStatePowerup)0x0;
  iVar2 = DAT_0017abac;
  *(undefined4 *)(this + DAT_0017aba8) = 0;
  *(undefined4 *)(this + 0x4a8) = 0;
  *(undefined4 *)(this + DAT_0017abb0) = 0;
  iVar16 = DAT_0017abb4;
  *(undefined4 *)(this + 0x490) = 0;
  *(undefined4 *)(this + iVar16) = 0;
  *(undefined4 *)(this + 0x498) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + DAT_0017abb8) = 0;
  fVar20 = (float)L_PrintLog((char *)(iVar2 + 0x17a98a),(char *)(DAT_0017abbc + 0x17a9aa));
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,0xc,fVar20,false);
  iVar2 = DAT_0017abc0;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0017abc0),0x22,false);
  *(CImage **)(this + 0x510) = pCVar4;
  pCVar9 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar2),8,false);
  *(CImage **)(this + DAT_0017abc4) = pCVar9;
  pCVar10 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar2),0x10,false);
  *(CImage **)(this + 0x518) = pCVar10;
  this_02 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog(this_02,pCVar4,pCVar9,pCVar10,0,extraout_s0_05,(CImage *)0x3f800000);
  iVar16 = DAT_0017abc8;
  *(ConfirmDialog **)(this + DAT_0017abc8) = this_02;
  (**(code **)(*(int *)this_02 + 0x1c))(this_02,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + iVar16),100);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar2),0x22,false);
  *(CImage **)(this + 0x520) = pCVar4;
  pCVar9 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar2),8,false);
  *(CImage **)(this + DAT_0017abcc) = pCVar9;
  this_03 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(this_03,pCVar4,pCVar9,extraout_s0_06);
  iVar2 = DAT_0017abd0;
  *(NoticeDialog **)(this + DAT_0017abd0) = this_03;
  (**(code **)(*(int *)this_03 + 0x1c))(this_03,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + iVar2),0x66);
  this_04 = (PUResultDialog *)operator_new(0xf0);
  PUResultDialog::PUResultDialog
            (this_04,(Vector *)(*(int *)(this + 0xc) + DAT_0017abd4),
             *(ConfirmDialog **)(this + iVar16),*(NoticeDialog **)(this + iVar2));
  *(PUResultDialog **)(this + 0x528) = this_04;
  (**(code **)(*(int *)this_04 + 0x1c))(this_04,0x12);
  (**(code **)(**(int **)(this + 0x528) + 0x20))(*(int **)(this + 0x528),0);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x528),(int)**(char **)(iVar1 + DAT_0017abd8));
  L_PrintLog((char *)(DAT_0017abdc + 0x17aac4),(char *)(DAT_0017abe0 + 0x17aac6));
  iVar2 = SmDev();
  fVar20 = (float)__mulsf3(*(undefined4 *)(DAT_0017abe8 + iVar2 * 4 + 0x17ab12),
                           *(undefined4 *)(this + DAT_0017abec));
  this_05 = (CharacterInstance *)createCharacterInstance((Character *)this,fVar20);
  *(CharacterInstance **)(this + 0x490) = this_05;
  CharacterInstance::setCurrentAnimation(this_05,'\x01','\x01',true);
  String::~String(aSStack_144);
  if (local_1c != **(int **)(iVar1 + DAT_0017abf0)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


