/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00196500 GameStateDoJo::init */

/* GameStateDoJo::init() */

void __thiscall GameStateDoJo::init(GameStateDoJo *this)

{
  int iVar1;
  undefined4 uVar2;
  ScreenElement *this_00;
  CImage *pCVar3;
  ImageElement *pIVar4;
  ZCImageButton *pZVar5;
  BitmapTextElement *pBVar6;
  TrueTypeTextElement *pTVar7;
  CharacterInstance *pCVar8;
  CImage *pCVar9;
  CImage *pCVar10;
  ConfirmDialog *this_01;
  NoticeDialog *this_02;
  uchar uVar11;
  byte bVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  GameStateDoJo *pGVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ImageButton *pIVar21;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float fVar22;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined8 uVar23;
  float extraout_s1_03;
  float extraout_s1_04;
  code *local_154;
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar15 = DAT_001968d4 + 0x19650c;
  local_1c = **(int **)(iVar15 + DAT_001968d8);
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  piVar16 = *(int **)(iVar15 + DAT_001968dc);
  iVar19 = *piVar16;
  iVar1 = SmDev();
  uVar2 = FontManager::addFont(iVar19,SUB41(*(undefined4 *)(DAT_001968e0 + iVar1 * 4 + 0x1965ac),0))
  ;
  *(undefined4 *)(this + 0x18) = uVar2;
  iVar19 = *piVar16;
  iVar1 = SmDev();
  uVar2 = FontManager::addFont(iVar19,SUB41(*(undefined4 *)(DAT_001968e4 + iVar1 * 4 + 0x19655e),0))
  ;
  *(undefined4 *)(this + 0x1c) = uVar2;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  pcVar13 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001968e8),2,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x8c) = pIVar4;
  (*pcVar13)(this_00,pIVar4);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001968ec),0x22,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_00,extraout_s1_00,'\0',false);
  *(ImageElement **)(this + 0x9c) = pIVar4;
  (*pcVar13)(piVar16,pIVar4);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001968e8),0x10,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_01,extraout_s1_01,'\0',false);
  *(ImageElement **)(this + 0x90) = pIVar4;
  (*pcVar13)(piVar16,pIVar4);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001968e8),0x17,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_02,extraout_s1_02,'\0',false);
  *(ImageElement **)(this + 0x98) = pIVar4;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001968e8),0x11,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 0x94) = pIVar4;
  piVar16 = *(int **)(this + 0x98);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001968f0),0x116,false)
  ;
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\t',pCVar3,(CImage *)0x0,0,0,true);
  pGVar17 = this + 0xd4;
  *(ZCImageButton **)pGVar17 = pZVar5;
  (*pcVar13)(piVar16,pZVar5);
  pIVar21 = *(ImageButton **)pGVar17;
  SmDev();
  uVar23 = SmDev();
  ImageButton::setScale(pIVar21,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
  (**(code **)(**(int **)pGVar17 + 0x14))(*(int **)pGVar17,10,10);
  iVar1 = *(int *)(*(int *)pGVar17 + 0xc);
  piVar16 = *(int **)(this + 0x98);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001968f0),DAT_001968f8,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\t',pCVar3,(CImage *)0x0,0,0,true);
  pGVar17 = this + 0xd8;
  *(ZCImageButton **)pGVar17 = pZVar5;
  (*pcVar13)(piVar16,pZVar5);
  pIVar21 = *(ImageButton **)pGVar17;
  SmDev();
  uVar23 = SmDev();
  ImageButton::setScale(pIVar21,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
  (**(code **)(**(int **)pGVar17 + 0x14))(*(int **)pGVar17,iVar1 + 10,10);
  (**(code **)(**(int **)pGVar17 + 0x20))(*(int **)pGVar17,1);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001968ec),0x17,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 0xa8) = pIVar4;
  (*pcVar13)(piVar16,pIVar4);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001968f0),0x2e,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 0xb0) = pIVar4;
  iVar1 = SmDev();
  iVar18 = DAT_00196900 + 0x196800;
  *(undefined4 *)(pIVar4 + 0x68) = *(undefined4 *)(iVar18 + iVar1 * 4 + 0x28);
  iVar20 = *(int *)(this + 0xb0);
  iVar19 = SmDev();
  iVar1 = DAT_001968e8;
  *(undefined4 *)(iVar20 + 0x6c) = *(undefined4 *)(iVar18 + iVar19 * 4 + 0x40);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x15,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 0xb4) = pIVar4;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001968e8),0x16,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_03,extraout_s1_03,'\0',false);
  *(ImageElement **)(this + 0xa0) = pIVar4;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001968e8),0x16,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_04,extraout_s1_04,'\0',false);
  *(ImageElement **)(this + 0xa4) = pIVar4;
  iVar1 = DAT_00196904;
  pIVar4[0x60] = (ImageElement)0x1;
  iVar19 = *(int *)(this + 0xc);
  if (this[iVar1] == (GameStateDoJo)0x0) {
    pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar19 + DAT_001968e8),0x12,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    uVar23 = ImageElement::ImageElement(pIVar4,pCVar3,'\x12',false);
    *(ImageElement **)(this + 0xac) = pIVar4;
  }
  else {
    if (this[iVar1] == (GameStateDoJo)0x1) {
      pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar19 + DAT_00196a20),0x13,false);
      pIVar4 = (ImageElement *)operator_new(0x98);
      uVar23 = ImageElement::ImageElement(pIVar4,pCVar3,'\x12',false);
    }
    else {
      pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar19 + DAT_00196a20),0x14,false);
      pIVar4 = (ImageElement *)operator_new(0x98);
      uVar23 = ImageElement::ImageElement(pIVar4,pCVar3,'\x12',false);
    }
    *(ImageElement **)(this + 0xac) = pIVar4;
  }
  ImageElement::setScale
            (*(ImageElement **)(this + 0xac),(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00196a20),3,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'$',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xb8) = pZVar5;
  (*pcVar13)(piVar16,pZVar5);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00196a20),0x18,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x14',pCVar3,(CImage *)0x0,0,0,true);
  pGVar17 = this + 0xbc;
  *(ZCImageButton **)pGVar17 = pZVar5;
  (*pcVar13)(piVar16,pZVar5);
  (**(code **)(**(int **)pGVar17 + 0x20))(*(int **)pGVar17,0);
  piVar16 = *(int **)pGVar17;
  if (this[0x6d0] == (GameStateDoJo)0x0) {
    local_154 = *(code **)(*piVar16 + 0x2c);
    pCVar3 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_00196a24),0x1c,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\t',true);
  }
  else {
    local_154 = *(code **)(*piVar16 + 0x2c);
    pCVar3 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_00196dc0),0x24,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\t',true);
  }
  *(ImageElement **)(this + 0xd0) = pIVar4;
  (*local_154)(piVar16,pIVar4);
  piVar16 = *(int **)(this + 0xbc);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  String::valueOf((int)aSStack_144);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar6,aSStack_144,*(undefined4 *)(*(int *)(this + 0xc) + DAT_00196dc8),0xff000000,1,1,
             0x12,0,0);
  *(BitmapTextElement **)(this + 0xcc) = pBVar6;
  (*pcVar13)(piVar16,pBVar6);
  String::~String(aSStack_144);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00196dcc),8,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x14',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xc0) = pZVar5;
  (*pcVar13)(piVar16,pZVar5);
  piVar16 = *(int **)(this + 0xc0);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  Vector<String>::elementAt((int)aSStack_13c);
  iVar19 = *(int *)(this + 0xc);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00196dd4 + iVar1 * 4 + 0x196b52) + 0x136) * 4 + iVar19);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_13c,uVar2,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xc4) = pBVar6;
  (*pcVar13)(piVar16,pBVar6);
  pGVar17 = this + 0xc0;
  String::~String(aSStack_13c);
  uVar23 = (**(code **)(**(int **)pGVar17 + 0x20))(*(int **)pGVar17,0);
  ImageButton::setScale(*(ImageButton **)pGVar17,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
  uVar14 = (int)*(short *)(*(int *)pGVar17 + 0x10) >> 1;
  (**(code **)(**(int **)(this + 0xc4) + 0x14))
            (*(int **)(this + 0xc4),
             (int)(uVar14 & 0xffff | ((int)*(short *)(*(int *)pGVar17 + 0xc) >> 1) << 0x10) >> 0x10,
             (int)(short)uVar14);
  Vector<String>::elementAt((int)aSStack_134);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_12c,aSStack_134);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)(DAT_00196de0 + iVar1 * 4 + 0x196bf0);
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar7,aSStack_12c,*(undefined4 *)(this + 0x1c),uVar2,1,1,0,2,0,0x11,0);
  *(TrueTypeTextElement **)(this + 200) = pTVar7;
  (*pcVar13)(piVar16,pTVar7);
  String::~String(aSStack_12c);
  piVar16 = *(int **)(iVar15 + DAT_00196de4);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar16,*(TrueTypeTextElement **)(this + 200));
  L_PrintLog((char *)(DAT_00196de8 + 0x196c28),(char *)(DAT_00196dec + 0x196c2a));
  sprintf(acStack_11c,(char *)(DAT_00196df0 + 0x196c38),*(int *)(*piVar16 + 4) + 1);
  L_PrintLog((char *)(DAT_00196df4 + 0x196c44),acStack_11c);
  piVar16 = *(int **)(this + 0x98);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00196df8),0x29,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'!',true);
  *(ImageElement **)(this + DAT_00196dfc) = pIVar4;
  (*pcVar13)(piVar16,pIVar4);
  piVar16 = *(int **)(this + 0x98);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_124,0);
  iVar19 = *(int *)(this + 0xc);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00196e00 + iVar1 * 4 + 0x196cf6) + 0x136) * 4 + iVar19);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_124,uVar2,0xffffffff,1,1,10,0,0);
  *(BitmapTextElement **)(this + 0x6f8) = pBVar6;
  (*pcVar13)(piVar16,pBVar6);
  String::~String(aSStack_124);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00196dc0),0x11c,false)
  ;
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x14',pCVar3,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xdc) = pZVar5;
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),pZVar5);
  piVar16 = *(int **)(this + 0xdc);
  (**(code **)(*piVar16 + 0x20))(piVar16,0);
  for (iVar1 = 0; iVar19 = DAT_00197130,
      iVar1 < *(int *)(*(int *)(this + 0xc) + DAT_00197128 + 4) + 1; iVar1 = iVar1 + 1) {
    iVar18 = iVar1 * 4;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0x34),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00197128 + 8) + iVar18)
                              + 0x44));
    uVar2 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00196e04 + 8) + iVar18) + 0x48);
    iVar19 = *(int *)(this + 0x44) + 2;
    if (*(int *)(this + 0x40) < iVar19) {
      iVar20 = *(int *)(this + 0x40) * 2;
      if (iVar20 < iVar19) {
        iVar20 = iVar19;
      }
      Vector<long>::resize((Vector<long> *)(this + 0x40),iVar20,-1);
    }
    iVar19 = DAT_00196e04;
    iVar20 = *(int *)(this + 0x44);
    *(int *)(this + 0x44) = iVar20 + 1;
    *(undefined4 *)((iVar20 + 1) * 4 + *(int *)(this + 0x48)) = uVar2;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0x4c),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + iVar19 + 8) + iVar18) + 0x4c
                              ));
    uVar2 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00196e04 + 8) + iVar18) + 0x40);
    iVar19 = *(int *)(this + 0x5c) + 2;
    if (*(int *)(this + 0x58) < iVar19) {
      iVar18 = *(int *)(this + 0x58) * 2;
      if (iVar18 < iVar19) {
        iVar18 = iVar19;
      }
      Vector<float>::resize((Vector<float> *)(this + 0x58),iVar18,-1);
    }
    iVar19 = *(int *)(this + 0x5c);
    *(int *)(this + 0x5c) = iVar19 + 1;
    *(undefined4 *)((iVar19 + 1) * 4 + *(int *)(this + 0x60)) = uVar2;
  }
  *(undefined4 *)(this + DAT_0019712c) = 0;
  *(undefined4 *)(this + 0x6e0) = 0;
  iVar18 = 0;
  *(undefined4 *)(this + iVar19) = 0;
  iVar1 = DAT_00197138;
  this[DAT_00197134] = (GameStateDoJo)0x0;
  iVar19 = *(int *)(iVar15 + iVar1);
  iVar1 = ((byte)this[DAT_0019713c] + 4) * 0x2a8;
  pGVar17 = this;
  do {
    iVar20 = *(int *)(iVar1 + iVar19 + iVar18);
    if (iVar20 != 0) {
      pGVar17[DAT_00197140] = SUB41(iVar20,0);
      pGVar17[DAT_00197144] =
           SUB41(*(undefined4 *)(*(int *)(iVar15 + DAT_00197148) + iVar1 + iVar18),0);
    }
    iVar18 = iVar18 + 4;
    pGVar17 = pGVar17 + 2;
  } while (iVar18 != 0x2a8);
  pGVar17 = this;
  for (iVar1 = 0; iVar1 < *(int *)(*(int *)(this + 0xc) + DAT_00197128 + 4) + 1; iVar1 = iVar1 + 1)
  {
    iVar19 = *(int *)(iVar1 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00197128 + 8));
    fVar22 = (float)SmDev();
    pCVar8 = (CharacterInstance *)createCharacterInstance((Character *)this,fVar22);
    *(CharacterInstance **)(pGVar17 + 0xe0) = pCVar8;
    bVar12 = *(byte *)(iVar19 + 0x36);
    if (bVar12 == 0) {
      uVar11 = '\x01';
    }
    else {
      uVar11 = *(uchar *)(DAT_00197150 + (uint)bVar12 * 0x24 + 0x196ee7);
      bVar12 = false;
    }
    CharacterInstance::setCurrentAnimation(pCVar8,uVar11,'\x01',(bool)bVar12);
    pGVar17 = pGVar17 + 4;
  }
  iVar19 = 0;
  while( true ) {
    if (*(int *)(*(int *)(this + 0xc) + 0x5a4) + 1 <= iVar19) break;
    iVar18 = *(int *)(*(int *)(*(int *)(this + 0xc) + 0x5a8) + iVar19 * 4);
    fVar22 = (float)SmDev();
    pCVar8 = (CharacterInstance *)createCharacterInstance((Character *)this,fVar22);
    *(CharacterInstance **)(this + iVar19 * 4 + iVar1 * 4 + 0xe0) = pCVar8;
    bVar12 = *(byte *)(iVar18 + 0x36);
    if (bVar12 == 0) {
      uVar11 = '\x01';
    }
    else {
      uVar11 = *(uchar *)(DAT_00197158 + (uint)bVar12 * 0x24 + 0x196f4f);
      bVar12 = false;
    }
    CharacterInstance::setCurrentAnimation(pCVar8,uVar11,'\x01',(bool)bVar12);
    iVar19 = iVar19 + 1;
  }
  *(int *)(this + DAT_0019715c) = iVar19 + iVar1;
  selectCharacter(this,0,false);
  iVar1 = DAT_00197164;
  iVar19 = *(int *)(*(int *)(this + 0xc) + DAT_00197160);
  if (iVar19 == 0) {
    this[DAT_00197164] = (GameStateDoJo)0x0;
  }
  else {
    *(int *)(this + 0x30) = iVar19;
    createInstructor(this);
    selectCharacter(this,0,true);
    changeMessageWindow((int)this,true);
    (**(code **)(**(int **)(this + 0xbc) + 0x20))(*(int **)(this + 0xbc),1);
    this[iVar1] = (GameStateDoJo)0x3;
    *(undefined4 *)(this + 0x6c0) = 0;
  }
  this[0x6c8] = (GameStateDoJo)(iVar19 == 0);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00197168),0x22,false);
  iVar1 = DAT_00197168;
  *(CImage **)(this + DAT_0019716c) = pCVar3;
  pCVar9 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),8,false);
  *(CImage **)(this + 0x708) = pCVar9;
  pCVar10 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00197168),0x10,false)
  ;
  *(CImage **)(this + DAT_00197170) = pCVar10;
  this_01 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog(this_01,pCVar3,pCVar9,pCVar10,0,extraout_s0_05,(CImage *)0x3f800000);
  *(ConfirmDialog **)(this + 0x700) = this_01;
  (**(code **)(*(int *)this_01 + 0x1c))(this_01,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x700),100);
  iVar1 = DAT_00197168;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00197168),0x22,false);
  *(CImage **)(this + DAT_00197174) = pCVar3;
  pCVar9 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),8,false);
  *(CImage **)(this + 0x718) = pCVar9;
  this_02 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(this_02,pCVar3,pCVar9,extraout_s0_06);
  *(NoticeDialog **)(this + 0x710) = this_02;
  (**(code **)(*(int *)this_02 + 0x1c))(this_02,0x12);
  fVar22 = (float)ScreenElement::setOrder(*(ScreenElement **)(this + 0x710),0x66);
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,0xc,fVar22,false);
  String::~String(aSStack_134);
  if (local_1c != **(int **)(iVar15 + DAT_00197178)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


