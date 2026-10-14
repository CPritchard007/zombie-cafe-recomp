/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a7e4 GameStateEarlyBird::init */

/* GameStateEarlyBird::init() */

void __thiscall GameStateEarlyBird::init(GameStateEarlyBird *this)

{
  int iVar1;
  undefined4 uVar2;
  ScreenElement *this_00;
  CImage *pCVar3;
  ImageElement *pIVar4;
  BitmapTextElement *pBVar5;
  ZCImageButton *pZVar6;
  TrueTypeTextElement *pTVar7;
  CImage *pCVar8;
  CImage *pCVar9;
  ConfirmDialog *this_01;
  NoticeDialog *this_02;
  int iVar10;
  int iVar11;
  code *pcVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  char *pcVar16;
  int *piVar17;
  GameStateEarlyBird *pGVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  int local_190;
  String aSStack_17c [8];
  String aSStack_174 [8];
  String aSStack_16c [8];
  String aSStack_164 [8];
  String aSStack_15c [8];
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar10 = DAT_0019abc8 + 0x19a7f0;
  local_1c = **(int **)(iVar10 + DAT_0019abcc);
  pcVar16 = (char *)(DAT_0019abd0 + 0x19a7fc);
  L_PrintLog(pcVar16,(char *)(DAT_0019abd4 + 0x19a800));
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  piVar17 = *(int **)(iVar10 + DAT_0019abd8);
  iVar14 = DAT_0019abdc + 0x19a81e;
  iVar11 = *piVar17;
  iVar1 = SmDev();
  uVar2 = FontManager::addFont(iVar11,SUB41(*(undefined4 *)(iVar14 + iVar1 * 4 + 0x60),0));
  *(undefined4 *)(this + 0x18) = uVar2;
  iVar11 = *piVar17;
  iVar1 = SmDev();
  uVar2 = FontManager::addFont(iVar11,SUB41(*(undefined4 *)(iVar14 + iVar1 * 4 + 0x78),0));
  iVar1 = DAT_0019abe0;
  *(undefined4 *)(this + 0x1c) = uVar2;
  L_PrintLog(pcVar16,(char *)(iVar1 + 0x19a852));
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  pcVar12 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019abe4),2,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x38) = pIVar4;
  (*pcVar12)(this_00,pIVar4);
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019abe8),0x22,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_00,extraout_s1_00,'\0',SUB41(DAT_0019abec,0))
  ;
  *(ImageElement **)(this + 0x44) = pIVar4;
  (*pcVar12)(piVar17,pIVar4);
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019abe4),10,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_01,extraout_s1_01,'\0',false);
  *(ImageElement **)(this + 0x3c) = pIVar4;
  (*pcVar12)(piVar17,pIVar4);
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019abe4),0xd,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 0x40) = pIVar4;
  (*pcVar12)(piVar17,pIVar4);
  L_PrintLog((char *)(DAT_0019abf0 + 0x19a966),(char *)(DAT_0019abf4 + 0x19a968));
  local_190 = 8;
  pGVar18 = this;
  do {
    piVar17 = *(int **)(this + 0x14);
    pcVar12 = *(code **)(*piVar17 + 0x2c);
    pCVar3 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019abe4),0xc,false)
    ;
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
    *(ImageElement **)(pGVar18 + 0x48) = pIVar4;
    (*pcVar12)(piVar17,pIVar4);
    piVar17 = *(int **)(this + 0x14);
    pcVar12 = *(code **)(*piVar17 + 0x2c);
    pCVar3 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019abe4),0xe,false)
    ;
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\n',true);
    *(ImageElement **)(pGVar18 + 0x68) = pIVar4;
    (*pcVar12)(piVar17,pIVar4);
    piVar17 = *(int **)(this + 0x14);
    pcVar12 = *(code **)(*piVar17 + 0x2c);
    pCVar3 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019abe8),0x26,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
    *(ImageElement **)(pGVar18 + 0x88) = pIVar4;
    (*pcVar12)(piVar17,pIVar4);
    piVar17 = *(int **)(this + 0x14);
    pcVar12 = *(code **)(*piVar17 + 0x2c);
    String::String(aSStack_17c,0);
    iVar11 = *(int *)(this + 0xc);
    iVar1 = SmDev();
    uVar2 = *(undefined4 *)((*(int *)(DAT_0019abf8 + iVar1 * 4 + 0x19aa7c) + 0x136) * 4 + iVar11);
    pBVar5 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement(pBVar5,aSStack_17c,uVar2,0xff000000,1,1,0x12,0,0);
    *(BitmapTextElement **)(pGVar18 + 0xa8) = pBVar5;
    (*pcVar12)(piVar17,pBVar5);
    String::~String(aSStack_17c);
    piVar17 = *(int **)(pGVar18 + 0xa8);
    pcVar12 = *(code **)(*piVar17 + 0x44);
    String::valueOf((int)aSStack_174);
    (*pcVar12)(piVar17,aSStack_174);
    String::~String(aSStack_174);
    pCVar3 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019abe4),0xf,false)
    ;
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
    *(ImageElement **)(pGVar18 + 200) = pIVar4;
    pGVar18 = pGVar18 + 4;
    local_190 = local_190 + -1;
  } while (local_190 != 0);
  L_PrintLog((char *)(DAT_0019abfc + 0x19aaca),(char *)(DAT_0019ac00 + 0x19aacc));
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019abe4),3,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xe8) = pZVar6;
  (*pcVar12)(piVar17,pZVar6);
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019abe4),8,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x14',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xec) = pZVar6;
  (*pcVar12)(piVar17,pZVar6);
  piVar17 = *(int **)(this + 0xec);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  Vector<String>::elementAt((int)aSStack_16c);
  iVar11 = *(int *)(this + 0xc);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_0019ac08 + iVar1 * 4 + 0x19ab90) + 0x136) * 4 + iVar11);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_16c,uVar2,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xf0) = pBVar5;
  (*pcVar12)(piVar17,pBVar5);
  String::~String(aSStack_16c);
  piVar17 = *(int **)(this + 0xec);
  (**(code **)(*piVar17 + 0x20))(piVar17,0);
  iVar1 = *(int *)(this + 0xec);
  uVar13 = (int)*(short *)(iVar1 + 0x10) >> 1;
  (**(code **)(**(int **)(this + 0xf0) + 0x14))
            (*(int **)(this + 0xf0),
             (int)(uVar13 & 0xffff | ((int)*(short *)(iVar1 + 0xc) >> 1) << 0x10) >> 0x10,
             (int)(short)uVar13);
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  Vector<String>::elementAt((int)aSStack_164);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)(DAT_0019b010 + iVar1 * 4 + 0x19acc2);
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar7,aSStack_164,*(undefined4 *)(this + 0x1c),uVar2,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xf4) = pTVar7;
  (*pcVar12)(piVar17,pTVar7);
  String::~String(aSStack_164);
  iVar1 = DAT_0019b018;
  piVar15 = *(int **)(iVar10 + DAT_0019b014);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0xf4));
  L_PrintLog((char *)(iVar1 + 0x19acba),(char *)(DAT_0019b01c + 0x19acbe));
  sprintf(acStack_11c,(char *)(DAT_0019b020 + 0x19accc),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x19acba),acStack_11c);
  piVar17 = *(int **)(this + 0xf4);
  (**(code **)(*piVar17 + 0x20))(piVar17,0);
  L_PrintLog((char *)(DAT_0019b024 + 0x19acea),(char *)(DAT_0019b028 + 0x19acec));
  Vector<String>::elementAt((int)aSStack_15c);
  String::String(aSStack_154,(char *)(DAT_0019b030 + 0x19ad0c));
  iVar1 = SmDev();
  MultiByteString::insertStringNextLine
            (aSStack_154,aSStack_15c,*(int *)(DAT_0019b034 + iVar1 * 4 + 0x19ad5c));
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_14c,aSStack_154);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)(DAT_0019b038 + iVar1 * 4 + 0x19ad98);
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar7,aSStack_14c,*(undefined4 *)(this + 0x18),uVar2,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xf8) = pTVar7;
  (*pcVar12)(piVar17,pTVar7);
  String::~String(aSStack_14c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0xf8));
  L_PrintLog((char *)(DAT_0019b03c + 0x19ad8c),(char *)(DAT_0019b040 + 0x19ad8e));
  sprintf(acStack_11c,(char *)(DAT_0019b044 + 0x19ad9c),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(DAT_0019b048 + 0x19ada8),acStack_11c);
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_144,(char *)(DAT_0019b04c + 0x19adb6));
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar7,aSStack_144,*(undefined4 *)(this + 0x18),DAT_0019b050,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0xfc) = pTVar7;
  (*pcVar12)(piVar17,pTVar7);
  String::~String(aSStack_144);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0xfc));
  L_PrintLog((char *)(DAT_0019b054 + 0x19ae04),(char *)(DAT_0019b058 + 0x19ae06));
  sprintf(acStack_11c,(char *)(DAT_0019b05c + 0x19ae14),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(DAT_0019b060 + 0x19ae20),acStack_11c);
  Vector<String>::elementAt((int)aSStack_13c);
  String::operator=(aSStack_15c,aSStack_13c);
  String::~String(aSStack_13c);
  String::String(aSStack_134,(char *)(DAT_0019b068 + 0x19ae4e));
  String::operator=(aSStack_154,aSStack_134);
  String::~String(aSStack_134);
  iVar1 = SmDev();
  MultiByteString::insertStringNextLine
            (aSStack_154,aSStack_15c,*(int *)(DAT_0019b06c + iVar1 * 4 + 0x19aeac));
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_12c,aSStack_154);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)(DAT_0019b070 + iVar1 * 4 + 0x19aee8);
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar7,aSStack_12c,*(undefined4 *)(this + 0x18),uVar2,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x100) = pTVar7;
  (*pcVar12)(piVar17,pTVar7);
  String::~String(aSStack_12c);
  piVar17 = *(int **)(iVar10 + DAT_0019b014);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x100));
  L_PrintLog((char *)(DAT_0019b074 + 0x19aee0),(char *)(DAT_0019b078 + 0x19aee2));
  sprintf(acStack_11c,(char *)(DAT_0019b07c + 0x19aef0),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(DAT_0019b080 + 0x19aefc),acStack_11c);
  iVar1 = DAT_0019b084;
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0019b084),0x29,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'!',true);
  *(ImageElement **)(this + 0x364) = pIVar4;
  (*pcVar12)(piVar17,pIVar4);
  piVar17 = *(int **)(this + 0x14);
  pcVar12 = *(code **)(*piVar17 + 0x2c);
  String::String(aSStack_124,0);
  iVar14 = *(int *)(this + 0xc);
  iVar11 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_0019b088 + iVar11 * 4 + 0x19af80) + 0x136) * 4 + iVar14);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_124,uVar2,0xffffffff,1,1,10,0,0);
  *(BitmapTextElement **)(this + 0x368) = pBVar5;
  (*pcVar12)(piVar17,pBVar5);
  String::~String(aSStack_124);
  L_PrintLog((char *)(DAT_0019b08c + 0x19afa0),(char *)(DAT_0019b090 + 0x19afa2));
  *(undefined4 *)(this + 0x354) = 0;
  *(undefined4 *)(this + 0x358) = 0;
  *(undefined4 *)(this + 0x34c) = 0;
  updateEarlyBirdData(this,(void *)**(undefined4 **)(iVar10 + DAT_0019b094));
  L_PrintLog((char *)(DAT_0019b098 + 0x19afd0),(char *)(DAT_0019b09c + 0x19afd2));
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x22,false);
  *(CImage **)(this + 0x378) = pCVar3;
  pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),8,false);
  *(CImage **)(this + 0x37c) = pCVar8;
  pCVar9 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x10,false);
  *(CImage **)(this + 0x380) = pCVar9;
  this_01 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog(this_01,pCVar3,pCVar8,pCVar9,0,extraout_s0_02,(CImage *)0x3f800000);
  *(ConfirmDialog **)(this + 0x374) = this_01;
  (**(code **)(*(int *)this_01 + 0x1c))(this_01,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x374),100);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x22,false);
  *(CImage **)(this + 0x388) = pCVar3;
  pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),8,false);
  *(CImage **)(this + 0x38c) = pCVar8;
  this_02 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(this_02,pCVar3,pCVar8,extraout_s0_03);
  *(NoticeDialog **)(this + 900) = this_02;
  (**(code **)(*(int *)this_02 + 0x1c))(this_02,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 900),0x66);
  L_PrintLog((char *)(DAT_0019b228 + 0x19b138),(char *)(DAT_0019b22c + 0x19b13a));
  String::~String(aSStack_154);
  String::~String(aSStack_15c);
  if (local_1c == **(int **)(iVar10 + DAT_0019b230)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


