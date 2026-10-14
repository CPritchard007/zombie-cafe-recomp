/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ea114 LotteryFeaturedDialog::LotteryFeaturedDialog */

/* LotteryFeaturedDialog::LotteryFeaturedDialog(ZombieCafeGameState*) */

void __thiscall
LotteryFeaturedDialog::LotteryFeaturedDialog
          (LotteryFeaturedDialog *this,ZombieCafeGameState *param_1)

{
  int iVar1;
  int iVar2;
  uchar uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  CImage *pCVar8;
  ImageElement *pIVar9;
  ZCImageButton *this_00;
  ScreenElement *pSVar10;
  TrueTypeTextElement *pTVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  code *pcVar16;
  undefined4 *puVar17;
  int *piVar18;
  int *piVar19;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar20;
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar12 = DAT_001ea500 + 0x1ea120;
  local_1c = **(int **)(iVar12 + DAT_001ea504);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar12 + DAT_001ea508) + 8;
  iVar5 = CapcomApp::getInstance();
  uVar15 = *(undefined4 *)(iVar5 + 0x40);
  iVar5 = CapcomApp::getInstance();
  uVar15 = __mulsf3(uVar15,*(undefined4 *)(iVar5 + 0x50));
  *(undefined4 *)(this + 0x60) = uVar15;
  iVar5 = CapcomApp::getInstance();
  uVar15 = *(undefined4 *)(iVar5 + 0x44);
  iVar5 = CapcomApp::getInstance();
  uVar15 = __mulsf3(uVar15,*(undefined4 *)(iVar5 + 0x50));
  *(undefined4 *)(this + 100) = uVar15;
  CapcomApp::getInstance();
  iVar6 = CapcomApp::getInstance();
  iVar5 = DAT_001ea50c;
  uVar15 = *(undefined4 *)(iVar6 + 0x44);
  uVar14 = *(undefined4 *)(this + 0x60);
  puVar17 = (undefined4 *)(DAT_001ea50c + 0x1ea178);
  uVar7 = __floatsisf(*(undefined4 *)(DAT_001ea50c + 0x1ea190));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  iVar6 = DAT_001ea510;
  uVar13 = *(undefined4 *)(this + 100);
  *(undefined4 *)(iVar5 + 0x1ea1a4) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar6 + 0x1ea194));
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar6 + 0x1ea1a8) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar6 + 0x1ea1c4));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar6 + 0x1ea1d8) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar6 + 0x1ea1ac));
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar6 + 0x1ea1c0) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar6 + 0x1ea1dc));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar6 + 0x1ea1f0) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar6 + 0x1ea1f4));
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar6 + 0x1ea208) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar6 + 0x1ea20c));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar6 + 0x1ea220) = uVar7;
  iVar1 = DAT_001ea518;
  iVar6 = DAT_001ea514;
  uVar7 = __floatsisf(*(undefined4 *)(DAT_001ea514 + 0x1ea21c));
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar6 + 0x1ea230) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar1 + 0x1ea286));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar1 + 0x1ea29a) = uVar7;
  uVar7 = __floatsisf(*puVar17);
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1ea18c) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar5 + 0x1ea1a8));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1ea1bc) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar5 + 0x1ea1c0));
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1ea1d4) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar5 + 0x1ea1d8));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x1ea1ec) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar5 + 0x1ea1f0));
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  iVar2 = DAT_001ea51c;
  *(undefined4 *)(iVar5 + 0x1ea204) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar1 + 0x1ea26e));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar1 + 0x1ea282) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar6 + 0x1ea234));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar6 + 0x1ea248) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar6 + 0x1ea24c));
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar6 + 0x1ea260) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar2 + 0x1ea2dc));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar2 + 0x1ea2f0) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar2 + 0x1ea2f4));
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar2 + 0x1ea308) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar6 + 0x1ea264));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar6 + 0x1ea278) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar6 + 0x1ea27c));
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar6 + 0x1ea290) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar1 + 0x1ea226));
  __mulsf3(uVar7,uVar14);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar1 + 0x1ea23a) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar1 + 0x1ea23e));
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar1 + 0x1ea252) = uVar7;
  uVar7 = __floatsisf(*(undefined4 *)(iVar1 + 0x1ea256));
  __mulsf3(uVar7,uVar13);
  uVar7 = __fixsfsi();
  *(undefined4 *)(iVar1 + 0x1ea26a) = uVar7;
  iVar5 = CapcomApp::getInstance();
  iVar5 = *(int *)(iVar5 + 4);
  *(ZombieCafeGameState **)(this + 0x6c) = param_1;
  *(int *)(this + 0x68) = iVar5;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar5 + 0x7f0),2,false);
  pIVar9 = (ImageElement *)operator_new(0x98);
  uVar3 = __addsf3(*(undefined4 *)(this + 0x60));
  bVar4 = (bool)__addsf3(*(undefined4 *)(this + 100));
  ImageElement::ImageElement(pIVar9,pCVar8,extraout_s0,extraout_s1,uVar3,bVar4);
  *(ImageElement **)(this + 0x70) = pIVar9;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar9);
  iVar5 = DAT_001ea520;
  pCVar8 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + DAT_001ea520),0x4c,false)
  ;
  pIVar9 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar9,pCVar8,extraout_s0_00,extraout_s1_00,(uchar)*(undefined4 *)(this + 0x60),
             SUB41(*(undefined4 *)(this + 100),0));
  *(ImageElement **)(this + 0x74) = pIVar9;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar9);
  pCVar8 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + iVar5),0x28,false);
  pIVar9 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar9,pCVar8,extraout_s0_01,extraout_s1_01,(uchar)*(undefined4 *)(this + 0x60),
             SUB41(*(undefined4 *)(this + 100),0));
  *(ImageElement **)(this + 0x78) = pIVar9;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar9);
  pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + iVar5),6,false)
  ;
  this_00 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_00,'!',pCVar8,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x80) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  uVar20 = __addsf3(uVar15,uVar15);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x80),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  *(undefined4 *)(this + 0xac) = 0;
  pSVar10 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar10,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xa4) = pSVar10;
  ScreenElement::addChild((ScreenElement *)this,pSVar10);
  piVar18 = *(int **)(this + 0xa4);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  pSVar10 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar10,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xa8) = pSVar10;
  (*pcVar16)(piVar18,pSVar10);
  piVar19 = *(int **)(iVar12 + DAT_001ea524);
  iVar6 = *piVar19;
  iVar5 = SmDev();
  uVar15 = FontManager::addFont(iVar6,SUB41(*(undefined4 *)(DAT_001ea528 + iVar5 * 4 + 0x1ea4dc),0))
  ;
  String::String(aSStack_134,0);
  pSVar10 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar10,aSStack_134,uVar15,DAT_001ea52c,1,1,0x11,0);
  *(ScreenElement **)(this + 0x84) = pSVar10;
  ScreenElement::addChild((ScreenElement *)this,pSVar10);
  String::~String(aSStack_134);
  piVar18 = *(int **)(iVar12 + DAT_001ea530);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar18,*(TrueTypeTextElement **)(this + 0x84));
  L_PrintLog((char *)(DAT_001ea6d0 + 0x1ea546),(char *)(DAT_001ea6d4 + 0x1ea548));
  sprintf(acStack_11c,(char *)(DAT_001ea6d8 + 0x1ea556),*(int *)(*piVar18 + 4) + 1);
  L_PrintLog((char *)(DAT_001ea6dc + 0x1ea562),acStack_11c);
  iVar6 = *piVar19;
  iVar5 = SmDev();
  uVar15 = FontManager::addFont(iVar6,SUB41(*(undefined4 *)(DAT_001ea6e0 + iVar5 * 4 + 0x1ea5b8),0))
  ;
  piVar19 = *(int **)(this + 0xa8);
  pcVar16 = *(code **)(*piVar19 + 0x2c);
  String::String(aSStack_12c,0);
  pTVar11 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement(pTVar11,aSStack_12c,uVar15,0xffffffff,1,1,9,0);
  *(TrueTypeTextElement **)(this + 0x88) = pTVar11;
  (*pcVar16)(piVar19,pTVar11);
  String::~String(aSStack_12c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar18,*(TrueTypeTextElement **)(this + 0x88));
  L_PrintLog((char *)(DAT_001ea6e4 + 0x1ea5dc),(char *)(DAT_001ea6e8 + 0x1ea5de));
  sprintf(acStack_11c,(char *)(DAT_001ea6ec + 0x1ea5ec),*(int *)(*piVar18 + 4) + 1);
  L_PrintLog((char *)(DAT_001ea6f0 + 0x1ea5f8),acStack_11c);
  String::String(aSStack_124,(char *)(DAT_001ea6f4 + 0x1ea602));
  pSVar10 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar10,aSStack_124,*(undefined4 *)(*(int *)(this + 0x68) + 0x4e0)
             ,0xffffffff,1,1,0x18,0,0);
  *(ScreenElement **)(this + 0x8c) = pSVar10;
  ScreenElement::addChild((ScreenElement *)this,pSVar10);
  String::~String(aSStack_124);
  pSVar10 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar10,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x94) = pSVar10;
  ScreenElement::addChild((ScreenElement *)this,pSVar10);
  layout(this);
  if (local_1c != **(int **)(iVar12 + DAT_001ea6f8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


