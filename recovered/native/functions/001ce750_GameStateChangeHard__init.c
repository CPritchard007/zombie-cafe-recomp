/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ce750 GameStateChangeHard::init */

/* GameStateChangeHard::init() */

void __thiscall GameStateChangeHard::init(GameStateChangeHard *this)

{
  int iVar1;
  undefined4 uVar2;
  ScreenElement *this_00;
  CImage *pCVar3;
  ImageElement *pIVar4;
  TrueTypeTextElement *pTVar5;
  ZCImageButton *pZVar6;
  CImage *pCVar7;
  CImage *pCVar8;
  ConfirmDialog *this_01;
  NoticeDialog *this_02;
  int iVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  ImageButton *this_03;
  undefined4 uVar14;
  int *piVar15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar16;
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
  
  iVar9 = DAT_001ceb20 + 0x1ce75c;
  local_1c = **(int **)(iVar9 + DAT_001ceb24);
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_001ceb28) = 5;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(iVar1 + 0x44);
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadDialogImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadRecipeImages(*(ZombieCafe **)(this + 0xc));
  iVar12 = **(int **)(iVar9 + DAT_001ceb2c);
  iVar1 = SmDev();
  uVar2 = FontManager::addFont(iVar12,SUB41(*(undefined4 *)(DAT_001ceb30 + iVar1 * 4 + 0x1ce810),0))
  ;
  *(undefined4 *)(this + 0x18) = uVar2;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  pcVar10 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001ceb34),2,false);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)(DAT_001ceb38 + iVar1 * 4 + 0x1ce870);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0,extraout_s1,(uchar)uVar2,false);
  *(ImageElement **)(this + 0x24) = pIVar4;
  (*pcVar10)(this_00,pIVar4);
  iVar1 = DAT_001ceb3c;
  piVar11 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar11 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001ceb3c),0x1d,false);
  iVar12 = SmDev();
  uVar2 = *(undefined4 *)(DAT_001ceb40 + iVar12 * 4 + 0x1ce8d6);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_00,extraout_s1_00,(uchar)uVar2,false);
  *(ImageElement **)(this + 0x28) = pIVar4;
  (*pcVar10)(piVar11,pIVar4);
  piVar11 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar11 + 0x2c);
  iVar12 = DAT_001ceb44 + 0x1ce898;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x22,false);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)(iVar12 + iVar1 * 4 + 8);
  iVar1 = SmDev();
  uVar14 = *(undefined4 *)(iVar12 + iVar1 * 4 + 0x20);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,pCVar3,extraout_s0_01,extraout_s1_01,(uchar)uVar2,SUB41(uVar14,0));
  *(ImageElement **)(this + 0x2c) = pIVar4;
  (*pcVar10)(piVar11,pIVar4);
  piVar11 = *(int **)(this + 0x2c);
  pcVar10 = *(code **)(*piVar11 + 0x2c);
  String::String(aSStack_164,(char *)(DAT_001ceb48 + 0x1ce8e8));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,aSStack_164,*(undefined4 *)(this + 0x18),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x34) = pTVar5;
  (*pcVar10)(piVar11,pTVar5);
  String::~String(aSStack_164);
  piVar11 = *(int **)(iVar9 + DAT_001ceb4c);
  pcVar13 = (char *)(DAT_001ceb50 + 0x1ce92a);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x34));
  L_PrintLog(pcVar13,(char *)(DAT_001ceb54 + 0x1ce936));
  sprintf(acStack_11c,(char *)(DAT_001ceb58 + 0x1ce944),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog(pcVar13,acStack_11c);
  piVar15 = *(int **)(this + 0x2c);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  String::String(aSStack_15c,(char *)(DAT_001ceb5c + 0x1ce95c));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,aSStack_15c,*(undefined4 *)(this + 0x18),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x38) = pTVar5;
  (*pcVar10)(piVar15,pTVar5);
  String::~String(aSStack_15c);
  iVar1 = DAT_001ceb60;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x38));
  L_PrintLog((char *)(iVar1 + 0x1ce9a4),(char *)(DAT_001ceb64 + 0x1ce9a8));
  sprintf(acStack_11c,(char *)(DAT_001ceb68 + 0x1ce9b6),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x1ce9a4),acStack_11c);
  piVar15 = *(int **)(this + 0x2c);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  String::String(aSStack_154,(char *)(DAT_001ceb6c + 0x1ce9ce));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,aSStack_154,*(undefined4 *)(this + 0x18),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x30) = pTVar5;
  (*pcVar10)(piVar15,pTVar5);
  String::~String(aSStack_154);
  iVar1 = DAT_001ceb70;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x30));
  L_PrintLog((char *)(iVar1 + 0x1cea16),(char *)(DAT_001ceb74 + 0x1cea1a));
  sprintf(acStack_11c,(char *)(DAT_001ceb78 + 0x1cea28),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x1cea16),acStack_11c);
  piVar15 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001ceb3c),0x12,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x11',true);
  *(ImageElement **)(this + 0x3c) = pIVar4;
  (*pcVar10)(piVar15,pIVar4);
  piVar15 = *(int **)(this + 0x3c);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  String::String(aSStack_14c,(char *)(DAT_001ceb7c + 0x1cea74));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,aSStack_14c,*(undefined4 *)(this + 0x18),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x44) = pTVar5;
  (*pcVar10)(piVar15,pTVar5);
  String::~String(aSStack_14c);
  iVar1 = DAT_001ceb80;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x44));
  L_PrintLog((char *)(iVar1 + 0x1ceabc),(char *)(DAT_001ceb84 + 0x1ceac0));
  sprintf(acStack_11c,(char *)(DAT_001ceb88 + 0x1ceace),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x1ceabc),acStack_11c);
  piVar15 = *(int **)(this + 0x3c);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001ceb3c),0x24,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x40) = pZVar6;
  (*pcVar10)(piVar15,pZVar6);
  piVar15 = *(int **)(this + 0x40);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  String::String(aSStack_144,(char *)(DAT_001ceb8c + 0x1ceb94));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,aSStack_144,*(undefined4 *)(this + 0x18),0xffffffff,1,1,0x12,0);
  *(TrueTypeTextElement **)(this + 0x48) = pTVar5;
  (*pcVar10)(piVar15,pTVar5);
  String::~String(aSStack_144);
  iVar1 = DAT_001cefa4;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x48));
  L_PrintLog((char *)(iVar1 + 0x1cebdc),(char *)(DAT_001cefa8 + 0x1cebe0));
  sprintf(acStack_11c,(char *)(DAT_001cefac + 0x1cebee),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x1cebdc),acStack_11c);
  piVar15 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001cefb0),0x12,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x11',true);
  *(ImageElement **)(this + 0x4c) = pIVar4;
  (*pcVar10)(piVar15,pIVar4);
  piVar15 = *(int **)(this + 0x4c);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  String::String(aSStack_13c,(char *)(DAT_001cefb4 + 0x1cec3a));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,aSStack_13c,*(undefined4 *)(this + 0x18),0xffffffff,1,1,0x11,0);
  *(TrueTypeTextElement **)(this + 0x54) = pTVar5;
  (*pcVar10)(piVar15,pTVar5);
  String::~String(aSStack_13c);
  iVar1 = DAT_001cefb8;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x54));
  L_PrintLog((char *)(iVar1 + 0x1cec82),(char *)(DAT_001cefbc + 0x1cec86));
  sprintf(acStack_11c,(char *)(DAT_001cefc0 + 0x1cec94),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x1cec82),acStack_11c);
  piVar15 = *(int **)(this + 0x4c);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001cefb0),0x24,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x50) = pZVar6;
  (*pcVar10)(piVar15,pZVar6);
  piVar15 = *(int **)(this + 0x50);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  String::String(aSStack_134,(char *)(DAT_001cefc4 + 0x1cece8));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,aSStack_134,*(undefined4 *)(this + 0x18),0xffffffff,1,1,0x12,0);
  *(TrueTypeTextElement **)(this + 0x58) = pTVar5;
  (*pcVar10)(piVar15,pTVar5);
  String::~String(aSStack_134);
  iVar1 = DAT_001cefc8;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x58));
  L_PrintLog((char *)(iVar1 + 0x1ced30),(char *)(DAT_001cefcc + 0x1ced34));
  sprintf(acStack_11c,(char *)(DAT_001cefd0 + 0x1ced42),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(iVar1 + 0x1ced30),acStack_11c);
  piVar15 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001cefb0),5,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x5c) = pZVar6;
  (*pcVar10)(piVar15,pZVar6);
  piVar15 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001cefb0),0x24,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x60) = pZVar6;
  uVar16 = (*pcVar10)(piVar15,pZVar6);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x60),(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  piVar15 = *(int **)(this + 0x60);
  pcVar10 = *(code **)(*piVar15 + 0x2c);
  String::String(aSStack_12c,(char *)(DAT_001cefd8 + 0x1ceddc));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,aSStack_12c,*(undefined4 *)(this + 0x18),0xffffffff,1,1,0x12,0);
  *(TrueTypeTextElement **)(this + 100) = pTVar5;
  (*pcVar10)(piVar15,pTVar5);
  String::~String(aSStack_12c);
  iVar12 = DAT_001cefdc;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 100));
  L_PrintLog((char *)(iVar12 + 0x1cee24),(char *)(DAT_001cefe0 + 0x1cee28));
  iVar1 = DAT_001cefb0;
  sprintf(acStack_11c,(char *)(DAT_001cefe4 + 0x1cee36),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(iVar12 + 0x1cee24),acStack_11c);
  (**(code **)(**(int **)(this + 0x60) + 0x20))(*(int **)(this + 0x60),0);
  piVar11 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar11 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x1e,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x68) = pZVar6;
  (*pcVar10)(piVar11,pZVar6);
  this_03 = *(ImageButton **)(this + 0x68);
  SmDev();
  uVar16 = SmDev();
  ImageButton::setScale(this_03,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  piVar11 = *(int **)(this + 0x68);
  pcVar10 = *(code **)(*piVar11 + 0x2c);
  String::String(aSStack_124,(char *)(DAT_001cefec + 0x1ceeb6));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,aSStack_124,*(undefined4 *)(this + 0x18),0xffffffff,1,1,0x12,0);
  *(TrueTypeTextElement **)(this + 0x6c) = pTVar5;
  (*pcVar10)(piVar11,pTVar5);
  String::~String(aSStack_124);
  piVar11 = *(int **)(iVar9 + DAT_001ceff0);
  pcVar13 = (char *)(DAT_001ceff4 + 0x1ceef8);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x6c));
  L_PrintLog(pcVar13,(char *)(DAT_001ceff8 + 0x1cef04));
  sprintf(acStack_11c,(char *)(DAT_001ceffc + 0x1cef12),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog(pcVar13,acStack_11c);
  (**(code **)(**(int **)(this + 0x6c) + 0x14))
            (*(int **)(this + 0x6c),*(int *)(*(int *)(this + 0x68) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x68) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
  piVar11 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar11 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001cefb0),0x22,false);
  *(CImage **)(this + 0x98) = pCVar3;
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001cefb0),8,false);
  *(CImage **)(this + 0x9c) = pCVar7;
  pCVar8 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001cefb0),0x10,false);
  *(CImage **)(this + 0xa0) = pCVar8;
  this_01 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog(this_01,pCVar3,pCVar7,pCVar8,1,extraout_s0_02,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x90) = this_01;
  (*pcVar10)(piVar11,this_01);
  piVar11 = *(int **)(this + 0x90);
  (**(code **)(*piVar11 + 0x1c))(piVar11,0x12);
  piVar11 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar11 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001cf154),0x22,false);
  *(CImage **)(this + 0xa8) = pCVar3;
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001cf154),8,false);
  *(CImage **)(this + 0xac) = pCVar7;
  this_02 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(this_02,pCVar3,pCVar7,extraout_s0_03);
  *(NoticeDialog **)(this + 0xa4) = this_02;
  (*pcVar10)(piVar11,this_02);
  piVar11 = *(int **)(this + 0xa4);
  (**(code **)(*piVar11 + 0x1c))(piVar11,0x12);
  if (local_1c != **(int **)(iVar9 + DAT_001cf158)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


