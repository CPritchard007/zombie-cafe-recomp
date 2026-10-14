/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00209a88 PUResultDialog::PUResultDialog */

/* PUResultDialog::PUResultDialog(Vector<Character*>*, ConfirmDialog*, NoticeDialog*) */

void __thiscall
PUResultDialog::PUResultDialog
          (PUResultDialog *this,Vector *param_1,ConfirmDialog *param_2,NoticeDialog *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  CImage *pCVar4;
  ImageElement *pIVar5;
  ScreenElement *pSVar6;
  CharacterPortrait *this_00;
  ZCImageButton *this_01;
  BitmapTextElement *pBVar7;
  TrueTypeTextElement *pTVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  code *pcVar12;
  undefined4 uVar13;
  int iVar14;
  ImageButton *this_02;
  int *piVar15;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar16;
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
  
  iVar1 = DAT_00209e60 + 0x209a96;
  local_1c = **(int **)(iVar1 + DAT_00209e64);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar1 + DAT_00209e68) + 8;
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(iVar2 + 0x40);
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(iVar2 + 0x44);
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(iVar2 + 4);
  piVar11 = *(int **)(iVar1 + DAT_00209e6c);
  iVar14 = *piVar11;
  iVar2 = SmDev();
  uVar3 = FontManager::addFont(iVar14,SUB41(*(undefined4 *)(DAT_00209e70 + iVar2 * 4 + 0x209afa),0))
  ;
  *(undefined4 *)(this + 0x60) = uVar3;
  iVar14 = *piVar11;
  iVar2 = SmDev();
  uVar3 = FontManager::addFont(iVar14,SUB41(*(undefined4 *)(DAT_00209e74 + iVar2 * 4 + 0x209b2c),0))
  ;
  *(undefined4 *)(this + 100) = uVar3;
  *(Vector **)(this + 0x68) = param_1;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x6c) + 0x7f0),2,false)
  ;
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0,extraout_s1,(uchar)DAT_00209e78,SUB41(DAT_00209e7c,0));
  *(ImageElement **)(this + 0x94) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  String::String(aSStack_16c,(char *)(DAT_00209e80 + 0x209b5a));
  pSVar6 = (ScreenElement *)operator_new(0xe4);
  puVar9 = *(undefined4 **)(iVar1 + DAT_00209e84);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar6,aSStack_16c,*(undefined4 *)(this + 100),*puVar9,1,1,0x11,
             0);
  *(ScreenElement **)(this + 0xa0) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_16c);
  piVar11 = *(int **)(iVar1 + DAT_00209e88);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0xa0));
  L_PrintLog((char *)(DAT_00209e8c + 0x209bb4),(char *)(DAT_00209e90 + 0x209bb6));
  sprintf(acStack_11c,(char *)(DAT_00209e94 + 0x209bc4),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_00209e98 + 0x209bd0),acStack_11c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x6c) + DAT_00209e9c),0x2a,false)
  ;
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x11',false);
  *(ImageElement **)(this + 0x9c) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  uVar16 = __mulsf3(*(undefined4 *)(this + 0xe8),DAT_00209ea0);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x9c),(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  String::String(aSStack_164,0);
  iVar14 = *(int *)(this + 0x6c);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_00209ea4 + iVar2 * 4 + 0x209c78) + 0x136) * 4 + iVar14);
  pSVar6 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar6,aSStack_164,uVar3,**(undefined4 **)(iVar1 + DAT_00209ea8),1
             ,1,10,0,0);
  *(ScreenElement **)(this + 0x98) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_164);
  String::String(aSStack_15c,0);
  pSVar6 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar6,aSStack_15c,*(undefined4 *)(this + 0x60),*puVar9,1,1,0x11
             ,0);
  *(ScreenElement **)(this + 0xbc) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_15c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0xbc));
  L_PrintLog((char *)(DAT_00209eac + 0x209cce),(char *)(DAT_00209eb0 + 0x209cd0));
  sprintf(acStack_11c,(char *)(DAT_00209eb4 + 0x209cde),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_00209eb8 + 0x209cea),acStack_11c);
  this_00 = (CharacterPortrait *)operator_new(0xa0);
  CharacterPortrait::CharacterPortrait(this_00,(Character *)0x0,'!');
  *(CharacterPortrait **)(this + 0xdc) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  pSVar6 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar6,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xd4) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  piVar11 = *(int **)(this + 0xd4);
  pcVar12 = *(code **)(*piVar11 + 0x2c);
  pSVar6 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar6,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xd8) = pSVar6;
  (*pcVar12)(piVar11,pSVar6);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x6c) + DAT_00209e9c),10,false);
  this_01 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_01,'\x12',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xb4) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  uVar3 = *(undefined4 *)(this + 0xec);
  this_02 = *(ImageButton **)(this + 0xb4);
  __mulsf3(uVar3,DAT_00209ebc);
  uVar16 = __mulsf3(uVar3,DAT_00209ec0);
  ImageButton::setScale(this_02,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  pcVar12 = *(code **)(**(int **)(this + 0xb4) + 0x2c);
  String::String(aSStack_154,0);
  iVar14 = *(int *)(this + 0x6c);
  iVar2 = SmDev();
  uVar10 = *(undefined4 *)((*(int *)(DAT_00209ec4 + iVar2 * 4 + 0x209e1e) + 0x136) * 4 + iVar14);
  iVar2 = *(int *)(this + 0xb4);
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  uVar13 = *(undefined4 *)(iVar2 + 0xc);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar7,aSStack_154,uVar10,0xffffffff,0,0,0,uVar13,uVar3,9,0,0);
  *(BitmapTextElement **)(this + 0xb8) = pBVar7;
  (*pcVar12)(iVar2,pBVar7);
  String::~String(aSStack_154);
  iVar14 = *(int *)(this + 0xb8);
  iVar2 = SmDev();
  *(undefined4 *)(iVar14 + 0xbc) =
       *(undefined4 *)((int)&DAT_00209e9c + DAT_00209ec8 + iVar2 * 4 + 2);
  *(undefined1 *)(*(int *)(this + 0xb8) + 0x7f) = 0x12;
  piVar11 = *(int **)(this + 0xb8);
  pcVar12 = *(code **)(*piVar11 + 0x44);
  String::String(aSStack_14c,(char *)(DAT_00209ecc + 0x209e46));
  (*pcVar12)(piVar11,aSStack_14c);
  String::~String(aSStack_14c);
  String::String(aSStack_174,&UNK_00209e5e + DAT_00209ed0);
  piVar11 = *(int **)(this + 0xd8);
  pcVar12 = *(code **)(*piVar11 + 0x2c);
  String::String(aSStack_144,(char *)(DAT_0020a240 + 0x209ee8));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  puVar9 = *(undefined4 **)(iVar1 + DAT_0020a244);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,aSStack_144,*(undefined4 *)(this + 0x60),*puVar9,1,1,9,0);
  *(TrueTypeTextElement **)(this + 0xc0) = pTVar8;
  (*pcVar12)(piVar11,pTVar8);
  String::~String(aSStack_144);
  piVar11 = *(int **)(iVar1 + DAT_0020a248);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0xc0));
  L_PrintLog((char *)(DAT_0020a24c + 0x209f42),(char *)(DAT_0020a250 + 0x209f44));
  sprintf(acStack_11c,(char *)(DAT_0020a254 + 0x209f52),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_0020a258 + 0x209f5e),acStack_11c);
  piVar15 = *(int **)(this + 0xd8);
  pcVar12 = *(code **)(*piVar15 + 0x2c);
  String::valueOf((int)aSStack_13c);
  iVar14 = *(int *)(this + 0x6c);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_0020a25c + iVar2 * 4 + 0x209f8e) + 0x136) * 4 + iVar14);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar7,aSStack_13c,uVar3,*puVar9,1,1,0x21,0,0);
  *(BitmapTextElement **)(this + 0xc4) = pBVar7;
  (*pcVar12)(piVar15,pBVar7);
  String::~String(aSStack_13c);
  piVar15 = *(int **)(this + 0xd8);
  pcVar12 = *(code **)(*piVar15 + 0x2c);
  String::valueOf((int)aSStack_134);
  iVar14 = *(int *)(this + 0x6c);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_0020a260 + iVar2 * 4 + 0x209ff4) + 0x136) * 4 + iVar14);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  puVar9 = *(undefined4 **)(iVar1 + DAT_0020a264);
  BitmapTextElement::BitmapTextElement(pBVar7,aSStack_134,uVar3,*puVar9,1,1,0x21,0,0);
  *(BitmapTextElement **)(this + 200) = pBVar7;
  (*pcVar12)(piVar15);
  String::~String(aSStack_134);
  String::String(aSStack_12c,(char *)(DAT_0020a268 + 0x20a03a));
  pSVar6 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar6,aSStack_12c,*(undefined4 *)(this + 100),*puVar9,1,1,0x11,
             0);
  *(ScreenElement **)(this + 0xcc) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_12c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0xcc));
  L_PrintLog((char *)(DAT_0020a26c + 0x20a084),(char *)(DAT_0020a270 + 0x20a086));
  sprintf(acStack_11c,(char *)(DAT_0020a274 + 0x20a094),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_0020a278 + 0x20a0a0),acStack_11c);
  String::String(aSStack_124,(char *)(DAT_0020a27c + 0x20a0aa));
  pSVar6 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar6,aSStack_124,*(undefined4 *)(this + 100),*puVar9,1,1,0x11,
             0);
  *(ScreenElement **)(this + 0xd0) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_124);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0xd0));
  L_PrintLog((char *)(DAT_0020a280 + 0x20a0f4),(char *)(DAT_0020a284 + 0x20a0f6));
  sprintf(acStack_11c,(char *)(DAT_0020a288 + 0x20a104),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_0020a28c + 0x20a110),acStack_11c);
  iVar14 = *(int *)(this + 0xc4);
  iVar2 = SmDev();
  *(undefined4 *)(iVar14 + 0xbc) = *(undefined4 *)(DAT_0020a290 + iVar2 * 4 + 0x20a14a);
  *(undefined1 *)(*(int *)(this + 0xc4) + 0x7f) = 0x21;
  iVar14 = *(int *)(this + 200);
  iVar2 = SmDev();
  *(undefined4 *)(iVar14 + 0xbc) = *(undefined4 *)(DAT_0020a294 + iVar2 * 4 + 0x20a16e);
  *(undefined1 *)(*(int *)(this + 200) + 0x7f) = 0x21;
  layout(this);
  String::~String(aSStack_174);
  if (local_1c != **(int **)(iVar1 + DAT_0020a298)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


