/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00190038 GameStateSurvivalMenu::init */

/* GameStateSurvivalMenu::init() */

void __thiscall GameStateSurvivalMenu::init(GameStateSurvivalMenu *this)

{
  int iVar1;
  undefined4 uVar2;
  ScreenElement *this_00;
  CImage *pCVar3;
  ImageElement *pIVar4;
  ZCImageButton *pZVar5;
  BitmapTextElement *pBVar6;
  TrueTypeTextElement *pTVar7;
  NoticeDialog *this_01;
  ConfirmDialog *this_02;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  String aSStack_174 [16];
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
  
  iVar8 = DAT_001902f4 + 0x190044;
  local_1c = **(int **)(iVar8 + DAT_001902f8);
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadDialogImages(*(ZombieCafe **)(this + 0xc));
  iVar12 = **(int **)(iVar8 + DAT_001902fc);
  iVar1 = SmDev();
  uVar2 = FontManager::addFont(iVar12,SUB41(*(undefined4 *)(DAT_00190300 + iVar1 * 4 + 0x19008e),0))
  ;
  *(undefined4 *)(this + 0x74) = uVar2;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  iVar1 = DAT_00190304;
  pcVar10 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00190304),2,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x18) = pIVar4;
  (*pcVar10)(this_00,pIVar4);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x32,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'!',true);
  *(ImageElement **)(this + 0x28) = pIVar4;
  (*pcVar10)(piVar13,pIVar4);
  iVar12 = SmDev();
  iVar1 = DAT_00190308;
  if ((iVar12 != 4) && (iVar12 = SmDev(), iVar12 != 3)) {
    FUN_00190aa2();
  }
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x22,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_00,extraout_s1_00,(uchar)DAT_0019030c,false);
  *(ImageElement **)(this + 0x1c) = pIVar4;
  (*pcVar10)(piVar13,pIVar4);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x22,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_01,extraout_s1_01,(uchar)DAT_00190310,false);
  *(ImageElement **)(this + 0x24) = pIVar4;
  (*pcVar10)(piVar13,pIVar4);
  (**(code **)(**(int **)(this + 0x24) + 0x20))(*(int **)(this + 0x24),0);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00190304),0x30,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 0x20) = pIVar4;
  (*pcVar10)(piVar13,pIVar4);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00190304),3,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'$',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x44) = pZVar5;
  (*pcVar10)(piVar13,pZVar5);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00190314),10,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x06',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x3c) = pZVar5;
  (*pcVar10)(piVar13,pZVar5);
  iVar1 = SmDev();
  if ((iVar1 != 4) && (iVar1 = SmDev(), iVar1 != 3)) {
    FUN_00190b20();
  }
  pcVar10 = *(code **)(**(int **)(this + 0x3c) + 0x2c);
  String::String(aSStack_174,(char *)(DAT_00190318 + 0x19027e));
  iVar1 = *(int *)(this + 0x3c);
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  uVar9 = *(undefined4 *)(iVar1 + 0x10);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  uVar11 = *(undefined4 *)(*(int *)(this + 0xc) + DAT_0019031c);
  uVar2 = __floatsisf(uVar2);
  __mulsf3(uVar2,DAT_00190320);
  __fixsfsi();
  uVar2 = __floatsisf(uVar9);
  __mulsf3(uVar2,DAT_00190320);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_174,uVar11,0xffffffff);
  *(BitmapTextElement **)(this + 0x90) = pBVar6;
  (*pcVar10)(iVar1,pBVar6);
  String::~String(aSStack_174);
  *(undefined1 *)(*(int *)(this + 0x90) + 0x7f) = 0x12;
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00190728),10,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x06',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x40) = pZVar5;
  (*pcVar10)(piVar13,pZVar5);
  pcVar10 = *(code **)(**(int **)(this + 0x40) + 0x2c);
  String::String(aSStack_164,(char *)(DAT_0019072c + 0x19038c));
  iVar1 = *(int *)(this + 0x40);
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  uVar9 = *(undefined4 *)(iVar1 + 0x10);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  uVar11 = *(undefined4 *)(*(int *)(this + 0xc) + DAT_00190730);
  uVar2 = __floatsisf(uVar2);
  __mulsf3(uVar2,DAT_00190734);
  __fixsfsi();
  uVar2 = __floatsisf(uVar9);
  __mulsf3(uVar2,DAT_00190734);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_164,uVar11,0xffffffff);
  *(BitmapTextElement **)(this + 0x94) = pBVar6;
  (*pcVar10)(iVar1,pBVar6);
  String::~String(aSStack_164);
  *(undefined1 *)(*(int *)(this + 0x94) + 0x7f) = 0x12;
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00190738),0x31,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x06',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x48) = pZVar5;
  (*pcVar10)(piVar13,pZVar5);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00190728),10,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x06',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x4c) = pZVar5;
  (*pcVar10)(piVar13,pZVar5);
  pcVar10 = *(code **)(**(int **)(this + 0x4c) + 0x2c);
  String::String(aSStack_15c,(char *)(DAT_0019073c + 0x19048e));
  iVar1 = *(int *)(this + 0x4c);
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  uVar9 = *(undefined4 *)(iVar1 + 0x10);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  uVar11 = *(undefined4 *)(*(int *)(this + 0xc) + DAT_00190730);
  uVar2 = __floatsisf(uVar2);
  __mulsf3(uVar2,DAT_00190734);
  __fixsfsi();
  uVar2 = __floatsisf(uVar9);
  __mulsf3(uVar2,DAT_00190734);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_15c,uVar11,0xffffffff);
  *(BitmapTextElement **)(this + 0x98) = pBVar6;
  (*pcVar10)(iVar1,pBVar6);
  String::~String(aSStack_15c);
  *(undefined1 *)(*(int *)(this + 0x98) + 0x7f) = 0x12;
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00190728),10,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x06',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x50) = pZVar5;
  (*pcVar10)(piVar13,pZVar5);
  pcVar10 = *(code **)(**(int **)(this + 0x50) + 0x2c);
  String::String(aSStack_154,(char *)(DAT_00190740 + 0x190554));
  iVar1 = *(int *)(this + 0x50);
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  uVar9 = *(undefined4 *)(iVar1 + 0x10);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  uVar11 = *(undefined4 *)(*(int *)(this + 0xc) + DAT_00190730);
  uVar2 = __floatsisf(uVar2);
  __mulsf3(uVar2,DAT_00190734);
  __fixsfsi();
  uVar2 = __floatsisf(uVar9);
  __mulsf3(uVar2,DAT_00190734);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_154,uVar11,0xffffffff);
  *(BitmapTextElement **)(this + 0x9c) = pBVar6;
  (*pcVar10)(iVar1,pBVar6);
  String::~String(aSStack_154);
  iVar1 = DAT_00190744;
  *(undefined1 *)(*(int *)(this + 0x9c) + 0x7f) = 0x12;
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_14c,(char *)(iVar1 + 0x1905da));
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar7,aSStack_14c,*(undefined4 *)(this + 0x74),0xff000000,1,1,6,0);
  *(TrueTypeTextElement **)(this + 0x8c) = pTVar7;
  (*pcVar10)(piVar13,pTVar7);
  String::~String(aSStack_14c);
  iVar1 = DAT_0019074c;
  piVar14 = *(int **)(iVar8 + DAT_00190748);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x8c));
  L_PrintLog((char *)(iVar1 + 0x190630),(char *)(DAT_00190750 + 0x190634));
  sprintf(acStack_11c,(char *)(DAT_00190754 + 0x190642),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x190630),acStack_11c);
  piVar13 = *(int **)(this + 0x8c);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  piVar13 = *(int **)(this + 0x24);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_144,(char *)(DAT_00190758 + 0x190664));
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar7,aSStack_144,*(undefined4 *)(this + 0x74),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x84) = pTVar7;
  (*pcVar10)(piVar13,pTVar7);
  String::~String(aSStack_144);
  iVar1 = DAT_0019075c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x84));
  L_PrintLog((char *)(iVar1 + 0x1906b4),(char *)(DAT_00190760 + 0x1906b8));
  sprintf(acStack_11c,(char *)(DAT_00190764 + 0x1906c6),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x1906b4),acStack_11c);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  piVar13 = *(int **)(this + 0x24);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_13c,(char *)(DAT_00190768 + 0x1906e8));
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar7,aSStack_13c,*(undefined4 *)(this + 0x74),DAT_0019076c,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x88) = pTVar7;
  (*pcVar10)(piVar13,pTVar7);
  String::~String(aSStack_13c);
  iVar1 = iRam00190ad8;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x88));
  L_PrintLog((char *)(iVar1 + 0x190780),(char *)(iRam00190adc + 0x190784));
  sprintf(acStack_11c,(char *)(iRam00190ae0 + 0x190792),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x190780),acStack_11c);
  piVar13 = *(int **)(this + 0x88);
  (**(code **)(*piVar13 + 0x20))(piVar13,0);
  piVar13 = *(int **)(this + 0x1c);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_134,(char *)(iRam00190ae4 + 0x1907b4));
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar7,aSStack_134,*(undefined4 *)(this + 0x74),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x78) = pTVar7;
  (*pcVar10)(piVar13,pTVar7);
  String::~String(aSStack_134);
  iVar1 = DAT_00190ae8;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x78));
  L_PrintLog((char *)(iVar1 + 0x1907fc),(char *)(DAT_00190aec + 0x190800));
  sprintf(acStack_11c,(char *)(DAT_00190af0 + 0x19080e),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x1907fc),acStack_11c);
  (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),0);
  piVar13 = *(int **)(this + 0x1c);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_12c,(char *)(DAT_00190af4 + 0x190830));
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar7,aSStack_12c,*(undefined4 *)(this + 0x74),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x7c) = pTVar7;
  (*pcVar10)(piVar13,pTVar7);
  String::~String(aSStack_12c);
  iVar1 = DAT_00190af8;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x7c));
  L_PrintLog((char *)(iVar1 + 0x190878),(char *)(DAT_00190afc + 0x19087c));
  sprintf(acStack_11c,(char *)(DAT_00190b00 + 0x19088a),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x190878),acStack_11c);
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),0);
  piVar13 = *(int **)(this + 0x1c);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_124,(char *)(DAT_00190b04 + 0x1908ac));
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar7,aSStack_124,*(undefined4 *)(this + 0x74),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x80) = pTVar7;
  (*pcVar10)(piVar13,pTVar7);
  String::~String(aSStack_124);
  iVar1 = DAT_00190b08;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x80));
  L_PrintLog((char *)(iVar1 + 0x1908f8),(char *)(DAT_00190b0c + 0x1908fc));
  sprintf(acStack_11c,(char *)(DAT_00190b10 + 0x19090a),*(int *)(*piVar14 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x1908f8),acStack_11c);
  (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),0);
  uVar2 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00190b14),false);
  *(undefined4 *)(this + 0x30) = uVar2;
  uVar2 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x2c) = uVar2;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_01,*(CImage **)(*(int *)(this + 0x2c) + 0x14),
             *(CImage **)(*(int *)(this + 0x30) + 0x28),extraout_s0_02);
  *(NoticeDialog **)(this + 0x34) = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,4);
  (**(code **)(**(int **)(this + 0x34) + 0x1c))(*(int **)(this + 0x34),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x34))
  ;
  this_02 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_02,*(CImage **)(*(int *)(this + 0x2c) + 0x14),
             *(CImage **)(*(int *)(this + 0x30) + 0x28),*(CImage **)(*(int *)(this + 0x30) + 0x44),0
             ,extraout_s0_03,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x38) = this_02;
  ScreenElement::setOrder((ScreenElement *)this_02,99);
  (**(code **)(**(int **)(this + 0x38) + 0x1c))(*(int **)(this + 0x38),0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x38))
  ;
  if (local_1c == **(int **)(iVar8 + DAT_00190b18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


