/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00294988 GameStateSpecialSale::init */

/* GameStateSpecialSale::init() */

void __thiscall GameStateSpecialSale::init(GameStateSpecialSale *this)

{
  int iVar1;
  undefined4 uVar2;
  ScreenElement *this_00;
  SpecialSaleBg *this_01;
  CImage *pCVar3;
  ImageElement *pIVar4;
  TrueTypeTextElement *pTVar5;
  ZCImageButton *pZVar6;
  String *this_02;
  InputStream *pIVar7;
  Character *pCVar8;
  CharacterInstance *this_03;
  HCOManager *this_04;
  CImage *pCVar9;
  ConfirmDialog *this_05;
  NoticeDialog *this_06;
  int iVar10;
  int iVar11;
  GameStateSpecialSale *pGVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  code *pcVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar40;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar41;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  int *piVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  int *piVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  int *piVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  int *piVar39;
  
  iVar11 = DAT_00294a50;
  iVar1 = DAT_00294a3c;
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  piVar20 = (int *)(&stack0xffffffec + DAT_00294a3c);
  puVar21 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar23 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar25 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar26 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar27 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  piVar28 = (int *)(&stack0xffffffec + DAT_00294a3c);
  puVar29 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar30 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  piVar31 = (int *)(&stack0xffffffec + DAT_00294a3c);
  puVar32 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar33 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar34 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar35 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar36 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar37 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_00294a3c);
  piVar39 = (int *)(&stack0xffffffec + DAT_00294a3c);
  iVar10 = *(int *)(this + 0xc);
  iVar15 = DAT_00294a44 + 0x29499c;
  *(int *)(&stack0x00000004 + DAT_00294a3c) = iVar15;
  *(undefined4 *)(&stack0xffffffec + DAT_00294a48 + DAT_00294a3c) =
       **(undefined4 **)(iVar15 + DAT_00294a40);
  *(undefined4 *)(iVar10 + DAT_00294a4c) = 0xd;
  L_PrintLog((char *)(iVar11 + 0x2949b2),(char *)(DAT_00294a54 + 0x2949b4));
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  iVar11 = DAT_00294a5c;
  piVar17 = *(int **)(iVar15 + DAT_00294a58);
  iVar15 = *piVar17;
  iVar10 = SmDev();
  uVar2 = FontManager::addFont
                    (iVar15,SUB41(*(undefined4 *)(iVar11 + 0x2949d8 + iVar10 * 4 + 0x2c),0));
  *(undefined4 *)(this + 0x1c) = uVar2;
  iVar15 = *piVar17;
  iVar10 = SmDev();
  uVar2 = FontManager::addFont
                    (iVar15,SUB41(*(undefined4 *)(iVar11 + 0x2949d8 + iVar10 * 4 + 0x44),0));
  iVar11 = DAT_00294a60;
  *(undefined4 *)(this + 0x20) = uVar2;
  *(undefined4 *)(this + iVar11) = 0xffffffff;
  piVar17 = (int *)JSONGetGameInfo::getInstance();
  if (*piVar17 == 99) {
    *(undefined4 *)(this + iVar11) = 99;
  }
  else {
    piVar17 = (int *)JSONGetGameInfo::getInstance();
    iVar11 = 0;
    if (*piVar17 != -1) {
      for (; iVar11 < *(int *)(*(int *)(this + 0xc) + DAT_00294e04 + 4) + 1; iVar11 = iVar11 + 1) {
        iVar10 = *(int *)(iVar11 * 0x5d8 + *(int *)(*(int *)(this + 0xc) + DAT_00294e04 + 8));
        piVar17 = (int *)JSONGetGameInfo::getInstance();
        if (iVar10 == *piVar17) {
          *(int *)(this + DAT_00294a60) = iVar11;
          break;
        }
      }
    }
  }
  this_00 = (ScreenElement *)operator_new(0x60);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 9;
  *puVar19 = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  ScreenElement::ScreenElement
            (this_00,0,0,0,*piVar20,(&stack0xfffffff0)[iVar1],
             *(ScreenElement **)(&stack0xfffffff4 + iVar1));
  *(ScreenElement **)(this + 0x18) = this_00;
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*(int *)this_00 + 0x2c);
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00294e08),2,false);
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
  this_01 = (SpecialSaleBg *)operator_new(0x9c);
  *puVar21 = DAT_00294e0c;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0x12;
  SpecialSaleBg::SpecialSaleBg
            (this_01,*(CImage **)(&stack0x00000008 + iVar1),extraout_s0,extraout_s1,0x40000000,'\0')
  ;
  *(SpecialSaleBg **)(this + 0x44) = this_01;
  (**(code **)(&stack0x00000000 + iVar1))(this_00,this_01);
  piVar17 = *(int **)(this + 0x18);
  iVar11 = *(int *)(this + 0xc);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar17 + 0x2c);
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_00294e10),0x22,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 0x50) = pIVar4;
  (**(code **)(&stack0x00000000 + iVar1))(piVar17,pIVar4);
  piVar17 = *(int **)(this + 0x18);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar17 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00294e08),0x19,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  *puVar22 = 0x12;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_00,extraout_s1_00,'\0',false);
  *(ImageElement **)(this + 0x48) = pIVar4;
  (**(code **)(&stack0x00000000 + iVar1))(piVar17,pIVar4);
  piVar17 = *(int **)(this + 0x18);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar17 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00294e08),0x36,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',false);
  pcVar16 = *(code **)(&stack0x00000000 + iVar1);
  *(ImageElement **)(this + 0x4c) = pIVar4;
  uVar41 = (*pcVar16)(piVar17,pIVar4);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x4c),(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
  String::String((String *)(&stack0x00000014 + iVar1));
  piVar17 = *(int **)(this + 0x18);
  pcVar16 = *(code **)(*piVar17 + 0x2c);
  String::String((String *)(&stack0x0000001c + iVar1),(String *)(&stack0x00000014 + iVar1));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar23 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x0000001c + iVar1,*(undefined4 *)(this + 0x20),DAT_00294e14);
  *(TrueTypeTextElement **)(this + 0x84) = pTVar5;
  (*pcVar16)(piVar17,pTVar5);
  String::~String((String *)(&stack0x0000001c + iVar1));
  piVar17 = *(int **)(*(int *)(&stack0x00000004 + iVar1) + DAT_00294e18);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x84));
  L_PrintLog((char *)(DAT_00294e1c + 0x294be2),(char *)(DAT_00294e20 + 0x294be4));
  sprintf(&stack0x000000b4 + iVar1,(char *)(DAT_00294e24 + 0x294bf2),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(DAT_00294e28 + 0x294bfe),&stack0x000000b4 + iVar1);
  String::String((String *)(&stack0x00000024 + iVar1),(char *)(DAT_00294e2c + 0x294c08));
  String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000024 + iVar1);
  String::~String((String *)(&stack0x00000024 + iVar1));
  piVar18 = *(int **)(this + 0x18);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar18 + 0x2c);
  String::String((String *)(&stack0x0000002c + iVar1),(String *)(&stack0x00000014 + iVar1));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar24 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x0000002c + iVar1,*(undefined4 *)(this + 0x20),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x88) = pTVar5;
  (**(code **)(&stack0x00000000 + iVar1))(piVar18,pTVar5);
  String::~String((String *)(&stack0x0000002c + iVar1));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x88));
  L_PrintLog((char *)(DAT_00294e30 + 0x294c72),(char *)(DAT_00294e34 + 0x294c74));
  sprintf(&stack0x000000b4 + iVar1,(char *)(DAT_00294e38 + 0x294c82),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(DAT_00294e3c + 0x294c8e),&stack0x000000b4 + iVar1);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00294e08),0x26,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 0x2c) = pIVar4;
  iVar11 = SmDev();
  *(undefined4 *)(pIVar4 + 0x68) = *(undefined4 *)(DAT_00294e40 + iVar11 * 4 + 0x294cf8);
  iVar15 = *(int *)(this + 0x2c);
  iVar10 = SmDev();
  iVar11 = DAT_00294e08;
  *(undefined4 *)(iVar15 + 0x6c) = *(undefined4 *)(DAT_00294e44 + iVar10 * 4 + 0x294d24);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar11),0x1f,false);
  iVar11 = SmDev();
  uVar2 = *(undefined4 *)(DAT_00294e48 + iVar11 * 4 + 0x294d4e);
  pIVar4 = (ImageElement *)operator_new(0x98);
  *puVar25 = 0x12;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_01,extraout_s1_01,(uchar)uVar2,false);
  iVar11 = DAT_00294e08;
  *(ImageElement **)(this + 0x54) = pIVar4;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar11),0x1f,false);
  iVar11 = SmDev();
  uVar2 = *(undefined4 *)(DAT_00294e4c + iVar11 * 4 + 0x294d8a);
  pIVar4 = (ImageElement *)operator_new(0x98);
  *puVar26 = 0x12;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_02,extraout_s1_02,(uchar)uVar2,false);
  *(ImageElement **)(this + 0x58) = pIVar4;
  pIVar4[0x60] = (ImageElement)0x1;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00294e50),10,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
  *puVar27 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  ZCImageButton::ZCImageButton
            (pZVar6,'\x12',pCVar3,(CImage *)0x0,*piVar28,*(int *)(&stack0xfffffff0 + iVar1),
             (bool)(&stack0xfffffff4)[iVar1]);
  *(ZCImageButton **)(this + 0x7c) = pZVar6;
  (**(code **)(**(int **)(this + 0x18) + 0x2c))(*(int **)(this + 0x18),pZVar6);
  iVar11 = *(int *)(this + DAT_00294e54);
  if (iVar11 == -1) {
    String::String((String *)(&stack0x00000054 + iVar1),(char *)(DAT_00295214 + 0x294e68));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000054 + iVar1);
    this_02 = (String *)(&stack0x00000054 + iVar1);
  }
  else if (iVar11 == 99) {
    JSONGetGameInfo::getInstance();
    String::valueOf((int)(&stack0x00000034 + iVar1));
    String::String((String *)(&stack0x0000003c + iVar1),(char *)(DAT_00294e58 + 0x294daa));
    String::operator+((String *)(&stack0x00000044 + iVar1),&stack0x00000034 + iVar1,
                      &stack0x0000003c + iVar1);
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000044 + iVar1);
    String::~String((String *)(&stack0x00000044 + iVar1));
    String::~String((String *)(&stack0x0000003c + iVar1));
    this_02 = (String *)(&stack0x00000034 + iVar1);
  }
  else {
    memcpy(&stack0x000001b4 + iVar1,
           (void *)(*(int *)(*(int *)(this + 0xc) + DAT_00294e04 + 8) + iVar11 * 0x5d8),0x5d8);
    strcpy(&stack0x000000b4 + iVar1,&stack0xffffffec + DAT_00294e5c + iVar1);
    String::String((String *)(&stack0x0000004c + iVar1),&stack0x000000b4 + iVar1);
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x0000004c + iVar1);
    this_02 = (String *)(&stack0x0000004c + iVar1);
  }
  String::~String(this_02);
  piVar17 = *(int **)(this + 0x7c);
  pcVar16 = *(code **)(*piVar17 + 0x2c);
  String::String((String *)(&stack0x0000005c + iVar1),(String *)(&stack0x00000014 + iVar1));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar29 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x12;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x0000005c + iVar1,*(undefined4 *)(this + 0x20),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x80) = pTVar5;
  (*pcVar16)(piVar17,pTVar5);
  String::~String((String *)(&stack0x0000005c + iVar1));
  piVar17 = *(int **)(*(int *)(&stack0x00000004 + iVar1) + DAT_00295218);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x80));
  L_PrintLog((char *)(DAT_0029521c + 0x294ed0),(char *)(DAT_00295220 + 0x294ed2));
  sprintf(&stack0x000000b4 + iVar1,(char *)(DAT_00295224 + 0x294ee0),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(DAT_00295228 + 0x294eec),&stack0x000000b4 + iVar1);
  piVar18 = *(int **)(this + 0x18);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar18 + 0x2c);
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0029522c),3,false);
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
  pCVar3 = *(CImage **)(&stack0x00000008 + iVar1);
  *puVar30 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  ZCImageButton::ZCImageButton
            (pZVar6,'$',pCVar3,(CImage *)0x0,*piVar31,*(int *)(&stack0xfffffff0 + iVar1),
             (bool)(&stack0xfffffff4)[iVar1]);
  *(ZCImageButton **)(this + 0x78) = pZVar6;
  (**(code **)(&stack0x00000000 + iVar1))(piVar18,pZVar6);
  piVar18 = *(int **)(this + 0x18);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar18 + 0x2c);
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00295230),0x18,false);
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,*(CImage **)(&stack0x00000008 + iVar1),'\x12',true);
  *(ImageElement **)(this + 100) = pIVar4;
  (**(code **)(&stack0x00000000 + iVar1))(piVar18,pIVar4);
  String::String((String *)(&stack0x00000064 + iVar1),(char *)(DAT_00295234 + 0x294f66));
  String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000064 + iVar1);
  String::~String((String *)(&stack0x00000064 + iVar1));
  piVar18 = *(int **)(this + 0x18);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar18 + 0x2c);
  String::String((String *)(&stack0x0000006c + iVar1),(String *)(&stack0x00000014 + iVar1));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar32 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 10;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x0000006c + iVar1,*(undefined4 *)(this + 0x20),0xffffffff);
  *(TrueTypeTextElement **)(this + 0x68) = pTVar5;
  (**(code **)(&stack0x00000000 + iVar1))(piVar18,pTVar5);
  String::~String((String *)(&stack0x0000006c + iVar1));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x68));
  L_PrintLog((char *)(DAT_00295238 + 0x294fc8),(char *)(DAT_0029523c + 0x294fca));
  sprintf(&stack0x000000b4 + iVar1,(char *)(DAT_00295240 + 0x294fd8),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(DAT_00295244 + 0x294fe4),&stack0x000000b4 + iVar1);
  iVar11 = JSONGetGameInfo::getInstance();
  if ((*(int *)(iVar11 + 0x14) < 1) || (*(int *)(this + DAT_00295248) == 99)) {
    (**(code **)(**(int **)(this + 100) + 0x20))(*(int **)(this + 100),0);
    (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
  }
  else {
    JSONGetGameInfo::getInstance();
    String::valueOf((int)(&stack0x00000074 + iVar1));
    String::String((String *)(&stack0x0000007c + iVar1),(char *)(DAT_0029524c + 0x295010));
    String::operator+((String *)(&stack0x00000084 + iVar1),&stack0x00000074 + iVar1,
                      &stack0x0000007c + iVar1);
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000084 + iVar1);
    String::~String((String *)(&stack0x00000084 + iVar1));
    String::~String((String *)(&stack0x0000007c + iVar1));
    String::~String((String *)(&stack0x00000074 + iVar1));
    piVar17 = *(int **)(this + 0x68);
    pcVar16 = *(code **)(*piVar17 + 0x44);
    String::String((String *)(&stack0x0000008c + iVar1),(String *)(&stack0x00000014 + iVar1));
    (*pcVar16)(piVar17,&stack0x0000008c + iVar1);
    String::~String((String *)(&stack0x0000008c + iVar1));
  }
  piVar17 = *(int **)(this + 0x18);
  iVar11 = *(int *)(this + 0xc);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar17 + 0x2c);
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_00295230),0x1a,false);
  iVar11 = SmDev();
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(DAT_00295250 + iVar11 * 4 + 0x2950f4);
  iVar11 = SmDev();
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(DAT_00295254 + iVar11 * 4 + 0x295104);
  pIVar4 = (ImageElement *)operator_new(0x98);
  *puVar33 = 0x14;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  ImageElement::ImageElement
            (pIVar4,pCVar3,extraout_s0_03,extraout_s1_03,
             (uchar)*(undefined4 *)(&stack0x00000008 + iVar1),
             SUB41(*(undefined4 *)(&stack0x0000000c + iVar1),0));
  *(ImageElement **)(this + 0x70) = pIVar4;
  (**(code **)(&stack0x00000000 + iVar1))(piVar17,pIVar4);
  piVar17 = *(int **)(this + 0x18);
  iVar11 = *(int *)(this + 0xc);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(*piVar17 + 0x2c);
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_00295258),0x1c,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  *puVar34 = 0xc;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_04,extraout_s1_04,'\0',false);
  *(ImageElement **)(this + 0x6c) = pIVar4;
  (**(code **)(&stack0x00000000 + iVar1))(piVar17,pIVar4);
  String::String((String *)(&stack0x00000094 + iVar1),(char *)(DAT_0029525c + 0x2950fe));
  String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000094 + iVar1);
  String::~String((String *)(&stack0x00000094 + iVar1));
  piVar17 = *(int **)(this + 0x18);
  pcVar16 = *(code **)(*piVar17 + 0x2c);
  String::String((String *)(&stack0x0000009c + iVar1),(String *)(&stack0x00000014 + iVar1));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  uVar2 = *(undefined4 *)(this + 0x20);
  uVar14 = **(undefined4 **)(*(int *)(&stack0x00000004 + iVar1) + DAT_00295260);
  *puVar35 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x12;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  TrueTypeTextElement::TrueTypeTextElement(pTVar5,&stack0x0000009c + iVar1,uVar2,uVar14);
  *(TrueTypeTextElement **)(this + 0x74) = pTVar5;
  (*pcVar16)(piVar17,pTVar5);
  String::~String((String *)(&stack0x0000009c + iVar1));
  piVar17 = *(int **)(*(int *)(&stack0x00000004 + iVar1) + DAT_00295218);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(this + 0x74));
  L_PrintLog((char *)(DAT_00295264 + 0x295168),(char *)(DAT_00295268 + 0x29516a));
  sprintf(&stack0x000000b4 + iVar1,(char *)(DAT_0029526c + 0x295178),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(DAT_00295270 + 0x295184),&stack0x000000b4 + iVar1);
  iVar11 = 0;
  pGVar12 = this;
  do {
    *(undefined4 *)(pGVar12 + 0x220) = 0;
    iVar10 = iVar11 + 0x3b0;
    iVar11 = iVar11 + 1;
    this[iVar10] = (GameStateSpecialSale)0x0;
    pGVar12 = pGVar12 + 4;
  } while (iVar11 != 100);
  ZombieCafe::loadRecipeImages(*(ZombieCafe **)(this + 0xc));
  String::String((String *)(&stack0x000000a4 + iVar1),
                 *(String **)(*(int *)(&stack0x00000004 + iVar1) + DAT_00295274));
  pIVar7 = (InputStream *)SaveDataInputStream::open(&stack0x000000a4 + iVar1);
  String::~String((String *)(&stack0x000000a4 + iVar1));
  uVar2 = Cafe::deserialize(pIVar7,false,(ZombieCafe *)0x0);
  *(undefined4 *)(this + 0x8c) = uVar2;
  if (pIVar7 != (InputStream *)0x0) {
    (**(code **)(*(int *)pIVar7 + 0xc))(pIVar7);
    (**(code **)(*(int *)pIVar7 + 4))(pIVar7);
  }
  iVar10 = JSONGetGameInfo::getInstance();
  iVar11 = DAT_0029527c;
  *(undefined4 *)(this + DAT_00295278) = *(undefined4 *)(iVar10 + 0x18);
  *(undefined4 *)(this + iVar11) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar1) = 0;
  *(undefined4 *)(this + 0x418) = 0;
  this[0x420] = (GameStateSpecialSale)0x0;
  pGVar12 = this + 0x90;
  *(int *)(&stack0x0000000c + iVar1) = DAT_00295280 + 0x295212;
  while (iVar11 = DAT_002955f8, *(int *)(&stack0x00000000 + iVar1) < *(int *)(this + DAT_002955f0))
  {
    iVar11 = JSONGetGameInfo::getInstance();
    iVar10 = *(int *)(&stack0x00000000 + iVar1) * 4;
    uVar13 = *(uint *)(*(int *)(iVar11 + 0x1c) + iVar10);
    this[*(int *)(&stack0x00000000 + iVar1) + 0x3b0] = SUB41(uVar13,0);
    if ((uVar13 & 0xff) == 0) {
      iVar15 = *(int *)(*(int *)(this + 0xc) + DAT_002955e4);
      iVar11 = JSONGetGameInfo::getInstance();
      *(undefined4 *)(&stack0x00000010 + iVar1) =
           *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x20) + iVar10) * 4 + iVar15);
      String::String((String *)(&stack0x000000ac + iVar1),*(char **)(&stack0x0000000c + iVar1));
      pCVar8 = (Character *)operator_new(0x6c);
      uVar2 = *(undefined4 *)(&stack0x00000010 + iVar1);
      *(Character **)(&stack0x00000008 + iVar1) = pCVar8;
      *puVar36 = (String *)(&stack0x000000ac + iVar1);
      Character::Character(pCVar8,uVar2,2,1);
      *(undefined4 *)pGVar12 = *(undefined4 *)(&stack0x00000008 + iVar1);
      String::~String((String *)(&stack0x000000ac + iVar1));
      iVar15 = *(int *)pGVar12;
      iVar11 = JSONGetGameInfo::getInstance();
      *(char *)(iVar15 + 0x36) = (char)*(undefined4 *)(*(int *)(iVar11 + 0x28) + iVar10);
      iVar15 = *(int *)pGVar12;
      iVar11 = JSONGetGameInfo::getInstance();
      *(uint *)(iVar15 + 0x58) = (uint)*(byte *)(*(int *)(iVar11 + 0x2c) + iVar10);
      iVar15 = *(int *)pGVar12;
      iVar11 = JSONGetGameInfo::getInstance();
      *(uint *)(iVar15 + 0x28) = (uint)*(byte *)(*(int *)(iVar11 + 0x24) + iVar10);
      iVar11 = *(int *)pGVar12;
      if (((*(char *)(iVar11 + 0x36) != '\0') || (*(int *)(iVar11 + 0x58) != 0)) ||
         (*(int *)(iVar11 + 0x28) != 0)) {
        this[0x420] = (GameStateSpecialSale)0x1;
      }
      fVar40 = (float)SmDev();
      this_03 = (CharacterInstance *)createCharacterInstance((Character *)this,fVar40);
      *(CharacterInstance **)(pGVar12 + 400) = this_03;
      CharacterInstance::setCurrentAnimation(this_03,'\x01','\x01',true);
      *(int *)(this + DAT_002955ec) = *(int *)(this + DAT_002955ec) + 1;
    }
    else {
      iVar15 = *(int *)(*(int *)(this + 0x8c) + 0x94);
      iVar11 = JSONGetGameInfo::getInstance();
      uVar2 = createFurniture(this,*(FurnitureData **)
                                    (*(int *)(*(int *)(iVar11 + 0x20) + iVar10) * 4 + iVar15));
      *(undefined4 *)(pGVar12 + 400) = uVar2;
      *(int *)(this + 0x418) = *(int *)(this + 0x418) + 1;
    }
    pGVar12 = pGVar12 + 4;
    *(int *)(&stack0x00000000 + iVar1) = *(int *)(&stack0x00000000 + iVar1) + 1;
  }
  this[DAT_002955f4] = (GameStateSpecialSale)0x0;
  *(undefined4 *)(this + 0x428) = 10;
  *(undefined4 *)(this + DAT_002955fc) = 0;
  *(undefined4 *)(this + 0x430) = 0;
  sendMalta(this,(char *)(iVar11 + 0x2953ae));
  this_04 = (HCOManager *)HCOManager::getInstance();
  fVar40 = (float)HCOManager::setFirstDisplay(this_04,true);
  *puVar37 = 1;
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,0xc,fVar40,false);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00295600),0x22,false);
  iVar11 = DAT_00295600;
  *(CImage **)(this + DAT_00295604) = pCVar3;
  pCVar9 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar11),8,false)
  ;
  *(CImage **)(this + 0x440) = pCVar9;
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00295600),0x10,false);
  *(undefined4 *)(&stack0x00000000 + iVar1) = uVar2;
  *(undefined4 *)(this + DAT_00295608) = uVar2;
  this_05 = (ConfirmDialog *)operator_new(0x9c);
  *puVar38 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0x3f800000;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  ConfirmDialog::ConfirmDialog
            (this_05,pCVar3,pCVar9,*(CImage **)(&stack0x00000000 + iVar1),*piVar39,extraout_s0_05,
             *(CImage **)(&stack0xfffffff0 + iVar1));
  *(ConfirmDialog **)(this + 0x438) = this_05;
  (**(code **)(*(int *)this_05 + 0x1c))(this_05,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x438),100);
  iVar11 = DAT_00295600;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00295600),0x22,false);
  *(CImage **)(this + DAT_0029560c) = pCVar3;
  pCVar9 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar11),8,false)
  ;
  *(CImage **)(this + 0x450) = pCVar9;
  this_06 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(this_06,pCVar3,pCVar9,extraout_s0_06);
  *(NoticeDialog **)(this + 0x448) = this_06;
  (**(code **)(*(int *)this_06 + 0x1c))(this_06,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x448),0x66);
  iVar10 = DAT_00295614;
  iVar11 = DAT_00295610;
  *(undefined4 *)(this + 0x14) = 0;
  L_PrintLog((char *)(iVar11 + 0x2954a8),(char *)(iVar10 + 0x2954aa));
  String::~String((String *)(&stack0x00000014 + iVar1));
  if (*(int *)(&stack0xffffffec + DAT_0029561c + iVar1) !=
      **(int **)(*(int *)(&stack0x00000004 + iVar1) + DAT_00295618)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


