/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d76f0 CharacterEvolution::CharacterEvolution */

/* CharacterEvolution::CharacterEvolution(Vector<Character*>*, bool, ConfirmDialog*, NoticeDialog*,
   GameStateCafe*, unsigned char, bool) */

void __thiscall
CharacterEvolution::CharacterEvolution
          (CharacterEvolution *this,Vector *param_1,bool param_2,ConfirmDialog *param_3,
          NoticeDialog *param_4,GameStateCafe *param_5,uchar param_6,bool param_7)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  CImage *pCVar5;
  ImageElement *pIVar6;
  ScreenElement *pSVar7;
  CharacterPortrait *this_00;
  ZCImageButton *this_01;
  BitmapTextElement *pBVar8;
  TrueTypeTextElement *pTVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  CharacterEvolution *pCVar14;
  code *pcVar15;
  int iVar16;
  undefined4 uVar17;
  int *piVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
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
  
  iVar16 = DAT_000d7ab4 + 0xd7700;
  local_1c = **(int **)(iVar16 + DAT_000d7ab8);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar16 + DAT_000d7abc) + 8;
  iVar3 = CapcomApp::getInstance();
  uVar11 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar17 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar11 = __mulsf3(uVar11,uVar17);
  uVar4 = __mulsf3(uVar4,*(undefined4 *)(iVar3 + 0x50));
  puVar12 = *(undefined4 **)(iVar16 + DAT_000d7ac0);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar11);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7ac4;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar4);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7ac8;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar11);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7acc;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar4);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7ad0;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar11);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7ad4;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar4);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7ad8;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar11);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7adc;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar4);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7ae0;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar11);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7ae4;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar11);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7ae8;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar4);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7aec;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar4);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7af0;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar11);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7af4;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __floatsisf(*puVar12);
  __mulsf3(uVar17,uVar11);
  uVar17 = __fixsfsi();
  iVar3 = DAT_000d7af8;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __mulsf3(*puVar12,uVar11);
  iVar3 = DAT_000d7afc;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __mulsf3(*puVar12,uVar11);
  iVar3 = DAT_000d7b00;
  puVar12[5] = uVar17;
  puVar12 = *(undefined4 **)(iVar16 + iVar3);
  uVar17 = __mulsf3(*puVar12,uVar4);
  puVar12[5] = uVar17;
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar3 + 4);
  *(GameStateCafe **)(this + 0x60) = param_5;
  piVar13 = *(int **)(iVar16 + DAT_000d7b04);
  iVar10 = *piVar13;
  iVar3 = SmDev();
  uVar17 = FontManager::addFont(iVar10,SUB41(*(undefined4 *)(DAT_000d7b08 + iVar3 * 4 + 0xd7922),0))
  ;
  *(undefined4 *)(this + 100) = uVar17;
  iVar10 = *piVar13;
  iVar3 = SmDev();
  uVar17 = FontManager::addFont(iVar10,SUB41(*(undefined4 *)(DAT_000d7b0c + iVar3 * 4 + 0xd7954),0))
  ;
  *(Vector **)(this + 0x6c) = param_1;
  *(undefined4 *)(this + 0x68) = uVar17;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + 0x7f0),2,false)
  ;
  pIVar6 = (ImageElement *)operator_new(0x98);
  uVar1 = __addsf3(uVar11,uVar11);
  bVar2 = (bool)__addsf3(uVar4,uVar4);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 0x90) = pIVar6;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar6);
  String::String(aSStack_16c,(char *)(DAT_000d7b10 + 0xd7958));
  pSVar7 = (ScreenElement *)operator_new(0xe4);
  puVar12 = *(undefined4 **)(iVar16 + DAT_000d7b14);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar7,aSStack_16c,*(undefined4 *)(this + 100),*puVar12,1,1,0x11
             ,0);
  *(ScreenElement **)(this + 0x9c) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_16c);
  piVar13 = *(int **)(iVar16 + DAT_000d7b18);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0x9c));
  L_PrintLog((char *)(DAT_000d7b1c + 0xd79ae),(char *)(DAT_000d7b20 + 0xd79b0));
  sprintf(acStack_11c,(char *)(DAT_000d7b24 + 0xd79be),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_000d7b28 + 0xd79ca),acStack_11c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + DAT_000d7b2c),0x2a,false)
  ;
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,'\x11',true);
  *(ImageElement **)(this + 0x98) = pIVar6;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar6);
  String::String(aSStack_164,0);
  iVar10 = *(int *)(this + 0x70);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_000d7b30 + iVar3 * 4 + 0xd7a1e) + 0x136) * 4 + iVar10);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,aSStack_164,uVar4,**(undefined4 **)(iVar16 + DAT_000d7b34),
             1,1,10,0,0);
  *(ScreenElement **)(this + 0x94) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_164);
  String::String(aSStack_15c,0);
  pSVar7 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar7,aSStack_15c,*(undefined4 *)(this + 100),*puVar12,1,1,0x11
             ,0);
  *(ScreenElement **)(this + 0xcc) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_15c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0xcc));
  L_PrintLog((char *)(DAT_000d7b38 + 0xd7aaa),(char *)(DAT_000d7b3c + 0xd7aac));
  sprintf(acStack_11c,(char *)(DAT_000d7f10 + 0xd7b4a),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_000d7f14 + 0xd7b56),acStack_11c);
  this_00 = (CharacterPortrait *)operator_new(0xa0);
  CharacterPortrait::CharacterPortrait(this_00,(Character *)0x0,'!');
  *(CharacterPortrait **)(this + 0xe8) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  String::String(aSStack_154,(char *)(DAT_000d7f18 + 0xd7b7e));
  iVar10 = *(int *)(this + 0x70);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_000d7f1c + iVar3 * 4 + 0xd7bb2) + 0x136) * 4 + iVar10);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,aSStack_154,uVar4,0xff000000,1,1,9,0,0);
  *(ScreenElement **)(this + 0xa4) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_154);
  pCVar14 = this + 0xa8;
  *(undefined1 *)(*(int *)(this + 0xa4) + 0x7f) = 9;
  do {
    pCVar5 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x70) + DAT_000d7f20),0xb5,false);
    pIVar6 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement
              (pIVar6,pCVar5,extraout_s0_00,extraout_s1_00,(uchar)DAT_000d7f24,
               (bool)(uchar)DAT_000d7f24);
    *(ImageElement **)pCVar14 = pIVar6;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar6);
    piVar13 = *(int **)pCVar14;
    pCVar14 = pCVar14 + 4;
    (**(code **)(*piVar13 + 0x20))(piVar13,0);
  } while (pCVar14 != this + 0xc4);
  pSVar7 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar7,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xe0) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  piVar13 = *(int **)(this + 0xe0);
  pcVar15 = *(code **)(*piVar13 + 0x2c);
  pSVar7 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar7,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xe4) = pSVar7;
  (*pcVar15)(piVar13);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + DAT_000d7f20),10,false);
  this_01 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_01,'\x12',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xc4) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  pcVar15 = *(code **)(**(int **)(this + 0xc4) + 0x2c);
  String::String(aSStack_14c,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x70) + 0x4b0) + 8) +
                 **(int **)(iVar16 + DAT_000d7f28) * 8));
  iVar10 = *(int *)(this + 0x70);
  iVar3 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_000d7f2c + iVar3 * 4 + 0xd7d04) + 0x136) * 4 + iVar10);
  iVar3 = *(int *)(this + 0xc4);
  uVar4 = *(undefined4 *)(iVar3 + 0x10);
  uVar17 = *(undefined4 *)(iVar3 + 0xc);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_14c,uVar11,0xffffffff,0,0,0,uVar17,uVar4,9,0,0);
  pCVar14 = this + 200;
  *(BitmapTextElement **)pCVar14 = pBVar8;
  (*pcVar15)(iVar3,pBVar8);
  String::~String(aSStack_14c);
  iVar3 = DAT_000d7f30;
  *(undefined1 *)(*(int *)pCVar14 + 0x7f) = 0x12;
  piVar13 = *(int **)pCVar14;
  pcVar15 = *(code **)(*piVar13 + 0x44);
  String::String(aSStack_144,(char *)(iVar3 + 0xd7d30));
  (*pcVar15)(piVar13,aSStack_144);
  String::~String(aSStack_144);
  String::String(aSStack_174,(char *)(DAT_000d7f34 + 0xd7d4c));
  piVar13 = *(int **)(this + 0xe4);
  pcVar15 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_13c,aSStack_174);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar16 + DAT_000d7f38));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  puVar12 = *(undefined4 **)(iVar16 + DAT_000d7f3c);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_13c,*(undefined4 *)(this + 100),*puVar12,1,1,0,uVar4,0,9,0);
  *(TrueTypeTextElement **)(this + 0xd0) = pTVar9;
  (*pcVar15)(piVar13,pTVar9);
  String::~String(aSStack_13c);
  piVar13 = *(int **)(iVar16 + DAT_000d7f40);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0xd0));
  L_PrintLog((char *)(DAT_000d7f44 + 0xd7dcc),(char *)(DAT_000d7f48 + 0xd7dce));
  sprintf(acStack_11c,(char *)(DAT_000d7f4c + 0xd7ddc),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_000d7f50 + 0xd7de8),acStack_11c);
  piVar18 = *(int **)(this + 0xe4);
  pcVar15 = *(code **)(*piVar18 + 0x2c);
  String::String(aSStack_134,(char *)(DAT_000d7f54 + 0xd7dfa));
  pTVar9 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar9,aSStack_134,*(undefined4 *)(this + 100),*puVar12,1,1,9,0);
  *(TrueTypeTextElement **)(this + 0xd4) = pTVar9;
  (*pcVar15)(piVar18,pTVar9);
  String::~String(aSStack_134);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0xd4));
  L_PrintLog((char *)(DAT_000d7f58 + 0xd7e4c),(char *)(DAT_000d7f5c + 0xd7e4e));
  sprintf(acStack_11c,(char *)(DAT_000d7f60 + 0xd7e5c),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_000d7f64 + 0xd7e68),acStack_11c);
  piVar13 = *(int **)(this + 0xe4);
  pcVar15 = *(code **)(*piVar13 + 0x2c);
  String::valueOf((int)aSStack_12c);
  iVar10 = *(int *)(this + 0x70);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_000d7f68 + iVar3 * 4 + 0xd7eb0) + 0x136) * 4 + iVar10);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  puVar12 = *(undefined4 **)(iVar16 + DAT_000d7f6c);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_12c,uVar4,*puVar12,1,1,0x21,0,0);
  *(BitmapTextElement **)(this + 0xd8) = pBVar8;
  (*pcVar15)(piVar13,pBVar8);
  String::~String(aSStack_12c);
  piVar13 = *(int **)(this + 0xe4);
  pcVar15 = *(code **)(*piVar13 + 0x2c);
  String::valueOf((int)aSStack_124);
  iVar10 = *(int *)(this + 0x70);
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)
           ((*(int *)((int)&DAT_000d7f18 + DAT_000d7f70 + iVar3 * 4 + 2) + 0x136) * 4 + iVar10);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_124,uVar4,*puVar12,1,1,0x21,0,0);
  *(BitmapTextElement **)(this + 0xdc) = pBVar8;
  (*pcVar15)(piVar13,pBVar8);
  String::~String(aSStack_124);
  *(undefined1 *)(*(int *)(this + 0xd8) + 0x7f) = 0x21;
  *(undefined1 *)(*(int *)(this + 0xdc) + 0x7f) = 0x21;
  layout(this);
  String::~String(aSStack_174);
  if (local_1c != **(int **)(iVar16 + DAT_000d80a0)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


