/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001706f0 GameStateMeetLocker::init */

/* GameStateMeetLocker::init() */

void __thiscall GameStateMeetLocker::init(GameStateMeetLocker *this)

{
  GameStateMeetLocker GVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ScreenElement *this_00;
  CImage *pCVar5;
  ImageElement *pIVar6;
  ZCImageButton *pZVar7;
  BitmapTextElement *pBVar8;
  CharacterInstance *this_01;
  undefined4 uVar9;
  CImage *pCVar10;
  CImage *pCVar11;
  ConfirmDialog *this_02;
  NoticeDialog *this_03;
  int *piVar12;
  int iVar13;
  code *pcVar14;
  undefined4 uVar15;
  Character *this_04;
  GameStateMeetLocker *pGVar16;
  int iVar17;
  ImageButton *pIVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar19;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar20;
  GameStateMeetLocker *local_1ac;
  String aSStack_198 [8];
  String aSStack_190 [8];
  String aSStack_188 [8];
  String aSStack_180 [8];
  String aSStack_178 [8];
  String aSStack_170 [8];
  String aSStack_168 [8];
  String aSStack_160 [8];
  String aSStack_158 [8];
  String aSStack_150 [8];
  String aSStack_148 [8];
  String aSStack_140 [8];
  StringBuffer aSStack_138 [28];
  char acStack_11c [256];
  int local_1c;
  
  iVar2 = DAT_00170ad0 + 0x1706fe;
  local_1c = **(int **)(iVar2 + DAT_00170ad4);
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  iVar13 = DAT_00170ae0;
  piVar12 = *(int **)(*(int *)(*(int *)(this + 0xc) + DAT_00170ad8) + 0x14);
  if (piVar12 != (int *)0x0) {
    piVar12 = (int *)*piVar12;
  }
  sprintf(acStack_11c,(char *)(DAT_00170adc + 0x170722),piVar12);
  L_PrintLog((char *)(DAT_00170ae4 + 0x17072e),acStack_11c);
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  piVar12 = *(int **)(iVar2 + DAT_00170ae8);
  iVar17 = *piVar12;
  iVar3 = SmDev();
  uVar4 = FontManager::addFont
                    (iVar17,SUB41(*(undefined4 *)(iVar13 + 0x17072c + iVar3 * 4 + 0x20),0));
  *(undefined4 *)(this + 0x18) = uVar4;
  iVar17 = *piVar12;
  iVar3 = SmDev();
  uVar4 = FontManager::addFont
                    (iVar17,SUB41(*(undefined4 *)(iVar13 + 0x17072c + iVar3 * 4 + 0x38),0));
  *(undefined4 *)(this + 0x1c) = uVar4;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  pcVar14 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170ad8),2,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x48) = pIVar6;
  (*pcVar14)(this_00,pIVar6);
  piVar12 = *(int **)(this + 0x14);
  pcVar14 = *(code **)(*piVar12 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170aec),0x22,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0_00,extraout_s1_00,(uchar)DAT_00170af0,SUB41(DAT_00170af4,0));
  *(ImageElement **)(this + 0x54) = pIVar6;
  (*pcVar14)(piVar12,pIVar6);
  piVar12 = *(int **)(this + 0x14);
  pcVar14 = *(code **)(*piVar12 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170ad8),10,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_01,extraout_s1_01,'\0',false);
  *(ImageElement **)(this + 0x4c) = pIVar6;
  (*pcVar14)(piVar12,pIVar6);
  piVar12 = *(int **)(this + 0x14);
  pcVar14 = *(code **)(*piVar12 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170ad8),0xb,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,'\x12',false);
  *(ImageElement **)(this + 0x50) = pIVar6;
  uVar20 = (*pcVar14)(piVar12,pIVar6);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x50),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  pGVar16 = this;
  do {
    piVar12 = *(int **)(this + 0x14);
    pcVar14 = *(code **)(*piVar12 + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170ad8),0xc,false)
    ;
    pIVar6 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar6,pCVar5,'\x12',true);
    *(ImageElement **)(pGVar16 + 0x58) = pIVar6;
    (*pcVar14)(piVar12,pIVar6);
    pGVar16 = pGVar16 + 4;
  } while (pGVar16 != this + 0x28);
  L_PrintLog((char *)(DAT_00170af8 + 0x1708cc),(char *)(DAT_00170afc + 0x1708ce));
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170ad8),8,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x14',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x90) = pZVar7;
  pcVar14 = *(code **)(*(int *)pZVar7 + 0x2c);
  String::String(aSStack_198,(char *)(DAT_00170b00 + 0x17090a));
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_198,*(undefined4 *)(*(int *)(this + 0xc) + DAT_00170b04),0xffffffff,1,1,
             0x12,0,0);
  *(BitmapTextElement **)(this + 0x94) = pBVar8;
  (*pcVar14)(pZVar7,pBVar8);
  String::~String(aSStack_198);
  iVar13 = *(int *)(this + 0x90);
  FUN_0016f99c(*(undefined4 *)(this + 0x94),
               ((int)*(short *)(iVar13 + 0xc) >> 1) << 0x10 |
               (int)*(short *)(iVar13 + 0x10) >> 1 & 0xffffU);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x90))
  ;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170ad8),8,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x14',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x98) = pZVar7;
  pcVar14 = *(code **)(*(int *)pZVar7 + 0x2c);
  String::String(aSStack_190,(char *)(DAT_00170b08 + 0x1709b6));
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_190,*(undefined4 *)(*(int *)(this + 0xc) + DAT_00170b04),0xffffffff,1,1,
             0x12,0,0);
  *(BitmapTextElement **)(this + 0x9c) = pBVar8;
  (*pcVar14)(pZVar7,pBVar8);
  String::~String(aSStack_190);
  iVar13 = *(int *)(this + 0x98);
  FUN_0016f99c(*(undefined4 *)(this + 0x9c),
               ((int)*(short *)(iVar13 + 0xc) >> 1) << 0x10 |
               (int)*(short *)(iVar13 + 0x10) >> 1 & 0xffffU);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x98))
  ;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170ad8),8,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x14',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xa0) = pZVar7;
  pcVar14 = *(code **)(*(int *)pZVar7 + 0x2c);
  String::String(aSStack_188,(char *)(DAT_00170b0c + 0x170a66));
  iVar3 = *(int *)(this + 0xc);
  iVar13 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_00170b10 + iVar13 * 4 + 0x170abc) + 0x136) * 4 + iVar3);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_188,uVar4,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xa4) = pBVar8;
  (*pcVar14)(pZVar7,pBVar8);
  String::~String(aSStack_188);
  iVar13 = *(int *)(this + 0xa0);
  FUN_0016f99c(*(undefined4 *)(this + 0xa4),
               ((int)*(short *)(iVar13 + 0xc) >> 1) << 0x10 |
               (int)*(short *)(iVar13 + 0x10) >> 1 & 0xffffU);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0xa0))
  ;
  L_PrintLog((char *)(DAT_00170f10 + 0x170b3e),(char *)(DAT_00170f14 + 0x170b40));
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170f18),8,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x14',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xa8) = pZVar7;
  pcVar14 = *(code **)(*(int *)pZVar7 + 0x2c);
  String::String(aSStack_180,(char *)(DAT_00170f1c + 0x170b7c));
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_180,*(undefined4 *)(*(int *)(this + 0xc) + DAT_00170f20),0xffffffff,1,1,
             0x12,0,0);
  *(BitmapTextElement **)(this + 0xac) = pBVar8;
  (*pcVar14)(pZVar7,pBVar8);
  String::~String(aSStack_180);
  iVar13 = *(int *)(this + 0xa8);
  FUN_0016f99c(*(undefined4 *)(this + 0xac),
               ((int)*(short *)(iVar13 + 0xc) >> 1) << 0x10 |
               (int)*(short *)(iVar13 + 0x10) >> 1 & 0xffffU);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0xa8))
  ;
  piVar12 = *(int **)(this + 0x14);
  pcVar14 = *(code **)(*piVar12 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170f18),3,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x8c) = pZVar7;
  (*pcVar14)(piVar12,pZVar7);
  piVar12 = *(int **)(this + 0x14);
  pcVar14 = *(code **)(*piVar12 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170f24),0x116,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  pGVar16 = this + 0xb0;
  *(ZCImageButton **)pGVar16 = pZVar7;
  (*pcVar14)(piVar12,pZVar7);
  pIVar18 = *(ImageButton **)pGVar16;
  SmDev();
  uVar20 = SmDev();
  ImageButton::setScale(pIVar18,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  (**(code **)(**(int **)pGVar16 + 0x14))(*(int **)pGVar16,10,10);
  piVar12 = *(int **)(this + 0x14);
  iVar13 = *(int *)(*(int *)pGVar16 + 0xc);
  pcVar14 = *(code **)(*piVar12 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170f24),DAT_00170f2c,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\t',pCVar5,(CImage *)0x0,0,0,true);
  pGVar16 = this + 0xb4;
  *(ZCImageButton **)pGVar16 = pZVar7;
  (*pcVar14)(piVar12,pZVar7);
  pIVar18 = *(ImageButton **)pGVar16;
  SmDev();
  uVar20 = SmDev();
  ImageButton::setScale(pIVar18,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  (**(code **)(**(int **)pGVar16 + 0x14))(*(int **)pGVar16,iVar13 + 10,10);
  (**(code **)(**(int **)pGVar16 + 0x20))(*(int **)pGVar16,1);
  piVar12 = *(int **)(this + 0x14);
  pcVar14 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_178,(char *)(DAT_00170f34 + 0x170d30));
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_178,*(undefined4 *)(*(int *)(this + 0xc) + DAT_00170f20),0xffffffff,1,1,
             0x11,0,0);
  *(BitmapTextElement **)(this + 0x38) = pBVar8;
  (*pcVar14)(piVar12,pBVar8);
  String::~String(aSStack_178);
  StringBuffer::StringBuffer(aSStack_138);
  String::valueOf((int)aSStack_170);
  StringBuffer::append(aSStack_138,aSStack_170);
  String::~String(aSStack_170);
  String::String(aSStack_168,(char *)(DAT_00170f38 + 0x170d9a));
  StringBuffer::append(aSStack_138,aSStack_168);
  String::~String(aSStack_168);
  String::valueOf((int)aSStack_160);
  StringBuffer::append(aSStack_138,aSStack_160);
  String::~String(aSStack_160);
  piVar12 = *(int **)(this + 0x38);
  pcVar14 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar14)(piVar12,aSStack_158);
  String::~String(aSStack_158);
  L_PrintLog((char *)(DAT_00170f3c + 0x170de8),(char *)(DAT_00170f40 + 0x170dea));
  piVar12 = *(int **)(this + 0x14);
  pcVar14 = *(code **)(*piVar12 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170f44),0x29,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,'!',true);
  *(ImageElement **)(this + 0x410) = pIVar6;
  (*pcVar14)(piVar12,pIVar6);
  piVar12 = *(int **)(this + 0x14);
  pcVar14 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_150,0);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_150,*(undefined4 *)(*(int *)(this + 0xc) + DAT_00170f20),0xffffffff,1,1,
             10,0,0);
  *(BitmapTextElement **)(this + DAT_00170f48) = pBVar8;
  (*pcVar14)(piVar12,pBVar8);
  String::~String(aSStack_150);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00170f44),0x26,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,'!',true);
  *(ImageElement **)(this + 0x418) = pIVar6;
  String::String(aSStack_148,0);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_148,*(undefined4 *)(*(int *)(this + 0xc) + DAT_00170f20),0xffffffff,1,1,
             0x12,0,0);
  iVar13 = DAT_00170f4c;
  *(BitmapTextElement **)(this + DAT_00170f4c) = pBVar8;
  String::~String(aSStack_148);
  piVar12 = *(int **)(this + iVar13);
  pcVar14 = *(code **)(*piVar12 + 0x44);
  String::valueOf((int)aSStack_140);
  (*pcVar14)(piVar12,aSStack_140);
  String::~String(aSStack_140);
  iVar13 = 0;
  while( true ) {
    iVar3 = *(int *)(this + 0xc);
    if (*(int *)(iVar3 + 0x5a4) + 1 <= iVar13) break;
    this_04 = *(Character **)(iVar13 * 4 + *(int *)(iVar3 + 0x5a8));
    if (this_04[4] == (Character)0x0) {
      Vector<Character*>::removeElementAt((Vector<Character*> *)(iVar3 + 0x5a0),iVar13);
      Character::~Character(this_04);
      iVar13 = iVar13 + -1;
      operator_delete(this_04);
    }
    iVar13 = iVar13 + 1;
  }
  L_PrintLog((char *)(DAT_00171274 + 0x170f6a),(char *)(DAT_00171278 + 0x170f6c));
  iVar13 = 0;
  do {
    iVar3 = iVar13 + 0xb8;
    iVar13 = iVar13 + 4;
    *(undefined4 *)(this + iVar3) = 0;
  } while (iVar13 != 0x348);
  local_1ac = this;
  for (iVar13 = 0; iVar3 = *(int *)(this + 0xc), iVar13 < *(int *)(iVar3 + 0x5a4) + 1;
      iVar13 = iVar13 + 1) {
    iVar3 = *(int *)(iVar13 * 4 + *(int *)(iVar3 + 0x5a8));
    if (*(char *)(iVar3 + 0x24) != '\0') {
      *(undefined1 *)(iVar3 + 0x24) = 0;
    }
    fVar19 = (float)SmDev();
    this_01 = (CharacterInstance *)createCharacterInstance((Character *)this,fVar19);
    *(CharacterInstance **)(local_1ac + 0xb8) = this_01;
    CharacterInstance::setCurrentAnimation(this_01,'\x1c','\x01',true);
    local_1ac = local_1ac + 4;
  }
  *(undefined4 *)(this + 0x400) = 0;
  *(undefined4 *)(this + DAT_00171280) = 0;
  piVar12 = *(int **)(this + 0x14);
  pcVar14 = *(code **)(*piVar12 + 0x2c);
  pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar3 + DAT_00171284),0x11c,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x11',pCVar5,(CImage *)0x0,0,0,false);
  iVar13 = DAT_00171288;
  *(ZCImageButton **)(this + DAT_00171288) = pZVar7;
  (*pcVar14)(piVar12,pZVar7);
  uVar20 = __mulsf3(*(undefined4 *)(this + 0x24),0x3fc00000);
  ImageButton::setScale
            (*(ImageButton **)(this + iVar13),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  iVar17 = *(int *)(this + 0x54);
  piVar12 = *(int **)(this + iVar13);
  uVar15 = *(undefined4 *)(this + 0x24);
  iVar3 = *piVar12;
  uVar4 = __floatsisf(*(int *)(iVar17 + 0xc) / 2 + *(int *)(iVar17 + 4));
  uVar9 = __mulsf3(uVar15,DAT_0017128c);
  __addsf3(uVar4,uVar9);
  uVar4 = __fixsfsi();
  uVar9 = __floatsisf(*(int *)(iVar17 + 8) - *(int *)(iVar17 + 0x10) / 2);
  uVar15 = __mulsf3(uVar15,DAT_00171290);
  __addsf3(uVar9,uVar15);
  uVar9 = __fixsfsi();
  (**(code **)(iVar3 + 0x14))(piVar12,uVar4,uVar9);
  (**(code **)(**(int **)(this + iVar13) + 0x20))(*(int **)(this + iVar13),0);
  iVar13 = DAT_00171294;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00171294),0x22,false);
  *(CImage **)(this + 0x430) = pCVar5;
  pCVar10 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar13),8,false);
  *(CImage **)(this + DAT_00171298) = pCVar10;
  pCVar11 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar13),0x10,false);
  *(CImage **)(this + 0x438) = pCVar11;
  this_02 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog(this_02,pCVar5,pCVar10,pCVar11,0,extraout_s0_02,(CImage *)0x3f800000)
  ;
  iVar3 = DAT_0017129c;
  *(ConfirmDialog **)(this + DAT_0017129c) = this_02;
  (**(code **)(*(int *)this_02 + 0x1c))(this_02,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + iVar3),100);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar13),0x22,false);
  *(CImage **)(this + 0x440) = pCVar5;
  pCVar10 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar13),8,false);
  *(CImage **)(this + DAT_001712a0) = pCVar10;
  this_03 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(this_03,pCVar5,pCVar10,extraout_s0_03);
  iVar13 = DAT_001712a4;
  *(NoticeDialog **)(this + DAT_001712a4) = this_03;
  (**(code **)(*(int *)this_03 + 0x1c))(this_03,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + iVar13),0x66);
  GVar1 = (GameStateMeetLocker)ZombieCafe::isLockerPresentFlag(*(ZombieCafe **)(this + 0xc));
  this[0x408] = GVar1;
  L_PrintLog((char *)(DAT_001712ac + 0x171178),(char *)(DAT_001712a8 + 0x171176));
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_138);
  if (local_1c != **(int **)(iVar2 + DAT_001712b0)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


