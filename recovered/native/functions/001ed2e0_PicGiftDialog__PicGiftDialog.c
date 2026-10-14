/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ed2e0 PicGiftDialog::PicGiftDialog */

/* PicGiftDialog::PicGiftDialog(ZombieCafeGameState*, Cafe*, PicGiftBoxInfo*, int) */

void __thiscall
PicGiftDialog::PicGiftDialog
          (PicGiftDialog *this,ZombieCafeGameState *param_1,Cafe *param_2,PicGiftBoxInfo *param_3,
          int param_4)

{
  uchar uVar1;
  char *pcVar2;
  int iVar3;
  CImage *pCVar4;
  ImageElement *pIVar5;
  ZCImageButton *this_00;
  ScreenElement *pSVar6;
  TrueTypeTextElement *pTVar7;
  char *pcVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar15;
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar9 = DAT_001ed694 + 0x1ed2f0;
  local_1c = **(int **)(iVar9 + DAT_001ed698);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  pcVar2 = (char *)(DAT_001ed6a0 + 0x1ed30e);
  pcVar8 = (char *)(DAT_001ed6a4 + 0x1ed310);
  *(int *)this = *(int *)(iVar9 + DAT_001ed69c) + 8;
  L_PrintLog(pcVar2,pcVar8);
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar3 + 4);
  *(ZombieCafeGameState **)(this + 100) = param_1;
  *(Cafe **)(this + 0x6c) = param_2;
  *(PicGiftBoxInfo **)(this + 0x70) = param_3;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  iVar3 = DAT_001ed6ac;
  pcVar2 = (char *)(DAT_001ed6a8 + 0x1ed362);
  *(int *)(this + 0x68) = param_4;
  L_PrintLog(pcVar2,(char *)(iVar3 + 0x1ed366));
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + 0x7f0),2,false)
  ;
  iVar3 = SmDev();
  uVar12 = *(undefined4 *)(DAT_001ed6b0 + iVar3 * 4 + 0x1ed3be);
  pIVar5 = (ImageElement *)operator_new(0x98);
  uVar1 = __mulsf3(uVar12,0x3fc00000);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0,extraout_s1,uVar1,SUB41(DAT_001ed6b4,0));
  *(ImageElement **)(this + 0x74) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  iVar3 = DAT_001ed6b8;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001ed6b8),0x4c,false)
  ;
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0_00,extraout_s1_00,(uchar)DAT_001ed6bc,SUB41(DAT_001ed6c0,0));
  *(ImageElement **)(this + 0x78) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),0x28,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\t',true);
  *(ImageElement **)(this + 0x7c) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar3),6,false)
  ;
  this_00 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_00,'!',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x84) = this_00;
  uVar15 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x84),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  *(undefined4 *)(this + 0xcc) = 0;
  pSVar6 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar6,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xc4) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  piVar13 = *(int **)(this + 0xc4);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pSVar6 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar6,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 200) = pSVar6;
  (*pcVar10)(piVar13,pSVar6);
  piVar14 = *(int **)(iVar9 + DAT_001ed6c4);
  iVar11 = *piVar14;
  iVar3 = SmDev();
  uVar12 = FontManager::addFont
                     (iVar11,SUB41(*(undefined4 *)(DAT_001ed6c8 + iVar3 * 4 + 0x1ed500),0));
  String::String(aSStack_134,0);
  pSVar6 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar6,aSStack_134,uVar12,DAT_001ed6cc,1,1,0x11,0);
  *(ScreenElement **)(this + 0x88) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_134);
  piVar13 = *(int **)(iVar9 + DAT_001ed6d0);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0x88));
  L_PrintLog((char *)(DAT_001ed6d4 + 0x1ed510),(char *)(DAT_001ed6d8 + 0x1ed512));
  sprintf(acStack_11c,(char *)(DAT_001ed6dc + 0x1ed520),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_001ed6e0 + 0x1ed52c),acStack_11c);
  L_PrintLog((char *)(DAT_001ed6e4 + 0x1ed536),(char *)(DAT_001ed6e8 + 0x1ed538));
  iVar11 = *piVar14;
  iVar3 = SmDev();
  uVar12 = FontManager::addFont
                     (iVar11,SUB41(*(undefined4 *)(DAT_001ed6ec + iVar3 * 4 + 0x1ed5b2),0));
  piVar14 = *(int **)(this + 200);
  pcVar10 = *(code **)(*piVar14 + 0x2c);
  String::String(aSStack_12c,0);
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement(pTVar7,aSStack_12c,uVar12,0xffffffff,1,1,9,0);
  *(TrueTypeTextElement **)(this + 0x8c) = pTVar7;
  (*pcVar10)(piVar14,pTVar7);
  String::~String(aSStack_12c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0x8c));
  L_PrintLog((char *)(DAT_001ed6f0 + 0x1ed5b2),(char *)(DAT_001ed6f4 + 0x1ed5b4));
  sprintf(acStack_11c,(char *)(DAT_001ed6f8 + 0x1ed5c2),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_001ed6fc + 0x1ed5ce),acStack_11c);
  String::String(aSStack_124,(char *)(DAT_001ed700 + 0x1ed5d8));
  pSVar6 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar6,aSStack_124,uVar12,0xffffffff,1,1,9,0);
  *(ScreenElement **)(this + 0x90) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_124);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0x90));
  L_PrintLog((char *)(DAT_001ed704 + 0x1ed624),(char *)(DAT_001ed708 + 0x1ed626));
  sprintf(acStack_11c,(char *)(DAT_001ed70c + 0x1ed634),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_001ed710 + 0x1ed640),acStack_11c);
  pSVar6 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar6,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xb0) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  L_PrintLog((char *)(DAT_001ed714 + 0x1ed666),(char *)(DAT_001ed718 + 0x1ed668));
  layout(this);
  L_PrintLog((char *)(DAT_001ed71c + 0x1ed678),(char *)(DAT_001ed720 + 0x1ed67a));
  if (local_1c != **(int **)(iVar9 + DAT_001ed698)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


